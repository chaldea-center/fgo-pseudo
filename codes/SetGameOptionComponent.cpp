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
  BattleServantConfConponent_o *p_contentsArray; // x19
  __int64 v4; // x0
  __int64 v5; // x1
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7
  System_Int32_array **setResolutionOptionCtr; // x22
  __int64 v13; // x20
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  System_Int32_array **setSmoothnessCtr; // x22
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  System_Int32_array **setVolCtr; // x22
  System_String_array **v28; // x2
  System_String_array **v29; // x3
  System_Boolean_array **v30; // x4
  System_Int32_array **v31; // x5
  System_Int32_array *v32; // x6
  System_Int32_array *v33; // x7
  System_Int32_array **setScenarioTextSpeedCtr; // x22
  System_String_array **v35; // x2
  System_String_array **v36; // x3
  System_Boolean_array **v37; // x4
  System_Int32_array **v38; // x5
  System_Int32_array *v39; // x6
  System_Int32_array *v40; // x7
  System_Int32_array **setScenarioCtr; // x22
  System_String_array **v42; // x2
  System_String_array **v43; // x3
  System_Boolean_array **v44; // x4
  System_Int32_array **v45; // x5
  System_Int32_array *v46; // x6
  System_Int32_array *v47; // x7
  System_Int32_array **setSpoilerProtectionCtr; // x22
  System_String_array **v49; // x2
  System_String_array **v50; // x3
  System_Boolean_array **v51; // x4
  System_Int32_array **v52; // x5
  System_Int32_array *v53; // x6
  System_Int32_array *v54; // x7
  System_Int32_array **setSwitchCtr; // x22
  System_String_array **v56; // x2
  System_String_array **v57; // x3
  System_Boolean_array **v58; // x4
  System_Int32_array **v59; // x5
  System_Int32_array *v60; // x6
  System_Int32_array *v61; // x7
  System_Int32_array **setSwitch2Ctr; // x22
  System_String_array **v63; // x2
  System_String_array **v64; // x3
  System_Boolean_array **v65; // x4
  System_Int32_array **v66; // x5
  System_Int32_array *v67; // x6
  System_Int32_array *v68; // x7
  System_Int32_array **setPreBattleFormationCtr; // x22
  System_String_array **v70; // x2
  System_String_array **v71; // x3
  System_Boolean_array **v72; // x4
  System_Int32_array **v73; // x5
  System_Int32_array *v74; // x6
  System_Int32_array *v75; // x7
  System_Int32_array **setAdvantageClassAutoCtr; // x22
  System_String_array **v77; // x2
  System_String_array **v78; // x3
  System_Boolean_array **v79; // x4
  System_Int32_array **v80; // x5
  System_Int32_array *v81; // x6
  System_Int32_array *v82; // x7
  System_Int32_array **setAutoSelectPartyCtr; // x22
  System_String_array **v84; // x2
  System_String_array **v85; // x3
  System_Boolean_array **v86; // x4
  System_Int32_array **v87; // x5
  System_Int32_array *v88; // x6
  System_Int32_array *v89; // x7
  System_Int32_array **setTDPlaySpeedCtr; // x22
  System_String_array **v91; // x2
  System_String_array **v92; // x3
  System_Boolean_array **v93; // x4
  System_Int32_array **v94; // x5
  System_Int32_array *v95; // x6
  System_Int32_array *v96; // x7
  System_Int32_array **setRandomLimitCountCtr; // x22
  System_String_array **v98; // x2
  System_String_array **v99; // x3
  System_Boolean_array **v100; // x4
  System_Int32_array **v101; // x5
  System_Int32_array *v102; // x6
  System_Int32_array *v103; // x7
  System_Int32_array **setSvtRandCtr; // x22
  System_String_array **v105; // x2
  System_String_array **v106; // x3
  System_Boolean_array **v107; // x4
  System_Int32_array **v108; // x5
  System_Int32_array *v109; // x6
  System_Int32_array *v110; // x7
  System_Int32_array **setMessageDispCtr; // x22
  System_String_array **v112; // x2
  System_String_array **v113; // x3
  System_Boolean_array **v114; // x4
  System_Int32_array **v115; // x5
  System_Int32_array *v116; // x6
  System_Int32_array *v117; // x7
  System_Int32_array **setNoticeCtr; // x22
  System_String_array **v119; // x2
  System_String_array **v120; // x3
  System_Boolean_array **v121; // x4
  System_Int32_array **v122; // x5
  System_Int32_array *v123; // x6
  System_Int32_array *v124; // x7
  System_Int32_array **setPlayOpeningMovieCtr; // x22
  System_String_array **v126; // x2
  System_String_array **v127; // x3
  System_Boolean_array **v128; // x4
  System_Int32_array **v129; // x5
  System_Int32_array *v130; // x6
  System_Int32_array *v131; // x7
  System_Int32_array **fullDlCtr; // x22
  System_String_array **v133; // x2
  System_String_array **v134; // x3
  System_Boolean_array **v135; // x4
  System_Int32_array **v136; // x5
  System_Int32_array *v137; // x6
  System_Int32_array *v138; // x7
  System_Int32_array **setBlackListCtr; // x21
  System_String_array **v140; // x2
  System_String_array **v141; // x3
  System_Boolean_array **v142; // x4
  System_Int32_array **v143; // x5
  System_Int32_array *v144; // x6
  System_Int32_array *v145; // x7
  __int64 v146; // x0
  __int64 v147; // x0

  if ( (byte_418B933 & 1) == 0 )
  {
    sub_B2C35C(&GameOptionContentBase___TypeInfo, method);
    byte_418B933 = 1;
  }
  p_contentsArray = (BattleServantConfConponent_o *)&this->fields.contentsArray;
  if ( !this->fields.contentsArray )
  {
    v4 = sub_B2C374(GameOptionContentBase___TypeInfo, 19LL);
    if ( !v4 )
      sub_B2C434(0LL, v5);
    setResolutionOptionCtr = (System_Int32_array **)this->fields.setResolutionOptionCtr;
    v13 = v4;
    if ( !setResolutionOptionCtr
      || (v4 = sub_B2C41C(this->fields.setResolutionOptionCtr, *(_QWORD *)(*(_QWORD *)v4 + 64LL))) != 0 )
    {
      if ( !*(_DWORD *)(v13 + 24) )
        goto LABEL_63;
      *(_QWORD *)(v13 + 32) = setResolutionOptionCtr;
      sub_B2C2F8((BattleServantConfConponent_o *)(v13 + 32), setResolutionOptionCtr, v6, v7, v8, v9, v10, v11);
      setSmoothnessCtr = (System_Int32_array **)this->fields.setSmoothnessCtr;
      if ( !setSmoothnessCtr
        || (v4 = sub_B2C41C(this->fields.setSmoothnessCtr, *(_QWORD *)(*(_QWORD *)v13 + 64LL))) != 0 )
      {
        if ( *(_DWORD *)(v13 + 24) <= 1u )
          goto LABEL_63;
        *(_QWORD *)(v13 + 40) = setSmoothnessCtr;
        sub_B2C2F8((BattleServantConfConponent_o *)(v13 + 40), setSmoothnessCtr, v14, v15, v16, v17, v18, v19);
        setVolCtr = (System_Int32_array **)this->fields.setVolCtr;
        if ( !setVolCtr || (v4 = sub_B2C41C(this->fields.setVolCtr, *(_QWORD *)(*(_QWORD *)v13 + 64LL))) != 0 )
        {
          if ( *(_DWORD *)(v13 + 24) <= 2u )
            goto LABEL_63;
          *(_QWORD *)(v13 + 48) = setVolCtr;
          sub_B2C2F8((BattleServantConfConponent_o *)(v13 + 48), setVolCtr, v21, v22, v23, v24, v25, v26);
          setScenarioTextSpeedCtr = (System_Int32_array **)this->fields.setScenarioTextSpeedCtr;
          if ( !setScenarioTextSpeedCtr
            || (v4 = sub_B2C41C(this->fields.setScenarioTextSpeedCtr, *(_QWORD *)(*(_QWORD *)v13 + 64LL))) != 0 )
          {
            if ( *(_DWORD *)(v13 + 24) <= 3u )
              goto LABEL_63;
            *(_QWORD *)(v13 + 56) = setScenarioTextSpeedCtr;
            sub_B2C2F8(
              (BattleServantConfConponent_o *)(v13 + 56),
              setScenarioTextSpeedCtr,
              v28,
              v29,
              v30,
              v31,
              v32,
              v33);
            setScenarioCtr = (System_Int32_array **)this->fields.setScenarioCtr;
            if ( !setScenarioCtr
              || (v4 = sub_B2C41C(this->fields.setScenarioCtr, *(_QWORD *)(*(_QWORD *)v13 + 64LL))) != 0 )
            {
              if ( *(_DWORD *)(v13 + 24) <= 4u )
                goto LABEL_63;
              *(_QWORD *)(v13 + 64) = setScenarioCtr;
              sub_B2C2F8((BattleServantConfConponent_o *)(v13 + 64), setScenarioCtr, v35, v36, v37, v38, v39, v40);
              setSpoilerProtectionCtr = (System_Int32_array **)this->fields.setSpoilerProtectionCtr;
              if ( !setSpoilerProtectionCtr
                || (v4 = sub_B2C41C(this->fields.setSpoilerProtectionCtr, *(_QWORD *)(*(_QWORD *)v13 + 64LL))) != 0 )
              {
                if ( *(_DWORD *)(v13 + 24) <= 5u )
                  goto LABEL_63;
                *(_QWORD *)(v13 + 72) = setSpoilerProtectionCtr;
                sub_B2C2F8(
                  (BattleServantConfConponent_o *)(v13 + 72),
                  setSpoilerProtectionCtr,
                  v42,
                  v43,
                  v44,
                  v45,
                  v46,
                  v47);
                setSwitchCtr = (System_Int32_array **)this->fields.setSwitchCtr;
                if ( !setSwitchCtr
                  || (v4 = sub_B2C41C(this->fields.setSwitchCtr, *(_QWORD *)(*(_QWORD *)v13 + 64LL))) != 0 )
                {
                  if ( *(_DWORD *)(v13 + 24) <= 6u )
                    goto LABEL_63;
                  *(_QWORD *)(v13 + 80) = setSwitchCtr;
                  sub_B2C2F8((BattleServantConfConponent_o *)(v13 + 80), setSwitchCtr, v49, v50, v51, v52, v53, v54);
                  setSwitch2Ctr = (System_Int32_array **)this->fields.setSwitch2Ctr;
                  if ( !setSwitch2Ctr
                    || (v4 = sub_B2C41C(this->fields.setSwitch2Ctr, *(_QWORD *)(*(_QWORD *)v13 + 64LL))) != 0 )
                  {
                    if ( *(_DWORD *)(v13 + 24) <= 7u )
                      goto LABEL_63;
                    *(_QWORD *)(v13 + 88) = setSwitch2Ctr;
                    sub_B2C2F8((BattleServantConfConponent_o *)(v13 + 88), setSwitch2Ctr, v56, v57, v58, v59, v60, v61);
                    setPreBattleFormationCtr = (System_Int32_array **)this->fields.setPreBattleFormationCtr;
                    if ( !setPreBattleFormationCtr
                      || (v4 = sub_B2C41C(this->fields.setPreBattleFormationCtr, *(_QWORD *)(*(_QWORD *)v13 + 64LL))) != 0 )
                    {
                      if ( *(_DWORD *)(v13 + 24) <= 8u )
                        goto LABEL_63;
                      *(_QWORD *)(v13 + 96) = setPreBattleFormationCtr;
                      sub_B2C2F8(
                        (BattleServantConfConponent_o *)(v13 + 96),
                        setPreBattleFormationCtr,
                        v63,
                        v64,
                        v65,
                        v66,
                        v67,
                        v68);
                      setAdvantageClassAutoCtr = (System_Int32_array **)this->fields.setAdvantageClassAutoCtr;
                      if ( !setAdvantageClassAutoCtr
                        || (v4 = sub_B2C41C(this->fields.setAdvantageClassAutoCtr, *(_QWORD *)(*(_QWORD *)v13 + 64LL))) != 0 )
                      {
                        if ( *(_DWORD *)(v13 + 24) <= 9u )
                          goto LABEL_63;
                        *(_QWORD *)(v13 + 104) = setAdvantageClassAutoCtr;
                        sub_B2C2F8(
                          (BattleServantConfConponent_o *)(v13 + 104),
                          setAdvantageClassAutoCtr,
                          v70,
                          v71,
                          v72,
                          v73,
                          v74,
                          v75);
                        setAutoSelectPartyCtr = (System_Int32_array **)this->fields.setAutoSelectPartyCtr;
                        if ( !setAutoSelectPartyCtr
                          || (v4 = sub_B2C41C(this->fields.setAutoSelectPartyCtr, *(_QWORD *)(*(_QWORD *)v13 + 64LL))) != 0 )
                        {
                          if ( *(_DWORD *)(v13 + 24) <= 0xAu )
                            goto LABEL_63;
                          *(_QWORD *)(v13 + 112) = setAutoSelectPartyCtr;
                          sub_B2C2F8(
                            (BattleServantConfConponent_o *)(v13 + 112),
                            setAutoSelectPartyCtr,
                            v77,
                            v78,
                            v79,
                            v80,
                            v81,
                            v82);
                          setTDPlaySpeedCtr = (System_Int32_array **)this->fields.setTDPlaySpeedCtr;
                          if ( !setTDPlaySpeedCtr
                            || (v4 = sub_B2C41C(this->fields.setTDPlaySpeedCtr, *(_QWORD *)(*(_QWORD *)v13 + 64LL))) != 0 )
                          {
                            if ( *(_DWORD *)(v13 + 24) <= 0xBu )
                              goto LABEL_63;
                            *(_QWORD *)(v13 + 120) = setTDPlaySpeedCtr;
                            sub_B2C2F8(
                              (BattleServantConfConponent_o *)(v13 + 120),
                              setTDPlaySpeedCtr,
                              v84,
                              v85,
                              v86,
                              v87,
                              v88,
                              v89);
                            setRandomLimitCountCtr = (System_Int32_array **)this->fields.setRandomLimitCountCtr;
                            if ( !setRandomLimitCountCtr
                              || (v4 = sub_B2C41C(
                                         this->fields.setRandomLimitCountCtr,
                                         *(_QWORD *)(*(_QWORD *)v13 + 64LL))) != 0 )
                            {
                              if ( *(_DWORD *)(v13 + 24) <= 0xCu )
                                goto LABEL_63;
                              *(_QWORD *)(v13 + 128) = setRandomLimitCountCtr;
                              sub_B2C2F8(
                                (BattleServantConfConponent_o *)(v13 + 128),
                                setRandomLimitCountCtr,
                                v91,
                                v92,
                                v93,
                                v94,
                                v95,
                                v96);
                              setSvtRandCtr = (System_Int32_array **)this->fields.setSvtRandCtr;
                              if ( !setSvtRandCtr
                                || (v4 = sub_B2C41C(this->fields.setSvtRandCtr, *(_QWORD *)(*(_QWORD *)v13 + 64LL))) != 0 )
                              {
                                if ( *(_DWORD *)(v13 + 24) <= 0xDu )
                                  goto LABEL_63;
                                *(_QWORD *)(v13 + 136) = setSvtRandCtr;
                                sub_B2C2F8(
                                  (BattleServantConfConponent_o *)(v13 + 136),
                                  setSvtRandCtr,
                                  v98,
                                  v99,
                                  v100,
                                  v101,
                                  v102,
                                  v103);
                                setMessageDispCtr = (System_Int32_array **)this->fields.setMessageDispCtr;
                                if ( !setMessageDispCtr
                                  || (v4 = sub_B2C41C(
                                             this->fields.setMessageDispCtr,
                                             *(_QWORD *)(*(_QWORD *)v13 + 64LL))) != 0 )
                                {
                                  if ( *(_DWORD *)(v13 + 24) <= 0xEu )
                                    goto LABEL_63;
                                  *(_QWORD *)(v13 + 144) = setMessageDispCtr;
                                  sub_B2C2F8(
                                    (BattleServantConfConponent_o *)(v13 + 144),
                                    setMessageDispCtr,
                                    v105,
                                    v106,
                                    v107,
                                    v108,
                                    v109,
                                    v110);
                                  setNoticeCtr = (System_Int32_array **)this->fields.setNoticeCtr;
                                  if ( !setNoticeCtr
                                    || (v4 = sub_B2C41C(this->fields.setNoticeCtr, *(_QWORD *)(*(_QWORD *)v13 + 64LL))) != 0 )
                                  {
                                    if ( *(_DWORD *)(v13 + 24) <= 0xFu )
                                      goto LABEL_63;
                                    *(_QWORD *)(v13 + 152) = setNoticeCtr;
                                    sub_B2C2F8(
                                      (BattleServantConfConponent_o *)(v13 + 152),
                                      setNoticeCtr,
                                      v112,
                                      v113,
                                      v114,
                                      v115,
                                      v116,
                                      v117);
                                    setPlayOpeningMovieCtr = (System_Int32_array **)this->fields.setPlayOpeningMovieCtr;
                                    if ( !setPlayOpeningMovieCtr
                                      || (v4 = sub_B2C41C(
                                                 this->fields.setPlayOpeningMovieCtr,
                                                 *(_QWORD *)(*(_QWORD *)v13 + 64LL))) != 0 )
                                    {
                                      if ( *(_DWORD *)(v13 + 24) <= 0x10u )
                                        goto LABEL_63;
                                      *(_QWORD *)(v13 + 160) = setPlayOpeningMovieCtr;
                                      sub_B2C2F8(
                                        (BattleServantConfConponent_o *)(v13 + 160),
                                        setPlayOpeningMovieCtr,
                                        v119,
                                        v120,
                                        v121,
                                        v122,
                                        v123,
                                        v124);
                                      fullDlCtr = (System_Int32_array **)this->fields.fullDlCtr;
                                      if ( !fullDlCtr
                                        || (v4 = sub_B2C41C(this->fields.fullDlCtr, *(_QWORD *)(*(_QWORD *)v13 + 64LL))) != 0 )
                                      {
                                        if ( *(_DWORD *)(v13 + 24) <= 0x11u )
                                          goto LABEL_63;
                                        *(_QWORD *)(v13 + 168) = fullDlCtr;
                                        sub_B2C2F8(
                                          (BattleServantConfConponent_o *)(v13 + 168),
                                          fullDlCtr,
                                          v126,
                                          v127,
                                          v128,
                                          v129,
                                          v130,
                                          v131);
                                        setBlackListCtr = (System_Int32_array **)this->fields.setBlackListCtr;
                                        if ( !setBlackListCtr
                                          || (v4 = sub_B2C41C(setBlackListCtr, *(_QWORD *)(*(_QWORD *)v13 + 64LL))) != 0 )
                                        {
                                          if ( *(_DWORD *)(v13 + 24) > 0x12u )
                                          {
                                            *(_QWORD *)(v13 + 176) = setBlackListCtr;
                                            sub_B2C2F8(
                                              (BattleServantConfConponent_o *)(v13 + 176),
                                              setBlackListCtr,
                                              v133,
                                              v134,
                                              v135,
                                              v136,
                                              v137,
                                              v138);
                                            p_contentsArray->klass = (BattleServantConfConponent_c *)v13;
                                            sub_B2C2F8(
                                              p_contentsArray,
                                              (System_Int32_array **)v13,
                                              v140,
                                              v141,
                                              v142,
                                              v143,
                                              v144,
                                              v145);
                                            return;
                                          }
LABEL_63:
                                          v146 = sub_B2C460(v4);
                                          sub_B2C400(v146, 0LL);
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
    v147 = sub_B2C454(v4);
    sub_B2C400(v147, 0LL);
  }
}


void __fastcall SetGameOptionComponent__InitGameOption(SetGameOptionComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1
  struct GameOptionContentBase_array *contentsArray; // x23
  int max_length; // w8
  float v7; // s8
  unsigned int v8; // w24
  GameOptionContentBase_o *v9; // x20
  char v10; // w21
  UnityEngine_Object_o *collider; // x20
  UnityEngine_BoxCollider_o *v12; // x20
  float v13; // s8
  UnityEngine_BoxCollider_o *v14; // x20
  __int64 v15; // x0
  UnityEngine_Vector3_o v16; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v17; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_418B934 & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, method);
    byte_418B934 = 1;
  }
  SetGameOptionComponent__CreateContentsArrayIfNotYet(this, method);
  contentsArray = this->fields.contentsArray;
  if ( !contentsArray )
    goto LABEL_20;
  max_length = contentsArray->max_length;
  v7 = 160.0;
  if ( max_length >= 1 )
  {
    v8 = 0;
    while ( 1 )
    {
      if ( v8 >= max_length )
      {
        v15 = sub_B2C460(gameObject);
        sub_B2C400(v15, 0LL);
      }
      v9 = contentsArray->m_Items[v8];
      if ( !v9 )
        break;
      v10 = ((__int64 (__fastcall *)(GameOptionContentBase_o *, void *))v9->klass->vtable._6_IsAvailable.method)(
              v9,
              v9->klass[1]._1.image);
      GameOptionContentBase__Show(v9, v10 & 1, 0LL);
      if ( (v10 & 1) != 0 )
      {
        ((void (__fastcall *)(GameOptionContentBase_o *, Il2CppMethodPointer))v9->klass->vtable._4_Init.method)(
          v9,
          v9->klass->vtable._5_Reflection.methodPtr);
        GameOptionContentBase__SetPosY(v9, v7, 0LL);
        v7 = v7 - (float)SLODWORD(v9[1].klass);
      }
      max_length = contentsArray->max_length;
      if ( (int)++v8 >= max_length )
        goto LABEL_11;
    }
LABEL_20:
    sub_B2C434(gameObject, v4);
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
    v12 = this->fields.collider;
    if ( !v12 )
      goto LABEL_20;
    v13 = 160.0 - v7;
    LODWORD(v16.fields.x) = (unsigned int)UnityEngine_BoxCollider__get_size(this->fields.collider, 0LL);
    v16.fields.z = 0.0;
    v16.fields.y = v13;
    UnityEngine_BoxCollider__set_size(v12, v16, 0LL);
    v14 = this->fields.collider;
    if ( !v14 )
      goto LABEL_20;
    LODWORD(v17.fields.x) = (unsigned int)UnityEngine_BoxCollider__get_center(this->fields.collider, 0LL);
    v17.fields.y = (float)(v13 * -0.5) + 160.0;
    v17.fields.z = 0.0;
    UnityEngine_BoxCollider__set_center(v14, v17, 0LL);
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
    sub_B2C434(0LL, isEnabled);
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
  UnityEngine_GameObject_o *hidePos; // x0
  UnityEngine_GameObject_o *optionObj; // x20
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_418B935 & 1) == 0 )
  {
    sub_B2C35C(&AtlasManager_TypeInfo, method);
    byte_418B935 = 1;
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
    sub_B2C434(hidePos, method);
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
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  System_Collections_Generic_IEnumerable_TSource__o *contentsArray; // x20
  SetGameOptionComponent___c_c *v16; // x0
  struct SetGameOptionComponent___c_StaticFields *static_fields; // x8
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *_9__38_0; // x21
  Il2CppObject *v19; // x22
  struct SetGameOptionComponent___c_StaticFields *v20; // x0
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v27; // x0
  SetGameOptionComponent___c_c *v28; // x8
  System_Collections_Generic_IEnumerable_T__o *v29; // x20
  struct SetGameOptionComponent___c_StaticFields *v30; // x9
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *_9__38_1; // x21
  Il2CppObject *v32; // x22
  struct SetGameOptionComponent___c_StaticFields *v33; // x0
  System_String_array **v34; // x2
  System_String_array **v35; // x3
  System_Boolean_array **v36; // x4
  System_Int32_array **v37; // x5
  System_Int32_array *v38; // x6
  System_Int32_array *v39; // x7

  if ( (byte_418B936 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Action_GameOptionContentBase___ctor__, callback);
    sub_B2C35C(&System_Action_GameOptionContentBase__TypeInfo, v5);
    sub_B2C35C(&Method_BasicHelper_ForEach_GameOptionContentBase___, v6);
    sub_B2C35C(&Method_System_Linq_Enumerable_Where_GameOptionContentBase___, v7);
    sub_B2C35C(&Method_System_Func_GameOptionContentBase__bool___ctor__, v8);
    sub_B2C35C(&System_Func_GameOptionContentBase__bool__TypeInfo, v9);
    sub_B2C35C(&OptionManager_TypeInfo, v10);
    sub_B2C35C(&SoundManager_TypeInfo, v11);
    sub_B2C35C(&Method_SetGameOptionComponent___c__reflectionGameOption_b__38_0__, v12);
    sub_B2C35C(&Method_SetGameOptionComponent___c__reflectionGameOption_b__38_1__, v13);
    sub_B2C35C(&SetGameOptionComponent___c_TypeInfo, v14);
    byte_418B936 = 1;
  }
  contentsArray = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.contentsArray;
  v16 = SetGameOptionComponent___c_TypeInfo;
  if ( (BYTE3(SetGameOptionComponent___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SetGameOptionComponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SetGameOptionComponent___c_TypeInfo);
    v16 = SetGameOptionComponent___c_TypeInfo;
  }
  static_fields = v16->static_fields;
  _9__38_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)static_fields->__9__38_0;
  if ( !_9__38_0 )
  {
    if ( (BYTE3(v16->vtable._0_Equals.methodPtr) & 4) != 0 && !v16->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v16);
      static_fields = SetGameOptionComponent___c_TypeInfo->static_fields;
    }
    v19 = (Il2CppObject *)static_fields->__9;
    _9__38_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B2C42C(System_Func_GameOptionContentBase__bool__TypeInfo);
    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
      _9__38_0,
      v19,
      Method_SetGameOptionComponent___c__reflectionGameOption_b__38_0__,
      (const MethodInfo_2711C04 *)Method_System_Func_GameOptionContentBase__bool___ctor__);
    v20 = SetGameOptionComponent___c_TypeInfo->static_fields;
    v20->__9__38_0 = (struct System_Func_GameOptionContentBase__bool__o *)_9__38_0;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&v20->__9__38_0,
      (System_Int32_array **)_9__38_0,
      v21,
      v22,
      v23,
      v24,
      v25,
      v26);
  }
  v27 = System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
          contentsArray,
          (System_Func_TSource__bool__o *)_9__38_0,
          (const MethodInfo_1A9F3E4 *)Method_System_Linq_Enumerable_Where_GameOptionContentBase___);
  v28 = SetGameOptionComponent___c_TypeInfo;
  v29 = (System_Collections_Generic_IEnumerable_T__o *)v27;
  if ( (BYTE3(SetGameOptionComponent___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SetGameOptionComponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SetGameOptionComponent___c_TypeInfo);
    v28 = SetGameOptionComponent___c_TypeInfo;
  }
  v30 = v28->static_fields;
  _9__38_1 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)v30->__9__38_1;
  if ( !_9__38_1 )
  {
    if ( (BYTE3(v28->vtable._0_Equals.methodPtr) & 4) != 0 && !v28->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v28);
      v30 = SetGameOptionComponent___c_TypeInfo->static_fields;
    }
    v32 = (Il2CppObject *)v30->__9;
    _9__38_1 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B2C42C(System_Action_GameOptionContentBase__TypeInfo);
    System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
      _9__38_1,
      v32,
      Method_SetGameOptionComponent___c__reflectionGameOption_b__38_1__,
      (const MethodInfo_24BBAD8 *)Method_System_Action_GameOptionContentBase___ctor__);
    v33 = SetGameOptionComponent___c_TypeInfo->static_fields;
    v33->__9__38_1 = (struct System_Action_GameOptionContentBase__o *)_9__38_1;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&v33->__9__38_1,
      (System_Int32_array **)_9__38_1,
      v34,
      v35,
      v36,
      v37,
      v38,
      v39);
  }
  BasicHelper__ForEach_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
    v29,
    (System_Action_T__o *)_9__38_1,
    (const MethodInfo_1727C50 *)Method_BasicHelper_ForEach_GameOptionContentBase___);
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
  __int64 v3; // x1
  __int64 v4; // x1
  struct UISprite_o *bgTxtSprite; // x0
  UnityEngine_GameObject_o *gameObject; // x20
  System_Action_o *v7; // x20

  if ( (byte_418B932 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, method);
    sub_B2C35C(&AtlasManager_TypeInfo, v3);
    sub_B2C35C(&Method_SetGameOptionComponent__showGameOption_b__34_0__, v4);
    byte_418B932 = 1;
  }
  bgTxtSprite = this->fields.bgTxtSprite;
  if ( !bgTxtSprite
    || (gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)bgTxtSprite, 0LL),
        bgTxtSprite = (struct UISprite_o *)BgTxtManager__IsActiveBgTxt(0LL),
        !gameObject) )
  {
    sub_B2C434(bgTxtSprite, method);
  }
  UnityEngine_GameObject__SetActive(gameObject, (unsigned __int8)bgTxtSprite & 1, 0LL);
  v7 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
  System_Action___ctor(v7, (Il2CppObject *)this, Method_SetGameOptionComponent__showGameOption_b__34_0__, 0LL);
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__LoadMyRoomAtlas(v7, 1, 0LL);
}


void __fastcall SetGameOptionComponent___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  struct SetGameOptionComponent___c_StaticFields *static_fields; // x0

  if ( (byte_418543B & 1) == 0 )
  {
    sub_B2C35C(&SetGameOptionComponent___c_TypeInfo, v1);
    byte_418543B = 1;
  }
  v2 = (Il2CppObject *)sub_B2C42C(SetGameOptionComponent___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  static_fields = SetGameOptionComponent___c_TypeInfo->static_fields;
  static_fields->__9 = (struct SetGameOptionComponent___c_o *)v2;
  sub_B2C2F8(static_fields, v2);
}


void __fastcall SetGameOptionComponent___c___ctor(SetGameOptionComponent___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall SetGameOptionComponent___c___reflectionGameOption_b__38_0(
        SetGameOptionComponent___c_o *this,
        GameOptionContentBase_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B2C434(this, 0LL);
  return ((__int64 (__fastcall *)(GameOptionContentBase_o *, void *))x->klass->vtable._6_IsAvailable.method)(
           x,
           x->klass[1]._1.image);
}


void __fastcall SetGameOptionComponent___c___reflectionGameOption_b__38_1(
        SetGameOptionComponent___c_o *this,
        GameOptionContentBase_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B2C434(this, 0LL);
  ((void (__fastcall *)(GameOptionContentBase_o *, Il2CppMethodPointer))x->klass->vtable._5_Reflection.method)(
    x,
    x->klass->vtable._6_IsAvailable.methodPtr);
}