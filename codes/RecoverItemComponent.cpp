void __fastcall RecoverItemComponent___cctor(const MethodInfo *method)
{
  if ( (byte_438EF0A & 1) == 0 )
  {
    sub_B775C4(&RecoverItemComponent_TypeInfo);
    byte_438EF0A = 1;
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
  UnityEngine_GameObject_o *gameObject; // x20
  System_Action_int__o *v4; // x21

  if ( (byte_438EF04 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Action_int___ctor__);
    sub_B775C4(&System_Action_int__TypeInfo);
    sub_B775C4(&Method_RecoverItemComponent__AttachStoneCountRefreshComponent_b__38_0__);
    byte_438EF04 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v4 = (System_Action_int__o *)sub_B77694(System_Action_int__TypeInfo);
  System_Action_int____ctor(
    v4,
    (Il2CppObject *)this,
    Method_RecoverItemComponent__AttachStoneCountRefreshComponent_b__38_0__,
    (const MethodInfo_269F2D8 *)Method_System_Action_int___ctor__);
  StoneCountRefreshComponent__AttachToGameObject(gameObject, v4, 1, 0LL);
}


void __fastcall RecoverItemComponent__CloseApRecovDlg(
        RecoverItemComponent_o *this,
        bool isRes,
        int32_t useNum,
        const MethodInfo *method)
{
  WebViewManager_o *v7; // x20
  System_Action_o *v8; // x21
  CommonUI_o *Instance; // x0
  __int64 v10; // x1
  System_Action_o *v11; // x1

  if ( (byte_438EF07 & 1) == 0 )
  {
    sub_B775C4(&System_Action_TypeInfo);
    sub_B775C4(&Method_RecoverItemComponent_setRequestInfo__);
    sub_B775C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_438EF07 = 1;
  }
  if ( !isRes )
  {
    Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( Instance )
    {
      v11 = 0LL;
      goto LABEL_8;
    }
LABEL_9:
    sub_B7769C(Instance, v10);
  }
  this->fields.spendNum = useNum;
  v7 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v8 = (System_Action_o *)sub_B77694(System_Action_TypeInfo);
  System_Action___ctor(v8, (Il2CppObject *)this, Method_RecoverItemComponent_setRequestInfo__, 0LL);
  if ( !v7 )
    goto LABEL_9;
  Instance = (CommonUI_o *)v7;
  v11 = v8;
LABEL_8:
  CommonUI__CloseApRecoverConfirmDlg(Instance, v11, 0LL);
}


void __fastcall RecoverItemComponent__OnClickItem(RecoverItemComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *dialog; // x20
  __int64 userEntity; // x0
  __int64 v5; // x1
  struct RecoverDlgComponent_o *v6; // x8
  System_String_o *v7; // x27
  System_String_o *v8; // x21
  __int64 v9; // x2
  Il2CppObject *v10; // x0
  System_Int32_array **v11; // x24
  System_Int32_array **mText; // x23
  System_String_o *v13; // x21
  __int64 v14; // x2
  Il2CppObject *v15; // x0
  struct UILabel_o *itemNameLb; // x8
  System_String_o *v17; // x21
  System_String_o *v18; // x22
  int32_t v19; // w8
  int32_t usrMaxAp; // w9
  System_String_o **v21; // x8
  System_String_o *v22; // x25
  System_String_o *v23; // x25
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7
  System_Object_array *v30; // x26
  System_String_array **v31; // x2
  System_String_array **v32; // x3
  System_Boolean_array **v33; // x4
  System_Int32_array **v34; // x5
  System_Int32_array *v35; // x6
  System_Int32_array *v36; // x7
  __int64 v37; // x2
  System_String_array **v38; // x2
  System_String_array **v39; // x3
  System_Boolean_array **v40; // x4
  System_Int32_array **v41; // x5
  System_Int32_array *v42; // x6
  System_Int32_array *v43; // x7
  System_Int32_array **v44; // x24
  __int64 v45; // x2
  System_String_array **v46; // x2
  System_String_array **v47; // x3
  System_Boolean_array **v48; // x4
  System_Int32_array **v49; // x5
  System_Int32_array *v50; // x6
  System_Int32_array *v51; // x7
  System_Int32_array **v52; // x24
  __int64 v53; // x2
  System_String_array **v54; // x2
  System_String_array **v55; // x3
  System_Boolean_array **v56; // x4
  System_Int32_array **v57; // x5
  System_Int32_array *v58; // x6
  System_Int32_array *v59; // x7
  System_Int32_array **v60; // x24
  __int64 v61; // x2
  System_String_array **v62; // x2
  System_String_array **v63; // x3
  System_Boolean_array **v64; // x4
  System_Int32_array **v65; // x5
  System_Int32_array *v66; // x6
  System_Int32_array *v67; // x7
  System_Int32_array **v68; // x24
  __int64 v69; // x2
  System_String_array **v70; // x2
  System_String_array **v71; // x3
  System_Boolean_array **v72; // x4
  System_Int32_array **v73; // x5
  System_Int32_array *v74; // x6
  System_Int32_array *v75; // x7
  System_Int32_array **v76; // x24
  BattleServantConfConponent_o *v77; // x0
  System_String_o *v78; // x25
  System_String_array **v79; // x2
  System_String_array **v80; // x3
  System_Boolean_array **v81; // x4
  System_Int32_array **v82; // x5
  System_Int32_array *v83; // x6
  System_Int32_array *v84; // x7
  System_Object_array *v85; // x26
  System_String_array **v86; // x2
  System_String_array **v87; // x3
  System_Boolean_array **v88; // x4
  System_Int32_array **v89; // x5
  System_Int32_array *v90; // x6
  System_Int32_array *v91; // x7
  __int64 v92; // x2
  System_String_array **v93; // x2
  System_String_array **v94; // x3
  System_Boolean_array **v95; // x4
  System_Int32_array **v96; // x5
  System_Int32_array *v97; // x6
  System_Int32_array *v98; // x7
  System_Int32_array **v99; // x24
  __int64 v100; // x2
  System_String_array **v101; // x2
  System_String_array **v102; // x3
  System_Boolean_array **v103; // x4
  System_Int32_array **v104; // x5
  System_Int32_array *v105; // x6
  System_Int32_array *v106; // x7
  System_Int32_array **v107; // x24
  __int64 v108; // x2
  System_String_array **v109; // x2
  System_String_array **v110; // x3
  System_Boolean_array **v111; // x4
  System_Int32_array **v112; // x5
  System_Int32_array *v113; // x6
  System_Int32_array *v114; // x7
  System_Int32_array **v115; // x24
  __int64 v116; // x2
  System_String_array **v117; // x2
  System_String_array **v118; // x3
  System_Boolean_array **v119; // x4
  System_Int32_array **v120; // x5
  System_Int32_array *v121; // x6
  System_Int32_array *v122; // x7
  System_Int32_array **v123; // x24
  __int64 v124; // x2
  System_String_array **v125; // x2
  System_String_array **v126; // x3
  System_Boolean_array **v127; // x4
  System_Int32_array **v128; // x5
  System_Int32_array *v129; // x6
  System_Int32_array *v130; // x7
  System_Int32_array **v131; // x24
  System_String_o *v132; // x24
  CommonUI_o *v133; // x23
  CommonConfirmDialog_ClickDelegate_o *v134; // x25
  System_String_o **v135; // x8
  System_String_o *v136; // x25
  System_String_array **v137; // x2
  System_String_array **v138; // x3
  System_Boolean_array **v139; // x4
  System_Int32_array **v140; // x5
  System_Int32_array *v141; // x6
  System_Int32_array *v142; // x7
  System_String_array **v143; // x2
  System_String_array **v144; // x3
  System_Boolean_array **v145; // x4
  System_Int32_array **v146; // x5
  System_Int32_array *v147; // x6
  System_Int32_array *v148; // x7
  __int64 v149; // x2
  System_String_array **v150; // x2
  System_String_array **v151; // x3
  System_Boolean_array **v152; // x4
  System_Int32_array **v153; // x5
  System_Int32_array *v154; // x6
  System_Int32_array *v155; // x7
  System_Int32_array **v156; // x24
  __int64 v157; // x2
  System_String_array **v158; // x2
  System_String_array **v159; // x3
  System_Boolean_array **v160; // x4
  System_Int32_array **v161; // x5
  System_Int32_array *v162; // x6
  System_Int32_array *v163; // x7
  System_Int32_array **v164; // x24
  __int64 v165; // x2
  System_String_array **v166; // x2
  System_String_array **v167; // x3
  System_Boolean_array **v168; // x4
  System_Int32_array **v169; // x5
  System_Int32_array *v170; // x6
  System_Int32_array *v171; // x7
  System_Int32_array **v172; // x24
  __int64 v173; // x2
  System_String_array **v174; // x2
  System_String_array **v175; // x3
  System_Boolean_array **v176; // x4
  System_Int32_array **v177; // x5
  System_Int32_array *v178; // x6
  System_Int32_array *v179; // x7
  System_Int32_array **v180; // x24
  __int64 v181; // x2
  System_String_array **v182; // x2
  System_String_array **v183; // x3
  System_Boolean_array **v184; // x4
  System_Int32_array **v185; // x5
  System_Int32_array *v186; // x6
  System_Int32_array *v187; // x7
  System_Int32_array **v188; // x24
  __int64 v189; // x2
  System_String_o *v190; // x23
  CommonUI_o *v191; // x25
  CommonConfirmDialog_ClickDelegate_o *v192; // x26
  System_String_o *v193; // x0
  System_String_o *v194; // x20
  CommonUI_o *v195; // x21
  System_Action_o *v196; // x22
  System_String_o *v197; // x0
  System_String_o *v198; // x20
  CommonUI_o *Instance; // x21
  System_Action_o *v200; // x22
  WebViewManager_o *v201; // x0
  int32_t targetId; // w20
  int32_t needAp; // w21
  CommonUI_o *v204; // x22
  System_Action_bool__int__o *v205; // x23
  __int64 v206; // x0
  __int64 v207; // x0
  int32_t v208; // [xsp+38h] [xbp-68h] BYREF
  int32_t v209; // [xsp+3Ch] [xbp-64h] BYREF
  int32_t recvSum; // [xsp+40h] [xbp-60h] BYREF
  int32_t usrMaxRp; // [xsp+44h] [xbp-5Ch] BYREF
  int32_t usrCurrentRp; // [xsp+48h] [xbp-58h] BYREF
  int32_t spendNum; // [xsp+4Ch] [xbp-54h] BYREF

  if ( (byte_438EF05 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Action_bool__int___ctor__);
    sub_B775C4(&System_Action_bool__int__TypeInfo);
    sub_B775C4(&System_Action_TypeInfo);
    sub_B775C4(&BalanceConfig_TypeInfo);
    sub_B775C4(&CommonConfirmDialog_ClickDelegate_TypeInfo);
    sub_B775C4(&int_TypeInfo);
    sub_B775C4(&LocalizationManager_TypeInfo);
    sub_B775C4(&object___TypeInfo);
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    sub_B775C4(&Method_RecoverItemComponent_CloseApRecovDlg__);
    sub_B775C4(&Method_RecoverItemComponent_closeNotificationDlg__);
    sub_B775C4(&Method_RecoverItemComponent_spendItemDlg__);
    sub_B775C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_B775C4(&SoundManager_TypeInfo);
    sub_B775C4(&StringLiteral_11476/*"RP_RECOVER_CONFIRM_MSG"*/);
    sub_B775C4(&StringLiteral_3241/*"CMDSPELL_CURRENT_NUM"*/);
    sub_B775C4(&StringLiteral_3382/*"COMMAND_SPELL_TXT"*/);
    sub_B775C4(&StringLiteral_1804/*"AP_RECOVER_CONFIRM_MSG"*/);
    sub_B775C4(&StringLiteral_11474/*"RP_FULL_MSG"*/);
    sub_B775C4(&StringLiteral_14965/*"UNIT_INFO"*/);
    sub_B775C4(&StringLiteral_1800/*"AP_ADD_CONFIRM_MSG"*/);
    sub_B775C4(&StringLiteral_3388/*"COMMON_CONFIRM_DECIDE"*/);
    sub_B775C4(&StringLiteral_3386/*"COMMON_CONFIRM_CANCEL"*/);
    sub_B775C4(&StringLiteral_1801/*"AP_ADD_CONFIRM_MSG_OVER"*/);
    sub_B775C4(&StringLiteral_1805/*"AP_RECOVER_CONFIRM_MSG_OVER"*/);
    sub_B775C4(&StringLiteral_1802/*"AP_FULL_MSG"*/);
    sub_B775C4(&StringLiteral_1/*""*/);
    sub_B775C4(&StringLiteral_1810/*"AP_RECOVER_STONEPAY_WARNING_MSG"*/);
    byte_438EF05 = 1;
  }
  if ( !this->fields.isEnableSelect )
    return;
  dialog = (UnityEngine_Object_o *)this->fields.dialog;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  userEntity = UnityEngine_Object__op_Inequality(dialog, 0LL, 0LL);
  if ( (userEntity & 1) == 0 )
    return;
  v6 = this->fields.dialog;
  if ( !v6 )
    goto LABEL_154;
  if ( v6->fields.isClosed )
    return;
  v7 = (System_String_o *)StringLiteral_1/*""*/;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v8 = LocalizationManager__Get((System_String_o *)StringLiteral_14965/*"UNIT_INFO"*/, 0LL);
  spendNum = this->fields.spendNum;
  v10 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &spendNum, v9);
  userEntity = (__int64)System_String__Format(v8, v10, 0LL);
  v11 = (System_Int32_array **)userEntity;
  if ( this->fields.currentType == 1 )
  {
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    mText = (System_Int32_array **)LocalizationManager__Get((System_String_o *)StringLiteral_3382/*"COMMAND_SPELL_TXT"*/, 0LL);
    if ( this->fields.currentType == 1 )
    {
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v13 = LocalizationManager__Get((System_String_o *)StringLiteral_3241/*"CMDSPELL_CURRENT_NUM"*/, 0LL);
      spendNum = this->fields.spendNum;
      v15 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &spendNum, v14);
      v11 = (System_Int32_array **)System_String__Format(v13, v15, 0LL);
    }
  }
  else
  {
    itemNameLb = this->fields.itemNameLb;
    if ( !itemNameLb )
      goto LABEL_154;
    mText = (System_Int32_array **)itemNameLb->fields.mText;
  }
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v17 = LocalizationManager__Get((System_String_o *)StringLiteral_3388/*"COMMON_CONFIRM_DECIDE"*/, 0LL);
  v18 = LocalizationManager__Get((System_String_o *)StringLiteral_3386/*"COMMON_CONFIRM_CANCEL"*/, 0LL);
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(0, 0LL);
  if ( !this->fields.isAp )
  {
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v78 = LocalizationManager__Get((System_String_o *)StringLiteral_11476/*"RP_RECOVER_CONFIRM_MSG"*/, 0LL);
    userEntity = sub_B775DC(object___TypeInfo, 7LL);
    if ( !userEntity )
      goto LABEL_154;
    v85 = (System_Object_array *)userEntity;
    if ( mText )
    {
      userEntity = sub_B77684(mText, *(_QWORD *)(*(_QWORD *)userEntity + 64LL));
      if ( !userEntity )
        goto LABEL_155;
    }
    if ( v85->max_length )
    {
      v85->m_Items[0] = (Il2CppObject *)mText;
      sub_B77560((BattleServantConfConponent_o *)v85->m_Items, mText, v79, v80, v81, v82, v83, v84);
      if ( v11 )
      {
        userEntity = sub_B77684(v11, v85->obj.klass->_1.element_class);
        if ( !userEntity )
          goto LABEL_155;
      }
      if ( v85->max_length > 1 )
      {
        v85->m_Items[1] = (Il2CppObject *)v11;
        sub_B77560((BattleServantConfConponent_o *)&v85->m_Items[1], v11, v86, v87, v88, v89, v90, v91);
        spendNum = this->fields.recvRpNum;
        userEntity = j_il2cpp_value_box_0(int_TypeInfo, &spendNum, v92);
        v99 = (System_Int32_array **)userEntity;
        if ( userEntity )
        {
          userEntity = sub_B77684(userEntity, v85->obj.klass->_1.element_class);
          if ( !userEntity )
            goto LABEL_155;
        }
        if ( v85->max_length > 2 )
        {
          v85->m_Items[2] = (Il2CppObject *)v99;
          sub_B77560((BattleServantConfConponent_o *)&v85->m_Items[2], v99, v93, v94, v95, v96, v97, v98);
          usrCurrentRp = this->fields.usrCurrentRp;
          userEntity = j_il2cpp_value_box_0(int_TypeInfo, &usrCurrentRp, v100);
          v107 = (System_Int32_array **)userEntity;
          if ( userEntity )
          {
            userEntity = sub_B77684(userEntity, v85->obj.klass->_1.element_class);
            if ( !userEntity )
              goto LABEL_155;
          }
          if ( v85->max_length > 3 )
          {
            v85->m_Items[3] = (Il2CppObject *)v107;
            sub_B77560((BattleServantConfConponent_o *)&v85->m_Items[3], v107, v101, v102, v103, v104, v105, v106);
            usrMaxRp = this->fields.usrMaxRp;
            userEntity = j_il2cpp_value_box_0(int_TypeInfo, &usrMaxRp, v108);
            v115 = (System_Int32_array **)userEntity;
            if ( userEntity )
            {
              userEntity = sub_B77684(userEntity, v85->obj.klass->_1.element_class);
              if ( !userEntity )
                goto LABEL_155;
            }
            if ( v85->max_length > 4 )
            {
              v85->m_Items[4] = (Il2CppObject *)v115;
              sub_B77560((BattleServantConfConponent_o *)&v85->m_Items[4], v115, v109, v110, v111, v112, v113, v114);
              recvSum = this->fields.recvSum;
              userEntity = j_il2cpp_value_box_0(int_TypeInfo, &recvSum, v116);
              v123 = (System_Int32_array **)userEntity;
              if ( userEntity )
              {
                userEntity = sub_B77684(userEntity, v85->obj.klass->_1.element_class);
                if ( !userEntity )
                  goto LABEL_155;
              }
              if ( v85->max_length > 5 )
              {
                v85->m_Items[5] = (Il2CppObject *)v123;
                sub_B77560((BattleServantConfConponent_o *)&v85->m_Items[5], v123, v117, v118, v119, v120, v121, v122);
                v209 = this->fields.usrMaxRp;
                userEntity = j_il2cpp_value_box_0(int_TypeInfo, &v209, v124);
                v131 = (System_Int32_array **)userEntity;
                if ( userEntity )
                {
                  userEntity = sub_B77684(userEntity, v85->obj.klass->_1.element_class);
                  if ( !userEntity )
                    goto LABEL_155;
                }
                if ( v85->max_length > 6 )
                {
                  v85->m_Items[6] = (Il2CppObject *)v131;
                  sub_B77560((BattleServantConfConponent_o *)&v85->m_Items[6], v131, v125, v126, v127, v128, v129, v130);
                  userEntity = (__int64)System_String__Format_44980660(v78, v85, 0LL);
                  if ( !this->fields.userEntity )
                    goto LABEL_154;
                  v132 = (System_String_o *)userEntity;
                  if ( UserGameEntity__getRp(this->fields.userEntity, 0LL) < this->fields.usrMaxRp )
                    goto LABEL_88;
                  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                    && !LocalizationManager_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                  }
                  v197 = LocalizationManager__Get((System_String_o *)StringLiteral_11474/*"RP_FULL_MSG"*/, 0LL);
                  v198 = System_String__Format(v197, (Il2CppObject *)mText, 0LL);
                  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
                  v200 = (System_Action_o *)sub_B77694(System_Action_TypeInfo);
                  System_Action___ctor(
                    v200,
                    (Il2CppObject *)this,
                    Method_RecoverItemComponent_closeNotificationDlg__,
                    0LL);
                  if ( !Instance )
                    goto LABEL_154;
                  CommonUI__OpenNotificationDialog(
                    Instance,
                    (System_String_o *)StringLiteral_1/*""*/,
                    v198,
                    v200,
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
                  return;
                }
              }
            }
          }
        }
      }
    }
LABEL_153:
    v206 = sub_B776C8(userEntity);
    sub_B77668(v206, 0LL);
  }
  v19 = this->fields.recvSum;
  usrMaxAp = this->fields.usrMaxAp;
  if ( !this->fields.isAddAp )
  {
    if ( v19 <= usrMaxAp )
      v135 = (System_String_o **)&StringLiteral_1804/*"AP_RECOVER_CONFIRM_MSG"*/;
    else
      v135 = (System_String_o **)&StringLiteral_1805/*"AP_RECOVER_CONFIRM_MSG_OVER"*/;
    v136 = *v135;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v23 = LocalizationManager__Get(v136, 0LL);
    userEntity = sub_B775DC(object___TypeInfo, 8LL);
    if ( !userEntity )
      goto LABEL_154;
    v30 = (System_Object_array *)userEntity;
    if ( mText )
    {
      userEntity = sub_B77684(mText, *(_QWORD *)(*(_QWORD *)userEntity + 64LL));
      if ( !userEntity )
        goto LABEL_155;
    }
    if ( v30->max_length )
    {
      v30->m_Items[0] = (Il2CppObject *)mText;
      sub_B77560((BattleServantConfConponent_o *)v30->m_Items, mText, v137, v138, v139, v140, v141, v142);
      if ( v11 )
      {
        userEntity = sub_B77684(v11, v30->obj.klass->_1.element_class);
        if ( !userEntity )
          goto LABEL_155;
      }
      if ( v30->max_length > 1 )
      {
        v30->m_Items[1] = (Il2CppObject *)v11;
        sub_B77560((BattleServantConfConponent_o *)&v30->m_Items[1], v11, v143, v144, v145, v146, v147, v148);
        spendNum = this->fields.apRcvRate;
        userEntity = j_il2cpp_value_box_0(int_TypeInfo, &spendNum, v149);
        v156 = (System_Int32_array **)userEntity;
        if ( userEntity )
        {
          userEntity = sub_B77684(userEntity, v30->obj.klass->_1.element_class);
          if ( !userEntity )
            goto LABEL_155;
        }
        if ( v30->max_length > 2 )
        {
          v30->m_Items[2] = (Il2CppObject *)v156;
          sub_B77560((BattleServantConfConponent_o *)&v30->m_Items[2], v156, v150, v151, v152, v153, v154, v155);
          usrCurrentRp = this->fields.recvApNum;
          userEntity = j_il2cpp_value_box_0(int_TypeInfo, &usrCurrentRp, v157);
          v164 = (System_Int32_array **)userEntity;
          if ( userEntity )
          {
            userEntity = sub_B77684(userEntity, v30->obj.klass->_1.element_class);
            if ( !userEntity )
              goto LABEL_155;
          }
          if ( v30->max_length > 3 )
          {
            v30->m_Items[3] = (Il2CppObject *)v164;
            sub_B77560((BattleServantConfConponent_o *)&v30->m_Items[3], v164, v158, v159, v160, v161, v162, v163);
            usrMaxRp = this->fields.usrCurrentAp;
            userEntity = j_il2cpp_value_box_0(int_TypeInfo, &usrMaxRp, v165);
            v172 = (System_Int32_array **)userEntity;
            if ( userEntity )
            {
              userEntity = sub_B77684(userEntity, v30->obj.klass->_1.element_class);
              if ( !userEntity )
                goto LABEL_155;
            }
            if ( v30->max_length > 4 )
            {
              v30->m_Items[4] = (Il2CppObject *)v172;
              sub_B77560((BattleServantConfConponent_o *)&v30->m_Items[4], v172, v166, v167, v168, v169, v170, v171);
              recvSum = this->fields.usrMaxAp;
              userEntity = j_il2cpp_value_box_0(int_TypeInfo, &recvSum, v173);
              v180 = (System_Int32_array **)userEntity;
              if ( userEntity )
              {
                userEntity = sub_B77684(userEntity, v30->obj.klass->_1.element_class);
                if ( !userEntity )
                  goto LABEL_155;
              }
              if ( v30->max_length > 5 )
              {
                v30->m_Items[5] = (Il2CppObject *)v180;
                sub_B77560((BattleServantConfConponent_o *)&v30->m_Items[5], v180, v174, v175, v176, v177, v178, v179);
                v209 = this->fields.recvSum;
                userEntity = j_il2cpp_value_box_0(int_TypeInfo, &v209, v181);
                v188 = (System_Int32_array **)userEntity;
                if ( userEntity )
                {
                  userEntity = sub_B77684(userEntity, v30->obj.klass->_1.element_class);
                  if ( !userEntity )
                    goto LABEL_155;
                }
                if ( v30->max_length > 6 )
                {
                  v30->m_Items[6] = (Il2CppObject *)v188;
                  sub_B77560((BattleServantConfConponent_o *)&v30->m_Items[6], v188, v182, v183, v184, v185, v186, v187);
                  v208 = this->fields.usrMaxAp;
                  userEntity = j_il2cpp_value_box_0(int_TypeInfo, &v208, v189);
                  v76 = (System_Int32_array **)userEntity;
                  if ( userEntity )
                  {
                    userEntity = sub_B77684(userEntity, v30->obj.klass->_1.element_class);
                    if ( !userEntity )
                      goto LABEL_155;
                  }
                  if ( v30->max_length > 7 )
                  {
                    v30->m_Items[7] = (Il2CppObject *)v76;
                    v77 = (BattleServantConfConponent_o *)&v30->m_Items[7];
                    goto LABEL_125;
                  }
                }
              }
            }
          }
        }
      }
    }
    goto LABEL_153;
  }
  if ( v19 <= usrMaxAp )
    v21 = (System_String_o **)&StringLiteral_1800/*"AP_ADD_CONFIRM_MSG"*/;
  else
    v21 = (System_String_o **)&StringLiteral_1801/*"AP_ADD_CONFIRM_MSG_OVER"*/;
  v22 = *v21;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v23 = LocalizationManager__Get(v22, 0LL);
  userEntity = sub_B775DC(object___TypeInfo, 7LL);
  if ( !userEntity )
    goto LABEL_154;
  v30 = (System_Object_array *)userEntity;
  if ( mText )
  {
    userEntity = sub_B77684(mText, *(_QWORD *)(*(_QWORD *)userEntity + 64LL));
    if ( !userEntity )
      goto LABEL_155;
  }
  if ( !v30->max_length )
    goto LABEL_153;
  v30->m_Items[0] = (Il2CppObject *)mText;
  sub_B77560((BattleServantConfConponent_o *)v30->m_Items, mText, v24, v25, v26, v27, v28, v29);
  if ( v11 )
  {
    userEntity = sub_B77684(v11, v30->obj.klass->_1.element_class);
    if ( !userEntity )
      goto LABEL_155;
  }
  if ( v30->max_length <= 1 )
    goto LABEL_153;
  v30->m_Items[1] = (Il2CppObject *)v11;
  sub_B77560((BattleServantConfConponent_o *)&v30->m_Items[1], v11, v31, v32, v33, v34, v35, v36);
  spendNum = this->fields.recvApNum;
  userEntity = j_il2cpp_value_box_0(int_TypeInfo, &spendNum, v37);
  v44 = (System_Int32_array **)userEntity;
  if ( userEntity )
  {
    userEntity = sub_B77684(userEntity, v30->obj.klass->_1.element_class);
    if ( !userEntity )
      goto LABEL_155;
  }
  if ( v30->max_length <= 2 )
    goto LABEL_153;
  v30->m_Items[2] = (Il2CppObject *)v44;
  sub_B77560((BattleServantConfConponent_o *)&v30->m_Items[2], v44, v38, v39, v40, v41, v42, v43);
  usrCurrentRp = this->fields.usrCurrentAp;
  userEntity = j_il2cpp_value_box_0(int_TypeInfo, &usrCurrentRp, v45);
  v52 = (System_Int32_array **)userEntity;
  if ( userEntity )
  {
    userEntity = sub_B77684(userEntity, v30->obj.klass->_1.element_class);
    if ( !userEntity )
      goto LABEL_155;
  }
  if ( v30->max_length <= 3 )
    goto LABEL_153;
  v30->m_Items[3] = (Il2CppObject *)v52;
  sub_B77560((BattleServantConfConponent_o *)&v30->m_Items[3], v52, v46, v47, v48, v49, v50, v51);
  usrMaxRp = this->fields.usrMaxAp;
  userEntity = j_il2cpp_value_box_0(int_TypeInfo, &usrMaxRp, v53);
  v60 = (System_Int32_array **)userEntity;
  if ( userEntity )
  {
    userEntity = sub_B77684(userEntity, v30->obj.klass->_1.element_class);
    if ( !userEntity )
      goto LABEL_155;
  }
  if ( v30->max_length <= 4 )
    goto LABEL_153;
  v30->m_Items[4] = (Il2CppObject *)v60;
  sub_B77560((BattleServantConfConponent_o *)&v30->m_Items[4], v60, v54, v55, v56, v57, v58, v59);
  recvSum = this->fields.recvSum;
  userEntity = j_il2cpp_value_box_0(int_TypeInfo, &recvSum, v61);
  v68 = (System_Int32_array **)userEntity;
  if ( userEntity )
  {
    userEntity = sub_B77684(userEntity, v30->obj.klass->_1.element_class);
    if ( !userEntity )
      goto LABEL_155;
  }
  if ( v30->max_length <= 5 )
    goto LABEL_153;
  v30->m_Items[5] = (Il2CppObject *)v68;
  sub_B77560((BattleServantConfConponent_o *)&v30->m_Items[5], v68, v62, v63, v64, v65, v66, v67);
  v209 = this->fields.usrMaxAp;
  userEntity = j_il2cpp_value_box_0(int_TypeInfo, &v209, v69);
  v76 = (System_Int32_array **)userEntity;
  if ( userEntity )
  {
    userEntity = sub_B77684(userEntity, v30->obj.klass->_1.element_class);
    if ( !userEntity )
    {
LABEL_155:
      v207 = sub_B776BC(userEntity);
      sub_B77668(v207, 0LL);
    }
  }
  if ( v30->max_length <= 6 )
    goto LABEL_153;
  v30->m_Items[6] = (Il2CppObject *)v76;
  v77 = (BattleServantConfConponent_o *)&v30->m_Items[6];
LABEL_125:
  sub_B77560(v77, v76, v70, v71, v72, v73, v74, v75);
  v132 = System_String__Format_44980660(v23, v30, 0LL);
  userEntity = (__int64)this->fields.userEntity;
  if ( !userEntity )
    goto LABEL_154;
  if ( UserGameEntity__getAct((UserGameEntity_o *)userEntity, 0LL) < this->fields.usrMaxAp )
  {
    if ( this->fields.currentType == 2 )
    {
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v190 = LocalizationManager__Get((System_String_o *)StringLiteral_1810/*"AP_RECOVER_STONEPAY_WARNING_MSG"*/, 0LL);
      v191 = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v192 = (CommonConfirmDialog_ClickDelegate_o *)sub_B77694(CommonConfirmDialog_ClickDelegate_TypeInfo);
      CommonConfirmDialog_ClickDelegate___ctor(
        v192,
        (Il2CppObject *)this,
        Method_RecoverItemComponent_spendItemDlg__,
        0LL);
      userEntity = (__int64)BalanceConfig_TypeInfo;
      if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      }
      if ( v191 )
      {
        CommonUI__OpenConfirmDecideDlgAddMsgFrame(
          v191,
          v7,
          v132,
          v190,
          v17,
          v18,
          v192,
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
LABEL_154:
      sub_B7769C(userEntity, v5);
    }
    if ( this->fields.isAddAp || this->fields.apRcvRate != 100 || this->fields.spendNum >= 2 )
    {
      v201 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      targetId = this->fields.targetId;
      needAp = this->fields.needAp;
      v204 = (CommonUI_o *)v201;
      v205 = (System_Action_bool__int__o *)sub_B77694(System_Action_bool__int__TypeInfo);
      System_Action_bool__int____ctor(
        v205,
        (Il2CppObject *)this,
        Method_RecoverItemComponent_CloseApRecovDlg__,
        (const MethodInfo_26AC5D0 *)Method_System_Action_bool__int___ctor__);
      if ( !v204 )
        goto LABEL_154;
      CommonUI__OpenApRecoverConfirmDlg(v204, targetId, needAp, v205, 0LL);
      return;
    }
LABEL_88:
    v133 = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v134 = (CommonConfirmDialog_ClickDelegate_o *)sub_B77694(CommonConfirmDialog_ClickDelegate_TypeInfo);
    CommonConfirmDialog_ClickDelegate___ctor(
      v134,
      (Il2CppObject *)this,
      Method_RecoverItemComponent_spendItemDlg__,
      0LL);
    userEntity = (__int64)BalanceConfig_TypeInfo;
    if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    }
    if ( v133 )
    {
      CommonUI__OpenConfirmDecideDlg(
        v133,
        v7,
        v132,
        v17,
        v18,
        v134,
        BalanceConfig_TypeInfo->static_fields->DefaultFontSize,
        0.0,
        15.0,
        0,
        1,
        0,
        240,
        0,
        1,
        0,
        0LL);
      return;
    }
    goto LABEL_154;
  }
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v193 = LocalizationManager__Get((System_String_o *)StringLiteral_1802/*"AP_FULL_MSG"*/, 0LL);
  v194 = System_String__Format(v193, (Il2CppObject *)mText, 0LL);
  v195 = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v196 = (System_Action_o *)sub_B77694(System_Action_TypeInfo);
  System_Action___ctor(v196, (Il2CppObject *)this, Method_RecoverItemComponent_closeNotificationDlg__, 0LL);
  if ( !v195 )
    goto LABEL_154;
  CommonUI__OpenNotificationDialog(
    v195,
    (System_String_o *)StringLiteral_1/*""*/,
    v194,
    v196,
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


void __fastcall RecoverItemComponent___AttachStoneCountRefreshComponent_b__38_0(
        RecoverItemComponent_o *this,
        int32_t stoneCount,
        const MethodInfo *method)
{
  UILabel_o *currentNumLb; // x19
  Il2CppObject *v6; // x0
  System_String_o *v7; // x0
  __int64 v8; // x1
  int32_t v9; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_438EF0B & 1) == 0 )
  {
    sub_B775C4(&int_TypeInfo);
    sub_B775C4(&StringLiteral_24013/*"{0:N0}"*/);
    byte_438EF0B = 1;
  }
  currentNumLb = this->fields.currentNumLb;
  v9 = stoneCount;
  v6 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v9, method);
  v7 = System_String__Format((System_String_o *)StringLiteral_24013/*"{0:N0}"*/, v6, 0LL);
  if ( !currentNumLb )
    sub_B7769C(v7, v8);
  UILabel__set_text(currentNumLb, v7, 0LL);
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

  if ( (byte_438EF00 & 1) == 0 )
  {
    sub_B775C4(&RecoverItemComponent_CallbackFunc_TypeInfo);
    byte_438EF00 = 1;
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
    v9 = sub_B6BFDC(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_B77990(v8);
  RecoverItemComponent__remove_callbackFunc(v11, v12, v13);
}


void __fastcall RecoverItemComponent__closeNotificationDlg(RecoverItemComponent_o *this, const MethodInfo *method)
{
  CommonUI_o *Instance; // x0
  __int64 v3; // x1

  if ( (byte_438EF09 & 1) == 0 )
  {
    sub_B775C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_438EF09 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_B7769C(0LL, v3);
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
  const MethodInfo *v12; // x1

  if ( (byte_438EF01 & 1) == 0 )
  {
    sub_B775C4(&RecoverItemComponent_CallbackFunc_TypeInfo);
    byte_438EF01 = 1;
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
    v9 = sub_B6BFDC(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_B77990(v8);
  RecoverItemComponent__AttachStoneCountRefreshComponent(v11, v12);
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
  int32_t targetId; // w8
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  System_Int32_array **SelfUserGame; // x0
  RecoverItemComponent_o **p_userEntity; // x23
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7
  struct UserGameEntity_o *userEntity; // x8
  int32_t actMax; // w8
  int32_t *p_spendNum; // x20
  UILabel_o *currentInfoLb; // x24
  UILabel_o *spendInfoLb; // x24
  int32_t currentType; // w8
  RecoverItemComponent_o *v34; // x21
  RecoverItemComponent_o *v35; // x22
  __int64 v36; // x2
  int recvTarget; // w24
  UILabel_o *v38; // x21
  Il2CppObject *v39; // x0
  UILabel_o *v40; // x21
  const MethodInfo *v41; // x1
  System_String_o *v42; // x20
  __int64 v43; // x2
  Il2CppObject *v44; // x0
  System_String_o *v45; // x0
  UILabel_o *v46; // x20
  Il2CppObject *v47; // x21
  System_String_o *v48; // x22
  __int64 v49; // x2
  Il2CppObject *v50; // x23
  __int64 v51; // x2
  Il2CppObject *v52; // x0
  bool v53; // cc
  int v54; // w8
  const MethodInfo *v55; // x1
  ItemEntity_o *RecvItemData; // x0
  ItemEntity_o *v57; // x24
  __int64 v58; // x2
  int32_t num; // w27
  UILabel_o *v60; // x22
  UILabel_o *v61; // x22
  WarEntity_o *v62; // x0
  CommandSpellEntity_o *v63; // x22
  int32_t type; // w8
  struct UnityEngine_GameObject_o *cmdSpellBg; // x27
  float v66; // s1
  double v67; // d1
  System_String_o *v68; // x23
  __int64 v69; // x2
  Il2CppObject *v70; // x0
  System_String_o *v71; // x0
  UILabel_o *itemDetailLb; // x23
  Il2CppObject *v73; // x24
  System_String_o *v74; // x25
  __int64 v75; // x2
  Il2CppObject *v76; // x26
  __int64 v77; // x2
  Il2CppObject *v78; // x0
  int monitor; // w22
  int32_t v80; // w0
  int32_t v81; // w8
  BalanceConfig_c *v82; // x0
  int usrMaxAp; // s2
  float v84; // s2
  float v85; // s0
  double v86; // d1
  int32_t v87; // w0
  int32_t v88; // w0
  int32_t v89; // w8
  int32_t v90; // w9
  System_String_o *v91; // x23
  __int64 v92; // x2
  Il2CppObject *v93; // x0
  System_String_o *v94; // x0
  UILabel_o *v95; // x23
  Il2CppObject *v96; // x25
  System_String_o *v97; // x26
  __int64 v98; // x2
  Il2CppObject *v99; // x27
  __int64 v100; // x2
  Il2CppObject *v101; // x0
  int value; // w23
  int32_t v103; // w0
  System_String_o *v104; // x21
  __int64 v105; // x2
  Il2CppObject *v106; // x0
  System_String_o *v107; // x0
  UILabel_o *v108; // x21
  Il2CppObject *v109; // x23
  System_String_o *v110; // x24
  __int64 v111; // x2
  Il2CppObject *v112; // x0
  UILabel_o *v113; // x21
  Il2CppObject *v114; // x0
  UILabel_o *v115; // x21
  int v116; // w8
  System_String_o *v117; // x21
  __int64 v118; // x2
  Il2CppObject *v119; // x0
  System_String_o *v120; // x0
  UILabel_o *v121; // x21
  Il2CppObject *v122; // x22
  System_String_o *v123; // x23
  __int64 v124; // x2
  Il2CppObject *v125; // x0
  UILabel_o *currentNumLb; // x21
  UILabel_o *spendNumLb; // x21
  char v128; // w9
  __int64 v129; // x0
  int32_t v130; // [xsp+0h] [xbp-70h]
  int32_t v131; // [xsp+4h] [xbp-6Ch] BYREF
  int32_t recvApNum; // [xsp+8h] [xbp-68h] BYREF
  int32_t apRcvRate; // [xsp+Ch] [xbp-64h] BYREF
  int32_t spendNum; // [xsp+10h] [xbp-60h] BYREF
  int32_t CommandSpell; // [xsp+14h] [xbp-5Ch] BYREF
  UserItemEntity_o *entity; // [xsp+18h] [xbp-58h] BYREF

  v12 = this;
  if ( (byte_438EF02 & 1) == 0 )
  {
    sub_B775C4(&BalanceConfig_TypeInfo);
    sub_B775C4(&Method_DataManager_GetMasterData_CommandSpellMaster___);
    sub_B775C4(&Method_DataManager_GetMasterData_ItemMaster___);
    sub_B775C4(&Method_DataManager_GetMasterData_StoneShopMaster___);
    sub_B775C4(&Method_DataManager_GetMasterData_UserItemMaster___);
    sub_B775C4(&Method_DataMasterBase_StoneShopMaster__StoneShopEntity__int__GetEntity__);
    sub_B775C4(&Method_DataMasterBase_CommandSpellMaster__CommandSpellEntity__int__GetEntity__);
    sub_B775C4(&int_TypeInfo);
    sub_B775C4(&LocalizationManager_TypeInfo);
    sub_B775C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B775C4(&StringLiteral_3241/*"CMDSPELL_CURRENT_NUM"*/);
    sub_B775C4(&StringLiteral_1728/*"ADD_RECOVER_CMDSPELL_TXT"*/);
    sub_B775C4(&StringLiteral_3243/*"CMDSPELL_SPEND_NUM_TXT"*/);
    sub_B775C4(&StringLiteral_24013/*"{0:N0}"*/);
    sub_B775C4(&StringLiteral_762/*"-"*/);
    sub_B775C4(&StringLiteral_14965/*"UNIT_INFO"*/);
    sub_B775C4(&StringLiteral_12528/*"SPEND_NUM_TXT"*/);
    sub_B775C4(&StringLiteral_3579/*"CURRENT_NUM_TXT"*/);
    sub_B775C4(&StringLiteral_1729/*"ADD_RECOVER_NUM_TXT"*/);
    sub_B775C4(&StringLiteral_1807/*"AP_RECOVER_NUM_TXT"*/);
    this = (RecoverItemComponent_o *)sub_B775C4(&StringLiteral_3242/*"CMDSPELL_CURRENT_NUM_TXT"*/);
    byte_438EF02 = 1;
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
  sub_B77560(
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
  sub_B77560(
    (BattleServantConfConponent_o *)&v12->fields.callbackFunc,
    (System_Int32_array **)callback,
    v14,
    v15,
    v16,
    v17,
    v18,
    v19);
  this = (RecoverItemComponent_o *)v12->fields.maskImg;
  if ( !this )
    goto LABEL_128;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
  SelfUserGame = (System_Int32_array **)UserGameMaster__getSelfUserGame(0LL);
  v12->fields.userEntity = (struct UserGameEntity_o *)SelfUserGame;
  p_userEntity = (RecoverItemComponent_o **)&v12->fields.userEntity;
  sub_B77560((BattleServantConfConponent_o *)&v12->fields.userEntity, SelfUserGame, v22, v23, v24, v25, v26, v27);
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
  UILabel__set_text((UILabel_o *)this, (System_String_o *)StringLiteral_762/*"-"*/, 0LL);
  this = (RecoverItemComponent_o *)v12->fields.currentNumLb;
  if ( !this )
    goto LABEL_128;
  UILabel__set_text((UILabel_o *)this, (System_String_o *)StringLiteral_762/*"-"*/, 0LL);
  this = (RecoverItemComponent_o *)v12->fields.spendNumLb;
  if ( !this )
    goto LABEL_128;
  UILabel__set_text((UILabel_o *)this, (System_String_o *)StringLiteral_762/*"-"*/, 0LL);
  this = (RecoverItemComponent_o *)v12->fields.itemDetailLb;
  if ( !this )
    goto LABEL_128;
  UILabel__set_text((UILabel_o *)this, (System_String_o *)StringLiteral_762/*"-"*/, 0LL);
  currentInfoLb = v12->fields.currentInfoLb;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  this = (RecoverItemComponent_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3579/*"CURRENT_NUM_TXT"*/, 0LL);
  if ( !currentInfoLb )
    goto LABEL_128;
  UILabel__set_text(currentInfoLb, (System_String_o *)this, 0LL);
  spendInfoLb = v12->fields.spendInfoLb;
  this = (RecoverItemComponent_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12528/*"SPEND_NUM_TXT"*/, 0LL);
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
    v60 = v12->fields.currentInfoLb;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    this = (RecoverItemComponent_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3242/*"CMDSPELL_CURRENT_NUM_TXT"*/, 0LL);
    if ( !v60 )
      goto LABEL_128;
    UILabel__set_text(v60, (System_String_o *)this, 0LL);
    v61 = v12->fields.spendInfoLb;
    this = (RecoverItemComponent_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3243/*"CMDSPELL_SPEND_NUM_TXT"*/, 0LL);
    if ( !v61 )
      goto LABEL_128;
    UILabel__set_text(v61, (System_String_o *)this, 0LL);
    this = (RecoverItemComponent_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !this )
      goto LABEL_128;
    this = (RecoverItemComponent_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                       (DataManager_o *)this,
                                       (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_CommandSpellMaster___);
    if ( !this )
      goto LABEL_128;
    v62 = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
            (DataMasterBase_WarMaster__WarEntity__int__o *)this,
            v12->fields.targetId,
            (const MethodInfo_21FB894 *)Method_DataMasterBase_CommandSpellMaster__CommandSpellEntity__int__GetEntity__);
    if ( !v62 )
      goto LABEL_127;
    v63 = (CommandSpellEntity_o *)v62;
    this = (RecoverItemComponent_o *)v12->fields.cmdSpellIcon;
    if ( !this )
      goto LABEL_128;
    CommandSpellIconComponent__SetData((CommandSpellIconComponent_o *)this, v12->fields.userEntity, 0LL);
    this = (RecoverItemComponent_o *)v12->fields.itemNameLb;
    if ( !this )
      goto LABEL_128;
    UILabel__set_text((UILabel_o *)this, v63->fields.name, 0LL);
    this = *p_userEntity;
    if ( !*p_userEntity )
      goto LABEL_128;
    CommandSpell = UserGameEntity__getCommandSpell((UserGameEntity_o *)this, 0LL);
    *p_spendNum = v63->fields.consume;
    this = (RecoverItemComponent_o *)CommandSpellEntity__getValues(v63, 0LL);
    if ( !this )
      goto LABEL_128;
    if ( LODWORD(this->fields.itemIconInfo) )
    {
      type = v63->fields.type;
      cmdSpellBg = this->fields.cmdSpellBg;
      if ( type == 3 )
      {
        if ( !cmdSpellBg )
          goto LABEL_128;
        if ( !LODWORD(cmdSpellBg[1].klass) )
          goto LABEL_129;
        v66 = (float)((float)SLODWORD(cmdSpellBg[1].monitor) / 1000.0) * 100.0;
        v67 = v66 == INFINITY ? -v66 : v66;
        v12->fields.apRcvRate = (int)v67;
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
        v68 = LocalizationManager__Get((System_String_o *)StringLiteral_3241/*"CMDSPELL_CURRENT_NUM"*/, 0LL);
        spendNum = v12->fields.spendNum;
        v70 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &spendNum, v69);
        v71 = System_String__Format(v68, v70, 0LL);
        itemDetailLb = v12->fields.itemDetailLb;
        v73 = (Il2CppObject *)v71;
        v74 = LocalizationManager__Get((System_String_o *)StringLiteral_1807/*"AP_RECOVER_NUM_TXT"*/, 0LL);
        apRcvRate = v12->fields.apRcvRate;
        v76 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &apRcvRate, v75);
        recvApNum = v12->fields.recvApNum;
        v78 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &recvApNum, v77);
        this = (RecoverItemComponent_o *)System_String__Format_44903000(v74, v73, v76, v78, 0LL);
        if ( !itemDetailLb )
          goto LABEL_128;
        UILabel__set_text(itemDetailLb, (System_String_o *)this, 0LL);
        type = v63->fields.type;
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
            v53 = CommandSpell < v12->fields.spendNum;
            v54 = v12->fields.recvApNum + v12->fields.usrCurrentAp;
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
          v80 = *p_spendNum;
        }
        else
        {
          v80 = UnityEngine_Mathf__CeilToInt(
                  fmaxf((float)(needAp - v12->fields.usrCurrentAp) / (float)monitor, 1.0),
                  0LL);
          v12->fields.spendNum = v80;
        }
        v12->fields.recvApNum = v80 * monitor;
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        v117 = LocalizationManager__Get((System_String_o *)StringLiteral_3241/*"CMDSPELL_CURRENT_NUM"*/, 0LL);
        spendNum = v12->fields.spendNum;
        v119 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &spendNum, v118);
        v120 = System_String__Format(v117, v119, 0LL);
        v121 = v12->fields.itemDetailLb;
        v122 = (Il2CppObject *)v120;
        v123 = LocalizationManager__Get((System_String_o *)StringLiteral_1728/*"ADD_RECOVER_CMDSPELL_TXT"*/, 0LL);
        apRcvRate = v12->fields.recvApNum;
        v125 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &apRcvRate, v124);
        this = (RecoverItemComponent_o *)System_String__Format_44897472(v123, v122, v125, 0LL);
        if ( !v121 )
          goto LABEL_128;
        UILabel__set_text(v121, (System_String_o *)this, 0LL);
        v12->fields.isAddAp = 1;
        goto LABEL_120;
      }
    }
LABEL_129:
    v129 = sub_B776C8(this);
    sub_B77668(v129, 0LL);
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
          RecvItemData = RecoverEntity__getRecvItemData(data, v55);
          if ( !RecvItemData )
            goto LABEL_127;
          v57 = RecvItemData;
          this = (RecoverItemComponent_o *)v12->fields.itemIconInfo;
          if ( this )
          {
            ItemIconComponent__SetItemImage_28175904(
              (ItemIconComponent_o *)this,
              v57->fields.imageId,
              v57->fields.bgImageId,
              v57->fields.type,
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
                  UILabel__set_text((UILabel_o *)this, v57->fields.name, 0LL);
                  *p_spendNum = 1;
                  this = (RecoverItemComponent_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
                  if ( this )
                  {
                    this = (RecoverItemComponent_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                       (DataManager_o *)this,
                                                       (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_UserItemMaster___);
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
                        v81 = v57->fields.type;
                        if ( v81 == 3 )
                        {
                          v82 = BalanceConfig_TypeInfo;
                          if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                            && !BalanceConfig_TypeInfo->_2.cctor_finished )
                          {
                            j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
                            v82 = BalanceConfig_TypeInfo;
                          }
                          usrMaxAp = v12->fields.usrMaxAp;
                          v12->fields.spendNum = v82->static_fields->SpendApRecvItemNum;
                          v84 = (float)usrMaxAp;
                          v85 = (float)v57->fields.value / 1000.0;
                          v86 = -(float)(v85 * 100.0);
                          if ( (float)(v85 * 100.0) != INFINITY )
                            v86 = (float)(v85 * 100.0);
                          v12->fields.apRcvRate = (int)v86;
                          v87 = UnityEngine_Mathf__CeilToInt(v85 * v84, 0LL);
                          v12->fields.recvApNum = v87;
                          if ( needAp >= 1 )
                          {
                            v88 = UnityEngine_Mathf__CeilToInt(
                                    fmaxf((float)(needAp - v12->fields.usrCurrentAp) / (float)v87, 1.0),
                                    0LL);
                            v89 = v12->fields.apRcvRate;
                            v90 = v12->fields.recvApNum;
                            v12->fields.spendNum = v88;
                            v12->fields.apRcvRate = v89 * v88;
                            v12->fields.recvApNum = v90 * v88;
                          }
                          v130 = num;
                          if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                            && !LocalizationManager_TypeInfo->_2.cctor_finished )
                          {
                            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                          }
                          v91 = LocalizationManager__Get((System_String_o *)StringLiteral_14965/*"UNIT_INFO"*/, 0LL);
                          spendNum = v12->fields.spendNum;
                          v93 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &spendNum, v92);
                          v94 = System_String__Format(v91, v93, 0LL);
                          v95 = v12->fields.itemDetailLb;
                          v96 = (Il2CppObject *)v94;
                          v97 = LocalizationManager__Get((System_String_o *)StringLiteral_1807/*"AP_RECOVER_NUM_TXT"*/, 0LL);
                          apRcvRate = v12->fields.apRcvRate;
                          v99 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &apRcvRate, v98);
                          recvApNum = v12->fields.recvApNum;
                          v101 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &recvApNum, v100);
                          this = (RecoverItemComponent_o *)System_String__Format_44903000(v97, v96, v99, v101, 0LL);
                          if ( !v95 )
                            goto LABEL_128;
                          UILabel__set_text(v95, (System_String_o *)this, 0LL);
                          v81 = v57->fields.type;
                          num = v130;
                        }
                        if ( v81 == 4 )
                        {
                          value = v57->fields.value;
                          if ( needAp < 1 )
                          {
                            *p_spendNum = 1;
                          }
                          else
                          {
                            v103 = UnityEngine_Mathf__CeilToInt(
                                     fmaxf((float)(needAp - v12->fields.usrCurrentAp) / (float)value, 1.0),
                                     0LL);
                            v12->fields.spendNum = v103;
                            value *= v103;
                          }
                          v12->fields.recvApNum = value;
                          if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                            && !LocalizationManager_TypeInfo->_2.cctor_finished )
                          {
                            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                          }
                          v104 = LocalizationManager__Get((System_String_o *)StringLiteral_14965/*"UNIT_INFO"*/, 0LL);
                          spendNum = v12->fields.spendNum;
                          v106 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &spendNum, v105);
                          v107 = System_String__Format(v104, v106, 0LL);
                          v108 = v12->fields.itemDetailLb;
                          v109 = (Il2CppObject *)v107;
                          v110 = LocalizationManager__Get((System_String_o *)StringLiteral_1729/*"ADD_RECOVER_NUM_TXT"*/, 0LL);
                          apRcvRate = v12->fields.recvApNum;
                          v112 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &apRcvRate, v111);
                          this = (RecoverItemComponent_o *)System_String__Format_44897472(v110, v109, v112, 0LL);
                          if ( !v108 )
                            goto LABEL_128;
                          UILabel__set_text(v108, (System_String_o *)this, 0LL);
                          v12->fields.isAddAp = 1;
                        }
                        v113 = v12->fields.currentNumLb;
                        spendNum = num;
                        v114 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &spendNum, v58);
                        this = (RecoverItemComponent_o *)System_String__Format(
                                                           (System_String_o *)StringLiteral_24013/*"{0:N0}"*/,
                                                           v114,
                                                           0LL);
                        if ( v113 )
                        {
                          UILabel__set_text(v113, (System_String_o *)this, 0LL);
                          v115 = v12->fields.spendNumLb;
                          this = (RecoverItemComponent_o *)System_Int32__ToString((int)v12 + 120, 0LL);
                          if ( v115 )
                          {
                            UILabel__set_text(v115, (System_String_o *)this, 0LL);
                            v116 = v12->fields.recvApNum + v12->fields.usrCurrentAp;
                            v12->fields.isEnableSelect = num >= v12->fields.spendNum;
                            v12->fields.recvSum = v116;
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
    sub_B7769C(this, data);
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
  this = (RecoverItemComponent_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_128;
  this = (RecoverItemComponent_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                     (DataManager_o *)this,
                                     (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_ItemMaster___);
  if ( !this )
    goto LABEL_128;
  this = (RecoverItemComponent_o *)ItemMaster__GetEntityByType((ItemMaster_o *)this, 2, 0LL);
  if ( !this )
    goto LABEL_128;
  v34 = this;
  this = (RecoverItemComponent_o *)v12->fields.itemIconInfo;
  if ( !this )
    goto LABEL_128;
  ItemIconComponent__SetItemImage_28175904(
    (ItemIconComponent_o *)this,
    (int32_t)v34->fields.cmdSpellIcon,
    HIDWORD(v34->fields.cmdSpellIcon),
    (int32_t)v34->fields.itemNameLb,
    0,
    0LL);
  this = (RecoverItemComponent_o *)v12->fields.itemIconInfo;
  if ( !this )
    goto LABEL_128;
  this = (RecoverItemComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !this )
    goto LABEL_128;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
  this = (RecoverItemComponent_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_128;
  this = (RecoverItemComponent_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                     (DataManager_o *)this,
                                     (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_StoneShopMaster___);
  if ( !this )
    goto LABEL_128;
  this = (RecoverItemComponent_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                     (DataMasterBase_WarMaster__WarEntity__int__o *)this,
                                     v12->fields.targetId,
                                     (const MethodInfo_21FB894 *)Method_DataMasterBase_StoneShopMaster__StoneShopEntity__int__GetEntity__);
  if ( !v12->fields.itemNameLb )
    goto LABEL_128;
  v35 = this;
  UILabel__set_text(v12->fields.itemNameLb, (System_String_o *)v34->fields.itemIconInfo, 0LL);
  if ( !*p_userEntity )
    goto LABEL_128;
  recvTarget = (*p_userEntity)->fields.recvTarget;
  if ( v35 )
    *p_spendNum = HIDWORD(v35->fields.cmdSpellIcon);
  v38 = v12->fields.currentNumLb;
  spendNum = recvTarget;
  v39 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &spendNum, v36);
  this = (RecoverItemComponent_o *)System_String__Format((System_String_o *)StringLiteral_24013/*"{0:N0}"*/, v39, 0LL);
  if ( !v38 )
    goto LABEL_128;
  UILabel__set_text(v38, (System_String_o *)this, 0LL);
  v40 = v12->fields.spendNumLb;
  this = (RecoverItemComponent_o *)System_Int32__ToString((int)v12 + 120, 0LL);
  if ( !v40 )
    goto LABEL_128;
  UILabel__set_text(v40, (System_String_o *)this, 0LL);
  RecoverItemComponent__AttachStoneCountRefreshComponent(v12, v41);
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v42 = LocalizationManager__Get((System_String_o *)StringLiteral_14965/*"UNIT_INFO"*/, 0LL);
  apRcvRate = v12->fields.spendNum;
  v44 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &apRcvRate, v43);
  v45 = System_String__Format(v42, v44, 0LL);
  v46 = v12->fields.itemDetailLb;
  v47 = (Il2CppObject *)v45;
  v48 = LocalizationManager__Get((System_String_o *)StringLiteral_1807/*"AP_RECOVER_NUM_TXT"*/, 0LL);
  recvApNum = v12->fields.apRcvRate;
  v50 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &recvApNum, v49);
  v131 = v12->fields.recvApNum;
  v52 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v131, v51);
  this = (RecoverItemComponent_o *)System_String__Format_44903000(v48, v47, v50, v52, 0LL);
  if ( !v46 )
    goto LABEL_128;
  UILabel__set_text(v46, (System_String_o *)this, 0LL);
  v53 = recvTarget < v12->fields.spendNum;
  v54 = v12->fields.usrMaxAp + v12->fields.usrCurrentAp;
LABEL_123:
  v128 = !v53;
  v12->fields.isEnableSelect = v128;
  v12->fields.recvSum = v54;
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
      sub_B7769C(0LL, method);
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
  int32_t targetId; // w8
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  System_Int32_array **SelfUserGame; // x0
  RecoverItemComponent_o **p_userEntity; // x23
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7
  BalanceConfig_c *v28; // x0
  int32_t UerGameRpMax; // w8
  int32_t *p_spendNum; // x20
  UILabel_o *currentInfoLb; // x24
  UILabel_o *spendInfoLb; // x24
  int32_t currentType; // w8
  RecoverItemComponent_o *v34; // x21
  RecoverItemComponent_o *v35; // x22
  __int64 v36; // x2
  int recvTarget; // w23
  UILabel_o *v38; // x21
  Il2CppObject *v39; // x0
  UILabel_o *v40; // x21
  const MethodInfo *v41; // x1
  System_String_o *v42; // x20
  __int64 v43; // x2
  Il2CppObject *v44; // x0
  System_String_o *v45; // x0
  UILabel_o *v46; // x20
  Il2CppObject *v47; // x21
  System_String_o *v48; // x22
  __int64 v49; // x2
  Il2CppObject *v50; // x0
  bool v51; // cc
  int v52; // w8
  const MethodInfo *v53; // x1
  ItemEntity_o *RecvItemData; // x0
  ItemEntity_o *v55; // x24
  int32_t num; // w26
  UILabel_o *v57; // x22
  UILabel_o *v58; // x22
  WarEntity_o *v59; // x0
  CommandSpellEntity_o *v60; // x22
  struct UnityEngine_GameObject_o *cmdSpellBg; // x8
  int monitor; // w22
  int32_t v63; // w0
  int value; // w23
  int32_t v65; // w0
  System_String_o *v66; // x21
  __int64 v67; // x2
  Il2CppObject *v68; // x0
  System_String_o *v69; // x0
  UILabel_o *v70; // x21
  Il2CppObject *v71; // x23
  System_String_o *v72; // x24
  __int64 v73; // x2
  Il2CppObject *v74; // x0
  UILabel_o *v75; // x21
  __int64 v76; // x2
  Il2CppObject *v77; // x0
  UILabel_o *v78; // x21
  int v79; // w8
  System_String_o *v80; // x21
  __int64 v81; // x2
  Il2CppObject *v82; // x0
  System_String_o *v83; // x0
  UILabel_o *itemDetailLb; // x21
  Il2CppObject *v85; // x22
  System_String_o *v86; // x23
  __int64 v87; // x2
  Il2CppObject *v88; // x0
  UILabel_o *currentNumLb; // x21
  UILabel_o *spendNumLb; // x21
  char v91; // w9
  __int64 v92; // x0
  int32_t v93; // [xsp+8h] [xbp-58h] BYREF
  int32_t recvRpNum; // [xsp+Ch] [xbp-54h] BYREF
  int32_t spendNum; // [xsp+10h] [xbp-50h] BYREF
  int32_t CommandSpell; // [xsp+14h] [xbp-4Ch] BYREF
  UserItemEntity_o *entity; // [xsp+18h] [xbp-48h] BYREF

  v12 = this;
  if ( (byte_438EF03 & 1) == 0 )
  {
    sub_B775C4(&BalanceConfig_TypeInfo);
    sub_B775C4(&Method_DataManager_GetMasterData_CommandSpellMaster___);
    sub_B775C4(&Method_DataManager_GetMasterData_ItemMaster___);
    sub_B775C4(&Method_DataManager_GetMasterData_StoneShopMaster___);
    sub_B775C4(&Method_DataManager_GetMasterData_UserItemMaster___);
    sub_B775C4(&Method_DataMasterBase_StoneShopMaster__StoneShopEntity__int__GetEntity__);
    sub_B775C4(&Method_DataMasterBase_CommandSpellMaster__CommandSpellEntity__int__GetEntity__);
    sub_B775C4(&int_TypeInfo);
    sub_B775C4(&LocalizationManager_TypeInfo);
    sub_B775C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B775C4(&StringLiteral_3241/*"CMDSPELL_CURRENT_NUM"*/);
    sub_B775C4(&StringLiteral_3243/*"CMDSPELL_SPEND_NUM_TXT"*/);
    sub_B775C4(&StringLiteral_24013/*"{0:N0}"*/);
    sub_B775C4(&StringLiteral_762/*"-"*/);
    sub_B775C4(&StringLiteral_14965/*"UNIT_INFO"*/);
    sub_B775C4(&StringLiteral_12528/*"SPEND_NUM_TXT"*/);
    sub_B775C4(&StringLiteral_3579/*"CURRENT_NUM_TXT"*/);
    sub_B775C4(&StringLiteral_11475/*"RP_RECOVER_CMDSPELL_TXT"*/);
    sub_B775C4(&StringLiteral_11477/*"RP_RECOVER_NUM_TXT"*/);
    this = (RecoverItemComponent_o *)sub_B775C4(&StringLiteral_3242/*"CMDSPELL_CURRENT_NUM_TXT"*/);
    byte_438EF03 = 1;
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
  sub_B77560(
    (BattleServantConfConponent_o *)&v12->fields.dialog,
    (System_Int32_array **)dlg,
    *(System_String_array ***)&needRp,
    (System_String_array **)dlg,
    (System_Boolean_array **)callback,
    (System_Int32_array **)method,
    v6,
    v7);
  v12->fields.callbackFunc = callback;
  sub_B77560(
    (BattleServantConfConponent_o *)&v12->fields.callbackFunc,
    (System_Int32_array **)callback,
    v14,
    v15,
    v16,
    v17,
    v18,
    v19);
  this = (RecoverItemComponent_o *)v12->fields.maskImg;
  if ( !this )
    goto LABEL_100;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
  SelfUserGame = (System_Int32_array **)UserGameMaster__getSelfUserGame(0LL);
  v12->fields.userEntity = (struct UserGameEntity_o *)SelfUserGame;
  p_userEntity = (RecoverItemComponent_o **)&v12->fields.userEntity;
  sub_B77560((BattleServantConfConponent_o *)&v12->fields.userEntity, SelfUserGame, v22, v23, v24, v25, v26, v27);
  this = (RecoverItemComponent_o *)v12->fields.userEntity;
  if ( !this )
    goto LABEL_100;
  v12->fields.usrCurrentRp = UserGameEntity__getRp((UserGameEntity_o *)this, 0LL);
  v28 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v28 = BalanceConfig_TypeInfo;
  }
  UerGameRpMax = v28->static_fields->UerGameRpMax;
  v12->fields.spendNum = 1;
  p_spendNum = &v12->fields.spendNum;
  this = (RecoverItemComponent_o *)v12->fields.itemNameLb;
  v12->fields.isAp = 0;
  v12->fields.usrMaxRp = UerGameRpMax;
  v12->fields.recvRpNum = UerGameRpMax;
  if ( !this )
    goto LABEL_100;
  UILabel__set_text((UILabel_o *)this, (System_String_o *)StringLiteral_762/*"-"*/, 0LL);
  this = (RecoverItemComponent_o *)v12->fields.currentNumLb;
  if ( !this )
    goto LABEL_100;
  UILabel__set_text((UILabel_o *)this, (System_String_o *)StringLiteral_762/*"-"*/, 0LL);
  this = (RecoverItemComponent_o *)v12->fields.spendNumLb;
  if ( !this )
    goto LABEL_100;
  UILabel__set_text((UILabel_o *)this, (System_String_o *)StringLiteral_762/*"-"*/, 0LL);
  this = (RecoverItemComponent_o *)v12->fields.itemDetailLb;
  if ( !this )
    goto LABEL_100;
  UILabel__set_text((UILabel_o *)this, (System_String_o *)StringLiteral_762/*"-"*/, 0LL);
  currentInfoLb = v12->fields.currentInfoLb;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  this = (RecoverItemComponent_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3579/*"CURRENT_NUM_TXT"*/, 0LL);
  if ( !currentInfoLb )
    goto LABEL_100;
  UILabel__set_text(currentInfoLb, (System_String_o *)this, 0LL);
  spendInfoLb = v12->fields.spendInfoLb;
  this = (RecoverItemComponent_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12528/*"SPEND_NUM_TXT"*/, 0LL);
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
          v57 = v12->fields.currentInfoLb;
          if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          }
          this = (RecoverItemComponent_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3242/*"CMDSPELL_CURRENT_NUM_TXT"*/, 0LL);
          if ( v57 )
          {
            UILabel__set_text(v57, (System_String_o *)this, 0LL);
            v58 = v12->fields.spendInfoLb;
            this = (RecoverItemComponent_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3243/*"CMDSPELL_SPEND_NUM_TXT"*/, 0LL);
            if ( v58 )
            {
              UILabel__set_text(v58, (System_String_o *)this, 0LL);
              this = (RecoverItemComponent_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
              if ( this )
              {
                this = (RecoverItemComponent_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                   (DataManager_o *)this,
                                                   (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_CommandSpellMaster___);
                if ( this )
                {
                  v59 = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                          (DataMasterBase_WarMaster__WarEntity__int__o *)this,
                          v12->fields.targetId,
                          (const MethodInfo_21FB894 *)Method_DataMasterBase_CommandSpellMaster__CommandSpellEntity__int__GetEntity__);
                  if ( !v59 )
                    goto LABEL_99;
                  v60 = (CommandSpellEntity_o *)v59;
                  this = (RecoverItemComponent_o *)v12->fields.cmdSpellIcon;
                  if ( this )
                  {
                    CommandSpellIconComponent__SetData((CommandSpellIconComponent_o *)this, v12->fields.userEntity, 0LL);
                    this = (RecoverItemComponent_o *)v12->fields.itemNameLb;
                    if ( this )
                    {
                      UILabel__set_text((UILabel_o *)this, v60->fields.name, 0LL);
                      this = *p_userEntity;
                      if ( *p_userEntity )
                      {
                        CommandSpell = UserGameEntity__getCommandSpell((UserGameEntity_o *)this, 0LL);
                        *p_spendNum = v60->fields.consume;
                        this = (RecoverItemComponent_o *)CommandSpellEntity__getValues(v60, 0LL);
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
                            v92 = sub_B776C8(this);
                            sub_B77668(v92, 0LL);
                          }
                          monitor = (int)cmdSpellBg[1].monitor;
                          if ( needRp < 1 )
                          {
                            v63 = *p_spendNum;
                          }
                          else
                          {
                            v63 = UnityEngine_Mathf__CeilToInt(
                                    fmaxf((float)(needRp - v12->fields.usrCurrentRp) / (float)monitor, 1.0),
                                    0LL);
                            v12->fields.spendNum = v63;
                          }
                          v12->fields.recvRpNum = v63 * monitor;
                          if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                            && !LocalizationManager_TypeInfo->_2.cctor_finished )
                          {
                            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                          }
                          v80 = LocalizationManager__Get((System_String_o *)StringLiteral_3241/*"CMDSPELL_CURRENT_NUM"*/, 0LL);
                          spendNum = v12->fields.spendNum;
                          v82 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &spendNum, v81);
                          v83 = System_String__Format(v80, v82, 0LL);
                          itemDetailLb = v12->fields.itemDetailLb;
                          v85 = (Il2CppObject *)v83;
                          v86 = LocalizationManager__Get((System_String_o *)StringLiteral_11475/*"RP_RECOVER_CMDSPELL_TXT"*/, 0LL);
                          recvRpNum = v12->fields.recvRpNum;
                          v88 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &recvRpNum, v87);
                          this = (RecoverItemComponent_o *)System_String__Format_44897472(v86, v85, v88, 0LL);
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
                                v51 = CommandSpell < v12->fields.spendNum;
                                v52 = v12->fields.recvRpNum + v12->fields.usrCurrentRp;
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
          RecvItemData = RecoverEntity__getRecvItemData(data, v53);
          if ( !RecvItemData )
            goto LABEL_99;
          v55 = RecvItemData;
          this = (RecoverItemComponent_o *)v12->fields.itemIconInfo;
          if ( this )
          {
            ItemIconComponent__SetItemImage_28175904(
              (ItemIconComponent_o *)this,
              v55->fields.imageId,
              v55->fields.bgImageId,
              v55->fields.type,
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
                  UILabel__set_text((UILabel_o *)this, v55->fields.name, 0LL);
                  this = (RecoverItemComponent_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
                  if ( this )
                  {
                    this = (RecoverItemComponent_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                       (DataManager_o *)this,
                                                       (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_UserItemMaster___);
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
                        value = v55->fields.value;
                        if ( needRp < 1 )
                        {
                          *p_spendNum = 1;
                        }
                        else
                        {
                          v65 = UnityEngine_Mathf__CeilToInt(
                                  fmaxf((float)(needRp - v12->fields.usrCurrentRp) / (float)value, 1.0),
                                  0LL);
                          v12->fields.spendNum = v65;
                          value *= v65;
                        }
                        v12->fields.recvRpNum = value;
                        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                          && !LocalizationManager_TypeInfo->_2.cctor_finished )
                        {
                          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                        }
                        v66 = LocalizationManager__Get((System_String_o *)StringLiteral_14965/*"UNIT_INFO"*/, 0LL);
                        spendNum = v12->fields.spendNum;
                        v68 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &spendNum, v67);
                        v69 = System_String__Format(v66, v68, 0LL);
                        v70 = v12->fields.itemDetailLb;
                        v71 = (Il2CppObject *)v69;
                        v72 = LocalizationManager__Get((System_String_o *)StringLiteral_11477/*"RP_RECOVER_NUM_TXT"*/, 0LL);
                        recvRpNum = v12->fields.recvRpNum;
                        v74 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &recvRpNum, v73);
                        this = (RecoverItemComponent_o *)System_String__Format_44897472(v72, v71, v74, 0LL);
                        if ( v70 )
                        {
                          UILabel__set_text(v70, (System_String_o *)this, 0LL);
                          v75 = v12->fields.currentNumLb;
                          v93 = num;
                          v77 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v93, v76);
                          this = (RecoverItemComponent_o *)System_String__Format(
                                                             (System_String_o *)StringLiteral_24013/*"{0:N0}"*/,
                                                             v77,
                                                             0LL);
                          if ( v75 )
                          {
                            UILabel__set_text(v75, (System_String_o *)this, 0LL);
                            v78 = v12->fields.spendNumLb;
                            this = (RecoverItemComponent_o *)System_Int32__ToString((int)v12 + 120, 0LL);
                            if ( v78 )
                            {
                              UILabel__set_text(v78, (System_String_o *)this, 0LL);
                              v79 = v12->fields.recvRpNum + v12->fields.usrCurrentRp;
                              v12->fields.isEnableSelect = num >= v12->fields.spendNum;
                              v12->fields.recvSum = v79;
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
  this = (RecoverItemComponent_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_100;
  this = (RecoverItemComponent_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                     (DataManager_o *)this,
                                     (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_ItemMaster___);
  if ( !this )
    goto LABEL_100;
  this = (RecoverItemComponent_o *)ItemMaster__GetEntityByType((ItemMaster_o *)this, 2, 0LL);
  if ( !this )
    goto LABEL_100;
  v34 = this;
  this = (RecoverItemComponent_o *)v12->fields.itemIconInfo;
  if ( !this )
    goto LABEL_100;
  ItemIconComponent__SetItemImage_28175904(
    (ItemIconComponent_o *)this,
    (int32_t)v34->fields.cmdSpellIcon,
    HIDWORD(v34->fields.cmdSpellIcon),
    (int32_t)v34->fields.itemNameLb,
    0,
    0LL);
  this = (RecoverItemComponent_o *)v12->fields.itemIconInfo;
  if ( !this )
    goto LABEL_100;
  this = (RecoverItemComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !this )
    goto LABEL_100;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
  this = (RecoverItemComponent_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_100;
  this = (RecoverItemComponent_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                     (DataManager_o *)this,
                                     (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_StoneShopMaster___);
  if ( !this )
    goto LABEL_100;
  this = (RecoverItemComponent_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                     (DataMasterBase_WarMaster__WarEntity__int__o *)this,
                                     v12->fields.targetId,
                                     (const MethodInfo_21FB894 *)Method_DataMasterBase_StoneShopMaster__StoneShopEntity__int__GetEntity__);
  if ( !v12->fields.itemNameLb )
    goto LABEL_100;
  v35 = this;
  UILabel__set_text(v12->fields.itemNameLb, (System_String_o *)v34->fields.itemIconInfo, 0LL);
  if ( !*p_userEntity )
    goto LABEL_100;
  recvTarget = (*p_userEntity)->fields.recvTarget;
  if ( v35 )
    *p_spendNum = HIDWORD(v35->fields.cmdSpellIcon);
  v38 = v12->fields.currentNumLb;
  spendNum = recvTarget;
  v39 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &spendNum, v36);
  this = (RecoverItemComponent_o *)System_String__Format((System_String_o *)StringLiteral_24013/*"{0:N0}"*/, v39, 0LL);
  if ( !v38 )
    goto LABEL_100;
  UILabel__set_text(v38, (System_String_o *)this, 0LL);
  v40 = v12->fields.spendNumLb;
  this = (RecoverItemComponent_o *)System_Int32__ToString((int)v12 + 120, 0LL);
  if ( !v40 )
    goto LABEL_100;
  UILabel__set_text(v40, (System_String_o *)this, 0LL);
  RecoverItemComponent__AttachStoneCountRefreshComponent(v12, v41);
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v42 = LocalizationManager__Get((System_String_o *)StringLiteral_14965/*"UNIT_INFO"*/, 0LL);
  recvRpNum = v12->fields.spendNum;
  v44 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &recvRpNum, v43);
  v45 = System_String__Format(v42, v44, 0LL);
  v46 = v12->fields.itemDetailLb;
  v47 = (Il2CppObject *)v45;
  v48 = LocalizationManager__Get((System_String_o *)StringLiteral_11477/*"RP_RECOVER_NUM_TXT"*/, 0LL);
  v93 = v12->fields.recvRpNum;
  v50 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v93, v49);
  this = (RecoverItemComponent_o *)System_String__Format_44897472(v48, v47, v50, 0LL);
  if ( !v46 )
LABEL_100:
    sub_B7769C(this, data);
  UILabel__set_text(v46, (System_String_o *)this, 0LL);
  v51 = recvTarget < v12->fields.spendNum;
  v52 = v12->fields.recvRpNum + v12->fields.usrCurrentRp;
LABEL_95:
  v91 = !v51;
  v12->fields.isEnableSelect = v91;
  v12->fields.recvSum = v52;
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
  DataManager_o *Instance; // x0
  __int64 v10; // x1
  System_Collections_Generic_List_string__c *klass; // x8
  RecoverItemComponent_CallbackFunc_o *callbackFunc; // x20
  CommonUI_o *v13; // x19
  System_String_o *v14; // x20
  RecoverItemComponent___c_c *v15; // x8
  struct RecoverItemComponent___c_StaticFields *static_fields; // x9
  System_Action_o *_9__43_0; // x22
  System_String_o *v18; // x21
  Il2CppObject *v19; // x23
  struct RecoverItemComponent___c_StaticFields *v20; // x0
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7

  if ( (byte_438EF08 & 1) == 0 )
  {
    sub_B775C4(&System_Action_TypeInfo);
    sub_B775C4(&Method_DataManager_GetMasterData_EventMaster___);
    sub_B775C4(&LocalizationManager_TypeInfo);
    sub_B775C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B775C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_B775C4(&TerminalSceneComponent_TypeInfo);
    sub_B775C4(&Method_RecoverItemComponent___c__setRequestInfo_b__43_0__);
    sub_B775C4(&RecoverItemComponent___c_TypeInfo);
    sub_B775C4(&StringLiteral_11478/*"RP_UNRECOVERABLE_MESSAGE"*/);
    sub_B775C4(&StringLiteral_1/*""*/);
    byte_438EF08 = 1;
  }
  if ( this->fields.recvTarget != 2 )
    goto LABEL_16;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_32;
  DataManager__GetMasterData_WarQuestSelectionMaster_(
    Instance,
    (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_EventMaster___);
  if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  }
  if ( !byte_4387463 )
  {
    sub_B775C4(&TerminalSceneComponent_TypeInfo);
    byte_4387463 = 1;
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
    sub_B7769C(Instance, v10);
  if ( !ScrPlayerStatus__IsBPActive((ScrPlayerStatus_o *)Instance, 0LL) )
  {
    v13 = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    Instance = (DataManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11478/*"RP_UNRECOVERABLE_MESSAGE"*/, 0LL);
    v14 = (System_String_o *)Instance;
    v15 = RecoverItemComponent___c_TypeInfo;
    if ( (BYTE3(RecoverItemComponent___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !RecoverItemComponent___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(RecoverItemComponent___c_TypeInfo);
      v15 = RecoverItemComponent___c_TypeInfo;
    }
    static_fields = v15->static_fields;
    _9__43_0 = static_fields->__9__43_0;
    v18 = (System_String_o *)StringLiteral_1/*""*/;
    if ( !_9__43_0 )
    {
      if ( (BYTE3(v15->vtable._0_Equals.methodPtr) & 4) != 0 && !v15->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v15);
        static_fields = RecoverItemComponent___c_TypeInfo->static_fields;
      }
      v19 = (Il2CppObject *)static_fields->__9;
      _9__43_0 = (System_Action_o *)sub_B77694(System_Action_TypeInfo);
      System_Action___ctor(_9__43_0, v19, Method_RecoverItemComponent___c__setRequestInfo_b__43_0__, 0LL);
      v20 = RecoverItemComponent___c_TypeInfo->static_fields;
      v20->__9__43_0 = _9__43_0;
      sub_B77560(
        (BattleServantConfConponent_o *)&v20->__9__43_0,
        (System_Int32_array **)_9__43_0,
        v21,
        v22,
        v23,
        v24,
        v25,
        v26);
    }
    if ( v13 )
    {
      CommonUI__OpenNotificationDialog(v13, v18, v14, _9__43_0, -1, 0, 0, 0, 1, 0, 1, 0, 0LL, 0LL);
      return;
    }
    goto LABEL_32;
  }
LABEL_16:
  callbackFunc = this->fields.callbackFunc;
  if ( callbackFunc )
  {
    this->fields.callbackFunc = 0LL;
    sub_B77560((BattleServantConfConponent_o *)&this->fields.callbackFunc, 0LL, v2, v3, v4, v5, v6, v7);
    RecoverItemComponent_CallbackFunc__Invoke(
      callbackFunc,
      this->fields.currentType,
      this->fields.targetId,
      this->fields.spendNum,
      0LL);
  }
}


void __fastcall RecoverItemComponent__spendItemDlg(RecoverItemComponent_o *this, bool isRes, const MethodInfo *method)
{
  CommonUI_o *Instance; // x0
  __int64 v6; // x1
  CommonUI_o *v7; // x21
  System_Action_o *v8; // x20

  if ( (byte_438EF06 & 1) == 0 )
  {
    sub_B775C4(&System_Action_TypeInfo);
    sub_B775C4(&Method_RecoverItemComponent_setRequestInfo__);
    sub_B775C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_438EF06 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v7 = Instance;
  if ( isRes )
  {
    v8 = (System_Action_o *)sub_B77694(System_Action_TypeInfo);
    System_Action___ctor(v8, (Il2CppObject *)this, Method_RecoverItemComponent_setRequestInfo__, 0LL);
    if ( v7 )
    {
      CommonUI__CloseConfirmDialog_18056328(v7, v8, 0LL);
      return;
    }
LABEL_8:
    sub_B7769C(Instance, v6);
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
  sub_B77560(p_method);
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
  __int64 v10; // x2
  __int64 v11; // x2
  __int64 v13[4]; // [xsp+0h] [xbp-50h] BYREF
  int32_t v14; // [xsp+24h] [xbp-2Ch] BYREF
  int32_t v15; // [xsp+28h] [xbp-28h] BYREF
  int32_t v16; // [xsp+2Ch] [xbp-24h] BYREF

  v16 = type;
  v14 = num;
  v15 = id;
  if ( (byte_4388A13 & 1) == 0 )
  {
    sub_B775C4(&int_TypeInfo);
    sub_B775C4(&RecoverType_Type_TypeInfo);
    byte_4388A13 = 1;
  }
  v13[3] = 0LL;
  v13[0] = j_il2cpp_value_box_0(RecoverType_Type_TypeInfo, &v16, *(_QWORD *)&id);
  v13[1] = j_il2cpp_value_box_0(int_TypeInfo, &v15, v10);
  v13[2] = j_il2cpp_value_box_0(int_TypeInfo, &v14, v11);
  return (System_IAsyncResult_o *)sub_B77568(this, v13, callback, object);
}


void __fastcall RecoverItemComponent_CallbackFunc__EndInvoke(
        RecoverItemComponent_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B7756C(result, 0LL, method);
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
        sub_B77680(*(_QWORD *)&v22->fields.extra_arg, *(_QWORD *)&type);
      if ( (sub_B775F4(v24) & 1) == 0 )
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
      v26 = sub_B775EC(v24);
      v27 = sub_B779F0(v24);
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
            v20 = sub_B0F4C0(v23, v30, v31);
          }
          v19 = *(_QWORD *)(v20 + 8);
        }
        else
        {
          v19 = *(_QWORD *)(*v23 + 16LL * *(unsigned __int16 *)(v24 + 72) + 320);
        }
        v21 = (void (__fastcall **)(__int64 *, _QWORD, _QWORD, _QWORD, _QWORD))sub_B77674(v19, v24);
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
            v18 = sub_B0F4C0(v23, class_0, v12);
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
  Il2CppObject *v1; // x19
  struct RecoverItemComponent___c_StaticFields *static_fields; // x0

  if ( (byte_4388A11 & 1) == 0 )
  {
    sub_B775C4(&RecoverItemComponent___c_TypeInfo);
    byte_4388A11 = 1;
  }
  v1 = (Il2CppObject *)sub_B77694(RecoverItemComponent___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  static_fields = RecoverItemComponent___c_TypeInfo->static_fields;
  static_fields->__9 = (struct RecoverItemComponent___c_o *)v1;
  sub_B77560(static_fields);
}


void __fastcall RecoverItemComponent___c___ctor(RecoverItemComponent___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall RecoverItemComponent___c___setRequestInfo_b__43_0(
        RecoverItemComponent___c_o *this,
        const MethodInfo *method)
{
  CommonUI_o *Instance; // x0
  __int64 v3; // x1

  if ( (byte_4388A12 & 1) == 0 )
  {
    sub_B775C4(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    sub_B775C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4388A12 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance
    || (CommonUI__CloseRecoverItemListDialog(Instance, 0LL),
        (Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__)) == 0LL) )
  {
    sub_B7769C(Instance, v3);
  }
  AvalonSceneManager__transitionSceneRefresh((AvalonSceneManager_o *)Instance, 34, 1, 0LL, 0, 0LL);
}