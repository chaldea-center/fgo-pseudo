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
  __int64 v2; // x2
  BattleServantConfConponent_o *p_contentsArray; // x19
  __int64 v5; // x0
  __int64 v6; // x1
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7
  System_Int32_array **setResolutionOptionCtr; // x22
  __int64 v14; // x20
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  System_Int32_array **setSmoothnessCtr; // x22
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7
  System_Int32_array **setVolCtr; // x22
  System_String_array **v27; // x3
  System_Boolean_array **v28; // x4
  System_Int32_array **v29; // x5
  System_Int32_array *v30; // x6
  System_Int32_array *v31; // x7
  System_Int32_array **setScenarioTextSpeedCtr; // x22
  System_String_array **v33; // x3
  System_Boolean_array **v34; // x4
  System_Int32_array **v35; // x5
  System_Int32_array *v36; // x6
  System_Int32_array *v37; // x7
  System_Int32_array **setScenarioCtr; // x22
  System_String_array **v39; // x3
  System_Boolean_array **v40; // x4
  System_Int32_array **v41; // x5
  System_Int32_array *v42; // x6
  System_Int32_array *v43; // x7
  System_Int32_array **setSpoilerProtectionCtr; // x22
  System_String_array **v45; // x3
  System_Boolean_array **v46; // x4
  System_Int32_array **v47; // x5
  System_Int32_array *v48; // x6
  System_Int32_array *v49; // x7
  System_Int32_array **setSwitchCtr; // x22
  System_String_array **v51; // x3
  System_Boolean_array **v52; // x4
  System_Int32_array **v53; // x5
  System_Int32_array *v54; // x6
  System_Int32_array *v55; // x7
  System_Int32_array **setSwitch2Ctr; // x22
  System_String_array **v57; // x3
  System_Boolean_array **v58; // x4
  System_Int32_array **v59; // x5
  System_Int32_array *v60; // x6
  System_Int32_array *v61; // x7
  System_Int32_array **setPreBattleFormationCtr; // x22
  System_String_array **v63; // x3
  System_Boolean_array **v64; // x4
  System_Int32_array **v65; // x5
  System_Int32_array *v66; // x6
  System_Int32_array *v67; // x7
  System_Int32_array **setAdvantageClassAutoCtr; // x22
  System_String_array **v69; // x3
  System_Boolean_array **v70; // x4
  System_Int32_array **v71; // x5
  System_Int32_array *v72; // x6
  System_Int32_array *v73; // x7
  System_Int32_array **setAutoSelectPartyCtr; // x22
  System_String_array **v75; // x3
  System_Boolean_array **v76; // x4
  System_Int32_array **v77; // x5
  System_Int32_array *v78; // x6
  System_Int32_array *v79; // x7
  System_Int32_array **setTDPlaySpeedCtr; // x22
  System_String_array **v81; // x3
  System_Boolean_array **v82; // x4
  System_Int32_array **v83; // x5
  System_Int32_array *v84; // x6
  System_Int32_array *v85; // x7
  System_Int32_array **setRandomLimitCountCtr; // x22
  System_String_array **v87; // x3
  System_Boolean_array **v88; // x4
  System_Int32_array **v89; // x5
  System_Int32_array *v90; // x6
  System_Int32_array *v91; // x7
  System_Int32_array **setSvtRandCtr; // x22
  System_String_array **v93; // x3
  System_Boolean_array **v94; // x4
  System_Int32_array **v95; // x5
  System_Int32_array *v96; // x6
  System_Int32_array *v97; // x7
  System_Int32_array **setMessageDispCtr; // x22
  System_String_array **v99; // x3
  System_Boolean_array **v100; // x4
  System_Int32_array **v101; // x5
  System_Int32_array *v102; // x6
  System_Int32_array *v103; // x7
  System_Int32_array **setNoticeCtr; // x22
  System_String_array **v105; // x3
  System_Boolean_array **v106; // x4
  System_Int32_array **v107; // x5
  System_Int32_array *v108; // x6
  System_Int32_array *v109; // x7
  System_Int32_array **setPlayOpeningMovieCtr; // x22
  System_String_array **v111; // x3
  System_Boolean_array **v112; // x4
  System_Int32_array **v113; // x5
  System_Int32_array *v114; // x6
  System_Int32_array *v115; // x7
  System_Int32_array **fullDlCtr; // x22
  System_String_array **v117; // x3
  System_Boolean_array **v118; // x4
  System_Int32_array **v119; // x5
  System_Int32_array *v120; // x6
  System_Int32_array *v121; // x7
  System_Int32_array **setBlackListCtr; // x21
  System_String_array **v123; // x2
  System_String_array **v124; // x3
  System_Boolean_array **v125; // x4
  System_Int32_array **v126; // x5
  System_Int32_array *v127; // x6
  System_Int32_array *v128; // x7

  if ( (byte_40FC390 & 1) == 0 )
  {
    sub_B16FFC(&GameOptionContentBase___TypeInfo, method);
    byte_40FC390 = 1;
  }
  p_contentsArray = (BattleServantConfConponent_o *)&this->fields.contentsArray;
  if ( !this->fields.contentsArray )
  {
    v5 = sub_B17014(GameOptionContentBase___TypeInfo, 19LL, v2);
    if ( !v5 )
      sub_B170D4();
    setResolutionOptionCtr = (System_Int32_array **)this->fields.setResolutionOptionCtr;
    v14 = v5;
    if ( !setResolutionOptionCtr
      || (v5 = sub_B170BC(this->fields.setResolutionOptionCtr, *(_QWORD *)(*(_QWORD *)v5 + 64LL))) != 0 )
    {
      if ( !*(_DWORD *)(v14 + 24) )
        goto LABEL_63;
      *(_QWORD *)(v14 + 32) = setResolutionOptionCtr;
      sub_B16F98((BattleServantConfConponent_o *)(v14 + 32), setResolutionOptionCtr, v7, v8, v9, v10, v11, v12);
      setSmoothnessCtr = (System_Int32_array **)this->fields.setSmoothnessCtr;
      if ( !setSmoothnessCtr
        || (v5 = sub_B170BC(this->fields.setSmoothnessCtr, *(_QWORD *)(*(_QWORD *)v14 + 64LL))) != 0 )
      {
        if ( *(_DWORD *)(v14 + 24) <= 1u )
          goto LABEL_63;
        *(_QWORD *)(v14 + 40) = setSmoothnessCtr;
        sub_B16F98((BattleServantConfConponent_o *)(v14 + 40), setSmoothnessCtr, v7, v15, v16, v17, v18, v19);
        setVolCtr = (System_Int32_array **)this->fields.setVolCtr;
        if ( !setVolCtr || (v5 = sub_B170BC(this->fields.setVolCtr, *(_QWORD *)(*(_QWORD *)v14 + 64LL))) != 0 )
        {
          if ( *(_DWORD *)(v14 + 24) <= 2u )
            goto LABEL_63;
          *(_QWORD *)(v14 + 48) = setVolCtr;
          sub_B16F98((BattleServantConfConponent_o *)(v14 + 48), setVolCtr, v7, v21, v22, v23, v24, v25);
          setScenarioTextSpeedCtr = (System_Int32_array **)this->fields.setScenarioTextSpeedCtr;
          if ( !setScenarioTextSpeedCtr
            || (v5 = sub_B170BC(this->fields.setScenarioTextSpeedCtr, *(_QWORD *)(*(_QWORD *)v14 + 64LL))) != 0 )
          {
            if ( *(_DWORD *)(v14 + 24) <= 3u )
              goto LABEL_63;
            *(_QWORD *)(v14 + 56) = setScenarioTextSpeedCtr;
            sub_B16F98((BattleServantConfConponent_o *)(v14 + 56), setScenarioTextSpeedCtr, v7, v27, v28, v29, v30, v31);
            setScenarioCtr = (System_Int32_array **)this->fields.setScenarioCtr;
            if ( !setScenarioCtr
              || (v5 = sub_B170BC(this->fields.setScenarioCtr, *(_QWORD *)(*(_QWORD *)v14 + 64LL))) != 0 )
            {
              if ( *(_DWORD *)(v14 + 24) <= 4u )
                goto LABEL_63;
              *(_QWORD *)(v14 + 64) = setScenarioCtr;
              sub_B16F98((BattleServantConfConponent_o *)(v14 + 64), setScenarioCtr, v7, v33, v34, v35, v36, v37);
              setSpoilerProtectionCtr = (System_Int32_array **)this->fields.setSpoilerProtectionCtr;
              if ( !setSpoilerProtectionCtr
                || (v5 = sub_B170BC(this->fields.setSpoilerProtectionCtr, *(_QWORD *)(*(_QWORD *)v14 + 64LL))) != 0 )
              {
                if ( *(_DWORD *)(v14 + 24) <= 5u )
                  goto LABEL_63;
                *(_QWORD *)(v14 + 72) = setSpoilerProtectionCtr;
                sub_B16F98(
                  (BattleServantConfConponent_o *)(v14 + 72),
                  setSpoilerProtectionCtr,
                  v7,
                  v39,
                  v40,
                  v41,
                  v42,
                  v43);
                setSwitchCtr = (System_Int32_array **)this->fields.setSwitchCtr;
                if ( !setSwitchCtr
                  || (v5 = sub_B170BC(this->fields.setSwitchCtr, *(_QWORD *)(*(_QWORD *)v14 + 64LL))) != 0 )
                {
                  if ( *(_DWORD *)(v14 + 24) <= 6u )
                    goto LABEL_63;
                  *(_QWORD *)(v14 + 80) = setSwitchCtr;
                  sub_B16F98((BattleServantConfConponent_o *)(v14 + 80), setSwitchCtr, v7, v45, v46, v47, v48, v49);
                  setSwitch2Ctr = (System_Int32_array **)this->fields.setSwitch2Ctr;
                  if ( !setSwitch2Ctr
                    || (v5 = sub_B170BC(this->fields.setSwitch2Ctr, *(_QWORD *)(*(_QWORD *)v14 + 64LL))) != 0 )
                  {
                    if ( *(_DWORD *)(v14 + 24) <= 7u )
                      goto LABEL_63;
                    *(_QWORD *)(v14 + 88) = setSwitch2Ctr;
                    sub_B16F98((BattleServantConfConponent_o *)(v14 + 88), setSwitch2Ctr, v7, v51, v52, v53, v54, v55);
                    setPreBattleFormationCtr = (System_Int32_array **)this->fields.setPreBattleFormationCtr;
                    if ( !setPreBattleFormationCtr
                      || (v5 = sub_B170BC(this->fields.setPreBattleFormationCtr, *(_QWORD *)(*(_QWORD *)v14 + 64LL))) != 0 )
                    {
                      if ( *(_DWORD *)(v14 + 24) <= 8u )
                        goto LABEL_63;
                      *(_QWORD *)(v14 + 96) = setPreBattleFormationCtr;
                      sub_B16F98(
                        (BattleServantConfConponent_o *)(v14 + 96),
                        setPreBattleFormationCtr,
                        v7,
                        v57,
                        v58,
                        v59,
                        v60,
                        v61);
                      setAdvantageClassAutoCtr = (System_Int32_array **)this->fields.setAdvantageClassAutoCtr;
                      if ( !setAdvantageClassAutoCtr
                        || (v5 = sub_B170BC(this->fields.setAdvantageClassAutoCtr, *(_QWORD *)(*(_QWORD *)v14 + 64LL))) != 0 )
                      {
                        if ( *(_DWORD *)(v14 + 24) <= 9u )
                          goto LABEL_63;
                        *(_QWORD *)(v14 + 104) = setAdvantageClassAutoCtr;
                        sub_B16F98(
                          (BattleServantConfConponent_o *)(v14 + 104),
                          setAdvantageClassAutoCtr,
                          v7,
                          v63,
                          v64,
                          v65,
                          v66,
                          v67);
                        setAutoSelectPartyCtr = (System_Int32_array **)this->fields.setAutoSelectPartyCtr;
                        if ( !setAutoSelectPartyCtr
                          || (v5 = sub_B170BC(this->fields.setAutoSelectPartyCtr, *(_QWORD *)(*(_QWORD *)v14 + 64LL))) != 0 )
                        {
                          if ( *(_DWORD *)(v14 + 24) <= 0xAu )
                            goto LABEL_63;
                          *(_QWORD *)(v14 + 112) = setAutoSelectPartyCtr;
                          sub_B16F98(
                            (BattleServantConfConponent_o *)(v14 + 112),
                            setAutoSelectPartyCtr,
                            v7,
                            v69,
                            v70,
                            v71,
                            v72,
                            v73);
                          setTDPlaySpeedCtr = (System_Int32_array **)this->fields.setTDPlaySpeedCtr;
                          if ( !setTDPlaySpeedCtr
                            || (v5 = sub_B170BC(this->fields.setTDPlaySpeedCtr, *(_QWORD *)(*(_QWORD *)v14 + 64LL))) != 0 )
                          {
                            if ( *(_DWORD *)(v14 + 24) <= 0xBu )
                              goto LABEL_63;
                            *(_QWORD *)(v14 + 120) = setTDPlaySpeedCtr;
                            sub_B16F98(
                              (BattleServantConfConponent_o *)(v14 + 120),
                              setTDPlaySpeedCtr,
                              v7,
                              v75,
                              v76,
                              v77,
                              v78,
                              v79);
                            setRandomLimitCountCtr = (System_Int32_array **)this->fields.setRandomLimitCountCtr;
                            if ( !setRandomLimitCountCtr
                              || (v5 = sub_B170BC(
                                         this->fields.setRandomLimitCountCtr,
                                         *(_QWORD *)(*(_QWORD *)v14 + 64LL))) != 0 )
                            {
                              if ( *(_DWORD *)(v14 + 24) <= 0xCu )
                                goto LABEL_63;
                              *(_QWORD *)(v14 + 128) = setRandomLimitCountCtr;
                              sub_B16F98(
                                (BattleServantConfConponent_o *)(v14 + 128),
                                setRandomLimitCountCtr,
                                v7,
                                v81,
                                v82,
                                v83,
                                v84,
                                v85);
                              setSvtRandCtr = (System_Int32_array **)this->fields.setSvtRandCtr;
                              if ( !setSvtRandCtr
                                || (v5 = sub_B170BC(this->fields.setSvtRandCtr, *(_QWORD *)(*(_QWORD *)v14 + 64LL))) != 0 )
                              {
                                if ( *(_DWORD *)(v14 + 24) <= 0xDu )
                                  goto LABEL_63;
                                *(_QWORD *)(v14 + 136) = setSvtRandCtr;
                                sub_B16F98(
                                  (BattleServantConfConponent_o *)(v14 + 136),
                                  setSvtRandCtr,
                                  v7,
                                  v87,
                                  v88,
                                  v89,
                                  v90,
                                  v91);
                                setMessageDispCtr = (System_Int32_array **)this->fields.setMessageDispCtr;
                                if ( !setMessageDispCtr
                                  || (v5 = sub_B170BC(
                                             this->fields.setMessageDispCtr,
                                             *(_QWORD *)(*(_QWORD *)v14 + 64LL))) != 0 )
                                {
                                  if ( *(_DWORD *)(v14 + 24) <= 0xEu )
                                    goto LABEL_63;
                                  *(_QWORD *)(v14 + 144) = setMessageDispCtr;
                                  sub_B16F98(
                                    (BattleServantConfConponent_o *)(v14 + 144),
                                    setMessageDispCtr,
                                    v7,
                                    v93,
                                    v94,
                                    v95,
                                    v96,
                                    v97);
                                  setNoticeCtr = (System_Int32_array **)this->fields.setNoticeCtr;
                                  if ( !setNoticeCtr
                                    || (v5 = sub_B170BC(this->fields.setNoticeCtr, *(_QWORD *)(*(_QWORD *)v14 + 64LL))) != 0 )
                                  {
                                    if ( *(_DWORD *)(v14 + 24) <= 0xFu )
                                      goto LABEL_63;
                                    *(_QWORD *)(v14 + 152) = setNoticeCtr;
                                    sub_B16F98(
                                      (BattleServantConfConponent_o *)(v14 + 152),
                                      setNoticeCtr,
                                      v7,
                                      v99,
                                      v100,
                                      v101,
                                      v102,
                                      v103);
                                    setPlayOpeningMovieCtr = (System_Int32_array **)this->fields.setPlayOpeningMovieCtr;
                                    if ( !setPlayOpeningMovieCtr
                                      || (v5 = sub_B170BC(
                                                 this->fields.setPlayOpeningMovieCtr,
                                                 *(_QWORD *)(*(_QWORD *)v14 + 64LL))) != 0 )
                                    {
                                      if ( *(_DWORD *)(v14 + 24) <= 0x10u )
                                        goto LABEL_63;
                                      *(_QWORD *)(v14 + 160) = setPlayOpeningMovieCtr;
                                      sub_B16F98(
                                        (BattleServantConfConponent_o *)(v14 + 160),
                                        setPlayOpeningMovieCtr,
                                        v7,
                                        v105,
                                        v106,
                                        v107,
                                        v108,
                                        v109);
                                      fullDlCtr = (System_Int32_array **)this->fields.fullDlCtr;
                                      if ( !fullDlCtr
                                        || (v5 = sub_B170BC(this->fields.fullDlCtr, *(_QWORD *)(*(_QWORD *)v14 + 64LL))) != 0 )
                                      {
                                        if ( *(_DWORD *)(v14 + 24) <= 0x11u )
                                          goto LABEL_63;
                                        *(_QWORD *)(v14 + 168) = fullDlCtr;
                                        sub_B16F98(
                                          (BattleServantConfConponent_o *)(v14 + 168),
                                          fullDlCtr,
                                          v7,
                                          v111,
                                          v112,
                                          v113,
                                          v114,
                                          v115);
                                        setBlackListCtr = (System_Int32_array **)this->fields.setBlackListCtr;
                                        if ( !setBlackListCtr
                                          || (v5 = sub_B170BC(setBlackListCtr, *(_QWORD *)(*(_QWORD *)v14 + 64LL))) != 0 )
                                        {
                                          if ( *(_DWORD *)(v14 + 24) > 0x12u )
                                          {
                                            *(_QWORD *)(v14 + 176) = setBlackListCtr;
                                            sub_B16F98(
                                              (BattleServantConfConponent_o *)(v14 + 176),
                                              setBlackListCtr,
                                              v7,
                                              v117,
                                              v118,
                                              v119,
                                              v120,
                                              v121);
                                            p_contentsArray->klass = (BattleServantConfConponent_c *)v14;
                                            sub_B16F98(
                                              p_contentsArray,
                                              (System_Int32_array **)v14,
                                              v123,
                                              v124,
                                              v125,
                                              v126,
                                              v127,
                                              v128);
                                            return;
                                          }
LABEL_63:
                                          sub_B17100(v5, v6, v7);
                                          sub_B170A0();
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
    sub_B170F4(v5);
    sub_B170A0();
  }
}


void __fastcall SetGameOptionComponent__InitGameOption(SetGameOptionComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x0
  __int64 v4; // x1
  __int64 v5; // x2
  struct GameOptionContentBase_array *contentsArray; // x23
  int max_length; // w8
  float v8; // s8
  unsigned int v9; // w24
  GameOptionContentBase_o *v10; // x20
  char v11; // w21
  UnityEngine_Object_o *collider; // x20
  UnityEngine_BoxCollider_o *v13; // x20
  float v14; // s8
  UnityEngine_BoxCollider_o *v15; // x20
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Vector3_o v17; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v18; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_40FC391 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, method);
    byte_40FC391 = 1;
  }
  SetGameOptionComponent__CreateContentsArrayIfNotYet(this, method);
  contentsArray = this->fields.contentsArray;
  if ( !contentsArray )
    goto LABEL_20;
  max_length = contentsArray->max_length;
  v8 = 160.0;
  if ( max_length >= 1 )
  {
    v9 = 0;
    while ( 1 )
    {
      if ( v9 >= max_length )
      {
        sub_B17100(v3, v4, v5);
        sub_B170A0();
      }
      v10 = contentsArray->m_Items[v9];
      if ( !v10 )
        break;
      v11 = ((__int64 (__fastcall *)(GameOptionContentBase_o *, void *))v10->klass->vtable._6_IsAvailable.method)(
              v10,
              v10->klass[1]._1.image);
      GameOptionContentBase__Show(v10, v11 & 1, 0LL);
      if ( (v11 & 1) != 0 )
      {
        ((void (__fastcall *)(GameOptionContentBase_o *, Il2CppMethodPointer))v10->klass->vtable._4_Init.method)(
          v10,
          v10->klass->vtable._5_Reflection.methodPtr);
        GameOptionContentBase__SetPosY(v10, v8, 0LL);
        v8 = v8 - (float)SLODWORD(v10[1].klass);
      }
      max_length = contentsArray->max_length;
      if ( (int)++v9 >= max_length )
        goto LABEL_11;
    }
LABEL_20:
    sub_B170D4();
  }
LABEL_11:
  collider = (UnityEngine_Object_o *)this->fields.collider;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(collider, 0LL, 0LL) )
  {
    v13 = this->fields.collider;
    if ( !v13 )
      goto LABEL_20;
    v14 = 160.0 - v8;
    LODWORD(v17.fields.x) = (unsigned int)UnityEngine_BoxCollider__get_size(this->fields.collider, 0LL);
    v17.fields.z = 0.0;
    v17.fields.y = v14;
    UnityEngine_BoxCollider__set_size(v13, v17, 0LL);
    v15 = this->fields.collider;
    if ( !v15 )
      goto LABEL_20;
    LODWORD(v18.fields.x) = (unsigned int)UnityEngine_BoxCollider__get_center(this->fields.collider, 0LL);
    v18.fields.y = (float)(v14 * -0.5) + 160.0;
    v18.fields.z = 0.0;
    UnityEngine_BoxCollider__set_center(v15, v18, 0LL);
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
    sub_B170D4();
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
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  struct UIScrollView_o *optionScroll; // x0
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_40FC392 & 1) == 0 )
  {
    sub_B16FFC(&AtlasManager_TypeInfo, method);
    byte_40FC392 = 1;
  }
  hidePos = this->fields.hidePos;
  if ( !hidePos
    || (optionObj = this->fields.optionObj, (transform = UnityEngine_GameObject__get_transform(hidePos, 0LL)) == 0LL)
    || (localPosition = UnityEngine_Transform__get_localPosition(transform, 0LL),
        GameObjectExtensions__SetLocalPosition(optionObj, localPosition, 0LL),
        (gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL)) == 0LL)
    || (UnityEngine_GameObject__SetActive(gameObject, 0, 0LL), (optionScroll = this->fields.optionScroll) == 0LL) )
  {
    sub_B170D4();
  }
  ((void (__fastcall *)(struct UIScrollView_o *, _QWORD, Il2CppMethodPointer, float, float))optionScroll->klass->vtable._9_SetDragAmount.method)(
    optionScroll,
    0LL,
    optionScroll->klass->vtable._10_MoveRelative.methodPtr,
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
  __int64 v4; // x4
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  System_Collections_Generic_IEnumerable_TSource__o *contentsArray; // x20
  SetGameOptionComponent___c_c *v18; // x0
  struct SetGameOptionComponent___c_StaticFields *static_fields; // x8
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *_9__38_0; // x21
  Il2CppObject *v21; // x22
  struct SetGameOptionComponent___c_StaticFields *v22; // x0
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v29; // x0
  __int64 v30; // x1
  __int64 v31; // x2
  __int64 v32; // x3
  __int64 v33; // x4
  SetGameOptionComponent___c_c *v34; // x8
  System_Collections_Generic_IEnumerable_T__o *v35; // x20
  struct SetGameOptionComponent___c_StaticFields *v36; // x9
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *_9__38_1; // x21
  Il2CppObject *v38; // x22
  struct SetGameOptionComponent___c_StaticFields *v39; // x0
  System_String_array **v40; // x2
  System_String_array **v41; // x3
  System_Boolean_array **v42; // x4
  System_Int32_array **v43; // x5
  System_Int32_array *v44; // x6
  System_Int32_array *v45; // x7

  if ( (byte_40FC393 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Action_GameOptionContentBase___ctor__, callback);
    sub_B16FFC(&System_Action_GameOptionContentBase__TypeInfo, v7);
    sub_B16FFC(&Method_BasicHelper_ForEach_GameOptionContentBase___, v8);
    sub_B16FFC(&Method_System_Linq_Enumerable_Where_GameOptionContentBase___, v9);
    sub_B16FFC(&Method_System_Func_GameOptionContentBase__bool___ctor__, v10);
    sub_B16FFC(&System_Func_GameOptionContentBase__bool__TypeInfo, v11);
    sub_B16FFC(&OptionManager_TypeInfo, v12);
    sub_B16FFC(&SoundManager_TypeInfo, v13);
    sub_B16FFC(&Method_SetGameOptionComponent___c__reflectionGameOption_b__38_0__, v14);
    sub_B16FFC(&Method_SetGameOptionComponent___c__reflectionGameOption_b__38_1__, v15);
    sub_B16FFC(&SetGameOptionComponent___c_TypeInfo, v16);
    byte_40FC393 = 1;
  }
  contentsArray = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.contentsArray;
  v18 = SetGameOptionComponent___c_TypeInfo;
  if ( (BYTE3(SetGameOptionComponent___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SetGameOptionComponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SetGameOptionComponent___c_TypeInfo);
    v18 = SetGameOptionComponent___c_TypeInfo;
  }
  static_fields = v18->static_fields;
  _9__38_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)static_fields->__9__38_0;
  if ( !_9__38_0 )
  {
    if ( (BYTE3(v18->vtable._0_Equals.methodPtr) & 4) != 0 && !v18->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v18);
      static_fields = SetGameOptionComponent___c_TypeInfo->static_fields;
    }
    v21 = (Il2CppObject *)static_fields->__9;
    _9__38_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B170CC(
                                                                                    System_Func_GameOptionContentBase__bool__TypeInfo,
                                                                                    callback,
                                                                                    method,
                                                                                    v3,
                                                                                    v4);
    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
      _9__38_0,
      v21,
      Method_SetGameOptionComponent___c__reflectionGameOption_b__38_0__,
      (const MethodInfo_2B6AB40 *)Method_System_Func_GameOptionContentBase__bool___ctor__);
    v22 = SetGameOptionComponent___c_TypeInfo->static_fields;
    v22->__9__38_0 = (struct System_Func_GameOptionContentBase__bool__o *)_9__38_0;
    sub_B16F98(
      (BattleServantConfConponent_o *)&v22->__9__38_0,
      (System_Int32_array **)_9__38_0,
      v23,
      v24,
      v25,
      v26,
      v27,
      v28);
  }
  v29 = System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
          contentsArray,
          (System_Func_TSource__bool__o *)_9__38_0,
          (const MethodInfo_19C8FE8 *)Method_System_Linq_Enumerable_Where_GameOptionContentBase___);
  v34 = SetGameOptionComponent___c_TypeInfo;
  v35 = (System_Collections_Generic_IEnumerable_T__o *)v29;
  if ( (BYTE3(SetGameOptionComponent___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SetGameOptionComponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SetGameOptionComponent___c_TypeInfo);
    v34 = SetGameOptionComponent___c_TypeInfo;
  }
  v36 = v34->static_fields;
  _9__38_1 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)v36->__9__38_1;
  if ( !_9__38_1 )
  {
    if ( (BYTE3(v34->vtable._0_Equals.methodPtr) & 4) != 0 && !v34->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v34);
      v36 = SetGameOptionComponent___c_TypeInfo->static_fields;
    }
    v38 = (Il2CppObject *)v36->__9;
    _9__38_1 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B170CC(
                                                                                      System_Action_GameOptionContentBase__TypeInfo,
                                                                                      v30,
                                                                                      v31,
                                                                                      v32,
                                                                                      v33);
    System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
      _9__38_1,
      v38,
      Method_SetGameOptionComponent___c__reflectionGameOption_b__38_1__,
      (const MethodInfo_24B7310 *)Method_System_Action_GameOptionContentBase___ctor__);
    v39 = SetGameOptionComponent___c_TypeInfo->static_fields;
    v39->__9__38_1 = (struct System_Action_GameOptionContentBase__o *)_9__38_1;
    sub_B16F98(
      (BattleServantConfConponent_o *)&v39->__9__38_1,
      (System_Int32_array **)_9__38_1,
      v40,
      v41,
      v42,
      v43,
      v44,
      v45);
  }
  BasicHelper__ForEach_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
    v35,
    (System_Action_T__o *)_9__38_1,
    (const MethodInfo_18B756C *)Method_BasicHelper_ForEach_GameOptionContentBase___);
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
  UnityEngine_Component_o *bgTxtSprite; // x0
  UnityEngine_GameObject_o *gameObject; // x20
  bool IsActiveBgTxt; // w0
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x3
  __int64 v11; // x4
  System_Action_o *v12; // x20

  if ( (byte_40FC38F & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, method);
    sub_B16FFC(&AtlasManager_TypeInfo, v3);
    sub_B16FFC(&Method_SetGameOptionComponent__showGameOption_b__34_0__, v4);
    byte_40FC38F = 1;
  }
  bgTxtSprite = (UnityEngine_Component_o *)this->fields.bgTxtSprite;
  if ( !bgTxtSprite
    || (gameObject = UnityEngine_Component__get_gameObject(bgTxtSprite, 0LL),
        IsActiveBgTxt = BgTxtManager__IsActiveBgTxt(0LL),
        !gameObject) )
  {
    sub_B170D4();
  }
  UnityEngine_GameObject__SetActive(gameObject, IsActiveBgTxt, 0LL);
  v12 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v8, v9, v10, v11);
  System_Action___ctor(v12, (Il2CppObject *)this, Method_SetGameOptionComponent__showGameOption_b__34_0__, 0LL);
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__LoadMyRoomAtlas(v12, 1, 0LL);
}


void __fastcall SetGameOptionComponent___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  Il2CppObject *v5; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7

  if ( (byte_40F767F & 1) == 0 )
  {
    sub_B16FFC(&SetGameOptionComponent___c_TypeInfo, v1);
    byte_40F767F = 1;
  }
  v5 = (Il2CppObject *)sub_B170CC(SetGameOptionComponent___c_TypeInfo, v1, v2, v3, v4);
  System_Object___ctor(v5, 0LL);
  static_fields = (BattleServantConfConponent_o *)SetGameOptionComponent___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v5;
  sub_B16F98(static_fields, (System_Int32_array **)v5, v7, v8, v9, v10, v11, v12);
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
    sub_B170D4();
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
    sub_B170D4();
  ((void (__fastcall *)(GameOptionContentBase_o *, Il2CppMethodPointer))x->klass->vtable._5_Reflection.method)(
    x,
    x->klass->vtable._6_IsAvailable.methodPtr);
}