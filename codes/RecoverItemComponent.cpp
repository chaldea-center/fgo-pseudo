void __fastcall RecoverItemComponent___cctor(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_40FD2CE & 1) == 0 )
  {
    sub_B16FFC(&RecoverItemComponent_TypeInfo, v1);
    byte_40FD2CE = 1;
  }
  LODWORD(RecoverItemComponent_TypeInfo->static_fields->COLOR_VAL) = (struct RecoverItemComponent_StaticFields)1052770304;
}


void __fastcall RecoverItemComponent___ctor(RecoverItemComponent_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall RecoverItemComponent__AttachStoneCountRefreshComponent(
        RecoverItemComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  UnityEngine_GameObject_o *gameObject; // x20
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x3
  __int64 v9; // x4
  System_Action_int__o *v10; // x21

  if ( (byte_40FD2C8 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Action_int___ctor__, method);
    sub_B16FFC(&System_Action_int__TypeInfo, v3);
    sub_B16FFC(&Method_RecoverItemComponent__AttachStoneCountRefreshComponent_b__38_0__, v4);
    byte_40FD2C8 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v10 = (System_Action_int__o *)sub_B170CC(System_Action_int__TypeInfo, v6, v7, v8, v9);
  System_Action_int____ctor(
    v10,
    (Il2CppObject *)this,
    Method_RecoverItemComponent__AttachStoneCountRefreshComponent_b__38_0__,
    (const MethodInfo_24B5D80 *)Method_System_Action_int___ctor__);
  StoneCountRefreshComponent__AttachToGameObject(gameObject, v10, 1, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall RecoverItemComponent__CloseApRecovDlg(
        RecoverItemComponent_o *this,
        bool isRes,
        int32_t useNum,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  WebViewManager_o *v9; // x20
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x3
  __int64 v13; // x4
  System_Action_o *v14; // x21
  CommonUI_o *Instance; // x0
  System_Action_o *v16; // x1

  if ( (byte_40FD2CB & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, isRes);
    sub_B16FFC(&Method_RecoverItemComponent_setRequestInfo__, v7);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v8);
    byte_40FD2CB = 1;
  }
  if ( !isRes )
  {
    Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( Instance )
    {
      v16 = 0LL;
      goto LABEL_8;
    }
LABEL_9:
    sub_B170D4();
  }
  this->fields.spendNum = useNum;
  v9 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v14 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v10, v11, v12, v13);
  System_Action___ctor(v14, (Il2CppObject *)this, Method_RecoverItemComponent_setRequestInfo__, 0LL);
  if ( !v9 )
    goto LABEL_9;
  Instance = (CommonUI_o *)v9;
  v16 = v14;
LABEL_8:
  CommonUI__CloseApRecoverConfirmDlg(Instance, v16, 0LL);
}


void __fastcall RecoverItemComponent__OnClickItem(RecoverItemComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
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
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  __int64 v22; // x1
  __int64 v23; // x1
  __int64 v24; // x1
  __int64 v25; // x1
  __int64 v26; // x1
  __int64 v27; // x1
  __int64 v28; // x1
  __int64 v29; // x1
  UnityEngine_Object_o *dialog; // x20
  RecoverDlgComponent_o *v31; // x0
  System_String_o *v32; // x27
  System_String_o *v33; // x21
  Il2CppObject *v34; // x0
  System_Int32_array **v35; // x24
  System_Int32_array **mText; // x23
  System_String_o *v37; // x21
  Il2CppObject *v38; // x0
  struct UILabel_o *itemNameLb; // x8
  System_String_o *v40; // x21
  System_String_o *v41; // x22
  int32_t recvSum; // w8
  int32_t usrMaxAp; // w9
  System_String_o **v44; // x8
  System_String_o *v45; // x25
  System_String_o *v46; // x25
  __int64 v47; // x2
  __int64 v48; // x0
  __int64 v49; // x1
  System_String_array **v50; // x2
  System_String_array **v51; // x3
  System_Boolean_array **v52; // x4
  System_Int32_array **v53; // x5
  System_Int32_array *v54; // x6
  System_Int32_array *v55; // x7
  System_Object_array *v56; // x26
  System_String_array **v57; // x3
  System_Boolean_array **v58; // x4
  System_Int32_array **v59; // x5
  System_Int32_array *v60; // x6
  System_Int32_array *v61; // x7
  System_String_array **v62; // x3
  System_Boolean_array **v63; // x4
  System_Int32_array **v64; // x5
  System_Int32_array *v65; // x6
  System_Int32_array *v66; // x7
  System_Int32_array **v67; // x24
  System_String_array **v68; // x3
  System_Boolean_array **v69; // x4
  System_Int32_array **v70; // x5
  System_Int32_array *v71; // x6
  System_Int32_array *v72; // x7
  System_Int32_array **v73; // x24
  System_String_array **v74; // x3
  System_Boolean_array **v75; // x4
  System_Int32_array **v76; // x5
  System_Int32_array *v77; // x6
  System_Int32_array *v78; // x7
  System_Int32_array **v79; // x24
  System_String_array **v80; // x3
  System_Boolean_array **v81; // x4
  System_Int32_array **v82; // x5
  System_Int32_array *v83; // x6
  System_Int32_array *v84; // x7
  System_Int32_array **v85; // x24
  System_String_array **v86; // x3
  System_Boolean_array **v87; // x4
  System_Int32_array **v88; // x5
  System_Int32_array *v89; // x6
  System_Int32_array *v90; // x7
  System_Int32_array **v91; // x24
  BattleServantConfConponent_o *v92; // x0
  System_String_o *v93; // x25
  __int64 v94; // x2
  System_String_array **v95; // x3
  System_Boolean_array **v96; // x4
  System_Int32_array **v97; // x5
  System_Int32_array *v98; // x6
  System_Int32_array *v99; // x7
  System_Object_array *v100; // x26
  System_String_array **v101; // x3
  System_Boolean_array **v102; // x4
  System_Int32_array **v103; // x5
  System_Int32_array *v104; // x6
  System_Int32_array *v105; // x7
  System_String_array **v106; // x3
  System_Boolean_array **v107; // x4
  System_Int32_array **v108; // x5
  System_Int32_array *v109; // x6
  System_Int32_array *v110; // x7
  System_Int32_array **v111; // x24
  System_String_array **v112; // x3
  System_Boolean_array **v113; // x4
  System_Int32_array **v114; // x5
  System_Int32_array *v115; // x6
  System_Int32_array *v116; // x7
  System_Int32_array **v117; // x24
  System_String_array **v118; // x3
  System_Boolean_array **v119; // x4
  System_Int32_array **v120; // x5
  System_Int32_array *v121; // x6
  System_Int32_array *v122; // x7
  System_Int32_array **v123; // x24
  System_String_array **v124; // x3
  System_Boolean_array **v125; // x4
  System_Int32_array **v126; // x5
  System_Int32_array *v127; // x6
  System_Int32_array *v128; // x7
  System_Int32_array **v129; // x24
  System_String_array **v130; // x3
  System_Boolean_array **v131; // x4
  System_Int32_array **v132; // x5
  System_Int32_array *v133; // x6
  System_Int32_array *v134; // x7
  System_Int32_array **v135; // x24
  System_String_o *v136; // x0
  System_String_o *v137; // x24
  WebViewManager_o *v138; // x23
  __int64 v139; // x1
  __int64 v140; // x2
  __int64 v141; // x3
  __int64 v142; // x4
  CommonConfirmDialog_ClickDelegate_o *v143; // x25
  float v144; // s1
  CommonUI_o *v145; // x0
  struct BalanceConfig_StaticFields *static_fields; // x8
  System_String_o *v147; // x1
  System_String_o **v148; // x8
  System_String_o *v149; // x25
  __int64 v150; // x2
  System_String_array **v151; // x3
  System_Boolean_array **v152; // x4
  System_Int32_array **v153; // x5
  System_Int32_array *v154; // x6
  System_Int32_array *v155; // x7
  System_String_array **v156; // x3
  System_Boolean_array **v157; // x4
  System_Int32_array **v158; // x5
  System_Int32_array *v159; // x6
  System_Int32_array *v160; // x7
  System_String_array **v161; // x3
  System_Boolean_array **v162; // x4
  System_Int32_array **v163; // x5
  System_Int32_array *v164; // x6
  System_Int32_array *v165; // x7
  System_Int32_array **v166; // x24
  System_String_array **v167; // x3
  System_Boolean_array **v168; // x4
  System_Int32_array **v169; // x5
  System_Int32_array *v170; // x6
  System_Int32_array *v171; // x7
  System_Int32_array **v172; // x24
  System_String_array **v173; // x3
  System_Boolean_array **v174; // x4
  System_Int32_array **v175; // x5
  System_Int32_array *v176; // x6
  System_Int32_array *v177; // x7
  System_Int32_array **v178; // x24
  System_String_array **v179; // x3
  System_Boolean_array **v180; // x4
  System_Int32_array **v181; // x5
  System_Int32_array *v182; // x6
  System_Int32_array *v183; // x7
  System_Int32_array **v184; // x24
  System_String_array **v185; // x3
  System_Boolean_array **v186; // x4
  System_Int32_array **v187; // x5
  System_Int32_array *v188; // x6
  System_Int32_array *v189; // x7
  System_Int32_array **v190; // x24
  UserGameEntity_o *userEntity; // x0
  System_String_o *v192; // x23
  CommonUI_o *v193; // x25
  __int64 v194; // x1
  __int64 v195; // x2
  __int64 v196; // x3
  __int64 v197; // x4
  CommonConfirmDialog_ClickDelegate_o *v198; // x26
  System_String_o *v199; // x0
  System_String_o *v200; // x20
  CommonUI_o *Instance; // x21
  __int64 v202; // x1
  __int64 v203; // x2
  __int64 v204; // x3
  __int64 v205; // x4
  System_Action_o *v206; // x22
  System_String_o *v207; // x0
  System_String_o *v208; // x20
  CommonUI_o *v209; // x21
  __int64 v210; // x1
  __int64 v211; // x2
  __int64 v212; // x3
  __int64 v213; // x4
  System_Action_o *v214; // x22
  WebViewManager_o *v215; // x23
  __int64 v216; // x1
  __int64 v217; // x2
  __int64 v218; // x3
  __int64 v219; // x4
  WebViewManager_o *v220; // x0
  int32_t targetId; // w20
  int32_t needAp; // w21
  CommonUI_o *v223; // x22
  __int64 v224; // x1
  __int64 v225; // x2
  __int64 v226; // x3
  __int64 v227; // x4
  System_Action_bool__int__o *v228; // x23
  int32_t v229; // [xsp+38h] [xbp-68h] BYREF
  int32_t v230; // [xsp+3Ch] [xbp-64h] BYREF
  int32_t v231; // [xsp+40h] [xbp-60h] BYREF
  int32_t usrMaxRp; // [xsp+44h] [xbp-5Ch] BYREF
  int32_t usrCurrentAp; // [xsp+48h] [xbp-58h] BYREF
  int32_t spendNum; // [xsp+4Ch] [xbp-54h] BYREF

  if ( (byte_40FD2C9 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Action_bool__int___ctor__, method);
    sub_B16FFC(&System_Action_bool__int__TypeInfo, v3);
    sub_B16FFC(&System_Action_TypeInfo, v4);
    sub_B16FFC(&BalanceConfig_TypeInfo, v5);
    sub_B16FFC(&CommonConfirmDialog_ClickDelegate_TypeInfo, v6);
    sub_B16FFC(&int_TypeInfo, v7);
    sub_B16FFC(&LocalizationManager_TypeInfo, v8);
    sub_B16FFC(&object___TypeInfo, v9);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v10);
    sub_B16FFC(&Method_RecoverItemComponent_CloseApRecovDlg__, v11);
    sub_B16FFC(&Method_RecoverItemComponent_closeNotificationDlg__, v12);
    sub_B16FFC(&Method_RecoverItemComponent_spendItemDlg__, v13);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v14);
    sub_B16FFC(&SoundManager_TypeInfo, v15);
    sub_B16FFC(&StringLiteral_11225, v16);
    sub_B16FFC(&StringLiteral_3107, v17);
    sub_B16FFC(&StringLiteral_3248, v18);
    sub_B16FFC(&StringLiteral_1730, v19);
    sub_B16FFC(&StringLiteral_11223, v20);
    sub_B16FFC(&StringLiteral_14652, v21);
    sub_B16FFC(&StringLiteral_1726, v22);
    sub_B16FFC(&StringLiteral_3253, v23);
    sub_B16FFC(&StringLiteral_3251, v24);
    sub_B16FFC(&StringLiteral_1727, v25);
    sub_B16FFC(&StringLiteral_1731, v26);
    sub_B16FFC(&StringLiteral_1728, v27);
    sub_B16FFC(&StringLiteral_1, v28);
    sub_B16FFC(&StringLiteral_1736, v29);
    byte_40FD2C9 = 1;
  }
  if ( !this->fields.isEnableSelect )
    return;
  dialog = (UnityEngine_Object_o *)this->fields.dialog;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Inequality(dialog, 0LL, 0LL) )
    return;
  v31 = this->fields.dialog;
  if ( !v31 )
    goto LABEL_160;
  if ( !RecoverDlgComponent__isListTouchable(v31, 0LL) )
    return;
  v32 = (System_String_o *)StringLiteral_1;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v33 = LocalizationManager__Get((System_String_o *)StringLiteral_14652, 0LL);
  spendNum = this->fields.spendNum;
  v34 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &spendNum);
  v35 = (System_Int32_array **)System_String__Format(v33, v34, 0LL);
  if ( this->fields.currentType == 1 )
  {
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    mText = (System_Int32_array **)LocalizationManager__Get((System_String_o *)StringLiteral_3248, 0LL);
    if ( this->fields.currentType == 1 )
    {
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v37 = LocalizationManager__Get((System_String_o *)StringLiteral_3107, 0LL);
      spendNum = this->fields.spendNum;
      v38 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &spendNum);
      v35 = (System_Int32_array **)System_String__Format(v37, v38, 0LL);
    }
  }
  else
  {
    itemNameLb = this->fields.itemNameLb;
    if ( !itemNameLb )
      goto LABEL_160;
    mText = (System_Int32_array **)itemNameLb->fields.mText;
  }
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v40 = LocalizationManager__Get((System_String_o *)StringLiteral_3253, 0LL);
  v41 = LocalizationManager__Get((System_String_o *)StringLiteral_3251, 0LL);
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(0, 0LL);
  if ( this->fields.isAp )
  {
    recvSum = this->fields.recvSum;
    usrMaxAp = this->fields.usrMaxAp;
    if ( this->fields.isAddAp )
    {
      if ( recvSum <= usrMaxAp )
        v44 = (System_String_o **)&StringLiteral_1726;
      else
        v44 = (System_String_o **)&StringLiteral_1727;
      v45 = *v44;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v46 = LocalizationManager__Get(v45, 0LL);
      v48 = sub_B17014(object___TypeInfo, 7LL, v47);
      if ( !v48 )
        goto LABEL_160;
      v56 = (System_Object_array *)v48;
      if ( !mText || (v48 = sub_B170BC(mText, *(_QWORD *)(*(_QWORD *)v48 + 64LL))) != 0 )
      {
        if ( !v56->max_length )
          goto LABEL_159;
        v56->m_Items[0] = (Il2CppObject *)mText;
        sub_B16F98((BattleServantConfConponent_o *)v56->m_Items, mText, v50, v51, v52, v53, v54, v55);
        if ( !v35 || (v48 = sub_B170BC(v35, v56->obj.klass->_1.element_class)) != 0 )
        {
          if ( v56->max_length <= 1 )
            goto LABEL_159;
          v56->m_Items[1] = (Il2CppObject *)v35;
          sub_B16F98((BattleServantConfConponent_o *)&v56->m_Items[1], v35, v50, v57, v58, v59, v60, v61);
          spendNum = this->fields.recvApNum;
          v48 = j_il2cpp_value_box_0(int_TypeInfo, &spendNum);
          v67 = (System_Int32_array **)v48;
          if ( !v48 || (v48 = sub_B170BC(v48, v56->obj.klass->_1.element_class)) != 0 )
          {
            if ( v56->max_length <= 2 )
              goto LABEL_159;
            v56->m_Items[2] = (Il2CppObject *)v67;
            sub_B16F98((BattleServantConfConponent_o *)&v56->m_Items[2], v67, v50, v62, v63, v64, v65, v66);
            usrCurrentAp = this->fields.usrCurrentAp;
            v48 = j_il2cpp_value_box_0(int_TypeInfo, &usrCurrentAp);
            v73 = (System_Int32_array **)v48;
            if ( !v48 || (v48 = sub_B170BC(v48, v56->obj.klass->_1.element_class)) != 0 )
            {
              if ( v56->max_length <= 3 )
                goto LABEL_159;
              v56->m_Items[3] = (Il2CppObject *)v73;
              sub_B16F98((BattleServantConfConponent_o *)&v56->m_Items[3], v73, v50, v68, v69, v70, v71, v72);
              usrMaxRp = this->fields.usrMaxAp;
              v48 = j_il2cpp_value_box_0(int_TypeInfo, &usrMaxRp);
              v79 = (System_Int32_array **)v48;
              if ( !v48 || (v48 = sub_B170BC(v48, v56->obj.klass->_1.element_class)) != 0 )
              {
                if ( v56->max_length <= 4 )
                  goto LABEL_159;
                v56->m_Items[4] = (Il2CppObject *)v79;
                sub_B16F98((BattleServantConfConponent_o *)&v56->m_Items[4], v79, v50, v74, v75, v76, v77, v78);
                v231 = this->fields.recvSum;
                v48 = j_il2cpp_value_box_0(int_TypeInfo, &v231);
                v85 = (System_Int32_array **)v48;
                if ( !v48 || (v48 = sub_B170BC(v48, v56->obj.klass->_1.element_class)) != 0 )
                {
                  if ( v56->max_length <= 5 )
                    goto LABEL_159;
                  v56->m_Items[5] = (Il2CppObject *)v85;
                  sub_B16F98((BattleServantConfConponent_o *)&v56->m_Items[5], v85, v50, v80, v81, v82, v83, v84);
                  v230 = this->fields.usrMaxAp;
                  v48 = j_il2cpp_value_box_0(int_TypeInfo, &v230);
                  v91 = (System_Int32_array **)v48;
                  if ( !v48 || (v48 = sub_B170BC(v48, v56->obj.klass->_1.element_class)) != 0 )
                  {
                    if ( v56->max_length > 6 )
                    {
                      v56->m_Items[6] = (Il2CppObject *)v91;
                      v92 = (BattleServantConfConponent_o *)&v56->m_Items[6];
                      goto LABEL_126;
                    }
                    goto LABEL_159;
                  }
                }
              }
            }
          }
        }
      }
    }
    else
    {
      if ( recvSum <= usrMaxAp )
        v148 = (System_String_o **)&StringLiteral_1730;
      else
        v148 = (System_String_o **)&StringLiteral_1731;
      v149 = *v148;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v46 = LocalizationManager__Get(v149, 0LL);
      v48 = sub_B17014(object___TypeInfo, 8LL, v150);
      if ( !v48 )
        goto LABEL_160;
      v56 = (System_Object_array *)v48;
      if ( !mText || (v48 = sub_B170BC(mText, *(_QWORD *)(*(_QWORD *)v48 + 64LL))) != 0 )
      {
        if ( !v56->max_length )
          goto LABEL_159;
        v56->m_Items[0] = (Il2CppObject *)mText;
        sub_B16F98((BattleServantConfConponent_o *)v56->m_Items, mText, v50, v151, v152, v153, v154, v155);
        if ( !v35 || (v48 = sub_B170BC(v35, v56->obj.klass->_1.element_class)) != 0 )
        {
          if ( v56->max_length <= 1 )
            goto LABEL_159;
          v56->m_Items[1] = (Il2CppObject *)v35;
          sub_B16F98((BattleServantConfConponent_o *)&v56->m_Items[1], v35, v50, v156, v157, v158, v159, v160);
          spendNum = this->fields.apRcvRate;
          v48 = j_il2cpp_value_box_0(int_TypeInfo, &spendNum);
          v166 = (System_Int32_array **)v48;
          if ( !v48 || (v48 = sub_B170BC(v48, v56->obj.klass->_1.element_class)) != 0 )
          {
            if ( v56->max_length <= 2 )
              goto LABEL_159;
            v56->m_Items[2] = (Il2CppObject *)v166;
            sub_B16F98((BattleServantConfConponent_o *)&v56->m_Items[2], v166, v50, v161, v162, v163, v164, v165);
            usrCurrentAp = this->fields.recvApNum;
            v48 = j_il2cpp_value_box_0(int_TypeInfo, &usrCurrentAp);
            v172 = (System_Int32_array **)v48;
            if ( !v48 || (v48 = sub_B170BC(v48, v56->obj.klass->_1.element_class)) != 0 )
            {
              if ( v56->max_length <= 3 )
                goto LABEL_159;
              v56->m_Items[3] = (Il2CppObject *)v172;
              sub_B16F98((BattleServantConfConponent_o *)&v56->m_Items[3], v172, v50, v167, v168, v169, v170, v171);
              usrMaxRp = this->fields.usrCurrentAp;
              v48 = j_il2cpp_value_box_0(int_TypeInfo, &usrMaxRp);
              v178 = (System_Int32_array **)v48;
              if ( !v48 || (v48 = sub_B170BC(v48, v56->obj.klass->_1.element_class)) != 0 )
              {
                if ( v56->max_length <= 4 )
                  goto LABEL_159;
                v56->m_Items[4] = (Il2CppObject *)v178;
                sub_B16F98((BattleServantConfConponent_o *)&v56->m_Items[4], v178, v50, v173, v174, v175, v176, v177);
                v231 = this->fields.usrMaxAp;
                v48 = j_il2cpp_value_box_0(int_TypeInfo, &v231);
                v184 = (System_Int32_array **)v48;
                if ( !v48 || (v48 = sub_B170BC(v48, v56->obj.klass->_1.element_class)) != 0 )
                {
                  if ( v56->max_length <= 5 )
                    goto LABEL_159;
                  v56->m_Items[5] = (Il2CppObject *)v184;
                  sub_B16F98((BattleServantConfConponent_o *)&v56->m_Items[5], v184, v50, v179, v180, v181, v182, v183);
                  v230 = this->fields.recvSum;
                  v48 = j_il2cpp_value_box_0(int_TypeInfo, &v230);
                  v190 = (System_Int32_array **)v48;
                  if ( !v48 || (v48 = sub_B170BC(v48, v56->obj.klass->_1.element_class)) != 0 )
                  {
                    if ( v56->max_length <= 6 )
                      goto LABEL_159;
                    v56->m_Items[6] = (Il2CppObject *)v190;
                    sub_B16F98(
                      (BattleServantConfConponent_o *)&v56->m_Items[6],
                      v190,
                      v50,
                      v185,
                      v186,
                      v187,
                      v188,
                      v189);
                    v229 = this->fields.usrMaxAp;
                    v48 = j_il2cpp_value_box_0(int_TypeInfo, &v229);
                    v91 = (System_Int32_array **)v48;
                    if ( !v48 || (v48 = sub_B170BC(v48, v56->obj.klass->_1.element_class)) != 0 )
                    {
                      if ( v56->max_length > 7 )
                      {
                        v56->m_Items[7] = (Il2CppObject *)v91;
                        v92 = (BattleServantConfConponent_o *)&v56->m_Items[7];
LABEL_126:
                        sub_B16F98(v92, v91, v50, v86, v87, v88, v89, v90);
                        v137 = System_String__Format_43822456(v46, v56, 0LL);
                        userEntity = this->fields.userEntity;
                        if ( !userEntity )
                          goto LABEL_160;
                        if ( UserGameEntity__getAct(userEntity, 0LL) >= this->fields.usrMaxAp )
                        {
                          if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                            && !LocalizationManager_TypeInfo->_2.cctor_finished )
                          {
                            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                          }
                          v199 = LocalizationManager__Get((System_String_o *)StringLiteral_1728, 0LL);
                          v200 = System_String__Format(v199, (Il2CppObject *)mText, 0LL);
                          Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
                          v206 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v202, v203, v204, v205);
                          System_Action___ctor(
                            v206,
                            (Il2CppObject *)this,
                            Method_RecoverItemComponent_closeNotificationDlg__,
                            0LL);
                          if ( !Instance )
                            goto LABEL_160;
                          CommonUI__OpenNotificationDialog(
                            Instance,
                            (System_String_o *)StringLiteral_1,
                            v200,
                            v206,
                            -1,
                            0,
                            0,
                            0,
                            1,
                            0,
                            0,
                            0,
                            0LL,
                            0LL);
                        }
                        else
                        {
                          if ( this->fields.currentType == 2 )
                          {
                            if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                              && !LocalizationManager_TypeInfo->_2.cctor_finished )
                            {
                              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                            }
                            v192 = LocalizationManager__Get((System_String_o *)StringLiteral_1736, 0LL);
                            v193 = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
                            v198 = (CommonConfirmDialog_ClickDelegate_o *)sub_B170CC(
                                                                            CommonConfirmDialog_ClickDelegate_TypeInfo,
                                                                            v194,
                                                                            v195,
                                                                            v196,
                                                                            v197);
                            CommonConfirmDialog_ClickDelegate___ctor(
                              v198,
                              (Il2CppObject *)this,
                              Method_RecoverItemComponent_spendItemDlg__,
                              0LL);
                            if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                              && !BalanceConfig_TypeInfo->_2.cctor_finished )
                            {
                              j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
                            }
                            if ( v193 )
                            {
                              CommonUI__OpenConfirmDecideDlgAddMsgFrame(
                                v193,
                                v32,
                                v137,
                                v192,
                                v40,
                                v41,
                                v198,
                                BalanceConfig_TypeInfo->static_fields->DefaultFontSize,
                                0.0,
                                86.0,
                                0,
                                1,
                                0,
                                240,
                                0,
                                0LL);
                              return;
                            }
LABEL_160:
                            sub_B170D4();
                          }
                          if ( !this->fields.isAddAp && this->fields.apRcvRate == 100 && this->fields.spendNum < 2 )
                          {
                            v215 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
                            v143 = (CommonConfirmDialog_ClickDelegate_o *)sub_B170CC(
                                                                            CommonConfirmDialog_ClickDelegate_TypeInfo,
                                                                            v216,
                                                                            v217,
                                                                            v218,
                                                                            v219);
                            CommonConfirmDialog_ClickDelegate___ctor(
                              v143,
                              (Il2CppObject *)this,
                              Method_RecoverItemComponent_spendItemDlg__,
                              0LL);
                            if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                              && !BalanceConfig_TypeInfo->_2.cctor_finished )
                            {
                              j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
                            }
                            if ( !v215 )
                              goto LABEL_160;
                            v147 = v32;
                            v144 = 15.0;
                            static_fields = BalanceConfig_TypeInfo->static_fields;
                            v145 = (CommonUI_o *)v215;
                            goto LABEL_93;
                          }
                          v220 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
                          targetId = this->fields.targetId;
                          needAp = this->fields.needAp;
                          v223 = (CommonUI_o *)v220;
                          v228 = (System_Action_bool__int__o *)sub_B170CC(
                                                                 System_Action_bool__int__TypeInfo,
                                                                 v224,
                                                                 v225,
                                                                 v226,
                                                                 v227);
                          System_Action_bool__int____ctor(
                            v228,
                            (Il2CppObject *)this,
                            Method_RecoverItemComponent_CloseApRecovDlg__,
                            (const MethodInfo_24C2A14 *)Method_System_Action_bool__int___ctor__);
                          if ( !v223 )
                            goto LABEL_160;
                          CommonUI__OpenApRecoverConfirmDlg(v223, targetId, needAp, v228, 0LL);
                        }
                        return;
                      }
LABEL_159:
                      sub_B17100(v48, v49, v50);
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
LABEL_161:
    sub_B170F4(v48);
    sub_B170A0();
  }
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v93 = LocalizationManager__Get((System_String_o *)StringLiteral_11225, 0LL);
  v48 = sub_B17014(object___TypeInfo, 7LL, v94);
  if ( !v48 )
    goto LABEL_160;
  v100 = (System_Object_array *)v48;
  if ( mText )
  {
    v48 = sub_B170BC(mText, *(_QWORD *)(*(_QWORD *)v48 + 64LL));
    if ( !v48 )
      goto LABEL_161;
  }
  if ( !v100->max_length )
    goto LABEL_159;
  v100->m_Items[0] = (Il2CppObject *)mText;
  sub_B16F98((BattleServantConfConponent_o *)v100->m_Items, mText, v50, v95, v96, v97, v98, v99);
  if ( v35 )
  {
    v48 = sub_B170BC(v35, v100->obj.klass->_1.element_class);
    if ( !v48 )
      goto LABEL_161;
  }
  if ( v100->max_length <= 1 )
    goto LABEL_159;
  v100->m_Items[1] = (Il2CppObject *)v35;
  sub_B16F98((BattleServantConfConponent_o *)&v100->m_Items[1], v35, v50, v101, v102, v103, v104, v105);
  spendNum = this->fields.recvRpNum;
  v48 = j_il2cpp_value_box_0(int_TypeInfo, &spendNum);
  v111 = (System_Int32_array **)v48;
  if ( v48 )
  {
    v48 = sub_B170BC(v48, v100->obj.klass->_1.element_class);
    if ( !v48 )
      goto LABEL_161;
  }
  if ( v100->max_length <= 2 )
    goto LABEL_159;
  v100->m_Items[2] = (Il2CppObject *)v111;
  sub_B16F98((BattleServantConfConponent_o *)&v100->m_Items[2], v111, v50, v106, v107, v108, v109, v110);
  usrCurrentAp = this->fields.usrCurrentRp;
  v48 = j_il2cpp_value_box_0(int_TypeInfo, &usrCurrentAp);
  v117 = (System_Int32_array **)v48;
  if ( v48 )
  {
    v48 = sub_B170BC(v48, v100->obj.klass->_1.element_class);
    if ( !v48 )
      goto LABEL_161;
  }
  if ( v100->max_length <= 3 )
    goto LABEL_159;
  v100->m_Items[3] = (Il2CppObject *)v117;
  sub_B16F98((BattleServantConfConponent_o *)&v100->m_Items[3], v117, v50, v112, v113, v114, v115, v116);
  usrMaxRp = this->fields.usrMaxRp;
  v48 = j_il2cpp_value_box_0(int_TypeInfo, &usrMaxRp);
  v123 = (System_Int32_array **)v48;
  if ( v48 )
  {
    v48 = sub_B170BC(v48, v100->obj.klass->_1.element_class);
    if ( !v48 )
      goto LABEL_161;
  }
  if ( v100->max_length <= 4 )
    goto LABEL_159;
  v100->m_Items[4] = (Il2CppObject *)v123;
  sub_B16F98((BattleServantConfConponent_o *)&v100->m_Items[4], v123, v50, v118, v119, v120, v121, v122);
  v231 = this->fields.recvSum;
  v48 = j_il2cpp_value_box_0(int_TypeInfo, &v231);
  v129 = (System_Int32_array **)v48;
  if ( v48 )
  {
    v48 = sub_B170BC(v48, v100->obj.klass->_1.element_class);
    if ( !v48 )
      goto LABEL_161;
  }
  if ( v100->max_length <= 5 )
    goto LABEL_159;
  v100->m_Items[5] = (Il2CppObject *)v129;
  sub_B16F98((BattleServantConfConponent_o *)&v100->m_Items[5], v129, v50, v124, v125, v126, v127, v128);
  v230 = this->fields.usrMaxRp;
  v48 = j_il2cpp_value_box_0(int_TypeInfo, &v230);
  v135 = (System_Int32_array **)v48;
  if ( v48 )
  {
    v48 = sub_B170BC(v48, v100->obj.klass->_1.element_class);
    if ( !v48 )
      goto LABEL_161;
  }
  if ( v100->max_length <= 6 )
    goto LABEL_159;
  v100->m_Items[6] = (Il2CppObject *)v135;
  sub_B16F98((BattleServantConfConponent_o *)&v100->m_Items[6], v135, v50, v130, v131, v132, v133, v134);
  v136 = System_String__Format_43822456(v93, v100, 0LL);
  if ( !this->fields.userEntity )
    goto LABEL_160;
  v137 = v136;
  if ( UserGameEntity__getRp(this->fields.userEntity, 0LL) < this->fields.usrMaxRp )
  {
    v138 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v143 = (CommonConfirmDialog_ClickDelegate_o *)sub_B170CC(
                                                    CommonConfirmDialog_ClickDelegate_TypeInfo,
                                                    v139,
                                                    v140,
                                                    v141,
                                                    v142);
    CommonConfirmDialog_ClickDelegate___ctor(
      v143,
      (Il2CppObject *)this,
      Method_RecoverItemComponent_spendItemDlg__,
      0LL);
    if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    }
    if ( !v138 )
      goto LABEL_160;
    v144 = 15.0;
    v145 = (CommonUI_o *)v138;
    static_fields = BalanceConfig_TypeInfo->static_fields;
    v147 = v32;
LABEL_93:
    CommonUI__OpenConfirmDecideDlg(
      v145,
      v147,
      v137,
      v40,
      v41,
      v143,
      static_fields->DefaultFontSize,
      0.0,
      v144,
      0,
      1,
      0,
      240,
      0,
      0LL);
    return;
  }
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v207 = LocalizationManager__Get((System_String_o *)StringLiteral_11223, 0LL);
  v208 = System_String__Format(v207, (Il2CppObject *)mText, 0LL);
  v209 = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v214 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v210, v211, v212, v213);
  System_Action___ctor(v214, (Il2CppObject *)this, Method_RecoverItemComponent_closeNotificationDlg__, 0LL);
  if ( !v209 )
    goto LABEL_160;
  CommonUI__OpenNotificationDialog(
    v209,
    (System_String_o *)StringLiteral_1,
    v208,
    v214,
    -1,
    0,
    0,
    0,
    1,
    0,
    1,
    0,
    0LL,
    0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall RecoverItemComponent___AttachStoneCountRefreshComponent_b__38_0(
        RecoverItemComponent_o *this,
        int32_t stoneCount,
        const MethodInfo *method)
{
  __int64 v5; // x1
  UILabel_o *currentNumLb; // x19
  Il2CppObject *v7; // x0
  System_String_o *v8; // x0
  int32_t v9; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_40FD2CF & 1) == 0 )
  {
    sub_B16FFC(&int_TypeInfo, *(_QWORD *)&stoneCount);
    sub_B16FFC(&StringLiteral_23433, v5);
    byte_40FD2CF = 1;
  }
  currentNumLb = this->fields.currentNumLb;
  v9 = stoneCount;
  v7 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v9);
  v8 = System_String__Format((System_String_o *)StringLiteral_23433, v7, 0LL);
  if ( !currentNumLb )
    sub_B170D4();
  UILabel__set_text(currentNumLb, v8, 0LL);
}


void __fastcall RecoverItemComponent__add_callbackFunc(
        RecoverItemComponent_o *this,
        RecoverItemComponent_CallbackFunc_o *value,
        const MethodInfo *method)
{
  struct RecoverItemComponent_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v6; // x21
  struct RecoverItemComponent_CallbackFunc_o *callbackFunc; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  RecoverItemComponent_o *v11; // x0
  RecoverItemComponent_CallbackFunc_o *v12; // x1
  const MethodInfo *v13; // x2

  if ( (byte_40FD2C4 & 1) == 0 )
  {
    sub_B16FFC(&RecoverItemComponent_CallbackFunc_TypeInfo, value);
    byte_40FD2C4 = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v6 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Combine(v6, (System_Delegate_o *)value, 0LL);
    if ( v8 )
    {
      if ( (RecoverItemComponent_CallbackFunc_c *)v8->klass != RecoverItemComponent_CallbackFunc_TypeInfo )
        break;
    }
    v9 = sub_B0BA14(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_B173C8(v8);
  RecoverItemComponent__remove_callbackFunc(v11, v12, v13);
}


void __fastcall RecoverItemComponent__closeNotificationDlg(RecoverItemComponent_o *this, const MethodInfo *method)
{
  CommonUI_o *Instance; // x0

  if ( (byte_40FD2CD & 1) == 0 )
  {
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, method);
    byte_40FD2CD = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_B170D4();
  CommonUI__CloseNotificationDialog(Instance, 0LL);
}


void __fastcall RecoverItemComponent__remove_callbackFunc(
        RecoverItemComponent_o *this,
        RecoverItemComponent_CallbackFunc_o *value,
        const MethodInfo *method)
{
  struct RecoverItemComponent_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v6; // x21
  struct RecoverItemComponent_CallbackFunc_o *callbackFunc; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  RecoverItemComponent_o *v11; // x0
  RecoverEntity_o *v12; // x1
  int32_t v13; // w2
  RecoverDlgComponent_o *v14; // x3
  RecoverItemComponent_CallbackFunc_o *v15; // x4
  const MethodInfo *v16; // x5

  if ( (byte_40FD2C5 & 1) == 0 )
  {
    sub_B16FFC(&RecoverItemComponent_CallbackFunc_TypeInfo, value);
    byte_40FD2C5 = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v6 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Remove(v6, (System_Delegate_o *)value, 0LL);
    if ( v8 )
    {
      if ( (RecoverItemComponent_CallbackFunc_c *)v8->klass != RecoverItemComponent_CallbackFunc_TypeInfo )
        break;
    }
    v9 = sub_B0BA14(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_B173C8(v8);
  RecoverItemComponent__setAPRecvItemInfo(v11, v12, v13, v14, v15, v16);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall RecoverItemComponent__setAPRecvItemInfo(
        RecoverItemComponent_o *this,
        RecoverEntity_o *data,
        int32_t needAp,
        RecoverDlgComponent_o *dlg,
        RecoverItemComponent_CallbackFunc_o *callback,
        const MethodInfo *method)
{
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  __int64 v22; // x1
  __int64 v23; // x1
  __int64 v24; // x1
  __int64 v25; // x1
  __int64 v26; // x1
  __int64 v27; // x1
  __int64 v28; // x1
  __int64 v29; // x1
  __int64 v30; // x1
  __int64 v31; // x1
  __int64 v32; // x1
  int32_t targetId; // w8
  System_String_array **v34; // x2
  System_String_array **v35; // x3
  System_Boolean_array **v36; // x4
  System_Int32_array **v37; // x5
  System_Int32_array *v38; // x6
  System_Int32_array *v39; // x7
  UnityEngine_GameObject_o *maskImg; // x0
  struct UserGameEntity_o *SelfUserGame; // x0
  UserGameEntity_o **p_userEntity; // x23
  System_String_array **v43; // x2
  System_String_array **v44; // x3
  System_Boolean_array **v45; // x4
  System_Int32_array **v46; // x5
  System_Int32_array *v47; // x6
  System_Int32_array *v48; // x7
  UserGameEntity_o *userEntity; // x0
  int32_t Act; // w0
  struct UserGameEntity_o *v51; // x8
  int32_t actMax; // w8
  int32_t *p_spendNum; // x20
  UILabel_o *itemNameLb; // x0
  UILabel_o *currentNumLb; // x0
  UILabel_o *spendNumLb; // x0
  UILabel_o *itemDetailLb; // x0
  UILabel_o *currentInfoLb; // x24
  System_String_o *v59; // x0
  UILabel_o *spendInfoLb; // x24
  System_String_o *v61; // x0
  const MethodInfo *v62; // x1
  int32_t currentType; // w8
  UnityEngine_Component_o *v64; // x0
  UnityEngine_GameObject_o *v65; // x0
  UnityEngine_GameObject_o *v66; // x0
  WebViewManager_o *v67; // x0
  ItemMaster_o *v68; // x0
  ItemEntity_o *EntityByType; // x0
  ItemEntity_o *v70; // x21
  ItemIconComponent_o *v71; // x0
  UnityEngine_Component_o *v72; // x0
  UnityEngine_GameObject_o *v73; // x0
  WebViewManager_o *v74; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *v75; // x0
  WarEntity_o *v76; // x0
  WarEntity_o *v77; // x22
  int32_t stone; // w24
  UILabel_o *v79; // x21
  Il2CppObject *v80; // x0
  System_String_o *v81; // x0
  UILabel_o *v82; // x21
  System_String_o *v83; // x0
  const MethodInfo *v84; // x1
  System_String_o *v85; // x20
  Il2CppObject *v86; // x0
  System_String_o *v87; // x0
  UILabel_o *v88; // x20
  Il2CppObject *v89; // x21
  System_String_o *v90; // x22
  Il2CppObject *v91; // x23
  Il2CppObject *v92; // x0
  System_String_o *v93; // x0
  bool v94; // cc
  int32_t v95; // w8
  UnityEngine_Component_o *v96; // x0
  UnityEngine_GameObject_o *v97; // x0
  UnityEngine_GameObject_o *v98; // x0
  ItemEntity_o *RecvItemData; // x0
  ItemEntity_o *v100; // x24
  ItemIconComponent_o *v101; // x0
  UnityEngine_Component_o *v102; // x0
  UnityEngine_GameObject_o *v103; // x0
  UILabel_o *v104; // x0
  WebViewManager_o *v105; // x0
  UserItemMaster_o *v106; // x0
  int32_t num; // w27
  UnityEngine_Component_o *itemIconInfo; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *cmdSpellBg; // x0
  UILabel_o *v111; // x22
  System_String_o *v112; // x0
  UILabel_o *v113; // x22
  System_String_o *v114; // x0
  WebViewManager_o *Instance; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // x0
  WarEntity_o *v117; // x0
  CommandSpellEntity_o *v118; // x22
  CommandSpellIconComponent_o *cmdSpellIcon; // x0
  UILabel_o *v120; // x0
  System_Int32_array_array *Values; // x0
  __int64 v122; // x1
  __int64 v123; // x2
  int32_t type; // w8
  System_Int32_array *v125; // x27
  float v126; // s1
  double v127; // d1
  System_String_o *v128; // x23
  Il2CppObject *v129; // x0
  System_String_o *v130; // x0
  UILabel_o *v131; // x23
  Il2CppObject *v132; // x24
  System_String_o *v133; // x25
  Il2CppObject *v134; // x26
  Il2CppObject *v135; // x0
  System_String_o *v136; // x0
  int v137; // w22
  int32_t v138; // w0
  int32_t v139; // w8
  BalanceConfig_c *v140; // x0
  int32_t usrMaxAp; // s2
  float v142; // s2
  float v143; // s0
  double v144; // d1
  int v145; // w0
  int32_t v146; // w0
  int32_t v147; // w8
  int32_t v148; // w9
  System_String_o *v149; // x23
  Il2CppObject *v150; // x0
  System_String_o *v151; // x0
  UILabel_o *v152; // x23
  Il2CppObject *v153; // x25
  System_String_o *v154; // x26
  Il2CppObject *v155; // x27
  Il2CppObject *v156; // x0
  System_String_o *v157; // x0
  int32_t value; // w23
  int32_t v159; // w0
  System_String_o *v160; // x21
  Il2CppObject *v161; // x0
  System_String_o *v162; // x0
  UILabel_o *v163; // x21
  Il2CppObject *v164; // x23
  System_String_o *v165; // x24
  Il2CppObject *v166; // x0
  System_String_o *v167; // x0
  UILabel_o *v168; // x21
  Il2CppObject *v169; // x0
  System_String_o *v170; // x0
  UILabel_o *v171; // x21
  System_String_o *v172; // x0
  int32_t v173; // w8
  System_String_o *v174; // x21
  Il2CppObject *v175; // x0
  System_String_o *v176; // x0
  UILabel_o *v177; // x21
  Il2CppObject *v178; // x22
  System_String_o *v179; // x23
  Il2CppObject *v180; // x0
  System_String_o *v181; // x0
  UILabel_o *v182; // x21
  System_String_o *v183; // x0
  UILabel_o *v184; // x21
  System_String_o *v185; // x0
  bool v186; // w9
  int32_t v187; // [xsp+0h] [xbp-70h]
  int32_t v188; // [xsp+4h] [xbp-6Ch] BYREF
  int32_t recvApNum; // [xsp+8h] [xbp-68h] BYREF
  int32_t apRcvRate; // [xsp+Ch] [xbp-64h] BYREF
  int32_t spendNum; // [xsp+10h] [xbp-60h] BYREF
  int32_t CommandSpell; // [xsp+14h] [xbp-5Ch] BYREF
  UserItemEntity_o *entity; // [xsp+18h] [xbp-58h] BYREF

  if ( (byte_40FD2C6 & 1) == 0 )
  {
    sub_B16FFC(&BalanceConfig_TypeInfo, data);
    sub_B16FFC(&Method_DataManager_GetMasterData_CommandSpellMaster___, v13);
    sub_B16FFC(&Method_DataManager_GetMasterData_ItemMaster___, v14);
    sub_B16FFC(&Method_DataManager_GetMasterData_StoneShopMaster___, v15);
    sub_B16FFC(&Method_DataManager_GetMasterData_UserItemMaster___, v16);
    sub_B16FFC(&Method_DataMasterBase_StoneShopMaster__StoneShopEntity__int__GetEntity__, v17);
    sub_B16FFC(&Method_DataMasterBase_CommandSpellMaster__CommandSpellEntity__int__GetEntity__, v18);
    sub_B16FFC(&int_TypeInfo, v19);
    sub_B16FFC(&LocalizationManager_TypeInfo, v20);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v21);
    sub_B16FFC(&StringLiteral_3107, v22);
    sub_B16FFC(&StringLiteral_1656, v23);
    sub_B16FFC(&StringLiteral_3109, v24);
    sub_B16FFC(&StringLiteral_23433, v25);
    sub_B16FFC(&StringLiteral_746, v26);
    sub_B16FFC(&StringLiteral_14652, v27);
    sub_B16FFC(&StringLiteral_12243, v28);
    sub_B16FFC(&StringLiteral_3440, v29);
    sub_B16FFC(&StringLiteral_1657, v30);
    sub_B16FFC(&StringLiteral_1733, v31);
    sub_B16FFC(&StringLiteral_3108, v32);
    byte_40FD2C6 = 1;
  }
  entity = 0LL;
  CommandSpell = 0;
  if ( !data )
    goto LABEL_128;
  this->fields.currentType = data->fields.recoverType;
  this->fields.recvTarget = data->fields.target;
  targetId = data->fields.targetId;
  this->fields.isEnableSelect = 0;
  this->fields.targetId = targetId;
  this->fields.dialog = dlg;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.dialog,
    (System_Int32_array **)dlg,
    *(System_String_array ***)&needAp,
    (System_String_array **)dlg,
    (System_Boolean_array **)callback,
    (System_Int32_array **)method,
    v6,
    v7);
  this->fields.callbackFunc = callback;
  this->fields.needAp = needAp;
  *(_WORD *)&this->fields.isAp = 1;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.callbackFunc,
    (System_Int32_array **)callback,
    v34,
    v35,
    v36,
    v37,
    v38,
    v39);
  maskImg = this->fields.maskImg;
  if ( !maskImg )
    goto LABEL_128;
  UnityEngine_GameObject__SetActive(maskImg, 0, 0LL);
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  this->fields.userEntity = SelfUserGame;
  p_userEntity = &this->fields.userEntity;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.userEntity,
    (System_Int32_array **)SelfUserGame,
    v43,
    v44,
    v45,
    v46,
    v47,
    v48);
  userEntity = this->fields.userEntity;
  if ( !userEntity )
    goto LABEL_128;
  Act = UserGameEntity__getAct(userEntity, 0LL);
  v51 = this->fields.userEntity;
  this->fields.usrCurrentAp = Act;
  if ( !v51 )
    goto LABEL_128;
  actMax = v51->fields.actMax;
  this->fields.spendNum = 1;
  p_spendNum = &this->fields.spendNum;
  itemNameLb = this->fields.itemNameLb;
  this->fields.usrMaxAp = actMax;
  this->fields.recvApNum = actMax;
  this->fields.apRcvRate = 100;
  if ( !itemNameLb )
    goto LABEL_128;
  UILabel__set_text(itemNameLb, (System_String_o *)StringLiteral_746, 0LL);
  currentNumLb = this->fields.currentNumLb;
  if ( !currentNumLb )
    goto LABEL_128;
  UILabel__set_text(currentNumLb, (System_String_o *)StringLiteral_746, 0LL);
  spendNumLb = this->fields.spendNumLb;
  if ( !spendNumLb )
    goto LABEL_128;
  UILabel__set_text(spendNumLb, (System_String_o *)StringLiteral_746, 0LL);
  itemDetailLb = this->fields.itemDetailLb;
  if ( !itemDetailLb )
    goto LABEL_128;
  UILabel__set_text(itemDetailLb, (System_String_o *)StringLiteral_746, 0LL);
  currentInfoLb = this->fields.currentInfoLb;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v59 = LocalizationManager__Get((System_String_o *)StringLiteral_3440, 0LL);
  if ( !currentInfoLb )
    goto LABEL_128;
  UILabel__set_text(currentInfoLb, v59, 0LL);
  spendInfoLb = this->fields.spendInfoLb;
  v61 = LocalizationManager__Get((System_String_o *)StringLiteral_12243, 0LL);
  if ( !spendInfoLb )
    goto LABEL_128;
  UILabel__set_text(spendInfoLb, v61, 0LL);
  currentType = this->fields.currentType;
  if ( currentType == 1 )
  {
    itemIconInfo = (UnityEngine_Component_o *)this->fields.itemIconInfo;
    if ( !itemIconInfo )
      goto LABEL_128;
    gameObject = UnityEngine_Component__get_gameObject(itemIconInfo, 0LL);
    if ( !gameObject )
      goto LABEL_128;
    UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
    cmdSpellBg = this->fields.cmdSpellBg;
    if ( !cmdSpellBg )
      goto LABEL_128;
    UnityEngine_GameObject__SetActive(cmdSpellBg, 1, 0LL);
    v111 = this->fields.currentInfoLb;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v112 = LocalizationManager__Get((System_String_o *)StringLiteral_3108, 0LL);
    if ( !v111 )
      goto LABEL_128;
    UILabel__set_text(v111, v112, 0LL);
    v113 = this->fields.spendInfoLb;
    v114 = LocalizationManager__Get((System_String_o *)StringLiteral_3109, 0LL);
    if ( !v113 )
      goto LABEL_128;
    UILabel__set_text(v113, v114, 0LL);
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_128;
    MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                          (DataManager_o *)Instance,
                                                                                          (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_CommandSpellMaster___);
    if ( !MasterData_WarQuestSelectionMaster )
      goto LABEL_128;
    v117 = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
             MasterData_WarQuestSelectionMaster,
             this->fields.targetId,
             (const MethodInfo_266F388 *)Method_DataMasterBase_CommandSpellMaster__CommandSpellEntity__int__GetEntity__);
    if ( !v117 )
      goto LABEL_127;
    v118 = (CommandSpellEntity_o *)v117;
    cmdSpellIcon = this->fields.cmdSpellIcon;
    if ( !cmdSpellIcon )
      goto LABEL_128;
    CommandSpellIconComponent__SetData(cmdSpellIcon, this->fields.userEntity, 0LL);
    v120 = this->fields.itemNameLb;
    if ( !v120 )
      goto LABEL_128;
    UILabel__set_text(v120, v118->fields.name, 0LL);
    if ( !*p_userEntity )
      goto LABEL_128;
    CommandSpell = UserGameEntity__getCommandSpell(*p_userEntity, 0LL);
    *p_spendNum = v118->fields.consume;
    Values = CommandSpellEntity__getValues(v118, 0LL);
    if ( !Values )
      goto LABEL_128;
    if ( Values->max_length )
    {
      type = v118->fields.type;
      v125 = Values->m_Items[0];
      if ( type == 3 )
      {
        if ( !v125 )
          goto LABEL_128;
        if ( !v125->max_length )
          goto LABEL_129;
        v126 = (float)((float)v125->m_Items[1] / 1000.0) * 100.0;
        v127 = v126 == INFINITY ? -v126 : v126;
        this->fields.apRcvRate = (int)v127;
        if ( !v125->max_length )
          goto LABEL_129;
        this->fields.recvApNum = UnityEngine_Mathf__CeilToInt(
                                   (float)((float)v125->m_Items[1] / 1000.0) * (float)this->fields.usrMaxAp,
                                   0LL);
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        v128 = LocalizationManager__Get((System_String_o *)StringLiteral_3107, 0LL);
        spendNum = this->fields.spendNum;
        v129 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &spendNum);
        v130 = System_String__Format(v128, v129, 0LL);
        v131 = this->fields.itemDetailLb;
        v132 = (Il2CppObject *)v130;
        v133 = LocalizationManager__Get((System_String_o *)StringLiteral_1733, 0LL);
        apRcvRate = this->fields.apRcvRate;
        v134 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &apRcvRate);
        recvApNum = this->fields.recvApNum;
        v135 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &recvApNum);
        v136 = System_String__Format_43744796(v133, v132, v134, v135, 0LL);
        if ( !v131 )
          goto LABEL_128;
        UILabel__set_text(v131, v136, 0LL);
        type = v118->fields.type;
      }
      if ( type != 4 )
      {
LABEL_120:
        v182 = this->fields.currentNumLb;
        v183 = System_Int32__ToString((int32_t)&CommandSpell, 0LL);
        if ( v182 )
        {
          UILabel__set_text(v182, v183, 0LL);
          v184 = this->fields.spendNumLb;
          v185 = System_Int32__ToString((int)this + 120, 0LL);
          if ( v184 )
          {
            UILabel__set_text(v184, v185, 0LL);
            v94 = CommandSpell < this->fields.spendNum;
            v95 = this->fields.recvApNum + this->fields.usrCurrentAp;
            goto LABEL_123;
          }
        }
        goto LABEL_128;
      }
      if ( !v125 )
        goto LABEL_128;
      if ( v125->max_length )
      {
        v137 = v125->m_Items[1];
        if ( needAp < 1 )
        {
          v138 = *p_spendNum;
        }
        else
        {
          v138 = UnityEngine_Mathf__CeilToInt(
                   fmaxf((float)(needAp - this->fields.usrCurrentAp) / (float)v137, 1.0),
                   0LL);
          this->fields.spendNum = v138;
        }
        this->fields.recvApNum = v138 * v137;
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        v174 = LocalizationManager__Get((System_String_o *)StringLiteral_3107, 0LL);
        spendNum = this->fields.spendNum;
        v175 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &spendNum);
        v176 = System_String__Format(v174, v175, 0LL);
        v177 = this->fields.itemDetailLb;
        v178 = (Il2CppObject *)v176;
        v179 = LocalizationManager__Get((System_String_o *)StringLiteral_1656, 0LL);
        apRcvRate = this->fields.recvApNum;
        v180 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &apRcvRate);
        v181 = System_String__Format_43739268(v179, v178, v180, 0LL);
        if ( !v177 )
          goto LABEL_128;
        UILabel__set_text(v177, v181, 0LL);
        this->fields.isAddAp = 1;
        goto LABEL_120;
      }
    }
LABEL_129:
    sub_B17100(Values, v122, v123);
    sub_B170A0();
  }
  if ( currentType == 3 )
  {
    v96 = (UnityEngine_Component_o *)this->fields.itemIconInfo;
    if ( v96 )
    {
      v97 = UnityEngine_Component__get_gameObject(v96, 0LL);
      if ( v97 )
      {
        UnityEngine_GameObject__SetActive(v97, 1, 0LL);
        v98 = this->fields.cmdSpellBg;
        if ( v98 )
        {
          UnityEngine_GameObject__SetActive(v98, 0, 0LL);
          RecvItemData = RecoverEntity__getRecvItemData(data, 0LL);
          if ( !RecvItemData )
            goto LABEL_127;
          v100 = RecvItemData;
          v101 = this->fields.itemIconInfo;
          if ( v101 )
          {
            ItemIconComponent__SetItemImage_28925112(
              v101,
              v100->fields.imageId,
              v100->fields.bgImageId,
              v100->fields.type,
              0,
              0LL);
            v102 = (UnityEngine_Component_o *)this->fields.itemIconInfo;
            if ( v102 )
            {
              v103 = UnityEngine_Component__get_gameObject(v102, 0LL);
              if ( v103 )
              {
                UnityEngine_GameObject__SetActive(v103, 1, 0LL);
                v104 = this->fields.itemNameLb;
                if ( v104 )
                {
                  UILabel__set_text(v104, v100->fields.name, 0LL);
                  *p_spendNum = 1;
                  v105 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
                  if ( v105 )
                  {
                    v106 = (UserItemMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                 (DataManager_o *)v105,
                                                 (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserItemMaster___);
                    if ( *p_userEntity )
                    {
                      if ( v106 )
                      {
                        if ( UserItemMaster__TryGetEntity(
                               v106,
                               &entity,
                               (*p_userEntity)->fields.userId,
                               this->fields.targetId,
                               0LL) )
                        {
                          if ( !entity )
                            goto LABEL_128;
                          num = entity->fields.num;
                        }
                        else
                        {
                          num = 0;
                        }
                        v139 = v100->fields.type;
                        if ( v139 == 3 )
                        {
                          v140 = BalanceConfig_TypeInfo;
                          if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                            && !BalanceConfig_TypeInfo->_2.cctor_finished )
                          {
                            j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
                            v140 = BalanceConfig_TypeInfo;
                          }
                          usrMaxAp = this->fields.usrMaxAp;
                          this->fields.spendNum = v140->static_fields->SpendApRecvItemNum;
                          v142 = (float)usrMaxAp;
                          v143 = (float)v100->fields.value / 1000.0;
                          v144 = -(float)(v143 * 100.0);
                          if ( (float)(v143 * 100.0) != INFINITY )
                            v144 = (float)(v143 * 100.0);
                          this->fields.apRcvRate = (int)v144;
                          v145 = UnityEngine_Mathf__CeilToInt(v143 * v142, 0LL);
                          this->fields.recvApNum = v145;
                          if ( needAp >= 1 )
                          {
                            v146 = UnityEngine_Mathf__CeilToInt(
                                     fmaxf((float)(needAp - this->fields.usrCurrentAp) / (float)v145, 1.0),
                                     0LL);
                            v147 = this->fields.apRcvRate;
                            v148 = this->fields.recvApNum;
                            this->fields.spendNum = v146;
                            this->fields.apRcvRate = v147 * v146;
                            this->fields.recvApNum = v148 * v146;
                          }
                          v187 = num;
                          if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                            && !LocalizationManager_TypeInfo->_2.cctor_finished )
                          {
                            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                          }
                          v149 = LocalizationManager__Get((System_String_o *)StringLiteral_14652, 0LL);
                          spendNum = this->fields.spendNum;
                          v150 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &spendNum);
                          v151 = System_String__Format(v149, v150, 0LL);
                          v152 = this->fields.itemDetailLb;
                          v153 = (Il2CppObject *)v151;
                          v154 = LocalizationManager__Get((System_String_o *)StringLiteral_1733, 0LL);
                          apRcvRate = this->fields.apRcvRate;
                          v155 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &apRcvRate);
                          recvApNum = this->fields.recvApNum;
                          v156 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &recvApNum);
                          v157 = System_String__Format_43744796(v154, v153, v155, v156, 0LL);
                          if ( !v152 )
                            goto LABEL_128;
                          UILabel__set_text(v152, v157, 0LL);
                          v139 = v100->fields.type;
                          num = v187;
                        }
                        if ( v139 == 4 )
                        {
                          value = v100->fields.value;
                          if ( needAp < 1 )
                          {
                            *p_spendNum = 1;
                          }
                          else
                          {
                            v159 = UnityEngine_Mathf__CeilToInt(
                                     fmaxf((float)(needAp - this->fields.usrCurrentAp) / (float)value, 1.0),
                                     0LL);
                            this->fields.spendNum = v159;
                            value *= v159;
                          }
                          this->fields.recvApNum = value;
                          if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                            && !LocalizationManager_TypeInfo->_2.cctor_finished )
                          {
                            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                          }
                          v160 = LocalizationManager__Get((System_String_o *)StringLiteral_14652, 0LL);
                          spendNum = this->fields.spendNum;
                          v161 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &spendNum);
                          v162 = System_String__Format(v160, v161, 0LL);
                          v163 = this->fields.itemDetailLb;
                          v164 = (Il2CppObject *)v162;
                          v165 = LocalizationManager__Get((System_String_o *)StringLiteral_1657, 0LL);
                          apRcvRate = this->fields.recvApNum;
                          v166 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &apRcvRate);
                          v167 = System_String__Format_43739268(v165, v164, v166, 0LL);
                          if ( !v163 )
                            goto LABEL_128;
                          UILabel__set_text(v163, v167, 0LL);
                          this->fields.isAddAp = 1;
                        }
                        v168 = this->fields.currentNumLb;
                        spendNum = num;
                        v169 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &spendNum);
                        v170 = System_String__Format((System_String_o *)StringLiteral_23433, v169, 0LL);
                        if ( v168 )
                        {
                          UILabel__set_text(v168, v170, 0LL);
                          v171 = this->fields.spendNumLb;
                          v172 = System_Int32__ToString((int)this + 120, 0LL);
                          if ( v171 )
                          {
                            UILabel__set_text(v171, v172, 0LL);
                            v173 = this->fields.recvApNum + this->fields.usrCurrentAp;
                            this->fields.isEnableSelect = num >= this->fields.spendNum;
                            this->fields.recvSum = v173;
                            this->fields.targetId = data->fields.id;
                            goto LABEL_127;
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
LABEL_128:
    sub_B170D4();
  }
  if ( currentType != 2 )
    goto LABEL_127;
  v64 = (UnityEngine_Component_o *)this->fields.itemIconInfo;
  if ( !v64 )
    goto LABEL_128;
  v65 = UnityEngine_Component__get_gameObject(v64, 0LL);
  if ( !v65 )
    goto LABEL_128;
  UnityEngine_GameObject__SetActive(v65, 1, 0LL);
  v66 = this->fields.cmdSpellBg;
  if ( !v66 )
    goto LABEL_128;
  UnityEngine_GameObject__SetActive(v66, 0, 0LL);
  v67 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !v67 )
    goto LABEL_128;
  v68 = (ItemMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                          (DataManager_o *)v67,
                          (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ItemMaster___);
  if ( !v68 )
    goto LABEL_128;
  EntityByType = ItemMaster__GetEntityByType(v68, 2, 0LL);
  if ( !EntityByType )
    goto LABEL_128;
  v70 = EntityByType;
  v71 = this->fields.itemIconInfo;
  if ( !v71 )
    goto LABEL_128;
  ItemIconComponent__SetItemImage_28925112(v71, v70->fields.imageId, v70->fields.bgImageId, v70->fields.type, 0, 0LL);
  v72 = (UnityEngine_Component_o *)this->fields.itemIconInfo;
  if ( !v72 )
    goto LABEL_128;
  v73 = UnityEngine_Component__get_gameObject(v72, 0LL);
  if ( !v73 )
    goto LABEL_128;
  UnityEngine_GameObject__SetActive(v73, 1, 0LL);
  v74 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !v74 )
    goto LABEL_128;
  v75 = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                         (DataManager_o *)v74,
                                                         (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_StoneShopMaster___);
  if ( !v75 )
    goto LABEL_128;
  v76 = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
          v75,
          this->fields.targetId,
          (const MethodInfo_266F388 *)Method_DataMasterBase_StoneShopMaster__StoneShopEntity__int__GetEntity__);
  if ( !this->fields.itemNameLb )
    goto LABEL_128;
  v77 = v76;
  UILabel__set_text(this->fields.itemNameLb, v70->fields.name, 0LL);
  if ( !*p_userEntity )
    goto LABEL_128;
  stone = (*p_userEntity)->fields.stone;
  if ( v77 )
    *p_spendNum = HIDWORD(v77->fields.longName);
  v79 = this->fields.currentNumLb;
  spendNum = stone;
  v80 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &spendNum);
  v81 = System_String__Format((System_String_o *)StringLiteral_23433, v80, 0LL);
  if ( !v79 )
    goto LABEL_128;
  UILabel__set_text(v79, v81, 0LL);
  v82 = this->fields.spendNumLb;
  v83 = System_Int32__ToString((int)this + 120, 0LL);
  if ( !v82 )
    goto LABEL_128;
  UILabel__set_text(v82, v83, 0LL);
  RecoverItemComponent__AttachStoneCountRefreshComponent(this, v84);
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v85 = LocalizationManager__Get((System_String_o *)StringLiteral_14652, 0LL);
  apRcvRate = this->fields.spendNum;
  v86 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &apRcvRate);
  v87 = System_String__Format(v85, v86, 0LL);
  v88 = this->fields.itemDetailLb;
  v89 = (Il2CppObject *)v87;
  v90 = LocalizationManager__Get((System_String_o *)StringLiteral_1733, 0LL);
  recvApNum = this->fields.apRcvRate;
  v91 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &recvApNum);
  v188 = this->fields.recvApNum;
  v92 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v188);
  v93 = System_String__Format_43744796(v90, v89, v91, v92, 0LL);
  if ( !v88 )
    goto LABEL_128;
  UILabel__set_text(v88, v93, 0LL);
  v94 = stone < this->fields.spendNum;
  v95 = this->fields.usrMaxAp + this->fields.usrCurrentAp;
LABEL_123:
  v186 = !v94;
  this->fields.isEnableSelect = v186;
  this->fields.recvSum = v95;
LABEL_127:
  RecoverItemComponent__setEnableSelectItem(this, v62);
}


void __fastcall RecoverItemComponent__setEnableSelectItem(RecoverItemComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *maskImg; // x0

  if ( !this->fields.isEnableSelect )
  {
    maskImg = this->fields.maskImg;
    if ( !maskImg )
      sub_B170D4();
    UnityEngine_GameObject__SetActive(maskImg, 1, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall RecoverItemComponent__setRPRecvItemInfo(
        RecoverItemComponent_o *this,
        RecoverEntity_o *data,
        int32_t needRp,
        RecoverDlgComponent_o *dlg,
        RecoverItemComponent_CallbackFunc_o *callback,
        const MethodInfo *method)
{
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  __int64 v22; // x1
  __int64 v23; // x1
  __int64 v24; // x1
  __int64 v25; // x1
  __int64 v26; // x1
  __int64 v27; // x1
  __int64 v28; // x1
  __int64 v29; // x1
  __int64 v30; // x1
  __int64 v31; // x1
  int32_t targetId; // w8
  System_String_array **v33; // x2
  System_String_array **v34; // x3
  System_Boolean_array **v35; // x4
  System_Int32_array **v36; // x5
  System_Int32_array *v37; // x6
  System_Int32_array *v38; // x7
  UnityEngine_GameObject_o *maskImg; // x0
  struct UserGameEntity_o *SelfUserGame; // x0
  UserGameEntity_o **p_userEntity; // x23
  System_String_array **v42; // x2
  System_String_array **v43; // x3
  System_Boolean_array **v44; // x4
  System_Int32_array **v45; // x5
  System_Int32_array *v46; // x6
  System_Int32_array *v47; // x7
  UserGameEntity_o *userEntity; // x0
  BalanceConfig_c *v49; // x0
  int32_t UerGameRpMax; // w8
  int32_t *p_spendNum; // x20
  UILabel_o *itemNameLb; // x0
  UILabel_o *currentNumLb; // x0
  UILabel_o *spendNumLb; // x0
  UILabel_o *itemDetailLb; // x0
  UILabel_o *currentInfoLb; // x24
  System_String_o *v57; // x0
  UILabel_o *spendInfoLb; // x24
  System_String_o *v59; // x0
  const MethodInfo *v60; // x1
  int32_t currentType; // w8
  UnityEngine_Component_o *v62; // x0
  UnityEngine_GameObject_o *v63; // x0
  UnityEngine_GameObject_o *v64; // x0
  WebViewManager_o *v65; // x0
  ItemMaster_o *v66; // x0
  ItemEntity_o *EntityByType; // x0
  ItemEntity_o *v68; // x21
  ItemIconComponent_o *v69; // x0
  UnityEngine_Component_o *v70; // x0
  UnityEngine_GameObject_o *v71; // x0
  WebViewManager_o *v72; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *v73; // x0
  WarEntity_o *v74; // x0
  WarEntity_o *v75; // x22
  int32_t stone; // w23
  UILabel_o *v77; // x21
  Il2CppObject *v78; // x0
  System_String_o *v79; // x0
  UILabel_o *v80; // x21
  System_String_o *v81; // x0
  const MethodInfo *v82; // x1
  System_String_o *v83; // x20
  Il2CppObject *v84; // x0
  System_String_o *v85; // x0
  UILabel_o *v86; // x20
  Il2CppObject *v87; // x21
  System_String_o *v88; // x22
  Il2CppObject *v89; // x0
  System_String_o *v90; // x0
  bool v91; // cc
  int32_t v92; // w8
  UnityEngine_Component_o *v93; // x0
  UnityEngine_GameObject_o *v94; // x0
  UnityEngine_GameObject_o *v95; // x0
  ItemEntity_o *RecvItemData; // x0
  ItemEntity_o *v97; // x24
  ItemIconComponent_o *v98; // x0
  UnityEngine_Component_o *v99; // x0
  UnityEngine_GameObject_o *v100; // x0
  UILabel_o *v101; // x0
  WebViewManager_o *v102; // x0
  UserItemMaster_o *v103; // x0
  int32_t num; // w26
  UnityEngine_Component_o *itemIconInfo; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *cmdSpellBg; // x0
  UILabel_o *v108; // x22
  System_String_o *v109; // x0
  UILabel_o *v110; // x22
  System_String_o *v111; // x0
  WebViewManager_o *Instance; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // x0
  WarEntity_o *v114; // x0
  CommandSpellEntity_o *v115; // x22
  CommandSpellIconComponent_o *cmdSpellIcon; // x0
  UILabel_o *v117; // x0
  System_Int32_array_array *Values; // x0
  __int64 v119; // x1
  __int64 v120; // x2
  System_Int32_array *v121; // x8
  int v122; // w22
  int32_t v123; // w0
  int32_t value; // w23
  int32_t v125; // w0
  System_String_o *v126; // x21
  Il2CppObject *v127; // x0
  System_String_o *v128; // x0
  UILabel_o *v129; // x21
  Il2CppObject *v130; // x23
  System_String_o *v131; // x24
  Il2CppObject *v132; // x0
  System_String_o *v133; // x0
  UILabel_o *v134; // x21
  Il2CppObject *v135; // x0
  System_String_o *v136; // x0
  UILabel_o *v137; // x21
  System_String_o *v138; // x0
  int32_t v139; // w8
  System_String_o *v140; // x21
  Il2CppObject *v141; // x0
  System_String_o *v142; // x0
  UILabel_o *v143; // x21
  Il2CppObject *v144; // x22
  System_String_o *v145; // x23
  Il2CppObject *v146; // x0
  System_String_o *v147; // x0
  UILabel_o *v148; // x21
  System_String_o *v149; // x0
  UILabel_o *v150; // x21
  System_String_o *v151; // x0
  bool v152; // w9
  int32_t v153; // [xsp+8h] [xbp-58h] BYREF
  int32_t recvRpNum; // [xsp+Ch] [xbp-54h] BYREF
  int32_t spendNum; // [xsp+10h] [xbp-50h] BYREF
  int32_t CommandSpell; // [xsp+14h] [xbp-4Ch] BYREF
  UserItemEntity_o *entity; // [xsp+18h] [xbp-48h] BYREF

  if ( (byte_40FD2C7 & 1) == 0 )
  {
    sub_B16FFC(&BalanceConfig_TypeInfo, data);
    sub_B16FFC(&Method_DataManager_GetMasterData_CommandSpellMaster___, v13);
    sub_B16FFC(&Method_DataManager_GetMasterData_ItemMaster___, v14);
    sub_B16FFC(&Method_DataManager_GetMasterData_StoneShopMaster___, v15);
    sub_B16FFC(&Method_DataManager_GetMasterData_UserItemMaster___, v16);
    sub_B16FFC(&Method_DataMasterBase_StoneShopMaster__StoneShopEntity__int__GetEntity__, v17);
    sub_B16FFC(&Method_DataMasterBase_CommandSpellMaster__CommandSpellEntity__int__GetEntity__, v18);
    sub_B16FFC(&int_TypeInfo, v19);
    sub_B16FFC(&LocalizationManager_TypeInfo, v20);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v21);
    sub_B16FFC(&StringLiteral_3107, v22);
    sub_B16FFC(&StringLiteral_3109, v23);
    sub_B16FFC(&StringLiteral_23433, v24);
    sub_B16FFC(&StringLiteral_746, v25);
    sub_B16FFC(&StringLiteral_14652, v26);
    sub_B16FFC(&StringLiteral_12243, v27);
    sub_B16FFC(&StringLiteral_3440, v28);
    sub_B16FFC(&StringLiteral_11224, v29);
    sub_B16FFC(&StringLiteral_11226, v30);
    sub_B16FFC(&StringLiteral_3108, v31);
    byte_40FD2C7 = 1;
  }
  entity = 0LL;
  CommandSpell = 0;
  if ( !data )
    goto LABEL_100;
  this->fields.currentType = data->fields.recoverType;
  this->fields.recvTarget = data->fields.target;
  targetId = data->fields.targetId;
  this->fields.isEnableSelect = 0;
  this->fields.targetId = targetId;
  this->fields.dialog = dlg;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.dialog,
    (System_Int32_array **)dlg,
    *(System_String_array ***)&needRp,
    (System_String_array **)dlg,
    (System_Boolean_array **)callback,
    (System_Int32_array **)method,
    v6,
    v7);
  this->fields.callbackFunc = callback;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.callbackFunc,
    (System_Int32_array **)callback,
    v33,
    v34,
    v35,
    v36,
    v37,
    v38);
  maskImg = this->fields.maskImg;
  if ( !maskImg )
    goto LABEL_100;
  UnityEngine_GameObject__SetActive(maskImg, 0, 0LL);
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  this->fields.userEntity = SelfUserGame;
  p_userEntity = &this->fields.userEntity;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.userEntity,
    (System_Int32_array **)SelfUserGame,
    v42,
    v43,
    v44,
    v45,
    v46,
    v47);
  userEntity = this->fields.userEntity;
  if ( !userEntity )
    goto LABEL_100;
  this->fields.usrCurrentRp = UserGameEntity__getRp(userEntity, 0LL);
  v49 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v49 = BalanceConfig_TypeInfo;
  }
  UerGameRpMax = v49->static_fields->UerGameRpMax;
  this->fields.spendNum = 1;
  p_spendNum = &this->fields.spendNum;
  itemNameLb = this->fields.itemNameLb;
  this->fields.isAp = 0;
  this->fields.usrMaxRp = UerGameRpMax;
  this->fields.recvRpNum = UerGameRpMax;
  if ( !itemNameLb )
    goto LABEL_100;
  UILabel__set_text(itemNameLb, (System_String_o *)StringLiteral_746, 0LL);
  currentNumLb = this->fields.currentNumLb;
  if ( !currentNumLb )
    goto LABEL_100;
  UILabel__set_text(currentNumLb, (System_String_o *)StringLiteral_746, 0LL);
  spendNumLb = this->fields.spendNumLb;
  if ( !spendNumLb )
    goto LABEL_100;
  UILabel__set_text(spendNumLb, (System_String_o *)StringLiteral_746, 0LL);
  itemDetailLb = this->fields.itemDetailLb;
  if ( !itemDetailLb )
    goto LABEL_100;
  UILabel__set_text(itemDetailLb, (System_String_o *)StringLiteral_746, 0LL);
  currentInfoLb = this->fields.currentInfoLb;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v57 = LocalizationManager__Get((System_String_o *)StringLiteral_3440, 0LL);
  if ( !currentInfoLb )
    goto LABEL_100;
  UILabel__set_text(currentInfoLb, v57, 0LL);
  spendInfoLb = this->fields.spendInfoLb;
  v59 = LocalizationManager__Get((System_String_o *)StringLiteral_12243, 0LL);
  if ( !spendInfoLb )
    goto LABEL_100;
  UILabel__set_text(spendInfoLb, v59, 0LL);
  currentType = this->fields.currentType;
  if ( currentType == 1 )
  {
    itemIconInfo = (UnityEngine_Component_o *)this->fields.itemIconInfo;
    if ( itemIconInfo )
    {
      gameObject = UnityEngine_Component__get_gameObject(itemIconInfo, 0LL);
      if ( gameObject )
      {
        UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
        cmdSpellBg = this->fields.cmdSpellBg;
        if ( cmdSpellBg )
        {
          UnityEngine_GameObject__SetActive(cmdSpellBg, 1, 0LL);
          v108 = this->fields.currentInfoLb;
          if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          }
          v109 = LocalizationManager__Get((System_String_o *)StringLiteral_3108, 0LL);
          if ( v108 )
          {
            UILabel__set_text(v108, v109, 0LL);
            v110 = this->fields.spendInfoLb;
            v111 = LocalizationManager__Get((System_String_o *)StringLiteral_3109, 0LL);
            if ( v110 )
            {
              UILabel__set_text(v110, v111, 0LL);
              Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
              if ( Instance )
              {
                MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_((DataManager_o *)Instance, (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_CommandSpellMaster___);
                if ( MasterData_WarQuestSelectionMaster )
                {
                  v114 = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                           MasterData_WarQuestSelectionMaster,
                           this->fields.targetId,
                           (const MethodInfo_266F388 *)Method_DataMasterBase_CommandSpellMaster__CommandSpellEntity__int__GetEntity__);
                  if ( !v114 )
                    goto LABEL_99;
                  v115 = (CommandSpellEntity_o *)v114;
                  cmdSpellIcon = this->fields.cmdSpellIcon;
                  if ( cmdSpellIcon )
                  {
                    CommandSpellIconComponent__SetData(cmdSpellIcon, this->fields.userEntity, 0LL);
                    v117 = this->fields.itemNameLb;
                    if ( v117 )
                    {
                      UILabel__set_text(v117, v115->fields.name, 0LL);
                      if ( *p_userEntity )
                      {
                        CommandSpell = UserGameEntity__getCommandSpell(*p_userEntity, 0LL);
                        *p_spendNum = v115->fields.consume;
                        Values = CommandSpellEntity__getValues(v115, 0LL);
                        if ( Values )
                        {
                          if ( !Values->max_length )
                            goto LABEL_101;
                          v121 = Values->m_Items[0];
                          if ( !v121 )
                            goto LABEL_100;
                          if ( !v121->max_length )
                          {
LABEL_101:
                            sub_B17100(Values, v119, v120);
                            sub_B170A0();
                          }
                          v122 = v121->m_Items[1];
                          if ( needRp < 1 )
                          {
                            v123 = *p_spendNum;
                          }
                          else
                          {
                            v123 = UnityEngine_Mathf__CeilToInt(
                                     fmaxf((float)(needRp - this->fields.usrCurrentRp) / (float)v122, 1.0),
                                     0LL);
                            this->fields.spendNum = v123;
                          }
                          this->fields.recvRpNum = v123 * v122;
                          if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                            && !LocalizationManager_TypeInfo->_2.cctor_finished )
                          {
                            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                          }
                          v140 = LocalizationManager__Get((System_String_o *)StringLiteral_3107, 0LL);
                          spendNum = this->fields.spendNum;
                          v141 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &spendNum);
                          v142 = System_String__Format(v140, v141, 0LL);
                          v143 = this->fields.itemDetailLb;
                          v144 = (Il2CppObject *)v142;
                          v145 = LocalizationManager__Get((System_String_o *)StringLiteral_11224, 0LL);
                          recvRpNum = this->fields.recvRpNum;
                          v146 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &recvRpNum);
                          v147 = System_String__Format_43739268(v145, v144, v146, 0LL);
                          if ( v143 )
                          {
                            UILabel__set_text(v143, v147, 0LL);
                            v148 = this->fields.currentNumLb;
                            v149 = System_Int32__ToString((int32_t)&CommandSpell, 0LL);
                            if ( v148 )
                            {
                              UILabel__set_text(v148, v149, 0LL);
                              v150 = this->fields.spendNumLb;
                              v151 = System_Int32__ToString((int)this + 120, 0LL);
                              if ( v150 )
                              {
                                UILabel__set_text(v150, v151, 0LL);
                                v91 = CommandSpell < this->fields.spendNum;
                                v92 = this->fields.recvRpNum + this->fields.usrCurrentRp;
                                goto LABEL_95;
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
    goto LABEL_100;
  }
  if ( currentType == 3 )
  {
    v93 = (UnityEngine_Component_o *)this->fields.itemIconInfo;
    if ( v93 )
    {
      v94 = UnityEngine_Component__get_gameObject(v93, 0LL);
      if ( v94 )
      {
        UnityEngine_GameObject__SetActive(v94, 1, 0LL);
        v95 = this->fields.cmdSpellBg;
        if ( v95 )
        {
          UnityEngine_GameObject__SetActive(v95, 0, 0LL);
          RecvItemData = RecoverEntity__getRecvItemData(data, 0LL);
          if ( !RecvItemData )
            goto LABEL_99;
          v97 = RecvItemData;
          v98 = this->fields.itemIconInfo;
          if ( v98 )
          {
            ItemIconComponent__SetItemImage_28925112(
              v98,
              v97->fields.imageId,
              v97->fields.bgImageId,
              v97->fields.type,
              0,
              0LL);
            v99 = (UnityEngine_Component_o *)this->fields.itemIconInfo;
            if ( v99 )
            {
              v100 = UnityEngine_Component__get_gameObject(v99, 0LL);
              if ( v100 )
              {
                UnityEngine_GameObject__SetActive(v100, 1, 0LL);
                v101 = this->fields.itemNameLb;
                if ( v101 )
                {
                  UILabel__set_text(v101, v97->fields.name, 0LL);
                  v102 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
                  if ( v102 )
                  {
                    v103 = (UserItemMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                 (DataManager_o *)v102,
                                                 (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserItemMaster___);
                    if ( *p_userEntity )
                    {
                      if ( v103 )
                      {
                        UserItemMaster__TryGetEntity(
                          v103,
                          &entity,
                          (*p_userEntity)->fields.userId,
                          this->fields.targetId,
                          0LL);
                        this->fields.spendNum = 1;
                        if ( entity )
                          num = entity->fields.num;
                        else
                          num = 0;
                        value = v97->fields.value;
                        if ( needRp < 1 )
                        {
                          *p_spendNum = 1;
                        }
                        else
                        {
                          v125 = UnityEngine_Mathf__CeilToInt(
                                   fmaxf((float)(needRp - this->fields.usrCurrentRp) / (float)value, 1.0),
                                   0LL);
                          this->fields.spendNum = v125;
                          value *= v125;
                        }
                        this->fields.recvRpNum = value;
                        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                          && !LocalizationManager_TypeInfo->_2.cctor_finished )
                        {
                          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                        }
                        v126 = LocalizationManager__Get((System_String_o *)StringLiteral_14652, 0LL);
                        spendNum = this->fields.spendNum;
                        v127 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &spendNum);
                        v128 = System_String__Format(v126, v127, 0LL);
                        v129 = this->fields.itemDetailLb;
                        v130 = (Il2CppObject *)v128;
                        v131 = LocalizationManager__Get((System_String_o *)StringLiteral_11226, 0LL);
                        recvRpNum = this->fields.recvRpNum;
                        v132 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &recvRpNum);
                        v133 = System_String__Format_43739268(v131, v130, v132, 0LL);
                        if ( v129 )
                        {
                          UILabel__set_text(v129, v133, 0LL);
                          v134 = this->fields.currentNumLb;
                          v153 = num;
                          v135 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v153);
                          v136 = System_String__Format((System_String_o *)StringLiteral_23433, v135, 0LL);
                          if ( v134 )
                          {
                            UILabel__set_text(v134, v136, 0LL);
                            v137 = this->fields.spendNumLb;
                            v138 = System_Int32__ToString((int)this + 120, 0LL);
                            if ( v137 )
                            {
                              UILabel__set_text(v137, v138, 0LL);
                              v139 = this->fields.recvRpNum + this->fields.usrCurrentRp;
                              this->fields.isEnableSelect = num >= this->fields.spendNum;
                              this->fields.recvSum = v139;
                              this->fields.targetId = data->fields.id;
                              goto LABEL_99;
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
    goto LABEL_100;
  }
  if ( currentType != 2 )
    goto LABEL_99;
  v62 = (UnityEngine_Component_o *)this->fields.itemIconInfo;
  if ( !v62 )
    goto LABEL_100;
  v63 = UnityEngine_Component__get_gameObject(v62, 0LL);
  if ( !v63 )
    goto LABEL_100;
  UnityEngine_GameObject__SetActive(v63, 1, 0LL);
  v64 = this->fields.cmdSpellBg;
  if ( !v64 )
    goto LABEL_100;
  UnityEngine_GameObject__SetActive(v64, 0, 0LL);
  v65 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !v65 )
    goto LABEL_100;
  v66 = (ItemMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                          (DataManager_o *)v65,
                          (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ItemMaster___);
  if ( !v66 )
    goto LABEL_100;
  EntityByType = ItemMaster__GetEntityByType(v66, 2, 0LL);
  if ( !EntityByType )
    goto LABEL_100;
  v68 = EntityByType;
  v69 = this->fields.itemIconInfo;
  if ( !v69 )
    goto LABEL_100;
  ItemIconComponent__SetItemImage_28925112(v69, v68->fields.imageId, v68->fields.bgImageId, v68->fields.type, 0, 0LL);
  v70 = (UnityEngine_Component_o *)this->fields.itemIconInfo;
  if ( !v70 )
    goto LABEL_100;
  v71 = UnityEngine_Component__get_gameObject(v70, 0LL);
  if ( !v71 )
    goto LABEL_100;
  UnityEngine_GameObject__SetActive(v71, 1, 0LL);
  v72 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !v72 )
    goto LABEL_100;
  v73 = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                         (DataManager_o *)v72,
                                                         (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_StoneShopMaster___);
  if ( !v73 )
    goto LABEL_100;
  v74 = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
          v73,
          this->fields.targetId,
          (const MethodInfo_266F388 *)Method_DataMasterBase_StoneShopMaster__StoneShopEntity__int__GetEntity__);
  if ( !this->fields.itemNameLb )
    goto LABEL_100;
  v75 = v74;
  UILabel__set_text(this->fields.itemNameLb, v68->fields.name, 0LL);
  if ( !*p_userEntity )
    goto LABEL_100;
  stone = (*p_userEntity)->fields.stone;
  if ( v75 )
    *p_spendNum = HIDWORD(v75->fields.longName);
  v77 = this->fields.currentNumLb;
  spendNum = stone;
  v78 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &spendNum);
  v79 = System_String__Format((System_String_o *)StringLiteral_23433, v78, 0LL);
  if ( !v77 )
    goto LABEL_100;
  UILabel__set_text(v77, v79, 0LL);
  v80 = this->fields.spendNumLb;
  v81 = System_Int32__ToString((int)this + 120, 0LL);
  if ( !v80 )
    goto LABEL_100;
  UILabel__set_text(v80, v81, 0LL);
  RecoverItemComponent__AttachStoneCountRefreshComponent(this, v82);
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v83 = LocalizationManager__Get((System_String_o *)StringLiteral_14652, 0LL);
  recvRpNum = this->fields.spendNum;
  v84 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &recvRpNum);
  v85 = System_String__Format(v83, v84, 0LL);
  v86 = this->fields.itemDetailLb;
  v87 = (Il2CppObject *)v85;
  v88 = LocalizationManager__Get((System_String_o *)StringLiteral_11226, 0LL);
  v153 = this->fields.recvRpNum;
  v89 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v153);
  v90 = System_String__Format_43739268(v88, v87, v89, 0LL);
  if ( !v86 )
LABEL_100:
    sub_B170D4();
  UILabel__set_text(v86, v90, 0LL);
  v91 = stone < this->fields.spendNum;
  v92 = this->fields.recvRpNum + this->fields.usrCurrentRp;
LABEL_95:
  v152 = !v91;
  this->fields.isEnableSelect = v152;
  this->fields.recvSum = v92;
LABEL_99:
  RecoverItemComponent__setEnableSelectItem(this, v60);
}


void __fastcall RecoverItemComponent__setRequestInfo(RecoverItemComponent_o *this, const MethodInfo *method)
{
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  WebViewManager_o *Instance; // x0
  __int64 v19; // x1
  TerminalSceneComponent_c *v20; // x0
  struct TerminalSceneComponent_o *mInstance; // x8
  ScrPlayerStatus_o *mPlayerStatus; // x0
  RecoverItemComponent_CallbackFunc_o *callbackFunc; // x20
  CommonUI_o *v24; // x19
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x3
  __int64 v28; // x4
  System_String_o *v29; // x20
  RecoverItemComponent___c_c *v30; // x8
  struct RecoverItemComponent___c_StaticFields *static_fields; // x9
  System_Action_o *_9__43_0; // x22
  System_String_o *v33; // x21
  Il2CppObject *v34; // x23
  struct RecoverItemComponent___c_StaticFields *v35; // x0
  System_String_array **v36; // x2
  System_String_array **v37; // x3
  System_Boolean_array **v38; // x4
  System_Int32_array **v39; // x5
  System_Int32_array *v40; // x6
  System_Int32_array *v41; // x7

  if ( (byte_40FD2CC & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, method);
    sub_B16FFC(&Method_DataManager_GetMasterData_EventMaster___, v9);
    sub_B16FFC(&LocalizationManager_TypeInfo, v10);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v12);
    sub_B16FFC(&TerminalSceneComponent_TypeInfo, v13);
    sub_B16FFC(&Method_RecoverItemComponent___c__setRequestInfo_b__43_0__, v14);
    sub_B16FFC(&RecoverItemComponent___c_TypeInfo, v15);
    sub_B16FFC(&StringLiteral_11227, v16);
    sub_B16FFC(&StringLiteral_1, v17);
    byte_40FD2CC = 1;
  }
  if ( this->fields.recvTarget != 2 )
    goto LABEL_16;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_32;
  DataManager__GetMasterData_WarQuestSelectionMaster_(
    (DataManager_o *)Instance,
    (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_EventMaster___);
  if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  }
  if ( !byte_40F6042 )
  {
    sub_B16FFC(&TerminalSceneComponent_TypeInfo, v19);
    byte_40F6042 = 1;
  }
  v20 = TerminalSceneComponent_TypeInfo;
  if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    v20 = TerminalSceneComponent_TypeInfo;
  }
  mInstance = v20->static_fields->mInstance;
  if ( !mInstance || (mPlayerStatus = mInstance->fields.mPlayerStatus) == 0LL )
LABEL_32:
    sub_B170D4();
  if ( !ScrPlayerStatus__IsBPActive(mPlayerStatus, 0LL) )
  {
    v24 = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v29 = LocalizationManager__Get((System_String_o *)StringLiteral_11227, 0LL);
    v30 = RecoverItemComponent___c_TypeInfo;
    if ( (BYTE3(RecoverItemComponent___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !RecoverItemComponent___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(RecoverItemComponent___c_TypeInfo);
      v30 = RecoverItemComponent___c_TypeInfo;
    }
    static_fields = v30->static_fields;
    _9__43_0 = static_fields->__9__43_0;
    v33 = (System_String_o *)StringLiteral_1;
    if ( !_9__43_0 )
    {
      if ( (BYTE3(v30->vtable._0_Equals.methodPtr) & 4) != 0 && !v30->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v30);
        static_fields = RecoverItemComponent___c_TypeInfo->static_fields;
      }
      v34 = (Il2CppObject *)static_fields->__9;
      _9__43_0 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v25, v26, v27, v28);
      System_Action___ctor(_9__43_0, v34, Method_RecoverItemComponent___c__setRequestInfo_b__43_0__, 0LL);
      v35 = RecoverItemComponent___c_TypeInfo->static_fields;
      v35->__9__43_0 = _9__43_0;
      sub_B16F98(
        (BattleServantConfConponent_o *)&v35->__9__43_0,
        (System_Int32_array **)_9__43_0,
        v36,
        v37,
        v38,
        v39,
        v40,
        v41);
    }
    if ( v24 )
    {
      CommonUI__OpenNotificationDialog(v24, v33, v29, _9__43_0, -1, 0, 0, 0, 1, 0, 1, 0, 0LL, 0LL);
      return;
    }
    goto LABEL_32;
  }
LABEL_16:
  callbackFunc = this->fields.callbackFunc;
  if ( callbackFunc )
  {
    this->fields.callbackFunc = 0LL;
    sub_B16F98((BattleServantConfConponent_o *)&this->fields.callbackFunc, 0LL, v2, v3, v4, v5, v6, v7);
    RecoverItemComponent_CallbackFunc__Invoke(
      callbackFunc,
      this->fields.currentType,
      this->fields.targetId,
      this->fields.spendNum,
      0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall RecoverItemComponent__spendItemDlg(RecoverItemComponent_o *this, bool isRes, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  CommonUI_o *Instance; // x0
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x3
  __int64 v11; // x4
  CommonUI_o *v12; // x21
  System_Action_o *v13; // x20

  if ( (byte_40FD2CA & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, isRes);
    sub_B16FFC(&Method_RecoverItemComponent_setRequestInfo__, v5);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6);
    byte_40FD2CA = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v12 = Instance;
  if ( isRes )
  {
    v13 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v8, v9, v10, v11);
    System_Action___ctor(v13, (Il2CppObject *)this, Method_RecoverItemComponent_setRequestInfo__, 0LL);
    if ( v12 )
    {
      CommonUI__CloseConfirmDialog_18237824(v12, v13, 0LL);
      return;
    }
LABEL_8:
    sub_B170D4();
  }
  if ( !Instance )
    goto LABEL_8;
  CommonUI__CloseConfirmDialog(Instance, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall RecoverItemComponent_CallbackFunc___ctor(
        RecoverItemComponent_CallbackFunc_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  struct BattleServantClassBoardSkillEffectListComponent_o *v8; // x8
  BattleServantConfConponent_o *p_method; // x0

  v8 = **(struct BattleServantClassBoardSkillEffectListComponent_o ***)&method;
  *(_QWORD *)&this->fields.method = object;
  p_method = (BattleServantConfConponent_o *)&this->fields.method;
  p_method->monitor = *(void **)&method;
  p_method[-1].fields.classBoardSkillObj = v8;
  sub_B16F98(
    p_method,
    (System_Int32_array **)object,
    *(System_String_array ***)&method,
    (System_String_array **)a4,
    v4,
    v5,
    v6,
    v7);
}


// local variable allocation has failed, the output may be wrong!
System_IAsyncResult_o *__fastcall RecoverItemComponent_CallbackFunc__BeginInvoke(
        RecoverItemComponent_CallbackFunc_o *this,
        int32_t type,
        int32_t id,
        int32_t num,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v10; // x1
  __int64 v12[4]; // [xsp+0h] [xbp-50h] BYREF
  int32_t v13; // [xsp+24h] [xbp-2Ch] BYREF
  int32_t v14; // [xsp+28h] [xbp-28h] BYREF
  int32_t v15; // [xsp+2Ch] [xbp-24h] BYREF

  v15 = type;
  v13 = num;
  v14 = id;
  if ( (byte_40F741E & 1) == 0 )
  {
    sub_B16FFC(&int_TypeInfo, *(_QWORD *)&type);
    sub_B16FFC(&RecoverType_Type_TypeInfo, v10);
    byte_40F741E = 1;
  }
  v12[3] = 0LL;
  v12[0] = j_il2cpp_value_box_0(RecoverType_Type_TypeInfo, &v15);
  v12[1] = j_il2cpp_value_box_0(int_TypeInfo, &v14);
  v12[2] = j_il2cpp_value_box_0(int_TypeInfo, &v13);
  return (System_IAsyncResult_o *)sub_B16FA0(this, v12, callback, object);
}


void __fastcall RecoverItemComponent_CallbackFunc__EndInvoke(
        RecoverItemComponent_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B16FA4(result, 0LL, method);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall RecoverItemComponent_CallbackFunc__Invoke(
        RecoverItemComponent_CallbackFunc_o *this,
        int32_t type,
        int32_t id,
        int32_t num,
        const MethodInfo *method)
{
  __int64 v5; // x8
  __int64 v9; // x26
  RecoverItemComponent_CallbackFunc_o **v10; // x27
  __int64 v11; // x28
  unsigned int v12; // w25
  __int64 class_0; // x0
  __int64 v14; // x8
  unsigned int v15; // w24
  unsigned __int64 v16; // x10
  _DWORD *v17; // x11
  __int64 v18; // x0
  __int64 v19; // x0
  __int64 v20; // x0
  void (__fastcall **v21)(__int64 *, _QWORD, _QWORD, _QWORD, _QWORD); // x0
  RecoverItemComponent_CallbackFunc_o *v22; // x8
  __int64 *v23; // x23
  __int64 v24; // x24
  void (__fastcall *v25)(unsigned int *, _QWORD, _QWORD, __int64); // x25
  char v26; // w25
  char v27; // w0
  unsigned int v28; // w25
  __int64 v29; // x8
  __int64 v30; // x1
  __int64 v31; // x2
  unsigned __int64 v32; // x10
  _DWORD *v33; // x11
  unsigned int v34; // [xsp+4h] [xbp-5Ch] BYREF
  RecoverItemComponent_CallbackFunc_o *v35; // [xsp+8h] [xbp-58h] BYREF

  v35 = this;
  v34 = type;
  v5 = *(_QWORD *)&this[1].fields.method_ptr;
  if ( !v5 )
  {
    v10 = &v35;
    v9 = 1LL;
    goto LABEL_5;
  }
  v9 = *(_QWORD *)(v5 + 24);
  if ( v9 )
  {
    v10 = (RecoverItemComponent_CallbackFunc_o **)(v5 + 32);
LABEL_5:
    v11 = 0LL;
    while ( 1 )
    {
      v22 = v10[v11];
      v23 = *(__int64 **)&v22->fields.method;
      v24 = *(_QWORD *)&v22->fields.extra_arg;
      v25 = *(void (__fastcall **)(unsigned int *, _QWORD, _QWORD, __int64))&v22->fields.method_ptr;
      if ( *(__int16 *)(v24 + 72) == -1 )
        sub_B170B8(*(_QWORD *)&v22->fields.extra_arg, *(_QWORD *)&type, *(_QWORD *)&id);
      if ( (sub_B1702C(v24) & 1) == 0 )
        break;
      if ( *(_BYTE *)(v24 + 74) != 3 )
        goto LABEL_36;
      v25((unsigned int *)v34, (unsigned int)id, (unsigned int)num, v24);
LABEL_38:
      if ( ++v11 == v9 )
        return;
    }
    if ( !v23 )
    {
      v25(&v34 - 4, (unsigned int)id, (unsigned int)num, v24);
      goto LABEL_38;
    }
    if ( *(__int16 *)(v24 + 72) != -1 && (*(_BYTE *)(*v23 + 277) & 1) == 0 && this->fields.m_target )
    {
      v26 = sub_B17024(v24);
      v27 = sub_B17428(v24);
      if ( (v26 & 1) != 0 )
      {
        v28 = v34;
        if ( (v27 & 1) != 0 )
        {
          v29 = *v23;
          v30 = *(_QWORD *)(v24 + 24);
          v31 = *(unsigned __int16 *)(v24 + 72);
          if ( *(_WORD *)(*v23 + 298) )
          {
            v32 = 0LL;
            v33 = (_DWORD *)(*(_QWORD *)(v29 + 176) + 8LL);
            while ( *((_QWORD *)v33 - 1) != v30 )
            {
              ++v32;
              v33 += 4;
              if ( v32 >= *(unsigned __int16 *)(*v23 + 298) )
                goto LABEL_35;
            }
            v20 = v29 + 16LL * (*v33 + (int)v31) + 312;
          }
          else
          {
LABEL_35:
            v20 = sub_AAFEF8(v23, v30, v31);
          }
          v19 = *(_QWORD *)(v20 + 8);
        }
        else
        {
          v19 = *(_QWORD *)(*v23 + 16LL * *(unsigned __int16 *)(v24 + 72) + 320);
        }
        v21 = (void (__fastcall **)(__int64 *, _QWORD, _QWORD, _QWORD, _QWORD))sub_B170AC(v19, v24);
        (*v21)(v23, v28, (unsigned int)id, (unsigned int)num, v21);
      }
      else
      {
        v12 = *(unsigned __int16 *)(v24 + 72);
        if ( (v27 & 1) != 0 )
        {
          class_0 = j_il2cpp_method_get_class_0(v24);
          v14 = *v23;
          v15 = v34;
          if ( *(_WORD *)(*v23 + 298) )
          {
            v16 = 0LL;
            v17 = (_DWORD *)(*(_QWORD *)(v14 + 176) + 8LL);
            while ( *((_QWORD *)v17 - 1) != class_0 )
            {
              ++v16;
              v17 += 4;
              if ( v16 >= *(unsigned __int16 *)(*v23 + 298) )
                goto LABEL_11;
            }
            v18 = v14 + 16LL * (int)(*v17 + v12) + 312;
          }
          else
          {
LABEL_11:
            v18 = sub_AAFEF8(v23, class_0, v12);
          }
          (*(void (__fastcall **)(__int64 *, _QWORD, _QWORD, _QWORD, _QWORD))v18)(
            v23,
            v15,
            (unsigned int)id,
            (unsigned int)num,
            *(_QWORD *)(v18 + 8));
        }
        else
        {
          (*(void (__fastcall **)(__int64 *, _QWORD, _QWORD, _QWORD, _QWORD))(*v23
                                                                            + 16LL * *(unsigned __int16 *)(v24 + 72)
                                                                            + 312))(
            v23,
            v34,
            (unsigned int)id,
            (unsigned int)num,
            *(_QWORD *)(*v23 + 16LL * *(unsigned __int16 *)(v24 + 72) + 320));
        }
      }
      goto LABEL_38;
    }
LABEL_36:
    ((void (__fastcall *)(__int64 *, _QWORD, _QWORD, _QWORD, __int64))v25)(
      v23,
      v34,
      (unsigned int)id,
      (unsigned int)num,
      v24);
    goto LABEL_38;
  }
}


void __fastcall RecoverItemComponent___c___cctor(const MethodInfo *method)
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

  if ( (byte_40F741C & 1) == 0 )
  {
    sub_B16FFC(&RecoverItemComponent___c_TypeInfo, v1);
    byte_40F741C = 1;
  }
  v5 = (Il2CppObject *)sub_B170CC(RecoverItemComponent___c_TypeInfo, v1, v2, v3, v4);
  System_Object___ctor(v5, 0LL);
  static_fields = (BattleServantConfConponent_o *)RecoverItemComponent___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v5;
  sub_B16F98(static_fields, (System_Int32_array **)v5, v7, v8, v9, v10, v11, v12);
}


void __fastcall RecoverItemComponent___c___ctor(RecoverItemComponent___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall RecoverItemComponent___c___setRequestInfo_b__43_0(
        RecoverItemComponent___c_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x1
  CommonUI_o *Instance; // x0
  AvalonSceneManager_o *v4; // x0

  if ( (byte_40F741D & 1) == 0 )
  {
    sub_B16FFC(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, method);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v2);
    byte_40F741D = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance
    || (CommonUI__CloseRecoverItemListDialog(Instance, 0LL),
        (v4 = (AvalonSceneManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__)) == 0LL) )
  {
    sub_B170D4();
  }
  AvalonSceneManager__transitionSceneRefresh(v4, 34, 1, 0LL, 0, 0LL);
}