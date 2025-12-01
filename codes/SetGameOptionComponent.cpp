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
  int32_t v5; // w2
  int32_t v6; // w3
  System_String_o *v7; // x4
  int32_t v8; // w5
  int64_t v9; // x6
  System_String_o *v10; // x7
  struct SetResolutionOptionControl_o *setResolutionOptionCtr; // x21
  __int64 v12; // x20
  _DWORD *v13; // x22
  int32_t v14; // w2
  int32_t v15; // w3
  System_String_o *v16; // x4
  int32_t v17; // w5
  int64_t v18; // x6
  System_String_o *v19; // x7
  struct SetSmoothnessControl_o *setSmoothnessCtr; // x21
  int32_t v21; // w2
  int32_t v22; // w3
  System_String_o *v23; // x4
  int32_t v24; // w5
  int64_t v25; // x6
  System_String_o *v26; // x7
  struct SetVolumeControl_o *setVolCtr; // x21
  int32_t v28; // w2
  int32_t v29; // w3
  System_String_o *v30; // x4
  int32_t v31; // w5
  int64_t v32; // x6
  System_String_o *v33; // x7
  struct SetScenarioTextSpeedControl_o *setScenarioTextSpeedCtr; // x21
  int32_t v35; // w2
  int32_t v36; // w3
  System_String_o *v37; // x4
  int32_t v38; // w5
  int64_t v39; // x6
  System_String_o *v40; // x7
  struct SetScenarioControl_o *setScenarioCtr; // x21
  int32_t v42; // w2
  int32_t v43; // w3
  System_String_o *v44; // x4
  int32_t v45; // w5
  int64_t v46; // x6
  System_String_o *v47; // x7
  struct SetSpoilerProtectionControl_o *setSpoilerProtectionCtr; // x21
  int32_t v49; // w2
  int32_t v50; // w3
  System_String_o *v51; // x4
  int32_t v52; // w5
  int64_t v53; // x6
  System_String_o *v54; // x7
  struct SetSwitchOptionControl_o *setSwitchCtr; // x21
  int32_t v56; // w2
  int32_t v57; // w3
  System_String_o *v58; // x4
  int32_t v59; // w5
  int64_t v60; // x6
  System_String_o *v61; // x7
  struct SetSwitch2OptionControl_o *setSwitch2Ctr; // x21
  int32_t v63; // w2
  int32_t v64; // w3
  System_String_o *v65; // x4
  int32_t v66; // w5
  int64_t v67; // x6
  System_String_o *v68; // x7
  struct SetPreBattleFormationControl_o *setPreBattleFormationCtr; // x21
  int32_t v70; // w2
  int32_t v71; // w3
  System_String_o *v72; // x4
  int32_t v73; // w5
  int64_t v74; // x6
  System_String_o *v75; // x7
  struct SetAdvantageClassAutoOptionControl_o *setAdvantageClassAutoCtr; // x21
  int32_t v77; // w2
  int32_t v78; // w3
  System_String_o *v79; // x4
  int32_t v80; // w5
  int64_t v81; // x6
  System_String_o *v82; // x7
  struct SetAutoSelectPartyOptionControl_o *setAutoSelectPartyCtr; // x21
  int32_t v84; // w2
  int32_t v85; // w3
  System_String_o *v86; // x4
  int32_t v87; // w5
  int64_t v88; // x6
  System_String_o *v89; // x7
  struct SetAutoOpenAutoOrganizationDialogOptionControl_o *setAutoOpenAutoOrganizationDialogCtr; // x21
  int32_t v91; // w2
  int32_t v92; // w3
  System_String_o *v93; // x4
  int32_t v94; // w5
  int64_t v95; // x6
  System_String_o *v96; // x7
  struct SetTDPlaySpeedControl_o *setTDPlaySpeedCtr; // x21
  int32_t v98; // w2
  int32_t v99; // w3
  System_String_o *v100; // x4
  int32_t v101; // w5
  int64_t v102; // x6
  System_String_o *v103; // x7
  struct SetRandomLimitCountOptionControl_o *setRandomLimitCountCtr; // x21
  int32_t v105; // w2
  int32_t v106; // w3
  System_String_o *v107; // x4
  int32_t v108; // w5
  int64_t v109; // x6
  System_String_o *v110; // x7
  struct SetRandomLimitCountResetOptionControl_o *setRandomLimitCountResetCtr; // x21
  int32_t v112; // w2
  int32_t v113; // w3
  System_String_o *v114; // x4
  int32_t v115; // w5
  int64_t v116; // x6
  System_String_o *v117; // x7
  struct SetSvtRandOptionControl_o *setSvtRandCtr; // x21
  int32_t v119; // w2
  int32_t v120; // w3
  System_String_o *v121; // x4
  int32_t v122; // w5
  int64_t v123; // x6
  System_String_o *v124; // x7
  struct SetMessageDispOptionControl_o *setMessageDispCtr; // x21
  int32_t v126; // w2
  int32_t v127; // w3
  System_String_o *v128; // x4
  int32_t v129; // w5
  int64_t v130; // x6
  System_String_o *v131; // x7
  struct SetNoticeOptionControl_o *setNoticeCtr; // x21
  int32_t v133; // w2
  int32_t v134; // w3
  System_String_o *v135; // x4
  int32_t v136; // w5
  int64_t v137; // x6
  System_String_o *v138; // x7
  struct SetPlayOpeningMovieOptionControl_o *setPlayOpeningMovieCtr; // x21
  int32_t v140; // w2
  int32_t v141; // w3
  System_String_o *v142; // x4
  int32_t v143; // w5
  int64_t v144; // x6
  System_String_o *v145; // x7
  struct FullDownloadControl_o *fullDlCtr; // x21
  int32_t v147; // w2
  int32_t v148; // w3
  System_String_o *v149; // x4
  int32_t v150; // w5
  int64_t v151; // x6
  System_String_o *v152; // x7
  struct SetBlacklistOptionControl_o *setBlackListCtr; // x21
  GrandQuestFolderBoardItem_o *p_contentsArray; // x19
  int32_t v155; // w2
  int32_t v156; // w3
  System_String_o *v157; // x4
  int32_t v158; // w5
  int64_t v159; // x6
  System_String_o *v160; // x7
  __int64 v161; // x0

  if ( (byte_4CC23C6 & 1) == 0 )
  {
    sub_1C713B0(&GameOptionContentBase___TypeInfo);
    byte_4CC23C6 = 1;
  }
  if ( !this->fields.contentsArray )
  {
    v3 = sub_1C71458(GameOptionContentBase___TypeInfo, 21);
    if ( !v3 )
      sub_1C71608(0, v4);
    setResolutionOptionCtr = this->fields.setResolutionOptionCtr;
    v12 = v3;
    if ( !setResolutionOptionCtr
      || (v3 = sub_1C714EC(this->fields.setResolutionOptionCtr, *(_QWORD *)(*(_QWORD *)v3 + 64LL))) != 0 )
    {
      v13 = (_DWORD *)(v12 + 24);
      if ( !*(_DWORD *)(v12 + 24) )
        goto LABEL_69;
      *(_QWORD *)(v12 + 32) = setResolutionOptionCtr;
      sub_1C71354((GrandQuestFolderBoardItem_o *)(v12 + 32), (int32_t)setResolutionOptionCtr, v5, v6, v7, v8, v9, v10);
      setSmoothnessCtr = this->fields.setSmoothnessCtr;
      if ( !setSmoothnessCtr
        || (v3 = sub_1C714EC(this->fields.setSmoothnessCtr, *(_QWORD *)(*(_QWORD *)v12 + 64LL))) != 0 )
      {
        if ( *v13 <= 1u )
          goto LABEL_69;
        *(_QWORD *)(v12 + 40) = setSmoothnessCtr;
        sub_1C71354((GrandQuestFolderBoardItem_o *)(v12 + 40), (int32_t)setSmoothnessCtr, v14, v15, v16, v17, v18, v19);
        setVolCtr = this->fields.setVolCtr;
        if ( !setVolCtr || (v3 = sub_1C714EC(this->fields.setVolCtr, *(_QWORD *)(*(_QWORD *)v12 + 64LL))) != 0 )
        {
          if ( *v13 <= 2u )
            goto LABEL_69;
          *(_QWORD *)(v12 + 48) = setVolCtr;
          sub_1C71354((GrandQuestFolderBoardItem_o *)(v12 + 48), (int32_t)setVolCtr, v21, v22, v23, v24, v25, v26);
          setScenarioTextSpeedCtr = this->fields.setScenarioTextSpeedCtr;
          if ( !setScenarioTextSpeedCtr
            || (v3 = sub_1C714EC(this->fields.setScenarioTextSpeedCtr, *(_QWORD *)(*(_QWORD *)v12 + 64LL))) != 0 )
          {
            if ( *v13 <= 3u )
              goto LABEL_69;
            *(_QWORD *)(v12 + 56) = setScenarioTextSpeedCtr;
            sub_1C71354(
              (GrandQuestFolderBoardItem_o *)(v12 + 56),
              (int32_t)setScenarioTextSpeedCtr,
              v28,
              v29,
              v30,
              v31,
              v32,
              v33);
            setScenarioCtr = this->fields.setScenarioCtr;
            if ( !setScenarioCtr
              || (v3 = sub_1C714EC(this->fields.setScenarioCtr, *(_QWORD *)(*(_QWORD *)v12 + 64LL))) != 0 )
            {
              if ( *v13 <= 4u )
                goto LABEL_69;
              *(_QWORD *)(v12 + 64) = setScenarioCtr;
              sub_1C71354(
                (GrandQuestFolderBoardItem_o *)(v12 + 64),
                (int32_t)setScenarioCtr,
                v35,
                v36,
                v37,
                v38,
                v39,
                v40);
              setSpoilerProtectionCtr = this->fields.setSpoilerProtectionCtr;
              if ( !setSpoilerProtectionCtr
                || (v3 = sub_1C714EC(this->fields.setSpoilerProtectionCtr, *(_QWORD *)(*(_QWORD *)v12 + 64LL))) != 0 )
              {
                if ( *v13 <= 5u )
                  goto LABEL_69;
                *(_QWORD *)(v12 + 72) = setSpoilerProtectionCtr;
                sub_1C71354(
                  (GrandQuestFolderBoardItem_o *)(v12 + 72),
                  (int32_t)setSpoilerProtectionCtr,
                  v42,
                  v43,
                  v44,
                  v45,
                  v46,
                  v47);
                setSwitchCtr = this->fields.setSwitchCtr;
                if ( !setSwitchCtr
                  || (v3 = sub_1C714EC(this->fields.setSwitchCtr, *(_QWORD *)(*(_QWORD *)v12 + 64LL))) != 0 )
                {
                  if ( *v13 <= 6u )
                    goto LABEL_69;
                  *(_QWORD *)(v12 + 80) = setSwitchCtr;
                  sub_1C71354(
                    (GrandQuestFolderBoardItem_o *)(v12 + 80),
                    (int32_t)setSwitchCtr,
                    v49,
                    v50,
                    v51,
                    v52,
                    v53,
                    v54);
                  setSwitch2Ctr = this->fields.setSwitch2Ctr;
                  if ( !setSwitch2Ctr
                    || (v3 = sub_1C714EC(this->fields.setSwitch2Ctr, *(_QWORD *)(*(_QWORD *)v12 + 64LL))) != 0 )
                  {
                    if ( *v13 <= 7u )
                      goto LABEL_69;
                    *(_QWORD *)(v12 + 88) = setSwitch2Ctr;
                    sub_1C71354(
                      (GrandQuestFolderBoardItem_o *)(v12 + 88),
                      (int32_t)setSwitch2Ctr,
                      v56,
                      v57,
                      v58,
                      v59,
                      v60,
                      v61);
                    setPreBattleFormationCtr = this->fields.setPreBattleFormationCtr;
                    if ( !setPreBattleFormationCtr
                      || (v3 = sub_1C714EC(this->fields.setPreBattleFormationCtr, *(_QWORD *)(*(_QWORD *)v12 + 64LL))) != 0 )
                    {
                      if ( *v13 <= 8u )
                        goto LABEL_69;
                      *(_QWORD *)(v12 + 96) = setPreBattleFormationCtr;
                      sub_1C71354(
                        (GrandQuestFolderBoardItem_o *)(v12 + 96),
                        (int32_t)setPreBattleFormationCtr,
                        v63,
                        v64,
                        v65,
                        v66,
                        v67,
                        v68);
                      setAdvantageClassAutoCtr = this->fields.setAdvantageClassAutoCtr;
                      if ( !setAdvantageClassAutoCtr
                        || (v3 = sub_1C714EC(this->fields.setAdvantageClassAutoCtr, *(_QWORD *)(*(_QWORD *)v12 + 64LL))) != 0 )
                      {
                        if ( *v13 <= 9u )
                          goto LABEL_69;
                        *(_QWORD *)(v12 + 104) = setAdvantageClassAutoCtr;
                        sub_1C71354(
                          (GrandQuestFolderBoardItem_o *)(v12 + 104),
                          (int32_t)setAdvantageClassAutoCtr,
                          v70,
                          v71,
                          v72,
                          v73,
                          v74,
                          v75);
                        setAutoSelectPartyCtr = this->fields.setAutoSelectPartyCtr;
                        if ( !setAutoSelectPartyCtr
                          || (v3 = sub_1C714EC(this->fields.setAutoSelectPartyCtr, *(_QWORD *)(*(_QWORD *)v12 + 64LL))) != 0 )
                        {
                          if ( *v13 <= 0xAu )
                            goto LABEL_69;
                          *(_QWORD *)(v12 + 112) = setAutoSelectPartyCtr;
                          sub_1C71354(
                            (GrandQuestFolderBoardItem_o *)(v12 + 112),
                            (int32_t)setAutoSelectPartyCtr,
                            v77,
                            v78,
                            v79,
                            v80,
                            v81,
                            v82);
                          setAutoOpenAutoOrganizationDialogCtr = this->fields.setAutoOpenAutoOrganizationDialogCtr;
                          if ( !setAutoOpenAutoOrganizationDialogCtr
                            || (v3 = sub_1C714EC(
                                       this->fields.setAutoOpenAutoOrganizationDialogCtr,
                                       *(_QWORD *)(*(_QWORD *)v12 + 64LL))) != 0 )
                          {
                            if ( *v13 <= 0xBu )
                              goto LABEL_69;
                            *(_QWORD *)(v12 + 120) = setAutoOpenAutoOrganizationDialogCtr;
                            sub_1C71354(
                              (GrandQuestFolderBoardItem_o *)(v12 + 120),
                              (int32_t)setAutoOpenAutoOrganizationDialogCtr,
                              v84,
                              v85,
                              v86,
                              v87,
                              v88,
                              v89);
                            setTDPlaySpeedCtr = this->fields.setTDPlaySpeedCtr;
                            if ( !setTDPlaySpeedCtr
                              || (v3 = sub_1C714EC(this->fields.setTDPlaySpeedCtr, *(_QWORD *)(*(_QWORD *)v12 + 64LL))) != 0 )
                            {
                              if ( *v13 <= 0xCu )
                                goto LABEL_69;
                              *(_QWORD *)(v12 + 128) = setTDPlaySpeedCtr;
                              sub_1C71354(
                                (GrandQuestFolderBoardItem_o *)(v12 + 128),
                                (int32_t)setTDPlaySpeedCtr,
                                v91,
                                v92,
                                v93,
                                v94,
                                v95,
                                v96);
                              setRandomLimitCountCtr = this->fields.setRandomLimitCountCtr;
                              if ( !setRandomLimitCountCtr
                                || (v3 = sub_1C714EC(
                                           this->fields.setRandomLimitCountCtr,
                                           *(_QWORD *)(*(_QWORD *)v12 + 64LL))) != 0 )
                              {
                                if ( *v13 <= 0xDu )
                                  goto LABEL_69;
                                *(_QWORD *)(v12 + 136) = setRandomLimitCountCtr;
                                sub_1C71354(
                                  (GrandQuestFolderBoardItem_o *)(v12 + 136),
                                  (int32_t)setRandomLimitCountCtr,
                                  v98,
                                  v99,
                                  v100,
                                  v101,
                                  v102,
                                  v103);
                                setRandomLimitCountResetCtr = this->fields.setRandomLimitCountResetCtr;
                                if ( !setRandomLimitCountResetCtr
                                  || (v3 = sub_1C714EC(
                                             this->fields.setRandomLimitCountResetCtr,
                                             *(_QWORD *)(*(_QWORD *)v12 + 64LL))) != 0 )
                                {
                                  if ( *v13 <= 0xEu )
                                    goto LABEL_69;
                                  *(_QWORD *)(v12 + 144) = setRandomLimitCountResetCtr;
                                  sub_1C71354(
                                    (GrandQuestFolderBoardItem_o *)(v12 + 144),
                                    (int32_t)setRandomLimitCountResetCtr,
                                    v105,
                                    v106,
                                    v107,
                                    v108,
                                    v109,
                                    v110);
                                  setSvtRandCtr = this->fields.setSvtRandCtr;
                                  if ( !setSvtRandCtr
                                    || (v3 = sub_1C714EC(this->fields.setSvtRandCtr, *(_QWORD *)(*(_QWORD *)v12 + 64LL))) != 0 )
                                  {
                                    if ( *v13 <= 0xFu )
                                      goto LABEL_69;
                                    *(_QWORD *)(v12 + 152) = setSvtRandCtr;
                                    sub_1C71354(
                                      (GrandQuestFolderBoardItem_o *)(v12 + 152),
                                      (int32_t)setSvtRandCtr,
                                      v112,
                                      v113,
                                      v114,
                                      v115,
                                      v116,
                                      v117);
                                    setMessageDispCtr = this->fields.setMessageDispCtr;
                                    if ( !setMessageDispCtr
                                      || (v3 = sub_1C714EC(
                                                 this->fields.setMessageDispCtr,
                                                 *(_QWORD *)(*(_QWORD *)v12 + 64LL))) != 0 )
                                    {
                                      if ( *v13 <= 0x10u )
                                        goto LABEL_69;
                                      *(_QWORD *)(v12 + 160) = setMessageDispCtr;
                                      sub_1C71354(
                                        (GrandQuestFolderBoardItem_o *)(v12 + 160),
                                        (int32_t)setMessageDispCtr,
                                        v119,
                                        v120,
                                        v121,
                                        v122,
                                        v123,
                                        v124);
                                      setNoticeCtr = this->fields.setNoticeCtr;
                                      if ( !setNoticeCtr
                                        || (v3 = sub_1C714EC(
                                                   this->fields.setNoticeCtr,
                                                   *(_QWORD *)(*(_QWORD *)v12 + 64LL))) != 0 )
                                      {
                                        if ( *v13 <= 0x11u )
                                          goto LABEL_69;
                                        *(_QWORD *)(v12 + 168) = setNoticeCtr;
                                        sub_1C71354(
                                          (GrandQuestFolderBoardItem_o *)(v12 + 168),
                                          (int32_t)setNoticeCtr,
                                          v126,
                                          v127,
                                          v128,
                                          v129,
                                          v130,
                                          v131);
                                        setPlayOpeningMovieCtr = this->fields.setPlayOpeningMovieCtr;
                                        if ( !setPlayOpeningMovieCtr
                                          || (v3 = sub_1C714EC(
                                                     this->fields.setPlayOpeningMovieCtr,
                                                     *(_QWORD *)(*(_QWORD *)v12 + 64LL))) != 0 )
                                        {
                                          if ( *v13 <= 0x12u )
                                            goto LABEL_69;
                                          *(_QWORD *)(v12 + 176) = setPlayOpeningMovieCtr;
                                          sub_1C71354(
                                            (GrandQuestFolderBoardItem_o *)(v12 + 176),
                                            (int32_t)setPlayOpeningMovieCtr,
                                            v133,
                                            v134,
                                            v135,
                                            v136,
                                            v137,
                                            v138);
                                          fullDlCtr = this->fields.fullDlCtr;
                                          if ( !fullDlCtr
                                            || (v3 = sub_1C714EC(
                                                       this->fields.fullDlCtr,
                                                       *(_QWORD *)(*(_QWORD *)v12 + 64LL))) != 0 )
                                          {
                                            if ( *v13 <= 0x13u )
                                              goto LABEL_69;
                                            *(_QWORD *)(v12 + 184) = fullDlCtr;
                                            sub_1C71354(
                                              (GrandQuestFolderBoardItem_o *)(v12 + 184),
                                              (int32_t)fullDlCtr,
                                              v140,
                                              v141,
                                              v142,
                                              v143,
                                              v144,
                                              v145);
                                            setBlackListCtr = this->fields.setBlackListCtr;
                                            if ( !setBlackListCtr
                                              || (v3 = sub_1C714EC(
                                                         this->fields.setBlackListCtr,
                                                         *(_QWORD *)(*(_QWORD *)v12 + 64LL))) != 0 )
                                            {
                                              if ( *v13 > 0x14u )
                                              {
                                                *(_QWORD *)(v12 + 192) = setBlackListCtr;
                                                p_contentsArray = (GrandQuestFolderBoardItem_o *)&this->fields.contentsArray;
                                                sub_1C71354(
                                                  (GrandQuestFolderBoardItem_o *)(v12 + 192),
                                                  (int32_t)setBlackListCtr,
                                                  v147,
                                                  v148,
                                                  v149,
                                                  v150,
                                                  v151,
                                                  v152);
                                                p_contentsArray->klass = (GrandQuestFolderBoardItem_c *)v12;
                                                sub_1C71354(p_contentsArray, v12, v155, v156, v157, v158, v159, v160);
                                                return;
                                              }
LABEL_69:
                                              sub_1C71610(v3);
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
    v161 = sub_1C7162C();
    sub_1C714D8(v161, 0);
  }
}


void SetGameOptionComponent__InitGameOption(SetGameOptionComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1
  struct GameOptionContentBase_array *contentsArray; // x22
  int max_length; // w8
  unsigned int v7; // w23
  float v8; // s8
  GameOptionContentBase_o *v9; // x20
  char v10; // w21
  const MethodInfo *v11; // x2
  const MethodInfo *v12; // x1
  UnityEngine_Object_o *collider; // x20
  UnityEngine_BoxCollider_o *v14; // x20
  float v15; // s8
  UnityEngine_BoxCollider_o *v16; // x20
  UnityEngine_Vector3_o v17; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v18; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4CC23C7 & 1) == 0 )
  {
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    byte_4CC23C7 = 1;
  }
  SetGameOptionComponent__CreateContentsArrayIfNotYet(this, method);
  contentsArray = this->fields.contentsArray;
  if ( !contentsArray )
    goto LABEL_21;
  max_length = contentsArray->max_length;
  if ( max_length >= 1 )
  {
    v7 = 0;
    v8 = 160.0;
    while ( 1 )
    {
      if ( v7 >= max_length )
        sub_1C71610(gameObject);
      v9 = contentsArray->m_Items[v7];
      if ( !v9 )
        break;
      v10 = ((__int64 (__fastcall *)(GameOptionContentBase_o *, const MethodInfo *))v9->klass->vtable._6_IsAvailable.methodPtr)(
              v9,
              v9->klass->vtable._6_IsAvailable.method);
      GameOptionContentBase__Show(v9, v10 & 1, v11);
      if ( (v10 & 1) != 0 )
      {
        ((void (__fastcall *)(GameOptionContentBase_o *, const MethodInfo *))v9->klass->vtable._4_Init.methodPtr)(
          v9,
          v9->klass->vtable._4_Init.method);
        GameOptionContentBase__SetPosY(v9, v8, v12);
        v8 = v8 - (float)v9->fields.contentHeight;
      }
      max_length = contentsArray->max_length;
      if ( (int)++v7 >= max_length )
        goto LABEL_13;
    }
LABEL_21:
    sub_1C71608(gameObject, v4);
  }
  v8 = 160.0;
LABEL_13:
  collider = (UnityEngine_Object_o *)this->fields.collider;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(collider, 0, 0);
  if ( ((unsigned __int8)gameObject & 1) != 0 )
  {
    v14 = this->fields.collider;
    if ( !v14 )
      goto LABEL_21;
    v15 = 160.0 - v8;
    LODWORD(v17.fields.x) = (unsigned int)UnityEngine_BoxCollider__get_size(this->fields.collider, 0);
    v17.fields.z = 0.0;
    v17.fields.y = v15;
    UnityEngine_BoxCollider__set_size(v14, v17, 0);
    v16 = this->fields.collider;
    if ( !v16 )
      goto LABEL_21;
    LODWORD(v18.fields.x) = (unsigned int)UnityEngine_BoxCollider__get_center(this->fields.collider, 0);
    v18.fields.y = (float)(v15 * -0.5) + 160.0;
    v18.fields.z = 0.0;
    UnityEngine_BoxCollider__set_center(v16, v18, 0);
  }
  this->fields._optionSceneType_k__BackingField = 0;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    goto LABEL_21;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0);
}


void SetGameOptionComponent__SetMaskEnabled(SetGameOptionComponent_o *this, bool isEnabled, const MethodInfo *method)
{
  UnityEngine_GameObject_o *optionMask; // x0

  optionMask = this->fields.optionMask;
  if ( !optionMask )
    sub_1C71608(0, isEnabled);
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
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4CC23C8 & 1) == 0 )
  {
    sub_1C713B0(&AtlasManager_TypeInfo);
    byte_4CC23C8 = 1;
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
    sub_1C71608(hidePos, method);
  }
  ((void (__fastcall *)(UnityEngine_GameObject_o *, _QWORD, Il2CppClass *, float, float))hidePos->klass[1]._1.declaringType)(
    hidePos,
    0,
    hidePos->klass[1]._1.parent,
    0.0,
    0.0);
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__ReleaseMyRoomAtlas(0);
}


void SetGameOptionComponent__reflectionGameOption(
        SetGameOptionComponent_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  SetGameOptionComponent___c_c *v5; // x0
  System_Collections_Generic_IEnumerable_TSource__o *contentsArray; // x20
  System_Func_object__bool__o *_9__40_0; // x21
  Il2CppObject *v8; // x22
  struct SetGameOptionComponent___c_StaticFields *static_fields; // x0
  int32_t v10; // w2
  int32_t v11; // w3
  System_String_o *v12; // x4
  int32_t v13; // w5
  int64_t v14; // x6
  System_String_o *v15; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v16; // x0
  SetGameOptionComponent___c_c *v17; // x8
  System_Collections_Generic_IEnumerable_T__o *v18; // x20
  System_Action_object__o *_9__40_1; // x21
  Il2CppObject *v20; // x22
  struct SetGameOptionComponent___c_StaticFields *v21; // x0
  int32_t v22; // w2
  int32_t v23; // w3
  System_String_o *v24; // x4
  int32_t v25; // w5
  int64_t v26; // x6
  System_String_o *v27; // x7

  if ( (byte_4CC23C9 & 1) == 0 )
  {
    sub_1C713B0(&System_Action_GameOptionContentBase__TypeInfo);
    sub_1C713B0(&Method_BasicHelper_ForEach_GameOptionContentBase___);
    sub_1C713B0(&Method_System_Linq_Enumerable_Where_GameOptionContentBase___);
    sub_1C713B0(&System_Func_GameOptionContentBase__bool__TypeInfo);
    sub_1C713B0(&OptionManager_TypeInfo);
    sub_1C713B0(&SoundManager_TypeInfo);
    sub_1C713B0(&Method_SetGameOptionComponent___c__reflectionGameOption_b__40_0__);
    sub_1C713B0(&Method_SetGameOptionComponent___c__reflectionGameOption_b__40_1__);
    sub_1C713B0(&SetGameOptionComponent___c_TypeInfo);
    byte_4CC23C9 = 1;
  }
  v5 = SetGameOptionComponent___c_TypeInfo;
  contentsArray = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.contentsArray;
  if ( !SetGameOptionComponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SetGameOptionComponent___c_TypeInfo);
    v5 = SetGameOptionComponent___c_TypeInfo;
  }
  _9__40_0 = (System_Func_object__bool__o *)v5->static_fields->__9__40_0;
  if ( !_9__40_0 )
  {
    if ( !v5->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v5);
      v5 = SetGameOptionComponent___c_TypeInfo;
    }
    v8 = (Il2CppObject *)v5->static_fields->__9;
    _9__40_0 = (System_Func_object__bool__o *)sub_1C715FC(System_Func_GameOptionContentBase__bool__TypeInfo);
    System_Func_object__bool____ctor(_9__40_0, v8, Method_SetGameOptionComponent___c__reflectionGameOption_b__40_0__, 0);
    static_fields = SetGameOptionComponent___c_TypeInfo->static_fields;
    static_fields->__9__40_0 = (struct System_Func_GameOptionContentBase__bool__o *)_9__40_0;
    sub_1C71354(
      (GrandQuestFolderBoardItem_o *)&static_fields->__9__40_0,
      (int32_t)_9__40_0,
      v10,
      v11,
      v12,
      v13,
      v14,
      v15);
  }
  v16 = System_Linq_Enumerable__Where_object_(
          contentsArray,
          (System_Func_TSource__bool__o *)_9__40_0,
          (const MethodInfo_3192108 *)Method_System_Linq_Enumerable_Where_GameOptionContentBase___);
  v17 = SetGameOptionComponent___c_TypeInfo;
  v18 = (System_Collections_Generic_IEnumerable_T__o *)v16;
  if ( !SetGameOptionComponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SetGameOptionComponent___c_TypeInfo);
    v17 = SetGameOptionComponent___c_TypeInfo;
  }
  _9__40_1 = (System_Action_object__o *)v17->static_fields->__9__40_1;
  if ( !_9__40_1 )
  {
    if ( !v17->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v17);
      v17 = SetGameOptionComponent___c_TypeInfo;
    }
    v20 = (Il2CppObject *)v17->static_fields->__9;
    _9__40_1 = (System_Action_object__o *)sub_1C715FC(System_Action_GameOptionContentBase__TypeInfo);
    System_Action_object____ctor(_9__40_1, v20, Method_SetGameOptionComponent___c__reflectionGameOption_b__40_1__, 0);
    v21 = SetGameOptionComponent___c_TypeInfo->static_fields;
    v21->__9__40_1 = (struct System_Action_GameOptionContentBase__o *)_9__40_1;
    sub_1C71354((GrandQuestFolderBoardItem_o *)&v21->__9__40_1, (int32_t)_9__40_1, v22, v23, v24, v25, v26, v27);
  }
  BasicHelper__ForEach_object_(
    v18,
    (System_Action_T__o *)_9__40_1,
    (const MethodInfo_3136DF4 *)Method_BasicHelper_ForEach_GameOptionContentBase___);
  if ( !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__stopSe(0.0, 0);
  if ( !OptionManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
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

  if ( (byte_4CC23C5 & 1) == 0 )
  {
    sub_1C713B0(&System_Action_TypeInfo);
    sub_1C713B0(&AtlasManager_TypeInfo);
    sub_1C713B0(&Method_SetGameOptionComponent__showGameOption_b__36_0__);
    byte_4CC23C5 = 1;
  }
  bgTxtSprite = this->fields.bgTxtSprite;
  if ( !bgTxtSprite
    || (gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)bgTxtSprite, 0),
        bgTxtSprite = (struct UISprite_o *)BgTxtManager__IsActiveBgTxt(0),
        !gameObject) )
  {
    sub_1C71608(bgTxtSprite, method);
  }
  UnityEngine_GameObject__SetActive(gameObject, (unsigned __int8)bgTxtSprite & 1, 0);
  v5 = (System_Action_o *)sub_1C715FC(System_Action_TypeInfo);
  System_Action___ctor(v5, (Il2CppObject *)this, Method_SetGameOptionComponent__showGameOption_b__36_0__, 0);
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__LoadMyRoomAtlas(v5, 1, 0);
}


void SetGameOptionComponent___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  if ( (byte_4CC23CA & 1) == 0 )
  {
    sub_1C713B0(&SetGameOptionComponent___c_TypeInfo);
    byte_4CC23CA = 1;
  }
  v1 = (Il2CppObject *)sub_1C715FC(SetGameOptionComponent___c_TypeInfo);
  System_Object___ctor(v1, 0);
  SetGameOptionComponent___c_TypeInfo->static_fields->__9 = (struct SetGameOptionComponent___c_o *)v1;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)SetGameOptionComponent___c_TypeInfo->static_fields,
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


bool SetGameOptionComponent___c___reflectionGameOption_b__40_0(
        SetGameOptionComponent___c_o *this,
        GameOptionContentBase_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C71608(this, 0);
  return ((__int64 (__fastcall *)(GameOptionContentBase_o *, const MethodInfo *))x->klass->vtable._6_IsAvailable.methodPtr)(
           x,
           x->klass->vtable._6_IsAvailable.method);
}


void SetGameOptionComponent___c___reflectionGameOption_b__40_1(
        SetGameOptionComponent___c_o *this,
        GameOptionContentBase_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C71608(this, 0);
  ((void (__fastcall *)(GameOptionContentBase_o *, const MethodInfo *))x->klass->vtable._5_Reflection.methodPtr)(
    x,
    x->klass->vtable._5_Reflection.method);
}