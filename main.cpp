#include <iostream>

constexpr int N_ELEMENTS = 100;

int main()
{
    int *b = new int[N_ELEMENTS];
    std::cout << "1-100 ertekek duplazasa"
    for (int i = 0; i < N_ELEMENTS; i++)    
    {
        b[i] = i * 2;
    }
    for (int i = 0; i < N_ELEMENTS; i++)    
    {
        std::cout << "Ertek:" << b[i] << endl;  
    }    
    std::cout << "Atlag szamitasa: " << std::endl;
    float atlag = 0;    
    for (int i = 0; i < N_ELEMENTS; i++)    
    {
        atlag += b[i];
    }
    atlag /= N_ELEMENTS;
    std::cout << "Atlag: " << atlag << std::endl;

    std::cout << "Hol volt, hol nem volt, \n
                a Túl az Óperencián királyságban a királynak és királynénak \n
                gyönyörű szép lánygyermeke született. \n
                És szerte az országban \n
                mindenki boldog volt. \n
                Egészen naplementéig. \n
                Akkor látták, hogy lányukat \n
                szörnyű átok sújtja, \n
                s minden áldott éjjel átváltozik. \n
                Kétségbeesésükben \n
                egy jótündér segítségét kérték, \n
                aki toronyba záratta velük \n
                a hercegnőt, \n
                hogy ott várja... \n
                a Szőke Herceg csókját. \n
                Ő volt, aki megkockáztatta \n
                a veszedelmes utat \n
                a jéghidegben, \n
                majd tűzforró sivatagon át. \n
                Sok éjjelen és nappalon át utazott, \n
                ***ára téve életét, \n
                hogy elérje a Sárkány rejtekhelyét. \n
                Mert ő volt a legbátrabb \n
                és legcsinosabb lovag \n
                a földkerekségen. \n
                És a sors akarata volt, \n
                hogy az ő csókja \n
                törje meg a szörnyű átkot. \n
                Csak ő tud felmászni \n
                a legmagasabb torony legfelső szobájába, \n
                hogy belépjen a hercegnő kamrájába, \n
                meginduljon az alvó alak felé, \n
                elhúzza a pókháló lepte \n
                függönyt, és... \n
                Mi van? \n
                - Fiona hercegnő? \n
                - Dehogy! \n
                Hála az Égnek! Hol van Fiona? \n
                - Nászútra ment. \n
                - Nászútra? Kivel? \n
                JANCSI NÁSZUTAS \n
                MÉZESKALÁCS HÁZIKÓJA \n
                SZERETLEK \n
                De jó újra itthon lenni! \n
                VIGYÁZAT, OGRÉK! \n
                VIGYÁZAT, OGRÉK! \n
                Csak te meg én és... \n
                - Kettő néha olyan rossz, mint az egy \n
                - Szamár? \n
                Shrek! Fiona! Öröm rátok nézni! \n
                Ölelj meg bennünket, \n
                Shrek, te vén szexkazán. \n
                És odanézzenek, Shrekné. \n
                Nem adna egy kockacukrot a paripának? \n
                Te meg mit keresel itt? \n
                Vigyázok a szerelmi fészketekre. \n
                Úgy érted... kiválogattad a postát \n
                és öntözted a virágokat. \n
                - És etettem a halakat! \n
                - Nekem nincs is halam. \n
                Most már van. \n
                Az ott Shrek, a másik meg Fiona. \n
                Az a Shrek egy fickós kis ördög. \n
                Hozd... \n
                De későre jár! \n
                Biztos menned kell. \n
                Nem akartok mesélni nekem az utatokról? \n
                Vagy ne társasozzunk? \n
                Izé, Szamár? Nem kéne neked \n
                hazamenned Sárkányhoz? \n
                Ja, hogy az. \n
                Nem is tudom. \n
                Mostanság olyan ingerlékeny. \n
                Beköltözöm hozzátok. \n
                Szamár, tudod, \n
                mindig szívesen látunk téged. \n
                De Fiona és én \n
                most összeházasodtunk. \n
                Érted, szeretnénk \n
                egy kis időt együtt tölteni. \n
                Csak egymással. \n
                Egyedül. \n
                Egy szót se többet. \n
                Egy percig se aggódjatok. \n
                Én majd vigyázok, \n
                hogy senki se zavarjon. \n
                - Szamár! \n
                - Igen, szobatársam? \n
                Te zavarsz. \n
                Ó, vagy úgy. Semmi gond. Gondolom... \n
                Pinokkióval úgyis \n
                meccsre akartunk menni. \n
                Viszlát vasárnap \n
                a szalonnasütésen, vagy mi. \n
                Majd megbékél. \n
                Hol is tartottunk? \n
                Tudom már. \n
                Szamár! \n
                Tudom, tudom! Egyedül! \n
                Megyek! Megyek már. \n
                De mit mondjak ezeknek a fickóknak? \n
                Elég, Reggie. \n
                ''Drága Fiona hercegnő. \n
                ''Ezennel meghívunk \n
                a Túl az Óperencián királyságba... \n
                ''ahol királyi gála keretében \n
                ünnepeljük meg a házasságodat... \n
                ''és a Király \n
                ''királyi áldását adja... \n
                Rád \n
                ''és a te... \n
                ''Szőke Hercegedre. \n
                ''Szeretettel, a Túl az Óperencián \n
                Királya és Királynéja. \n
                ''azaz apa és anya.'' \n
                Apa és anya? \n
                - Szőke Herceg? \n
                - Királyi gála? Jöhetek? \n
                - Nem megyünk sehová. \n
                - Micsoda? \n
                Úgy értem, nem gondolod, \n
                hogy egy kissé... \n
                meglepődnének, ha így látnának? \n
                Hát, talán meglepődnek majd. \n
                De ők a szüleim, Shrek. \n
                Szeretnek engem. \n
                És ne aggódj. \n
                Téged is szeretni fognak. \n
                Ja, biztos. Valahogy nem hiszem, \n
                hogy szívesen látnak majd a klubban. \n
                Hagyd ezt abba! Ők nem olyanok. \n
                És Rongyrázó őrmit \n
                meg a Kirittyentett Zenekart mire véljem? \n
                Ugyan! \n
                Legalább adj nekik egy esélyt. \n
                Mire? Hogy kihegyezzék a villáikat? \n
                Nem! \n
                Csak az áldásukat akarják adni rád. \n
                Nagyszerű! \n
                Most már az áldásuk is kell? \n
                Ha a család része akarsz lenni, igen! \n
                Ki mondta, hogy az akarok lenni? \n
                Te! Amikor elvettél feleségül! \n
                Ez az apró betűs részben állt? \n
                Hát akkor ennyi? Nem jössz? \n
                Higgy nekem! Nem jó ötlet. \n
                Nem megyünk! És ez végleges! \n
                Gyerünk! \n
                El akarjuk kerülni a csúcsforgalmat! \n
                Ne aggódj! \n
                Mi majd vigyázunk mindenre. \n
                Jól van, csapj a lovak közé! Indulás! \n
                Útra fel! Útra fel, indulás, útra fel! \n
                Hej-hó! Indulás! \n
                Útra fel! \n
                Útra fel! Útra fel! \n
                Indulás! Hej-hó! \n
                Nyargalunk! Útra fel! \n
                Indulás! Indulás! Hej-hó! \n
                Üsd agyon! Vágd kupán! \n
                Adj teát! Végy piát! \n
                Lássuk a mamát! \n
                Fejd meg őket! \n
                Hej-hó! \n
                TÚL AZ ÓPERENCIÁN \n
                700 MÉRFÖLD \n
                - Ott vagyunk már? \n
                - Nem. \n
                - Ott vagyunk már? \n
                - Még nem. \n
                TÚL AZ ÓPERENCIÁN \n
                200 MÉRFÖLD \n
                - Jó, most már ott vagyunk? \n
                - Nem. \n
                - Ott vagyunk már? \n
                - Nem! \n
                - Ott vagyunk már? \n
                - Igen. \n
                - Tényleg? \n
                - Nem! \n
                - Ott vagyunk már? \n
                - Nem! \n
                - Ott vagyunk már? \n
                - Nem, még nem! \n
                - Ott vagyunk már? \n
                - Nem! \n
                Ott vagyunk már? \n
                Ez nem vicces. \n
                Ez nagyon gyerekes. \n
                Ezért gyűlölik az ogrékat. \n
                Jól van! A te bajod! \n
                Egy szót se szólok többé. \n
                Végre! \n
                Ennek sose lesz vége, Shrek. \n
                Nincs filmvetítés útközben? Bármi! \n
                A Túl az Óperencián messze van, Szamár. \n
                És mi oda tartunk. \n
                Messze... \n
                messzire! \n
                Jól van, jól van, értem. \n
                Csak unatkozom. \n
                Hát foglald el magad valamivel. \n
                Csak öt percre... \n
                Próbálj meg valaki más lenni, \n
                csak öt percre! \n
                Ott vagyunk már? \n
                - Igen! \n
                - Na, végre! \n
                FRISS HÁZASOK \n
                ISTEN HOZTA TÚL AZ ÓPERENCIÁN \n
                Innentől minden \n
                csupa pezsgő és kaviár. \n
                Hé, csinibaba! \n
                Később visszajövünk érted! \n
                Harisnyás! \n
                HOGY BOLDOGAN ÉLJEN, \n
                MÍG MEG NEM HAL. JÓTÜNDÉR \n
                Ez már nem a jó kis mocsár. \n
                Hé, hölgyeim! Szép nap ez a parádéra! \n
                Menő a fejfedő. \n
                ARANYHAJ \n
                HAMUPIPŐKE \n
                Úszómedencék! Filmcsillagok! \n
                TÚL AZ ÓPERENCIÁN \n
                Bejelentem a gyönyörűségesen szép \n
                Fiona hercegnő és férje \n
                várva várt visszatérését. \n
                Hát, itt vagyunk. \n
                - Itt vannak. \n
                - Itt vannak. \n
                Itt vannak. \n
                Ti csak menjetek! \n
                Én beparkolom a kocsit. \n
                Még mindig úgy gondolod, \n
                hogy ez jó ötlet volt? \n
                Hát persze! Nézd! \n
                Anya és apa örül, hogy lát. \n
                - Hát ezek meg kicsodák? \n
                - Azt hiszem, ez a mi kislányunk. \n
                Ez nem kicsi! \n
                Ez egy nagyon nagy probléma. \n
                Nem úgy volt, hogy a Szőke Herceg \n
                csókja megtöri a varázst? \n
                Hát, ez nem a Szőke Herceg, \n
                de úgy tűnik... \n
                Elégedett? \n
                Jöttünk. Láttunk. \n
                Most menjünk, \n
                mielőtt meggyújtják a fáklyákat. \n
                - Ők a szüleim. \n
                - Bezártak egy toronyba. \n
                Azt hitték, így lesz... \n
                Jó! Menjünk be, és tegyünk úgy, \n
                mintha nem lennénk itthon. \n
                De az a dolgunk, hogy... \n
                Gyorsan! Amikor nem néznek ide, \n
                megléphetünk. \n
                Shrek, hagyd abba! Minden... \n
                Katasztrófa! Lehetetlen, hogy... \n
                - Menni fog. \n
                - Nekem tényleg... \n
                Tényleg... \n
                nem... jó... ez... így... \n
                Itt! \n
                Anya... \n
                Apa... \n
                Szeretném bemutatni a férjemet... \n
                Shreket. \n
                Látni, kitől örökölte Fiona \n
                a szépségét. \n
                Bocsánat! \n
                Ahogy mondani szoktam, \n
                jobb nem bent tartani, igaz, Fiona? \n
                Ez jó. \n
                Vagy mégsem. \n
                Mi az, hogy nem szerepelek a listán? \n
                Ne mondd, hogy nem tudod, ki vagyok. \n
                Mizújs, mindenki? \n
                Köszi, hogy megvártatok. \n
                - Nem volt könnyű idetalálni. \n
                - Ne! Ne! Rossz szamár! Lefelé! \n
                Ne, Apa! Minden rendben. \n
                Semmi gond. Ő velünk van. \n
                - Segített megszökni a Sárkánytól. \n
                - Én voltam a nemes paripa. \n
                Pincér! \n
                Tálat a paripának! \n
                Ajaj! \n
                Bocsánat! Finom a leves, Mrs. K. \n
                Nem, nem. Drágám. \n
                Hát, Fiona, mesélj, hol laktok. \n
                Shreknek van egy birtoka. \n
                - Ugye, édes? \n
                - Ó, persze! \n
                Egy elvarázsolt erdőben... \n
                telis-teli mókusokkal, \n
                aranyos kiskacsákkal és... \n
                Micsoda? \n
                Tutira nem a mocsárról beszélsz. \n
                Egy ogre a mocsárból. \n
                Ez aztán eredeti! \n
                Gondolom, tökéletes hely \n
                felnevelni a gyerekeket. \n
                Egy kicsit korai még erre gondolni, \n
                nemde? \n
                Bizony ám! Épp eszem. \n
                - Ez meg mit jelentsen? \n
                - Apa. Remek hely, jó? \n
                - Az ő fajtájának talán igen. \n
                - A fajtámnak? \n
                Kimennék a mosdóba. \n
                - A vacsora tálalva! \n
                - Semmi gond. Visszatartom. \n
                Mexikói kaja! A kedvencem. \n
                Ne ücsörögjünk itt korgó pocival. \n
                Lássunk hozzá. \n
                Engedje meg, Lillian. \n
                Gondolom, az unokáink... \n
                Ogrék, igen! \n
                Nem mintha ez egyáltalán gond lenne. \n
                Igaz, Harold? \n
                Ó, nem! Dehogy! Egyáltalán! \n
                Már ha fel nem falja \n
                a saját kicsinyeit! \n
                Nem. Mi azokat szeretjük, \n
                akiket a szüleik toronyba zártak! \n
                - Shrek, kérlek! \n
                - Csak azért tettem, mert szeretem. \n
                Ja, óvoda, \n
                avagy sárkány őrizte kastély. \n
                Úgysem értenéd meg. \n
                Te nem vagy az apja! \n
                Milyen szép, \n
                ha együtt vacsorázik a család. \n
                - Harold! \n
                - Shrek! \n
                - Fiona! \n
                - Fiona! \n
                - Anya! \n
                - Harold... \n
                Szamár! \n
                Hulló könnyed idehív, \n
                Jövök, ha bánatos a szív, \n
                Tudom, mit akar minden lány, \n
                Mitől vár rájuk boldogság. \n
                Ajaj! Nézzenek csak oda! \n
                De megnőttél! \n
                - Te ki vagy? \n
                - Ó, édesem! \n
                A te jótündér keresztanyád. \n
                A jótündér keresztanyám? \n
                Ne félj semmitől. \n
                Azért vagyok itt, hogy segítsek. \n
                Csak egy kis... \n
                varázs a pálcámmal, \n
                És a gond rögtön elszárnyal \n
                Csak egy kézmozdulat, egy villanás \n
                És pénzes pasid lesz, nem vitás. \n
                Bármit megér, \n
                csak csinos legyél. \n
                A lelkedben béke, \n
                szobádban rend, \n
                sok bútor barátod \n
                jó légkört teremt, \n
                és nincs több bú, \n
                Ez hát az új trend! \n
                - Így leszel díva, így leszel sztár, \n
                - A sok gavallér mind érted vív \n
                Szobája falára egy nevet ír, \n
                Ha boldogan élnél, Fionát hívd! \n
                És sporthintót kapsz, ha vágtatnál \n
                A kecses kocsis már várva vár \n
                Segítek a sminkelős gondokon, \n
                már nincs narancsbőr a combokon. \n
                Ha azt hiszed, kész, \n
                hát a kutyafülét! \n
                A Jótündér majd kicicomáz, \n
                A pasi pazar, ezt látod már, \n
                Ajakkontúr és arcon pír, \n
                a kajakos úr itt nagyon bír. \n
                A pasi pazar, ezt látod már, \n
                a szénakazal csak rátok vár. \n
                Aranylánc, megy a tánc \n
                Arcán nincsen ránc \n
                Szép, bizony a hasizom \n
                Reggel-este pasizom \n
                A Jótündér majd kicicomáz, \n
                Ajakkontúr... \n
                Állj! \n
                Nagyon szépen köszönöm, \n
                Jótündér, \n
                de nekem erre nincs szükségem. \n
                - Jó, ahogy akarod. \n
                - Amúgy se tetszettél nekünk. \n
                Ó! Kiskutyát kaptál? \n
                Az én szobámban csak sampon volt. \n
                Jótündér, bútorok... \n
                Szeretném bemutatni \n
                a férjemet, Shreket. \n
                A férjedet? Micsoda? Hogy mondtad? \n
                Mikor történt mindez? \n
                Shrek mentett meg engem. \n
                - De ez így nincs rendjén. \n
                - Nagyszerű! Még több rokon! \n
                Csak segíteni akar. \n
                Jó! Akkor segíthet csomagolni. \n
                Vedd a kabátod! Elmegyünk. \n
                - Mi? \n
                - Én nem akarok elmenni. \n
                Mikor döntöttél így? \n
                - Röviddel az érkezésünk után. \n
                - Sajnálom... \n
                Semmi gond. \n
                Amúgy is mennem kell. \n
                De ne feledd, kedvesem! \n
                Ha bármikor szükséged van rám, \n
                a boldogság... \n
                csak egy könnycseppbe kerül. \n
                Köszönjük, \n
                de mi elég boldogok vagyunk így is. \n
                Boldogok, boldogok... \n
                Látom! Gyerünk, Kyle! \n
                - Ez szép volt, Shrek. \n
                - Mi? \n
                Mondtam, hogy nem jó ötlet idejönni. \n
                Megpróbálhattál volna \n
                kijönni az apámmal. \n
                Az volt az érzésem, hogy akkor se \n
                kapom meg apuka áldását... ha akarom. \n
                Nem kérdezné meg valaki azt is, \n
                hogy én mit akarok? \n
                Persze. Becsomagoljam a holmidat? \n
                Hihetetlen vagy! \n
                Úgy viselkedsz, akár egy... \n
                - Rajta! Mondd ki! \n
                - Mint egy ogre! \n
                Hát elárulok valamit! \n
                Akár tetszik a szüleidnek, akár nem... \n
                Akkor is ogre vagyok! \n
                És tudod, mit, hercegnő? \n
                Ez nem is fog megváltozni. \n
                Én sokat változtam érted, Shrek. \n
                Ezt ne feledd! \n
                Ezt finoman csináltad, Shrek. \n
                ''Én akkor is ogre vagyok!'' \n
                - Tudtam, hogy ez lesz. \n
                - Persze. Hiszen te kezdted. \n
                Ezt nem hiszem el, Lillian. \n
                Ő az ogre. Nem én. \n
                Harold, szerintem... \n
                túlságosan magadra veszed. \n
                Fiona őt választotta. \n
                De a herceget kellett volna, \n
                akit kiválasztottunk neki. \n
                Azt akarod, hogy áldásom adjam \n
                erre az... izére? \n
                Fiona már megtette. \n
                És sosem bocsátja meg, ha te nem adod. \n
                Nem akarom \n
                újra elveszíteni a lányunkat, Harold. \n
                Úgy teszel, mintha a szerelem \n
                kiszámítható lenne. \n
                Nem emlékszel, \n
                mikor fiatalok voltunk... \n
                Andalogtunk liliomos tó partján... \n
                - éppen virágoztak... \n
                - Az első csók. \n
                Ez nem ugyanaz! \n
                Talán nem fogod fel, hogy a lányunk \n
                egy szörnyeteghez ment feleségül! \n
                Ó, ne játszd a királyi drámát. \n
                Jó! \n
                Játsszuk, hogy nincs semmi baj! \n
                Hát nem csodás minden? Kíváncsi \n
                vagyok, hogy lehetne még rosszabb! \n
                - Helló, Harold. \n
                - Mi történt? \n
                Semmi, drágám! Csak hasogat \n
                az a régi seb a vadászatról! \n
                - Kimegyek levegőzni. \n
                - Inkább szállj be. \n
                Beszélnünk kell. \n
                Ami azt illeti, Jótündér \n
                épp az ágyba készültem. \n
                Már bevettem az altatóm, \n
                és ez mindig morcossá tesz. \n
                Úgyhogy... \n
                Legyen ez egy villámlátogatás. Mi? \n
                Ó, helló. \n
                Nos, mi újság? \n
                Emlékszel a fiamra, \n
                a Szőke Hercegre? \n
                Te vagy az? Hűha! \n
                Évek óta nem láttalak. \n
                Mikor jöttél vissza? \n
                Ah, vagy öt perce. \n
                Miután kiálltam a jéghideg szeleket, \n
                tűzforró sivatagot... \n
                Felmásztam a legmagasabb torony \n
                legfelső szobájába... \n
                Majd anyuci elintézi. \n
                Kiállja a jéghideg szeleket \n
                és a tűzforró sivatagot! \n
                Felmászik a legmagasabb rohadt torony \n
                legfelső rohadt szobájába... \n
                És mit talál? \n
                Egy nemet tévesztett farkas \n
                közli vele, hogy a hercegnő \n
                már férjhez ment. \n
                Nem az én hibám. \n
                Nem ért oda időben. \n
                Álljunk meg! \n
                Olyasmire kényszerítesz, \n
                amit nem szívesen teszek. \n
                Hol vagyunk? \n
                Isten hozta Friar Fagadójában! \n
                Mit adhatok? \n
                Oda a diétám! \n
                Remélem, most örülsz. \n
                Két Reneszánsz kenyeret, \n
                majó nélkül... chilit... \n
                - Én Középkori Menüt kérek. \n
                - Egy Középkori Menüt, Harold... \n
                - Sült krumplit? \n
                - Köszönöm, nem. \n
                Akkor talán savanyú tacót? \n
                Nem vagyok éhes. \n
                A rendelése, Jótündér. \n
                Ez a Középkori Menühöz jár. \n
                Tessék, kicsim. \n
                Megegyeztünk, Harold, és biztos \n
                nem akarod, hogy visszalépjek. \n
                De nem ám. \n
                Tehát, Fiona és Szőke egymáséi lesznek. \n
                - Igen. \n
                - Hidd el, Harold. Így a legjobb. \n
                Nem csak a lányodnak, \n
                hanem a királyságodnak is. \n
                És mit tehetnék én? \n
                Használd az eszed. \n
                A MÉRGEZETT ALMA \n
                Fáradjon be, Felség! \n
                Én egy kis méreggel \n
                Szeretem e várost \n
                Senki sem tudja... \n
                Elnézést. \n
                Nem ismerjük egymást? \n
                Nem, biztos összetéveszt valakivel. \n
                Bocsánat. \n
                A Csúnya Mostohatestvért keresem. \n
                Á, te vagy az! \n
                Tudod, valakit el kell intéztetnem. \n
                - Ki a fickó? \n
                - Hát, nem szó szerint fickó. \n
                Egy ogréról van szó. \n
                Hé, hadd áruljak el valamit. \n
                Ilyen munkát \n
                csak egyvalaki tud elintézni, de... \n
                nem szereti, ha zavarják. \n
                nem szereti, ha zavarják. \n
                Hol találom? \n
                Halló? \n
                Ki merészel belépni a szobámba? \n
                Bocsánat! Remélem, nem zavarom... \n
                azt mondták, önt keressem, \n
                ha ogre-problémám van? \n
                Jól mondták. \n
                De az ilyesmi sokba kerül. \n
                Ennyi elég lesz? \n
                Szolgálatára állok, Felség. \n
                Csak mondja meg, \n
                hol találom azt az ogrét! \n
                Nemes vitéz, fogadd el ezt \n
                a kendőt hálám jeléül. \n
                NAPLÓ \n
                Drága Naplóm... \n
                Csipkerózsika holnap ott alvós bulit tart, \n
                de apa nem akar elengedni. \n
                Sosem enged el naplemente után. \n
                Apa azt mondja, \n
                egy időre el kell mennem. \n
                Biztos valamilyen iskolába. \n
                Anya azt mondja, ha elég idős leszek, \n
                a Szőke Herceg megment, \n
                és visszahoz a családomhoz. \n
                És mind boldogan élünk, \n
                míg meg nem halunk. \n
                Szőke Hercegné. \n
                Bocsánat. Remélem, \n
                nem zavarok. \n
                Nem, dehogy. \n
                Épp egy rémmesét olvastam. \n
                Reméltem, elnézést kérhetek \n
                korábbi elítélendő viselkedésemért. \n
                Nem tudom, mi ütött belém. \n
                Gondolod, elfeledhetnénk, \n
                és elölről kezdhetnénk mindent... \n
                - Nézze, Felség, én... \n
                - Kérlek, szólíts apának. \n
                Apa, mindketten \n
                úgy viselkedtünk, mint az ogrék. \n
                Tán együtt kéne töltenünk \n
                egy kis időt, megismerni egymást. \n
                Remek ötlet! Reméltem, hogy \n
                elkísérsz a reggeli vadászaton. \n
                Apa-fia együtt? \n
                Tudom, Fionát \n
                végtelenül boldoggá tenné. \n
                Találkozzunk 7:30-kor \n
                az öreg tölgyfánál? \n
                Lásd be, Szamár! Eltévedtünk. \n
                Nem tévedhettünk el. \n
                Pontosan követtük a király utasításait. \n
                ''Menjetek az erdő legsötétebb részébe...'' \n
                ''A vészjósló fák \n
                riasztó ágain túlra.'' \n
                - El a Shirley Bassey bokor mellett! \n
                - De már háromszor elmentünk mellette! \n
                Te nem akartál \n
                kérdezősködni. \n
                Nagyszerű! Itt a lehetőség, \n
                hogy kibéküljek Fiona apjával, \n
                erre eltévedek az erdőben veled! \n
                Ne húzd fel magad! \n
                Csak segíteni akarok. \n
                Tudom! Tudom. \n
                - Sajnálom, jó? \n
                - Ugyan, semmiség. \n
                Tényleg ki akarok békülni \n
                ezzel a fickóval. \n
                Persze. Na, keressük meg apucit! \n
                Nocsak, nocsak, Szamár! \n
                Tudom, hogy ez az előbb gyengéd \n
                pillanat volt, de dorombolsz? \n
                Én nem dorombolok. \n
                Persze! Mi lesz még? Ölelés? \n
                A szamarak nem dorombolnak. \n
                Minek nézel te, valamilyen... \n
                Reszkess, ha mersz! \n
                Nézd! Egy kiscica. \n
                - Nézd, Shrek! Fegyvere van! \n
                - Szamár, ez egy macska. \n
                Gyere ide, cic, cic! \n
                Gyere cicuska! Gyere ide! \n
                Ó! Gyere szépen, kiscica! \n
                - Tarts ki, Shrek! Jövök! \n
                - Gyere! Szedd le rólam! Szedd le! \n
                - Vigyázz, Shrek! Ne mozdulj! \n
                - Szedd le! \n
                Shrek! Ne mozdulj! \n
                - Elvétettem? \n
                - Nem. Tökre pontos volt. \n
                Na, te ogre, könyörögj kegyelemért... \n
                Mert itt a Kandúr, a Csizmás. \n
                Kinyírom ezt a macskát! \n
                - Szőrcsomó. \n
                - Aú! Rettenet! \n
                Mit csináljunk vele? \n
                Heréld ki a karddal. \n
                Csináljunk úgy, mint Bob Barker. \n
                Esdeklek, uram! Nem személyes ügy, \n
                Senyor. A családomért tettem. \n
                Az anyám beteg. \n
                Apám a szemétdombon él! \n
                A király sok aranyat ígért, \n
                és lesz egy alom testvérem... \n
                Fiona apja bérelt fel? \n
                A gazdag király? Sí. \n
                Ennyit az atyai áldásról. \n
                Ne aggódj! Téged szinte \n
                mindenki ki akar nyírni. \n
                Hű, köszi! \n
                Talán jobb lett volna Fionának, \n
                ha én valami szőke herceg vagyok. \n
                Ezt mondta a király. \n
                Bocs. Azt hittem, \n
                engem kérdeztek. \n
                Fiona tudja, \n
                hogy bármit megtennél érte. \n
                Én megváltoznék, ha tudnék. \n
                Bárcsak boldoggá tudnám tenni! \n
                Várjunk csak... \n
                A boldogság \n
                csak egy könnycseppbe kerül. \n
                Szamár! Gondolj életed \n
                legszomorúbb pillanatára! \n
                Hű, haver, hol is kezdjem? \n
                Először az öreg gazda \n
                el akart adni holmi varázsbabért. \n
                Aztán egy dilis buliján \n
                a vendégek farkat akartak szegezni rám. \n
                Berúgtak, és egy pálcával vertek \n
                miközben azt kiabálták ''Pinyata!'' \n
                Amúgy mi az a pinyata? \n
                Nem, Szamár! Azt akarom, hogy sírj! \n
                Ne vetítsd ki a problémád rám, jó? \n
                Tudom, hogy bánatod van, de... \n
                Te kis, szőrös, szemétnyaló... \n
                Mi? Már megy? \n
                Itt a Jótündér beszél. \n
                Vagy házon kívül vagyok, vagy ügyféllel. \n
                De ha betér az irodánkba, \n
                adunk egy időpontot. \n
                Legyen ''boldog, míg meg nem hal. '' \n
                Mit szólnál egy küldetéshez, Szamár? \n
                Ezt már szeretem! Shrek és Szamár \n
                újra kalandra indul! \n
                Senki sem állíthat meg bennünket! \n
                Gyí! Indulunk! \n
                - Állj, ogre! Félreismertelek. \n
                - Ezzel nem vagy egyedül. \n
                Kötelességem követni téged, \n
                míg meg nem mentem az életedet, \n
                amiért te megkímélted az enyémet. \n
                Az idegesítő beszélő állat helye \n
                már foglalt. \n
                Menjünk, Shrek! Shrek? \n
                Ugyan, Szamár! Nézz rá... \n
                az iciri-piciri csizmácskákban. \n
                Hány macskának állna jól a csizma? \n
                - Tartsuk meg! \n
                - Mi van? \n
                Hallod? Dorombol! \n
                - Akkor most már aranyos? \n
                - Ne izélj, Szamár! Lazíts! \n
                Lazítsak? Még hogy én. \n
                Még ő mondja, hogy lazítsak! \n
                Mindkettő ünnepélyes, ugye? \n
                Te mit gondolsz, Harold? \n
                Igen, jó. Jó. \n
                Legalább tégy úgy, mintha érdekelne \n
                a lányod gálája. \n
                Lillian, szerintem az úgysem számít. \n
                Honnan tudjuk, hogy lesz-e gála? \n
                Anya. Apa. \n
                - Szervusz, drágám. \n
                - Mi az? Igen! Megyek. \n
                Anya, nem láttad Shreket? \n
                Nem. Kérdezd meg apádat! \n
                De csak tőmondatokban! \n
                Kissé lassú ma reggel. \n
                - Segíthetek, Felség? \n
                - Igen! \n
                Kiváló. Ez milyen étel? \n
                Ez a kutya reggelije, Felség. \n
                Igen. Nagyon helyes. \n
                Folytassa, Cedric. \n
                - Apa? Nem láttad Shreket? \n
                - Nem láttam, drágám. \n
                Biztosan keresett valami pocsolyát, \n
                hogy lehűtse magát. \n
                Tudod, a tegnap esti vitátok után. \n
                Szóval hallottad? \n
                Az egész királyság hallotta. \n
                Elvégre a természeténél fogva \n
                durva néha. \n
                Ő? Tudod, te sem voltál \n
                valami vendégszerető. \n
                Hát, mit vártál? \n
                Nézd, mit tett veled. \n
                Shrek olyannak szeret, amilyen vagyok. \n
                Azt hittem, velem együtt örülsz majd. \n
                drágám, én csak azt akarom, \n
                ami neked a legjobb. \n
                Talán neked is ezt kellene tenned. \n
                Ne, tényleg? \n
                Itt lakik az öreg Keebler. \n
                Hátráljunk lassan! \n
                Ez a Jótündér kunyhója. \n
                Ő a legnagyobb varázsital- \n
                és gyógyírgyártó az egész királyságban. \n
                Akkor miért nem ugrunk be egy italra? \n
                Varázsitalra. \n
                Megnevettet. \n
                Helló. Itt találom a...? \n
                A Jótündért? \n
                Sajnálom, nincs itt. \n
                Jerome! Kávét és egy Monte Cristót. \n
                Azonnal! \n
                Igenis, Jótündér. Máris. \n
                Nézzétek, ma nem fogad ügyfelet, jó? \n
                Mi a szakszervezettől vagyunk. \n
                A szakszervezettől? \n
                Az összes mágikus iparág munkásait \n
                képviseljük. Jókat és gonoszakat is. \n
                Á! Értem. \n
                Rosszul bánnak veled? \n
                Elnyomottnak érzed magad? \n
                Egy kicsit. \n
                Még ingyenes fogászat sincs. \n
                Még ingyenes fogászat sincs. \n
                Csak körülnézünk egy kicsit. \n
                Szerintem jobb lenne, ha a Jótündér \n
                nem tudná, hogy itt vagyunk. \n
                Érted, mire gondolok? He? \n
                - Hagyd abba! \n
                - Persze. Menjetek csak! \n
                Egy csepp vágy. \n
                Huncut. \n
                Egy csipetnyi szenvedély. \n
                És egy kevéske... \n
                kéj! \n
                Bocsánat. \n
                Elnézést a tolakodásért... \n
                Grimm szerelmére, \n
                mit kerestek itt? \n
                Úgy tűnik, Fiona nem valami boldog. \n
                És az a kérdés, miért is van ez? \n
                Nézzünk csak utána! \n
                Hercegnő. Hamupipőke. \n
                Megvan. ''Boldogan éltek, \n
                míg meg nem haltak.'' Ó... \n
                Ogre sehol! \n
                Lássuk Hófehérkét! \n
                Jóképű herceg. Ogre nuku. \n
                Csipkerózsika. Ogre sehol! \n
                Jancsi és Juliska? Nincs! \n
                Hüvelyk Panna? Nincs. \n
                Aranymadár, \n
                A kis hableány, Micsoda nő... \n
                Nincs, nincs, nincs, nincs, nincs! \n
                Az ogrék nem élnek boldogan, \n
                míg meg nem halnak. \n
                Hát ide figyelj, asszonyság! \n
                Ne mutogass rám... \n
                azokkal a mocskos zöld hurkákkal! \n
                A Monte Cristo és a kávé. \n
                Ó! Bocsánat. \n
                Semmi gond. \n
                Épp távozni készültünk. \n
                Sajnálom, hogy az idejét vesztegettük. \n
                Csak menjetek! \n
                Gyerünk, fiúk! \n
                Hála az égnek, itt a péntek, haver! \n
                Vagy keményen dolgozol, \n
                vagy alig, mi, Mac? \n
                VARÁZSITAL TEREM \n
                Vidd a képemből a puccos csizmád \n
                meg a macskaképed! Fújj, de büdös! \n
                Te sem vagy épp rózsaillatú. \n
                - Ezek egyike biztos segít. \n
                - Nekem is pont ez a tervem! \n
                Máris egyre jár az agyunk. \n
                Ha benyalizás-szakértő kell, \n
                majd szólunk. \n
                Shrek, ez nem valami jó ötlet. \n
                Tedd magad hasznossá, \n
                és őrködj! \n
                Kandúr, el tudod érni \n
                azokat ott a tetején? \n
                No problema. \n
                Kilenc életemből egyet besurranóként \n
                éltem Santiago de Compostelában. \n
                Shrek, elment az eszed? \n
                Szamár, te őrködj. \n
                Őrködjek? Ja, majd figyelek. \n
                Megfigyelem, ahogy a boszorkány egy \n
                csomó fájdalmat zúdít az alfeledre. \n
                És majd jót nevetek. \n
                Magamban kuncogok majd. \n
                - Mit látsz? \n
                - ''Varangyszéklet-lágyító''? \n
                Tutira, szedjen hashajtót \n
                házassági problémákra. \n
                ''Elfa Seltzer''? \n
                - ''Hex Lax''? \n
                - Nem! Próbáld a ''jóképű''- t. \n
                Sajnálom. Olyan nincs. \n
                Hé! A ''Boldogan, amíg meg nem hal'' \n
                megfelel? \n
                Az mit tud? \n
                Aszongya: ''Isteni szépség.'' \n
                Egyes kultúrák a szamarat \n
                a legbölcsebb lénynek tartják. \n
                Főleg a beszélőket. \n
                Be kell érnünk ezzel. Jönnek. \n
                Mehetünk már? \n
                Siess! \n
                Szép volt, Szamár! \n
                Végre hasznát vesszük a szádnak. \n
                Gyerünk! \n
                Nem érdekel, ki a felelős. \n
                Csak takarítsatok ki itt! \n
                És valaki hozzon valami sült, \n
                csokoládéba mártott akármit! \n
                - Anya! \n
                - Szőke. Édesem. \n
                Rosszkor jössz, kicsikém. \n
                Anyuci dolgozik. \n
                Hű, itt meg mi történt? \n
                Az ogre járt itt! \n
                Micsoda? Hol van, anya? \n
                Elválasztom a fejét a testétől! \n
                Ott helyben agyoncsapom! \n
                Bánni fogja a napot, \n
                mikor elrabolta tőlem a királyságomat! \n
                Tedd el, fiatalúr! \n
                Így is király leszel. \n
                Csak valami okosabbat \n
                kell kitalálnunk. \n
                Minden megvan, Jótündér, \n
                egy varázsitalt kivéve. \n
                Micsoda? \n
                Szerintem ez még az előnyünkre válhat. \n
                ''Boldogan, amíg meg nem hal. \n
                Maximális erejű varázsital. \n
                ''Önnek és hű szerelmének. \n
                ''Oda-vissza hat. \n
                ''Boldogság, kényelem, isteni szépség.'' \n
                - Oda-vissza hat? \n
                - Tehát Fionára is hatni fog. \n
                Hé, nekem ez nem tetszik, haver. \n
                Szamárösztönöm vészt jelez. \n
                Dobd el azt a vudu bigyót, \n
                és húzzuk el a csíkot! \n
                Aszongya: ''Isteni szépség.'' \n
                Csak nem lehet olyan rossz? \n
                Látod, allergiás vagy rá. \n
                Bajod lesz tőle. \n
                És ha azt hiszed Vapor Rubbal \n
                kenegetem majd a mellkasod, tévedsz! \n
                Főnök, ha esetleg \n
                valami baj lenne a varázsitallal... \n
                hadd próbáljam én ki előbb. \n
                Megtiszteltetés lenne \n
                életemet áldozni érted. \n
                Azt már nem! Ha \n
                állatkísérlet kell, én leszek az alany. \n
                Hagyd ezt a legjobb barátra! \n
                Add ide azt a flaskót! \n
                Hogy érzed magad? \n
                Nem érzek semmi változást. \n
                Másképp nézek ki? \n
                Nekem még mindig \n
                egy nagy szamárnak tűnsz. \n
                Talán szamarakra nem hat. \n
                Kettőnkre, Fiona. \n
                - Ha megiszod, nincs visszaút. \n
                - Tudom. \n
                - Nincs több iszapdagonya. \n
                - Tudom. \n
                - Se farvakargatás? \n
                - Tudom! \n
                - De te szeretsz ogre lenni! \n
                - Tudom! \n
                De Fionát még jobban szeretem. \n
                Shrek, ne! Várj! \n
                Ez... Szerintem ez a ''Szellentettek \n
                míg meg nem haltak'' varázsital. \n
                Talán selejt. \n
                Vagy talán Fionát \n
                nem nekem rendelte a sors. \n
                Mit mondtam? \n
                Valamit érzek. \n
                Nem akarok meghalni. \n
                Nem akarok meghalni! \n
                Ó, kegyelmes szűz, irgalmazz! \n
                Olvadok! \n
                Olvadok! \n
                Ez csak az eső, Szamár. \n
                Ne aggódj! Minden baljós, \n
                mert sötét van és esik... \n
                és Fiona apja felbérelt egy pancsert, \n
                hogy hidegre tegyen. \n
                Reggel minden jobb lesz. \n
                Meglátod... \n
                Felkel a nap \n
                holnap! \n
                Lefogadom az alfeledre... \n
                Lefogadom az alfelemre? \n
                Jövök, Elizabeth! \n
                Jól vagy? \n
                Hé, főnök, borotváljuk kopaszra! \n
                Hát itt vagy! \n
                Hiányoltunk a vacsoránál. \n
                Mi a baj, drágám? \n
                Gondolkodtam azon, \n
                amit mondtál. \n
                Mindent rendbe hozok. \n
                Kiváló! Ez a jó kislány. \n
                Hiba volt idehozni Shreket. \n
                Megyek, megkeresem. \n
                És aztán visszamegyünk a mocsárba, \n
                ahova tartozunk. \n
                Fiona, kérlek! \n
                Ne hamarkodjuk el! \n
                Most úgyse mehetsz sehová. \n
                Nézd, mondtam, hogy itt van. Nézd meg! \n
                Csendben! Nézd meg! \n
                Jó reggelt, álomszuszék. \n
                Tetszik a cicuskád! \n
                - A fejem... \n
                - Tessék, hoztam egy vödör vizet. \n
                Köszönöm. \n
                Cuki, pisze orr? \n
                Kövér, hullámos hajfürtök? \n
                Feszes, kerek alfél? \n
                Ez... \n
                - Csodálatos! \n
                - Úgy ám! \n
                Kata vagyok. Hát te? \n
                - Shrek. \n
                - Shrek? Hű! Európai vagy? \n
                - Feszült vagy. \n
                - Masszírozom a vállad. \n
                - Az már az enyém. \n
                - Nekem nincs mit masszíroznom. \n
                Állj sorba! \n
                Láttátok a szamaramat? \n
                Kit hívsz te Szamárnak? \n
                - Szamár? Ez egy... \n
                - Csődör, bébi! \n
                Tudok nyeríteni. Számolni. \n
                Nézd, Shrek! Ügetek! \n
                Ez ám a minőségi varázsital. \n
                Mi van benne? \n
                ''Ó, ne idd meg, Mr. Főnök, \n
                nagyon rossz.'' \n
                ''Figyelem! Mellékhatások: \n
                égés, viszketés, izzadás, sírás. \n
                ''Nem ajánlott szívbetegeknek \n
                és... idegkárosultaknak.'' \n
                Ügetek, helyben ügetek! \n
                Mi van? \n
                ''Hogy a varázsital hatása \n
                tartós legyen \n
                ''éjfélig meg kell csókolnia \n
                hű szerelmét.'' \n
                Éjfélig? \n
                Miért mindig éjfélig? \n
                - Leszek én a hű szerelmed! \n
                - Én leszek az hű szerelmed. \n
                Én hű leszek... többnyire. \n
                Nézzék, hölgyeim, \n
                már van hű szerelmem. \n
                És higgy nekem, főnök! \n
                A hercegnő elégedett lesz. \n
                És őszintén szólva, \n
                látványnak is jobb vagy. \n
                Odabent ugyanaz a régi vad, \n
                paprikás kedvű... \n
                - Nyugi. \n
                - ...morcos, morgó, \n
                mérges ogre vagy, aki voltál. \n
                Te meg ugyanaz \n
                az idegesítő szamár. \n
                Ja. \n
                Vigyázat, hercegnő! \n
                Itt jön az új én. \n
                Mindent sorjában. Először is \n
                meg kell szabadulnod a ruháidtól. \n
                - Mehet? \n
                - Mehet! \n
                Kocsis, állj! \n
                Jaj, Istenem! Segítsen, kérem! \n
                Oda a versenykarrierem! \n
                Megvakultam! \n
                Fogok én még valaha hegedűn játszani? \n
                Te szegény pára! \n
                Tehetek valamit érted? \n
                Hát, lenne itt valami. \n
                Vedd le a parókád, \n
                és lépj hátrébb a nadrágodtól. \n
                - Nem rossz. \n
                - Egyáltalán nem rossz. \n
                Apám? Minden rendben, apám? \n
                Köszönöm, uraim! \n
                Egyszer majd meghálálom. \n
                Már ha megtalállak \n
                vagy nem felejtem el. \n
                Mondd meg Fiona hercegnőnek, \n
                hogy férje, Sir Shrek akarja látni! \n
                Szia, szépfiú. \n
                - Hercegnő! \n
                - Szamár? \n
                Hű! A varázsital rád is hatott? \n
                Milyen varázsital? \n
                Shrekkel ittunk egy varázsitalból, és... \n
                Most szexisek vagyunk! \n
                Neked, bébi... szívesen. \n
                - Bírnád, mi. \n
                - Szamár, hol van Shrek? \n
                Bement, téged keres. \n
                Akarsz táncolni, szépfiú? \n
                Máris elmész? \n
                Nem akarod látni a feleségedet? \n
                Aha, Fiona. Én vagyok az. \n
                Mi történt a hangoddal? \n
                A varázsital sok mindenen \n
                változtatott, Fiona. \n
                De azon nem, ahogy irántad érzek. \n
                Szőke? \n
                Tényleg? \n
                Atyám? Reméltem, \n
                hogy tetszeni fog. \n
                - Ki vagy te? \n
                - Anyám, én vagyok az, Shrek. \n
                Tudom, első benyomást \n
                nem tehet másodjára az ember, \n
                de, mit szólsz ehhez? \n
                A csodába! Szerintem \n
                nem hallanak bennünket, galambom. \n
                Nem gondolod, hogy már így is eléggé \n
                összekutyultad az életét? \n
                Csak azt akartam, hogy boldog legyen. \n
                És most az lehet. \n
                Ó, édesem. \n
                Végre megtalálta álmai szőke hercegét. \n
                De nézz rám! \n
                Mit meg nem tettem érte. \n
                Ideje, hogy felébredj \n
                a tündérmeséből, Shrek. \n
                Ő hercegnő. \n
                Te meg ogre vagy. \n
                Ezen semennyi varázsital \n
                nem tud változtatni. \n
                De... \n
                Szeretem. \n
                Ha tényleg szereted... \n
                akkor elengeded. \n
                Mi folyik itt? \n
                Hova mész? \n
                Ugye, neked ehhez \n
                semmi közöd sincs, Harold? \n
                Nem jók az emberek \n
                Ezt aztán jegyezd jól meg \n
                Tessék, fiúk. \n
                Hagyd az üveget, Foris! \n
                Miért lógatod az orrod? \n
                Az egész egy ostoba félreértés volt. \n
                Egyáltalán nem kellett volna \n
                megmentenem a toronyból. \n
                Gyűlölöm a hétfőket. \n
                El se hiszem, hogy elengeded, \n
                ami a legjobb az életedben. \n
                Mi mást tehetnék? \n
                Azt a szépfiú Szőke Herceget szereti. \n
                Ugyan már! Tényleg olyan jóképű? \n
                Viccelsz? Lélegzetelállító! \n
                Az arca olyan, \n
                mintha angyalok faragták volna ki. \n
                Mesésen hangzik. \n
                Meglepő módon \n
                ettől nem érzem magam jobban. \n
                Nézzétek, srá***, így a legjobb. \n
                Apuci, anyuci áldását adja rá, \n
                és Fiona megkapja álmai hercegét. \n
                Mindenki nyer. \n
                Kivéve téged. \n
                Nem értem, Shrek. \n
                Szereted Fionát. \n
                Ezért kell lemondanom róla. \n
                Elnézést, ő itt van? \n
                Hátul. \n
                Megint szia. \n
                Jótündér. Szőke. \n
                Remélem, jó okod van rá, \n
                hogy iderángattál, Harold. \n
                Attól tartok Fiona nem igazán... \n
                kedvelte meg a Szőke Herceget. \n
                - Csak hogy tudd, nem az én hibám. \n
                - Hát persze, hogy nem. \n
                Hogy legyek elbűvölő... mikor \n
                egy szörnyű ogrét kell alakítanom? \n
                Nem! Nem, senki se tehet róla. \n
                Talán jobb lenne lefújni az egészet. Jó? \n
                - Micsoda? \n
                - A szerelmet... nem lehet erőltetni! \n
                Ezzel nem értek egyet. \n
                Nekem ez a munkám! \n
                Itasd meg ezt Fionával, és beleszeret \n
                az első férfiba, akit megcsókol. \n
                És az Szőke lesz. \n
                - Nem. \n
                - Mit mondtál? \n
                Nem tehetem. Nem teszem meg. \n
                Dehogynem. \n
                Ne feledd... Én intéztem el, \n
                hogy boldogan élj, míg meg nem halsz. \n
                Ugyanúgy vissza is csinálhatom. \n
                Tényleg azt akarod? Azt? \n
                - Nem. \n
                - Okos fiú. \n
                Most mennünk kell. Meg kell igazítanom \n
                Szőke haját a gála előtt. \n
                Reménytelen eset. Elől feláll. \n
                Hátul sosem éri el. Valakinek \n
                hátul is meg kell igazítania. \n
                Köszönöm, anyám. \n
                Anyám? \n
                Borogass! Egy beszélő ló! \n
                Az ogre! \n
                Állítsák meg! Tolvajok! Banditák! \n
                Állítsák meg! \n
                Mindenki remek, mindenki menő \n
                dorbézosz maximus lesz a ma esti \n
                Túl az Óperencián Királyi Gálán! \n
                Felsorakoztak a kocsik, \n
                és dől belőlük a krémek krémje, \n
                akár a varázsbögréből. \n
                Mindenki itt van, aki számít, \n
                hogy tisztelegjen Fiona és Shrek előtt. \n
                Istenem, de gyönyörűek a ruhák! \n
                Ó! Jancsi és Juliska! \n
                Minek dobálnak morzsát? \n
                Őket követi \n
                Hüvelyk Matyi és Hüvelyk Panna! \n
                Hát nem imádnivalók! \n
                És itt jön Csipkerózsika! \n
                Fáradtnak tűnik. \n
                És ki ez? Ki ez? Na, ki ez? \n
                Ő az egyszeri, az egyetlen... \n
                Ő a Jótündér! \n
                Helló, Túl az Óperencián! \n
                Hadd hallom, hú, hú! \n
                Éljetek boldogan míg... \n
                De a többit úgyis tudjátok! \n
                Visszakapcsolunk \n
                a Túl az Óperencián Királyi Gálára, \n
                a reklám után. \n
                Utálom a gálaközvetítéseket. \n
                Halálra unom magam. \n
                Kapcsolj a ''Kerékbetörés''- re! \n
                Nem kapcsolok sehová, \n
                amíg nem látom Shreket és Fionát. \n
                Huss nektek, fiúk. \n
                Egerek, adjatok egy bölényszárnyat! \n
                Nem, balra tőletek. Balra! \n
                - Ma a ''Lovagokban''... \n
                - Ez tuti műsor! \n
                Egy fehér musztáng tart kelet felé \n
                az erdőben. Erősítést kérünk. \n
                A vasemberek \n
                tudassák a eszement emlősökkel... \n
                hogy az ''ördögi lovasok'' \n
                itt nem menő dolog. \n
                Miért fogtok le? \n
                Rendőri brutalitás! \n
                Beszélnem kell Fiona hercegnővel! \n
                Figyelmeztettünk! \n
                Megússzák ezt? \n
                Vagy kibújik a macska a zsákból? \n
                Kapitalista disznó kutyák! \n
                - Macskagyökér! \n
                - Az nem az enyém. \n
                Találjátok meg Fiona hercegnőt! \n
                Én szamár vagyok! \n
                Mondjátok meg neki... \n
                Hogy a férje vagyok, Shrek! \n
                Gyorsan, vissza! \n
                A férje vagyok, Shrek! \n
                Drágám? \n
                Gondoltam, hogy itt talállak. \n
                Mit szólnál egy csésze forró teához \n
                a gála előtt? \n
                Nem megyek el. \n
                Az egész királyság itt van, \n
                hogy megünnepelje a házasságod. \n
                Csak egy gond van. \n
                Ez nem az én férjem. \n
                Csak nézz rá! \n
                Igen, kissé más, de... \n
                az emberek megváltoznak azért, \n
                akit szeretnek. \n
                Meglepne, ha tudnád, \n
                én menyit változtam az anyádért. \n
                Megváltozott? \n
                Neki teljesen elment az esze! \n
                Gyere el a gálára, \n
                és adj neki még egy esélyt! \n
                Talán mégis megkedveled \n
                ezt az új Shreket. \n
                De én a régibe lettem szerelmes, apa. \n
                Bármit megadnék érte, \n
                hogy visszakapjam. \n
                Drágám! Ez az enyém. Koffeinmentes. \n
                Különben egész éjjel fenn lennék. \n
                Köszönöm. \n
                Ki kell jutnom innen! \n
                Nem zárhatnak be! Engedjenek ki! \n
                És mi van a jogaimmal? \n
                Azt kéne mondaniuk, jogom van hallgatni. \n
                Senki sem mondta, \n
                hogy jogom van hallgatni! \n
                Jogod, az van a hallgatásra. \n
                De a képesség hiányzik belőled. \n
                Ki kell tartanom, mielőtt én is \n
                teljesen begolyózom. \n
                Shrek? Szamár? \n
                Túl késő. \n
                Mézi! Pinokkió! Szabadítsatok ki! \n
                Vigyázz, tűz! \n
                Vigyázat odalent! \n
                Gyorsan! Hazudj valamit! \n
                - Mit mondjak? \n
                - Bármit, csak gyorsan! \n
                Valami képtelenséget, hogy: \n
                ''Női bugyi van rajtam!'' \n
                Női bugyi van rajtam. \n
                - Tényleg? \n
                - Dehogy is! \n
                Úgy tűnik, mégiscsak! \n
                - Dehogy! \n
                - Milyen? \n
                - Tanga! \n
                - Az alsónadrág! \n
                - Nem az. \n
                - De igen! \n
                - De nem! \n
                - De igen! \n
                Így, ni! Várj! \n
                Hé, várj! \n
                - Elnézést! \n
                - Micsoda? Kandúr! \n
                Elnézést, elengedne, kérem? \n
                - Bocs, főnök. \n
                - Meg kell akadályoznunk a csókot! \n
                Azt hittem, lemondasz róla. \n
                Nem hagyhatom, \n
                hogy ezt tegyék Fionával. \n
                Bumm! Ez a beszéd! \n
                Nicsak, ki tért észhez! \n
                Sosem jutunk be. A várat őrzik, \n
                vizesárok is van, meg minden! \n
                Srá***, úgy tűnik, a csokiutcára \n
                kerültünk... egy cukorgaras nélkül. \n
                - Mi van? \n
                - Ismered még a Nagy Lepényt? \n
                Hát persze! \n
                A Frury Lane-en lakik. Miért? \n
                Mert lisztre lesz szükségünk. \n
                Sok lisztre. \n
                Fűtsd be a kemencét, Nagy Lepény! \n
                Nagy rendelést adunk le! \n
                PÉKSÉG \n
                Életre kelt! \n
                Szaladj, ahogy csak a lábad bírja! \n
                Rajta, babám, menj! \n
                Ott van, Süttyő! A várba! \n
                Ne, te ostoba, nagy sütemény! \n
                Rajta! \n
                Süttyő! Ott lent! Nézd a pónit! \n
                Ez az! Kövesd a pici pónit! \n
                A pici póni játszani akar a várban! \n
                Hölgyeim és Uraim. \n
                Bemutatom... Fiona hercegnőt \n
                és férjét... \n
                Shrek herceget. \n
                Shrek, mit csinálsz? \n
                Csak játszom a szerepem, Fiona. \n
                Ajakfény van a szádon? \n
                Cseresznyés. Megkóstolod? \n
                - Mi ütött beléd? \n
                - De cukorfalat... \n
                C- mollban, legyen C- mollban! \n
                Hölgyeim és Uraim. \n
                Hadd ajánljam ezt a dalt... \n
                Fiona hercegnőnek és Shrek hercegnek. \n
                Fiona, hercegnőm. \n
                Megtisztelsz egy tánccal? \n
                Hol vannak a férfiak \n
                És hol az istenek? \n
                Hol a menő Herkules \n
                Kit legyőzni nem lehet? \n
                Te mióta táncolsz? \n
                Fiona, drágám... \n
                egy dolgot biztosan tudok, \n
                a szerelem tele van meglepetésekkel. \n
                Éjjelente \n
                Én forgolódom \n
                Ábrándozom, hogy mi kell... \n
                Na gyerünk! \n
                Ide egy hős kell! \n
                Jól van, pajtikám! \n
                Legyünk ünneprontók! \n
                Emberek a katapultokhoz! \n
                Cél! Tűz! \n
                - Csatoljátok be a biztonsági öveket! \n
                - Hű, fény! \n
                A gumicukor gombot ne! \n
                Becsapódik! \n
                Ez az! \n
                Hogyha elmúlt az éj \n
                Legvadabb álmaimban \n
                Gyerünk, Süttyő! Ez az! \n
                Emberek a kondérokhoz! \n
                Csak utá***, Süttyő. \n
                - Ez az! Húzd! \n
                - Hő! Vigyázz! \n
                Forrón, kevesebb habbal! \n
                Ott, hol a hegyek \n
                az éggel összeérnek... \n
                Ott, hol szél zúg tenger hátán... \n
                Megesküdnék rá, \n
                hogy valaki vigyáz rám... \n
                Húzd! \n
                Légy jó! \n
                Szüksége van rám! Eressz el! \n
                Kandúr! \n
                Menj! Asszonyodnak szüksége van rád! \n
                Ma törlesztem az adósságom. \n
                En garde! \n
                Legyen erős és legyen ő gyors... \n
                És csatából hozza a sors \n
                - Ide egy hős kell. \n
                - Állj! \n
                Hé, te! Hagyd békén a feleségemet! \n
                Nem bírsz visszamenni a mocsaradba... \n
                és békénhagyni bennünket? \n
                - Most! \n
                - Kismalacok und lepedő! \n
                Pinokkió! A varázspálcát! \n
                Látom Londont! Franciahont! \n
                Igazi fiú lettem! \n
                Szamár! \n
                Igazi fiú lettem. \n
                Az az enyém! \n
                Könyörögj kegyelemért... \n
                A Kandúrhoz és a Szamárhoz! \n
                Ivott a varázsitalból! \n
                Csókold meg! \n
                Meg kellett volna itatnod vele \n
                a varázsitalt! \n
                A rossz csészét adhattam oda. \n
                Mami! \n
                Mami? \n
                Mondtam, hogy... \n
                az ogrék nem élnek boldogan, \n
                míg meg nem halnak. \n
                Ó, apa! \n
                - Ő most...? \n
                - Aha. \n
                Kuruttyolt. \n
                Reméltem, hogy sosem látsz így. \n
                És még ennek nem tetszettél! \n
                Nem, igaza van. Elnézést. \n
                Mindkettőtöktől. \n
                Csak a legjobbat akartam Fionának. \n
                De most látom, \n
                hogy már megkapta. \n
                Shrek, Fiona... \n
                elfogadjátok egy öreg béka \n
                bocsánatkérését \n
                és az áldásomat? \n
                Sajnálom, Lillian. Bár olyan férfi \n
                lennék, akit megérdemelsz. \n
                Sohasem voltál ilyen közel hozzá. \n
                A varangyokkal együtt. \n
                Főnök! A boldogság varázsital! \n
                Éjfél van! \n
                Fiona... ez az, amire vágysz? \n
                Hogy örökre így maradjunk? \n
                - Micsoda? \n
                - Mert ha most megcsókolsz, \n
                ilyenek maradhatunk. \n
                Megtennéd? \n
                - Értem? \n
                - Igen. \n
                Arra vágyom, amire minden hercegnő. \n
                Hogy boldogan éljek, \n
                míg meg nem halok... \n
                az ogréval, akihez férjhez mentem. \n
                Bármi lesz is, nem szabad sírnom! \n
                Nem ríkathattok meg! \n
                ÉLJEN AZ IFJÚ PÁR \n
                Nekem most is \n
                táltosparipa vagy. \n
                Hol is tartottunk? \n
                Már emlékszem. \n
                Nem úgy volt, hogy bulizunk? \n
                Kandúr, Szamár, hé... \n
                Te jössz! \n
                Szia, szépfiú! \n
                Énekeld el még egyszer! \n
                Szamár, ez spanyolul van! \n
                Oly egyedül... \n
                Oly egyedül... \n
                Ne legyek én \n
                Soha többé egyedül \n
                Megyünk a Kit-Kat Clubba. \n
                Gyere, tarts velünk! \n
                Köszi, compadre. \n
                De... Nincs kedvem hozzá. \n
                Mi majd felvidítunk! \n
                Keresünk egy kis burrót! \n
                Hé, bébi! \n
                Ez a jó kislány! Igen! Ez az! \n
                Hol voltál, babám? \n
                Én is sajnálom. Maradnom kellett volna. \n
                De Shreknek dolga akadt. \n
                Hogy? Mondd még egyszer! \n
                Miket beszélsz? \n
                Komolyan? \n
                Nézd a kis mutáns gyerekeinket! \n
                Állást kell szereznem." << atlag << std::endl;
    return 0;
}
# mosze-2024-teszt
# mosze-2024-teszt
