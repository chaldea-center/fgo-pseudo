void __fastcall SetGameOptionComponent___ctor(SetGameOptionComponent_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall SetGameOptionComponent__Awake(SetGameOptionComponent_o *this, const MethodInfo *method)
{
  ;
}


void __fastcall SetGameOptionComponent__CreateContentsArrayIfNotYet(
        SetGameOptionComponent_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  BattleServantConfConponent_o *p_contentsArray; // x19
  __int64 v6; // x0
  __int64 v7; // x1
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  System_Int32_array **setResolutionOptionCtr; // x22
  __int64 v15; // x20
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  System_Int32_array **setSmoothnessCtr; // x22
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7
  System_Int32_array **setVolCtr; // x22
  System_String_array **v30; // x2
  System_String_array **v31; // x3
  System_Boolean_array **v32; // x4
  System_Int32_array **v33; // x5
  System_Int32_array *v34; // x6
  System_Int32_array *v35; // x7
  System_Int32_array **setScenarioTextSpeedCtr; // x22
  System_String_array **v37; // x2
  System_String_array **v38; // x3
  System_Boolean_array **v39; // x4
  System_Int32_array **v40; // x5
  System_Int32_array *v41; // x6
  System_Int32_array *v42; // x7
  System_Int32_array **setScenarioCtr; // x22
  System_String_array **v44; // x2
  System_String_array **v45; // x3
  System_Boolean_array **v46; // x4
  System_Int32_array **v47; // x5
  System_Int32_array *v48; // x6
  System_Int32_array *v49; // x7
  System_Int32_array **setSpoilerProtectionCtr; // x22
  System_String_array **v51; // x2
  System_String_array **v52; // x3
  System_Boolean_array **v53; // x4
  System_Int32_array **v54; // x5
  System_Int32_array *v55; // x6
  System_Int32_array *v56; // x7
  System_Int32_array **setSwitchCtr; // x22
  System_String_array **v58; // x2
  System_String_array **v59; // x3
  System_Boolean_array **v60; // x4
  System_Int32_array **v61; // x5
  System_Int32_array *v62; // x6
  System_Int32_array *v63; // x7
  System_Int32_array **setSwitch2Ctr; // x22
  System_String_array **v65; // x2
  System_String_array **v66; // x3
  System_Boolean_array **v67; // x4
  System_Int32_array **v68; // x5
  System_Int32_array *v69; // x6
  System_Int32_array *v70; // x7
  System_Int32_array **setPreBattleFormationCtr; // x22
  System_String_array **v72; // x2
  System_String_array **v73; // x3
  System_Boolean_array **v74; // x4
  System_Int32_array **v75; // x5
  System_Int32_array *v76; // x6
  System_Int32_array *v77; // x7
  System_Int32_array **setAdvantageClassAutoCtr; // x22
  System_String_array **v79; // x2
  System_String_array **v80; // x3
  System_Boolean_array **v81; // x4
  System_Int32_array **v82; // x5
  System_Int32_array *v83; // x6
  System_Int32_array *v84; // x7
  System_Int32_array **setAutoSelectPartyCtr; // x22
  System_String_array **v86; // x2
  System_String_array **v87; // x3
  System_Boolean_array **v88; // x4
  System_Int32_array **v89; // x5
  System_Int32_array *v90; // x6
  System_Int32_array *v91; // x7
  System_Int32_array **setTDPlaySpeedCtr; // x22
  System_String_array **v93; // x2
  System_String_array **v94; // x3
  System_Boolean_array **v95; // x4
  System_Int32_array **v96; // x5
  System_Int32_array *v97; // x6
  System_Int32_array *v98; // x7
  System_Int32_array **setRandomLimitCountCtr; // x22
  System_String_array **v100; // x2
  System_String_array **v101; // x3
  System_Boolean_array **v102; // x4
  System_Int32_array **v103; // x5
  System_Int32_array *v104; // x6
  System_Int32_array *v105; // x7
  System_Int32_array **setRandomLimitCountResetCtr; // x22
  System_String_array **v107; // x2
  System_String_array **v108; // x3
  System_Boolean_array **v109; // x4
  System_Int32_array **v110; // x5
  System_Int32_array *v111; // x6
  System_Int32_array *v112; // x7
  System_Int32_array **setSvtRandCtr; // x22
  System_String_array **v114; // x2
  System_String_array **v115; // x3
  System_Boolean_array **v116; // x4
  System_Int32_array **v117; // x5
  System_Int32_array *v118; // x6
  System_Int32_array *v119; // x7
  System_Int32_array **setMessageDispCtr; // x22
  System_String_array **v121; // x2
  System_String_array **v122; // x3
  System_Boolean_array **v123; // x4
  System_Int32_array **v124; // x5
  System_Int32_array *v125; // x6
  System_Int32_array *v126; // x7
  System_Int32_array **setNoticeCtr; // x22
  System_String_array **v128; // x2
  System_String_array **v129; // x3
  System_Boolean_array **v130; // x4
  System_Int32_array **v131; // x5
  System_Int32_array *v132; // x6
  System_Int32_array *v133; // x7
  System_Int32_array **setPlayOpeningMovieCtr; // x22
  System_String_array **v135; // x2
  System_String_array **v136; // x3
  System_Boolean_array **v137; // x4
  System_Int32_array **v138; // x5
  System_Int32_array *v139; // x6
  System_Int32_array *v140; // x7
  System_Int32_array **fullDlCtr; // x22
  System_String_array **v142; // x2
  System_String_array **v143; // x3
  System_Boolean_array **v144; // x4
  System_Int32_array **v145; // x5
  System_Int32_array *v146; // x6
  System_Int32_array *v147; // x7
  System_Int32_array **setBlackListCtr; // x21
  System_String_array **v149; // x2
  System_String_array **v150; // x3
  System_Boolean_array **v151; // x4
  System_Int32_array **v152; // x5
  System_Int32_array *v153; // x6
  System_Int32_array *v154; // x7
  __int64 v155; // x0
  __int64 v156; // x0

  if ( (byte_42EBA40 & 1) == 0 )
  {
    sub_B5D5C4(&GameOptionContentBase___TypeInfo, (_DWORD)method, v2, v3);
    byte_42EBA40 = 1;
  }
  p_contentsArray = (BattleServantConfConponent_o *)&this->fields.contentsArray;
  if ( !this->fields.contentsArray )
  {
    v6 = sub_B5D5DC(GameOptionContentBase___TypeInfo, 20LL);
    if ( !v6 )
      sub_B5D69C(0LL, v7);
    setResolutionOptionCtr = (System_Int32_array **)this->fields.setResolutionOptionCtr;
    v15 = v6;
    if ( !setResolutionOptionCtr
      || (v6 = sub_B5D684(this->fields.setResolutionOptionCtr, *(_QWORD *)(*(_QWORD *)v6 + 64LL))) != 0 )
    {
      if ( !*(_DWORD *)(v15 + 24) )
        goto LABEL_66;
      *(_QWORD *)(v15 + 32) = setResolutionOptionCtr;
      sub_B5D560((BattleServantConfConponent_o *)(v15 + 32), setResolutionOptionCtr, v8, v9, v10, v11, v12, v13);
      setSmoothnessCtr = (System_Int32_array **)this->fields.setSmoothnessCtr;
      if ( !setSmoothnessCtr
        || (v6 = sub_B5D684(this->fields.setSmoothnessCtr, *(_QWORD *)(*(_QWORD *)v15 + 64LL))) != 0 )
      {
        if ( *(_DWORD *)(v15 + 24) <= 1u )
          goto LABEL_66;
        *(_QWORD *)(v15 + 40) = setSmoothnessCtr;
        sub_B5D560((BattleServantConfConponent_o *)(v15 + 40), setSmoothnessCtr, v16, v17, v18, v19, v20, v21);
        setVolCtr = (System_Int32_array **)this->fields.setVolCtr;
        if ( !setVolCtr || (v6 = sub_B5D684(this->fields.setVolCtr, *(_QWORD *)(*(_QWORD *)v15 + 64LL))) != 0 )
        {
          if ( *(_DWORD *)(v15 + 24) <= 2u )
            goto LABEL_66;
          *(_QWORD *)(v15 + 48) = setVolCtr;
          sub_B5D560((BattleServantConfConponent_o *)(v15 + 48), setVolCtr, v23, v24, v25, v26, v27, v28);
          setScenarioTextSpeedCtr = (System_Int32_array **)this->fields.setScenarioTextSpeedCtr;
          if ( !setScenarioTextSpeedCtr
            || (v6 = sub_B5D684(this->fields.setScenarioTextSpeedCtr, *(_QWORD *)(*(_QWORD *)v15 + 64LL))) != 0 )
          {
            if ( *(_DWORD *)(v15 + 24) <= 3u )
              goto LABEL_66;
            *(_QWORD *)(v15 + 56) = setScenarioTextSpeedCtr;
            sub_B5D560(
              (BattleServantConfConponent_o *)(v15 + 56),
              setScenarioTextSpeedCtr,
              v30,
              v31,
              v32,
              v33,
              v34,
              v35);
            setScenarioCtr = (System_Int32_array **)this->fields.setScenarioCtr;
            if ( !setScenarioCtr
              || (v6 = sub_B5D684(this->fields.setScenarioCtr, *(_QWORD *)(*(_QWORD *)v15 + 64LL))) != 0 )
            {
              if ( *(_DWORD *)(v15 + 24) <= 4u )
                goto LABEL_66;
              *(_QWORD *)(v15 + 64) = setScenarioCtr;
              sub_B5D560((BattleServantConfConponent_o *)(v15 + 64), setScenarioCtr, v37, v38, v39, v40, v41, v42);
              setSpoilerProtectionCtr = (System_Int32_array **)this->fields.setSpoilerProtectionCtr;
              if ( !setSpoilerProtectionCtr
                || (v6 = sub_B5D684(this->fields.setSpoilerProtectionCtr, *(_QWORD *)(*(_QWORD *)v15 + 64LL))) != 0 )
              {
                if ( *(_DWORD *)(v15 + 24) <= 5u )
                  goto LABEL_66;
                *(_QWORD *)(v15 + 72) = setSpoilerProtectionCtr;
                sub_B5D560(
                  (BattleServantConfConponent_o *)(v15 + 72),
                  setSpoilerProtectionCtr,
                  v44,
                  v45,
                  v46,
                  v47,
                  v48,
                  v49);
                setSwitchCtr = (System_Int32_array **)this->fields.setSwitchCtr;
                if ( !setSwitchCtr
                  || (v6 = sub_B5D684(this->fields.setSwitchCtr, *(_QWORD *)(*(_QWORD *)v15 + 64LL))) != 0 )
                {
                  if ( *(_DWORD *)(v15 + 24) <= 6u )
                    goto LABEL_66;
                  *(_QWORD *)(v15 + 80) = setSwitchCtr;
                  sub_B5D560((BattleServantConfConponent_o *)(v15 + 80), setSwitchCtr, v51, v52, v53, v54, v55, v56);
                  setSwitch2Ctr = (System_Int32_array **)this->fields.setSwitch2Ctr;
                  if ( !setSwitch2Ctr
                    || (v6 = sub_B5D684(this->fields.setSwitch2Ctr, *(_QWORD *)(*(_QWORD *)v15 + 64LL))) != 0 )
                  {
                    if ( *(_DWORD *)(v15 + 24) <= 7u )
                      goto LABEL_66;
                    *(_QWORD *)(v15 + 88) = setSwitch2Ctr;
                    sub_B5D560((BattleServantConfConponent_o *)(v15 + 88), setSwitch2Ctr, v58, v59, v60, v61, v62, v63);
                    setPreBattleFormationCtr = (System_Int32_array **)this->fields.setPreBattleFormationCtr;
                    if ( !setPreBattleFormationCtr
                      || (v6 = sub_B5D684(this->fields.setPreBattleFormationCtr, *(_QWORD *)(*(_QWORD *)v15 + 64LL))) != 0 )
                    {
                      if ( *(_DWORD *)(v15 + 24) <= 8u )
                        goto LABEL_66;
                      *(_QWORD *)(v15 + 96) = setPreBattleFormationCtr;
                      sub_B5D560(
                        (BattleServantConfConponent_o *)(v15 + 96),
                        setPreBattleFormationCtr,
                        v65,
                        v66,
                        v67,
                        v68,
                        v69,
                        v70);
                      setAdvantageClassAutoCtr = (System_Int32_array **)this->fields.setAdvantageClassAutoCtr;
                      if ( !setAdvantageClassAutoCtr
                        || (v6 = sub_B5D684(this->fields.setAdvantageClassAutoCtr, *(_QWORD *)(*(_QWORD *)v15 + 64LL))) != 0 )
                      {
                        if ( *(_DWORD *)(v15 + 24) <= 9u )
                          goto LABEL_66;
                        *(_QWORD *)(v15 + 104) = setAdvantageClassAutoCtr;
                        sub_B5D560(
                          (BattleServantConfConponent_o *)(v15 + 104),
                          setAdvantageClassAutoCtr,
                          v72,
                          v73,
                          v74,
                          v75,
                          v76,
                          v77);
                        setAutoSelectPartyCtr = (System_Int32_array **)this->fields.setAutoSelectPartyCtr;
                        if ( !setAutoSelectPartyCtr
                          || (v6 = sub_B5D684(this->fields.setAutoSelectPartyCtr, *(_QWORD *)(*(_QWORD *)v15 + 64LL))) != 0 )
                        {
                          if ( *(_DWORD *)(v15 + 24) <= 0xAu )
                            goto LABEL_66;
                          *(_QWORD *)(v15 + 112) = setAutoSelectPartyCtr;
                          sub_B5D560(
                            (BattleServantConfConponent_o *)(v15 + 112),
                            setAutoSelectPartyCtr,
                            v79,
                            v80,
                            v81,
                            v82,
                            v83,
                            v84);
                          setTDPlaySpeedCtr = (System_Int32_array **)this->fields.setTDPlaySpeedCtr;
                          if ( !setTDPlaySpeedCtr
                            || (v6 = sub_B5D684(this->fields.setTDPlaySpeedCtr, *(_QWORD *)(*(_QWORD *)v15 + 64LL))) != 0 )
                          {
                            if ( *(_DWORD *)(v15 + 24) <= 0xBu )
                              goto LABEL_66;
                            *(_QWORD *)(v15 + 120) = setTDPlaySpeedCtr;
                            sub_B5D560(
                              (BattleServantConfConponent_o *)(v15 + 120),
                              setTDPlaySpeedCtr,
                              v86,
                              v87,
                              v88,
                              v89,
                              v90,
                              v91);
                            setRandomLimitCountCtr = (System_Int32_array **)this->fields.setRandomLimitCountCtr;
                            if ( !setRandomLimitCountCtr
                              || (v6 = sub_B5D684(
                                         this->fields.setRandomLimitCountCtr,
                                         *(_QWORD *)(*(_QWORD *)v15 + 64LL))) != 0 )
                            {
                              if ( *(_DWORD *)(v15 + 24) <= 0xCu )
                                goto LABEL_66;
                              *(_QWORD *)(v15 + 128) = setRandomLimitCountCtr;
                              sub_B5D560(
                                (BattleServantConfConponent_o *)(v15 + 128),
                                setRandomLimitCountCtr,
                                v93,
                                v94,
                                v95,
                                v96,
                                v97,
                                v98);
                              setRandomLimitCountResetCtr = (System_Int32_array **)this->fields.setRandomLimitCountResetCtr;
                              if ( !setRandomLimitCountResetCtr
                                || (v6 = sub_B5D684(
                                           this->fields.setRandomLimitCountResetCtr,
                                           *(_QWORD *)(*(_QWORD *)v15 + 64LL))) != 0 )
                              {
                                if ( *(_DWORD *)(v15 + 24) <= 0xDu )
                                  goto LABEL_66;
                                *(_QWORD *)(v15 + 136) = setRandomLimitCountResetCtr;
                                sub_B5D560(
                                  (BattleServantConfConponent_o *)(v15 + 136),
                                  setRandomLimitCountResetCtr,
                                  v100,
                                  v101,
                                  v102,
                                  v103,
                                  v104,
                                  v105);
                                setSvtRandCtr = (System_Int32_array **)this->fields.setSvtRandCtr;
                                if ( !setSvtRandCtr
                                  || (v6 = sub_B5D684(this->fields.setSvtRandCtr, *(_QWORD *)(*(_QWORD *)v15 + 64LL))) != 0 )
                                {
                                  if ( *(_DWORD *)(v15 + 24) <= 0xEu )
                                    goto LABEL_66;
                                  *(_QWORD *)(v15 + 144) = setSvtRandCtr;
                                  sub_B5D560(
                                    (BattleServantConfConponent_o *)(v15 + 144),
                                    setSvtRandCtr,
                                    v107,
                                    v108,
                                    v109,
                                    v110,
                                    v111,
                                    v112);
                                  setMessageDispCtr = (System_Int32_array **)this->fields.setMessageDispCtr;
                                  if ( !setMessageDispCtr
                                    || (v6 = sub_B5D684(
                                               this->fields.setMessageDispCtr,
                                               *(_QWORD *)(*(_QWORD *)v15 + 64LL))) != 0 )
                                  {
                                    if ( *(_DWORD *)(v15 + 24) <= 0xFu )
                                      goto LABEL_66;
                                    *(_QWORD *)(v15 + 152) = setMessageDispCtr;
                                    sub_B5D560(
                                      (BattleServantConfConponent_o *)(v15 + 152),
                                      setMessageDispCtr,
                                      v114,
                                      v115,
                                      v116,
                                      v117,
                                      v118,
                                      v119);
                                    setNoticeCtr = (System_Int32_array **)this->fields.setNoticeCtr;
                                    if ( !setNoticeCtr
                                      || (v6 = sub_B5D684(this->fields.setNoticeCtr, *(_QWORD *)(*(_QWORD *)v15 + 64LL))) != 0 )
                                    {
                                      if ( *(_DWORD *)(v15 + 24) <= 0x10u )
                                        goto LABEL_66;
                                      *(_QWORD *)(v15 + 160) = setNoticeCtr;
                                      sub_B5D560(
                                        (BattleServantConfConponent_o *)(v15 + 160),
                                        setNoticeCtr,
                                        v121,
                                        v122,
                                        v123,
                                        v124,
                                        v125,
                                        v126);
                                      setPlayOpeningMovieCtr = (System_Int32_array **)this->fields.setPlayOpeningMovieCtr;
                                      if ( !setPlayOpeningMovieCtr
                                        || (v6 = sub_B5D684(
                                                   this->fields.setPlayOpeningMovieCtr,
                                                   *(_QWORD *)(*(_QWORD *)v15 + 64LL))) != 0 )
                                      {
                                        if ( *(_DWORD *)(v15 + 24) <= 0x11u )
                                          goto LABEL_66;
                                        *(_QWORD *)(v15 + 168) = setPlayOpeningMovieCtr;
                                        sub_B5D560(
                                          (BattleServantConfConponent_o *)(v15 + 168),
                                          setPlayOpeningMovieCtr,
                                          v128,
                                          v129,
                                          v130,
                                          v131,
                                          v132,
                                          v133);
                                        fullDlCtr = (System_Int32_array **)this->fields.fullDlCtr;
                                        if ( !fullDlCtr
                                          || (v6 = sub_B5D684(
                                                     this->fields.fullDlCtr,
                                                     *(_QWORD *)(*(_QWORD *)v15 + 64LL))) != 0 )
                                        {
                                          if ( *(_DWORD *)(v15 + 24) <= 0x12u )
                                            goto LABEL_66;
                                          *(_QWORD *)(v15 + 176) = fullDlCtr;
                                          sub_B5D560(
                                            (BattleServantConfConponent_o *)(v15 + 176),
                                            fullDlCtr,
                                            v135,
                                            v136,
                                            v137,
                                            v138,
                                            v139,
                                            v140);
                                          setBlackListCtr = (System_Int32_array **)this->fields.setBlackListCtr;
                                          if ( !setBlackListCtr
                                            || (v6 = sub_B5D684(setBlackListCtr, *(_QWORD *)(*(_QWORD *)v15 + 64LL))) != 0 )
                                          {
                                            if ( *(_DWORD *)(v15 + 24) > 0x13u )
                                            {
                                              *(_QWORD *)(v15 + 184) = setBlackListCtr;
                                              sub_B5D560(
                                                (BattleServantConfConponent_o *)(v15 + 184),
                                                setBlackListCtr,
                                                v142,
                                                v143,
                                                v144,
                                                v145,
                                                v146,
                                                v147);
                                              p_contentsArray->klass = (BattleServantConfConponent_c *)v15;
                                              sub_B5D560(
                                                p_contentsArray,
                                                (System_Int32_array **)v15,
                                                v149,
                                                v150,
                                                v151,
                                                v152,
                                                v153,
                                                v154);
                                              return;
                                            }
LABEL_66:
                                            v155 = sub_B5D6C8(v6);
                                            sub_B5D668(v155, 0LL);
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
    v156 = sub_B5D6BC(v6);
    sub_B5D668(v156, 0LL);
  }
}


void __fastcall SetGameOptionComponent__InitGameOption(SetGameOptionComponent_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v6; // x1
  struct GameOptionContentBase_array *contentsArray; // x23
  int max_length; // w8
  float v9; // s8
  unsigned int v10; // w24
  GameOptionContentBase_o *v11; // x20
  char v12; // w21
  UnityEngine_Object_o *collider; // x20
  UnityEngine_BoxCollider_o *v14; // x20
  float v15; // s8
  UnityEngine_BoxCollider_o *v16; // x20
  __int64 v17; // x0
  UnityEngine_Vector3_o v18; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v19; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_42EBA41 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)method, v2, v3);
    byte_42EBA41 = 1;
  }
  SetGameOptionComponent__CreateContentsArrayIfNotYet(this, method);
  contentsArray = this->fields.contentsArray;
  if ( !contentsArray )
    goto LABEL_20;
  max_length = contentsArray->max_length;
  v9 = 160.0;
  if ( max_length >= 1 )
  {
    v10 = 0;
    while ( 1 )
    {
      if ( v10 >= max_length )
      {
        v17 = sub_B5D6C8(gameObject);
        sub_B5D668(v17, 0LL);
      }
      v11 = contentsArray->m_Items[v10];
      if ( !v11 )
        break;
      v12 = ((__int64 (__fastcall *)(GameOptionContentBase_o *, void *))v11->klass->vtable._6_IsAvailable.method)(
              v11,
              v11->klass[1]._1.image);
      GameOptionContentBase__Show(v11, v12 & 1, 0LL);
      if ( (v12 & 1) != 0 )
      {
        ((void (__fastcall *)(GameOptionContentBase_o *, Il2CppMethodPointer))v11->klass->vtable._4_Init.method)(
          v11,
          v11->klass->vtable._5_Reflection.methodPtr);
        GameOptionContentBase__SetPosY(v11, v9, 0LL);
        v9 = v9 - (float)SLODWORD(v11[1].klass);
      }
      max_length = contentsArray->max_length;
      if ( (int)++v10 >= max_length )
        goto LABEL_11;
    }
LABEL_20:
    sub_B5D69C(gameObject, v6);
  }
LABEL_11:
  collider = (UnityEngine_Object_o *)this->fields.collider;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(collider, 0LL, 0LL);
  if ( ((unsigned __int8)gameObject & 1) != 0 )
  {
    v14 = this->fields.collider;
    if ( !v14 )
      goto LABEL_20;
    v15 = 160.0 - v9;
    LODWORD(v18.fields.x) = (unsigned int)UnityEngine_BoxCollider__get_size(this->fields.collider, 0LL);
    v18.fields.z = 0.0;
    v18.fields.y = v15;
    UnityEngine_BoxCollider__set_size(v14, v18, 0LL);
    v16 = this->fields.collider;
    if ( !v16 )
      goto LABEL_20;
    LODWORD(v19.fields.x) = (unsigned int)UnityEngine_BoxCollider__get_center(this->fields.collider, 0LL);
    v19.fields.y = (float)(v15 * -0.5) + 160.0;
    v19.fields.z = 0.0;
    UnityEngine_BoxCollider__set_center(v16, v19, 0LL);
  }
  this->fields._optionSceneType_k__BackingField = 0;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_20;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
}


void __fastcall SetGameOptionComponent__SetMaskEnabled(
        SetGameOptionComponent_o *this,
        bool isEnabled,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *optionMask; // x0

  optionMask = this->fields.optionMask;
  if ( !optionMask )
    sub_B5D69C(0LL, isEnabled);
  UnityEngine_GameObject__SetActive(optionMask, isEnabled, 0LL);
}


int32_t __fastcall SetGameOptionComponent__get_optionSceneType(
        SetGameOptionComponent_o *this,
        const MethodInfo *method)
{
  return this->fields._optionSceneType_k__BackingField;
}


void __fastcall SetGameOptionComponent__hideGameOption(SetGameOptionComponent_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  UnityEngine_GameObject_o *hidePos; // x0
  UnityEngine_GameObject_o *optionObj; // x20
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_42EBA42 & 1) == 0 )
  {
    sub_B5D5C4(&AtlasManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42EBA42 = 1;
  }
  hidePos = this->fields.hidePos;
  if ( !hidePos
    || (optionObj = this->fields.optionObj,
        (hidePos = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(hidePos, 0LL)) == 0LL)
    || (localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)hidePos, 0LL),
        GameObjectExtensions__SetLocalPosition(optionObj, localPosition, 0LL),
        (hidePos = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL)) == 0LL)
    || (UnityEngine_GameObject__SetActive(hidePos, 0, 0LL),
        (hidePos = (UnityEngine_GameObject_o *)this->fields.optionScroll) == 0LL) )
  {
    sub_B5D69C(hidePos, method);
  }
  ((void (__fastcall *)(UnityEngine_GameObject_o *, _QWORD, void *, float, float))hidePos->klass[1]._1.parent)(
    hidePos,
    0LL,
    hidePos->klass[1]._1.generic_class,
    0.0,
    0.0);
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__ReleaseMyRoomAtlas(0LL);
}


void __fastcall SetGameOptionComponent__reflectionGameOption(
        SetGameOptionComponent_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  int v27; // w1
  int v28; // w2
  __int64 v29; // x3
  int v30; // w1
  int v31; // w2
  __int64 v32; // x3
  int v33; // w1
  int v34; // w2
  __int64 v35; // x3
  System_Collections_Generic_IEnumerable_TSource__o *contentsArray; // x20
  SetGameOptionComponent___c_c *v37; // x0
  struct SetGameOptionComponent___c_StaticFields *static_fields; // x8
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *_9__39_0; // x21
  Il2CppObject *v40; // x22
  struct SetGameOptionComponent___c_StaticFields *v41; // x0
  System_String_array **v42; // x2
  System_String_array **v43; // x3
  System_Boolean_array **v44; // x4
  System_Int32_array **v45; // x5
  System_Int32_array *v46; // x6
  System_Int32_array *v47; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v48; // x0
  SetGameOptionComponent___c_c *v49; // x8
  System_Collections_Generic_IEnumerable_T__o *v50; // x20
  struct SetGameOptionComponent___c_StaticFields *v51; // x9
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *_9__39_1; // x21
  Il2CppObject *v53; // x22
  struct SetGameOptionComponent___c_StaticFields *v54; // x0
  System_String_array **v55; // x2
  System_String_array **v56; // x3
  System_Boolean_array **v57; // x4
  System_Int32_array **v58; // x5
  System_Int32_array *v59; // x6
  System_Int32_array *v60; // x7

  if ( (byte_42EBA43 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Action_GameOptionContentBase___ctor__, (_DWORD)callback, (_DWORD)method, v3);
    sub_B5D5C4(&System_Action_GameOptionContentBase__TypeInfo, v6, v7, v8);
    sub_B5D5C4(&Method_BasicHelper_ForEach_GameOptionContentBase___, v9, v10, v11);
    sub_B5D5C4(&Method_System_Linq_Enumerable_Where_GameOptionContentBase___, v12, v13, v14);
    sub_B5D5C4(&Method_System_Func_GameOptionContentBase__bool___ctor__, v15, v16, v17);
    sub_B5D5C4(&System_Func_GameOptionContentBase__bool__TypeInfo, v18, v19, v20);
    sub_B5D5C4(&OptionManager_TypeInfo, v21, v22, v23);
    sub_B5D5C4(&SoundManager_TypeInfo, v24, v25, v26);
    sub_B5D5C4(&Method_SetGameOptionComponent___c__reflectionGameOption_b__39_0__, v27, v28, v29);
    sub_B5D5C4(&Method_SetGameOptionComponent___c__reflectionGameOption_b__39_1__, v30, v31, v32);
    sub_B5D5C4(&SetGameOptionComponent___c_TypeInfo, v33, v34, v35);
    byte_42EBA43 = 1;
  }
  contentsArray = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.contentsArray;
  v37 = SetGameOptionComponent___c_TypeInfo;
  if ( (BYTE3(SetGameOptionComponent___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SetGameOptionComponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SetGameOptionComponent___c_TypeInfo);
    v37 = SetGameOptionComponent___c_TypeInfo;
  }
  static_fields = v37->static_fields;
  _9__39_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)static_fields->__9__39_0;
  if ( !_9__39_0 )
  {
    if ( (BYTE3(v37->vtable._0_Equals.methodPtr) & 4) != 0 && !v37->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v37);
      static_fields = SetGameOptionComponent___c_TypeInfo->static_fields;
    }
    v40 = (Il2CppObject *)static_fields->__9;
    _9__39_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B5D694(System_Func_GameOptionContentBase__bool__TypeInfo);
    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
      _9__39_0,
      v40,
      Method_SetGameOptionComponent___c__reflectionGameOption_b__39_0__,
      (const MethodInfo_2C2ECD0 *)Method_System_Func_GameOptionContentBase__bool___ctor__);
    v41 = SetGameOptionComponent___c_TypeInfo->static_fields;
    v41->__9__39_0 = (struct System_Func_GameOptionContentBase__bool__o *)_9__39_0;
    sub_B5D560(
      (BattleServantConfConponent_o *)&v41->__9__39_0,
      (System_Int32_array **)_9__39_0,
      v42,
      v43,
      v44,
      v45,
      v46,
      v47);
  }
  v48 = System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
          contentsArray,
          (System_Func_TSource__bool__o *)_9__39_0,
          (const MethodInfo_1CBBF10 *)Method_System_Linq_Enumerable_Where_GameOptionContentBase___);
  v49 = SetGameOptionComponent___c_TypeInfo;
  v50 = (System_Collections_Generic_IEnumerable_T__o *)v48;
  if ( (BYTE3(SetGameOptionComponent___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SetGameOptionComponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SetGameOptionComponent___c_TypeInfo);
    v49 = SetGameOptionComponent___c_TypeInfo;
  }
  v51 = v49->static_fields;
  _9__39_1 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)v51->__9__39_1;
  if ( !_9__39_1 )
  {
    if ( (BYTE3(v49->vtable._0_Equals.methodPtr) & 4) != 0 && !v49->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v49);
      v51 = SetGameOptionComponent___c_TypeInfo->static_fields;
    }
    v53 = (Il2CppObject *)v51->__9;
    _9__39_1 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B5D694(System_Action_GameOptionContentBase__TypeInfo);
    System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
      _9__39_1,
      v53,
      Method_SetGameOptionComponent___c__reflectionGameOption_b__39_1__,
      (const MethodInfo_258B320 *)Method_System_Action_GameOptionContentBase___ctor__);
    v54 = SetGameOptionComponent___c_TypeInfo->static_fields;
    v54->__9__39_1 = (struct System_Action_GameOptionContentBase__o *)_9__39_1;
    sub_B5D560(
      (BattleServantConfConponent_o *)&v54->__9__39_1,
      (System_Int32_array **)_9__39_1,
      v55,
      v56,
      v57,
      v58,
      v59,
      v60);
  }
  BasicHelper__ForEach_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
    v50,
    (System_Action_T__o *)_9__39_1,
    (const MethodInfo_1AD82D8 *)Method_BasicHelper_ForEach_GameOptionContentBase___);
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__stopSe(0.0, 0LL);
  if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !OptionManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
  }
  OptionManager__SaveData(callback, 0LL);
}


void __fastcall SetGameOptionComponent__set_optionSceneType(
        SetGameOptionComponent_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields._optionSceneType_k__BackingField = value;
}


void __fastcall SetGameOptionComponent__showGameOption(SetGameOptionComponent_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  struct UISprite_o *bgTxtSprite; // x0
  UnityEngine_GameObject_o *gameObject; // x20
  System_Action_o *v13; // x20

  if ( (byte_42EBA3F & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&AtlasManager_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&Method_SetGameOptionComponent__showGameOption_b__35_0__, v8, v9, v10);
    byte_42EBA3F = 1;
  }
  bgTxtSprite = this->fields.bgTxtSprite;
  if ( !bgTxtSprite
    || (gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)bgTxtSprite, 0LL),
        bgTxtSprite = (struct UISprite_o *)BgTxtManager__IsActiveBgTxt(0LL),
        !gameObject) )
  {
    sub_B5D69C(bgTxtSprite, method);
  }
  UnityEngine_GameObject__SetActive(gameObject, (unsigned __int8)bgTxtSprite & 1, 0LL);
  v13 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(v13, (Il2CppObject *)this, Method_SetGameOptionComponent__showGameOption_b__35_0__, 0LL);
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__LoadMyRoomAtlas(v13, 1, 0LL);
}


void __fastcall SetGameOptionComponent___c___cctor(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  struct SetGameOptionComponent___c_StaticFields *static_fields; // x0

  if ( (byte_42E5DB6 & 1) == 0 )
  {
    sub_B5D5C4(&SetGameOptionComponent___c_TypeInfo, v1, v2, v3);
    byte_42E5DB6 = 1;
  }
  v4 = (Il2CppObject *)sub_B5D694(SetGameOptionComponent___c_TypeInfo);
  System_Object___ctor(v4, 0LL);
  static_fields = SetGameOptionComponent___c_TypeInfo->static_fields;
  static_fields->__9 = (struct SetGameOptionComponent___c_o *)v4;
  sub_B5D560(static_fields);
}


void __fastcall SetGameOptionComponent___c___ctor(SetGameOptionComponent___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall SetGameOptionComponent___c___reflectionGameOption_b__39_0(
        SetGameOptionComponent___c_o *this,
        GameOptionContentBase_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B5D69C(this, 0LL);
  return ((__int64 (__fastcall *)(GameOptionContentBase_o *, void *))x->klass->vtable._6_IsAvailable.method)(
           x,
           x->klass[1]._1.image);
}


void __fastcall SetGameOptionComponent___c___reflectionGameOption_b__39_1(
        SetGameOptionComponent___c_o *this,
        GameOptionContentBase_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B5D69C(this, 0LL);
  ((void (__fastcall *)(GameOptionContentBase_o *, Il2CppMethodPointer))x->klass->vtable._5_Reflection.method)(
    x,
    x->klass->vtable._6_IsAvailable.methodPtr);
}