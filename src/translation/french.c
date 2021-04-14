#include "translation/common.h"
#include "translation/translation.h"

static translation_string all_strings[] = {
    {TR_NO_PATCH_TITLE, "Patch 1.0.1.0 manquant"},
    {TR_NO_PATCH_MESSAGE,
        "Votre installation de Cesar 3 ne contient pas le patch 1.0.1.0. "
        "Vous pouvez le télécharger depuis : \n"
        URL_PATCHES "\n"
        "Procédez à vos propres risques."},
    {TR_MISSING_FONTS_TITLE, "Polices manquantes"},
    {TR_MISSING_FONTS_MESSAGE,
        "Votre installation de Cesar 3 requiert des polices d'écriture supplémentaires. "
        "Vous pouvez les télécharger pour votre langue depuis : \n"
        URL_PATCHES},
    {TR_NO_EDITOR_TITLE, "Éditeur manquant"},
    {TR_NO_EDITOR_MESSAGE,
        "Votre installation de Cesar 3 ne contient pas le fichier éditeur. "
        "Vous pouvez le télécharger depuis : \n"
        URL_EDITOR},
    {TR_INVALID_LANGUAGE_TITLE, "Répertoire de langue invalide"},
    {TR_INVALID_LANGUAGE_MESSAGE,
        "Le répertoire que vous avez sélectionné ne contient pas de pack de langue valide. "
        "Veuillez consulter les erreurs dans le fichier de log."},
    {TR_BUILD_ALL_TEMPLES, "Tout"},
    {TR_BUTTON_OK, "OK"},
    {TR_BUTTON_CANCEL, "Annuler"},
    {TR_BUTTON_RESET_DEFAULTS, "Réinitialiser"},
    {TR_BUTTON_CONFIGURE_HOTKEYS, "Contrôles du clavier"},
    {TR_CONFIG_TITLE, "Options de configuration d'Augustus"},
    {TR_CONFIG_LANGUAGE_LABEL, "Langue :"},
    {TR_CONFIG_LANGUAGE_DEFAULT, "(par défaut)"},
    {TR_CONFIG_DISPLAY_SCALE, "Mise à l'échelle de l'affichage :"},
    {TR_CONFIG_CURSOR_SCALE, "Taille du curseur de souris :"},
    {TR_CONFIG_HEADER_UI_CHANGES, "Configuration de l'interface"},
    {TR_CONFIG_HEADER_GAMEPLAY_CHANGES, "Configuration du jeu"},
    {TR_CONFIG_SHOW_INTRO_VIDEO, "Jouer la vidéo d'introduction"},
    {TR_CONFIG_SIDEBAR_INFO, "Informations supplémentaires dans le panneau latéral"},
    {TR_CONFIG_SMOOTH_SCROLLING, "Activer le défilement doux"},
	{TR_CONFIG_DISABLE_MOUSE_EDGE_SCROLLING, "Désactiver le défilement de la carte sur le bord de la fenêtre "},
    {TR_CONFIG_DISABLE_RIGHT_CLICK_MAP_DRAG, "Désactiver le clic droit pour déplacer la vue de la cité"},
    {TR_CONFIG_VISUAL_FEEDBACK_ON_DELETE, "Améliore le retour visuel durant le dégagement du terrain"},
    {TR_CONFIG_ALLOW_CYCLING_TEMPLES, "Permet de construire tous les temples successivement"},
    {TR_CONFIG_SHOW_WATER_STRUCTURE_RANGE, "Voir la zone d'effet en plaçant les bâtiments de distribution d'eau"},
    {TR_CONFIG_SHOW_CONSTRUCTION_SIZE, "Voir la taille des constructions durant le glissement de la souris"},
    {TR_CONFIG_HIGHLIGHT_LEGIONS, "Mettre en surbrillance les légions au survol du curseur"},
    {TR_CONFIG_ROTATE_MANUALLY, "Rotation corps de garde et l'arc de triomphe par raccourci clavier"},
    {TR_CONFIG_SHOW_MILITARY_SIDEBAR, "Activer barre latérale militaire"},
    {TR_CONFIG_DISABLE_RIGHT_CLICK_MAP_DRAG, "Désactiver le glissement avec bouton droit de souris"},
    {TR_CONFIG_FIX_IMMIGRATION_BUG, "Corrige le bug d'immigration en mode très difficile"},
    {TR_CONFIG_FIX_100_YEAR_GHOSTS, "Corrige le bug des fantômes de 100 ans"},
    {TR_CONFIG_FIX_EDITOR_EVENTS, "Corrige \"Nouvel Empereur\" et la survie des parties créees avec l'éditeur"},
    {TR_CONFIG_DRAW_WALKER_WAYPOINTS, "Affiche l'itinéraire du marcheur en cliquant droit sur un bâtiment"},
    {TR_CONFIG_ENABLE_ZOOM, "Active le zoom (peut être lent et utilise plus de RAM)"},
    {TR_CONFIG_COMPLETE_RATING_COLUMNS, "Corrige les colonnes d'évaluation incomplètes"},
    {TR_CONFIG_GRANDFESTIVAL, "Les grandes fêtes permettent une bénédiction supplémentaire d'un dieu"},
    {TR_CONFIG_JEALOUS_GODS, "Déactive la jalousie des dieux"},
    {TR_CONFIG_GLOBAL_LABOUR, "Active la main-d'œuvre globale"},
    {TR_CONFIG_SCHOOL_WALKERS, "Augmente la couverture des écoliers"},
    {TR_CONFIG_RETIRE_AT_60, "Change l'âge de retraitre des citoyens de 50 à 60"},
    {TR_CONFIG_FIXED_WORKERS, "Corrige la force travail - 38% de la population"},
    {TR_CONFIG_EXTRA_FORTS, "Autorise la construction de 4 forts supplémentaires"},
    {TR_CONFIG_WOLVES_BLOCK, "Bloque la construction autour des loups"},
    {TR_CONFIG_DYNAMIC_GRANARIES, "Bloque les routes des greniers non connectées"},
    {TR_CONFIG_MORE_STOCKPILE, "Les maisons stockent plus de marchandises du marché"},
    {TR_CONFIG_NO_SUPPLIER_DISTRIBUTION, "Les acheteuses du marché ne distribuent pas les marchandises"},
    {TR_CONFIG_IMMEDIATELY_DELETE_BUILDINGS, "Destruction immédiate des bâtiments"},
    {TR_CONFIG_GETTING_GRANARIES_GO_OFFROAD, "Les charretiers peuvent faire du hors route"},
    {TR_CONFIG_GRANARIES_GET_DOUBLE, "Double la capacité des charretiers sortant des greniers"},
    {TR_CONFIG_TOWER_SENTRIES_GO_OFFROAD, "Les sentinelles de la tour n'ont plus besoin de route"},
    {TR_CONFIG_FARMS_DELIVER_CLOSE, "Fermes et quais ne livrent plus qu'aux grenier à proximité"},
    {TR_CONFIG_DELIVER_ONLY_TO_ACCEPTING_GRANARIES, "Fermes et quais ne livrent plus aux greniers demandeurs"},
    {TR_CONFIG_ALL_HOUSES_MERGE, "Toutes les maisons fusionnent"},
    {TR_CONFIG_WINE_COUNTS_IF_OPEN_TRADE_ROUTE, "Ouvre des routes commerciales qui founissent différents types de vins"},
    {TR_CONFIG_RANDOM_COLLAPSES_TAKE_MONEY, "Les effondrements coûtent de l'argent au lieu de détruire les mines"},
    {TR_CONFIG_MULTIPLE_BARRACKS, "Autorise la construction de plusieurs casernes"},
    {TR_CONFIG_NOT_ACCEPTING_WAREHOUSES, "Les entrepôts n'acceptent rien par défaut"},
    {TR_CONFIG_HOUSES_DONT_EXPAND_INTO_GARDENS, "Les maisons ne s'étendent pas sur les jardins"},
    {TR_HOTKEY_TITLE, "Configuration du clavier"},
    {TR_HOTKEY_LABEL, "Touche"},
    {TR_HOTKEY_ALTERNATIVE_LABEL, "Alternative"},
    {TR_HOTKEY_HEADER_ARROWS, "Flèches directionnelles"},
    {TR_HOTKEY_HEADER_GLOBAL, "Contrôles globaux"},
    {TR_HOTKEY_HEADER_CITY, "Contrôles de la cité"},
    {TR_HOTKEY_HEADER_ADVISORS, "Rapports des conseillers"},
    {TR_HOTKEY_HEADER_OVERLAYS, "Cartes de visualisation"},
    {TR_HOTKEY_HEADER_BOOKMARKS, "Points d'intérêt de la cité"},
    {TR_HOTKEY_HEADER_EDITOR, "Editeur"},
    {TR_HOTKEY_HEADER_BUILD, "Contrôles de construction"},
    {TR_HOTKEY_ARROW_UP, "Haut"},
    {TR_HOTKEY_ARROW_DOWN, "Bas"},
    {TR_HOTKEY_ARROW_LEFT, "Gauche"},
    {TR_HOTKEY_ARROW_RIGHT, "Droite"},
    {TR_HOTKEY_TOGGLE_FULLSCREEN, "Basculer en plein écran"},
    {TR_HOTKEY_CENTER_WINDOW, "Centrer la fenêtre"},
    {TR_HOTKEY_RESIZE_TO_640, "Redimensionner en 640x480"},
    {TR_HOTKEY_RESIZE_TO_800, "Redimensionner en 800x600"},
    {TR_HOTKEY_RESIZE_TO_1024, "Redimensionner en 1024x768"},
    {TR_HOTKEY_SAVE_SCREENSHOT, "Capturer l'écran de jeu"},
    {TR_HOTKEY_SAVE_CITY_SCREENSHOT, "Capturer la cité entière"},
    {TR_HOTKEY_BUILD_CLONE, "Cloner le bâtiment sous le curseur"},
    {TR_HOTKEY_LOAD_FILE, "Charger une partie"},
    {TR_HOTKEY_SAVE_FILE, "Sauvegarder une partie"},
    {TR_HOTKEY_INCREASE_GAME_SPEED, "Augmenter la vitesse du jeu"},
    {TR_HOTKEY_DECREASE_GAME_SPEED, "Diminuer la vitesse du jeu"},
    {TR_HOTKEY_TOGGLE_PAUSE, "Activer la pause"},
    {TR_HOTKEY_CYCLE_LEGION, "Parcourir les légions en boucle"},
    {TR_HOTKEY_ROTATE_MAP_LEFT, "Tourner la carte vers la gauche"},
    {TR_HOTKEY_ROTATE_MAP_RIGHT, "Tourner la carte vers la droite"},
    {TR_HOTKEY_SHOW_ADVISOR_LABOR, "Main-d'œuvre"},
    {TR_HOTKEY_SHOW_ADVISOR_MILITARY, "Légion"},
    {TR_HOTKEY_SHOW_ADVISOR_IMPERIAL, "Empereur"},
    {TR_HOTKEY_SHOW_ADVISOR_RATINGS, "Évaluation"},
    {TR_HOTKEY_SHOW_ADVISOR_TRADE, "Commerce"},
    {TR_HOTKEY_SHOW_ADVISOR_POPULATION, "Population"},
    {TR_HOTKEY_SHOW_ADVISOR_HEALTH, "Hygiène"},
    {TR_HOTKEY_SHOW_ADVISOR_EDUCATION, "Éducation"},
    {TR_HOTKEY_SHOW_ADVISOR_ENTERTAINMENT, "Loisirs"},
    {TR_HOTKEY_SHOW_ADVISOR_RELIGION, "Religion"},
    {TR_HOTKEY_SHOW_ADVISOR_FINANCIAL, "Finances"},
    {TR_HOTKEY_SHOW_ADVISOR_CHIEF, "Conseiller personnel"},
    {TR_HOTKEY_SHOW_ADVISOR_HOUSING, "Conseiller en logement"},
    {TR_HOTKEY_TOGGLE_OVERLAY, "Cartes de visualisation"},
	{TR_HOTKEY_SHOW_OVERLAY_RELATIVE, "Cartes de visualisation relatif"},
    {TR_HOTKEY_SHOW_OVERLAY_WATER, "Eau"},
    {TR_HOTKEY_SHOW_OVERLAY_FIRE, "Incendies"},
    {TR_HOTKEY_SHOW_OVERLAY_DAMAGE, "Dégats"},
    {TR_HOTKEY_SHOW_OVERLAY_CRIME, "Criminalité"},
    {TR_HOTKEY_ROTATE_BUILDING, "Rotation de bâtiment"},
    {TR_HOTKEY_SHOW_OVERLAY_PROBLEMS, "Problèmes"},
    {TR_HOTKEY_GO_TO_BOOKMARK_1, "Aller au point d'intérêt 1"},
    {TR_HOTKEY_GO_TO_BOOKMARK_2, "Aller au point d'intérêt 2"},
    {TR_HOTKEY_GO_TO_BOOKMARK_3, "Aller au point d'intérêt 3"},
    {TR_HOTKEY_GO_TO_BOOKMARK_4, "Aller au point d'intérêt 4"},
    {TR_HOTKEY_SET_BOOKMARK_1, "Définir comme point d'intérêt 1"},
    {TR_HOTKEY_SET_BOOKMARK_2, "Définir comme point d'intérêt 2"},
    {TR_HOTKEY_SET_BOOKMARK_3, "Définir comme point d'intérêt 3"},
    {TR_HOTKEY_SET_BOOKMARK_4, "Définir comme point d'intérêt 4"},
    {TR_HOTKEY_EDITOR_TOGGLE_BATTLE_INFO, "Afficher les infos de bataille"},
    {TR_HOTKEY_EDIT_TITLE, "Appuyez sur une touche"},
    {TR_BUILDING_ROADBLOCK, "Barrage routier" },
    {TR_BUILDING_ROADBLOCK_DESC, "Les barrages routiers arrêtent les citoyens errants." },
    {TR_BUILDING_ARCHITECT_GUILD, "Guilde des architectes"},
    {TR_BUILDING_ARCHITECT_GUILD_DESC, "Ici, les architectes travaillent sans relâche pour construire des monuments pour la gloire de Rome."},
    {TR_BUILDING_GRAND_TEMPLE_ADD_MODULE, "Accorder une épithète au temple"},
    {TR_BUILDING_GRAND_TEMPLE_CERES, "Cérès"},
    {TR_BUILDING_GRAND_TEMPLE_NEPTUNE, "Neptune"},
    {TR_BUILDING_GRAND_TEMPLE_MERCURY, "Mercure"},
    {TR_BUILDING_GRAND_TEMPLE_MARS, "Mars"},
    {TR_BUILDING_GRAND_TEMPLE_VENUS, "Venus"},
    {TR_BUILDING_PANTHEON, "Panthéon"},
    {TR_BUILDING_GRAND_TEMPLE_CERES_DESC, "Temple monumental de Cérès"},
    {TR_BUILDING_GRAND_TEMPLE_NEPTUNE_DESC, "Temple monumental de Neptune"},
    {TR_BUILDING_GRAND_TEMPLE_MERCURY_DESC, "Temple monumental de Mercure"},
    {TR_BUILDING_GRAND_TEMPLE_MARS_DESC, "Temple monumental de Mars"},
    {TR_BUILDING_GRAND_TEMPLE_VENUS_DESC, "Temple monumental de Venus"},
    {TR_BUILDING_PANTHEON_DESC, "Pantheon"},
    {TR_BUILDING_GRAND_TEMPLE_CERES_BONUS_DESC, "Les charretiers des fermes se déplacent 50% plus vite."},
    {TR_BUILDING_GRAND_TEMPLE_NEPTUNE_BONUS_DESC, "Accorde +1 distance pour les fontaines et puits et +2 pour les réservoirs. La main-d'œuvre des services d'eau est réduite de 50%. Les navires marchands voyagent 25% plus vite."},
    {TR_BUILDING_GRAND_TEMPLE_MERCURY_BONUS_DESC, "Les commerçants terrestres et maritimes ont une capacité supplémentaire de 50%. Les commerçants terrestres se déplacent 25% plus vite."},
    {TR_BUILDING_GRAND_TEMPLE_MARS_BONUS_DESC, "Forme les soldats comme une caserne. Quatre forts supplémentaires peuvent être construits."},
    {TR_BUILDING_GRAND_TEMPLE_VENUS_BONUS_DESC, "Les jardins, les statues et les temples de la ville brillent d'une beauté accrue, ce qui augmente leur attrait. Les maisons stockent plus de marchandises et décroissent plus lentement."},
    {TR_BUILDING_PANTHEON_BONUS_DESC, "Donne accès à tous les dieux. Organise des festivals annuels et réduit les taxes du temple de 25%."},
    {TR_BUILDING_GRAND_TEMPLE_CERES_MODULE_1_DESC, "Les prêtres réduisent la consommation alimentaire de 20%."},
    {TR_BUILDING_GRAND_TEMPLE_NEPTUNE_MODULE_1_DESC, "Les temples produisent des conducteurs de char pour l'hippodrome."},
    {TR_BUILDING_GRAND_TEMPLE_MERCURY_MODULE_1_DESC, "Les prêtres réduisent de 20% la consommation de poterie et de meubles."},
    {TR_BUILDING_GRAND_TEMPLE_MARS_MODULE_1_DESC, "Les temples génèrent de la nourriture, en fonction du nombre de maisons qu'ils couvrent, et la livrent au poste de ravitaillement."},
    {TR_BUILDING_GRAND_TEMPLE_VENUS_MODULE_1_DESC, "Le Temple monumental produit du vin en quantité adaptée à la population de la ville avec accès au temple de Vénus. Les temples le collectent et le distribuent dans les maisons."},
    {TR_BUILDING_GRAND_TEMPLE_CERES_MODULE_2_DESC, "Les prêtres collectent et distribuent à la fois de l'huile et un type de nourriture dans les entrepôts de la ville."},
    {TR_BUILDING_GRAND_TEMPLE_NEPTUNE_MODULE_2_DESC, "Les prêtres augmentent la capacité d'hébergement de 5%. Le Temple monumental fournit de l'eau comme un réservoir rempli."},
    {TR_BUILDING_GRAND_TEMPLE_MERCURY_MODULE_2_DESC, "Les prêtres réduisent de 20% la consommation d'huile et de vin."},
    {TR_BUILDING_GRAND_TEMPLE_MARS_MODULE_2_DESC, "Les prêtres réduisent de 10% la consommation de tous les biens."},
    {TR_BUILDING_GRAND_TEMPLE_VENUS_MODULE_2_DESC, "Les prêtres fournissent des divertissements et embellissent eux-mêmes les maisons, augmentant ainsi l'attractivité du quartier sans décoration supplémentaire."},
    {TR_BUILDING_PANTHEON_MODULE_1_DESC, "Tous les temples de la ville envoient des prêtres au Panthéon, répandant la foi et les bénédictions de leurs dieux."},
    {TR_BUILDING_PANTHEON_MODULE_2_DESC, "Les maisons avec accès au Panthéon peuvent évoluer d'une étape supplémentaire."},
    {TR_BUILDING_GRAND_TEMPLE_CERES_DESC_MODULE_1, "Temple de Ceres Promitor"},
    {TR_BUILDING_GRAND_TEMPLE_CERES_DESC_MODULE_2, "Temple de Ceres Reparator"},
    {TR_BUILDING_GRAND_TEMPLE_NEPTUNE_DESC_MODULE_1, "Temple de Neptunus Equester"},
    {TR_BUILDING_GRAND_TEMPLE_NEPTUNE_DESC_MODULE_2, "Temple de Neptunus Adiutor"},
    {TR_BUILDING_GRAND_TEMPLE_MERCURY_DESC_MODULE_1, "Temple de Mercurius Fortunus"},
    {TR_BUILDING_GRAND_TEMPLE_MERCURY_DESC_MODULE_2, "Temple de Mercurius Abundantia"},
    {TR_BUILDING_GRAND_TEMPLE_MARS_DESC_MODULE_1, "Temple de Mars Ultor"},
    {TR_BUILDING_GRAND_TEMPLE_MARS_DESC_MODULE_2, "Temple de Mars Quirinus"},
    {TR_BUILDING_GRAND_TEMPLE_VENUS_DESC_MODULE_1, "Temple de Venus Verticordia"},
    {TR_BUILDING_GRAND_TEMPLE_VENUS_DESC_MODULE_2, "Temple de Venus Genetrix"},
    {TR_BUILDING_PANTHEON_DESC_MODULE_1, "Pantheum Ara Maxima"},
    {TR_BUILDING_PANTHEON_DESC_MODULE_2, "Pantheum Roma Aeterna"},
    {TR_BUILDING_GRAND_TEMPLE_MENU, "Temple monumental"},
    {TR_BUILDING_WORK_CAMP, "Camp de travail"},
    {TR_BUILDING_WORK_CAMP_DESC, "Les ouvriers se rassemblent ici pour transporter les matériaux vers les chantiers de construction."},
    {TR_HEADER_HOUSING, "Logement"},
    {TR_ADVISOR_HOUSING_ROOM, "Les logements en ville ont de la place pour"},
    {TR_ADVISOR_HOUSING_NO_ROOM, "Il n'y a plus de place dans les logements."},
    {TR_ADVISOR_RESIDENCES_DEMANDING_POTTERY, "Résidences exigeant des poteries"},
    {TR_ADVISOR_RESIDENCES_DEMANDING_FURNITURE, "Résidences exigeant des meubles"},
    {TR_ADVISOR_RESIDENCES_DEMANDING_OIL, "Résidences exigeant de huile"},
    {TR_ADVISOR_RESIDENCES_DEMANDING_WINE, "Résidences exigeant du vin"},
    {TR_ADVISOR_TOTAL_NUM_HOUSES, "Total des résidences :"},
    {TR_ADVISOR_AVAILABLE_HOUSING_CAPACITY, "Capacité disponible :"},
    {TR_ADVISOR_TOTAL_HOUSING_CAPACITY, "Capacité totale :"},
    {TR_ADVISOR_ADVISOR_HEADER_HOUSING, "Population - Logement"},
    {TR_ADVISOR_BUTTON_GRAPHS, "Graphiques"},
    {TR_ADVISOR_HOUSING_PROSPERITY_RATING, "Cote de prospérité du logement :"},
    {TR_ADVISOR_PERCENTAGE_IN_VILLAS_PALACES, "Pourcentage de la population dans des villas et palais :"},
    {TR_ADVISOR_PERCENTAGE_IN_TENTS_SHACKS, "Pourcentage de la population dans des tentes et cabanes :"},
    {TR_ADVISOR_AVERAGE_TAX, "Revenu fiscal moyen par résidence :"},
    {TR_ADVISOR_AVERAGE_AGE, "Age moyen de la population :"},
    {TR_ADVISOR_PERCENT_IN_WORKFORCE, "Pourcentage de la population active :"},
    {TR_ADVISOR_BIRTHS_LAST_YEAR, "Naissances l'an dernier :"},
    {TR_ADVISOR_DEATHS_LAST_YEAR, "Morts l'an dernier :"},
    {TR_ADVISOR_TOTAL_POPULATION, "Résidents"},
    {TR_REQUIRED_RESOURCES, "Ressources livrées pour la phase actuelle :"},
    {TR_BUILDING_GRAND_TEMPLE_CONSTRUCTION_DESC, "La construction de temple monumentaux nécessite du matériel stocké dans un entrepôt, des ouvriers d'un camp de travail et des ingénieurs d'une guilde d'ingénieurs."},
    {TR_CONSTRUCTION_PHASE, "Phase de construction :"},
    {TR_ADD_MODULE, "Reconsacrer temple?"},
    {TR_BUILDING_TEMPLE_MODULE_CONSTRUCTED, "Epithet accordée."},
    {TR_BUILDING_CERES_TEMPLE_QUOTE, "Cérès inventa le soc qui déchire et féconde la terre.\nL'homme lui doit ses premiers fruits, des aliments\nplus doux, et ses premières lois. Nous devons tout\naux bienfaits de Cérès. C'est elle que je vais chanter\n-Ovide, les Métamorphoses, Livre V"},
    {TR_BUILDING_NEPTUNE_TEMPLE_QUOTE, "Les flots tombent, tandis que Neptune pose sa masse\nSur la mer agitée et lisse son visage sillonné.\nDéjà Triton, à son appel, apparaît au-dessus des vagues;\nil porte la robe tyrienne;\nEt dans sa main une trompette tordue.\n-Ovide, les Métamorphoses, Livre I "},
    {TR_BUILDING_MERCURY_TEMPLE_QUOTE, "Le bétail et les gros moutons peuvent tous être \nobtenus par le raid, tripodes pour le commerce et \nétalons à tête fauve.Mais le souffle de vie d'un homme\n ne peut pas revenir, ni la force, ni aucun commerce ne le ramène, \nquand il glisse entre ses dents serrées.\n-Homer, L'Iliade, Livre IX "},
    {TR_BUILDING_MARS_TEMPLE_QUOTE, "Pour Mars, réparez ses essieux cassés et sa guerre,\nEt renvoyez-le avec les armes fournies,\nPour réveiller la guerre paresseuse avec les alarmes bruyantes des trompettes.\n-Virgil, l'Énéide, Livre VIII"},
    {TR_BUILDING_VENUS_TEMPLE_QUOTE, "Par Cupidon ailé et Vénus, sa tendre mère,\nQuelle grande joie j'ai eue!\nComment la passion m'a clairement touché!\nComment mon cœur a fondu là où je gisais!\n-Ovide, les Métamorphoses, Livre IX "},
    {TR_BUILDING_PANTHEON_QUOTE, "Les portes du ciel se dévoilent: Jupiter convoque tous\nLes dieux au conseil dans la salle commune.\nSublimement assis, il observe de loin\nLes champs, le camp, la fortune de la guerre,\nEt tout le monde inférieur. Du premier au dernier,\nLe sénat souverain en degrés est placé.\n-Virgile, L'Enéide, Livre X "},
    {TR_BUILDING_GRAND_TEMPLE_PHASE_1, "(Podium)"},
    {TR_BUILDING_GRAND_TEMPLE_PHASE_2, "(Portico)"},
    {TR_BUILDING_GRAND_TEMPLE_PHASE_3, "(Cella)"},
    {TR_BUILDING_GRAND_TEMPLE_PHASE_4, "(Praecinctum)"},
    {TR_BUILDING_GRAND_TEMPLE_PHASE_5, "(Dedicatio)"},
    {TR_BUILDING_GRAND_TEMPLE_PHASE_1_TEXT, "Les ouvriers construisent le podium qui élèvera le temple et fournira une base solide pour résister au passage du temps."},
    {TR_BUILDING_GRAND_TEMPLE_PHASE_2_TEXT, "Les artisans fabriquent le portique, qui porte l'autel sacrificiel du temple."},
    {TR_BUILDING_GRAND_TEMPLE_PHASE_3_TEXT, "Les ingénieurs sont en train de fabriquer la cella, l'intérieur du temple qui abrite les images sacrées."},
    {TR_BUILDING_GRAND_TEMPLE_PHASE_4_TEXT, "Les travaux sur le praecinctum du temple ont commencé, où les fidèles se rassembleront à l'extérieur pour des cérémonies publiques."},
    {TR_BUILDING_GRAND_TEMPLE_PHASE_5_TEXT, "Le temple étant presque terminé, les prêtres se rassemblent pour accomplir les rites de consécration."},
    {TR_BUILDING_MENU_TREES, "Arbres"},
    {TR_BUILDING_MENU_PATHS, "Chemins"},
    {TR_BUILDING_MENU_PARKS, "Parcs"},
    {TR_BUILDING_SMALL_POND, "Petit bassin"},
    {TR_BUILDING_LARGE_POND, "Grand bassin"},
    {TR_BUILDING_PINE_TREE, "Pin"},
    {TR_BUILDING_FIR_TREE, "Sapin"},
    {TR_BUILDING_OAK_TREE, "Chêne"},
    {TR_BUILDING_ELM_TREE, "Orme"},
    {TR_BUILDING_FIG_TREE, "Figuier"},
    {TR_BUILDING_PLUM_TREE, "Prunier"},
    {TR_BUILDING_PALM_TREE, "Palmier"},
    {TR_BUILDING_DATE_TREE, "Datier"},
    {TR_BUILDING_PINE_PATH, "Chemin de pin"},
    {TR_BUILDING_FIR_PATH, "Chemin de sapin"},
    {TR_BUILDING_OAK_PATH, "Chemin de chêne"},
    {TR_BUILDING_ELM_PATH, "Chemin d'orme"},
    {TR_BUILDING_FIG_PATH, "Chemin de figuier"},
    {TR_BUILDING_PLUM_PATH, "Chemin de prunier"},
    {TR_BUILDING_PALM_PATH, "Chemin de palmier"},
    {TR_BUILDING_DATE_PATH, "Chemin de datier"},
    {TR_BUILDING_BLUE_PAVILION, "Pavillon bleu"},
    {TR_BUILDING_RED_PAVILION, "Pavillon rouge"},
    {TR_BUILDING_ORANGE_PAVILION, "Pavillon orange"},
    {TR_BUILDING_YELLOW_PAVILION, "Pavillon jaune"},
    {TR_BUILDING_GREEN_PAVILION, "Pavillon vert"},
    {TR_BUILDING_SMALL_STATUE_ALT, "Statue de Déesse"},
    {TR_BUILDING_SMALL_STATUE_ALT_B, "Statue de Sénateur"},
    {TR_BUILDING_OBELISK, "Obelisque"},
    {TR_BUILDING_POND_DESC, "Les bassins se remplissent des réservoirs de la ville et fournissent de l'eau pour les plantes et les animaux et une oasis fraîche et relaxante pour les gens. Tous les citoyens aimeraient vivre près d'un basin."},
    {TR_BUILDING_WINDOW_POND, "Bassin"},
    {TR_BUILDING_OBELISK_DESC, "Un monument prestigieux, œuvre d'un ancien roi du Nil. Les Egyptiens ne l'utilisaient pas."},
    {TR_ADVISOR_FINANCE_LEVIES, "Taxes de construction"},
    {TR_CONFIRM_DELETE_MONUMENT, "Démolir ce monument"},
    {TR_SELECT_EPITHET_PROMPT_HEADER, "Sélectionnez l'épithète à accorder"},
    {TR_SELECT_EPITHET_PROMPT_TEXT, "Accorder une épithète consacrera en permanence votre temple à un aspect de sa divinité, conférant aux prêtres un pouvoir divin. Cela coûtera 1000 Dn."},
    {TR_BUILDING_INFO_MONTHLY_LEVY, "/Mois"},
    {TR_BUILDING_MESS_HALL, "Poste de ravitaillement"},
    {TR_BUILDING_MESS_HALL_DESC, "Le poste de ravitaillement recueille de la nourriture des greniers de la ville pour nourrir les soldats stationnés dans les forts. Un mauvais approvisionnement ralentira le recrutement et nuira au moral."},
    {TR_BUILDING_MESS_HALL_FULFILLMENT, "L'approvisionnement du mois dernier:"},
    {TR_BUILDING_MESS_HALL_TROOP_HUNGER, "Les soldats sont: "},
    {TR_BUILDING_MESS_HALL_TROOP_HUNGER_1, "Bien nourris"},
    {TR_BUILDING_MESS_HALL_TROOP_HUNGER_2, "Nourris"},
    {TR_BUILDING_MESS_HALL_TROOP_HUNGER_3, "Affamés"},
    {TR_BUILDING_MESS_HALL_TROOP_HUNGER_4, "Très affamés"},
    {TR_BUILDING_MESS_HALL_TROOP_HUNGER_5, "En famine"},
    {TR_BUILDING_MESS_HALL_FOOD_TYPES_BONUS_1, "Le régime alimentaire varié de vos soldats augmente considérablement le moral."},
    {TR_BUILDING_MESS_HALL_FOOD_TYPES_BONUS_2, "Le régime alimentaire varié et nutritif dont bénéficient vos soldats augmente considérablement le moral."},
    {TR_BUILDING_MESS_HALL_NO_SOLDIERS, "Vous n'avez pas de soldats à nourrir."},
    {TR_BUILDING_MESS_HALL_MONTHS_FOOD_STORED, "Mois de nourriture stockée:"},
    {TR_BUILDING_BARRACKS_FOOD_WARNING, "Les pénuries alimentaires à votre poste de ravitaillement ralentissent le recrutement de soldats."},
    {TR_BUILDING_BARRACKS_FOOD_WARNING_2, "Les pénuries alimentaires critiques à votre poste de ravitaillement paralysent le recrutement de soldats."},
    {TR_BUILDING_LEGION_FOOD_WARNING_1, "La récente pénurie alimentaire a fait baisser le moral"},
    {TR_BUILDING_LEGION_FOOD_WARNING_2, "La récente pénurie alimentaire a considérablement réduit le moral"},
    {TR_BUILDING_LEGION_STARVING, "Pénurie alimentaire"},
    {TR_ADVISOR_TRADE_MAX, "Max"},
    {TR_ADVISOR_TRADE_NO_LIMIT, "Sans limite"},
    {TR_ADVISOR_TRADE_IMPORTABLE, "Importable"},
    {TR_ADVISOR_TRADE_EXPORTABLE, "Exportable"},
    {TR_ADVISOR_LEGION_FOOD_SATISFIED, "Vos soldats ont toute la nourriture dont ils ont besoin."},
    {TR_ADVISOR_LEGION_FOOD_NEEDED, "Vos soldats ont besoin de plus de nourriture."},
    {TR_ADVISOR_LEGION_FOOD_CRITICAL, "Vos soldats meurent de faim!"},
    {TR_ADVISOR_LEGION_MONTHS_FOOD_STORED, "Mois de nourriture stockée au poste de ravitaillement:"},
    {TR_CITY_MESSAGE_TITLE_MESS_HALL_NEEDS_FOOD, "Soldats affamés"},
    {TR_CITY_MESSAGE_TEXT_MESS_HALL_NEEDS_FOOD, "Votre poste de ravitaillement manque cruellement de nourriture et le moral de vos troupes diminue. Assurez-vous que votre poste de ravitaillement peut accéder à un grenier bien approvisionné."},
    {TR_CITY_MESSAGE_TEXT_MESS_HALL_MISSING, "Votre ville a perdu son poste de ravitaillement et vos troupes meurent de faim. Construisez immédiatement un poste de ravitaillement."},
    {TR_MARKET_SPECIAL_ORDERS_HEADER, "Marchandises à collecter"},
    {TR_WARNING_NO_MESS_HALL, "Vous devez d'abord construire un poste de ravitaillement pour nourrir vos soldats."},
    {TR_WARNING_MAX_GRAND_TEMPLES, "Seuls deux temples monumentaux être construits."},
    {TR_CITY_MESSAGE_TITLE_GRAND_TEMPLE_COMPLETE, "Temple monumental terminé"},
    {TR_CITY_MESSAGE_TEXT_GRAND_TEMPLE_COMPLETE, "Les prêtres et les fidèles affluent vers le nouveau temple monumental pour les rites de consécration. Votre peuple est impressionné par la majesté de vos œuvres et la divinité que vous avez choisie vous comble de faveur."},
    {TR_CITY_MESSAGE_TITLE_MERCURY_BLESSING, "Une bénédiction de Mercure"},
    {TR_CITY_MESSAGE_TEXT_MERCURY_BLESSING, "Ravi de votre dévouement, Mercure a béni votre industrie en découvrant des matières premières pour vos artisans."},
    {TR_FIGURE_TYPE_WORK_CAMP_WORKER, "Contremaître"},
    {TR_FIGURE_TYPE_WORK_CAMP_SLAVE, "Transporteur"},
    {TR_FIGURE_TYPE_WORK_CAMP_ARCHITECT, "Architect"},
    {TR_FIGURE_TYPE_MESS_HALL_SUPPLIER, "Intendant"},
    {TR_FIGURE_TYPE_MESS_HALL_COLLECTOR, "Collecteur"},
    {TR_BUILDING_CERES_TEMPLE_MODULE_DESC, "Le temple monumental envoie des prêtres de Cérès pour aider à distribuer de la nourriture et de l'huile à vos citoyens affamés."},
    {TR_BUILDING_VENUS_TEMPLE_MODULE_DESC, "Le temple monumental permet aux prêtres de Vénus de fournir du vin sacré à vos citoyens."},
    {TR_BUILDING_MARS_TEMPLE_MODULE_DESC, "Le temple monumental forme les prêtres de Mars à fournir de la nourriture à votre poste de ravitaillement."},
    {TR_BUILDING_SMALL_TEMPLE_CERES_NAME, "Temple de Cérès"},
    {TR_BUILDING_SMALL_TEMPLE_NEPTUNE_NAME, "Temple de Neptune"},
    {TR_BUILDING_SMALL_TEMPLE_MERCURY_NAME, "Temple de Mercure"},
    {TR_BUILDING_SMALL_TEMPLE_MARS_NAME, "Temple de Mars"},
    {TR_BUILDING_SMALL_TEMPLE_VENUS_NAME, "Temple de Venus"},
    {TR_FIGURE_TYPE_PRIEST_SUPPLIER, "Prêtre"},
	{TR_BUILDING_DOCK_CITIES_CONFIG_DESC, "Villes avec commerce maritime ouvert :" },
    {TR_BUILDING_DOCK_CITIES_NO_ROUTES, "Il n'y a pas de routes commerciales maritimes." },
    // Transcription of mission_exact4.wav
    {TR_PHRASE_FIGURE_MISSIONARY_EXACT_4, "\"Je ferai ce que je peux pour calmer ces barbares. Je suis sûr qu'ils arrêteront d'attaquer la ville quand j'aurai eu un mot avec eux.\""},
    {TR_CITY_MESSAGE_TITLE_PANTHEON_FESTIVAL, "An annual festival"},
    {TR_CITY_MESSAGE_TEXT_PANTHEON_FESTIVAL_CERES, "Les fidèles affluent vers les temples pour la célébration de Cerealia, en l'honneur de Cérès. Les agriculteurs offrent des sacrifices pour de riches récoltes dans les années à venir."},
    {TR_CITY_MESSAGE_TEXT_PANTHEON_FESTIVAL_NEPTUNE, "C'est aujourd'hui la fête de Neptunalia, en l'honneur de Neptune. Les fidèles construisent des huttes de branches et de feuillages et se réjouissent sous la chaleur ardente du soleil d'été."},
    {TR_CITY_MESSAGE_TEXT_PANTHEON_FESTIVAL_MERCURY, "Les commerçants et les marchands se rassemblent en masse pour célébrer Mercuralia. De l'eau sacrée est aspergée sur les navires et les entrepôts dans l'espoir d'une protection divine contre le dieu Mercure."},
    {TR_CITY_MESSAGE_TEXT_PANTHEON_FESTIVAL_MARS, "Les citoyens se rassemblent à l'extérieur de la ville pour la célébration d'Equirria, pour chercher la faveur de Mars. L'air est rempli du tonnerre des sabots et du grincement des chars pendant que les fidèles font la course en l'honneur de leur dieu."},
    {TR_CITY_MESSAGE_TEXT_PANTHEON_FESTIVAL_VENUS, "Les fidèles se rassemblent pour la célébration de Veneralia, un jour sacré à Vénus. Vos citoyens la supplient de leur donner bonne fortune en matière de cœur."},
    {TR_TOOLTIP_BUTTON_DELETE_READ_MESSAGES, "Supprimer les messages lus"},
    {TR_TOOLTIP_BUTTON_MOTHBALL_ON, "Désactivez ce bâtiment"},
    {TR_TOOLTIP_BUTTON_MOTHBALL_OFF, "Activez ce bâtiment"},
    {TR_TOOLTIP_BUTTON_ACCEPT_MARKET_LADIES, "Autoriser les acheteuses du marché à acheter à partir d'ici"},
    {TR_TOOLTIP_BUTTON_ACCEPT_TRADE_CARAVAN, "Autoriser les caravanes à commercer ici"},
    {TR_TOOLTIP_BUTTON_ACCEPT_TRADE_SHIPS, "Permettre aux navires de commerce de commercer ici"},
    {TR_CONFIG_HEADER_CITY_MANAGEMENT_CHANGES, "Gestion de la ville"},
    {TR_BUILDING_LIGHTHOUSE, "Phare"},
    {TR_BUILDING_CARAVANSERAI, "Caravansérail"},
    {TR_BUILDING_CARAVANSERAI_DESC, "Les caravanes marchandes profitent de ce lieu de repos et consomment de la nourriture."},
    {TR_CARAVANSERAI_SPECIAL_ORDERS_HEADER, "Marchandises à collecter"},
    {TR_BUILDING_CARAVANSERAI_PHASE_1, "(Fondation)"},
    {TR_BUILDING_CARAVANSERAI_PHASE_1_TEXT, "Les ingénieurs terrassent les fondations du futur ce lieu de repos."},
    {TR_FIGURE_TYPE_CARAVANSERAI_SUPPLIER, "Fournisseur du caravansérail" },
    {TR_BUILDING_CARAVANSERAI_POLICY_TITLE, "Politique commerciale" },
    {TR_BUILDING_CARAVANSERAI_NO_POLICY, "Aucune politique commerciale actuellement" },
    {TR_BUILDING_CARAVANSERAI_POLICY_TEXT, "Séléctionner une politique commerciale dans votre cité. Cela vous coûtera 500 denarii." },
    {TR_BUILDING_CARAVANSERAI_POLICY_1_TITLE, "Consilium Venditor" },
    {TR_BUILDING_CARAVANSERAI_POLICY_1, "Les caravanes achètent leurs biens 20% plus cher mais vendent pour 10% plus cher." },
    {TR_BUILDING_CARAVANSERAI_POLICY_2_TITLE, "Consilium Acquisitionem" },
    {TR_BUILDING_CARAVANSERAI_POLICY_2, "Les caravanes vendent leurs biens 20% moins cher mais achètent pour 10% moins cher." },
    {TR_BUILDING_CARAVANSERAI_POLICY_3_TITLE, "Consilium Quantitas" },
    {TR_BUILDING_CARAVANSERAI_POLICY_3, "Les caravanes peuvent porter 50% plus mais leur vitesse est réduite de 15%." },
    {TR_BUILDING_LIGHTHOUSE_PHASE_1, "(Fondation)"},
    {TR_BUILDING_LIGHTHOUSE_PHASE_2, "(Piédestal)"},
    {TR_BUILDING_LIGHTHOUSE_PHASE_3, "(Tour)"},
    {TR_BUILDING_LIGHTHOUSE_PHASE_4, "(Couronne)"},
    {TR_BUILDING_LIGHTHOUSE_PHASE_1_TEXT, "Les ingénieurs posent des bases solides pour supporter le poids d'une grande tour de pierre."},
    {TR_BUILDING_LIGHTHOUSE_PHASE_2_TEXT, "Les maçons construisent le piédestal qui élèvera la flamme du phare bien au-dessus de l'horizon."},
    {TR_BUILDING_LIGHTHOUSE_PHASE_3_TEXT, "La tour du phare monte encore plus haut chaque jour alors que les maçons pratiquent soigneusement leur métier."},
    {TR_BUILDING_LIGHTHOUSE_PHASE_4_TEXT, "Les ingénieurs sont en train d'effectuer les dernières retouches sur le phare. Bientôt, il brillera sur des kilomètres, guidant les navires vers la maison."},
    {TR_BUILDING_LIGHTHOUSE_CONSTRUCTION_DESC, "La construction du phare nécessite du matériel stocké dans un entrepôt, des ouvriers d'un camp de travail et des ingénieurs d'une guilde d'ingénieurs."},
    {TR_BUILDING_LIGHTHOUSE_BONUS_DESC, "Les navires de pêche se déplacent 10% plus vite. Les tempêtes marines durent deux fois moins longtemps."},
    {TR_EDITOR_ALLOWED_BUILDINGS_MONUMENTS, "Monuments"},
    {TR_CITY_MESSAGE_TEXT_LIGHTHOUSE_COMPLETE, "Le phare achevé, une puissante tour de pierre, se profile à l'horizon. Que sa lumière guide les navires jusqu'à la fin des temps."},
    {TR_CITY_MESSAGE_TEXT_PANTHEON_COMPLETE, "Le Panthéon est achevé. Il trône inégalé en tant que monument dédié à la puissance impressionnante des dieux et du peuple de Rome."},
    {TR_CITY_MESSAGE_TITLE_MONUMENT_COMPLETE, "Monument achevé"},
    {TR_CITY_MESSAGE_TITLE_NEPTUNE_BLESSING, "Une bénédiction de Neptune"},
    {TR_CITY_MESSAGE_TEXT_NEPTUNE_BLESSING, "Récompensant le dévouement de votre ville, Neptune accorde un passage en douceur aux commerçants pendant douze mois, pendant lesquels vos exportations rapporteront la moitié du prix en plus."},
    {TR_CITY_MESSAGE_TITLE_VENUS_BLESSING, "Une bénédiction de Venus"},
    {TR_CITY_MESSAGE_TEXT_VENUS_BLESSING, "Ravie de la vénération joyeuse qui lui est témoignée, Vénus accorde jeunesse, santé et bonheur à votre peuple, augmentant ainsi la taille de votre population active."},
    {TR_BUILDING_MENU_STATUES, "Statues"},
    {TR_BUILDING_MENU_GOV_RES, "Gouverneur"},
    {TR_OVERLAY_ROADS, "Routes"},
    {TR_NO_EXTRA_ASSETS_TITLE, "Le dossier assets ne peut être trouvé"},
    {TR_NO_EXTRA_ASSETS_MESSAGE,
        "Votre installation de Caesar 3 n'a pas de dossier assets correctement installé. "
        "Les nouveaux batiments ne seront pas correctement affichés.\n"
        "Veuillez vous assurer qu'un répertoire '/assets' existe dans le répertoire d'installation de Caesar 3."},
    {TR_WARNING_WATER_NEEDED_FOR_LIGHTHOUSE, "Le phare doit être placé près de l'eau"},
    {TR_TOOLTIP_OVERLAY_PANTHEON_ACCESS, "Cette maison a accès aux cinq dieux du Panthéon"},
    {TR_BUILDING_LEGION_FOOD_BONUS, "Une nourriture abondante remonte le moral"},
    {TR_BUILDING_LEGION_FOOD_STATUS, "Statut alimentaire"},
    {TR_TOOLTIP_BUTTON_ACCEPT_QUARTERMASTER, "Autoriser l'intendant à trouver de la nourriture ici"},
    {TR_WARNING_RESOURCES_NOT_AVAILABLE, "Vous ne pouvez pas obtenir le matériel nécessaire"},
    {TR_CONFIG_GP_CH_MONUMENTS_BOOST_CULTURE_RATING, "Les temples monumentaux confèrent un bonus de culture de +8"},
    {TR_BUTTON_BACK_TO_MAIN_MENU, "Retour menu principal"},
    {TR_LABEL_PAUSE_MENU, "Pause"},
    {TR_OVERLAY_LEVY, "Taxes"},
    {TR_TOOLTIP_OVERLAY_LEVY, " denarii payées en taxes par mois."},
    {TR_MAP_EDITOR_OPTIONS, "Réglages du Scenario"},
    {TR_BUILDING_MARS_TEMPLE_MODULE_DESC_NO_MESS, "Ce temple collectera de la nourriture pour le poste de ravitaillement, une fois construit." },
    {TR_TOOLTIP_BUTTON_ROADBLOCK_PERMISSION_MAINTENANCE, "Régler l'accès des préfets et ingénieurs" },
    {TR_TOOLTIP_BUTTON_ROADBLOCK_PERMISSION_PRIEST, "Régler l'accès des prêtres" },
    {TR_TOOLTIP_BUTTON_ROADBLOCK_PERMISSION_MARKET, "Régler l'accès des acheteurs de marché" },
    {TR_TOOLTIP_BUTTON_ROADBLOCK_PERMISSION_ENTERTAINER, "Régler l'accès des animateurs" },
    {TR_TOOLTIP_BUTTON_ROADBLOCK_PERMISSION_EDUCATION, "Régler l'accès des travailleurs éducatifs" },
    {TR_TOOLTIP_BUTTON_ROADBLOCK_PERMISSION_MEDICINE, "Régler l'accès des travailleurs de santé" },
    {TR_TOOLTIP_BUTTON_ROADBLOCK_PERMISSION_TAX_COLLECTOR, "Régler l'accès des collecteurs de taxes" },
    {TR_TOOLTIP_BUTTON_ROADBLOCK_PERMISSION_LABOR_SEEKER, "Régler l'accès des demandeurs d'emploi" },
    {TR_HOTKEY_DUPLICATE_TITLE, "Raccourci déjà utilisé"},
    {TR_HOTKEY_DUPLICATE_MESSAGE, "Cette combinaison de touches est déjà affectée à l'action suivante :"},
    {TR_BUTTON_GO_TO_SITE, "Aller sur le site" },
    {TR_SIDEBAR_EXTRA_REQUESTS_VIEW_ALL, "Tout voir" },
    {TR_SIDEBAR_EXTRA_REQUESTS_SMALL_FORCE, "Troupe modeste"},
    {TR_SIDEBAR_EXTRA_REQUESTS_AVERAGE_FORCE, "Troupe moyenne"},
    {TR_SIDEBAR_EXTRA_REQUESTS_LARGE_FORCE, "Troupe importante"},
    {TR_SIDEBAR_EXTRA_REQUESTS_SEND, "Envoyer la requête"},
    {TR_SIDEBAR_EXTRA_REQUESTS_STOCK, "Stocker"},
    {TR_SIDEBAR_EXTRA_REQUESTS_UNSTOCK, "Arrêter de stocker"},
    {TR_TOOLTIP_ADVISOR_HOUSING_GRAPH_BUTTON, "Afficher les informations de population" },
    {TR_TOOLTIP_ADVISOR_POPULATION_HOUSING_BUTTON, "Afficher les informations de logement" },
    {TR_RETURN_ALL_TO_FORT, "Tout retourner"},
};

void translation_french(const translation_string** strings, int* num_strings)
{
    *strings = all_strings;
    *num_strings = sizeof(all_strings) / sizeof(translation_string);
}
