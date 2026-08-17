void SetGameOptionComponent___ctor(SetGameOptionComponent_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void SetGameOptionComponent__Awake(SetGameOptionComponent_o *this, const MethodInfo *method)
{
  ;
}


void SetGameOptionComponent__CreateContentsArrayIfNotYet(SetGameOptionComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x0
  __int64 v4; // x1
  System_String_o *v5; // x2
  System_String_o *v6; // x3
  int32_t v7; // w4
  int32_t v8; // w5
  bool v9; // w6
  bool v10; // w7
  struct SetResolutionOptionControl_o *setResolutionOptionCtr; // x21
  __int64 v12; // x20
  __int64 v13; // x1
  System_String_o *v14; // x2
  System_String_o *v15; // x3
  int32_t v16; // w4
  int32_t v17; // w5
  bool v18; // w6
  bool v19; // w7
  struct SetSmoothnessControl_o *setSmoothnessCtr; // x21
  System_String_o *v21; // x2
  System_String_o *v22; // x3
  int32_t v23; // w4
  int32_t v24; // w5
  bool v25; // w6
  bool v26; // w7
  struct SetVolumeControl_o *setVolCtr; // x21
  System_String_o *v28; // x2
  System_String_o *v29; // x3
  int32_t v30; // w4
  int32_t v31; // w5
  bool v32; // w6
  bool v33; // w7
  struct SetScenarioTextSpeedControl_o *setScenarioTextSpeedCtr; // x21
  System_String_o *v35; // x2
  System_String_o *v36; // x3
  int32_t v37; // w4
  int32_t v38; // w5
  bool v39; // w6
  bool v40; // w7
  struct SetScenarioControl_o *setScenarioCtr; // x21
  System_String_o *v42; // x2
  System_String_o *v43; // x3
  int32_t v44; // w4
  int32_t v45; // w5
  bool v46; // w6
  bool v47; // w7
  struct SetSpoilerProtectionControl_o *setSpoilerProtectionCtr; // x21
  System_String_o *v49; // x2
  System_String_o *v50; // x3
  int32_t v51; // w4
  int32_t v52; // w5
  bool v53; // w6
  bool v54; // w7
  struct SetSwitchOptionControl_o *setSwitchCtr; // x21
  System_String_o *v56; // x2
  System_String_o *v57; // x3
  int32_t v58; // w4
  int32_t v59; // w5
  bool v60; // w6
  bool v61; // w7
  struct SetSwitch2OptionControl_o *setSwitch2Ctr; // x21
  System_String_o *v63; // x2
  System_String_o *v64; // x3
  int32_t v65; // w4
  int32_t v66; // w5
  bool v67; // w6
  bool v68; // w7
  struct SetSupportLimitCountToDispLimitCount_o *setSupportLimitCountToDispLimitCountCtr; // x21
  System_String_o *v70; // x2
  System_String_o *v71; // x3
  int32_t v72; // w4
  int32_t v73; // w5
  bool v74; // w6
  bool v75; // w7
  struct SetPreBattleFormationControl_o *setPreBattleFormationCtr; // x21
  System_String_o *v77; // x2
  System_String_o *v78; // x3
  int32_t v79; // w4
  int32_t v80; // w5
  bool v81; // w6
  bool v82; // w7
  struct SetAdvantageClassAutoOptionControl_o *setAdvantageClassAutoCtr; // x21
  System_String_o *v84; // x2
  System_String_o *v85; // x3
  int32_t v86; // w4
  int32_t v87; // w5
  bool v88; // w6
  bool v89; // w7
  struct SetAutoSelectPartyOptionControl_o *setAutoSelectPartyCtr; // x21
  System_String_o *v91; // x2
  System_String_o *v92; // x3
  int32_t v93; // w4
  int32_t v94; // w5
  bool v95; // w6
  bool v96; // w7
  struct SetAutoOpenAutoOrganizationDialogOptionControl_o *setAutoOpenAutoOrganizationDialogCtr; // x21
  System_String_o *v98; // x2
  System_String_o *v99; // x3
  int32_t v100; // w4
  int32_t v101; // w5
  bool v102; // w6
  bool v103; // w7
  struct SetTDPlaySpeedControl_o *setTDPlaySpeedCtr; // x21
  System_String_o *v105; // x2
  System_String_o *v106; // x3
  int32_t v107; // w4
  int32_t v108; // w5
  bool v109; // w6
  bool v110; // w7
  struct SetRandomLimitCountOptionControl_o *setRandomLimitCountCtr; // x21
  System_String_o *v112; // x2
  System_String_o *v113; // x3
  int32_t v114; // w4
  int32_t v115; // w5
  bool v116; // w6
  bool v117; // w7
  struct SetRandomLimitCountResetOptionControl_o *setRandomLimitCountResetCtr; // x21
  System_String_o *v119; // x2
  System_String_o *v120; // x3
  int32_t v121; // w4
  int32_t v122; // w5
  bool v123; // w6
  bool v124; // w7
  struct SetSvtRandOptionControl_o *setSvtRandCtr; // x21
  System_String_o *v126; // x2
  System_String_o *v127; // x3
  int32_t v128; // w4
  int32_t v129; // w5
  bool v130; // w6
  bool v131; // w7
  struct SetMessageDispOptionControl_o *setMessageDispCtr; // x21
  System_String_o *v133; // x2
  System_String_o *v134; // x3
  int32_t v135; // w4
  int32_t v136; // w5
  bool v137; // w6
  bool v138; // w7
  struct SetNoticeOptionControl_o *setNoticeCtr; // x21
  System_String_o *v140; // x2
  System_String_o *v141; // x3
  int32_t v142; // w4
  int32_t v143; // w5
  bool v144; // w6
  bool v145; // w7
  struct SetLoginNotificationControl_o *setLoginNotificationCtr; // x21
  System_String_o *v147; // x2
  System_String_o *v148; // x3
  int32_t v149; // w4
  int32_t v150; // w5
  bool v151; // w6
  bool v152; // w7
  struct SetPlayOpeningMovieOptionControl_o *setPlayOpeningMovieCtr; // x21
  System_String_o *v154; // x2
  System_String_o *v155; // x3
  int32_t v156; // w4
  int32_t v157; // w5
  bool v158; // w6
  bool v159; // w7
  struct FullDownloadControl_o *fullDlCtr; // x21
  System_String_o *v161; // x2
  System_String_o *v162; // x3
  int32_t v163; // w4
  int32_t v164; // w5
  bool v165; // w6
  bool v166; // w7
  struct SetBlacklistOptionControl_o *setBlackListCtr; // x21
  System_String_o *v168; // x2
  System_String_o *v169; // x3
  int32_t v170; // w4
  int32_t v171; // w5
  bool v172; // w6
  bool v173; // w7
  __int64 v174; // x0

  if ( (byte_596B588 & 1) == 0 )
  {
    sub_2213A60(&GameOptionContentBase___TypeInfo);
    byte_596B588 = 1;
  }
  if ( !this->fields.contentsArray )
  {
    v3 = sub_2213B20(GameOptionContentBase___TypeInfo, 23);
    if ( !v3 )
      sub_2213CDC(0, v4);
    setResolutionOptionCtr = this->fields.setResolutionOptionCtr;
    v12 = v3;
    if ( !setResolutionOptionCtr
      || (v3 = sub_2213BB4(this->fields.setResolutionOptionCtr, *(_QWORD *)(*(_QWORD *)v3 + 64LL))) != 0 )
    {
      if ( !*(_DWORD *)(v12 + 24) )
        goto LABEL_75;
      *(_QWORD *)(v12 + 32) = setResolutionOptionCtr;
      sub_2213A04(
        (MissionNaviTransitionBoardItem_o *)(v12 + 32),
        (int32_t)setResolutionOptionCtr,
        v5,
        v6,
        v7,
        v8,
        v9,
        v10);
      setSmoothnessCtr = this->fields.setSmoothnessCtr;
      if ( !setSmoothnessCtr
        || (v3 = sub_2213BB4(this->fields.setSmoothnessCtr, *(_QWORD *)(*(_QWORD *)v12 + 64LL))) != 0 )
      {
        if ( (*(_DWORD *)(v12 + 24) & 0xFFFFFFFE) == 0 )
          goto LABEL_75;
        *(_QWORD *)(v12 + 40) = setSmoothnessCtr;
        sub_2213A04(
          (MissionNaviTransitionBoardItem_o *)(v12 + 40),
          (int32_t)setSmoothnessCtr,
          v14,
          v15,
          v16,
          v17,
          v18,
          v19);
        setVolCtr = this->fields.setVolCtr;
        if ( !setVolCtr || (v3 = sub_2213BB4(this->fields.setVolCtr, *(_QWORD *)(*(_QWORD *)v12 + 64LL))) != 0 )
        {
          if ( *(_DWORD *)(v12 + 24) <= 2u )
            goto LABEL_75;
          *(_QWORD *)(v12 + 48) = setVolCtr;
          sub_2213A04((MissionNaviTransitionBoardItem_o *)(v12 + 48), (int32_t)setVolCtr, v21, v22, v23, v24, v25, v26);
          setScenarioTextSpeedCtr = this->fields.setScenarioTextSpeedCtr;
          if ( !setScenarioTextSpeedCtr
            || (v3 = sub_2213BB4(this->fields.setScenarioTextSpeedCtr, *(_QWORD *)(*(_QWORD *)v12 + 64LL))) != 0 )
          {
            if ( (*(_DWORD *)(v12 + 24) & 0xFFFFFFFC) == 0 )
              goto LABEL_75;
            *(_QWORD *)(v12 + 56) = setScenarioTextSpeedCtr;
            sub_2213A04(
              (MissionNaviTransitionBoardItem_o *)(v12 + 56),
              (int32_t)setScenarioTextSpeedCtr,
              v28,
              v29,
              v30,
              v31,
              v32,
              v33);
            setScenarioCtr = this->fields.setScenarioCtr;
            if ( !setScenarioCtr
              || (v3 = sub_2213BB4(this->fields.setScenarioCtr, *(_QWORD *)(*(_QWORD *)v12 + 64LL))) != 0 )
            {
              if ( *(_DWORD *)(v12 + 24) <= 4u )
                goto LABEL_75;
              *(_QWORD *)(v12 + 64) = setScenarioCtr;
              sub_2213A04(
                (MissionNaviTransitionBoardItem_o *)(v12 + 64),
                (int32_t)setScenarioCtr,
                v35,
                v36,
                v37,
                v38,
                v39,
                v40);
              setSpoilerProtectionCtr = this->fields.setSpoilerProtectionCtr;
              if ( !setSpoilerProtectionCtr
                || (v3 = sub_2213BB4(this->fields.setSpoilerProtectionCtr, *(_QWORD *)(*(_QWORD *)v12 + 64LL))) != 0 )
              {
                if ( *(_DWORD *)(v12 + 24) <= 5u )
                  goto LABEL_75;
                *(_QWORD *)(v12 + 72) = setSpoilerProtectionCtr;
                sub_2213A04(
                  (MissionNaviTransitionBoardItem_o *)(v12 + 72),
                  (int32_t)setSpoilerProtectionCtr,
                  v42,
                  v43,
                  v44,
                  v45,
                  v46,
                  v47);
                setSwitchCtr = this->fields.setSwitchCtr;
                if ( !setSwitchCtr
                  || (v3 = sub_2213BB4(this->fields.setSwitchCtr, *(_QWORD *)(*(_QWORD *)v12 + 64LL))) != 0 )
                {
                  if ( *(_DWORD *)(v12 + 24) <= 6u )
                    goto LABEL_75;
                  *(_QWORD *)(v12 + 80) = setSwitchCtr;
                  sub_2213A04(
                    (MissionNaviTransitionBoardItem_o *)(v12 + 80),
                    (int32_t)setSwitchCtr,
                    v49,
                    v50,
                    v51,
                    v52,
                    v53,
                    v54);
                  setSwitch2Ctr = this->fields.setSwitch2Ctr;
                  if ( !setSwitch2Ctr
                    || (v3 = sub_2213BB4(this->fields.setSwitch2Ctr, *(_QWORD *)(*(_QWORD *)v12 + 64LL))) != 0 )
                  {
                    if ( (*(_DWORD *)(v12 + 24) & 0xFFFFFFF8) == 0 )
                      goto LABEL_75;
                    *(_QWORD *)(v12 + 88) = setSwitch2Ctr;
                    sub_2213A04(
                      (MissionNaviTransitionBoardItem_o *)(v12 + 88),
                      (int32_t)setSwitch2Ctr,
                      v56,
                      v57,
                      v58,
                      v59,
                      v60,
                      v61);
                    setSupportLimitCountToDispLimitCountCtr = this->fields.setSupportLimitCountToDispLimitCountCtr;
                    if ( !setSupportLimitCountToDispLimitCountCtr
                      || (v3 = sub_2213BB4(
                                 this->fields.setSupportLimitCountToDispLimitCountCtr,
                                 *(_QWORD *)(*(_QWORD *)v12 + 64LL))) != 0 )
                    {
                      if ( *(_DWORD *)(v12 + 24) <= 8u )
                        goto LABEL_75;
                      *(_QWORD *)(v12 + 96) = setSupportLimitCountToDispLimitCountCtr;
                      sub_2213A04(
                        (MissionNaviTransitionBoardItem_o *)(v12 + 96),
                        (int32_t)setSupportLimitCountToDispLimitCountCtr,
                        v63,
                        v64,
                        v65,
                        v66,
                        v67,
                        v68);
                      setPreBattleFormationCtr = this->fields.setPreBattleFormationCtr;
                      if ( !setPreBattleFormationCtr
                        || (v3 = sub_2213BB4(this->fields.setPreBattleFormationCtr, *(_QWORD *)(*(_QWORD *)v12 + 64LL))) != 0 )
                      {
                        if ( *(_DWORD *)(v12 + 24) <= 9u )
                          goto LABEL_75;
                        *(_QWORD *)(v12 + 104) = setPreBattleFormationCtr;
                        sub_2213A04(
                          (MissionNaviTransitionBoardItem_o *)(v12 + 104),
                          (int32_t)setPreBattleFormationCtr,
                          v70,
                          v71,
                          v72,
                          v73,
                          v74,
                          v75);
                        setAdvantageClassAutoCtr = this->fields.setAdvantageClassAutoCtr;
                        if ( !setAdvantageClassAutoCtr
                          || (v3 = sub_2213BB4(
                                     this->fields.setAdvantageClassAutoCtr,
                                     *(_QWORD *)(*(_QWORD *)v12 + 64LL))) != 0 )
                        {
                          if ( *(_DWORD *)(v12 + 24) <= 0xAu )
                            goto LABEL_75;
                          *(_QWORD *)(v12 + 112) = setAdvantageClassAutoCtr;
                          sub_2213A04(
                            (MissionNaviTransitionBoardItem_o *)(v12 + 112),
                            (int32_t)setAdvantageClassAutoCtr,
                            v77,
                            v78,
                            v79,
                            v80,
                            v81,
                            v82);
                          setAutoSelectPartyCtr = this->fields.setAutoSelectPartyCtr;
                          if ( !setAutoSelectPartyCtr
                            || (v3 = sub_2213BB4(this->fields.setAutoSelectPartyCtr, *(_QWORD *)(*(_QWORD *)v12 + 64LL))) != 0 )
                          {
                            if ( *(_DWORD *)(v12 + 24) <= 0xBu )
                              goto LABEL_75;
                            *(_QWORD *)(v12 + 120) = setAutoSelectPartyCtr;
                            sub_2213A04(
                              (MissionNaviTransitionBoardItem_o *)(v12 + 120),
                              (int32_t)setAutoSelectPartyCtr,
                              v84,
                              v85,
                              v86,
                              v87,
                              v88,
                              v89);
                            setAutoOpenAutoOrganizationDialogCtr = this->fields.setAutoOpenAutoOrganizationDialogCtr;
                            if ( !setAutoOpenAutoOrganizationDialogCtr
                              || (v3 = sub_2213BB4(
                                         this->fields.setAutoOpenAutoOrganizationDialogCtr,
                                         *(_QWORD *)(*(_QWORD *)v12 + 64LL))) != 0 )
                            {
                              if ( *(_DWORD *)(v12 + 24) <= 0xCu )
                                goto LABEL_75;
                              *(_QWORD *)(v12 + 128) = setAutoOpenAutoOrganizationDialogCtr;
                              sub_2213A04(
                                (MissionNaviTransitionBoardItem_o *)(v12 + 128),
                                (int32_t)setAutoOpenAutoOrganizationDialogCtr,
                                v91,
                                v92,
                                v93,
                                v94,
                                v95,
                                v96);
                              setTDPlaySpeedCtr = this->fields.setTDPlaySpeedCtr;
                              if ( !setTDPlaySpeedCtr
                                || (v3 = sub_2213BB4(this->fields.setTDPlaySpeedCtr, *(_QWORD *)(*(_QWORD *)v12 + 64LL))) != 0 )
                              {
                                if ( *(_DWORD *)(v12 + 24) <= 0xDu )
                                  goto LABEL_75;
                                *(_QWORD *)(v12 + 136) = setTDPlaySpeedCtr;
                                sub_2213A04(
                                  (MissionNaviTransitionBoardItem_o *)(v12 + 136),
                                  (int32_t)setTDPlaySpeedCtr,
                                  v98,
                                  v99,
                                  v100,
                                  v101,
                                  v102,
                                  v103);
                                setRandomLimitCountCtr = this->fields.setRandomLimitCountCtr;
                                if ( !setRandomLimitCountCtr
                                  || (v3 = sub_2213BB4(
                                             this->fields.setRandomLimitCountCtr,
                                             *(_QWORD *)(*(_QWORD *)v12 + 64LL))) != 0 )
                                {
                                  if ( *(_DWORD *)(v12 + 24) <= 0xEu )
                                    goto LABEL_75;
                                  *(_QWORD *)(v12 + 144) = setRandomLimitCountCtr;
                                  sub_2213A04(
                                    (MissionNaviTransitionBoardItem_o *)(v12 + 144),
                                    (int32_t)setRandomLimitCountCtr,
                                    v105,
                                    v106,
                                    v107,
                                    v108,
                                    v109,
                                    v110);
                                  setRandomLimitCountResetCtr = this->fields.setRandomLimitCountResetCtr;
                                  if ( !setRandomLimitCountResetCtr
                                    || (v3 = sub_2213BB4(
                                               this->fields.setRandomLimitCountResetCtr,
                                               *(_QWORD *)(*(_QWORD *)v12 + 64LL))) != 0 )
                                  {
                                    if ( (*(_DWORD *)(v12 + 24) & 0xFFFFFFF0) == 0 )
                                      goto LABEL_75;
                                    *(_QWORD *)(v12 + 152) = setRandomLimitCountResetCtr;
                                    sub_2213A04(
                                      (MissionNaviTransitionBoardItem_o *)(v12 + 152),
                                      (int32_t)setRandomLimitCountResetCtr,
                                      v112,
                                      v113,
                                      v114,
                                      v115,
                                      v116,
                                      v117);
                                    setSvtRandCtr = this->fields.setSvtRandCtr;
                                    if ( !setSvtRandCtr
                                      || (v3 = sub_2213BB4(
                                                 this->fields.setSvtRandCtr,
                                                 *(_QWORD *)(*(_QWORD *)v12 + 64LL))) != 0 )
                                    {
                                      if ( *(_DWORD *)(v12 + 24) <= 0x10u )
                                        goto LABEL_75;
                                      *(_QWORD *)(v12 + 160) = setSvtRandCtr;
                                      sub_2213A04(
                                        (MissionNaviTransitionBoardItem_o *)(v12 + 160),
                                        (int32_t)setSvtRandCtr,
                                        v119,
                                        v120,
                                        v121,
                                        v122,
                                        v123,
                                        v124);
                                      setMessageDispCtr = this->fields.setMessageDispCtr;
                                      if ( !setMessageDispCtr
                                        || (v3 = sub_2213BB4(
                                                   this->fields.setMessageDispCtr,
                                                   *(_QWORD *)(*(_QWORD *)v12 + 64LL))) != 0 )
                                      {
                                        if ( *(_DWORD *)(v12 + 24) <= 0x11u )
                                          goto LABEL_75;
                                        *(_QWORD *)(v12 + 168) = setMessageDispCtr;
                                        sub_2213A04(
                                          (MissionNaviTransitionBoardItem_o *)(v12 + 168),
                                          (int32_t)setMessageDispCtr,
                                          v126,
                                          v127,
                                          v128,
                                          v129,
                                          v130,
                                          v131);
                                        setNoticeCtr = this->fields.setNoticeCtr;
                                        if ( !setNoticeCtr
                                          || (v3 = sub_2213BB4(
                                                     this->fields.setNoticeCtr,
                                                     *(_QWORD *)(*(_QWORD *)v12 + 64LL))) != 0 )
                                        {
                                          if ( *(_DWORD *)(v12 + 24) <= 0x12u )
                                            goto LABEL_75;
                                          *(_QWORD *)(v12 + 176) = setNoticeCtr;
                                          sub_2213A04(
                                            (MissionNaviTransitionBoardItem_o *)(v12 + 176),
                                            (int32_t)setNoticeCtr,
                                            v133,
                                            v134,
                                            v135,
                                            v136,
                                            v137,
                                            v138);
                                          setLoginNotificationCtr = this->fields.setLoginNotificationCtr;
                                          if ( !setLoginNotificationCtr
                                            || (v3 = sub_2213BB4(
                                                       this->fields.setLoginNotificationCtr,
                                                       *(_QWORD *)(*(_QWORD *)v12 + 64LL))) != 0 )
                                          {
                                            if ( *(_DWORD *)(v12 + 24) <= 0x13u )
                                              goto LABEL_75;
                                            *(_QWORD *)(v12 + 184) = setLoginNotificationCtr;
                                            sub_2213A04(
                                              (MissionNaviTransitionBoardItem_o *)(v12 + 184),
                                              (int32_t)setLoginNotificationCtr,
                                              v140,
                                              v141,
                                              v142,
                                              v143,
                                              v144,
                                              v145);
                                            setPlayOpeningMovieCtr = this->fields.setPlayOpeningMovieCtr;
                                            if ( !setPlayOpeningMovieCtr
                                              || (v3 = sub_2213BB4(
                                                         this->fields.setPlayOpeningMovieCtr,
                                                         *(_QWORD *)(*(_QWORD *)v12 + 64LL))) != 0 )
                                            {
                                              if ( *(_DWORD *)(v12 + 24) <= 0x14u )
                                                goto LABEL_75;
                                              *(_QWORD *)(v12 + 192) = setPlayOpeningMovieCtr;
                                              sub_2213A04(
                                                (MissionNaviTransitionBoardItem_o *)(v12 + 192),
                                                (int32_t)setPlayOpeningMovieCtr,
                                                v147,
                                                v148,
                                                v149,
                                                v150,
                                                v151,
                                                v152);
                                              fullDlCtr = this->fields.fullDlCtr;
                                              if ( !fullDlCtr
                                                || (v3 = sub_2213BB4(
                                                           this->fields.fullDlCtr,
                                                           *(_QWORD *)(*(_QWORD *)v12 + 64LL))) != 0 )
                                              {
                                                if ( *(_DWORD *)(v12 + 24) <= 0x15u )
                                                  goto LABEL_75;
                                                *(_QWORD *)(v12 + 200) = fullDlCtr;
                                                sub_2213A04(
                                                  (MissionNaviTransitionBoardItem_o *)(v12 + 200),
                                                  (int32_t)fullDlCtr,
                                                  v154,
                                                  v155,
                                                  v156,
                                                  v157,
                                                  v158,
                                                  v159);
                                                setBlackListCtr = this->fields.setBlackListCtr;
                                                if ( !setBlackListCtr
                                                  || (v3 = sub_2213BB4(
                                                             this->fields.setBlackListCtr,
                                                             *(_QWORD *)(*(_QWORD *)v12 + 64LL))) != 0 )
                                                {
                                                  if ( *(_DWORD *)(v12 + 24) > 0x16u )
                                                  {
                                                    *(_QWORD *)(v12 + 208) = setBlackListCtr;
                                                    sub_2213A04(
                                                      (MissionNaviTransitionBoardItem_o *)(v12 + 208),
                                                      (int32_t)setBlackListCtr,
                                                      v161,
                                                      v162,
                                                      v163,
                                                      v164,
                                                      v165,
                                                      v166);
                                                    this->fields.contentsArray = (struct GameOptionContentBase_array *)v12;
                                                    sub_2213A04(
                                                      (MissionNaviTransitionBoardItem_o *)&this->fields.contentsArray,
                                                      v12,
                                                      v168,
                                                      v169,
                                                      v170,
                                                      v171,
                                                      v172,
                                                      v173);
                                                    return;
                                                  }
LABEL_75:
                                                  sub_2213CE4(v3);
                                                }
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    v174 = sub_2213D00(v3, v13);
    sub_2213BA0(v174, 0);
  }
}


void SetGameOptionComponent__InitGameOption(SetGameOptionComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1
  __int64 v5; // x2
  struct GameOptionContentBase_array *contentsArray; // x22
  int max_length; // w8
  unsigned int v8; // w23
  float v9; // s8
  GameOptionContentBase_o *v10; // x20
  char v11; // w21
  const MethodInfo *v12; // x2
  const MethodInfo *v13; // x1
  UnityEngine_Object_o *collider; // x20
  UnityEngine_BoxCollider_o *v15; // x20
  float v16; // s8
  UnityEngine_BoxCollider_o *v17; // x20
  UnityEngine_Vector3_o v18; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v19; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_596B589 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596B589 = 1;
  }
  SetGameOptionComponent__CreateContentsArrayIfNotYet(this, method);
  contentsArray = this->fields.contentsArray;
  if ( !contentsArray )
    goto LABEL_21;
  max_length = contentsArray->max_length;
  if ( max_length >= 1 )
  {
    v8 = 0;
    v9 = 160.0;
    while ( 1 )
    {
      if ( v8 >= max_length )
        sub_2213CE4(gameObject);
      v10 = contentsArray->m_Items[v8];
      if ( !v10 )
        break;
      v11 = ((__int64 (__fastcall *)(GameOptionContentBase_o *, const MethodInfo *))v10->klass->vtable._6_IsAvailable.methodPtr)(
              v10,
              v10->klass->vtable._6_IsAvailable.method);
      GameOptionContentBase__Show(v10, v11 & 1, v12);
      if ( (v11 & 1) != 0 )
      {
        ((void (__fastcall *)(GameOptionContentBase_o *, const MethodInfo *))v10->klass->vtable._4_Init.methodPtr)(
          v10,
          v10->klass->vtable._4_Init.method);
        GameOptionContentBase__SetPosY(v10, v9, v13);
        v9 = v9 - (float)v10->fields.contentHeight;
      }
      max_length = contentsArray->max_length;
      if ( (int)++v8 >= max_length )
        goto LABEL_13;
    }
LABEL_21:
    sub_2213CDC(gameObject, v4);
  }
  v9 = 160.0;
LABEL_13:
  collider = (UnityEngine_Object_o *)this->fields.collider;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v4, v5);
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(collider, 0, 0);
  if ( ((unsigned __int8)gameObject & 1) != 0 )
  {
    v15 = this->fields.collider;
    if ( !v15 )
      goto LABEL_21;
    v16 = 160.0 - v9;
    LODWORD(v18.fields.x) = (unsigned int)UnityEngine_BoxCollider__get_size(this->fields.collider, 0);
    v18.fields.z = 0.0;
    v18.fields.y = v16;
    UnityEngine_BoxCollider__set_size(v15, v18, 0);
    v17 = this->fields.collider;
    if ( !v17 )
      goto LABEL_21;
    LODWORD(v19.fields.x) = (unsigned int)UnityEngine_BoxCollider__get_center(this->fields.collider, 0);
    v19.fields.y = (float)(v16 * -0.5) + 160.0;
    v19.fields.z = 0.0;
    UnityEngine_BoxCollider__set_center(v17, v19, 0);
  }
  this->fields._optionSceneType_k__BackingField = 0;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    goto LABEL_21;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0);
}


// local variable allocation has failed, the output may be wrong!
void SetGameOptionComponent__SetMaskEnabled(SetGameOptionComponent_o *this, bool isEnabled, const MethodInfo *method)
{
  UnityEngine_GameObject_o *optionMask; // x0

  optionMask = this->fields.optionMask;
  if ( !optionMask )
    sub_2213CDC(0, isEnabled);
  UnityEngine_GameObject__SetActive(optionMask, isEnabled, 0);
}


int32_t SetGameOptionComponent__get_optionSceneType(SetGameOptionComponent_o *this, const MethodInfo *method)
{
  return this->fields._optionSceneType_k__BackingField;
}


void SetGameOptionComponent__hideGameOption(SetGameOptionComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *hidePos; // x0
  UnityEngine_GameObject_o *optionObj; // x20
  __int64 v5; // x1
  __int64 v6; // x2
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_596B58A & 1) == 0 )
  {
    sub_2213A60(&AtlasManager_TypeInfo);
    byte_596B58A = 1;
  }
  hidePos = this->fields.hidePos;
  if ( !hidePos
    || (optionObj = this->fields.optionObj,
        (hidePos = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(hidePos, 0)) == 0)
    || (localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)hidePos, 0),
        GameObjectExtensions__SetLocalPosition(optionObj, localPosition, 0),
        (hidePos = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0)) == 0)
    || (UnityEngine_GameObject__SetActive(hidePos, 0, 0),
        (hidePos = (UnityEngine_GameObject_o *)this->fields.optionScroll) == 0) )
  {
    sub_2213CDC(hidePos, method);
  }
  ((void (__fastcall *)(UnityEngine_GameObject_o *, _QWORD, Il2CppClass *, double, double))hidePos->klass[1]._1.declaringType)(
    hidePos,
    0,
    hidePos->klass[1]._1.parent,
    0.0,
    0.0);
  if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v5, v6);
  AtlasManager__ReleaseMyRoomAtlas(0);
}


void SetGameOptionComponent__reflectionGameOption(
        SetGameOptionComponent_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  SetGameOptionComponent___c_c *v5; // x0
  System_Collections_Generic_IEnumerable_TSource__o *contentsArray; // x20
  struct SetGameOptionComponent___c_StaticFields *static_fields; // x8
  System_Func_object__bool__o *_9__42_0; // x21
  Il2CppObject *v9; // x22
  struct SetGameOptionComponent___c_StaticFields *v10; // x0
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7
  System_Collections_Generic_IEnumerable_TSource__o *v17; // x0
  __int64 v18; // x1
  __int64 v19; // x2
  SetGameOptionComponent___c_c *v20; // x8
  System_Collections_Generic_IEnumerable_T__o *v21; // x20
  struct SetGameOptionComponent___c_StaticFields *v22; // x9
  System_Action_object__o *_9__42_1; // x21
  Il2CppObject *v24; // x22
  struct SetGameOptionComponent___c_StaticFields *v25; // x0
  System_String_o *v26; // x2
  System_String_o *v27; // x3
  int32_t v28; // w4
  int32_t v29; // w5
  bool v30; // w6
  bool v31; // w7
  __int64 v32; // x1
  __int64 v33; // x2
  __int64 v34; // x1
  __int64 v35; // x2

  if ( (byte_596B58B & 1) == 0 )
  {
    sub_2213A60(&System_Action_GameOptionContentBase__TypeInfo);
    sub_2213A60(&Method_BasicHelper_ForEach_GameOptionContentBase___);
    sub_2213A60(&Method_System_Linq_Enumerable_Where_GameOptionContentBase___);
    sub_2213A60(&System_Func_GameOptionContentBase__bool__TypeInfo);
    sub_2213A60(&OptionManager_TypeInfo);
    sub_2213A60(&SoundManager_TypeInfo);
    sub_2213A60(&Method_SetGameOptionComponent___c__reflectionGameOption_b__42_0__);
    sub_2213A60(&Method_SetGameOptionComponent___c__reflectionGameOption_b__42_1__);
    sub_2213A60(&SetGameOptionComponent___c_TypeInfo);
    byte_596B58B = 1;
  }
  v5 = SetGameOptionComponent___c_TypeInfo;
  contentsArray = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.contentsArray;
  if ( !*(&SetGameOptionComponent___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(SetGameOptionComponent___c_TypeInfo, callback, method);
    v5 = SetGameOptionComponent___c_TypeInfo;
  }
  static_fields = v5->static_fields;
  _9__42_0 = (System_Func_object__bool__o *)static_fields->__9__42_0;
  if ( !_9__42_0 )
  {
    if ( !*(&v5->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v5, callback, method);
      static_fields = SetGameOptionComponent___c_TypeInfo->static_fields;
    }
    v9 = (Il2CppObject *)static_fields->__9;
    _9__42_0 = (System_Func_object__bool__o *)sub_2213CCC(System_Func_GameOptionContentBase__bool__TypeInfo);
    System_Func_object__bool____ctor(_9__42_0, v9, Method_SetGameOptionComponent___c__reflectionGameOption_b__42_0__, 0);
    v10 = SetGameOptionComponent___c_TypeInfo->static_fields;
    v10->__9__42_0 = (struct System_Func_GameOptionContentBase__bool__o *)_9__42_0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v10->__9__42_0, (int32_t)_9__42_0, v11, v12, v13, v14, v15, v16);
  }
  v17 = System_Linq_Enumerable__Where_object_(
          contentsArray,
          (System_Func_TSource__bool__o *)_9__42_0,
          (const MethodInfo_38A3478 *)Method_System_Linq_Enumerable_Where_GameOptionContentBase___);
  v20 = SetGameOptionComponent___c_TypeInfo;
  v21 = (System_Collections_Generic_IEnumerable_T__o *)v17;
  if ( !*(&SetGameOptionComponent___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(SetGameOptionComponent___c_TypeInfo, v18, v19);
    v20 = SetGameOptionComponent___c_TypeInfo;
  }
  v22 = v20->static_fields;
  _9__42_1 = (System_Action_object__o *)v22->__9__42_1;
  if ( !_9__42_1 )
  {
    if ( !*(&v20->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v20, v18, v19);
      v22 = SetGameOptionComponent___c_TypeInfo->static_fields;
    }
    v24 = (Il2CppObject *)v22->__9;
    _9__42_1 = (System_Action_object__o *)sub_2213CCC(System_Action_GameOptionContentBase__TypeInfo);
    System_Action_object____ctor(_9__42_1, v24, Method_SetGameOptionComponent___c__reflectionGameOption_b__42_1__, 0);
    v25 = SetGameOptionComponent___c_TypeInfo->static_fields;
    v25->__9__42_1 = (struct System_Action_GameOptionContentBase__o *)_9__42_1;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v25->__9__42_1, (int32_t)_9__42_1, v26, v27, v28, v29, v30, v31);
  }
  BasicHelper__ForEach_object_(
    v21,
    (System_Action_T__o *)_9__42_1,
    (const MethodInfo_381282C *)Method_BasicHelper_ForEach_GameOptionContentBase___);
  if ( !*(&SoundManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo, v32, v33);
  SoundManager__stopSe(0.0, 0);
  if ( !*(&OptionManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo, v34, v35);
  OptionManager__SaveData(callback, 0);
}


void SetGameOptionComponent__set_optionSceneType(
        SetGameOptionComponent_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields._optionSceneType_k__BackingField = value;
}


void SetGameOptionComponent__showGameOption(SetGameOptionComponent_o *this, const MethodInfo *method)
{
  struct UISprite_o *bgTxtSprite; // x0
  UnityEngine_GameObject_o *gameObject; // x20
  System_Action_o *v5; // x20
  __int64 v6; // x1
  __int64 v7; // x2

  if ( (byte_596B587 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&AtlasManager_TypeInfo);
    sub_2213A60(&Method_SetGameOptionComponent__showGameOption_b__38_0__);
    byte_596B587 = 1;
  }
  bgTxtSprite = this->fields.bgTxtSprite;
  if ( !bgTxtSprite
    || (gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)bgTxtSprite, 0),
        bgTxtSprite = (struct UISprite_o *)BgTxtManager__IsActiveBgTxt(0),
        !gameObject) )
  {
    sub_2213CDC(bgTxtSprite, method);
  }
  UnityEngine_GameObject__SetActive(gameObject, (unsigned __int8)bgTxtSprite & 1, 0);
  v5 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
  System_Action___ctor(v5, (Il2CppObject *)this, Method_SetGameOptionComponent__showGameOption_b__38_0__, 0);
  if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v6, v7);
  AtlasManager__LoadMyRoomAtlas(v5, 1, 0);
}


void SetGameOptionComponent___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  if ( (byte_596B58C & 1) == 0 )
  {
    sub_2213A60(&SetGameOptionComponent___c_TypeInfo);
    byte_596B58C = 1;
  }
  v1 = (Il2CppObject *)sub_2213CCC(SetGameOptionComponent___c_TypeInfo);
  System_Object___ctor(v1, 0);
  SetGameOptionComponent___c_TypeInfo->static_fields->__9 = (struct SetGameOptionComponent___c_o *)v1;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)SetGameOptionComponent___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void SetGameOptionComponent___c___ctor(SetGameOptionComponent___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool SetGameOptionComponent___c___reflectionGameOption_b__42_0(
        SetGameOptionComponent___c_o *this,
        GameOptionContentBase_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_2213CDC(this, 0);
  return ((__int64 (__fastcall *)(GameOptionContentBase_o *, const MethodInfo *))x->klass->vtable._6_IsAvailable.methodPtr)(
           x,
           x->klass->vtable._6_IsAvailable.method);
}


void SetGameOptionComponent___c___reflectionGameOption_b__42_1(
        SetGameOptionComponent___c_o *this,
        GameOptionContentBase_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_2213CDC(this, 0);
  ((void (__fastcall *)(GameOptionContentBase_o *, const MethodInfo *))x->klass->vtable._5_Reflection.methodPtr)(
    x,
    x->klass->vtable._5_Reflection.method);
}