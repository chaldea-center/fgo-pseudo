void __fastcall RecoverItemComponent___cctor(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_418AD2C & 1) == 0 )
  {
    sub_B2C35C(&RecoverItemComponent_TypeInfo, v1);
    byte_418AD2C = 1;
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
  System_Action_int__o *v6; // x21

  if ( (byte_418AD26 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Action_int___ctor__, method);
    sub_B2C35C(&System_Action_int__TypeInfo, v3);
    sub_B2C35C(&Method_RecoverItemComponent__AttachStoneCountRefreshComponent_b__38_0__, v4);
    byte_418AD26 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v6 = (System_Action_int__o *)sub_B2C42C(System_Action_int__TypeInfo);
  System_Action_int____ctor(
    v6,
    (Il2CppObject *)this,
    Method_RecoverItemComponent__AttachStoneCountRefreshComponent_b__38_0__,
    (const MethodInfo_24BA548 *)Method_System_Action_int___ctor__);
  StoneCountRefreshComponent__AttachToGameObject(gameObject, v6, 1, 0LL);
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
  System_Action_o *v10; // x21
  CommonUI_o *Instance; // x0
  __int64 v12; // x1
  System_Action_o *v13; // x1

  if ( (byte_418AD29 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, isRes);
    sub_B2C35C(&Method_RecoverItemComponent_setRequestInfo__, v7);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v8);
    byte_418AD29 = 1;
  }
  if ( !isRes )
  {
    Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( Instance )
    {
      v13 = 0LL;
      goto LABEL_8;
    }
LABEL_9:
    sub_B2C434(Instance, v12);
  }
  this->fields.spendNum = useNum;
  v9 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v10 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
  System_Action___ctor(v10, (Il2CppObject *)this, Method_RecoverItemComponent_setRequestInfo__, 0LL);
  if ( !v9 )
    goto LABEL_9;
  Instance = (CommonUI_o *)v9;
  v13 = v10;
LABEL_8:
  CommonUI__CloseApRecoverConfirmDlg(Instance, v13, 0LL);
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
  __int64 v31; // x1
  RecoverDlgComponent_o *userEntity; // x0
  System_String_o *v33; // x27
  System_String_o *v34; // x21
  Il2CppObject *v35; // x0
  System_Int32_array **v36; // x24
  System_Int32_array **mText; // x23
  System_String_o *v38; // x21
  Il2CppObject *v39; // x0
  struct UILabel_o *itemNameLb; // x8
  System_String_o *v41; // x21
  System_String_o *v42; // x22
  int32_t recvSum; // w8
  int32_t usrMaxAp; // w9
  System_String_o **v45; // x8
  System_String_o *v46; // x25
  System_String_o *v47; // x25
  System_String_array **v48; // x2
  System_String_array **v49; // x3
  System_Boolean_array **v50; // x4
  System_Int32_array **v51; // x5
  System_Int32_array *v52; // x6
  System_Int32_array *v53; // x7
  System_Object_array *v54; // x26
  System_String_array **v55; // x2
  System_String_array **v56; // x3
  System_Boolean_array **v57; // x4
  System_Int32_array **v58; // x5
  System_Int32_array *v59; // x6
  System_Int32_array *v60; // x7
  System_String_array **v61; // x2
  System_String_array **v62; // x3
  System_Boolean_array **v63; // x4
  System_Int32_array **v64; // x5
  System_Int32_array *v65; // x6
  System_Int32_array *v66; // x7
  System_Int32_array **v67; // x24
  System_String_array **v68; // x2
  System_String_array **v69; // x3
  System_Boolean_array **v70; // x4
  System_Int32_array **v71; // x5
  System_Int32_array *v72; // x6
  System_Int32_array *v73; // x7
  System_Int32_array **v74; // x24
  System_String_array **v75; // x2
  System_String_array **v76; // x3
  System_Boolean_array **v77; // x4
  System_Int32_array **v78; // x5
  System_Int32_array *v79; // x6
  System_Int32_array *v80; // x7
  System_Int32_array **v81; // x24
  System_String_array **v82; // x2
  System_String_array **v83; // x3
  System_Boolean_array **v84; // x4
  System_Int32_array **v85; // x5
  System_Int32_array *v86; // x6
  System_Int32_array *v87; // x7
  System_Int32_array **v88; // x24
  System_String_array **v89; // x2
  System_String_array **v90; // x3
  System_Boolean_array **v91; // x4
  System_Int32_array **v92; // x5
  System_Int32_array *v93; // x6
  System_Int32_array *v94; // x7
  System_Int32_array **v95; // x24
  BattleServantConfConponent_o *v96; // x0
  System_String_o *v97; // x25
  System_String_array **v98; // x2
  System_String_array **v99; // x3
  System_Boolean_array **v100; // x4
  System_Int32_array **v101; // x5
  System_Int32_array *v102; // x6
  System_Int32_array *v103; // x7
  System_Object_array *v104; // x26
  System_String_array **v105; // x2
  System_String_array **v106; // x3
  System_Boolean_array **v107; // x4
  System_Int32_array **v108; // x5
  System_Int32_array *v109; // x6
  System_Int32_array *v110; // x7
  System_String_array **v111; // x2
  System_String_array **v112; // x3
  System_Boolean_array **v113; // x4
  System_Int32_array **v114; // x5
  System_Int32_array *v115; // x6
  System_Int32_array *v116; // x7
  System_Int32_array **v117; // x24
  System_String_array **v118; // x2
  System_String_array **v119; // x3
  System_Boolean_array **v120; // x4
  System_Int32_array **v121; // x5
  System_Int32_array *v122; // x6
  System_Int32_array *v123; // x7
  System_Int32_array **v124; // x24
  System_String_array **v125; // x2
  System_String_array **v126; // x3
  System_Boolean_array **v127; // x4
  System_Int32_array **v128; // x5
  System_Int32_array *v129; // x6
  System_Int32_array *v130; // x7
  System_Int32_array **v131; // x24
  System_String_array **v132; // x2
  System_String_array **v133; // x3
  System_Boolean_array **v134; // x4
  System_Int32_array **v135; // x5
  System_Int32_array *v136; // x6
  System_Int32_array *v137; // x7
  System_Int32_array **v138; // x24
  System_String_array **v139; // x2
  System_String_array **v140; // x3
  System_Boolean_array **v141; // x4
  System_Int32_array **v142; // x5
  System_Int32_array *v143; // x6
  System_Int32_array *v144; // x7
  System_Int32_array **v145; // x24
  System_String_o *v146; // x24
  WebViewManager_o *v147; // x23
  CommonConfirmDialog_ClickDelegate_o *v148; // x25
  float v149; // s1
  CommonUI_o *v150; // x0
  struct BalanceConfig_StaticFields *static_fields; // x8
  System_String_o *v152; // x1
  System_String_o **v153; // x8
  System_String_o *v154; // x25
  System_String_array **v155; // x2
  System_String_array **v156; // x3
  System_Boolean_array **v157; // x4
  System_Int32_array **v158; // x5
  System_Int32_array *v159; // x6
  System_Int32_array *v160; // x7
  System_String_array **v161; // x2
  System_String_array **v162; // x3
  System_Boolean_array **v163; // x4
  System_Int32_array **v164; // x5
  System_Int32_array *v165; // x6
  System_Int32_array *v166; // x7
  System_String_array **v167; // x2
  System_String_array **v168; // x3
  System_Boolean_array **v169; // x4
  System_Int32_array **v170; // x5
  System_Int32_array *v171; // x6
  System_Int32_array *v172; // x7
  System_Int32_array **v173; // x24
  System_String_array **v174; // x2
  System_String_array **v175; // x3
  System_Boolean_array **v176; // x4
  System_Int32_array **v177; // x5
  System_Int32_array *v178; // x6
  System_Int32_array *v179; // x7
  System_Int32_array **v180; // x24
  System_String_array **v181; // x2
  System_String_array **v182; // x3
  System_Boolean_array **v183; // x4
  System_Int32_array **v184; // x5
  System_Int32_array *v185; // x6
  System_Int32_array *v186; // x7
  System_Int32_array **v187; // x24
  System_String_array **v188; // x2
  System_String_array **v189; // x3
  System_Boolean_array **v190; // x4
  System_Int32_array **v191; // x5
  System_Int32_array *v192; // x6
  System_Int32_array *v193; // x7
  System_Int32_array **v194; // x24
  System_String_array **v195; // x2
  System_String_array **v196; // x3
  System_Boolean_array **v197; // x4
  System_Int32_array **v198; // x5
  System_Int32_array *v199; // x6
  System_Int32_array *v200; // x7
  System_Int32_array **v201; // x24
  System_String_o *v202; // x23
  CommonUI_o *v203; // x25
  CommonConfirmDialog_ClickDelegate_o *v204; // x26
  System_String_o *v205; // x0
  System_String_o *v206; // x20
  CommonUI_o *Instance; // x21
  System_Action_o *v208; // x22
  System_String_o *v209; // x0
  System_String_o *v210; // x20
  CommonUI_o *v211; // x21
  System_Action_o *v212; // x22
  WebViewManager_o *v213; // x23
  WebViewManager_o *v214; // x0
  int32_t targetId; // w20
  int32_t needAp; // w21
  CommonUI_o *v217; // x22
  System_Action_bool__int__o *v218; // x23
  __int64 v219; // x0
  __int64 v220; // x0
  int32_t v221; // [xsp+38h] [xbp-68h] BYREF
  int32_t v222; // [xsp+3Ch] [xbp-64h] BYREF
  int32_t v223; // [xsp+40h] [xbp-60h] BYREF
  int32_t usrMaxRp; // [xsp+44h] [xbp-5Ch] BYREF
  int32_t usrCurrentAp; // [xsp+48h] [xbp-58h] BYREF
  int32_t spendNum; // [xsp+4Ch] [xbp-54h] BYREF

  if ( (byte_418AD27 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Action_bool__int___ctor__, method);
    sub_B2C35C(&System_Action_bool__int__TypeInfo, v3);
    sub_B2C35C(&System_Action_TypeInfo, v4);
    sub_B2C35C(&BalanceConfig_TypeInfo, v5);
    sub_B2C35C(&CommonConfirmDialog_ClickDelegate_TypeInfo, v6);
    sub_B2C35C(&int_TypeInfo, v7);
    sub_B2C35C(&LocalizationManager_TypeInfo, v8);
    sub_B2C35C(&object___TypeInfo, v9);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v10);
    sub_B2C35C(&Method_RecoverItemComponent_CloseApRecovDlg__, v11);
    sub_B2C35C(&Method_RecoverItemComponent_closeNotificationDlg__, v12);
    sub_B2C35C(&Method_RecoverItemComponent_spendItemDlg__, v13);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v14);
    sub_B2C35C(&SoundManager_TypeInfo, v15);
    sub_B2C35C(&StringLiteral_11261/*"RP_RECOVER_CONFIRM_MSG"*/, v16);
    sub_B2C35C(&StringLiteral_3116/*"CMDSPELL_CURRENT_NUM"*/, v17);
    sub_B2C35C(&StringLiteral_3257/*"COMMAND_SPELL_TXT"*/, v18);
    sub_B2C35C(&StringLiteral_1728/*"AP_RECOVER_CONFIRM_MSG"*/, v19);
    sub_B2C35C(&StringLiteral_11259/*"RP_FULL_MSG"*/, v20);
    sub_B2C35C(&StringLiteral_14712/*"UNIT_INFO"*/, v21);
    sub_B2C35C(&StringLiteral_1724/*"AP_ADD_CONFIRM_MSG"*/, v22);
    sub_B2C35C(&StringLiteral_3262/*"COMMON_CONFIRM_DECIDE"*/, v23);
    sub_B2C35C(&StringLiteral_3260/*"COMMON_CONFIRM_CANCEL"*/, v24);
    sub_B2C35C(&StringLiteral_1725/*"AP_ADD_CONFIRM_MSG_OVER"*/, v25);
    sub_B2C35C(&StringLiteral_1729/*"AP_RECOVER_CONFIRM_MSG_OVER"*/, v26);
    sub_B2C35C(&StringLiteral_1726/*"AP_FULL_MSG"*/, v27);
    sub_B2C35C(&StringLiteral_1/*""*/, v28);
    sub_B2C35C(&StringLiteral_1734/*"AP_RECOVER_STONEPAY_WARNING_MSG"*/, v29);
    byte_418AD27 = 1;
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
  v33 = (System_String_o *)StringLiteral_1/*""*/;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v34 = LocalizationManager__Get((System_String_o *)StringLiteral_14712/*"UNIT_INFO"*/, 0LL);
  spendNum = this->fields.spendNum;
  v35 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &spendNum);
  userEntity = (RecoverDlgComponent_o *)System_String__Format(v34, v35, 0LL);
  v36 = (System_Int32_array **)userEntity;
  if ( this->fields.currentType == 1 )
  {
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    mText = (System_Int32_array **)LocalizationManager__Get((System_String_o *)StringLiteral_3257/*"COMMAND_SPELL_TXT"*/, 0LL);
    if ( this->fields.currentType == 1 )
    {
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v38 = LocalizationManager__Get((System_String_o *)StringLiteral_3116/*"CMDSPELL_CURRENT_NUM"*/, 0LL);
      spendNum = this->fields.spendNum;
      v39 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &spendNum);
      v36 = (System_Int32_array **)System_String__Format(v38, v39, 0LL);
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
  v41 = LocalizationManager__Get((System_String_o *)StringLiteral_3262/*"COMMON_CONFIRM_DECIDE"*/, 0LL);
  v42 = LocalizationManager__Get((System_String_o *)StringLiteral_3260/*"COMMON_CONFIRM_CANCEL"*/, 0LL);
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
        v45 = (System_String_o **)&StringLiteral_1724/*"AP_ADD_CONFIRM_MSG"*/;
      else
        v45 = (System_String_o **)&StringLiteral_1725/*"AP_ADD_CONFIRM_MSG_OVER"*/;
      v46 = *v45;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v47 = LocalizationManager__Get(v46, 0LL);
      userEntity = (RecoverDlgComponent_o *)sub_B2C374(object___TypeInfo, 7LL);
      if ( !userEntity )
        goto LABEL_160;
      v54 = (System_Object_array *)userEntity;
      if ( !mText
        || (userEntity = (RecoverDlgComponent_o *)sub_B2C41C(mText, userEntity->klass->_1.element_class)) != 0LL )
      {
        if ( !v54->max_length )
          goto LABEL_159;
        v54->m_Items[0] = (Il2CppObject *)mText;
        sub_B2C2F8((BattleServantConfConponent_o *)v54->m_Items, mText, v48, v49, v50, v51, v52, v53);
        if ( !v36 || (userEntity = (RecoverDlgComponent_o *)sub_B2C41C(v36, v54->obj.klass->_1.element_class)) != 0LL )
        {
          if ( v54->max_length <= 1 )
            goto LABEL_159;
          v54->m_Items[1] = (Il2CppObject *)v36;
          sub_B2C2F8((BattleServantConfConponent_o *)&v54->m_Items[1], v36, v55, v56, v57, v58, v59, v60);
          spendNum = this->fields.recvApNum;
          userEntity = (RecoverDlgComponent_o *)j_il2cpp_value_box_0(int_TypeInfo, &spendNum);
          v67 = (System_Int32_array **)userEntity;
          if ( !userEntity
            || (userEntity = (RecoverDlgComponent_o *)sub_B2C41C(userEntity, v54->obj.klass->_1.element_class)) != 0LL )
          {
            if ( v54->max_length <= 2 )
              goto LABEL_159;
            v54->m_Items[2] = (Il2CppObject *)v67;
            sub_B2C2F8((BattleServantConfConponent_o *)&v54->m_Items[2], v67, v61, v62, v63, v64, v65, v66);
            usrCurrentAp = this->fields.usrCurrentAp;
            userEntity = (RecoverDlgComponent_o *)j_il2cpp_value_box_0(int_TypeInfo, &usrCurrentAp);
            v74 = (System_Int32_array **)userEntity;
            if ( !userEntity
              || (userEntity = (RecoverDlgComponent_o *)sub_B2C41C(userEntity, v54->obj.klass->_1.element_class)) != 0LL )
            {
              if ( v54->max_length <= 3 )
                goto LABEL_159;
              v54->m_Items[3] = (Il2CppObject *)v74;
              sub_B2C2F8((BattleServantConfConponent_o *)&v54->m_Items[3], v74, v68, v69, v70, v71, v72, v73);
              usrMaxRp = this->fields.usrMaxAp;
              userEntity = (RecoverDlgComponent_o *)j_il2cpp_value_box_0(int_TypeInfo, &usrMaxRp);
              v81 = (System_Int32_array **)userEntity;
              if ( !userEntity
                || (userEntity = (RecoverDlgComponent_o *)sub_B2C41C(userEntity, v54->obj.klass->_1.element_class)) != 0LL )
              {
                if ( v54->max_length <= 4 )
                  goto LABEL_159;
                v54->m_Items[4] = (Il2CppObject *)v81;
                sub_B2C2F8((BattleServantConfConponent_o *)&v54->m_Items[4], v81, v75, v76, v77, v78, v79, v80);
                v223 = this->fields.recvSum;
                userEntity = (RecoverDlgComponent_o *)j_il2cpp_value_box_0(int_TypeInfo, &v223);
                v88 = (System_Int32_array **)userEntity;
                if ( !userEntity
                  || (userEntity = (RecoverDlgComponent_o *)sub_B2C41C(userEntity, v54->obj.klass->_1.element_class)) != 0LL )
                {
                  if ( v54->max_length <= 5 )
                    goto LABEL_159;
                  v54->m_Items[5] = (Il2CppObject *)v88;
                  sub_B2C2F8((BattleServantConfConponent_o *)&v54->m_Items[5], v88, v82, v83, v84, v85, v86, v87);
                  v222 = this->fields.usrMaxAp;
                  userEntity = (RecoverDlgComponent_o *)j_il2cpp_value_box_0(int_TypeInfo, &v222);
                  v95 = (System_Int32_array **)userEntity;
                  if ( !userEntity
                    || (userEntity = (RecoverDlgComponent_o *)sub_B2C41C(userEntity, v54->obj.klass->_1.element_class)) != 0LL )
                  {
                    if ( v54->max_length > 6 )
                    {
                      v54->m_Items[6] = (Il2CppObject *)v95;
                      v96 = (BattleServantConfConponent_o *)&v54->m_Items[6];
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
        v153 = (System_String_o **)&StringLiteral_1728/*"AP_RECOVER_CONFIRM_MSG"*/;
      else
        v153 = (System_String_o **)&StringLiteral_1729/*"AP_RECOVER_CONFIRM_MSG_OVER"*/;
      v154 = *v153;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v47 = LocalizationManager__Get(v154, 0LL);
      userEntity = (RecoverDlgComponent_o *)sub_B2C374(object___TypeInfo, 8LL);
      if ( !userEntity )
        goto LABEL_160;
      v54 = (System_Object_array *)userEntity;
      if ( !mText
        || (userEntity = (RecoverDlgComponent_o *)sub_B2C41C(mText, userEntity->klass->_1.element_class)) != 0LL )
      {
        if ( !v54->max_length )
          goto LABEL_159;
        v54->m_Items[0] = (Il2CppObject *)mText;
        sub_B2C2F8((BattleServantConfConponent_o *)v54->m_Items, mText, v155, v156, v157, v158, v159, v160);
        if ( !v36 || (userEntity = (RecoverDlgComponent_o *)sub_B2C41C(v36, v54->obj.klass->_1.element_class)) != 0LL )
        {
          if ( v54->max_length <= 1 )
            goto LABEL_159;
          v54->m_Items[1] = (Il2CppObject *)v36;
          sub_B2C2F8((BattleServantConfConponent_o *)&v54->m_Items[1], v36, v161, v162, v163, v164, v165, v166);
          spendNum = this->fields.apRcvRate;
          userEntity = (RecoverDlgComponent_o *)j_il2cpp_value_box_0(int_TypeInfo, &spendNum);
          v173 = (System_Int32_array **)userEntity;
          if ( !userEntity
            || (userEntity = (RecoverDlgComponent_o *)sub_B2C41C(userEntity, v54->obj.klass->_1.element_class)) != 0LL )
          {
            if ( v54->max_length <= 2 )
              goto LABEL_159;
            v54->m_Items[2] = (Il2CppObject *)v173;
            sub_B2C2F8((BattleServantConfConponent_o *)&v54->m_Items[2], v173, v167, v168, v169, v170, v171, v172);
            usrCurrentAp = this->fields.recvApNum;
            userEntity = (RecoverDlgComponent_o *)j_il2cpp_value_box_0(int_TypeInfo, &usrCurrentAp);
            v180 = (System_Int32_array **)userEntity;
            if ( !userEntity
              || (userEntity = (RecoverDlgComponent_o *)sub_B2C41C(userEntity, v54->obj.klass->_1.element_class)) != 0LL )
            {
              if ( v54->max_length <= 3 )
                goto LABEL_159;
              v54->m_Items[3] = (Il2CppObject *)v180;
              sub_B2C2F8((BattleServantConfConponent_o *)&v54->m_Items[3], v180, v174, v175, v176, v177, v178, v179);
              usrMaxRp = this->fields.usrCurrentAp;
              userEntity = (RecoverDlgComponent_o *)j_il2cpp_value_box_0(int_TypeInfo, &usrMaxRp);
              v187 = (System_Int32_array **)userEntity;
              if ( !userEntity
                || (userEntity = (RecoverDlgComponent_o *)sub_B2C41C(userEntity, v54->obj.klass->_1.element_class)) != 0LL )
              {
                if ( v54->max_length <= 4 )
                  goto LABEL_159;
                v54->m_Items[4] = (Il2CppObject *)v187;
                sub_B2C2F8((BattleServantConfConponent_o *)&v54->m_Items[4], v187, v181, v182, v183, v184, v185, v186);
                v223 = this->fields.usrMaxAp;
                userEntity = (RecoverDlgComponent_o *)j_il2cpp_value_box_0(int_TypeInfo, &v223);
                v194 = (System_Int32_array **)userEntity;
                if ( !userEntity
                  || (userEntity = (RecoverDlgComponent_o *)sub_B2C41C(userEntity, v54->obj.klass->_1.element_class)) != 0LL )
                {
                  if ( v54->max_length <= 5 )
                    goto LABEL_159;
                  v54->m_Items[5] = (Il2CppObject *)v194;
                  sub_B2C2F8((BattleServantConfConponent_o *)&v54->m_Items[5], v194, v188, v189, v190, v191, v192, v193);
                  v222 = this->fields.recvSum;
                  userEntity = (RecoverDlgComponent_o *)j_il2cpp_value_box_0(int_TypeInfo, &v222);
                  v201 = (System_Int32_array **)userEntity;
                  if ( !userEntity
                    || (userEntity = (RecoverDlgComponent_o *)sub_B2C41C(userEntity, v54->obj.klass->_1.element_class)) != 0LL )
                  {
                    if ( v54->max_length <= 6 )
                      goto LABEL_159;
                    v54->m_Items[6] = (Il2CppObject *)v201;
                    sub_B2C2F8(
                      (BattleServantConfConponent_o *)&v54->m_Items[6],
                      v201,
                      v195,
                      v196,
                      v197,
                      v198,
                      v199,
                      v200);
                    v221 = this->fields.usrMaxAp;
                    userEntity = (RecoverDlgComponent_o *)j_il2cpp_value_box_0(int_TypeInfo, &v221);
                    v95 = (System_Int32_array **)userEntity;
                    if ( !userEntity
                      || (userEntity = (RecoverDlgComponent_o *)sub_B2C41C(userEntity, v54->obj.klass->_1.element_class)) != 0LL )
                    {
                      if ( v54->max_length > 7 )
                      {
                        v54->m_Items[7] = (Il2CppObject *)v95;
                        v96 = (BattleServantConfConponent_o *)&v54->m_Items[7];
LABEL_126:
                        sub_B2C2F8(v96, v95, v89, v90, v91, v92, v93, v94);
                        v146 = System_String__Format_44384256(v47, v54, 0LL);
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
                          v205 = LocalizationManager__Get((System_String_o *)StringLiteral_1726/*"AP_FULL_MSG"*/, 0LL);
                          v206 = System_String__Format(v205, (Il2CppObject *)mText, 0LL);
                          Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
                          v208 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
                          System_Action___ctor(
                            v208,
                            (Il2CppObject *)this,
                            Method_RecoverItemComponent_closeNotificationDlg__,
                            0LL);
                          if ( !Instance )
                            goto LABEL_160;
                          CommonUI__OpenNotificationDialog(
                            Instance,
                            (System_String_o *)StringLiteral_1/*""*/,
                            v206,
                            v208,
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
                            v202 = LocalizationManager__Get((System_String_o *)StringLiteral_1734/*"AP_RECOVER_STONEPAY_WARNING_MSG"*/, 0LL);
                            v203 = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
                            v204 = (CommonConfirmDialog_ClickDelegate_o *)sub_B2C42C(CommonConfirmDialog_ClickDelegate_TypeInfo);
                            CommonConfirmDialog_ClickDelegate___ctor(
                              v204,
                              (Il2CppObject *)this,
                              Method_RecoverItemComponent_spendItemDlg__,
                              0LL);
                            userEntity = (RecoverDlgComponent_o *)BalanceConfig_TypeInfo;
                            if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                              && !BalanceConfig_TypeInfo->_2.cctor_finished )
                            {
                              j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
                            }
                            if ( v203 )
                            {
                              CommonUI__OpenConfirmDecideDlgAddMsgFrame(
                                v203,
                                v33,
                                v146,
                                v202,
                                v41,
                                v42,
                                v204,
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
                            sub_B2C434(userEntity, v31);
                          }
                          if ( !this->fields.isAddAp && this->fields.apRcvRate == 100 && this->fields.spendNum < 2 )
                          {
                            v213 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
                            v148 = (CommonConfirmDialog_ClickDelegate_o *)sub_B2C42C(CommonConfirmDialog_ClickDelegate_TypeInfo);
                            CommonConfirmDialog_ClickDelegate___ctor(
                              v148,
                              (Il2CppObject *)this,
                              Method_RecoverItemComponent_spendItemDlg__,
                              0LL);
                            userEntity = (RecoverDlgComponent_o *)BalanceConfig_TypeInfo;
                            if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                              && !BalanceConfig_TypeInfo->_2.cctor_finished )
                            {
                              j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
                            }
                            if ( !v213 )
                              goto LABEL_160;
                            v152 = v33;
                            v149 = 15.0;
                            static_fields = BalanceConfig_TypeInfo->static_fields;
                            v150 = (CommonUI_o *)v213;
                            goto LABEL_93;
                          }
                          v214 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
                          targetId = this->fields.targetId;
                          needAp = this->fields.needAp;
                          v217 = (CommonUI_o *)v214;
                          v218 = (System_Action_bool__int__o *)sub_B2C42C(System_Action_bool__int__TypeInfo);
                          System_Action_bool__int____ctor(
                            v218,
                            (Il2CppObject *)this,
                            Method_RecoverItemComponent_CloseApRecovDlg__,
                            (const MethodInfo_24C7840 *)Method_System_Action_bool__int___ctor__);
                          if ( !v217 )
                            goto LABEL_160;
                          CommonUI__OpenApRecoverConfirmDlg(v217, targetId, needAp, v218, 0LL);
                        }
                        return;
                      }
LABEL_159:
                      v219 = sub_B2C460(userEntity);
                      sub_B2C400(v219, 0LL);
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
    v220 = sub_B2C454(userEntity);
    sub_B2C400(v220, 0LL);
  }
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v97 = LocalizationManager__Get((System_String_o *)StringLiteral_11261/*"RP_RECOVER_CONFIRM_MSG"*/, 0LL);
  userEntity = (RecoverDlgComponent_o *)sub_B2C374(object___TypeInfo, 7LL);
  if ( !userEntity )
    goto LABEL_160;
  v104 = (System_Object_array *)userEntity;
  if ( mText )
  {
    userEntity = (RecoverDlgComponent_o *)sub_B2C41C(mText, userEntity->klass->_1.element_class);
    if ( !userEntity )
      goto LABEL_161;
  }
  if ( !v104->max_length )
    goto LABEL_159;
  v104->m_Items[0] = (Il2CppObject *)mText;
  sub_B2C2F8((BattleServantConfConponent_o *)v104->m_Items, mText, v98, v99, v100, v101, v102, v103);
  if ( v36 )
  {
    userEntity = (RecoverDlgComponent_o *)sub_B2C41C(v36, v104->obj.klass->_1.element_class);
    if ( !userEntity )
      goto LABEL_161;
  }
  if ( v104->max_length <= 1 )
    goto LABEL_159;
  v104->m_Items[1] = (Il2CppObject *)v36;
  sub_B2C2F8((BattleServantConfConponent_o *)&v104->m_Items[1], v36, v105, v106, v107, v108, v109, v110);
  spendNum = this->fields.recvRpNum;
  userEntity = (RecoverDlgComponent_o *)j_il2cpp_value_box_0(int_TypeInfo, &spendNum);
  v117 = (System_Int32_array **)userEntity;
  if ( userEntity )
  {
    userEntity = (RecoverDlgComponent_o *)sub_B2C41C(userEntity, v104->obj.klass->_1.element_class);
    if ( !userEntity )
      goto LABEL_161;
  }
  if ( v104->max_length <= 2 )
    goto LABEL_159;
  v104->m_Items[2] = (Il2CppObject *)v117;
  sub_B2C2F8((BattleServantConfConponent_o *)&v104->m_Items[2], v117, v111, v112, v113, v114, v115, v116);
  usrCurrentAp = this->fields.usrCurrentRp;
  userEntity = (RecoverDlgComponent_o *)j_il2cpp_value_box_0(int_TypeInfo, &usrCurrentAp);
  v124 = (System_Int32_array **)userEntity;
  if ( userEntity )
  {
    userEntity = (RecoverDlgComponent_o *)sub_B2C41C(userEntity, v104->obj.klass->_1.element_class);
    if ( !userEntity )
      goto LABEL_161;
  }
  if ( v104->max_length <= 3 )
    goto LABEL_159;
  v104->m_Items[3] = (Il2CppObject *)v124;
  sub_B2C2F8((BattleServantConfConponent_o *)&v104->m_Items[3], v124, v118, v119, v120, v121, v122, v123);
  usrMaxRp = this->fields.usrMaxRp;
  userEntity = (RecoverDlgComponent_o *)j_il2cpp_value_box_0(int_TypeInfo, &usrMaxRp);
  v131 = (System_Int32_array **)userEntity;
  if ( userEntity )
  {
    userEntity = (RecoverDlgComponent_o *)sub_B2C41C(userEntity, v104->obj.klass->_1.element_class);
    if ( !userEntity )
      goto LABEL_161;
  }
  if ( v104->max_length <= 4 )
    goto LABEL_159;
  v104->m_Items[4] = (Il2CppObject *)v131;
  sub_B2C2F8((BattleServantConfConponent_o *)&v104->m_Items[4], v131, v125, v126, v127, v128, v129, v130);
  v223 = this->fields.recvSum;
  userEntity = (RecoverDlgComponent_o *)j_il2cpp_value_box_0(int_TypeInfo, &v223);
  v138 = (System_Int32_array **)userEntity;
  if ( userEntity )
  {
    userEntity = (RecoverDlgComponent_o *)sub_B2C41C(userEntity, v104->obj.klass->_1.element_class);
    if ( !userEntity )
      goto LABEL_161;
  }
  if ( v104->max_length <= 5 )
    goto LABEL_159;
  v104->m_Items[5] = (Il2CppObject *)v138;
  sub_B2C2F8((BattleServantConfConponent_o *)&v104->m_Items[5], v138, v132, v133, v134, v135, v136, v137);
  v222 = this->fields.usrMaxRp;
  userEntity = (RecoverDlgComponent_o *)j_il2cpp_value_box_0(int_TypeInfo, &v222);
  v145 = (System_Int32_array **)userEntity;
  if ( userEntity )
  {
    userEntity = (RecoverDlgComponent_o *)sub_B2C41C(userEntity, v104->obj.klass->_1.element_class);
    if ( !userEntity )
      goto LABEL_161;
  }
  if ( v104->max_length <= 6 )
    goto LABEL_159;
  v104->m_Items[6] = (Il2CppObject *)v145;
  sub_B2C2F8((BattleServantConfConponent_o *)&v104->m_Items[6], v145, v139, v140, v141, v142, v143, v144);
  userEntity = (RecoverDlgComponent_o *)System_String__Format_44384256(v97, v104, 0LL);
  if ( !this->fields.userEntity )
    goto LABEL_160;
  v146 = (System_String_o *)userEntity;
  if ( UserGameEntity__getRp(this->fields.userEntity, 0LL) < this->fields.usrMaxRp )
  {
    v147 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v148 = (CommonConfirmDialog_ClickDelegate_o *)sub_B2C42C(CommonConfirmDialog_ClickDelegate_TypeInfo);
    CommonConfirmDialog_ClickDelegate___ctor(
      v148,
      (Il2CppObject *)this,
      Method_RecoverItemComponent_spendItemDlg__,
      0LL);
    userEntity = (RecoverDlgComponent_o *)BalanceConfig_TypeInfo;
    if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    }
    if ( !v147 )
      goto LABEL_160;
    v149 = 15.0;
    v150 = (CommonUI_o *)v147;
    static_fields = BalanceConfig_TypeInfo->static_fields;
    v152 = v33;
LABEL_93:
    CommonUI__OpenConfirmDecideDlg(
      v150,
      v152,
      v146,
      v41,
      v42,
      v148,
      static_fields->DefaultFontSize,
      0.0,
      v149,
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
  v209 = LocalizationManager__Get((System_String_o *)StringLiteral_11259/*"RP_FULL_MSG"*/, 0LL);
  v210 = System_String__Format(v209, (Il2CppObject *)mText, 0LL);
  v211 = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v212 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
  System_Action___ctor(v212, (Il2CppObject *)this, Method_RecoverItemComponent_closeNotificationDlg__, 0LL);
  if ( !v211 )
    goto LABEL_160;
  CommonUI__OpenNotificationDialog(
    v211,
    (System_String_o *)StringLiteral_1/*""*/,
    v210,
    v212,
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
  __int64 v9; // x1
  int32_t v10; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_418AD2D & 1) == 0 )
  {
    sub_B2C35C(&int_TypeInfo, *(_QWORD *)&stoneCount);
    sub_B2C35C(&StringLiteral_23527/*"{0:N0}"*/, v5);
    byte_418AD2D = 1;
  }
  currentNumLb = this->fields.currentNumLb;
  v10 = stoneCount;
  v7 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v10);
  v8 = System_String__Format((System_String_o *)StringLiteral_23527/*"{0:N0}"*/, v7, 0LL);
  if ( !currentNumLb )
    sub_B2C434(v8, v9);
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

  if ( (byte_418AD22 & 1) == 0 )
  {
    sub_B2C35C(&RecoverItemComponent_CallbackFunc_TypeInfo, value);
    byte_418AD22 = 1;
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
    v9 = sub_B20D74(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_B2C728(v8);
  RecoverItemComponent__remove_callbackFunc(v11, v12, v13);
}


void __fastcall RecoverItemComponent__closeNotificationDlg(RecoverItemComponent_o *this, const MethodInfo *method)
{
  CommonUI_o *Instance; // x0
  __int64 v3; // x1

  if ( (byte_418AD2B & 1) == 0 )
  {
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, method);
    byte_418AD2B = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_B2C434(0LL, v3);
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

  if ( (byte_418AD23 & 1) == 0 )
  {
    sub_B2C35C(&RecoverItemComponent_CallbackFunc_TypeInfo, value);
    byte_418AD23 = 1;
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
    v9 = sub_B20D74(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_B2C728(v8);
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
  int32_t currentType; // w8
  RecoverItemComponent_o *v54; // x21
  RecoverItemComponent_o *v55; // x22
  int recvTarget; // w24
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
  Il2CppObject *v67; // x23
  Il2CppObject *v68; // x0
  bool v69; // cc
  int v70; // w8
  const MethodInfo *v71; // x1
  ItemEntity_o *RecvItemData; // x0
  ItemEntity_o *v73; // x24
  int32_t num; // w27
  UILabel_o *v75; // x22
  UILabel_o *v76; // x22
  WarEntity_o *v77; // x0
  CommandSpellEntity_o *v78; // x22
  int32_t type; // w8
  struct UnityEngine_GameObject_o *cmdSpellBg; // x27
  float v81; // s1
  double v82; // d1
  System_String_o *v83; // x23
  Il2CppObject *v84; // x0
  System_String_o *v85; // x0
  UILabel_o *itemDetailLb; // x23
  Il2CppObject *v87; // x24
  System_String_o *v88; // x25
  Il2CppObject *v89; // x26
  Il2CppObject *v90; // x0
  int monitor; // w22
  int32_t v92; // w0
  int32_t v93; // w8
  BalanceConfig_c *v94; // x0
  int usrMaxAp; // s2
  float v96; // s2
  float v97; // s0
  double v98; // d1
  int32_t v99; // w0
  int32_t v100; // w0
  int32_t v101; // w8
  int32_t v102; // w9
  System_String_o *v103; // x23
  Il2CppObject *v104; // x0
  System_String_o *v105; // x0
  UILabel_o *v106; // x23
  Il2CppObject *v107; // x25
  System_String_o *v108; // x26
  Il2CppObject *v109; // x27
  Il2CppObject *v110; // x0
  int value; // w23
  int32_t v112; // w0
  System_String_o *v113; // x21
  Il2CppObject *v114; // x0
  System_String_o *v115; // x0
  UILabel_o *v116; // x21
  Il2CppObject *v117; // x23
  System_String_o *v118; // x24
  Il2CppObject *v119; // x0
  UILabel_o *v120; // x21
  Il2CppObject *v121; // x0
  UILabel_o *v122; // x21
  int v123; // w8
  System_String_o *v124; // x21
  Il2CppObject *v125; // x0
  System_String_o *v126; // x0
  UILabel_o *v127; // x21
  Il2CppObject *v128; // x22
  System_String_o *v129; // x23
  Il2CppObject *v130; // x0
  UILabel_o *currentNumLb; // x21
  UILabel_o *spendNumLb; // x21
  char v133; // w9
  __int64 v134; // x0
  int32_t v135; // [xsp+0h] [xbp-70h]
  int32_t v136; // [xsp+4h] [xbp-6Ch] BYREF
  int32_t recvApNum; // [xsp+8h] [xbp-68h] BYREF
  int32_t apRcvRate; // [xsp+Ch] [xbp-64h] BYREF
  int32_t spendNum; // [xsp+10h] [xbp-60h] BYREF
  int32_t CommandSpell; // [xsp+14h] [xbp-5Ch] BYREF
  UserItemEntity_o *entity; // [xsp+18h] [xbp-58h] BYREF

  v12 = this;
  if ( (byte_418AD24 & 1) == 0 )
  {
    sub_B2C35C(&BalanceConfig_TypeInfo, data);
    sub_B2C35C(&Method_DataManager_GetMasterData_CommandSpellMaster___, v13);
    sub_B2C35C(&Method_DataManager_GetMasterData_ItemMaster___, v14);
    sub_B2C35C(&Method_DataManager_GetMasterData_StoneShopMaster___, v15);
    sub_B2C35C(&Method_DataManager_GetMasterData_UserItemMaster___, v16);
    sub_B2C35C(&Method_DataMasterBase_StoneShopMaster__StoneShopEntity__int__GetEntity__, v17);
    sub_B2C35C(&Method_DataMasterBase_CommandSpellMaster__CommandSpellEntity__int__GetEntity__, v18);
    sub_B2C35C(&int_TypeInfo, v19);
    sub_B2C35C(&LocalizationManager_TypeInfo, v20);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v21);
    sub_B2C35C(&StringLiteral_3116/*"CMDSPELL_CURRENT_NUM"*/, v22);
    sub_B2C35C(&StringLiteral_1654/*"ADD_RECOVER_CMDSPELL_TXT"*/, v23);
    sub_B2C35C(&StringLiteral_3118/*"CMDSPELL_SPEND_NUM_TXT"*/, v24);
    sub_B2C35C(&StringLiteral_23527/*"{0:N0}"*/, v25);
    sub_B2C35C(&StringLiteral_747/*"-"*/, v26);
    sub_B2C35C(&StringLiteral_14712/*"UNIT_INFO"*/, v27);
    sub_B2C35C(&StringLiteral_12296/*"SPEND_NUM_TXT"*/, v28);
    sub_B2C35C(&StringLiteral_3453/*"CURRENT_NUM_TXT"*/, v29);
    sub_B2C35C(&StringLiteral_1655/*"ADD_RECOVER_NUM_TXT"*/, v30);
    sub_B2C35C(&StringLiteral_1731/*"AP_RECOVER_NUM_TXT"*/, v31);
    this = (RecoverItemComponent_o *)sub_B2C35C(&StringLiteral_3117/*"CMDSPELL_CURRENT_NUM_TXT"*/, v32);
    byte_418AD24 = 1;
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
  sub_B2C2F8(
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
  sub_B2C2F8(
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
  sub_B2C2F8((BattleServantConfConponent_o *)&v12->fields.userEntity, SelfUserGame, v42, v43, v44, v45, v46, v47);
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
  UILabel__set_text((UILabel_o *)this, (System_String_o *)StringLiteral_747/*"-"*/, 0LL);
  this = (RecoverItemComponent_o *)v12->fields.currentNumLb;
  if ( !this )
    goto LABEL_128;
  UILabel__set_text((UILabel_o *)this, (System_String_o *)StringLiteral_747/*"-"*/, 0LL);
  this = (RecoverItemComponent_o *)v12->fields.spendNumLb;
  if ( !this )
    goto LABEL_128;
  UILabel__set_text((UILabel_o *)this, (System_String_o *)StringLiteral_747/*"-"*/, 0LL);
  this = (RecoverItemComponent_o *)v12->fields.itemDetailLb;
  if ( !this )
    goto LABEL_128;
  UILabel__set_text((UILabel_o *)this, (System_String_o *)StringLiteral_747/*"-"*/, 0LL);
  currentInfoLb = v12->fields.currentInfoLb;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  this = (RecoverItemComponent_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3453/*"CURRENT_NUM_TXT"*/, 0LL);
  if ( !currentInfoLb )
    goto LABEL_128;
  UILabel__set_text(currentInfoLb, (System_String_o *)this, 0LL);
  spendInfoLb = v12->fields.spendInfoLb;
  this = (RecoverItemComponent_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12296/*"SPEND_NUM_TXT"*/, 0LL);
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
    v75 = v12->fields.currentInfoLb;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    this = (RecoverItemComponent_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3117/*"CMDSPELL_CURRENT_NUM_TXT"*/, 0LL);
    if ( !v75 )
      goto LABEL_128;
    UILabel__set_text(v75, (System_String_o *)this, 0LL);
    v76 = v12->fields.spendInfoLb;
    this = (RecoverItemComponent_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3118/*"CMDSPELL_SPEND_NUM_TXT"*/, 0LL);
    if ( !v76 )
      goto LABEL_128;
    UILabel__set_text(v76, (System_String_o *)this, 0LL);
    this = (RecoverItemComponent_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !this )
      goto LABEL_128;
    this = (RecoverItemComponent_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                       (DataManager_o *)this,
                                       (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_CommandSpellMaster___);
    if ( !this )
      goto LABEL_128;
    v77 = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
            (DataMasterBase_WarMaster__WarEntity__int__o *)this,
            v12->fields.targetId,
            (const MethodInfo_24E40D0 *)Method_DataMasterBase_CommandSpellMaster__CommandSpellEntity__int__GetEntity__);
    if ( !v77 )
      goto LABEL_127;
    v78 = (CommandSpellEntity_o *)v77;
    this = (RecoverItemComponent_o *)v12->fields.cmdSpellIcon;
    if ( !this )
      goto LABEL_128;
    CommandSpellIconComponent__SetData((CommandSpellIconComponent_o *)this, v12->fields.userEntity, 0LL);
    this = (RecoverItemComponent_o *)v12->fields.itemNameLb;
    if ( !this )
      goto LABEL_128;
    UILabel__set_text((UILabel_o *)this, v78->fields.name, 0LL);
    this = *p_userEntity;
    if ( !*p_userEntity )
      goto LABEL_128;
    CommandSpell = UserGameEntity__getCommandSpell((UserGameEntity_o *)this, 0LL);
    *p_spendNum = v78->fields.consume;
    this = (RecoverItemComponent_o *)CommandSpellEntity__getValues(v78, 0LL);
    if ( !this )
      goto LABEL_128;
    if ( LODWORD(this->fields.itemIconInfo) )
    {
      type = v78->fields.type;
      cmdSpellBg = this->fields.cmdSpellBg;
      if ( type == 3 )
      {
        if ( !cmdSpellBg )
          goto LABEL_128;
        if ( !LODWORD(cmdSpellBg[1].klass) )
          goto LABEL_129;
        v81 = (float)((float)SLODWORD(cmdSpellBg[1].monitor) / 1000.0) * 100.0;
        v82 = v81 == INFINITY ? -v81 : v81;
        v12->fields.apRcvRate = (int)v82;
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
        v83 = LocalizationManager__Get((System_String_o *)StringLiteral_3116/*"CMDSPELL_CURRENT_NUM"*/, 0LL);
        spendNum = v12->fields.spendNum;
        v84 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &spendNum);
        v85 = System_String__Format(v83, v84, 0LL);
        itemDetailLb = v12->fields.itemDetailLb;
        v87 = (Il2CppObject *)v85;
        v88 = LocalizationManager__Get((System_String_o *)StringLiteral_1731/*"AP_RECOVER_NUM_TXT"*/, 0LL);
        apRcvRate = v12->fields.apRcvRate;
        v89 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &apRcvRate);
        recvApNum = v12->fields.recvApNum;
        v90 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &recvApNum);
        this = (RecoverItemComponent_o *)System_String__Format_44306596(v88, v87, v89, v90, 0LL);
        if ( !itemDetailLb )
          goto LABEL_128;
        UILabel__set_text(itemDetailLb, (System_String_o *)this, 0LL);
        type = v78->fields.type;
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
            v69 = CommandSpell < v12->fields.spendNum;
            v70 = v12->fields.recvApNum + v12->fields.usrCurrentAp;
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
          v92 = *p_spendNum;
        }
        else
        {
          v92 = UnityEngine_Mathf__CeilToInt(
                  fmaxf((float)(needAp - v12->fields.usrCurrentAp) / (float)monitor, 1.0),
                  0LL);
          v12->fields.spendNum = v92;
        }
        v12->fields.recvApNum = v92 * monitor;
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        v124 = LocalizationManager__Get((System_String_o *)StringLiteral_3116/*"CMDSPELL_CURRENT_NUM"*/, 0LL);
        spendNum = v12->fields.spendNum;
        v125 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &spendNum);
        v126 = System_String__Format(v124, v125, 0LL);
        v127 = v12->fields.itemDetailLb;
        v128 = (Il2CppObject *)v126;
        v129 = LocalizationManager__Get((System_String_o *)StringLiteral_1654/*"ADD_RECOVER_CMDSPELL_TXT"*/, 0LL);
        apRcvRate = v12->fields.recvApNum;
        v130 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &apRcvRate);
        this = (RecoverItemComponent_o *)System_String__Format_44301068(v129, v128, v130, 0LL);
        if ( !v127 )
          goto LABEL_128;
        UILabel__set_text(v127, (System_String_o *)this, 0LL);
        v12->fields.isAddAp = 1;
        goto LABEL_120;
      }
    }
LABEL_129:
    v134 = sub_B2C460(this);
    sub_B2C400(v134, 0LL);
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
          RecvItemData = RecoverEntity__getRecvItemData(data, v71);
          if ( !RecvItemData )
            goto LABEL_127;
          v73 = RecvItemData;
          this = (RecoverItemComponent_o *)v12->fields.itemIconInfo;
          if ( this )
          {
            ItemIconComponent__SetItemImage_27393796(
              (ItemIconComponent_o *)this,
              v73->fields.imageId,
              v73->fields.bgImageId,
              v73->fields.type,
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
                  UILabel__set_text((UILabel_o *)this, v73->fields.name, 0LL);
                  *p_spendNum = 1;
                  this = (RecoverItemComponent_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
                  if ( this )
                  {
                    this = (RecoverItemComponent_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                       (DataManager_o *)this,
                                                       (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserItemMaster___);
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
                        v93 = v73->fields.type;
                        if ( v93 == 3 )
                        {
                          v94 = BalanceConfig_TypeInfo;
                          if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                            && !BalanceConfig_TypeInfo->_2.cctor_finished )
                          {
                            j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
                            v94 = BalanceConfig_TypeInfo;
                          }
                          usrMaxAp = v12->fields.usrMaxAp;
                          v12->fields.spendNum = v94->static_fields->SpendApRecvItemNum;
                          v96 = (float)usrMaxAp;
                          v97 = (float)v73->fields.value / 1000.0;
                          v98 = -(float)(v97 * 100.0);
                          if ( (float)(v97 * 100.0) != INFINITY )
                            v98 = (float)(v97 * 100.0);
                          v12->fields.apRcvRate = (int)v98;
                          v99 = UnityEngine_Mathf__CeilToInt(v97 * v96, 0LL);
                          v12->fields.recvApNum = v99;
                          if ( needAp >= 1 )
                          {
                            v100 = UnityEngine_Mathf__CeilToInt(
                                     fmaxf((float)(needAp - v12->fields.usrCurrentAp) / (float)v99, 1.0),
                                     0LL);
                            v101 = v12->fields.apRcvRate;
                            v102 = v12->fields.recvApNum;
                            v12->fields.spendNum = v100;
                            v12->fields.apRcvRate = v101 * v100;
                            v12->fields.recvApNum = v102 * v100;
                          }
                          v135 = num;
                          if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                            && !LocalizationManager_TypeInfo->_2.cctor_finished )
                          {
                            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                          }
                          v103 = LocalizationManager__Get((System_String_o *)StringLiteral_14712/*"UNIT_INFO"*/, 0LL);
                          spendNum = v12->fields.spendNum;
                          v104 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &spendNum);
                          v105 = System_String__Format(v103, v104, 0LL);
                          v106 = v12->fields.itemDetailLb;
                          v107 = (Il2CppObject *)v105;
                          v108 = LocalizationManager__Get((System_String_o *)StringLiteral_1731/*"AP_RECOVER_NUM_TXT"*/, 0LL);
                          apRcvRate = v12->fields.apRcvRate;
                          v109 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &apRcvRate);
                          recvApNum = v12->fields.recvApNum;
                          v110 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &recvApNum);
                          this = (RecoverItemComponent_o *)System_String__Format_44306596(v108, v107, v109, v110, 0LL);
                          if ( !v106 )
                            goto LABEL_128;
                          UILabel__set_text(v106, (System_String_o *)this, 0LL);
                          v93 = v73->fields.type;
                          num = v135;
                        }
                        if ( v93 == 4 )
                        {
                          value = v73->fields.value;
                          if ( needAp < 1 )
                          {
                            *p_spendNum = 1;
                          }
                          else
                          {
                            v112 = UnityEngine_Mathf__CeilToInt(
                                     fmaxf((float)(needAp - v12->fields.usrCurrentAp) / (float)value, 1.0),
                                     0LL);
                            v12->fields.spendNum = v112;
                            value *= v112;
                          }
                          v12->fields.recvApNum = value;
                          if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                            && !LocalizationManager_TypeInfo->_2.cctor_finished )
                          {
                            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                          }
                          v113 = LocalizationManager__Get((System_String_o *)StringLiteral_14712/*"UNIT_INFO"*/, 0LL);
                          spendNum = v12->fields.spendNum;
                          v114 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &spendNum);
                          v115 = System_String__Format(v113, v114, 0LL);
                          v116 = v12->fields.itemDetailLb;
                          v117 = (Il2CppObject *)v115;
                          v118 = LocalizationManager__Get((System_String_o *)StringLiteral_1655/*"ADD_RECOVER_NUM_TXT"*/, 0LL);
                          apRcvRate = v12->fields.recvApNum;
                          v119 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &apRcvRate);
                          this = (RecoverItemComponent_o *)System_String__Format_44301068(v118, v117, v119, 0LL);
                          if ( !v116 )
                            goto LABEL_128;
                          UILabel__set_text(v116, (System_String_o *)this, 0LL);
                          v12->fields.isAddAp = 1;
                        }
                        v120 = v12->fields.currentNumLb;
                        spendNum = num;
                        v121 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &spendNum);
                        this = (RecoverItemComponent_o *)System_String__Format(
                                                           (System_String_o *)StringLiteral_23527/*"{0:N0}"*/,
                                                           v121,
                                                           0LL);
                        if ( v120 )
                        {
                          UILabel__set_text(v120, (System_String_o *)this, 0LL);
                          v122 = v12->fields.spendNumLb;
                          this = (RecoverItemComponent_o *)System_Int32__ToString((int)v12 + 120, 0LL);
                          if ( v122 )
                          {
                            UILabel__set_text(v122, (System_String_o *)this, 0LL);
                            v123 = v12->fields.recvApNum + v12->fields.usrCurrentAp;
                            v12->fields.isEnableSelect = num >= v12->fields.spendNum;
                            v12->fields.recvSum = v123;
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
    sub_B2C434(this, data);
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
  this = (RecoverItemComponent_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_128;
  this = (RecoverItemComponent_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                     (DataManager_o *)this,
                                     (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ItemMaster___);
  if ( !this )
    goto LABEL_128;
  this = (RecoverItemComponent_o *)ItemMaster__GetEntityByType((ItemMaster_o *)this, 2, 0LL);
  if ( !this )
    goto LABEL_128;
  v54 = this;
  this = (RecoverItemComponent_o *)v12->fields.itemIconInfo;
  if ( !this )
    goto LABEL_128;
  ItemIconComponent__SetItemImage_27393796(
    (ItemIconComponent_o *)this,
    (int32_t)v54->fields.cmdSpellIcon,
    HIDWORD(v54->fields.cmdSpellIcon),
    (int32_t)v54->fields.itemNameLb,
    0,
    0LL);
  this = (RecoverItemComponent_o *)v12->fields.itemIconInfo;
  if ( !this )
    goto LABEL_128;
  this = (RecoverItemComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !this )
    goto LABEL_128;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
  this = (RecoverItemComponent_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_128;
  this = (RecoverItemComponent_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                     (DataManager_o *)this,
                                     (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_StoneShopMaster___);
  if ( !this )
    goto LABEL_128;
  this = (RecoverItemComponent_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                     (DataMasterBase_WarMaster__WarEntity__int__o *)this,
                                     v12->fields.targetId,
                                     (const MethodInfo_24E40D0 *)Method_DataMasterBase_StoneShopMaster__StoneShopEntity__int__GetEntity__);
  if ( !v12->fields.itemNameLb )
    goto LABEL_128;
  v55 = this;
  UILabel__set_text(v12->fields.itemNameLb, (System_String_o *)v54->fields.itemIconInfo, 0LL);
  if ( !*p_userEntity )
    goto LABEL_128;
  recvTarget = (*p_userEntity)->fields.recvTarget;
  if ( v55 )
    *p_spendNum = HIDWORD(v55->fields.cmdSpellIcon);
  v57 = v12->fields.currentNumLb;
  spendNum = recvTarget;
  v58 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &spendNum);
  this = (RecoverItemComponent_o *)System_String__Format((System_String_o *)StringLiteral_23527/*"{0:N0}"*/, v58, 0LL);
  if ( !v57 )
    goto LABEL_128;
  UILabel__set_text(v57, (System_String_o *)this, 0LL);
  v59 = v12->fields.spendNumLb;
  this = (RecoverItemComponent_o *)System_Int32__ToString((int)v12 + 120, 0LL);
  if ( !v59 )
    goto LABEL_128;
  UILabel__set_text(v59, (System_String_o *)this, 0LL);
  RecoverItemComponent__AttachStoneCountRefreshComponent(v12, v60);
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v61 = LocalizationManager__Get((System_String_o *)StringLiteral_14712/*"UNIT_INFO"*/, 0LL);
  apRcvRate = v12->fields.spendNum;
  v62 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &apRcvRate);
  v63 = System_String__Format(v61, v62, 0LL);
  v64 = v12->fields.itemDetailLb;
  v65 = (Il2CppObject *)v63;
  v66 = LocalizationManager__Get((System_String_o *)StringLiteral_1731/*"AP_RECOVER_NUM_TXT"*/, 0LL);
  recvApNum = v12->fields.apRcvRate;
  v67 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &recvApNum);
  v136 = v12->fields.recvApNum;
  v68 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v136);
  this = (RecoverItemComponent_o *)System_String__Format_44306596(v66, v65, v67, v68, 0LL);
  if ( !v64 )
    goto LABEL_128;
  UILabel__set_text(v64, (System_String_o *)this, 0LL);
  v69 = recvTarget < v12->fields.spendNum;
  v70 = v12->fields.usrMaxAp + v12->fields.usrCurrentAp;
LABEL_123:
  v133 = !v69;
  v12->fields.isEnableSelect = v133;
  v12->fields.recvSum = v70;
LABEL_127:
  RecoverItemComponent__setEnableSelectItem(v12, (const MethodInfo *)data);
}


void __fastcall RecoverItemComponent__setEnableSelectItem(RecoverItemComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *maskImg; // x0

  if ( !this->fields.isEnableSelect )
  {
    maskImg = this->fields.maskImg;
    if ( !maskImg )
      sub_B2C434(0LL, method);
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
  int32_t currentType; // w8
  RecoverItemComponent_o *v53; // x21
  RecoverItemComponent_o *v54; // x22
  int recvTarget; // w23
  UILabel_o *v56; // x21
  Il2CppObject *v57; // x0
  UILabel_o *v58; // x21
  const MethodInfo *v59; // x1
  System_String_o *v60; // x20
  Il2CppObject *v61; // x0
  System_String_o *v62; // x0
  UILabel_o *v63; // x20
  Il2CppObject *v64; // x21
  System_String_o *v65; // x22
  Il2CppObject *v66; // x0
  bool v67; // cc
  int v68; // w8
  const MethodInfo *v69; // x1
  ItemEntity_o *RecvItemData; // x0
  ItemEntity_o *v71; // x24
  int32_t num; // w26
  UILabel_o *v73; // x22
  UILabel_o *v74; // x22
  WarEntity_o *v75; // x0
  CommandSpellEntity_o *v76; // x22
  struct UnityEngine_GameObject_o *cmdSpellBg; // x8
  int monitor; // w22
  int32_t v79; // w0
  int value; // w23
  int32_t v81; // w0
  System_String_o *v82; // x21
  Il2CppObject *v83; // x0
  System_String_o *v84; // x0
  UILabel_o *v85; // x21
  Il2CppObject *v86; // x23
  System_String_o *v87; // x24
  Il2CppObject *v88; // x0
  UILabel_o *v89; // x21
  Il2CppObject *v90; // x0
  UILabel_o *v91; // x21
  int v92; // w8
  System_String_o *v93; // x21
  Il2CppObject *v94; // x0
  System_String_o *v95; // x0
  UILabel_o *itemDetailLb; // x21
  Il2CppObject *v97; // x22
  System_String_o *v98; // x23
  Il2CppObject *v99; // x0
  UILabel_o *currentNumLb; // x21
  UILabel_o *spendNumLb; // x21
  char v102; // w9
  __int64 v103; // x0
  int32_t v104; // [xsp+8h] [xbp-58h] BYREF
  int32_t recvRpNum; // [xsp+Ch] [xbp-54h] BYREF
  int32_t spendNum; // [xsp+10h] [xbp-50h] BYREF
  int32_t CommandSpell; // [xsp+14h] [xbp-4Ch] BYREF
  UserItemEntity_o *entity; // [xsp+18h] [xbp-48h] BYREF

  v12 = this;
  if ( (byte_418AD25 & 1) == 0 )
  {
    sub_B2C35C(&BalanceConfig_TypeInfo, data);
    sub_B2C35C(&Method_DataManager_GetMasterData_CommandSpellMaster___, v13);
    sub_B2C35C(&Method_DataManager_GetMasterData_ItemMaster___, v14);
    sub_B2C35C(&Method_DataManager_GetMasterData_StoneShopMaster___, v15);
    sub_B2C35C(&Method_DataManager_GetMasterData_UserItemMaster___, v16);
    sub_B2C35C(&Method_DataMasterBase_StoneShopMaster__StoneShopEntity__int__GetEntity__, v17);
    sub_B2C35C(&Method_DataMasterBase_CommandSpellMaster__CommandSpellEntity__int__GetEntity__, v18);
    sub_B2C35C(&int_TypeInfo, v19);
    sub_B2C35C(&LocalizationManager_TypeInfo, v20);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v21);
    sub_B2C35C(&StringLiteral_3116/*"CMDSPELL_CURRENT_NUM"*/, v22);
    sub_B2C35C(&StringLiteral_3118/*"CMDSPELL_SPEND_NUM_TXT"*/, v23);
    sub_B2C35C(&StringLiteral_23527/*"{0:N0}"*/, v24);
    sub_B2C35C(&StringLiteral_747/*"-"*/, v25);
    sub_B2C35C(&StringLiteral_14712/*"UNIT_INFO"*/, v26);
    sub_B2C35C(&StringLiteral_12296/*"SPEND_NUM_TXT"*/, v27);
    sub_B2C35C(&StringLiteral_3453/*"CURRENT_NUM_TXT"*/, v28);
    sub_B2C35C(&StringLiteral_11260/*"RP_RECOVER_CMDSPELL_TXT"*/, v29);
    sub_B2C35C(&StringLiteral_11262/*"RP_RECOVER_NUM_TXT"*/, v30);
    this = (RecoverItemComponent_o *)sub_B2C35C(&StringLiteral_3117/*"CMDSPELL_CURRENT_NUM_TXT"*/, v31);
    byte_418AD25 = 1;
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
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&v12->fields.dialog,
    (System_Int32_array **)dlg,
    *(System_String_array ***)&needRp,
    (System_String_array **)dlg,
    (System_Boolean_array **)callback,
    (System_Int32_array **)method,
    v6,
    v7);
  v12->fields.callbackFunc = callback;
  sub_B2C2F8(
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
  sub_B2C2F8((BattleServantConfConponent_o *)&v12->fields.userEntity, SelfUserGame, v41, v42, v43, v44, v45, v46);
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
  UILabel__set_text((UILabel_o *)this, (System_String_o *)StringLiteral_747/*"-"*/, 0LL);
  this = (RecoverItemComponent_o *)v12->fields.currentNumLb;
  if ( !this )
    goto LABEL_100;
  UILabel__set_text((UILabel_o *)this, (System_String_o *)StringLiteral_747/*"-"*/, 0LL);
  this = (RecoverItemComponent_o *)v12->fields.spendNumLb;
  if ( !this )
    goto LABEL_100;
  UILabel__set_text((UILabel_o *)this, (System_String_o *)StringLiteral_747/*"-"*/, 0LL);
  this = (RecoverItemComponent_o *)v12->fields.itemDetailLb;
  if ( !this )
    goto LABEL_100;
  UILabel__set_text((UILabel_o *)this, (System_String_o *)StringLiteral_747/*"-"*/, 0LL);
  currentInfoLb = v12->fields.currentInfoLb;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  this = (RecoverItemComponent_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3453/*"CURRENT_NUM_TXT"*/, 0LL);
  if ( !currentInfoLb )
    goto LABEL_100;
  UILabel__set_text(currentInfoLb, (System_String_o *)this, 0LL);
  spendInfoLb = v12->fields.spendInfoLb;
  this = (RecoverItemComponent_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12296/*"SPEND_NUM_TXT"*/, 0LL);
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
          v73 = v12->fields.currentInfoLb;
          if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          }
          this = (RecoverItemComponent_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3117/*"CMDSPELL_CURRENT_NUM_TXT"*/, 0LL);
          if ( v73 )
          {
            UILabel__set_text(v73, (System_String_o *)this, 0LL);
            v74 = v12->fields.spendInfoLb;
            this = (RecoverItemComponent_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3118/*"CMDSPELL_SPEND_NUM_TXT"*/, 0LL);
            if ( v74 )
            {
              UILabel__set_text(v74, (System_String_o *)this, 0LL);
              this = (RecoverItemComponent_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
              if ( this )
              {
                this = (RecoverItemComponent_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                   (DataManager_o *)this,
                                                   (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_CommandSpellMaster___);
                if ( this )
                {
                  v75 = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                          (DataMasterBase_WarMaster__WarEntity__int__o *)this,
                          v12->fields.targetId,
                          (const MethodInfo_24E40D0 *)Method_DataMasterBase_CommandSpellMaster__CommandSpellEntity__int__GetEntity__);
                  if ( !v75 )
                    goto LABEL_99;
                  v76 = (CommandSpellEntity_o *)v75;
                  this = (RecoverItemComponent_o *)v12->fields.cmdSpellIcon;
                  if ( this )
                  {
                    CommandSpellIconComponent__SetData((CommandSpellIconComponent_o *)this, v12->fields.userEntity, 0LL);
                    this = (RecoverItemComponent_o *)v12->fields.itemNameLb;
                    if ( this )
                    {
                      UILabel__set_text((UILabel_o *)this, v76->fields.name, 0LL);
                      this = *p_userEntity;
                      if ( *p_userEntity )
                      {
                        CommandSpell = UserGameEntity__getCommandSpell((UserGameEntity_o *)this, 0LL);
                        *p_spendNum = v76->fields.consume;
                        this = (RecoverItemComponent_o *)CommandSpellEntity__getValues(v76, 0LL);
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
                            v103 = sub_B2C460(this);
                            sub_B2C400(v103, 0LL);
                          }
                          monitor = (int)cmdSpellBg[1].monitor;
                          if ( needRp < 1 )
                          {
                            v79 = *p_spendNum;
                          }
                          else
                          {
                            v79 = UnityEngine_Mathf__CeilToInt(
                                    fmaxf((float)(needRp - v12->fields.usrCurrentRp) / (float)monitor, 1.0),
                                    0LL);
                            v12->fields.spendNum = v79;
                          }
                          v12->fields.recvRpNum = v79 * monitor;
                          if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                            && !LocalizationManager_TypeInfo->_2.cctor_finished )
                          {
                            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                          }
                          v93 = LocalizationManager__Get((System_String_o *)StringLiteral_3116/*"CMDSPELL_CURRENT_NUM"*/, 0LL);
                          spendNum = v12->fields.spendNum;
                          v94 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &spendNum);
                          v95 = System_String__Format(v93, v94, 0LL);
                          itemDetailLb = v12->fields.itemDetailLb;
                          v97 = (Il2CppObject *)v95;
                          v98 = LocalizationManager__Get((System_String_o *)StringLiteral_11260/*"RP_RECOVER_CMDSPELL_TXT"*/, 0LL);
                          recvRpNum = v12->fields.recvRpNum;
                          v99 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &recvRpNum);
                          this = (RecoverItemComponent_o *)System_String__Format_44301068(v98, v97, v99, 0LL);
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
                                v67 = CommandSpell < v12->fields.spendNum;
                                v68 = v12->fields.recvRpNum + v12->fields.usrCurrentRp;
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
          RecvItemData = RecoverEntity__getRecvItemData(data, v69);
          if ( !RecvItemData )
            goto LABEL_99;
          v71 = RecvItemData;
          this = (RecoverItemComponent_o *)v12->fields.itemIconInfo;
          if ( this )
          {
            ItemIconComponent__SetItemImage_27393796(
              (ItemIconComponent_o *)this,
              v71->fields.imageId,
              v71->fields.bgImageId,
              v71->fields.type,
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
                  UILabel__set_text((UILabel_o *)this, v71->fields.name, 0LL);
                  this = (RecoverItemComponent_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
                  if ( this )
                  {
                    this = (RecoverItemComponent_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                       (DataManager_o *)this,
                                                       (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserItemMaster___);
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
                        value = v71->fields.value;
                        if ( needRp < 1 )
                        {
                          *p_spendNum = 1;
                        }
                        else
                        {
                          v81 = UnityEngine_Mathf__CeilToInt(
                                  fmaxf((float)(needRp - v12->fields.usrCurrentRp) / (float)value, 1.0),
                                  0LL);
                          v12->fields.spendNum = v81;
                          value *= v81;
                        }
                        v12->fields.recvRpNum = value;
                        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                          && !LocalizationManager_TypeInfo->_2.cctor_finished )
                        {
                          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                        }
                        v82 = LocalizationManager__Get((System_String_o *)StringLiteral_14712/*"UNIT_INFO"*/, 0LL);
                        spendNum = v12->fields.spendNum;
                        v83 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &spendNum);
                        v84 = System_String__Format(v82, v83, 0LL);
                        v85 = v12->fields.itemDetailLb;
                        v86 = (Il2CppObject *)v84;
                        v87 = LocalizationManager__Get((System_String_o *)StringLiteral_11262/*"RP_RECOVER_NUM_TXT"*/, 0LL);
                        recvRpNum = v12->fields.recvRpNum;
                        v88 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &recvRpNum);
                        this = (RecoverItemComponent_o *)System_String__Format_44301068(v87, v86, v88, 0LL);
                        if ( v85 )
                        {
                          UILabel__set_text(v85, (System_String_o *)this, 0LL);
                          v89 = v12->fields.currentNumLb;
                          v104 = num;
                          v90 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v104);
                          this = (RecoverItemComponent_o *)System_String__Format(
                                                             (System_String_o *)StringLiteral_23527/*"{0:N0}"*/,
                                                             v90,
                                                             0LL);
                          if ( v89 )
                          {
                            UILabel__set_text(v89, (System_String_o *)this, 0LL);
                            v91 = v12->fields.spendNumLb;
                            this = (RecoverItemComponent_o *)System_Int32__ToString((int)v12 + 120, 0LL);
                            if ( v91 )
                            {
                              UILabel__set_text(v91, (System_String_o *)this, 0LL);
                              v92 = v12->fields.recvRpNum + v12->fields.usrCurrentRp;
                              v12->fields.isEnableSelect = num >= v12->fields.spendNum;
                              v12->fields.recvSum = v92;
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
  this = (RecoverItemComponent_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_100;
  this = (RecoverItemComponent_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                     (DataManager_o *)this,
                                     (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ItemMaster___);
  if ( !this )
    goto LABEL_100;
  this = (RecoverItemComponent_o *)ItemMaster__GetEntityByType((ItemMaster_o *)this, 2, 0LL);
  if ( !this )
    goto LABEL_100;
  v53 = this;
  this = (RecoverItemComponent_o *)v12->fields.itemIconInfo;
  if ( !this )
    goto LABEL_100;
  ItemIconComponent__SetItemImage_27393796(
    (ItemIconComponent_o *)this,
    (int32_t)v53->fields.cmdSpellIcon,
    HIDWORD(v53->fields.cmdSpellIcon),
    (int32_t)v53->fields.itemNameLb,
    0,
    0LL);
  this = (RecoverItemComponent_o *)v12->fields.itemIconInfo;
  if ( !this )
    goto LABEL_100;
  this = (RecoverItemComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !this )
    goto LABEL_100;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
  this = (RecoverItemComponent_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_100;
  this = (RecoverItemComponent_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                     (DataManager_o *)this,
                                     (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_StoneShopMaster___);
  if ( !this )
    goto LABEL_100;
  this = (RecoverItemComponent_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                     (DataMasterBase_WarMaster__WarEntity__int__o *)this,
                                     v12->fields.targetId,
                                     (const MethodInfo_24E40D0 *)Method_DataMasterBase_StoneShopMaster__StoneShopEntity__int__GetEntity__);
  if ( !v12->fields.itemNameLb )
    goto LABEL_100;
  v54 = this;
  UILabel__set_text(v12->fields.itemNameLb, (System_String_o *)v53->fields.itemIconInfo, 0LL);
  if ( !*p_userEntity )
    goto LABEL_100;
  recvTarget = (*p_userEntity)->fields.recvTarget;
  if ( v54 )
    *p_spendNum = HIDWORD(v54->fields.cmdSpellIcon);
  v56 = v12->fields.currentNumLb;
  spendNum = recvTarget;
  v57 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &spendNum);
  this = (RecoverItemComponent_o *)System_String__Format((System_String_o *)StringLiteral_23527/*"{0:N0}"*/, v57, 0LL);
  if ( !v56 )
    goto LABEL_100;
  UILabel__set_text(v56, (System_String_o *)this, 0LL);
  v58 = v12->fields.spendNumLb;
  this = (RecoverItemComponent_o *)System_Int32__ToString((int)v12 + 120, 0LL);
  if ( !v58 )
    goto LABEL_100;
  UILabel__set_text(v58, (System_String_o *)this, 0LL);
  RecoverItemComponent__AttachStoneCountRefreshComponent(v12, v59);
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v60 = LocalizationManager__Get((System_String_o *)StringLiteral_14712/*"UNIT_INFO"*/, 0LL);
  recvRpNum = v12->fields.spendNum;
  v61 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &recvRpNum);
  v62 = System_String__Format(v60, v61, 0LL);
  v63 = v12->fields.itemDetailLb;
  v64 = (Il2CppObject *)v62;
  v65 = LocalizationManager__Get((System_String_o *)StringLiteral_11262/*"RP_RECOVER_NUM_TXT"*/, 0LL);
  v104 = v12->fields.recvRpNum;
  v66 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v104);
  this = (RecoverItemComponent_o *)System_String__Format_44301068(v65, v64, v66, 0LL);
  if ( !v63 )
LABEL_100:
    sub_B2C434(this, data);
  UILabel__set_text(v63, (System_String_o *)this, 0LL);
  v67 = recvTarget < v12->fields.spendNum;
  v68 = v12->fields.recvRpNum + v12->fields.usrCurrentRp;
LABEL_95:
  v102 = !v67;
  v12->fields.isEnableSelect = v102;
  v12->fields.recvSum = v68;
LABEL_99:
  RecoverItemComponent__setEnableSelectItem(v12, (const MethodInfo *)data);
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
  System_String_o *v23; // x20
  RecoverItemComponent___c_c *v24; // x8
  struct RecoverItemComponent___c_StaticFields *static_fields; // x9
  System_Action_o *_9__43_0; // x22
  System_String_o *v27; // x21
  Il2CppObject *v28; // x23
  struct RecoverItemComponent___c_StaticFields *v29; // x0
  System_String_array **v30; // x2
  System_String_array **v31; // x3
  System_Boolean_array **v32; // x4
  System_Int32_array **v33; // x5
  System_Int32_array *v34; // x6
  System_Int32_array *v35; // x7

  if ( (byte_418AD2A & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, method);
    sub_B2C35C(&Method_DataManager_GetMasterData_EventMaster___, v9);
    sub_B2C35C(&LocalizationManager_TypeInfo, v10);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v12);
    sub_B2C35C(&TerminalSceneComponent_TypeInfo, v13);
    sub_B2C35C(&Method_RecoverItemComponent___c__setRequestInfo_b__43_0__, v14);
    sub_B2C35C(&RecoverItemComponent___c_TypeInfo, v15);
    sub_B2C35C(&StringLiteral_11263/*"RP_UNRECOVERABLE_MESSAGE"*/, v16);
    sub_B2C35C(&StringLiteral_1/*""*/, v17);
    byte_418AD2A = 1;
  }
  if ( this->fields.recvTarget != 2 )
    goto LABEL_16;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_32;
  DataManager__GetMasterData_WarQuestSelectionMaster_(
    Instance,
    (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_EventMaster___);
  if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  }
  if ( !byte_4183C65 )
  {
    sub_B2C35C(&TerminalSceneComponent_TypeInfo, v19);
    byte_4183C65 = 1;
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
    sub_B2C434(Instance, v19);
  if ( !ScrPlayerStatus__IsBPActive((ScrPlayerStatus_o *)Instance, 0LL) )
  {
    v22 = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    Instance = (DataManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11263/*"RP_UNRECOVERABLE_MESSAGE"*/, 0LL);
    v23 = (System_String_o *)Instance;
    v24 = RecoverItemComponent___c_TypeInfo;
    if ( (BYTE3(RecoverItemComponent___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !RecoverItemComponent___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(RecoverItemComponent___c_TypeInfo);
      v24 = RecoverItemComponent___c_TypeInfo;
    }
    static_fields = v24->static_fields;
    _9__43_0 = static_fields->__9__43_0;
    v27 = (System_String_o *)StringLiteral_1/*""*/;
    if ( !_9__43_0 )
    {
      if ( (BYTE3(v24->vtable._0_Equals.methodPtr) & 4) != 0 && !v24->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v24);
        static_fields = RecoverItemComponent___c_TypeInfo->static_fields;
      }
      v28 = (Il2CppObject *)static_fields->__9;
      _9__43_0 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
      System_Action___ctor(_9__43_0, v28, Method_RecoverItemComponent___c__setRequestInfo_b__43_0__, 0LL);
      v29 = RecoverItemComponent___c_TypeInfo->static_fields;
      v29->__9__43_0 = _9__43_0;
      sub_B2C2F8(
        (BattleServantConfConponent_o *)&v29->__9__43_0,
        (System_Int32_array **)_9__43_0,
        v30,
        v31,
        v32,
        v33,
        v34,
        v35);
    }
    if ( v22 )
    {
      CommonUI__OpenNotificationDialog(v22, v27, v23, _9__43_0, -1, 0, 0, 0, 1, 0, 1, 0, 0LL, 0LL);
      return;
    }
    goto LABEL_32;
  }
LABEL_16:
  callbackFunc = this->fields.callbackFunc;
  if ( callbackFunc )
  {
    this->fields.callbackFunc = 0LL;
    sub_B2C2F8((BattleServantConfConponent_o *)&this->fields.callbackFunc, 0LL, v2, v3, v4, v5, v6, v7);
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
  CommonUI_o *v9; // x21
  System_Action_o *v10; // x20

  if ( (byte_418AD28 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, isRes);
    sub_B2C35C(&Method_RecoverItemComponent_setRequestInfo__, v5);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6);
    byte_418AD28 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v9 = Instance;
  if ( isRes )
  {
    v10 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
    System_Action___ctor(v10, (Il2CppObject *)this, Method_RecoverItemComponent_setRequestInfo__, 0LL);
    if ( v9 )
    {
      CommonUI__CloseConfirmDialog_17971588(v9, v10, 0LL);
      return;
    }
LABEL_8:
    sub_B2C434(Instance, v8);
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
  sub_B2C2F8(p_method, object);
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
  if ( (byte_4185650 & 1) == 0 )
  {
    sub_B2C35C(&int_TypeInfo, *(_QWORD *)&type);
    sub_B2C35C(&RecoverType_Type_TypeInfo, v10);
    byte_4185650 = 1;
  }
  v12[3] = 0LL;
  v12[0] = j_il2cpp_value_box_0(RecoverType_Type_TypeInfo, &v15);
  v12[1] = j_il2cpp_value_box_0(int_TypeInfo, &v14);
  v12[2] = j_il2cpp_value_box_0(int_TypeInfo, &v13);
  return (System_IAsyncResult_o *)sub_B2C300(this, v12, callback, object);
}


void __fastcall RecoverItemComponent_CallbackFunc__EndInvoke(
        RecoverItemComponent_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B2C304(result, 0LL, method);
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
  __int64 v14; // x3
  __int64 v15; // x8
  unsigned int v16; // w24
  unsigned __int64 v17; // x10
  _DWORD *v18; // x11
  __int64 v19; // x0
  __int64 v20; // x0
  __int64 v21; // x0
  void (__fastcall **v22)(__int64 *, _QWORD, _QWORD, _QWORD, _QWORD); // x0
  RecoverItemComponent_CallbackFunc_o *v23; // x8
  __int64 *v24; // x23
  __int64 v25; // x24
  void (__fastcall *v26)(unsigned int *, _QWORD, _QWORD, __int64); // x25
  char v27; // w25
  char v28; // w0
  __int64 v29; // x3
  unsigned int v30; // w25
  __int64 v31; // x8
  __int64 v32; // x1
  __int64 v33; // x2
  unsigned __int64 v34; // x10
  _DWORD *v35; // x11
  unsigned int v36; // [xsp+4h] [xbp-5Ch] BYREF
  RecoverItemComponent_CallbackFunc_o *v37; // [xsp+8h] [xbp-58h] BYREF

  v37 = this;
  v36 = type;
  v5 = *(_QWORD *)&this[1].fields.method_ptr;
  if ( !v5 )
  {
    v10 = &v37;
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
      v23 = v10[v11];
      v24 = *(__int64 **)&v23->fields.method;
      v25 = *(_QWORD *)&v23->fields.extra_arg;
      v26 = *(void (__fastcall **)(unsigned int *, _QWORD, _QWORD, __int64))&v23->fields.method_ptr;
      if ( *(__int16 *)(v25 + 72) == -1 )
        sub_B2C418(*(_QWORD *)&v23->fields.extra_arg, *(_QWORD *)&type, *(_QWORD *)&id, *(_QWORD *)&num);
      if ( (sub_B2C38C(v25) & 1) == 0 )
        break;
      if ( *(_BYTE *)(v25 + 74) != 3 )
        goto LABEL_36;
      v26((unsigned int *)v36, (unsigned int)id, (unsigned int)num, v25);
LABEL_38:
      if ( ++v11 == v9 )
        return;
    }
    if ( !v24 )
    {
      v26(&v36 - 4, (unsigned int)id, (unsigned int)num, v25);
      goto LABEL_38;
    }
    if ( *(__int16 *)(v25 + 72) != -1 && (*(_BYTE *)(*v24 + 277) & 1) == 0 && this->fields.m_target )
    {
      v27 = sub_B2C384(v25);
      v28 = sub_B2C788(v25);
      if ( (v27 & 1) != 0 )
      {
        v30 = v36;
        if ( (v28 & 1) != 0 )
        {
          v31 = *v24;
          v32 = *(_QWORD *)(v25 + 24);
          v33 = *(unsigned __int16 *)(v25 + 72);
          if ( *(_WORD *)(*v24 + 298) )
          {
            v34 = 0LL;
            v35 = (_DWORD *)(*(_QWORD *)(v31 + 176) + 8LL);
            while ( *((_QWORD *)v35 - 1) != v32 )
            {
              ++v34;
              v35 += 4;
              if ( v34 >= *(unsigned __int16 *)(*v24 + 298) )
                goto LABEL_35;
            }
            v21 = v31 + 16LL * (*v35 + (int)v33) + 312;
          }
          else
          {
LABEL_35:
            v21 = sub_AC5258(v24, v32, v33, v29);
          }
          v20 = *(_QWORD *)(v21 + 8);
        }
        else
        {
          v20 = *(_QWORD *)(*v24 + 16LL * *(unsigned __int16 *)(v25 + 72) + 320);
        }
        v22 = (void (__fastcall **)(__int64 *, _QWORD, _QWORD, _QWORD, _QWORD))sub_B2C40C(v20, v25);
        (*v22)(v24, v30, (unsigned int)id, (unsigned int)num, v22);
      }
      else
      {
        v12 = *(unsigned __int16 *)(v25 + 72);
        if ( (v28 & 1) != 0 )
        {
          class_0 = j_il2cpp_method_get_class_0(v25);
          v15 = *v24;
          v16 = v36;
          if ( *(_WORD *)(*v24 + 298) )
          {
            v17 = 0LL;
            v18 = (_DWORD *)(*(_QWORD *)(v15 + 176) + 8LL);
            while ( *((_QWORD *)v18 - 1) != class_0 )
            {
              ++v17;
              v18 += 4;
              if ( v17 >= *(unsigned __int16 *)(*v24 + 298) )
                goto LABEL_11;
            }
            v19 = v15 + 16LL * (int)(*v18 + v12) + 312;
          }
          else
          {
LABEL_11:
            v19 = sub_AC5258(v24, class_0, v12, v14);
          }
          (*(void (__fastcall **)(__int64 *, _QWORD, _QWORD, _QWORD, _QWORD))v19)(
            v24,
            v16,
            (unsigned int)id,
            (unsigned int)num,
            *(_QWORD *)(v19 + 8));
        }
        else
        {
          (*(void (__fastcall **)(__int64 *, _QWORD, _QWORD, _QWORD, _QWORD))(*v24
                                                                            + 16LL * *(unsigned __int16 *)(v25 + 72)
                                                                            + 312))(
            v24,
            v36,
            (unsigned int)id,
            (unsigned int)num,
            *(_QWORD *)(*v24 + 16LL * *(unsigned __int16 *)(v25 + 72) + 320));
        }
      }
      goto LABEL_38;
    }
LABEL_36:
    ((void (__fastcall *)(__int64 *, _QWORD, _QWORD, _QWORD, __int64))v26)(
      v24,
      v36,
      (unsigned int)id,
      (unsigned int)num,
      v25);
    goto LABEL_38;
  }
}


void __fastcall RecoverItemComponent___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  struct RecoverItemComponent___c_StaticFields *static_fields; // x0

  if ( (byte_418564E & 1) == 0 )
  {
    sub_B2C35C(&RecoverItemComponent___c_TypeInfo, v1);
    byte_418564E = 1;
  }
  v2 = (Il2CppObject *)sub_B2C42C(RecoverItemComponent___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  static_fields = RecoverItemComponent___c_TypeInfo->static_fields;
  static_fields->__9 = (struct RecoverItemComponent___c_o *)v2;
  sub_B2C2F8(static_fields, v2);
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
  __int64 v4; // x1

  if ( (byte_418564F & 1) == 0 )
  {
    sub_B2C35C(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, method);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v2);
    byte_418564F = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance
    || (CommonUI__CloseRecoverItemListDialog(Instance, 0LL),
        (Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__)) == 0LL) )
  {
    sub_B2C434(Instance, v4);
  }
  AvalonSceneManager__transitionSceneRefresh((AvalonSceneManager_o *)Instance, 34, 1, 0LL, 0, 0LL);
}