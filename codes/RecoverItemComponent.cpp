void __fastcall RecoverItemComponent___cctor(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_4217B67 & 1) == 0 )
  {
    sub_B0D8A4(&RecoverItemComponent_TypeInfo, v1);
    byte_4217B67 = 1;
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
  System_Action_int__o *v8; // x21

  if ( (byte_4217B61 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Action_int___ctor__, method);
    sub_B0D8A4(&System_Action_int__TypeInfo, v3);
    sub_B0D8A4(&Method_RecoverItemComponent__AttachStoneCountRefreshComponent_b__38_0__, v4);
    byte_4217B61 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v8 = (System_Action_int__o *)sub_B0D974(System_Action_int__TypeInfo, v6, v7);
  System_Action_int____ctor(
    v8,
    (Il2CppObject *)this,
    Method_RecoverItemComponent__AttachStoneCountRefreshComponent_b__38_0__,
    (const MethodInfo_246D4AC *)Method_System_Action_int___ctor__);
  StoneCountRefreshComponent__AttachToGameObject(gameObject, v8, 1, 0LL);
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
  System_Action_o *v12; // x21
  CommonUI_o *Instance; // x0
  System_Action_o *v14; // x1

  if ( (byte_4217B64 & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, isRes);
    sub_B0D8A4(&Method_RecoverItemComponent_setRequestInfo__, v7);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v8);
    byte_4217B64 = 1;
  }
  if ( !isRes )
  {
    Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( Instance )
    {
      v14 = 0LL;
      goto LABEL_8;
    }
LABEL_9:
    sub_B0D97C(Instance);
  }
  this->fields.spendNum = useNum;
  v9 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v12 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v10, v11);
  System_Action___ctor(v12, (Il2CppObject *)this, Method_RecoverItemComponent_setRequestInfo__, 0LL);
  if ( !v9 )
    goto LABEL_9;
  Instance = (CommonUI_o *)v9;
  v14 = v12;
LABEL_8:
  CommonUI__CloseApRecoverConfirmDlg(Instance, v14, 0LL);
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
  RecoverDlgComponent_o *userEntity; // x0
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
  System_String_array **v47; // x2
  System_String_array **v48; // x3
  System_Boolean_array **v49; // x4
  System_Int32_array **v50; // x5
  System_Int32_array *v51; // x6
  System_Int32_array *v52; // x7
  System_Object_array *v53; // x26
  System_String_array **v54; // x2
  System_String_array **v55; // x3
  System_Boolean_array **v56; // x4
  System_Int32_array **v57; // x5
  System_Int32_array *v58; // x6
  System_Int32_array *v59; // x7
  System_String_array **v60; // x2
  System_String_array **v61; // x3
  System_Boolean_array **v62; // x4
  System_Int32_array **v63; // x5
  System_Int32_array *v64; // x6
  System_Int32_array *v65; // x7
  System_Int32_array **v66; // x24
  System_String_array **v67; // x2
  System_String_array **v68; // x3
  System_Boolean_array **v69; // x4
  System_Int32_array **v70; // x5
  System_Int32_array *v71; // x6
  System_Int32_array *v72; // x7
  System_Int32_array **v73; // x24
  System_String_array **v74; // x2
  System_String_array **v75; // x3
  System_Boolean_array **v76; // x4
  System_Int32_array **v77; // x5
  System_Int32_array *v78; // x6
  System_Int32_array *v79; // x7
  System_Int32_array **v80; // x24
  System_String_array **v81; // x2
  System_String_array **v82; // x3
  System_Boolean_array **v83; // x4
  System_Int32_array **v84; // x5
  System_Int32_array *v85; // x6
  System_Int32_array *v86; // x7
  System_Int32_array **v87; // x24
  System_String_array **v88; // x2
  System_String_array **v89; // x3
  System_Boolean_array **v90; // x4
  System_Int32_array **v91; // x5
  System_Int32_array *v92; // x6
  System_Int32_array *v93; // x7
  System_Int32_array **v94; // x24
  BattleServantConfConponent_o *v95; // x0
  System_String_o *v96; // x25
  System_String_array **v97; // x2
  System_String_array **v98; // x3
  System_Boolean_array **v99; // x4
  System_Int32_array **v100; // x5
  System_Int32_array *v101; // x6
  System_Int32_array *v102; // x7
  System_Object_array *v103; // x26
  System_String_array **v104; // x2
  System_String_array **v105; // x3
  System_Boolean_array **v106; // x4
  System_Int32_array **v107; // x5
  System_Int32_array *v108; // x6
  System_Int32_array *v109; // x7
  System_String_array **v110; // x2
  System_String_array **v111; // x3
  System_Boolean_array **v112; // x4
  System_Int32_array **v113; // x5
  System_Int32_array *v114; // x6
  System_Int32_array *v115; // x7
  System_Int32_array **v116; // x24
  System_String_array **v117; // x2
  System_String_array **v118; // x3
  System_Boolean_array **v119; // x4
  System_Int32_array **v120; // x5
  System_Int32_array *v121; // x6
  System_Int32_array *v122; // x7
  System_Int32_array **v123; // x24
  System_String_array **v124; // x2
  System_String_array **v125; // x3
  System_Boolean_array **v126; // x4
  System_Int32_array **v127; // x5
  System_Int32_array *v128; // x6
  System_Int32_array *v129; // x7
  System_Int32_array **v130; // x24
  System_String_array **v131; // x2
  System_String_array **v132; // x3
  System_Boolean_array **v133; // x4
  System_Int32_array **v134; // x5
  System_Int32_array *v135; // x6
  System_Int32_array *v136; // x7
  System_Int32_array **v137; // x24
  System_String_array **v138; // x2
  System_String_array **v139; // x3
  System_Boolean_array **v140; // x4
  System_Int32_array **v141; // x5
  System_Int32_array *v142; // x6
  System_Int32_array *v143; // x7
  System_Int32_array **v144; // x24
  System_String_o *v145; // x24
  WebViewManager_o *v146; // x23
  __int64 v147; // x1
  __int64 v148; // x2
  CommonConfirmDialog_ClickDelegate_o *v149; // x25
  float v150; // s1
  CommonUI_o *v151; // x0
  struct BalanceConfig_StaticFields *static_fields; // x8
  System_String_o *v153; // x1
  System_String_o **v154; // x8
  System_String_o *v155; // x25
  System_String_array **v156; // x2
  System_String_array **v157; // x3
  System_Boolean_array **v158; // x4
  System_Int32_array **v159; // x5
  System_Int32_array *v160; // x6
  System_Int32_array *v161; // x7
  System_String_array **v162; // x2
  System_String_array **v163; // x3
  System_Boolean_array **v164; // x4
  System_Int32_array **v165; // x5
  System_Int32_array *v166; // x6
  System_Int32_array *v167; // x7
  System_String_array **v168; // x2
  System_String_array **v169; // x3
  System_Boolean_array **v170; // x4
  System_Int32_array **v171; // x5
  System_Int32_array *v172; // x6
  System_Int32_array *v173; // x7
  System_Int32_array **v174; // x24
  System_String_array **v175; // x2
  System_String_array **v176; // x3
  System_Boolean_array **v177; // x4
  System_Int32_array **v178; // x5
  System_Int32_array *v179; // x6
  System_Int32_array *v180; // x7
  System_Int32_array **v181; // x24
  System_String_array **v182; // x2
  System_String_array **v183; // x3
  System_Boolean_array **v184; // x4
  System_Int32_array **v185; // x5
  System_Int32_array *v186; // x6
  System_Int32_array *v187; // x7
  System_Int32_array **v188; // x24
  System_String_array **v189; // x2
  System_String_array **v190; // x3
  System_Boolean_array **v191; // x4
  System_Int32_array **v192; // x5
  System_Int32_array *v193; // x6
  System_Int32_array *v194; // x7
  System_Int32_array **v195; // x24
  System_String_array **v196; // x2
  System_String_array **v197; // x3
  System_Boolean_array **v198; // x4
  System_Int32_array **v199; // x5
  System_Int32_array *v200; // x6
  System_Int32_array *v201; // x7
  System_Int32_array **v202; // x24
  System_String_o *v203; // x23
  CommonUI_o *v204; // x25
  __int64 v205; // x1
  __int64 v206; // x2
  CommonConfirmDialog_ClickDelegate_o *v207; // x26
  System_String_o *v208; // x0
  System_String_o *v209; // x20
  CommonUI_o *Instance; // x21
  __int64 v211; // x1
  __int64 v212; // x2
  System_Action_o *v213; // x22
  System_String_o *v214; // x0
  System_String_o *v215; // x20
  CommonUI_o *v216; // x21
  __int64 v217; // x1
  __int64 v218; // x2
  System_Action_o *v219; // x22
  WebViewManager_o *v220; // x23
  __int64 v221; // x1
  __int64 v222; // x2
  WebViewManager_o *v223; // x0
  int32_t targetId; // w20
  int32_t needAp; // w21
  CommonUI_o *v226; // x22
  __int64 v227; // x1
  __int64 v228; // x2
  System_Action_bool__int__o *v229; // x23
  __int64 v230; // x0
  __int64 v231; // x0
  int32_t v232; // [xsp+38h] [xbp-68h] BYREF
  int32_t v233; // [xsp+3Ch] [xbp-64h] BYREF
  int32_t v234; // [xsp+40h] [xbp-60h] BYREF
  int32_t usrMaxRp; // [xsp+44h] [xbp-5Ch] BYREF
  int32_t usrCurrentAp; // [xsp+48h] [xbp-58h] BYREF
  int32_t spendNum; // [xsp+4Ch] [xbp-54h] BYREF

  if ( (byte_4217B62 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Action_bool__int___ctor__, method);
    sub_B0D8A4(&System_Action_bool__int__TypeInfo, v3);
    sub_B0D8A4(&System_Action_TypeInfo, v4);
    sub_B0D8A4(&BalanceConfig_TypeInfo, v5);
    sub_B0D8A4(&CommonConfirmDialog_ClickDelegate_TypeInfo, v6);
    sub_B0D8A4(&int_TypeInfo, v7);
    sub_B0D8A4(&LocalizationManager_TypeInfo, v8);
    sub_B0D8A4(&object___TypeInfo, v9);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v10);
    sub_B0D8A4(&Method_RecoverItemComponent_CloseApRecovDlg__, v11);
    sub_B0D8A4(&Method_RecoverItemComponent_closeNotificationDlg__, v12);
    sub_B0D8A4(&Method_RecoverItemComponent_spendItemDlg__, v13);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v14);
    sub_B0D8A4(&SoundManager_TypeInfo, v15);
    sub_B0D8A4(&StringLiteral_11288/*"RP_RECOVER_CONFIRM_MSG"*/, v16);
    sub_B0D8A4(&StringLiteral_3128/*"CMDSPELL_CURRENT_NUM"*/, v17);
    sub_B0D8A4(&StringLiteral_3269/*"COMMAND_SPELL_TXT"*/, v18);
    sub_B0D8A4(&StringLiteral_1736/*"AP_RECOVER_CONFIRM_MSG"*/, v19);
    sub_B0D8A4(&StringLiteral_11286/*"RP_FULL_MSG"*/, v20);
    sub_B0D8A4(&StringLiteral_14757/*"UNIT_INFO"*/, v21);
    sub_B0D8A4(&StringLiteral_1732/*"AP_ADD_CONFIRM_MSG"*/, v22);
    sub_B0D8A4(&StringLiteral_3275/*"COMMON_CONFIRM_DECIDE"*/, v23);
    sub_B0D8A4(&StringLiteral_3273/*"COMMON_CONFIRM_CANCEL"*/, v24);
    sub_B0D8A4(&StringLiteral_1733/*"AP_ADD_CONFIRM_MSG_OVER"*/, v25);
    sub_B0D8A4(&StringLiteral_1737/*"AP_RECOVER_CONFIRM_MSG_OVER"*/, v26);
    sub_B0D8A4(&StringLiteral_1734/*"AP_FULL_MSG"*/, v27);
    sub_B0D8A4(&StringLiteral_1/*""*/, v28);
    sub_B0D8A4(&StringLiteral_1742/*"AP_RECOVER_STONEPAY_WARNING_MSG"*/, v29);
    byte_4217B62 = 1;
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
  userEntity = this->fields.dialog;
  if ( !userEntity )
    goto LABEL_160;
  if ( !RecoverDlgComponent__isListTouchable(userEntity, 0LL) )
    return;
  v32 = (System_String_o *)StringLiteral_1/*""*/;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v33 = LocalizationManager__Get((System_String_o *)StringLiteral_14757/*"UNIT_INFO"*/, 0LL);
  spendNum = this->fields.spendNum;
  v34 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &spendNum);
  userEntity = (RecoverDlgComponent_o *)System_String__Format(v33, v34, 0LL);
  v35 = (System_Int32_array **)userEntity;
  if ( this->fields.currentType == 1 )
  {
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    mText = (System_Int32_array **)LocalizationManager__Get((System_String_o *)StringLiteral_3269/*"COMMAND_SPELL_TXT"*/, 0LL);
    if ( this->fields.currentType == 1 )
    {
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v37 = LocalizationManager__Get((System_String_o *)StringLiteral_3128/*"CMDSPELL_CURRENT_NUM"*/, 0LL);
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
  v40 = LocalizationManager__Get((System_String_o *)StringLiteral_3275/*"COMMON_CONFIRM_DECIDE"*/, 0LL);
  v41 = LocalizationManager__Get((System_String_o *)StringLiteral_3273/*"COMMON_CONFIRM_CANCEL"*/, 0LL);
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
        v44 = (System_String_o **)&StringLiteral_1732/*"AP_ADD_CONFIRM_MSG"*/;
      else
        v44 = (System_String_o **)&StringLiteral_1733/*"AP_ADD_CONFIRM_MSG_OVER"*/;
      v45 = *v44;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v46 = LocalizationManager__Get(v45, 0LL);
      userEntity = (RecoverDlgComponent_o *)sub_B0D8BC(object___TypeInfo, 7LL);
      if ( !userEntity )
        goto LABEL_160;
      v53 = (System_Object_array *)userEntity;
      if ( !mText
        || (userEntity = (RecoverDlgComponent_o *)sub_B0D964(mText, userEntity->klass->_1.element_class)) != 0LL )
      {
        if ( !v53->max_length )
          goto LABEL_159;
        v53->m_Items[0] = (Il2CppObject *)mText;
        sub_B0D840((BattleServantConfConponent_o *)v53->m_Items, mText, v47, v48, v49, v50, v51, v52);
        if ( !v35 || (userEntity = (RecoverDlgComponent_o *)sub_B0D964(v35, v53->obj.klass->_1.element_class)) != 0LL )
        {
          if ( v53->max_length <= 1 )
            goto LABEL_159;
          v53->m_Items[1] = (Il2CppObject *)v35;
          sub_B0D840((BattleServantConfConponent_o *)&v53->m_Items[1], v35, v54, v55, v56, v57, v58, v59);
          spendNum = this->fields.recvApNum;
          userEntity = (RecoverDlgComponent_o *)j_il2cpp_value_box_0(int_TypeInfo, &spendNum);
          v66 = (System_Int32_array **)userEntity;
          if ( !userEntity
            || (userEntity = (RecoverDlgComponent_o *)sub_B0D964(userEntity, v53->obj.klass->_1.element_class)) != 0LL )
          {
            if ( v53->max_length <= 2 )
              goto LABEL_159;
            v53->m_Items[2] = (Il2CppObject *)v66;
            sub_B0D840((BattleServantConfConponent_o *)&v53->m_Items[2], v66, v60, v61, v62, v63, v64, v65);
            usrCurrentAp = this->fields.usrCurrentAp;
            userEntity = (RecoverDlgComponent_o *)j_il2cpp_value_box_0(int_TypeInfo, &usrCurrentAp);
            v73 = (System_Int32_array **)userEntity;
            if ( !userEntity
              || (userEntity = (RecoverDlgComponent_o *)sub_B0D964(userEntity, v53->obj.klass->_1.element_class)) != 0LL )
            {
              if ( v53->max_length <= 3 )
                goto LABEL_159;
              v53->m_Items[3] = (Il2CppObject *)v73;
              sub_B0D840((BattleServantConfConponent_o *)&v53->m_Items[3], v73, v67, v68, v69, v70, v71, v72);
              usrMaxRp = this->fields.usrMaxAp;
              userEntity = (RecoverDlgComponent_o *)j_il2cpp_value_box_0(int_TypeInfo, &usrMaxRp);
              v80 = (System_Int32_array **)userEntity;
              if ( !userEntity
                || (userEntity = (RecoverDlgComponent_o *)sub_B0D964(userEntity, v53->obj.klass->_1.element_class)) != 0LL )
              {
                if ( v53->max_length <= 4 )
                  goto LABEL_159;
                v53->m_Items[4] = (Il2CppObject *)v80;
                sub_B0D840((BattleServantConfConponent_o *)&v53->m_Items[4], v80, v74, v75, v76, v77, v78, v79);
                v234 = this->fields.recvSum;
                userEntity = (RecoverDlgComponent_o *)j_il2cpp_value_box_0(int_TypeInfo, &v234);
                v87 = (System_Int32_array **)userEntity;
                if ( !userEntity
                  || (userEntity = (RecoverDlgComponent_o *)sub_B0D964(userEntity, v53->obj.klass->_1.element_class)) != 0LL )
                {
                  if ( v53->max_length <= 5 )
                    goto LABEL_159;
                  v53->m_Items[5] = (Il2CppObject *)v87;
                  sub_B0D840((BattleServantConfConponent_o *)&v53->m_Items[5], v87, v81, v82, v83, v84, v85, v86);
                  v233 = this->fields.usrMaxAp;
                  userEntity = (RecoverDlgComponent_o *)j_il2cpp_value_box_0(int_TypeInfo, &v233);
                  v94 = (System_Int32_array **)userEntity;
                  if ( !userEntity
                    || (userEntity = (RecoverDlgComponent_o *)sub_B0D964(userEntity, v53->obj.klass->_1.element_class)) != 0LL )
                  {
                    if ( v53->max_length > 6 )
                    {
                      v53->m_Items[6] = (Il2CppObject *)v94;
                      v95 = (BattleServantConfConponent_o *)&v53->m_Items[6];
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
        v154 = (System_String_o **)&StringLiteral_1736/*"AP_RECOVER_CONFIRM_MSG"*/;
      else
        v154 = (System_String_o **)&StringLiteral_1737/*"AP_RECOVER_CONFIRM_MSG_OVER"*/;
      v155 = *v154;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v46 = LocalizationManager__Get(v155, 0LL);
      userEntity = (RecoverDlgComponent_o *)sub_B0D8BC(object___TypeInfo, 8LL);
      if ( !userEntity )
        goto LABEL_160;
      v53 = (System_Object_array *)userEntity;
      if ( !mText
        || (userEntity = (RecoverDlgComponent_o *)sub_B0D964(mText, userEntity->klass->_1.element_class)) != 0LL )
      {
        if ( !v53->max_length )
          goto LABEL_159;
        v53->m_Items[0] = (Il2CppObject *)mText;
        sub_B0D840((BattleServantConfConponent_o *)v53->m_Items, mText, v156, v157, v158, v159, v160, v161);
        if ( !v35 || (userEntity = (RecoverDlgComponent_o *)sub_B0D964(v35, v53->obj.klass->_1.element_class)) != 0LL )
        {
          if ( v53->max_length <= 1 )
            goto LABEL_159;
          v53->m_Items[1] = (Il2CppObject *)v35;
          sub_B0D840((BattleServantConfConponent_o *)&v53->m_Items[1], v35, v162, v163, v164, v165, v166, v167);
          spendNum = this->fields.apRcvRate;
          userEntity = (RecoverDlgComponent_o *)j_il2cpp_value_box_0(int_TypeInfo, &spendNum);
          v174 = (System_Int32_array **)userEntity;
          if ( !userEntity
            || (userEntity = (RecoverDlgComponent_o *)sub_B0D964(userEntity, v53->obj.klass->_1.element_class)) != 0LL )
          {
            if ( v53->max_length <= 2 )
              goto LABEL_159;
            v53->m_Items[2] = (Il2CppObject *)v174;
            sub_B0D840((BattleServantConfConponent_o *)&v53->m_Items[2], v174, v168, v169, v170, v171, v172, v173);
            usrCurrentAp = this->fields.recvApNum;
            userEntity = (RecoverDlgComponent_o *)j_il2cpp_value_box_0(int_TypeInfo, &usrCurrentAp);
            v181 = (System_Int32_array **)userEntity;
            if ( !userEntity
              || (userEntity = (RecoverDlgComponent_o *)sub_B0D964(userEntity, v53->obj.klass->_1.element_class)) != 0LL )
            {
              if ( v53->max_length <= 3 )
                goto LABEL_159;
              v53->m_Items[3] = (Il2CppObject *)v181;
              sub_B0D840((BattleServantConfConponent_o *)&v53->m_Items[3], v181, v175, v176, v177, v178, v179, v180);
              usrMaxRp = this->fields.usrCurrentAp;
              userEntity = (RecoverDlgComponent_o *)j_il2cpp_value_box_0(int_TypeInfo, &usrMaxRp);
              v188 = (System_Int32_array **)userEntity;
              if ( !userEntity
                || (userEntity = (RecoverDlgComponent_o *)sub_B0D964(userEntity, v53->obj.klass->_1.element_class)) != 0LL )
              {
                if ( v53->max_length <= 4 )
                  goto LABEL_159;
                v53->m_Items[4] = (Il2CppObject *)v188;
                sub_B0D840((BattleServantConfConponent_o *)&v53->m_Items[4], v188, v182, v183, v184, v185, v186, v187);
                v234 = this->fields.usrMaxAp;
                userEntity = (RecoverDlgComponent_o *)j_il2cpp_value_box_0(int_TypeInfo, &v234);
                v195 = (System_Int32_array **)userEntity;
                if ( !userEntity
                  || (userEntity = (RecoverDlgComponent_o *)sub_B0D964(userEntity, v53->obj.klass->_1.element_class)) != 0LL )
                {
                  if ( v53->max_length <= 5 )
                    goto LABEL_159;
                  v53->m_Items[5] = (Il2CppObject *)v195;
                  sub_B0D840((BattleServantConfConponent_o *)&v53->m_Items[5], v195, v189, v190, v191, v192, v193, v194);
                  v233 = this->fields.recvSum;
                  userEntity = (RecoverDlgComponent_o *)j_il2cpp_value_box_0(int_TypeInfo, &v233);
                  v202 = (System_Int32_array **)userEntity;
                  if ( !userEntity
                    || (userEntity = (RecoverDlgComponent_o *)sub_B0D964(userEntity, v53->obj.klass->_1.element_class)) != 0LL )
                  {
                    if ( v53->max_length <= 6 )
                      goto LABEL_159;
                    v53->m_Items[6] = (Il2CppObject *)v202;
                    sub_B0D840(
                      (BattleServantConfConponent_o *)&v53->m_Items[6],
                      v202,
                      v196,
                      v197,
                      v198,
                      v199,
                      v200,
                      v201);
                    v232 = this->fields.usrMaxAp;
                    userEntity = (RecoverDlgComponent_o *)j_il2cpp_value_box_0(int_TypeInfo, &v232);
                    v94 = (System_Int32_array **)userEntity;
                    if ( !userEntity
                      || (userEntity = (RecoverDlgComponent_o *)sub_B0D964(userEntity, v53->obj.klass->_1.element_class)) != 0LL )
                    {
                      if ( v53->max_length > 7 )
                      {
                        v53->m_Items[7] = (Il2CppObject *)v94;
                        v95 = (BattleServantConfConponent_o *)&v53->m_Items[7];
LABEL_126:
                        sub_B0D840(v95, v94, v88, v89, v90, v91, v92, v93);
                        v145 = System_String__Format_43928628(v46, v53, 0LL);
                        userEntity = (RecoverDlgComponent_o *)this->fields.userEntity;
                        if ( !userEntity )
                          goto LABEL_160;
                        if ( UserGameEntity__getAct((UserGameEntity_o *)userEntity, 0LL) >= this->fields.usrMaxAp )
                        {
                          if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                            && !LocalizationManager_TypeInfo->_2.cctor_finished )
                          {
                            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                          }
                          v208 = LocalizationManager__Get((System_String_o *)StringLiteral_1734/*"AP_FULL_MSG"*/, 0LL);
                          v209 = System_String__Format(v208, (Il2CppObject *)mText, 0LL);
                          Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
                          v213 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v211, v212);
                          System_Action___ctor(
                            v213,
                            (Il2CppObject *)this,
                            Method_RecoverItemComponent_closeNotificationDlg__,
                            0LL);
                          if ( !Instance )
                            goto LABEL_160;
                          CommonUI__OpenNotificationDialog(
                            Instance,
                            (System_String_o *)StringLiteral_1/*""*/,
                            v209,
                            v213,
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
                            v203 = LocalizationManager__Get((System_String_o *)StringLiteral_1742/*"AP_RECOVER_STONEPAY_WARNING_MSG"*/, 0LL);
                            v204 = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
                            v207 = (CommonConfirmDialog_ClickDelegate_o *)sub_B0D974(
                                                                            CommonConfirmDialog_ClickDelegate_TypeInfo,
                                                                            v205,
                                                                            v206);
                            CommonConfirmDialog_ClickDelegate___ctor(
                              v207,
                              (Il2CppObject *)this,
                              Method_RecoverItemComponent_spendItemDlg__,
                              0LL);
                            userEntity = (RecoverDlgComponent_o *)BalanceConfig_TypeInfo;
                            if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                              && !BalanceConfig_TypeInfo->_2.cctor_finished )
                            {
                              j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
                            }
                            if ( v204 )
                            {
                              CommonUI__OpenConfirmDecideDlgAddMsgFrame(
                                v204,
                                v32,
                                v145,
                                v203,
                                v40,
                                v41,
                                v207,
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
                            sub_B0D97C(userEntity);
                          }
                          if ( !this->fields.isAddAp && this->fields.apRcvRate == 100 && this->fields.spendNum < 2 )
                          {
                            v220 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
                            v149 = (CommonConfirmDialog_ClickDelegate_o *)sub_B0D974(
                                                                            CommonConfirmDialog_ClickDelegate_TypeInfo,
                                                                            v221,
                                                                            v222);
                            CommonConfirmDialog_ClickDelegate___ctor(
                              v149,
                              (Il2CppObject *)this,
                              Method_RecoverItemComponent_spendItemDlg__,
                              0LL);
                            userEntity = (RecoverDlgComponent_o *)BalanceConfig_TypeInfo;
                            if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                              && !BalanceConfig_TypeInfo->_2.cctor_finished )
                            {
                              j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
                            }
                            if ( !v220 )
                              goto LABEL_160;
                            v153 = v32;
                            v150 = 15.0;
                            static_fields = BalanceConfig_TypeInfo->static_fields;
                            v151 = (CommonUI_o *)v220;
                            goto LABEL_93;
                          }
                          v223 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
                          targetId = this->fields.targetId;
                          needAp = this->fields.needAp;
                          v226 = (CommonUI_o *)v223;
                          v229 = (System_Action_bool__int__o *)sub_B0D974(System_Action_bool__int__TypeInfo, v227, v228);
                          System_Action_bool__int____ctor(
                            v229,
                            (Il2CppObject *)this,
                            Method_RecoverItemComponent_CloseApRecovDlg__,
                            (const MethodInfo_247A7A4 *)Method_System_Action_bool__int___ctor__);
                          if ( !v226 )
                            goto LABEL_160;
                          CommonUI__OpenApRecoverConfirmDlg(v226, targetId, needAp, v229, 0LL);
                        }
                        return;
                      }
LABEL_159:
                      v230 = sub_B0D9A8(userEntity);
                      sub_B0D948(v230, 0LL);
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
    v231 = sub_B0D99C(userEntity);
    sub_B0D948(v231, 0LL);
  }
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v96 = LocalizationManager__Get((System_String_o *)StringLiteral_11288/*"RP_RECOVER_CONFIRM_MSG"*/, 0LL);
  userEntity = (RecoverDlgComponent_o *)sub_B0D8BC(object___TypeInfo, 7LL);
  if ( !userEntity )
    goto LABEL_160;
  v103 = (System_Object_array *)userEntity;
  if ( mText )
  {
    userEntity = (RecoverDlgComponent_o *)sub_B0D964(mText, userEntity->klass->_1.element_class);
    if ( !userEntity )
      goto LABEL_161;
  }
  if ( !v103->max_length )
    goto LABEL_159;
  v103->m_Items[0] = (Il2CppObject *)mText;
  sub_B0D840((BattleServantConfConponent_o *)v103->m_Items, mText, v97, v98, v99, v100, v101, v102);
  if ( v35 )
  {
    userEntity = (RecoverDlgComponent_o *)sub_B0D964(v35, v103->obj.klass->_1.element_class);
    if ( !userEntity )
      goto LABEL_161;
  }
  if ( v103->max_length <= 1 )
    goto LABEL_159;
  v103->m_Items[1] = (Il2CppObject *)v35;
  sub_B0D840((BattleServantConfConponent_o *)&v103->m_Items[1], v35, v104, v105, v106, v107, v108, v109);
  spendNum = this->fields.recvRpNum;
  userEntity = (RecoverDlgComponent_o *)j_il2cpp_value_box_0(int_TypeInfo, &spendNum);
  v116 = (System_Int32_array **)userEntity;
  if ( userEntity )
  {
    userEntity = (RecoverDlgComponent_o *)sub_B0D964(userEntity, v103->obj.klass->_1.element_class);
    if ( !userEntity )
      goto LABEL_161;
  }
  if ( v103->max_length <= 2 )
    goto LABEL_159;
  v103->m_Items[2] = (Il2CppObject *)v116;
  sub_B0D840((BattleServantConfConponent_o *)&v103->m_Items[2], v116, v110, v111, v112, v113, v114, v115);
  usrCurrentAp = this->fields.usrCurrentRp;
  userEntity = (RecoverDlgComponent_o *)j_il2cpp_value_box_0(int_TypeInfo, &usrCurrentAp);
  v123 = (System_Int32_array **)userEntity;
  if ( userEntity )
  {
    userEntity = (RecoverDlgComponent_o *)sub_B0D964(userEntity, v103->obj.klass->_1.element_class);
    if ( !userEntity )
      goto LABEL_161;
  }
  if ( v103->max_length <= 3 )
    goto LABEL_159;
  v103->m_Items[3] = (Il2CppObject *)v123;
  sub_B0D840((BattleServantConfConponent_o *)&v103->m_Items[3], v123, v117, v118, v119, v120, v121, v122);
  usrMaxRp = this->fields.usrMaxRp;
  userEntity = (RecoverDlgComponent_o *)j_il2cpp_value_box_0(int_TypeInfo, &usrMaxRp);
  v130 = (System_Int32_array **)userEntity;
  if ( userEntity )
  {
    userEntity = (RecoverDlgComponent_o *)sub_B0D964(userEntity, v103->obj.klass->_1.element_class);
    if ( !userEntity )
      goto LABEL_161;
  }
  if ( v103->max_length <= 4 )
    goto LABEL_159;
  v103->m_Items[4] = (Il2CppObject *)v130;
  sub_B0D840((BattleServantConfConponent_o *)&v103->m_Items[4], v130, v124, v125, v126, v127, v128, v129);
  v234 = this->fields.recvSum;
  userEntity = (RecoverDlgComponent_o *)j_il2cpp_value_box_0(int_TypeInfo, &v234);
  v137 = (System_Int32_array **)userEntity;
  if ( userEntity )
  {
    userEntity = (RecoverDlgComponent_o *)sub_B0D964(userEntity, v103->obj.klass->_1.element_class);
    if ( !userEntity )
      goto LABEL_161;
  }
  if ( v103->max_length <= 5 )
    goto LABEL_159;
  v103->m_Items[5] = (Il2CppObject *)v137;
  sub_B0D840((BattleServantConfConponent_o *)&v103->m_Items[5], v137, v131, v132, v133, v134, v135, v136);
  v233 = this->fields.usrMaxRp;
  userEntity = (RecoverDlgComponent_o *)j_il2cpp_value_box_0(int_TypeInfo, &v233);
  v144 = (System_Int32_array **)userEntity;
  if ( userEntity )
  {
    userEntity = (RecoverDlgComponent_o *)sub_B0D964(userEntity, v103->obj.klass->_1.element_class);
    if ( !userEntity )
      goto LABEL_161;
  }
  if ( v103->max_length <= 6 )
    goto LABEL_159;
  v103->m_Items[6] = (Il2CppObject *)v144;
  sub_B0D840((BattleServantConfConponent_o *)&v103->m_Items[6], v144, v138, v139, v140, v141, v142, v143);
  userEntity = (RecoverDlgComponent_o *)System_String__Format_43928628(v96, v103, 0LL);
  if ( !this->fields.userEntity )
    goto LABEL_160;
  v145 = (System_String_o *)userEntity;
  if ( UserGameEntity__getRp(this->fields.userEntity, 0LL) < this->fields.usrMaxRp )
  {
    v146 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v149 = (CommonConfirmDialog_ClickDelegate_o *)sub_B0D974(CommonConfirmDialog_ClickDelegate_TypeInfo, v147, v148);
    CommonConfirmDialog_ClickDelegate___ctor(
      v149,
      (Il2CppObject *)this,
      Method_RecoverItemComponent_spendItemDlg__,
      0LL);
    userEntity = (RecoverDlgComponent_o *)BalanceConfig_TypeInfo;
    if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    }
    if ( !v146 )
      goto LABEL_160;
    v150 = 15.0;
    v151 = (CommonUI_o *)v146;
    static_fields = BalanceConfig_TypeInfo->static_fields;
    v153 = v32;
LABEL_93:
    CommonUI__OpenConfirmDecideDlg(
      v151,
      v153,
      v145,
      v40,
      v41,
      v149,
      static_fields->DefaultFontSize,
      0.0,
      v150,
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
  v214 = LocalizationManager__Get((System_String_o *)StringLiteral_11286/*"RP_FULL_MSG"*/, 0LL);
  v215 = System_String__Format(v214, (Il2CppObject *)mText, 0LL);
  v216 = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v219 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v217, v218);
  System_Action___ctor(v219, (Il2CppObject *)this, Method_RecoverItemComponent_closeNotificationDlg__, 0LL);
  if ( !v216 )
    goto LABEL_160;
  CommonUI__OpenNotificationDialog(
    v216,
    (System_String_o *)StringLiteral_1/*""*/,
    v215,
    v219,
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

  if ( (byte_4217B68 & 1) == 0 )
  {
    sub_B0D8A4(&int_TypeInfo, *(_QWORD *)&stoneCount);
    sub_B0D8A4(&StringLiteral_23605/*"{0:N0}"*/, v5);
    byte_4217B68 = 1;
  }
  currentNumLb = this->fields.currentNumLb;
  v9 = stoneCount;
  v7 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v9);
  v8 = System_String__Format((System_String_o *)StringLiteral_23605/*"{0:N0}"*/, v7, 0LL);
  if ( !currentNumLb )
    sub_B0D97C(v8);
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

  if ( (byte_4217B5D & 1) == 0 )
  {
    sub_B0D8A4(&RecoverItemComponent_CallbackFunc_TypeInfo, value);
    byte_4217B5D = 1;
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
    v9 = sub_B022BC(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_B0DC70(v8);
  RecoverItemComponent__remove_callbackFunc(v11, v12, v13);
}


void __fastcall RecoverItemComponent__closeNotificationDlg(RecoverItemComponent_o *this, const MethodInfo *method)
{
  CommonUI_o *Instance; // x0

  if ( (byte_4217B66 & 1) == 0 )
  {
    sub_B0D8A4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, method);
    byte_4217B66 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_B0D97C(0LL);
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

  if ( (byte_4217B5E & 1) == 0 )
  {
    sub_B0D8A4(&RecoverItemComponent_CallbackFunc_TypeInfo, value);
    byte_4217B5E = 1;
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
    v9 = sub_B022BC(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_B0DC70(v8);
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
  RecoverItemComponent_o *v12; // x19
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
  System_Int32_array **SelfUserGame; // x0
  RecoverItemComponent_o **p_userEntity; // x23
  System_String_array **v42; // x2
  System_String_array **v43; // x3
  System_Boolean_array **v44; // x4
  System_Int32_array **v45; // x5
  System_Int32_array *v46; // x6
  System_Int32_array *v47; // x7
  struct UserGameEntity_o *userEntity; // x8
  int32_t actMax; // w8
  int32_t *p_spendNum; // x20
  UILabel_o *currentInfoLb; // x24
  UILabel_o *spendInfoLb; // x24
  const MethodInfo *v53; // x1
  int32_t currentType; // w8
  RecoverItemComponent_o *v55; // x21
  RecoverItemComponent_o *v56; // x22
  int recvTarget; // w24
  UILabel_o *v58; // x21
  Il2CppObject *v59; // x0
  UILabel_o *v60; // x21
  const MethodInfo *v61; // x1
  System_String_o *v62; // x20
  Il2CppObject *v63; // x0
  System_String_o *v64; // x0
  UILabel_o *v65; // x20
  Il2CppObject *v66; // x21
  System_String_o *v67; // x22
  Il2CppObject *v68; // x23
  Il2CppObject *v69; // x0
  bool v70; // cc
  int v71; // w8
  const MethodInfo *v72; // x1
  ItemEntity_o *RecvItemData; // x0
  ItemEntity_o *v74; // x24
  int32_t num; // w27
  UILabel_o *v76; // x22
  UILabel_o *v77; // x22
  WarEntity_o *v78; // x0
  CommandSpellEntity_o *v79; // x22
  int32_t type; // w8
  struct UnityEngine_GameObject_o *cmdSpellBg; // x27
  float v82; // s1
  double v83; // d1
  System_String_o *v84; // x23
  Il2CppObject *v85; // x0
  System_String_o *v86; // x0
  UILabel_o *itemDetailLb; // x23
  Il2CppObject *v88; // x24
  System_String_o *v89; // x25
  Il2CppObject *v90; // x26
  Il2CppObject *v91; // x0
  int monitor; // w22
  int32_t v93; // w0
  int32_t v94; // w8
  BalanceConfig_c *v95; // x0
  int usrMaxAp; // s2
  float v97; // s2
  float v98; // s0
  double v99; // d1
  int32_t v100; // w0
  int32_t v101; // w0
  int32_t v102; // w8
  int32_t v103; // w9
  System_String_o *v104; // x23
  Il2CppObject *v105; // x0
  System_String_o *v106; // x0
  UILabel_o *v107; // x23
  Il2CppObject *v108; // x25
  System_String_o *v109; // x26
  Il2CppObject *v110; // x27
  Il2CppObject *v111; // x0
  int value; // w23
  int32_t v113; // w0
  System_String_o *v114; // x21
  Il2CppObject *v115; // x0
  System_String_o *v116; // x0
  UILabel_o *v117; // x21
  Il2CppObject *v118; // x23
  System_String_o *v119; // x24
  Il2CppObject *v120; // x0
  UILabel_o *v121; // x21
  Il2CppObject *v122; // x0
  UILabel_o *v123; // x21
  int v124; // w8
  System_String_o *v125; // x21
  Il2CppObject *v126; // x0
  System_String_o *v127; // x0
  UILabel_o *v128; // x21
  Il2CppObject *v129; // x22
  System_String_o *v130; // x23
  Il2CppObject *v131; // x0
  UILabel_o *currentNumLb; // x21
  UILabel_o *spendNumLb; // x21
  char v134; // w9
  __int64 v135; // x0
  int32_t v136; // [xsp+0h] [xbp-70h]
  int32_t v137; // [xsp+4h] [xbp-6Ch] BYREF
  int32_t recvApNum; // [xsp+8h] [xbp-68h] BYREF
  int32_t apRcvRate; // [xsp+Ch] [xbp-64h] BYREF
  int32_t spendNum; // [xsp+10h] [xbp-60h] BYREF
  int32_t CommandSpell; // [xsp+14h] [xbp-5Ch] BYREF
  UserItemEntity_o *entity; // [xsp+18h] [xbp-58h] BYREF

  v12 = this;
  if ( (byte_4217B5F & 1) == 0 )
  {
    sub_B0D8A4(&BalanceConfig_TypeInfo, data);
    sub_B0D8A4(&Method_DataManager_GetMasterData_CommandSpellMaster___, v13);
    sub_B0D8A4(&Method_DataManager_GetMasterData_ItemMaster___, v14);
    sub_B0D8A4(&Method_DataManager_GetMasterData_StoneShopMaster___, v15);
    sub_B0D8A4(&Method_DataManager_GetMasterData_UserItemMaster___, v16);
    sub_B0D8A4(&Method_DataMasterBase_StoneShopMaster__StoneShopEntity__int__GetEntity__, v17);
    sub_B0D8A4(&Method_DataMasterBase_CommandSpellMaster__CommandSpellEntity__int__GetEntity__, v18);
    sub_B0D8A4(&int_TypeInfo, v19);
    sub_B0D8A4(&LocalizationManager_TypeInfo, v20);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v21);
    sub_B0D8A4(&StringLiteral_3128/*"CMDSPELL_CURRENT_NUM"*/, v22);
    sub_B0D8A4(&StringLiteral_1662/*"ADD_RECOVER_CMDSPELL_TXT"*/, v23);
    sub_B0D8A4(&StringLiteral_3130/*"CMDSPELL_SPEND_NUM_TXT"*/, v24);
    sub_B0D8A4(&StringLiteral_23605/*"{0:N0}"*/, v25);
    sub_B0D8A4(&StringLiteral_753/*"-"*/, v26);
    sub_B0D8A4(&StringLiteral_14757/*"UNIT_INFO"*/, v27);
    sub_B0D8A4(&StringLiteral_12334/*"SPEND_NUM_TXT"*/, v28);
    sub_B0D8A4(&StringLiteral_3466/*"CURRENT_NUM_TXT"*/, v29);
    sub_B0D8A4(&StringLiteral_1663/*"ADD_RECOVER_NUM_TXT"*/, v30);
    sub_B0D8A4(&StringLiteral_1739/*"AP_RECOVER_NUM_TXT"*/, v31);
    this = (RecoverItemComponent_o *)sub_B0D8A4(&StringLiteral_3129/*"CMDSPELL_CURRENT_NUM_TXT"*/, v32);
    byte_4217B5F = 1;
  }
  entity = 0LL;
  CommandSpell = 0;
  if ( !data )
    goto LABEL_128;
  v12->fields.currentType = data->fields.recoverType;
  v12->fields.recvTarget = data->fields.target;
  targetId = data->fields.targetId;
  v12->fields.isEnableSelect = 0;
  v12->fields.targetId = targetId;
  v12->fields.dialog = dlg;
  sub_B0D840(
    (BattleServantConfConponent_o *)&v12->fields.dialog,
    (System_Int32_array **)dlg,
    *(System_String_array ***)&needAp,
    (System_String_array **)dlg,
    (System_Boolean_array **)callback,
    (System_Int32_array **)method,
    v6,
    v7);
  v12->fields.callbackFunc = callback;
  v12->fields.needAp = needAp;
  *(_WORD *)&v12->fields.isAp = 1;
  sub_B0D840(
    (BattleServantConfConponent_o *)&v12->fields.callbackFunc,
    (System_Int32_array **)callback,
    v34,
    v35,
    v36,
    v37,
    v38,
    v39);
  this = (RecoverItemComponent_o *)v12->fields.maskImg;
  if ( !this )
    goto LABEL_128;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
  SelfUserGame = (System_Int32_array **)UserGameMaster__getSelfUserGame(0LL);
  v12->fields.userEntity = (struct UserGameEntity_o *)SelfUserGame;
  p_userEntity = (RecoverItemComponent_o **)&v12->fields.userEntity;
  sub_B0D840((BattleServantConfConponent_o *)&v12->fields.userEntity, SelfUserGame, v42, v43, v44, v45, v46, v47);
  this = (RecoverItemComponent_o *)v12->fields.userEntity;
  if ( !this )
    goto LABEL_128;
  this = (RecoverItemComponent_o *)UserGameEntity__getAct((UserGameEntity_o *)this, 0LL);
  userEntity = v12->fields.userEntity;
  v12->fields.usrCurrentAp = (int)this;
  if ( !userEntity )
    goto LABEL_128;
  actMax = userEntity->fields.actMax;
  v12->fields.spendNum = 1;
  p_spendNum = &v12->fields.spendNum;
  this = (RecoverItemComponent_o *)v12->fields.itemNameLb;
  v12->fields.usrMaxAp = actMax;
  v12->fields.recvApNum = actMax;
  v12->fields.apRcvRate = 100;
  if ( !this )
    goto LABEL_128;
  UILabel__set_text((UILabel_o *)this, (System_String_o *)StringLiteral_753/*"-"*/, 0LL);
  this = (RecoverItemComponent_o *)v12->fields.currentNumLb;
  if ( !this )
    goto LABEL_128;
  UILabel__set_text((UILabel_o *)this, (System_String_o *)StringLiteral_753/*"-"*/, 0LL);
  this = (RecoverItemComponent_o *)v12->fields.spendNumLb;
  if ( !this )
    goto LABEL_128;
  UILabel__set_text((UILabel_o *)this, (System_String_o *)StringLiteral_753/*"-"*/, 0LL);
  this = (RecoverItemComponent_o *)v12->fields.itemDetailLb;
  if ( !this )
    goto LABEL_128;
  UILabel__set_text((UILabel_o *)this, (System_String_o *)StringLiteral_753/*"-"*/, 0LL);
  currentInfoLb = v12->fields.currentInfoLb;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  this = (RecoverItemComponent_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3466/*"CURRENT_NUM_TXT"*/, 0LL);
  if ( !currentInfoLb )
    goto LABEL_128;
  UILabel__set_text(currentInfoLb, (System_String_o *)this, 0LL);
  spendInfoLb = v12->fields.spendInfoLb;
  this = (RecoverItemComponent_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12334/*"SPEND_NUM_TXT"*/, 0LL);
  if ( !spendInfoLb )
    goto LABEL_128;
  UILabel__set_text(spendInfoLb, (System_String_o *)this, 0LL);
  currentType = v12->fields.currentType;
  if ( currentType == 1 )
  {
    this = (RecoverItemComponent_o *)v12->fields.itemIconInfo;
    if ( !this )
      goto LABEL_128;
    this = (RecoverItemComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !this )
      goto LABEL_128;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
    this = (RecoverItemComponent_o *)v12->fields.cmdSpellBg;
    if ( !this )
      goto LABEL_128;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
    v76 = v12->fields.currentInfoLb;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    this = (RecoverItemComponent_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3129/*"CMDSPELL_CURRENT_NUM_TXT"*/, 0LL);
    if ( !v76 )
      goto LABEL_128;
    UILabel__set_text(v76, (System_String_o *)this, 0LL);
    v77 = v12->fields.spendInfoLb;
    this = (RecoverItemComponent_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3130/*"CMDSPELL_SPEND_NUM_TXT"*/, 0LL);
    if ( !v77 )
      goto LABEL_128;
    UILabel__set_text(v77, (System_String_o *)this, 0LL);
    this = (RecoverItemComponent_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !this )
      goto LABEL_128;
    this = (RecoverItemComponent_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                       (DataManager_o *)this,
                                       (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_CommandSpellMaster___);
    if ( !this )
      goto LABEL_128;
    v78 = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
            (DataMasterBase_WarMaster__WarEntity__int__o *)this,
            v12->fields.targetId,
            (const MethodInfo_2669BD4 *)Method_DataMasterBase_CommandSpellMaster__CommandSpellEntity__int__GetEntity__);
    if ( !v78 )
      goto LABEL_127;
    v79 = (CommandSpellEntity_o *)v78;
    this = (RecoverItemComponent_o *)v12->fields.cmdSpellIcon;
    if ( !this )
      goto LABEL_128;
    CommandSpellIconComponent__SetData((CommandSpellIconComponent_o *)this, v12->fields.userEntity, 0LL);
    this = (RecoverItemComponent_o *)v12->fields.itemNameLb;
    if ( !this )
      goto LABEL_128;
    UILabel__set_text((UILabel_o *)this, v79->fields.name, 0LL);
    this = *p_userEntity;
    if ( !*p_userEntity )
      goto LABEL_128;
    CommandSpell = UserGameEntity__getCommandSpell((UserGameEntity_o *)this, 0LL);
    *p_spendNum = v79->fields.consume;
    this = (RecoverItemComponent_o *)CommandSpellEntity__getValues(v79, 0LL);
    if ( !this )
      goto LABEL_128;
    if ( LODWORD(this->fields.itemIconInfo) )
    {
      type = v79->fields.type;
      cmdSpellBg = this->fields.cmdSpellBg;
      if ( type == 3 )
      {
        if ( !cmdSpellBg )
          goto LABEL_128;
        if ( !LODWORD(cmdSpellBg[1].klass) )
          goto LABEL_129;
        v82 = (float)((float)SLODWORD(cmdSpellBg[1].monitor) / 1000.0) * 100.0;
        v83 = v82 == INFINITY ? -v82 : v82;
        v12->fields.apRcvRate = (int)v83;
        if ( !LODWORD(cmdSpellBg[1].klass) )
          goto LABEL_129;
        v12->fields.recvApNum = UnityEngine_Mathf__CeilToInt(
                                  (float)((float)SLODWORD(cmdSpellBg[1].monitor) / 1000.0) * (float)v12->fields.usrMaxAp,
                                  0LL);
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        v84 = LocalizationManager__Get((System_String_o *)StringLiteral_3128/*"CMDSPELL_CURRENT_NUM"*/, 0LL);
        spendNum = v12->fields.spendNum;
        v85 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &spendNum);
        v86 = System_String__Format(v84, v85, 0LL);
        itemDetailLb = v12->fields.itemDetailLb;
        v88 = (Il2CppObject *)v86;
        v89 = LocalizationManager__Get((System_String_o *)StringLiteral_1739/*"AP_RECOVER_NUM_TXT"*/, 0LL);
        apRcvRate = v12->fields.apRcvRate;
        v90 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &apRcvRate);
        recvApNum = v12->fields.recvApNum;
        v91 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &recvApNum);
        this = (RecoverItemComponent_o *)System_String__Format_43850968(v89, v88, v90, v91, 0LL);
        if ( !itemDetailLb )
          goto LABEL_128;
        UILabel__set_text(itemDetailLb, (System_String_o *)this, 0LL);
        type = v79->fields.type;
      }
      if ( type != 4 )
      {
LABEL_120:
        currentNumLb = v12->fields.currentNumLb;
        this = (RecoverItemComponent_o *)System_Int32__ToString((int32_t)&CommandSpell, 0LL);
        if ( currentNumLb )
        {
          UILabel__set_text(currentNumLb, (System_String_o *)this, 0LL);
          spendNumLb = v12->fields.spendNumLb;
          this = (RecoverItemComponent_o *)System_Int32__ToString((int)v12 + 120, 0LL);
          if ( spendNumLb )
          {
            UILabel__set_text(spendNumLb, (System_String_o *)this, 0LL);
            v70 = CommandSpell < v12->fields.spendNum;
            v71 = v12->fields.recvApNum + v12->fields.usrCurrentAp;
            goto LABEL_123;
          }
        }
        goto LABEL_128;
      }
      if ( !cmdSpellBg )
        goto LABEL_128;
      if ( LODWORD(cmdSpellBg[1].klass) )
      {
        monitor = (int)cmdSpellBg[1].monitor;
        if ( needAp < 1 )
        {
          v93 = *p_spendNum;
        }
        else
        {
          v93 = UnityEngine_Mathf__CeilToInt(
                  fmaxf((float)(needAp - v12->fields.usrCurrentAp) / (float)monitor, 1.0),
                  0LL);
          v12->fields.spendNum = v93;
        }
        v12->fields.recvApNum = v93 * monitor;
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        v125 = LocalizationManager__Get((System_String_o *)StringLiteral_3128/*"CMDSPELL_CURRENT_NUM"*/, 0LL);
        spendNum = v12->fields.spendNum;
        v126 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &spendNum);
        v127 = System_String__Format(v125, v126, 0LL);
        v128 = v12->fields.itemDetailLb;
        v129 = (Il2CppObject *)v127;
        v130 = LocalizationManager__Get((System_String_o *)StringLiteral_1662/*"ADD_RECOVER_CMDSPELL_TXT"*/, 0LL);
        apRcvRate = v12->fields.recvApNum;
        v131 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &apRcvRate);
        this = (RecoverItemComponent_o *)System_String__Format_43845440(v130, v129, v131, 0LL);
        if ( !v128 )
          goto LABEL_128;
        UILabel__set_text(v128, (System_String_o *)this, 0LL);
        v12->fields.isAddAp = 1;
        goto LABEL_120;
      }
    }
LABEL_129:
    v135 = sub_B0D9A8(this);
    sub_B0D948(v135, 0LL);
  }
  if ( currentType == 3 )
  {
    this = (RecoverItemComponent_o *)v12->fields.itemIconInfo;
    if ( this )
    {
      this = (RecoverItemComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
      if ( this )
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
        this = (RecoverItemComponent_o *)v12->fields.cmdSpellBg;
        if ( this )
        {
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
          RecvItemData = RecoverEntity__getRecvItemData(data, v72);
          if ( !RecvItemData )
            goto LABEL_127;
          v74 = RecvItemData;
          this = (RecoverItemComponent_o *)v12->fields.itemIconInfo;
          if ( this )
          {
            ItemIconComponent__SetItemImage_26855044(
              (ItemIconComponent_o *)this,
              v74->fields.imageId,
              v74->fields.bgImageId,
              v74->fields.type,
              0,
              0LL);
            this = (RecoverItemComponent_o *)v12->fields.itemIconInfo;
            if ( this )
            {
              this = (RecoverItemComponent_o *)UnityEngine_Component__get_gameObject(
                                                 (UnityEngine_Component_o *)this,
                                                 0LL);
              if ( this )
              {
                UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
                this = (RecoverItemComponent_o *)v12->fields.itemNameLb;
                if ( this )
                {
                  UILabel__set_text((UILabel_o *)this, v74->fields.name, 0LL);
                  *p_spendNum = 1;
                  this = (RecoverItemComponent_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
                  if ( this )
                  {
                    this = (RecoverItemComponent_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                       (DataManager_o *)this,
                                                       (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_UserItemMaster___);
                    if ( *p_userEntity )
                    {
                      if ( this )
                      {
                        this = (RecoverItemComponent_o *)UserItemMaster__TryGetEntity(
                                                           (UserItemMaster_o *)this,
                                                           &entity,
                                                           *(_QWORD *)&(*p_userEntity)->fields.m_CachedPtr,
                                                           v12->fields.targetId,
                                                           0LL);
                        if ( ((unsigned __int8)this & 1) != 0 )
                        {
                          if ( !entity )
                            goto LABEL_128;
                          num = entity->fields.num;
                        }
                        else
                        {
                          num = 0;
                        }
                        v94 = v74->fields.type;
                        if ( v94 == 3 )
                        {
                          v95 = BalanceConfig_TypeInfo;
                          if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                            && !BalanceConfig_TypeInfo->_2.cctor_finished )
                          {
                            j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
                            v95 = BalanceConfig_TypeInfo;
                          }
                          usrMaxAp = v12->fields.usrMaxAp;
                          v12->fields.spendNum = v95->static_fields->SpendApRecvItemNum;
                          v97 = (float)usrMaxAp;
                          v98 = (float)v74->fields.value / 1000.0;
                          v99 = -(float)(v98 * 100.0);
                          if ( (float)(v98 * 100.0) != INFINITY )
                            v99 = (float)(v98 * 100.0);
                          v12->fields.apRcvRate = (int)v99;
                          v100 = UnityEngine_Mathf__CeilToInt(v98 * v97, 0LL);
                          v12->fields.recvApNum = v100;
                          if ( needAp >= 1 )
                          {
                            v101 = UnityEngine_Mathf__CeilToInt(
                                     fmaxf((float)(needAp - v12->fields.usrCurrentAp) / (float)v100, 1.0),
                                     0LL);
                            v102 = v12->fields.apRcvRate;
                            v103 = v12->fields.recvApNum;
                            v12->fields.spendNum = v101;
                            v12->fields.apRcvRate = v102 * v101;
                            v12->fields.recvApNum = v103 * v101;
                          }
                          v136 = num;
                          if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                            && !LocalizationManager_TypeInfo->_2.cctor_finished )
                          {
                            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                          }
                          v104 = LocalizationManager__Get((System_String_o *)StringLiteral_14757/*"UNIT_INFO"*/, 0LL);
                          spendNum = v12->fields.spendNum;
                          v105 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &spendNum);
                          v106 = System_String__Format(v104, v105, 0LL);
                          v107 = v12->fields.itemDetailLb;
                          v108 = (Il2CppObject *)v106;
                          v109 = LocalizationManager__Get((System_String_o *)StringLiteral_1739/*"AP_RECOVER_NUM_TXT"*/, 0LL);
                          apRcvRate = v12->fields.apRcvRate;
                          v110 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &apRcvRate);
                          recvApNum = v12->fields.recvApNum;
                          v111 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &recvApNum);
                          this = (RecoverItemComponent_o *)System_String__Format_43850968(v109, v108, v110, v111, 0LL);
                          if ( !v107 )
                            goto LABEL_128;
                          UILabel__set_text(v107, (System_String_o *)this, 0LL);
                          v94 = v74->fields.type;
                          num = v136;
                        }
                        if ( v94 == 4 )
                        {
                          value = v74->fields.value;
                          if ( needAp < 1 )
                          {
                            *p_spendNum = 1;
                          }
                          else
                          {
                            v113 = UnityEngine_Mathf__CeilToInt(
                                     fmaxf((float)(needAp - v12->fields.usrCurrentAp) / (float)value, 1.0),
                                     0LL);
                            v12->fields.spendNum = v113;
                            value *= v113;
                          }
                          v12->fields.recvApNum = value;
                          if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                            && !LocalizationManager_TypeInfo->_2.cctor_finished )
                          {
                            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                          }
                          v114 = LocalizationManager__Get((System_String_o *)StringLiteral_14757/*"UNIT_INFO"*/, 0LL);
                          spendNum = v12->fields.spendNum;
                          v115 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &spendNum);
                          v116 = System_String__Format(v114, v115, 0LL);
                          v117 = v12->fields.itemDetailLb;
                          v118 = (Il2CppObject *)v116;
                          v119 = LocalizationManager__Get((System_String_o *)StringLiteral_1663/*"ADD_RECOVER_NUM_TXT"*/, 0LL);
                          apRcvRate = v12->fields.recvApNum;
                          v120 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &apRcvRate);
                          this = (RecoverItemComponent_o *)System_String__Format_43845440(v119, v118, v120, 0LL);
                          if ( !v117 )
                            goto LABEL_128;
                          UILabel__set_text(v117, (System_String_o *)this, 0LL);
                          v12->fields.isAddAp = 1;
                        }
                        v121 = v12->fields.currentNumLb;
                        spendNum = num;
                        v122 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &spendNum);
                        this = (RecoverItemComponent_o *)System_String__Format(
                                                           (System_String_o *)StringLiteral_23605/*"{0:N0}"*/,
                                                           v122,
                                                           0LL);
                        if ( v121 )
                        {
                          UILabel__set_text(v121, (System_String_o *)this, 0LL);
                          v123 = v12->fields.spendNumLb;
                          this = (RecoverItemComponent_o *)System_Int32__ToString((int)v12 + 120, 0LL);
                          if ( v123 )
                          {
                            UILabel__set_text(v123, (System_String_o *)this, 0LL);
                            v124 = v12->fields.recvApNum + v12->fields.usrCurrentAp;
                            v12->fields.isEnableSelect = num >= v12->fields.spendNum;
                            v12->fields.recvSum = v124;
                            v12->fields.targetId = data->fields.id;
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
    sub_B0D97C(this);
  }
  if ( currentType != 2 )
    goto LABEL_127;
  this = (RecoverItemComponent_o *)v12->fields.itemIconInfo;
  if ( !this )
    goto LABEL_128;
  this = (RecoverItemComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !this )
    goto LABEL_128;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
  this = (RecoverItemComponent_o *)v12->fields.cmdSpellBg;
  if ( !this )
    goto LABEL_128;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
  this = (RecoverItemComponent_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_128;
  this = (RecoverItemComponent_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                     (DataManager_o *)this,
                                     (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_ItemMaster___);
  if ( !this )
    goto LABEL_128;
  this = (RecoverItemComponent_o *)ItemMaster__GetEntityByType((ItemMaster_o *)this, 2, 0LL);
  if ( !this )
    goto LABEL_128;
  v55 = this;
  this = (RecoverItemComponent_o *)v12->fields.itemIconInfo;
  if ( !this )
    goto LABEL_128;
  ItemIconComponent__SetItemImage_26855044(
    (ItemIconComponent_o *)this,
    (int32_t)v55->fields.cmdSpellIcon,
    HIDWORD(v55->fields.cmdSpellIcon),
    (int32_t)v55->fields.itemNameLb,
    0,
    0LL);
  this = (RecoverItemComponent_o *)v12->fields.itemIconInfo;
  if ( !this )
    goto LABEL_128;
  this = (RecoverItemComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !this )
    goto LABEL_128;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
  this = (RecoverItemComponent_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_128;
  this = (RecoverItemComponent_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                     (DataManager_o *)this,
                                     (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_StoneShopMaster___);
  if ( !this )
    goto LABEL_128;
  this = (RecoverItemComponent_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                     (DataMasterBase_WarMaster__WarEntity__int__o *)this,
                                     v12->fields.targetId,
                                     (const MethodInfo_2669BD4 *)Method_DataMasterBase_StoneShopMaster__StoneShopEntity__int__GetEntity__);
  if ( !v12->fields.itemNameLb )
    goto LABEL_128;
  v56 = this;
  UILabel__set_text(v12->fields.itemNameLb, (System_String_o *)v55->fields.itemIconInfo, 0LL);
  if ( !*p_userEntity )
    goto LABEL_128;
  recvTarget = (*p_userEntity)->fields.recvTarget;
  if ( v56 )
    *p_spendNum = HIDWORD(v56->fields.cmdSpellIcon);
  v58 = v12->fields.currentNumLb;
  spendNum = recvTarget;
  v59 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &spendNum);
  this = (RecoverItemComponent_o *)System_String__Format((System_String_o *)StringLiteral_23605/*"{0:N0}"*/, v59, 0LL);
  if ( !v58 )
    goto LABEL_128;
  UILabel__set_text(v58, (System_String_o *)this, 0LL);
  v60 = v12->fields.spendNumLb;
  this = (RecoverItemComponent_o *)System_Int32__ToString((int)v12 + 120, 0LL);
  if ( !v60 )
    goto LABEL_128;
  UILabel__set_text(v60, (System_String_o *)this, 0LL);
  RecoverItemComponent__AttachStoneCountRefreshComponent(v12, v61);
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v62 = LocalizationManager__Get((System_String_o *)StringLiteral_14757/*"UNIT_INFO"*/, 0LL);
  apRcvRate = v12->fields.spendNum;
  v63 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &apRcvRate);
  v64 = System_String__Format(v62, v63, 0LL);
  v65 = v12->fields.itemDetailLb;
  v66 = (Il2CppObject *)v64;
  v67 = LocalizationManager__Get((System_String_o *)StringLiteral_1739/*"AP_RECOVER_NUM_TXT"*/, 0LL);
  recvApNum = v12->fields.apRcvRate;
  v68 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &recvApNum);
  v137 = v12->fields.recvApNum;
  v69 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v137);
  this = (RecoverItemComponent_o *)System_String__Format_43850968(v67, v66, v68, v69, 0LL);
  if ( !v65 )
    goto LABEL_128;
  UILabel__set_text(v65, (System_String_o *)this, 0LL);
  v70 = recvTarget < v12->fields.spendNum;
  v71 = v12->fields.usrMaxAp + v12->fields.usrCurrentAp;
LABEL_123:
  v134 = !v70;
  v12->fields.isEnableSelect = v134;
  v12->fields.recvSum = v71;
LABEL_127:
  RecoverItemComponent__setEnableSelectItem(v12, v53);
}


void __fastcall RecoverItemComponent__setEnableSelectItem(RecoverItemComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *maskImg; // x0

  if ( !this->fields.isEnableSelect )
  {
    maskImg = this->fields.maskImg;
    if ( !maskImg )
      sub_B0D97C(0LL);
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
  RecoverItemComponent_o *v12; // x19
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
  System_Int32_array **SelfUserGame; // x0
  RecoverItemComponent_o **p_userEntity; // x23
  System_String_array **v41; // x2
  System_String_array **v42; // x3
  System_Boolean_array **v43; // x4
  System_Int32_array **v44; // x5
  System_Int32_array *v45; // x6
  System_Int32_array *v46; // x7
  BalanceConfig_c *v47; // x0
  int32_t UerGameRpMax; // w8
  int32_t *p_spendNum; // x20
  UILabel_o *currentInfoLb; // x24
  UILabel_o *spendInfoLb; // x24
  const MethodInfo *v52; // x1
  int32_t currentType; // w8
  RecoverItemComponent_o *v54; // x21
  RecoverItemComponent_o *v55; // x22
  int recvTarget; // w23
  UILabel_o *v57; // x21
  Il2CppObject *v58; // x0
  UILabel_o *v59; // x21
  const MethodInfo *v60; // x1
  System_String_o *v61; // x20
  Il2CppObject *v62; // x0
  System_String_o *v63; // x0
  UILabel_o *v64; // x20
  Il2CppObject *v65; // x21
  System_String_o *v66; // x22
  Il2CppObject *v67; // x0
  bool v68; // cc
  int v69; // w8
  const MethodInfo *v70; // x1
  ItemEntity_o *RecvItemData; // x0
  ItemEntity_o *v72; // x24
  int32_t num; // w26
  UILabel_o *v74; // x22
  UILabel_o *v75; // x22
  WarEntity_o *v76; // x0
  CommandSpellEntity_o *v77; // x22
  struct UnityEngine_GameObject_o *cmdSpellBg; // x8
  int monitor; // w22
  int32_t v80; // w0
  int value; // w23
  int32_t v82; // w0
  System_String_o *v83; // x21
  Il2CppObject *v84; // x0
  System_String_o *v85; // x0
  UILabel_o *v86; // x21
  Il2CppObject *v87; // x23
  System_String_o *v88; // x24
  Il2CppObject *v89; // x0
  UILabel_o *v90; // x21
  Il2CppObject *v91; // x0
  UILabel_o *v92; // x21
  int v93; // w8
  System_String_o *v94; // x21
  Il2CppObject *v95; // x0
  System_String_o *v96; // x0
  UILabel_o *itemDetailLb; // x21
  Il2CppObject *v98; // x22
  System_String_o *v99; // x23
  Il2CppObject *v100; // x0
  UILabel_o *currentNumLb; // x21
  UILabel_o *spendNumLb; // x21
  char v103; // w9
  __int64 v104; // x0
  int32_t v105; // [xsp+8h] [xbp-58h] BYREF
  int32_t recvRpNum; // [xsp+Ch] [xbp-54h] BYREF
  int32_t spendNum; // [xsp+10h] [xbp-50h] BYREF
  int32_t CommandSpell; // [xsp+14h] [xbp-4Ch] BYREF
  UserItemEntity_o *entity; // [xsp+18h] [xbp-48h] BYREF

  v12 = this;
  if ( (byte_4217B60 & 1) == 0 )
  {
    sub_B0D8A4(&BalanceConfig_TypeInfo, data);
    sub_B0D8A4(&Method_DataManager_GetMasterData_CommandSpellMaster___, v13);
    sub_B0D8A4(&Method_DataManager_GetMasterData_ItemMaster___, v14);
    sub_B0D8A4(&Method_DataManager_GetMasterData_StoneShopMaster___, v15);
    sub_B0D8A4(&Method_DataManager_GetMasterData_UserItemMaster___, v16);
    sub_B0D8A4(&Method_DataMasterBase_StoneShopMaster__StoneShopEntity__int__GetEntity__, v17);
    sub_B0D8A4(&Method_DataMasterBase_CommandSpellMaster__CommandSpellEntity__int__GetEntity__, v18);
    sub_B0D8A4(&int_TypeInfo, v19);
    sub_B0D8A4(&LocalizationManager_TypeInfo, v20);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v21);
    sub_B0D8A4(&StringLiteral_3128/*"CMDSPELL_CURRENT_NUM"*/, v22);
    sub_B0D8A4(&StringLiteral_3130/*"CMDSPELL_SPEND_NUM_TXT"*/, v23);
    sub_B0D8A4(&StringLiteral_23605/*"{0:N0}"*/, v24);
    sub_B0D8A4(&StringLiteral_753/*"-"*/, v25);
    sub_B0D8A4(&StringLiteral_14757/*"UNIT_INFO"*/, v26);
    sub_B0D8A4(&StringLiteral_12334/*"SPEND_NUM_TXT"*/, v27);
    sub_B0D8A4(&StringLiteral_3466/*"CURRENT_NUM_TXT"*/, v28);
    sub_B0D8A4(&StringLiteral_11287/*"RP_RECOVER_CMDSPELL_TXT"*/, v29);
    sub_B0D8A4(&StringLiteral_11289/*"RP_RECOVER_NUM_TXT"*/, v30);
    this = (RecoverItemComponent_o *)sub_B0D8A4(&StringLiteral_3129/*"CMDSPELL_CURRENT_NUM_TXT"*/, v31);
    byte_4217B60 = 1;
  }
  entity = 0LL;
  CommandSpell = 0;
  if ( !data )
    goto LABEL_100;
  v12->fields.currentType = data->fields.recoverType;
  v12->fields.recvTarget = data->fields.target;
  targetId = data->fields.targetId;
  v12->fields.isEnableSelect = 0;
  v12->fields.targetId = targetId;
  v12->fields.dialog = dlg;
  sub_B0D840(
    (BattleServantConfConponent_o *)&v12->fields.dialog,
    (System_Int32_array **)dlg,
    *(System_String_array ***)&needRp,
    (System_String_array **)dlg,
    (System_Boolean_array **)callback,
    (System_Int32_array **)method,
    v6,
    v7);
  v12->fields.callbackFunc = callback;
  sub_B0D840(
    (BattleServantConfConponent_o *)&v12->fields.callbackFunc,
    (System_Int32_array **)callback,
    v33,
    v34,
    v35,
    v36,
    v37,
    v38);
  this = (RecoverItemComponent_o *)v12->fields.maskImg;
  if ( !this )
    goto LABEL_100;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
  SelfUserGame = (System_Int32_array **)UserGameMaster__getSelfUserGame(0LL);
  v12->fields.userEntity = (struct UserGameEntity_o *)SelfUserGame;
  p_userEntity = (RecoverItemComponent_o **)&v12->fields.userEntity;
  sub_B0D840((BattleServantConfConponent_o *)&v12->fields.userEntity, SelfUserGame, v41, v42, v43, v44, v45, v46);
  this = (RecoverItemComponent_o *)v12->fields.userEntity;
  if ( !this )
    goto LABEL_100;
  v12->fields.usrCurrentRp = UserGameEntity__getRp((UserGameEntity_o *)this, 0LL);
  v47 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v47 = BalanceConfig_TypeInfo;
  }
  UerGameRpMax = v47->static_fields->UerGameRpMax;
  v12->fields.spendNum = 1;
  p_spendNum = &v12->fields.spendNum;
  this = (RecoverItemComponent_o *)v12->fields.itemNameLb;
  v12->fields.isAp = 0;
  v12->fields.usrMaxRp = UerGameRpMax;
  v12->fields.recvRpNum = UerGameRpMax;
  if ( !this )
    goto LABEL_100;
  UILabel__set_text((UILabel_o *)this, (System_String_o *)StringLiteral_753/*"-"*/, 0LL);
  this = (RecoverItemComponent_o *)v12->fields.currentNumLb;
  if ( !this )
    goto LABEL_100;
  UILabel__set_text((UILabel_o *)this, (System_String_o *)StringLiteral_753/*"-"*/, 0LL);
  this = (RecoverItemComponent_o *)v12->fields.spendNumLb;
  if ( !this )
    goto LABEL_100;
  UILabel__set_text((UILabel_o *)this, (System_String_o *)StringLiteral_753/*"-"*/, 0LL);
  this = (RecoverItemComponent_o *)v12->fields.itemDetailLb;
  if ( !this )
    goto LABEL_100;
  UILabel__set_text((UILabel_o *)this, (System_String_o *)StringLiteral_753/*"-"*/, 0LL);
  currentInfoLb = v12->fields.currentInfoLb;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  this = (RecoverItemComponent_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3466/*"CURRENT_NUM_TXT"*/, 0LL);
  if ( !currentInfoLb )
    goto LABEL_100;
  UILabel__set_text(currentInfoLb, (System_String_o *)this, 0LL);
  spendInfoLb = v12->fields.spendInfoLb;
  this = (RecoverItemComponent_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12334/*"SPEND_NUM_TXT"*/, 0LL);
  if ( !spendInfoLb )
    goto LABEL_100;
  UILabel__set_text(spendInfoLb, (System_String_o *)this, 0LL);
  currentType = v12->fields.currentType;
  if ( currentType == 1 )
  {
    this = (RecoverItemComponent_o *)v12->fields.itemIconInfo;
    if ( this )
    {
      this = (RecoverItemComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
      if ( this )
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
        this = (RecoverItemComponent_o *)v12->fields.cmdSpellBg;
        if ( this )
        {
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
          v74 = v12->fields.currentInfoLb;
          if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          }
          this = (RecoverItemComponent_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3129/*"CMDSPELL_CURRENT_NUM_TXT"*/, 0LL);
          if ( v74 )
          {
            UILabel__set_text(v74, (System_String_o *)this, 0LL);
            v75 = v12->fields.spendInfoLb;
            this = (RecoverItemComponent_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3130/*"CMDSPELL_SPEND_NUM_TXT"*/, 0LL);
            if ( v75 )
            {
              UILabel__set_text(v75, (System_String_o *)this, 0LL);
              this = (RecoverItemComponent_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
              if ( this )
              {
                this = (RecoverItemComponent_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                   (DataManager_o *)this,
                                                   (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_CommandSpellMaster___);
                if ( this )
                {
                  v76 = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                          (DataMasterBase_WarMaster__WarEntity__int__o *)this,
                          v12->fields.targetId,
                          (const MethodInfo_2669BD4 *)Method_DataMasterBase_CommandSpellMaster__CommandSpellEntity__int__GetEntity__);
                  if ( !v76 )
                    goto LABEL_99;
                  v77 = (CommandSpellEntity_o *)v76;
                  this = (RecoverItemComponent_o *)v12->fields.cmdSpellIcon;
                  if ( this )
                  {
                    CommandSpellIconComponent__SetData((CommandSpellIconComponent_o *)this, v12->fields.userEntity, 0LL);
                    this = (RecoverItemComponent_o *)v12->fields.itemNameLb;
                    if ( this )
                    {
                      UILabel__set_text((UILabel_o *)this, v77->fields.name, 0LL);
                      this = *p_userEntity;
                      if ( *p_userEntity )
                      {
                        CommandSpell = UserGameEntity__getCommandSpell((UserGameEntity_o *)this, 0LL);
                        *p_spendNum = v77->fields.consume;
                        this = (RecoverItemComponent_o *)CommandSpellEntity__getValues(v77, 0LL);
                        if ( this )
                        {
                          if ( !LODWORD(this->fields.itemIconInfo) )
                            goto LABEL_101;
                          cmdSpellBg = this->fields.cmdSpellBg;
                          if ( !cmdSpellBg )
                            goto LABEL_100;
                          if ( !LODWORD(cmdSpellBg[1].klass) )
                          {
LABEL_101:
                            v104 = sub_B0D9A8(this);
                            sub_B0D948(v104, 0LL);
                          }
                          monitor = (int)cmdSpellBg[1].monitor;
                          if ( needRp < 1 )
                          {
                            v80 = *p_spendNum;
                          }
                          else
                          {
                            v80 = UnityEngine_Mathf__CeilToInt(
                                    fmaxf((float)(needRp - v12->fields.usrCurrentRp) / (float)monitor, 1.0),
                                    0LL);
                            v12->fields.spendNum = v80;
                          }
                          v12->fields.recvRpNum = v80 * monitor;
                          if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                            && !LocalizationManager_TypeInfo->_2.cctor_finished )
                          {
                            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                          }
                          v94 = LocalizationManager__Get((System_String_o *)StringLiteral_3128/*"CMDSPELL_CURRENT_NUM"*/, 0LL);
                          spendNum = v12->fields.spendNum;
                          v95 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &spendNum);
                          v96 = System_String__Format(v94, v95, 0LL);
                          itemDetailLb = v12->fields.itemDetailLb;
                          v98 = (Il2CppObject *)v96;
                          v99 = LocalizationManager__Get((System_String_o *)StringLiteral_11287/*"RP_RECOVER_CMDSPELL_TXT"*/, 0LL);
                          recvRpNum = v12->fields.recvRpNum;
                          v100 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &recvRpNum);
                          this = (RecoverItemComponent_o *)System_String__Format_43845440(v99, v98, v100, 0LL);
                          if ( itemDetailLb )
                          {
                            UILabel__set_text(itemDetailLb, (System_String_o *)this, 0LL);
                            currentNumLb = v12->fields.currentNumLb;
                            this = (RecoverItemComponent_o *)System_Int32__ToString((int32_t)&CommandSpell, 0LL);
                            if ( currentNumLb )
                            {
                              UILabel__set_text(currentNumLb, (System_String_o *)this, 0LL);
                              spendNumLb = v12->fields.spendNumLb;
                              this = (RecoverItemComponent_o *)System_Int32__ToString((int)v12 + 120, 0LL);
                              if ( spendNumLb )
                              {
                                UILabel__set_text(spendNumLb, (System_String_o *)this, 0LL);
                                v68 = CommandSpell < v12->fields.spendNum;
                                v69 = v12->fields.recvRpNum + v12->fields.usrCurrentRp;
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
    this = (RecoverItemComponent_o *)v12->fields.itemIconInfo;
    if ( this )
    {
      this = (RecoverItemComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
      if ( this )
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
        this = (RecoverItemComponent_o *)v12->fields.cmdSpellBg;
        if ( this )
        {
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
          RecvItemData = RecoverEntity__getRecvItemData(data, v70);
          if ( !RecvItemData )
            goto LABEL_99;
          v72 = RecvItemData;
          this = (RecoverItemComponent_o *)v12->fields.itemIconInfo;
          if ( this )
          {
            ItemIconComponent__SetItemImage_26855044(
              (ItemIconComponent_o *)this,
              v72->fields.imageId,
              v72->fields.bgImageId,
              v72->fields.type,
              0,
              0LL);
            this = (RecoverItemComponent_o *)v12->fields.itemIconInfo;
            if ( this )
            {
              this = (RecoverItemComponent_o *)UnityEngine_Component__get_gameObject(
                                                 (UnityEngine_Component_o *)this,
                                                 0LL);
              if ( this )
              {
                UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
                this = (RecoverItemComponent_o *)v12->fields.itemNameLb;
                if ( this )
                {
                  UILabel__set_text((UILabel_o *)this, v72->fields.name, 0LL);
                  this = (RecoverItemComponent_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
                  if ( this )
                  {
                    this = (RecoverItemComponent_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                       (DataManager_o *)this,
                                                       (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_UserItemMaster___);
                    if ( *p_userEntity )
                    {
                      if ( this )
                      {
                        UserItemMaster__TryGetEntity(
                          (UserItemMaster_o *)this,
                          &entity,
                          *(_QWORD *)&(*p_userEntity)->fields.m_CachedPtr,
                          v12->fields.targetId,
                          0LL);
                        v12->fields.spendNum = 1;
                        if ( entity )
                          num = entity->fields.num;
                        else
                          num = 0;
                        value = v72->fields.value;
                        if ( needRp < 1 )
                        {
                          *p_spendNum = 1;
                        }
                        else
                        {
                          v82 = UnityEngine_Mathf__CeilToInt(
                                  fmaxf((float)(needRp - v12->fields.usrCurrentRp) / (float)value, 1.0),
                                  0LL);
                          v12->fields.spendNum = v82;
                          value *= v82;
                        }
                        v12->fields.recvRpNum = value;
                        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                          && !LocalizationManager_TypeInfo->_2.cctor_finished )
                        {
                          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                        }
                        v83 = LocalizationManager__Get((System_String_o *)StringLiteral_14757/*"UNIT_INFO"*/, 0LL);
                        spendNum = v12->fields.spendNum;
                        v84 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &spendNum);
                        v85 = System_String__Format(v83, v84, 0LL);
                        v86 = v12->fields.itemDetailLb;
                        v87 = (Il2CppObject *)v85;
                        v88 = LocalizationManager__Get((System_String_o *)StringLiteral_11289/*"RP_RECOVER_NUM_TXT"*/, 0LL);
                        recvRpNum = v12->fields.recvRpNum;
                        v89 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &recvRpNum);
                        this = (RecoverItemComponent_o *)System_String__Format_43845440(v88, v87, v89, 0LL);
                        if ( v86 )
                        {
                          UILabel__set_text(v86, (System_String_o *)this, 0LL);
                          v90 = v12->fields.currentNumLb;
                          v105 = num;
                          v91 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v105);
                          this = (RecoverItemComponent_o *)System_String__Format(
                                                             (System_String_o *)StringLiteral_23605/*"{0:N0}"*/,
                                                             v91,
                                                             0LL);
                          if ( v90 )
                          {
                            UILabel__set_text(v90, (System_String_o *)this, 0LL);
                            v92 = v12->fields.spendNumLb;
                            this = (RecoverItemComponent_o *)System_Int32__ToString((int)v12 + 120, 0LL);
                            if ( v92 )
                            {
                              UILabel__set_text(v92, (System_String_o *)this, 0LL);
                              v93 = v12->fields.recvRpNum + v12->fields.usrCurrentRp;
                              v12->fields.isEnableSelect = num >= v12->fields.spendNum;
                              v12->fields.recvSum = v93;
                              v12->fields.targetId = data->fields.id;
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
  this = (RecoverItemComponent_o *)v12->fields.itemIconInfo;
  if ( !this )
    goto LABEL_100;
  this = (RecoverItemComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !this )
    goto LABEL_100;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
  this = (RecoverItemComponent_o *)v12->fields.cmdSpellBg;
  if ( !this )
    goto LABEL_100;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
  this = (RecoverItemComponent_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_100;
  this = (RecoverItemComponent_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                     (DataManager_o *)this,
                                     (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_ItemMaster___);
  if ( !this )
    goto LABEL_100;
  this = (RecoverItemComponent_o *)ItemMaster__GetEntityByType((ItemMaster_o *)this, 2, 0LL);
  if ( !this )
    goto LABEL_100;
  v54 = this;
  this = (RecoverItemComponent_o *)v12->fields.itemIconInfo;
  if ( !this )
    goto LABEL_100;
  ItemIconComponent__SetItemImage_26855044(
    (ItemIconComponent_o *)this,
    (int32_t)v54->fields.cmdSpellIcon,
    HIDWORD(v54->fields.cmdSpellIcon),
    (int32_t)v54->fields.itemNameLb,
    0,
    0LL);
  this = (RecoverItemComponent_o *)v12->fields.itemIconInfo;
  if ( !this )
    goto LABEL_100;
  this = (RecoverItemComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !this )
    goto LABEL_100;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
  this = (RecoverItemComponent_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_100;
  this = (RecoverItemComponent_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                     (DataManager_o *)this,
                                     (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_StoneShopMaster___);
  if ( !this )
    goto LABEL_100;
  this = (RecoverItemComponent_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                     (DataMasterBase_WarMaster__WarEntity__int__o *)this,
                                     v12->fields.targetId,
                                     (const MethodInfo_2669BD4 *)Method_DataMasterBase_StoneShopMaster__StoneShopEntity__int__GetEntity__);
  if ( !v12->fields.itemNameLb )
    goto LABEL_100;
  v55 = this;
  UILabel__set_text(v12->fields.itemNameLb, (System_String_o *)v54->fields.itemIconInfo, 0LL);
  if ( !*p_userEntity )
    goto LABEL_100;
  recvTarget = (*p_userEntity)->fields.recvTarget;
  if ( v55 )
    *p_spendNum = HIDWORD(v55->fields.cmdSpellIcon);
  v57 = v12->fields.currentNumLb;
  spendNum = recvTarget;
  v58 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &spendNum);
  this = (RecoverItemComponent_o *)System_String__Format((System_String_o *)StringLiteral_23605/*"{0:N0}"*/, v58, 0LL);
  if ( !v57 )
    goto LABEL_100;
  UILabel__set_text(v57, (System_String_o *)this, 0LL);
  v59 = v12->fields.spendNumLb;
  this = (RecoverItemComponent_o *)System_Int32__ToString((int)v12 + 120, 0LL);
  if ( !v59 )
    goto LABEL_100;
  UILabel__set_text(v59, (System_String_o *)this, 0LL);
  RecoverItemComponent__AttachStoneCountRefreshComponent(v12, v60);
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v61 = LocalizationManager__Get((System_String_o *)StringLiteral_14757/*"UNIT_INFO"*/, 0LL);
  recvRpNum = v12->fields.spendNum;
  v62 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &recvRpNum);
  v63 = System_String__Format(v61, v62, 0LL);
  v64 = v12->fields.itemDetailLb;
  v65 = (Il2CppObject *)v63;
  v66 = LocalizationManager__Get((System_String_o *)StringLiteral_11289/*"RP_RECOVER_NUM_TXT"*/, 0LL);
  v105 = v12->fields.recvRpNum;
  v67 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v105);
  this = (RecoverItemComponent_o *)System_String__Format_43845440(v66, v65, v67, 0LL);
  if ( !v64 )
LABEL_100:
    sub_B0D97C(this);
  UILabel__set_text(v64, (System_String_o *)this, 0LL);
  v68 = recvTarget < v12->fields.spendNum;
  v69 = v12->fields.recvRpNum + v12->fields.usrCurrentRp;
LABEL_95:
  v103 = !v68;
  v12->fields.isEnableSelect = v103;
  v12->fields.recvSum = v69;
LABEL_99:
  RecoverItemComponent__setEnableSelectItem(v12, v52);
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
  DataManager_o *Instance; // x0
  __int64 v19; // x1
  System_Collections_Generic_List_string__c *klass; // x8
  RecoverItemComponent_CallbackFunc_o *callbackFunc; // x20
  CommonUI_o *v22; // x19
  __int64 v23; // x1
  __int64 v24; // x2
  System_String_o *v25; // x20
  RecoverItemComponent___c_c *v26; // x8
  struct RecoverItemComponent___c_StaticFields *static_fields; // x9
  System_Action_o *_9__43_0; // x22
  System_String_o *v29; // x21
  Il2CppObject *v30; // x23
  struct RecoverItemComponent___c_StaticFields *v31; // x0
  System_String_array **v32; // x2
  System_String_array **v33; // x3
  System_Boolean_array **v34; // x4
  System_Int32_array **v35; // x5
  System_Int32_array *v36; // x6
  System_Int32_array *v37; // x7

  if ( (byte_4217B65 & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, method);
    sub_B0D8A4(&Method_DataManager_GetMasterData_EventMaster___, v9);
    sub_B0D8A4(&LocalizationManager_TypeInfo, v10);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v12);
    sub_B0D8A4(&TerminalSceneComponent_TypeInfo, v13);
    sub_B0D8A4(&Method_RecoverItemComponent___c__setRequestInfo_b__43_0__, v14);
    sub_B0D8A4(&RecoverItemComponent___c_TypeInfo, v15);
    sub_B0D8A4(&StringLiteral_11290/*"RP_UNRECOVERABLE_MESSAGE"*/, v16);
    sub_B0D8A4(&StringLiteral_1/*""*/, v17);
    byte_4217B65 = 1;
  }
  if ( this->fields.recvTarget != 2 )
    goto LABEL_16;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_32;
  DataManager__GetMasterData_WarQuestSelectionMaster_(
    Instance,
    (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_EventMaster___);
  if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  }
  if ( !byte_421083D )
  {
    sub_B0D8A4(&TerminalSceneComponent_TypeInfo, v19);
    byte_421083D = 1;
  }
  Instance = (DataManager_o *)TerminalSceneComponent_TypeInfo;
  if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    Instance = (DataManager_o *)TerminalSceneComponent_TypeInfo;
  }
  klass = Instance[1].fields.saveNameList->klass;
  if ( !klass || (Instance = *(DataManager_o **)&klass->_2.instance_size) == 0LL )
LABEL_32:
    sub_B0D97C(Instance);
  if ( !ScrPlayerStatus__IsBPActive((ScrPlayerStatus_o *)Instance, 0LL) )
  {
    v22 = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    Instance = (DataManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11290/*"RP_UNRECOVERABLE_MESSAGE"*/, 0LL);
    v25 = (System_String_o *)Instance;
    v26 = RecoverItemComponent___c_TypeInfo;
    if ( (BYTE3(RecoverItemComponent___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !RecoverItemComponent___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(RecoverItemComponent___c_TypeInfo);
      v26 = RecoverItemComponent___c_TypeInfo;
    }
    static_fields = v26->static_fields;
    _9__43_0 = static_fields->__9__43_0;
    v29 = (System_String_o *)StringLiteral_1/*""*/;
    if ( !_9__43_0 )
    {
      if ( (BYTE3(v26->vtable._0_Equals.methodPtr) & 4) != 0 && !v26->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v26);
        static_fields = RecoverItemComponent___c_TypeInfo->static_fields;
      }
      v30 = (Il2CppObject *)static_fields->__9;
      _9__43_0 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v23, v24);
      System_Action___ctor(_9__43_0, v30, Method_RecoverItemComponent___c__setRequestInfo_b__43_0__, 0LL);
      v31 = RecoverItemComponent___c_TypeInfo->static_fields;
      v31->__9__43_0 = _9__43_0;
      sub_B0D840(
        (BattleServantConfConponent_o *)&v31->__9__43_0,
        (System_Int32_array **)_9__43_0,
        v32,
        v33,
        v34,
        v35,
        v36,
        v37);
    }
    if ( v22 )
    {
      CommonUI__OpenNotificationDialog(v22, v29, v25, _9__43_0, -1, 0, 0, 0, 1, 0, 1, 0, 0LL, 0LL);
      return;
    }
    goto LABEL_32;
  }
LABEL_16:
  callbackFunc = this->fields.callbackFunc;
  if ( callbackFunc )
  {
    this->fields.callbackFunc = 0LL;
    sub_B0D840((BattleServantConfConponent_o *)&this->fields.callbackFunc, 0LL, v2, v3, v4, v5, v6, v7);
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
  CommonUI_o *v10; // x21
  System_Action_o *v11; // x20

  if ( (byte_4217B63 & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, isRes);
    sub_B0D8A4(&Method_RecoverItemComponent_setRequestInfo__, v5);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6);
    byte_4217B63 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v10 = Instance;
  if ( isRes )
  {
    v11 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v8, v9);
    System_Action___ctor(v11, (Il2CppObject *)this, Method_RecoverItemComponent_setRequestInfo__, 0LL);
    if ( v10 )
    {
      CommonUI__CloseConfirmDialog_17017160(v10, v11, 0LL);
      return;
    }
LABEL_8:
    sub_B0D97C(Instance);
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
  __int64 v4; // x8
  intptr_t *p_method; // x0

  v4 = **(_QWORD **)&method;
  *(_QWORD *)&this->fields.method = object;
  p_method = &this->fields.method;
  *((_QWORD *)p_method + 1) = *(_QWORD *)&method;
  *((_QWORD *)p_method - 2) = v4;
  sub_B0D840(p_method, object);
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
  if ( (byte_4212521 & 1) == 0 )
  {
    sub_B0D8A4(&int_TypeInfo, *(_QWORD *)&type);
    sub_B0D8A4(&RecoverType_Type_TypeInfo, v10);
    byte_4212521 = 1;
  }
  v12[3] = 0LL;
  v12[0] = j_il2cpp_value_box_0(RecoverType_Type_TypeInfo, &v15);
  v12[1] = j_il2cpp_value_box_0(int_TypeInfo, &v14);
  v12[2] = j_il2cpp_value_box_0(int_TypeInfo, &v13);
  return (System_IAsyncResult_o *)sub_B0D848(this, v12, callback, object);
}


void __fastcall RecoverItemComponent_CallbackFunc__EndInvoke(
        RecoverItemComponent_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B0D84C(result, 0LL, method);
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
        sub_B0D960(*(_QWORD *)&v22->fields.extra_arg, *(_QWORD *)&type, *(_QWORD *)&id, *(_QWORD *)&num);
      if ( (sub_B0D8D4(v24) & 1) == 0 )
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
      v26 = sub_B0D8CC(v24);
      v27 = sub_B0DCD0(v24);
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
            v20 = sub_AA67A0(v23, v30, v31);
          }
          v19 = *(_QWORD *)(v20 + 8);
        }
        else
        {
          v19 = *(_QWORD *)(*v23 + 16LL * *(unsigned __int16 *)(v24 + 72) + 320);
        }
        v21 = (void (__fastcall **)(__int64 *, _QWORD, _QWORD, _QWORD, _QWORD))sub_B0D954(v19, v24);
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
            v18 = sub_AA67A0(v23, class_0, v12);
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
  Il2CppObject *v3; // x19
  struct RecoverItemComponent___c_StaticFields *static_fields; // x0

  if ( (byte_421251F & 1) == 0 )
  {
    sub_B0D8A4(&RecoverItemComponent___c_TypeInfo, v1);
    byte_421251F = 1;
  }
  v3 = (Il2CppObject *)sub_B0D974(RecoverItemComponent___c_TypeInfo, v1, v2);
  System_Object___ctor(v3, 0LL);
  static_fields = RecoverItemComponent___c_TypeInfo->static_fields;
  static_fields->__9 = (struct RecoverItemComponent___c_o *)v3;
  sub_B0D840(static_fields, v3);
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

  if ( (byte_4212520 & 1) == 0 )
  {
    sub_B0D8A4(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, method);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v2);
    byte_4212520 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance
    || (CommonUI__CloseRecoverItemListDialog(Instance, 0LL),
        (Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__)) == 0LL) )
  {
    sub_B0D97C(Instance);
  }
  AvalonSceneManager__transitionSceneRefresh((AvalonSceneManager_o *)Instance, 34, 1, 0LL, 0, 0LL);
}