void __fastcall RecoverItemComponent___cctor(const MethodInfo *method)
{
  if ( (byte_42B3A1D & 1) == 0 )
  {
    sub_B52984(&RecoverItemComponent_TypeInfo);
    byte_42B3A1D = 1;
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

  if ( (byte_42B3A17 & 1) == 0 )
  {
    sub_B52984(&Method_System_Action_int___ctor__);
    sub_B52984(&System_Action_int__TypeInfo);
    sub_B52984(&Method_RecoverItemComponent__AttachStoneCountRefreshComponent_b__38_0__);
    byte_42B3A17 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v4 = (System_Action_int__o *)sub_B52A54(System_Action_int__TypeInfo);
  System_Action_int____ctor(
    v4,
    (Il2CppObject *)this,
    Method_RecoverItemComponent__AttachStoneCountRefreshComponent_b__38_0__,
    (const MethodInfo_26261F0 *)Method_System_Action_int___ctor__);
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

  if ( (byte_42B3A1A & 1) == 0 )
  {
    sub_B52984(&System_Action_TypeInfo);
    sub_B52984(&Method_RecoverItemComponent_setRequestInfo__);
    sub_B52984(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_42B3A1A = 1;
  }
  if ( !isRes )
  {
    Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( Instance )
    {
      v11 = 0LL;
      goto LABEL_8;
    }
LABEL_9:
    sub_B52A5C(Instance, v10);
  }
  this->fields.spendNum = useNum;
  v7 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v8 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
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
  Il2CppObject *v9; // x0
  System_Int32_array **v10; // x24
  System_Int32_array **mText; // x23
  System_String_o *v12; // x21
  Il2CppObject *v13; // x0
  struct UILabel_o *itemNameLb; // x8
  System_String_o *v15; // x21
  System_String_o *v16; // x22
  int32_t v17; // w8
  int32_t usrMaxAp; // w9
  System_String_o **v19; // x8
  System_String_o *v20; // x25
  System_String_o *v21; // x25
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7
  System_Object_array *v28; // x26
  System_String_array **v29; // x2
  System_String_array **v30; // x3
  System_Boolean_array **v31; // x4
  System_Int32_array **v32; // x5
  System_Int32_array *v33; // x6
  System_Int32_array *v34; // x7
  System_String_array **v35; // x2
  System_String_array **v36; // x3
  System_Boolean_array **v37; // x4
  System_Int32_array **v38; // x5
  System_Int32_array *v39; // x6
  System_Int32_array *v40; // x7
  System_Int32_array **v41; // x24
  System_String_array **v42; // x2
  System_String_array **v43; // x3
  System_Boolean_array **v44; // x4
  System_Int32_array **v45; // x5
  System_Int32_array *v46; // x6
  System_Int32_array *v47; // x7
  System_Int32_array **v48; // x24
  System_String_array **v49; // x2
  System_String_array **v50; // x3
  System_Boolean_array **v51; // x4
  System_Int32_array **v52; // x5
  System_Int32_array *v53; // x6
  System_Int32_array *v54; // x7
  System_Int32_array **v55; // x24
  System_String_array **v56; // x2
  System_String_array **v57; // x3
  System_Boolean_array **v58; // x4
  System_Int32_array **v59; // x5
  System_Int32_array *v60; // x6
  System_Int32_array *v61; // x7
  System_Int32_array **v62; // x24
  System_String_array **v63; // x2
  System_String_array **v64; // x3
  System_Boolean_array **v65; // x4
  System_Int32_array **v66; // x5
  System_Int32_array *v67; // x6
  System_Int32_array *v68; // x7
  System_Int32_array **v69; // x24
  BattleServantConfConponent_o *v70; // x0
  System_String_o *v71; // x25
  System_String_array **v72; // x2
  System_String_array **v73; // x3
  System_Boolean_array **v74; // x4
  System_Int32_array **v75; // x5
  System_Int32_array *v76; // x6
  System_Int32_array *v77; // x7
  System_Object_array *v78; // x26
  System_String_array **v79; // x2
  System_String_array **v80; // x3
  System_Boolean_array **v81; // x4
  System_Int32_array **v82; // x5
  System_Int32_array *v83; // x6
  System_Int32_array *v84; // x7
  System_String_array **v85; // x2
  System_String_array **v86; // x3
  System_Boolean_array **v87; // x4
  System_Int32_array **v88; // x5
  System_Int32_array *v89; // x6
  System_Int32_array *v90; // x7
  System_Int32_array **v91; // x24
  System_String_array **v92; // x2
  System_String_array **v93; // x3
  System_Boolean_array **v94; // x4
  System_Int32_array **v95; // x5
  System_Int32_array *v96; // x6
  System_Int32_array *v97; // x7
  System_Int32_array **v98; // x24
  System_String_array **v99; // x2
  System_String_array **v100; // x3
  System_Boolean_array **v101; // x4
  System_Int32_array **v102; // x5
  System_Int32_array *v103; // x6
  System_Int32_array *v104; // x7
  System_Int32_array **v105; // x24
  System_String_array **v106; // x2
  System_String_array **v107; // x3
  System_Boolean_array **v108; // x4
  System_Int32_array **v109; // x5
  System_Int32_array *v110; // x6
  System_Int32_array *v111; // x7
  System_Int32_array **v112; // x24
  System_String_array **v113; // x2
  System_String_array **v114; // x3
  System_Boolean_array **v115; // x4
  System_Int32_array **v116; // x5
  System_Int32_array *v117; // x6
  System_Int32_array *v118; // x7
  System_Int32_array **v119; // x24
  System_String_o *v120; // x24
  CommonUI_o *v121; // x23
  CommonConfirmDialog_ClickDelegate_o *v122; // x25
  System_String_o **v123; // x8
  System_String_o *v124; // x25
  System_String_array **v125; // x2
  System_String_array **v126; // x3
  System_Boolean_array **v127; // x4
  System_Int32_array **v128; // x5
  System_Int32_array *v129; // x6
  System_Int32_array *v130; // x7
  System_String_array **v131; // x2
  System_String_array **v132; // x3
  System_Boolean_array **v133; // x4
  System_Int32_array **v134; // x5
  System_Int32_array *v135; // x6
  System_Int32_array *v136; // x7
  System_String_array **v137; // x2
  System_String_array **v138; // x3
  System_Boolean_array **v139; // x4
  System_Int32_array **v140; // x5
  System_Int32_array *v141; // x6
  System_Int32_array *v142; // x7
  System_Int32_array **v143; // x24
  System_String_array **v144; // x2
  System_String_array **v145; // x3
  System_Boolean_array **v146; // x4
  System_Int32_array **v147; // x5
  System_Int32_array *v148; // x6
  System_Int32_array *v149; // x7
  System_Int32_array **v150; // x24
  System_String_array **v151; // x2
  System_String_array **v152; // x3
  System_Boolean_array **v153; // x4
  System_Int32_array **v154; // x5
  System_Int32_array *v155; // x6
  System_Int32_array *v156; // x7
  System_Int32_array **v157; // x24
  System_String_array **v158; // x2
  System_String_array **v159; // x3
  System_Boolean_array **v160; // x4
  System_Int32_array **v161; // x5
  System_Int32_array *v162; // x6
  System_Int32_array *v163; // x7
  System_Int32_array **v164; // x24
  System_String_array **v165; // x2
  System_String_array **v166; // x3
  System_Boolean_array **v167; // x4
  System_Int32_array **v168; // x5
  System_Int32_array *v169; // x6
  System_Int32_array *v170; // x7
  System_Int32_array **v171; // x24
  System_String_o *v172; // x23
  CommonUI_o *v173; // x25
  CommonConfirmDialog_ClickDelegate_o *v174; // x26
  System_String_o *v175; // x0
  System_String_o *v176; // x20
  CommonUI_o *v177; // x21
  System_Action_o *v178; // x22
  System_String_o *v179; // x0
  System_String_o *v180; // x20
  CommonUI_o *Instance; // x21
  System_Action_o *v182; // x22
  WebViewManager_o *v183; // x0
  int32_t targetId; // w20
  int32_t needAp; // w21
  CommonUI_o *v186; // x22
  System_Action_bool__int__o *v187; // x23
  __int64 v188; // x0
  __int64 v189; // x0
  int32_t v190; // [xsp+38h] [xbp-68h] BYREF
  int32_t v191; // [xsp+3Ch] [xbp-64h] BYREF
  int32_t recvSum; // [xsp+40h] [xbp-60h] BYREF
  int32_t usrMaxRp; // [xsp+44h] [xbp-5Ch] BYREF
  int32_t usrCurrentRp; // [xsp+48h] [xbp-58h] BYREF
  int32_t spendNum; // [xsp+4Ch] [xbp-54h] BYREF

  if ( (byte_42B3A18 & 1) == 0 )
  {
    sub_B52984(&Method_System_Action_bool__int___ctor__);
    sub_B52984(&System_Action_bool__int__TypeInfo);
    sub_B52984(&System_Action_TypeInfo);
    sub_B52984(&BalanceConfig_TypeInfo);
    sub_B52984(&CommonConfirmDialog_ClickDelegate_TypeInfo);
    sub_B52984(&int_TypeInfo);
    sub_B52984(&LocalizationManager_TypeInfo);
    sub_B52984(&object___TypeInfo);
    sub_B52984(&UnityEngine_Object_TypeInfo);
    sub_B52984(&Method_RecoverItemComponent_CloseApRecovDlg__);
    sub_B52984(&Method_RecoverItemComponent_closeNotificationDlg__);
    sub_B52984(&Method_RecoverItemComponent_spendItemDlg__);
    sub_B52984(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_B52984(&SoundManager_TypeInfo);
    sub_B52984(&StringLiteral_11348/*"RP_RECOVER_CONFIRM_MSG"*/);
    sub_B52984(&StringLiteral_3148/*"CMDSPELL_CURRENT_NUM"*/);
    sub_B52984(&StringLiteral_3289/*"COMMAND_SPELL_TXT"*/);
    sub_B52984(&StringLiteral_1748/*"AP_RECOVER_CONFIRM_MSG"*/);
    sub_B52984(&StringLiteral_11346/*"RP_FULL_MSG"*/);
    sub_B52984(&StringLiteral_14810/*"UNIT_INFO"*/);
    sub_B52984(&StringLiteral_1744/*"AP_ADD_CONFIRM_MSG"*/);
    sub_B52984(&StringLiteral_3295/*"COMMON_CONFIRM_DECIDE"*/);
    sub_B52984(&StringLiteral_3293/*"COMMON_CONFIRM_CANCEL"*/);
    sub_B52984(&StringLiteral_1745/*"AP_ADD_CONFIRM_MSG_OVER"*/);
    sub_B52984(&StringLiteral_1749/*"AP_RECOVER_CONFIRM_MSG_OVER"*/);
    sub_B52984(&StringLiteral_1746/*"AP_FULL_MSG"*/);
    sub_B52984(&StringLiteral_1/*""*/);
    sub_B52984(&StringLiteral_1754/*"AP_RECOVER_STONEPAY_WARNING_MSG"*/);
    byte_42B3A18 = 1;
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
  v8 = LocalizationManager__Get((System_String_o *)StringLiteral_14810/*"UNIT_INFO"*/, 0LL);
  spendNum = this->fields.spendNum;
  v9 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &spendNum);
  userEntity = (__int64)System_String__Format(v8, v9, 0LL);
  v10 = (System_Int32_array **)userEntity;
  if ( this->fields.currentType == 1 )
  {
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    mText = (System_Int32_array **)LocalizationManager__Get((System_String_o *)StringLiteral_3289/*"COMMAND_SPELL_TXT"*/, 0LL);
    if ( this->fields.currentType == 1 )
    {
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v12 = LocalizationManager__Get((System_String_o *)StringLiteral_3148/*"CMDSPELL_CURRENT_NUM"*/, 0LL);
      spendNum = this->fields.spendNum;
      v13 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &spendNum);
      v10 = (System_Int32_array **)System_String__Format(v12, v13, 0LL);
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
  v15 = LocalizationManager__Get((System_String_o *)StringLiteral_3295/*"COMMON_CONFIRM_DECIDE"*/, 0LL);
  v16 = LocalizationManager__Get((System_String_o *)StringLiteral_3293/*"COMMON_CONFIRM_CANCEL"*/, 0LL);
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
    v71 = LocalizationManager__Get((System_String_o *)StringLiteral_11348/*"RP_RECOVER_CONFIRM_MSG"*/, 0LL);
    userEntity = sub_B5299C(object___TypeInfo, 7LL);
    if ( !userEntity )
      goto LABEL_154;
    v78 = (System_Object_array *)userEntity;
    if ( mText )
    {
      userEntity = sub_B52A44(mText, *(_QWORD *)(*(_QWORD *)userEntity + 64LL));
      if ( !userEntity )
        goto LABEL_155;
    }
    if ( v78->max_length )
    {
      v78->m_Items[0] = (Il2CppObject *)mText;
      sub_B52920((BattleServantConfConponent_o *)v78->m_Items, mText, v72, v73, v74, v75, v76, v77);
      if ( v10 )
      {
        userEntity = sub_B52A44(v10, v78->obj.klass->_1.element_class);
        if ( !userEntity )
          goto LABEL_155;
      }
      if ( v78->max_length > 1 )
      {
        v78->m_Items[1] = (Il2CppObject *)v10;
        sub_B52920((BattleServantConfConponent_o *)&v78->m_Items[1], v10, v79, v80, v81, v82, v83, v84);
        spendNum = this->fields.recvRpNum;
        userEntity = j_il2cpp_value_box_0(int_TypeInfo, &spendNum);
        v91 = (System_Int32_array **)userEntity;
        if ( userEntity )
        {
          userEntity = sub_B52A44(userEntity, v78->obj.klass->_1.element_class);
          if ( !userEntity )
            goto LABEL_155;
        }
        if ( v78->max_length > 2 )
        {
          v78->m_Items[2] = (Il2CppObject *)v91;
          sub_B52920((BattleServantConfConponent_o *)&v78->m_Items[2], v91, v85, v86, v87, v88, v89, v90);
          usrCurrentRp = this->fields.usrCurrentRp;
          userEntity = j_il2cpp_value_box_0(int_TypeInfo, &usrCurrentRp);
          v98 = (System_Int32_array **)userEntity;
          if ( userEntity )
          {
            userEntity = sub_B52A44(userEntity, v78->obj.klass->_1.element_class);
            if ( !userEntity )
              goto LABEL_155;
          }
          if ( v78->max_length > 3 )
          {
            v78->m_Items[3] = (Il2CppObject *)v98;
            sub_B52920((BattleServantConfConponent_o *)&v78->m_Items[3], v98, v92, v93, v94, v95, v96, v97);
            usrMaxRp = this->fields.usrMaxRp;
            userEntity = j_il2cpp_value_box_0(int_TypeInfo, &usrMaxRp);
            v105 = (System_Int32_array **)userEntity;
            if ( userEntity )
            {
              userEntity = sub_B52A44(userEntity, v78->obj.klass->_1.element_class);
              if ( !userEntity )
                goto LABEL_155;
            }
            if ( v78->max_length > 4 )
            {
              v78->m_Items[4] = (Il2CppObject *)v105;
              sub_B52920((BattleServantConfConponent_o *)&v78->m_Items[4], v105, v99, v100, v101, v102, v103, v104);
              recvSum = this->fields.recvSum;
              userEntity = j_il2cpp_value_box_0(int_TypeInfo, &recvSum);
              v112 = (System_Int32_array **)userEntity;
              if ( userEntity )
              {
                userEntity = sub_B52A44(userEntity, v78->obj.klass->_1.element_class);
                if ( !userEntity )
                  goto LABEL_155;
              }
              if ( v78->max_length > 5 )
              {
                v78->m_Items[5] = (Il2CppObject *)v112;
                sub_B52920((BattleServantConfConponent_o *)&v78->m_Items[5], v112, v106, v107, v108, v109, v110, v111);
                v191 = this->fields.usrMaxRp;
                userEntity = j_il2cpp_value_box_0(int_TypeInfo, &v191);
                v119 = (System_Int32_array **)userEntity;
                if ( userEntity )
                {
                  userEntity = sub_B52A44(userEntity, v78->obj.klass->_1.element_class);
                  if ( !userEntity )
                    goto LABEL_155;
                }
                if ( v78->max_length > 6 )
                {
                  v78->m_Items[6] = (Il2CppObject *)v119;
                  sub_B52920((BattleServantConfConponent_o *)&v78->m_Items[6], v119, v113, v114, v115, v116, v117, v118);
                  userEntity = (__int64)System_String__Format_44647040(v71, v78, 0LL);
                  if ( !this->fields.userEntity )
                    goto LABEL_154;
                  v120 = (System_String_o *)userEntity;
                  if ( UserGameEntity__getRp(this->fields.userEntity, 0LL) < this->fields.usrMaxRp )
                    goto LABEL_88;
                  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                    && !LocalizationManager_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                  }
                  v179 = LocalizationManager__Get((System_String_o *)StringLiteral_11346/*"RP_FULL_MSG"*/, 0LL);
                  v180 = System_String__Format(v179, (Il2CppObject *)mText, 0LL);
                  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
                  v182 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
                  System_Action___ctor(
                    v182,
                    (Il2CppObject *)this,
                    Method_RecoverItemComponent_closeNotificationDlg__,
                    0LL);
                  if ( !Instance )
                    goto LABEL_154;
                  CommonUI__OpenNotificationDialog(
                    Instance,
                    (System_String_o *)StringLiteral_1/*""*/,
                    v180,
                    v182,
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
    v188 = sub_B52A88(userEntity);
    sub_B52A28(v188, 0LL);
  }
  v17 = this->fields.recvSum;
  usrMaxAp = this->fields.usrMaxAp;
  if ( !this->fields.isAddAp )
  {
    if ( v17 <= usrMaxAp )
      v123 = (System_String_o **)&StringLiteral_1748/*"AP_RECOVER_CONFIRM_MSG"*/;
    else
      v123 = (System_String_o **)&StringLiteral_1749/*"AP_RECOVER_CONFIRM_MSG_OVER"*/;
    v124 = *v123;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v21 = LocalizationManager__Get(v124, 0LL);
    userEntity = sub_B5299C(object___TypeInfo, 8LL);
    if ( !userEntity )
      goto LABEL_154;
    v28 = (System_Object_array *)userEntity;
    if ( mText )
    {
      userEntity = sub_B52A44(mText, *(_QWORD *)(*(_QWORD *)userEntity + 64LL));
      if ( !userEntity )
        goto LABEL_155;
    }
    if ( v28->max_length )
    {
      v28->m_Items[0] = (Il2CppObject *)mText;
      sub_B52920((BattleServantConfConponent_o *)v28->m_Items, mText, v125, v126, v127, v128, v129, v130);
      if ( v10 )
      {
        userEntity = sub_B52A44(v10, v28->obj.klass->_1.element_class);
        if ( !userEntity )
          goto LABEL_155;
      }
      if ( v28->max_length > 1 )
      {
        v28->m_Items[1] = (Il2CppObject *)v10;
        sub_B52920((BattleServantConfConponent_o *)&v28->m_Items[1], v10, v131, v132, v133, v134, v135, v136);
        spendNum = this->fields.apRcvRate;
        userEntity = j_il2cpp_value_box_0(int_TypeInfo, &spendNum);
        v143 = (System_Int32_array **)userEntity;
        if ( userEntity )
        {
          userEntity = sub_B52A44(userEntity, v28->obj.klass->_1.element_class);
          if ( !userEntity )
            goto LABEL_155;
        }
        if ( v28->max_length > 2 )
        {
          v28->m_Items[2] = (Il2CppObject *)v143;
          sub_B52920((BattleServantConfConponent_o *)&v28->m_Items[2], v143, v137, v138, v139, v140, v141, v142);
          usrCurrentRp = this->fields.recvApNum;
          userEntity = j_il2cpp_value_box_0(int_TypeInfo, &usrCurrentRp);
          v150 = (System_Int32_array **)userEntity;
          if ( userEntity )
          {
            userEntity = sub_B52A44(userEntity, v28->obj.klass->_1.element_class);
            if ( !userEntity )
              goto LABEL_155;
          }
          if ( v28->max_length > 3 )
          {
            v28->m_Items[3] = (Il2CppObject *)v150;
            sub_B52920((BattleServantConfConponent_o *)&v28->m_Items[3], v150, v144, v145, v146, v147, v148, v149);
            usrMaxRp = this->fields.usrCurrentAp;
            userEntity = j_il2cpp_value_box_0(int_TypeInfo, &usrMaxRp);
            v157 = (System_Int32_array **)userEntity;
            if ( userEntity )
            {
              userEntity = sub_B52A44(userEntity, v28->obj.klass->_1.element_class);
              if ( !userEntity )
                goto LABEL_155;
            }
            if ( v28->max_length > 4 )
            {
              v28->m_Items[4] = (Il2CppObject *)v157;
              sub_B52920((BattleServantConfConponent_o *)&v28->m_Items[4], v157, v151, v152, v153, v154, v155, v156);
              recvSum = this->fields.usrMaxAp;
              userEntity = j_il2cpp_value_box_0(int_TypeInfo, &recvSum);
              v164 = (System_Int32_array **)userEntity;
              if ( userEntity )
              {
                userEntity = sub_B52A44(userEntity, v28->obj.klass->_1.element_class);
                if ( !userEntity )
                  goto LABEL_155;
              }
              if ( v28->max_length > 5 )
              {
                v28->m_Items[5] = (Il2CppObject *)v164;
                sub_B52920((BattleServantConfConponent_o *)&v28->m_Items[5], v164, v158, v159, v160, v161, v162, v163);
                v191 = this->fields.recvSum;
                userEntity = j_il2cpp_value_box_0(int_TypeInfo, &v191);
                v171 = (System_Int32_array **)userEntity;
                if ( userEntity )
                {
                  userEntity = sub_B52A44(userEntity, v28->obj.klass->_1.element_class);
                  if ( !userEntity )
                    goto LABEL_155;
                }
                if ( v28->max_length > 6 )
                {
                  v28->m_Items[6] = (Il2CppObject *)v171;
                  sub_B52920((BattleServantConfConponent_o *)&v28->m_Items[6], v171, v165, v166, v167, v168, v169, v170);
                  v190 = this->fields.usrMaxAp;
                  userEntity = j_il2cpp_value_box_0(int_TypeInfo, &v190);
                  v69 = (System_Int32_array **)userEntity;
                  if ( userEntity )
                  {
                    userEntity = sub_B52A44(userEntity, v28->obj.klass->_1.element_class);
                    if ( !userEntity )
                      goto LABEL_155;
                  }
                  if ( v28->max_length > 7 )
                  {
                    v28->m_Items[7] = (Il2CppObject *)v69;
                    v70 = (BattleServantConfConponent_o *)&v28->m_Items[7];
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
  if ( v17 <= usrMaxAp )
    v19 = (System_String_o **)&StringLiteral_1744/*"AP_ADD_CONFIRM_MSG"*/;
  else
    v19 = (System_String_o **)&StringLiteral_1745/*"AP_ADD_CONFIRM_MSG_OVER"*/;
  v20 = *v19;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v21 = LocalizationManager__Get(v20, 0LL);
  userEntity = sub_B5299C(object___TypeInfo, 7LL);
  if ( !userEntity )
    goto LABEL_154;
  v28 = (System_Object_array *)userEntity;
  if ( mText )
  {
    userEntity = sub_B52A44(mText, *(_QWORD *)(*(_QWORD *)userEntity + 64LL));
    if ( !userEntity )
      goto LABEL_155;
  }
  if ( !v28->max_length )
    goto LABEL_153;
  v28->m_Items[0] = (Il2CppObject *)mText;
  sub_B52920((BattleServantConfConponent_o *)v28->m_Items, mText, v22, v23, v24, v25, v26, v27);
  if ( v10 )
  {
    userEntity = sub_B52A44(v10, v28->obj.klass->_1.element_class);
    if ( !userEntity )
      goto LABEL_155;
  }
  if ( v28->max_length <= 1 )
    goto LABEL_153;
  v28->m_Items[1] = (Il2CppObject *)v10;
  sub_B52920((BattleServantConfConponent_o *)&v28->m_Items[1], v10, v29, v30, v31, v32, v33, v34);
  spendNum = this->fields.recvApNum;
  userEntity = j_il2cpp_value_box_0(int_TypeInfo, &spendNum);
  v41 = (System_Int32_array **)userEntity;
  if ( userEntity )
  {
    userEntity = sub_B52A44(userEntity, v28->obj.klass->_1.element_class);
    if ( !userEntity )
      goto LABEL_155;
  }
  if ( v28->max_length <= 2 )
    goto LABEL_153;
  v28->m_Items[2] = (Il2CppObject *)v41;
  sub_B52920((BattleServantConfConponent_o *)&v28->m_Items[2], v41, v35, v36, v37, v38, v39, v40);
  usrCurrentRp = this->fields.usrCurrentAp;
  userEntity = j_il2cpp_value_box_0(int_TypeInfo, &usrCurrentRp);
  v48 = (System_Int32_array **)userEntity;
  if ( userEntity )
  {
    userEntity = sub_B52A44(userEntity, v28->obj.klass->_1.element_class);
    if ( !userEntity )
      goto LABEL_155;
  }
  if ( v28->max_length <= 3 )
    goto LABEL_153;
  v28->m_Items[3] = (Il2CppObject *)v48;
  sub_B52920((BattleServantConfConponent_o *)&v28->m_Items[3], v48, v42, v43, v44, v45, v46, v47);
  usrMaxRp = this->fields.usrMaxAp;
  userEntity = j_il2cpp_value_box_0(int_TypeInfo, &usrMaxRp);
  v55 = (System_Int32_array **)userEntity;
  if ( userEntity )
  {
    userEntity = sub_B52A44(userEntity, v28->obj.klass->_1.element_class);
    if ( !userEntity )
      goto LABEL_155;
  }
  if ( v28->max_length <= 4 )
    goto LABEL_153;
  v28->m_Items[4] = (Il2CppObject *)v55;
  sub_B52920((BattleServantConfConponent_o *)&v28->m_Items[4], v55, v49, v50, v51, v52, v53, v54);
  recvSum = this->fields.recvSum;
  userEntity = j_il2cpp_value_box_0(int_TypeInfo, &recvSum);
  v62 = (System_Int32_array **)userEntity;
  if ( userEntity )
  {
    userEntity = sub_B52A44(userEntity, v28->obj.klass->_1.element_class);
    if ( !userEntity )
      goto LABEL_155;
  }
  if ( v28->max_length <= 5 )
    goto LABEL_153;
  v28->m_Items[5] = (Il2CppObject *)v62;
  sub_B52920((BattleServantConfConponent_o *)&v28->m_Items[5], v62, v56, v57, v58, v59, v60, v61);
  v191 = this->fields.usrMaxAp;
  userEntity = j_il2cpp_value_box_0(int_TypeInfo, &v191);
  v69 = (System_Int32_array **)userEntity;
  if ( userEntity )
  {
    userEntity = sub_B52A44(userEntity, v28->obj.klass->_1.element_class);
    if ( !userEntity )
    {
LABEL_155:
      v189 = sub_B52A7C(userEntity);
      sub_B52A28(v189, 0LL);
    }
  }
  if ( v28->max_length <= 6 )
    goto LABEL_153;
  v28->m_Items[6] = (Il2CppObject *)v69;
  v70 = (BattleServantConfConponent_o *)&v28->m_Items[6];
LABEL_125:
  sub_B52920(v70, v69, v63, v64, v65, v66, v67, v68);
  v120 = System_String__Format_44647040(v21, v28, 0LL);
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
      v172 = LocalizationManager__Get((System_String_o *)StringLiteral_1754/*"AP_RECOVER_STONEPAY_WARNING_MSG"*/, 0LL);
      v173 = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v174 = (CommonConfirmDialog_ClickDelegate_o *)sub_B52A54(CommonConfirmDialog_ClickDelegate_TypeInfo);
      CommonConfirmDialog_ClickDelegate___ctor(
        v174,
        (Il2CppObject *)this,
        Method_RecoverItemComponent_spendItemDlg__,
        0LL);
      userEntity = (__int64)BalanceConfig_TypeInfo;
      if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      }
      if ( v173 )
      {
        CommonUI__OpenConfirmDecideDlgAddMsgFrame(
          v173,
          v7,
          v120,
          v172,
          v15,
          v16,
          v174,
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
      sub_B52A5C(userEntity, v5);
    }
    if ( this->fields.isAddAp || this->fields.apRcvRate != 100 || this->fields.spendNum >= 2 )
    {
      v183 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      targetId = this->fields.targetId;
      needAp = this->fields.needAp;
      v186 = (CommonUI_o *)v183;
      v187 = (System_Action_bool__int__o *)sub_B52A54(System_Action_bool__int__TypeInfo);
      System_Action_bool__int____ctor(
        v187,
        (Il2CppObject *)this,
        Method_RecoverItemComponent_CloseApRecovDlg__,
        (const MethodInfo_26334E8 *)Method_System_Action_bool__int___ctor__);
      if ( !v186 )
        goto LABEL_154;
      CommonUI__OpenApRecoverConfirmDlg(v186, targetId, needAp, v187, 0LL);
      return;
    }
LABEL_88:
    v121 = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v122 = (CommonConfirmDialog_ClickDelegate_o *)sub_B52A54(CommonConfirmDialog_ClickDelegate_TypeInfo);
    CommonConfirmDialog_ClickDelegate___ctor(
      v122,
      (Il2CppObject *)this,
      Method_RecoverItemComponent_spendItemDlg__,
      0LL);
    userEntity = (__int64)BalanceConfig_TypeInfo;
    if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    }
    if ( v121 )
    {
      CommonUI__OpenConfirmDecideDlg(
        v121,
        v7,
        v120,
        v15,
        v16,
        v122,
        BalanceConfig_TypeInfo->static_fields->DefaultFontSize,
        0.0,
        15.0,
        0,
        1,
        0,
        240,
        0,
        1,
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
  v175 = LocalizationManager__Get((System_String_o *)StringLiteral_1746/*"AP_FULL_MSG"*/, 0LL);
  v176 = System_String__Format(v175, (Il2CppObject *)mText, 0LL);
  v177 = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v178 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
  System_Action___ctor(v178, (Il2CppObject *)this, Method_RecoverItemComponent_closeNotificationDlg__, 0LL);
  if ( !v177 )
    goto LABEL_154;
  CommonUI__OpenNotificationDialog(
    v177,
    (System_String_o *)StringLiteral_1/*""*/,
    v176,
    v178,
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

  if ( (byte_42B3A1E & 1) == 0 )
  {
    sub_B52984(&int_TypeInfo);
    sub_B52984(&StringLiteral_23720/*"{0:N0}"*/);
    byte_42B3A1E = 1;
  }
  currentNumLb = this->fields.currentNumLb;
  v9 = stoneCount;
  v6 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v9);
  v7 = System_String__Format((System_String_o *)StringLiteral_23720/*"{0:N0}"*/, v6, 0LL);
  if ( !currentNumLb )
    sub_B52A5C(v7, v8);
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

  if ( (byte_42B3A13 & 1) == 0 )
  {
    sub_B52984(&RecoverItemComponent_CallbackFunc_TypeInfo);
    byte_42B3A13 = 1;
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
    v9 = sub_B4739C(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_B52D50(v8);
  RecoverItemComponent__remove_callbackFunc(v11, v12, v13);
}


void __fastcall RecoverItemComponent__closeNotificationDlg(RecoverItemComponent_o *this, const MethodInfo *method)
{
  CommonUI_o *Instance; // x0
  __int64 v3; // x1

  if ( (byte_42B3A1C & 1) == 0 )
  {
    sub_B52984(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_42B3A1C = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_B52A5C(0LL, v3);
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

  if ( (byte_42B3A14 & 1) == 0 )
  {
    sub_B52984(&RecoverItemComponent_CallbackFunc_TypeInfo);
    byte_42B3A14 = 1;
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
    v9 = sub_B4739C(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_B52D50(v8);
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
  int recvTarget; // w24
  UILabel_o *v37; // x21
  Il2CppObject *v38; // x0
  UILabel_o *v39; // x21
  const MethodInfo *v40; // x1
  System_String_o *v41; // x20
  Il2CppObject *v42; // x0
  System_String_o *v43; // x0
  UILabel_o *v44; // x20
  Il2CppObject *v45; // x21
  System_String_o *v46; // x22
  Il2CppObject *v47; // x23
  Il2CppObject *v48; // x0
  bool v49; // cc
  int v50; // w8
  const MethodInfo *v51; // x1
  ItemEntity_o *RecvItemData; // x0
  ItemEntity_o *v53; // x24
  int32_t num; // w27
  UILabel_o *v55; // x22
  UILabel_o *v56; // x22
  WarEntity_o *v57; // x0
  CommandSpellEntity_o *v58; // x22
  int32_t type; // w8
  struct UnityEngine_GameObject_o *cmdSpellBg; // x27
  float v61; // s1
  double v62; // d1
  System_String_o *v63; // x23
  Il2CppObject *v64; // x0
  System_String_o *v65; // x0
  UILabel_o *itemDetailLb; // x23
  Il2CppObject *v67; // x24
  System_String_o *v68; // x25
  Il2CppObject *v69; // x26
  Il2CppObject *v70; // x0
  int monitor; // w22
  int32_t v72; // w0
  int32_t v73; // w8
  BalanceConfig_c *v74; // x0
  int usrMaxAp; // s2
  float v76; // s2
  float v77; // s0
  double v78; // d1
  int32_t v79; // w0
  int32_t v80; // w0
  int32_t v81; // w8
  int32_t v82; // w9
  System_String_o *v83; // x23
  Il2CppObject *v84; // x0
  System_String_o *v85; // x0
  UILabel_o *v86; // x23
  Il2CppObject *v87; // x25
  System_String_o *v88; // x26
  Il2CppObject *v89; // x27
  Il2CppObject *v90; // x0
  int value; // w23
  int32_t v92; // w0
  System_String_o *v93; // x21
  Il2CppObject *v94; // x0
  System_String_o *v95; // x0
  UILabel_o *v96; // x21
  Il2CppObject *v97; // x23
  System_String_o *v98; // x24
  Il2CppObject *v99; // x0
  UILabel_o *v100; // x21
  Il2CppObject *v101; // x0
  UILabel_o *v102; // x21
  int v103; // w8
  System_String_o *v104; // x21
  Il2CppObject *v105; // x0
  System_String_o *v106; // x0
  UILabel_o *v107; // x21
  Il2CppObject *v108; // x22
  System_String_o *v109; // x23
  Il2CppObject *v110; // x0
  UILabel_o *currentNumLb; // x21
  UILabel_o *spendNumLb; // x21
  char v113; // w9
  __int64 v114; // x0
  int32_t v115; // [xsp+0h] [xbp-70h]
  int32_t v116; // [xsp+4h] [xbp-6Ch] BYREF
  int32_t recvApNum; // [xsp+8h] [xbp-68h] BYREF
  int32_t apRcvRate; // [xsp+Ch] [xbp-64h] BYREF
  int32_t spendNum; // [xsp+10h] [xbp-60h] BYREF
  int32_t CommandSpell; // [xsp+14h] [xbp-5Ch] BYREF
  UserItemEntity_o *entity; // [xsp+18h] [xbp-58h] BYREF

  v12 = this;
  if ( (byte_42B3A15 & 1) == 0 )
  {
    sub_B52984(&BalanceConfig_TypeInfo);
    sub_B52984(&Method_DataManager_GetMasterData_CommandSpellMaster___);
    sub_B52984(&Method_DataManager_GetMasterData_ItemMaster___);
    sub_B52984(&Method_DataManager_GetMasterData_StoneShopMaster___);
    sub_B52984(&Method_DataManager_GetMasterData_UserItemMaster___);
    sub_B52984(&Method_DataMasterBase_StoneShopMaster__StoneShopEntity__int__GetEntity__);
    sub_B52984(&Method_DataMasterBase_CommandSpellMaster__CommandSpellEntity__int__GetEntity__);
    sub_B52984(&int_TypeInfo);
    sub_B52984(&LocalizationManager_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B52984(&StringLiteral_3148/*"CMDSPELL_CURRENT_NUM"*/);
    sub_B52984(&StringLiteral_1674/*"ADD_RECOVER_CMDSPELL_TXT"*/);
    sub_B52984(&StringLiteral_3150/*"CMDSPELL_SPEND_NUM_TXT"*/);
    sub_B52984(&StringLiteral_23720/*"{0:N0}"*/);
    sub_B52984(&StringLiteral_757/*"-"*/);
    sub_B52984(&StringLiteral_14810/*"UNIT_INFO"*/);
    sub_B52984(&StringLiteral_12385/*"SPEND_NUM_TXT"*/);
    sub_B52984(&StringLiteral_3486/*"CURRENT_NUM_TXT"*/);
    sub_B52984(&StringLiteral_1675/*"ADD_RECOVER_NUM_TXT"*/);
    sub_B52984(&StringLiteral_1751/*"AP_RECOVER_NUM_TXT"*/);
    this = (RecoverItemComponent_o *)sub_B52984(&StringLiteral_3149/*"CMDSPELL_CURRENT_NUM_TXT"*/);
    byte_42B3A15 = 1;
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
  sub_B52920(
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
  sub_B52920(
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
  sub_B52920((BattleServantConfConponent_o *)&v12->fields.userEntity, SelfUserGame, v22, v23, v24, v25, v26, v27);
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
  UILabel__set_text((UILabel_o *)this, (System_String_o *)StringLiteral_757/*"-"*/, 0LL);
  this = (RecoverItemComponent_o *)v12->fields.currentNumLb;
  if ( !this )
    goto LABEL_128;
  UILabel__set_text((UILabel_o *)this, (System_String_o *)StringLiteral_757/*"-"*/, 0LL);
  this = (RecoverItemComponent_o *)v12->fields.spendNumLb;
  if ( !this )
    goto LABEL_128;
  UILabel__set_text((UILabel_o *)this, (System_String_o *)StringLiteral_757/*"-"*/, 0LL);
  this = (RecoverItemComponent_o *)v12->fields.itemDetailLb;
  if ( !this )
    goto LABEL_128;
  UILabel__set_text((UILabel_o *)this, (System_String_o *)StringLiteral_757/*"-"*/, 0LL);
  currentInfoLb = v12->fields.currentInfoLb;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  this = (RecoverItemComponent_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3486/*"CURRENT_NUM_TXT"*/, 0LL);
  if ( !currentInfoLb )
    goto LABEL_128;
  UILabel__set_text(currentInfoLb, (System_String_o *)this, 0LL);
  spendInfoLb = v12->fields.spendInfoLb;
  this = (RecoverItemComponent_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12385/*"SPEND_NUM_TXT"*/, 0LL);
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
    v55 = v12->fields.currentInfoLb;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    this = (RecoverItemComponent_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3149/*"CMDSPELL_CURRENT_NUM_TXT"*/, 0LL);
    if ( !v55 )
      goto LABEL_128;
    UILabel__set_text(v55, (System_String_o *)this, 0LL);
    v56 = v12->fields.spendInfoLb;
    this = (RecoverItemComponent_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3150/*"CMDSPELL_SPEND_NUM_TXT"*/, 0LL);
    if ( !v56 )
      goto LABEL_128;
    UILabel__set_text(v56, (System_String_o *)this, 0LL);
    this = (RecoverItemComponent_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !this )
      goto LABEL_128;
    this = (RecoverItemComponent_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                       (DataManager_o *)this,
                                       (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_CommandSpellMaster___);
    if ( !this )
      goto LABEL_128;
    v57 = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
            (DataMasterBase_WarMaster__WarEntity__int__o *)this,
            v12->fields.targetId,
            (const MethodInfo_23E22D8 *)Method_DataMasterBase_CommandSpellMaster__CommandSpellEntity__int__GetEntity__);
    if ( !v57 )
      goto LABEL_127;
    v58 = (CommandSpellEntity_o *)v57;
    this = (RecoverItemComponent_o *)v12->fields.cmdSpellIcon;
    if ( !this )
      goto LABEL_128;
    CommandSpellIconComponent__SetData((CommandSpellIconComponent_o *)this, v12->fields.userEntity, 0LL);
    this = (RecoverItemComponent_o *)v12->fields.itemNameLb;
    if ( !this )
      goto LABEL_128;
    UILabel__set_text((UILabel_o *)this, v58->fields.name, 0LL);
    this = *p_userEntity;
    if ( !*p_userEntity )
      goto LABEL_128;
    CommandSpell = UserGameEntity__getCommandSpell((UserGameEntity_o *)this, 0LL);
    *p_spendNum = v58->fields.consume;
    this = (RecoverItemComponent_o *)CommandSpellEntity__getValues(v58, 0LL);
    if ( !this )
      goto LABEL_128;
    if ( LODWORD(this->fields.itemIconInfo) )
    {
      type = v58->fields.type;
      cmdSpellBg = this->fields.cmdSpellBg;
      if ( type == 3 )
      {
        if ( !cmdSpellBg )
          goto LABEL_128;
        if ( !LODWORD(cmdSpellBg[1].klass) )
          goto LABEL_129;
        v61 = (float)((float)SLODWORD(cmdSpellBg[1].monitor) / 1000.0) * 100.0;
        v62 = v61 == INFINITY ? -v61 : v61;
        v12->fields.apRcvRate = (int)v62;
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
        v63 = LocalizationManager__Get((System_String_o *)StringLiteral_3148/*"CMDSPELL_CURRENT_NUM"*/, 0LL);
        spendNum = v12->fields.spendNum;
        v64 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &spendNum);
        v65 = System_String__Format(v63, v64, 0LL);
        itemDetailLb = v12->fields.itemDetailLb;
        v67 = (Il2CppObject *)v65;
        v68 = LocalizationManager__Get((System_String_o *)StringLiteral_1751/*"AP_RECOVER_NUM_TXT"*/, 0LL);
        apRcvRate = v12->fields.apRcvRate;
        v69 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &apRcvRate);
        recvApNum = v12->fields.recvApNum;
        v70 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &recvApNum);
        this = (RecoverItemComponent_o *)System_String__Format_44569380(v68, v67, v69, v70, 0LL);
        if ( !itemDetailLb )
          goto LABEL_128;
        UILabel__set_text(itemDetailLb, (System_String_o *)this, 0LL);
        type = v58->fields.type;
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
            v49 = CommandSpell < v12->fields.spendNum;
            v50 = v12->fields.recvApNum + v12->fields.usrCurrentAp;
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
          v72 = *p_spendNum;
        }
        else
        {
          v72 = UnityEngine_Mathf__CeilToInt(
                  fmaxf((float)(needAp - v12->fields.usrCurrentAp) / (float)monitor, 1.0),
                  0LL);
          v12->fields.spendNum = v72;
        }
        v12->fields.recvApNum = v72 * monitor;
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        v104 = LocalizationManager__Get((System_String_o *)StringLiteral_3148/*"CMDSPELL_CURRENT_NUM"*/, 0LL);
        spendNum = v12->fields.spendNum;
        v105 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &spendNum);
        v106 = System_String__Format(v104, v105, 0LL);
        v107 = v12->fields.itemDetailLb;
        v108 = (Il2CppObject *)v106;
        v109 = LocalizationManager__Get((System_String_o *)StringLiteral_1674/*"ADD_RECOVER_CMDSPELL_TXT"*/, 0LL);
        apRcvRate = v12->fields.recvApNum;
        v110 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &apRcvRate);
        this = (RecoverItemComponent_o *)System_String__Format_44563852(v109, v108, v110, 0LL);
        if ( !v107 )
          goto LABEL_128;
        UILabel__set_text(v107, (System_String_o *)this, 0LL);
        v12->fields.isAddAp = 1;
        goto LABEL_120;
      }
    }
LABEL_129:
    v114 = sub_B52A88(this);
    sub_B52A28(v114, 0LL);
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
          RecvItemData = RecoverEntity__getRecvItemData(data, v51);
          if ( !RecvItemData )
            goto LABEL_127;
          v53 = RecvItemData;
          this = (RecoverItemComponent_o *)v12->fields.itemIconInfo;
          if ( this )
          {
            ItemIconComponent__SetItemImage_28308164(
              (ItemIconComponent_o *)this,
              v53->fields.imageId,
              v53->fields.bgImageId,
              v53->fields.type,
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
                  UILabel__set_text((UILabel_o *)this, v53->fields.name, 0LL);
                  *p_spendNum = 1;
                  this = (RecoverItemComponent_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
                  if ( this )
                  {
                    this = (RecoverItemComponent_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                       (DataManager_o *)this,
                                                       (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_UserItemMaster___);
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
                        v73 = v53->fields.type;
                        if ( v73 == 3 )
                        {
                          v74 = BalanceConfig_TypeInfo;
                          if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                            && !BalanceConfig_TypeInfo->_2.cctor_finished )
                          {
                            j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
                            v74 = BalanceConfig_TypeInfo;
                          }
                          usrMaxAp = v12->fields.usrMaxAp;
                          v12->fields.spendNum = v74->static_fields->SpendApRecvItemNum;
                          v76 = (float)usrMaxAp;
                          v77 = (float)v53->fields.value / 1000.0;
                          v78 = -(float)(v77 * 100.0);
                          if ( (float)(v77 * 100.0) != INFINITY )
                            v78 = (float)(v77 * 100.0);
                          v12->fields.apRcvRate = (int)v78;
                          v79 = UnityEngine_Mathf__CeilToInt(v77 * v76, 0LL);
                          v12->fields.recvApNum = v79;
                          if ( needAp >= 1 )
                          {
                            v80 = UnityEngine_Mathf__CeilToInt(
                                    fmaxf((float)(needAp - v12->fields.usrCurrentAp) / (float)v79, 1.0),
                                    0LL);
                            v81 = v12->fields.apRcvRate;
                            v82 = v12->fields.recvApNum;
                            v12->fields.spendNum = v80;
                            v12->fields.apRcvRate = v81 * v80;
                            v12->fields.recvApNum = v82 * v80;
                          }
                          v115 = num;
                          if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                            && !LocalizationManager_TypeInfo->_2.cctor_finished )
                          {
                            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                          }
                          v83 = LocalizationManager__Get((System_String_o *)StringLiteral_14810/*"UNIT_INFO"*/, 0LL);
                          spendNum = v12->fields.spendNum;
                          v84 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &spendNum);
                          v85 = System_String__Format(v83, v84, 0LL);
                          v86 = v12->fields.itemDetailLb;
                          v87 = (Il2CppObject *)v85;
                          v88 = LocalizationManager__Get((System_String_o *)StringLiteral_1751/*"AP_RECOVER_NUM_TXT"*/, 0LL);
                          apRcvRate = v12->fields.apRcvRate;
                          v89 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &apRcvRate);
                          recvApNum = v12->fields.recvApNum;
                          v90 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &recvApNum);
                          this = (RecoverItemComponent_o *)System_String__Format_44569380(v88, v87, v89, v90, 0LL);
                          if ( !v86 )
                            goto LABEL_128;
                          UILabel__set_text(v86, (System_String_o *)this, 0LL);
                          v73 = v53->fields.type;
                          num = v115;
                        }
                        if ( v73 == 4 )
                        {
                          value = v53->fields.value;
                          if ( needAp < 1 )
                          {
                            *p_spendNum = 1;
                          }
                          else
                          {
                            v92 = UnityEngine_Mathf__CeilToInt(
                                    fmaxf((float)(needAp - v12->fields.usrCurrentAp) / (float)value, 1.0),
                                    0LL);
                            v12->fields.spendNum = v92;
                            value *= v92;
                          }
                          v12->fields.recvApNum = value;
                          if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                            && !LocalizationManager_TypeInfo->_2.cctor_finished )
                          {
                            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                          }
                          v93 = LocalizationManager__Get((System_String_o *)StringLiteral_14810/*"UNIT_INFO"*/, 0LL);
                          spendNum = v12->fields.spendNum;
                          v94 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &spendNum);
                          v95 = System_String__Format(v93, v94, 0LL);
                          v96 = v12->fields.itemDetailLb;
                          v97 = (Il2CppObject *)v95;
                          v98 = LocalizationManager__Get((System_String_o *)StringLiteral_1675/*"ADD_RECOVER_NUM_TXT"*/, 0LL);
                          apRcvRate = v12->fields.recvApNum;
                          v99 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &apRcvRate);
                          this = (RecoverItemComponent_o *)System_String__Format_44563852(v98, v97, v99, 0LL);
                          if ( !v96 )
                            goto LABEL_128;
                          UILabel__set_text(v96, (System_String_o *)this, 0LL);
                          v12->fields.isAddAp = 1;
                        }
                        v100 = v12->fields.currentNumLb;
                        spendNum = num;
                        v101 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &spendNum);
                        this = (RecoverItemComponent_o *)System_String__Format(
                                                           (System_String_o *)StringLiteral_23720/*"{0:N0}"*/,
                                                           v101,
                                                           0LL);
                        if ( v100 )
                        {
                          UILabel__set_text(v100, (System_String_o *)this, 0LL);
                          v102 = v12->fields.spendNumLb;
                          this = (RecoverItemComponent_o *)System_Int32__ToString((int)v12 + 120, 0LL);
                          if ( v102 )
                          {
                            UILabel__set_text(v102, (System_String_o *)this, 0LL);
                            v103 = v12->fields.recvApNum + v12->fields.usrCurrentAp;
                            v12->fields.isEnableSelect = num >= v12->fields.spendNum;
                            v12->fields.recvSum = v103;
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
    sub_B52A5C(this, data);
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
  this = (RecoverItemComponent_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_128;
  this = (RecoverItemComponent_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                     (DataManager_o *)this,
                                     (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_ItemMaster___);
  if ( !this )
    goto LABEL_128;
  this = (RecoverItemComponent_o *)ItemMaster__GetEntityByType((ItemMaster_o *)this, 2, 0LL);
  if ( !this )
    goto LABEL_128;
  v34 = this;
  this = (RecoverItemComponent_o *)v12->fields.itemIconInfo;
  if ( !this )
    goto LABEL_128;
  ItemIconComponent__SetItemImage_28308164(
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
  this = (RecoverItemComponent_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_128;
  this = (RecoverItemComponent_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                     (DataManager_o *)this,
                                     (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_StoneShopMaster___);
  if ( !this )
    goto LABEL_128;
  this = (RecoverItemComponent_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                     (DataMasterBase_WarMaster__WarEntity__int__o *)this,
                                     v12->fields.targetId,
                                     (const MethodInfo_23E22D8 *)Method_DataMasterBase_StoneShopMaster__StoneShopEntity__int__GetEntity__);
  if ( !v12->fields.itemNameLb )
    goto LABEL_128;
  v35 = this;
  UILabel__set_text(v12->fields.itemNameLb, (System_String_o *)v34->fields.itemIconInfo, 0LL);
  if ( !*p_userEntity )
    goto LABEL_128;
  recvTarget = (*p_userEntity)->fields.recvTarget;
  if ( v35 )
    *p_spendNum = HIDWORD(v35->fields.cmdSpellIcon);
  v37 = v12->fields.currentNumLb;
  spendNum = recvTarget;
  v38 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &spendNum);
  this = (RecoverItemComponent_o *)System_String__Format((System_String_o *)StringLiteral_23720/*"{0:N0}"*/, v38, 0LL);
  if ( !v37 )
    goto LABEL_128;
  UILabel__set_text(v37, (System_String_o *)this, 0LL);
  v39 = v12->fields.spendNumLb;
  this = (RecoverItemComponent_o *)System_Int32__ToString((int)v12 + 120, 0LL);
  if ( !v39 )
    goto LABEL_128;
  UILabel__set_text(v39, (System_String_o *)this, 0LL);
  RecoverItemComponent__AttachStoneCountRefreshComponent(v12, v40);
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v41 = LocalizationManager__Get((System_String_o *)StringLiteral_14810/*"UNIT_INFO"*/, 0LL);
  apRcvRate = v12->fields.spendNum;
  v42 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &apRcvRate);
  v43 = System_String__Format(v41, v42, 0LL);
  v44 = v12->fields.itemDetailLb;
  v45 = (Il2CppObject *)v43;
  v46 = LocalizationManager__Get((System_String_o *)StringLiteral_1751/*"AP_RECOVER_NUM_TXT"*/, 0LL);
  recvApNum = v12->fields.apRcvRate;
  v47 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &recvApNum);
  v116 = v12->fields.recvApNum;
  v48 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v116);
  this = (RecoverItemComponent_o *)System_String__Format_44569380(v46, v45, v47, v48, 0LL);
  if ( !v44 )
    goto LABEL_128;
  UILabel__set_text(v44, (System_String_o *)this, 0LL);
  v49 = recvTarget < v12->fields.spendNum;
  v50 = v12->fields.usrMaxAp + v12->fields.usrCurrentAp;
LABEL_123:
  v113 = !v49;
  v12->fields.isEnableSelect = v113;
  v12->fields.recvSum = v50;
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
      sub_B52A5C(0LL, method);
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
  int recvTarget; // w23
  UILabel_o *v37; // x21
  Il2CppObject *v38; // x0
  UILabel_o *v39; // x21
  const MethodInfo *v40; // x1
  System_String_o *v41; // x20
  Il2CppObject *v42; // x0
  System_String_o *v43; // x0
  UILabel_o *v44; // x20
  Il2CppObject *v45; // x21
  System_String_o *v46; // x22
  Il2CppObject *v47; // x0
  bool v48; // cc
  int v49; // w8
  const MethodInfo *v50; // x1
  ItemEntity_o *RecvItemData; // x0
  ItemEntity_o *v52; // x24
  int32_t num; // w26
  UILabel_o *v54; // x22
  UILabel_o *v55; // x22
  WarEntity_o *v56; // x0
  CommandSpellEntity_o *v57; // x22
  struct UnityEngine_GameObject_o *cmdSpellBg; // x8
  int monitor; // w22
  int32_t v60; // w0
  int value; // w23
  int32_t v62; // w0
  System_String_o *v63; // x21
  Il2CppObject *v64; // x0
  System_String_o *v65; // x0
  UILabel_o *v66; // x21
  Il2CppObject *v67; // x23
  System_String_o *v68; // x24
  Il2CppObject *v69; // x0
  UILabel_o *v70; // x21
  Il2CppObject *v71; // x0
  UILabel_o *v72; // x21
  int v73; // w8
  System_String_o *v74; // x21
  Il2CppObject *v75; // x0
  System_String_o *v76; // x0
  UILabel_o *itemDetailLb; // x21
  Il2CppObject *v78; // x22
  System_String_o *v79; // x23
  Il2CppObject *v80; // x0
  UILabel_o *currentNumLb; // x21
  UILabel_o *spendNumLb; // x21
  char v83; // w9
  __int64 v84; // x0
  int32_t v85; // [xsp+8h] [xbp-58h] BYREF
  int32_t recvRpNum; // [xsp+Ch] [xbp-54h] BYREF
  int32_t spendNum; // [xsp+10h] [xbp-50h] BYREF
  int32_t CommandSpell; // [xsp+14h] [xbp-4Ch] BYREF
  UserItemEntity_o *entity; // [xsp+18h] [xbp-48h] BYREF

  v12 = this;
  if ( (byte_42B3A16 & 1) == 0 )
  {
    sub_B52984(&BalanceConfig_TypeInfo);
    sub_B52984(&Method_DataManager_GetMasterData_CommandSpellMaster___);
    sub_B52984(&Method_DataManager_GetMasterData_ItemMaster___);
    sub_B52984(&Method_DataManager_GetMasterData_StoneShopMaster___);
    sub_B52984(&Method_DataManager_GetMasterData_UserItemMaster___);
    sub_B52984(&Method_DataMasterBase_StoneShopMaster__StoneShopEntity__int__GetEntity__);
    sub_B52984(&Method_DataMasterBase_CommandSpellMaster__CommandSpellEntity__int__GetEntity__);
    sub_B52984(&int_TypeInfo);
    sub_B52984(&LocalizationManager_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B52984(&StringLiteral_3148/*"CMDSPELL_CURRENT_NUM"*/);
    sub_B52984(&StringLiteral_3150/*"CMDSPELL_SPEND_NUM_TXT"*/);
    sub_B52984(&StringLiteral_23720/*"{0:N0}"*/);
    sub_B52984(&StringLiteral_757/*"-"*/);
    sub_B52984(&StringLiteral_14810/*"UNIT_INFO"*/);
    sub_B52984(&StringLiteral_12385/*"SPEND_NUM_TXT"*/);
    sub_B52984(&StringLiteral_3486/*"CURRENT_NUM_TXT"*/);
    sub_B52984(&StringLiteral_11347/*"RP_RECOVER_CMDSPELL_TXT"*/);
    sub_B52984(&StringLiteral_11349/*"RP_RECOVER_NUM_TXT"*/);
    this = (RecoverItemComponent_o *)sub_B52984(&StringLiteral_3149/*"CMDSPELL_CURRENT_NUM_TXT"*/);
    byte_42B3A16 = 1;
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
  sub_B52920(
    (BattleServantConfConponent_o *)&v12->fields.dialog,
    (System_Int32_array **)dlg,
    *(System_String_array ***)&needRp,
    (System_String_array **)dlg,
    (System_Boolean_array **)callback,
    (System_Int32_array **)method,
    v6,
    v7);
  v12->fields.callbackFunc = callback;
  sub_B52920(
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
  sub_B52920((BattleServantConfConponent_o *)&v12->fields.userEntity, SelfUserGame, v22, v23, v24, v25, v26, v27);
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
  UILabel__set_text((UILabel_o *)this, (System_String_o *)StringLiteral_757/*"-"*/, 0LL);
  this = (RecoverItemComponent_o *)v12->fields.currentNumLb;
  if ( !this )
    goto LABEL_100;
  UILabel__set_text((UILabel_o *)this, (System_String_o *)StringLiteral_757/*"-"*/, 0LL);
  this = (RecoverItemComponent_o *)v12->fields.spendNumLb;
  if ( !this )
    goto LABEL_100;
  UILabel__set_text((UILabel_o *)this, (System_String_o *)StringLiteral_757/*"-"*/, 0LL);
  this = (RecoverItemComponent_o *)v12->fields.itemDetailLb;
  if ( !this )
    goto LABEL_100;
  UILabel__set_text((UILabel_o *)this, (System_String_o *)StringLiteral_757/*"-"*/, 0LL);
  currentInfoLb = v12->fields.currentInfoLb;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  this = (RecoverItemComponent_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3486/*"CURRENT_NUM_TXT"*/, 0LL);
  if ( !currentInfoLb )
    goto LABEL_100;
  UILabel__set_text(currentInfoLb, (System_String_o *)this, 0LL);
  spendInfoLb = v12->fields.spendInfoLb;
  this = (RecoverItemComponent_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12385/*"SPEND_NUM_TXT"*/, 0LL);
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
          v54 = v12->fields.currentInfoLb;
          if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          }
          this = (RecoverItemComponent_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3149/*"CMDSPELL_CURRENT_NUM_TXT"*/, 0LL);
          if ( v54 )
          {
            UILabel__set_text(v54, (System_String_o *)this, 0LL);
            v55 = v12->fields.spendInfoLb;
            this = (RecoverItemComponent_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3150/*"CMDSPELL_SPEND_NUM_TXT"*/, 0LL);
            if ( v55 )
            {
              UILabel__set_text(v55, (System_String_o *)this, 0LL);
              this = (RecoverItemComponent_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
              if ( this )
              {
                this = (RecoverItemComponent_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                   (DataManager_o *)this,
                                                   (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_CommandSpellMaster___);
                if ( this )
                {
                  v56 = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                          (DataMasterBase_WarMaster__WarEntity__int__o *)this,
                          v12->fields.targetId,
                          (const MethodInfo_23E22D8 *)Method_DataMasterBase_CommandSpellMaster__CommandSpellEntity__int__GetEntity__);
                  if ( !v56 )
                    goto LABEL_99;
                  v57 = (CommandSpellEntity_o *)v56;
                  this = (RecoverItemComponent_o *)v12->fields.cmdSpellIcon;
                  if ( this )
                  {
                    CommandSpellIconComponent__SetData((CommandSpellIconComponent_o *)this, v12->fields.userEntity, 0LL);
                    this = (RecoverItemComponent_o *)v12->fields.itemNameLb;
                    if ( this )
                    {
                      UILabel__set_text((UILabel_o *)this, v57->fields.name, 0LL);
                      this = *p_userEntity;
                      if ( *p_userEntity )
                      {
                        CommandSpell = UserGameEntity__getCommandSpell((UserGameEntity_o *)this, 0LL);
                        *p_spendNum = v57->fields.consume;
                        this = (RecoverItemComponent_o *)CommandSpellEntity__getValues(v57, 0LL);
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
                            v84 = sub_B52A88(this);
                            sub_B52A28(v84, 0LL);
                          }
                          monitor = (int)cmdSpellBg[1].monitor;
                          if ( needRp < 1 )
                          {
                            v60 = *p_spendNum;
                          }
                          else
                          {
                            v60 = UnityEngine_Mathf__CeilToInt(
                                    fmaxf((float)(needRp - v12->fields.usrCurrentRp) / (float)monitor, 1.0),
                                    0LL);
                            v12->fields.spendNum = v60;
                          }
                          v12->fields.recvRpNum = v60 * monitor;
                          if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                            && !LocalizationManager_TypeInfo->_2.cctor_finished )
                          {
                            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                          }
                          v74 = LocalizationManager__Get((System_String_o *)StringLiteral_3148/*"CMDSPELL_CURRENT_NUM"*/, 0LL);
                          spendNum = v12->fields.spendNum;
                          v75 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &spendNum);
                          v76 = System_String__Format(v74, v75, 0LL);
                          itemDetailLb = v12->fields.itemDetailLb;
                          v78 = (Il2CppObject *)v76;
                          v79 = LocalizationManager__Get((System_String_o *)StringLiteral_11347/*"RP_RECOVER_CMDSPELL_TXT"*/, 0LL);
                          recvRpNum = v12->fields.recvRpNum;
                          v80 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &recvRpNum);
                          this = (RecoverItemComponent_o *)System_String__Format_44563852(v79, v78, v80, 0LL);
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
                                v48 = CommandSpell < v12->fields.spendNum;
                                v49 = v12->fields.recvRpNum + v12->fields.usrCurrentRp;
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
          RecvItemData = RecoverEntity__getRecvItemData(data, v50);
          if ( !RecvItemData )
            goto LABEL_99;
          v52 = RecvItemData;
          this = (RecoverItemComponent_o *)v12->fields.itemIconInfo;
          if ( this )
          {
            ItemIconComponent__SetItemImage_28308164(
              (ItemIconComponent_o *)this,
              v52->fields.imageId,
              v52->fields.bgImageId,
              v52->fields.type,
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
                  UILabel__set_text((UILabel_o *)this, v52->fields.name, 0LL);
                  this = (RecoverItemComponent_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
                  if ( this )
                  {
                    this = (RecoverItemComponent_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                       (DataManager_o *)this,
                                                       (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_UserItemMaster___);
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
                        value = v52->fields.value;
                        if ( needRp < 1 )
                        {
                          *p_spendNum = 1;
                        }
                        else
                        {
                          v62 = UnityEngine_Mathf__CeilToInt(
                                  fmaxf((float)(needRp - v12->fields.usrCurrentRp) / (float)value, 1.0),
                                  0LL);
                          v12->fields.spendNum = v62;
                          value *= v62;
                        }
                        v12->fields.recvRpNum = value;
                        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                          && !LocalizationManager_TypeInfo->_2.cctor_finished )
                        {
                          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                        }
                        v63 = LocalizationManager__Get((System_String_o *)StringLiteral_14810/*"UNIT_INFO"*/, 0LL);
                        spendNum = v12->fields.spendNum;
                        v64 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &spendNum);
                        v65 = System_String__Format(v63, v64, 0LL);
                        v66 = v12->fields.itemDetailLb;
                        v67 = (Il2CppObject *)v65;
                        v68 = LocalizationManager__Get((System_String_o *)StringLiteral_11349/*"RP_RECOVER_NUM_TXT"*/, 0LL);
                        recvRpNum = v12->fields.recvRpNum;
                        v69 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &recvRpNum);
                        this = (RecoverItemComponent_o *)System_String__Format_44563852(v68, v67, v69, 0LL);
                        if ( v66 )
                        {
                          UILabel__set_text(v66, (System_String_o *)this, 0LL);
                          v70 = v12->fields.currentNumLb;
                          v85 = num;
                          v71 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v85);
                          this = (RecoverItemComponent_o *)System_String__Format(
                                                             (System_String_o *)StringLiteral_23720/*"{0:N0}"*/,
                                                             v71,
                                                             0LL);
                          if ( v70 )
                          {
                            UILabel__set_text(v70, (System_String_o *)this, 0LL);
                            v72 = v12->fields.spendNumLb;
                            this = (RecoverItemComponent_o *)System_Int32__ToString((int)v12 + 120, 0LL);
                            if ( v72 )
                            {
                              UILabel__set_text(v72, (System_String_o *)this, 0LL);
                              v73 = v12->fields.recvRpNum + v12->fields.usrCurrentRp;
                              v12->fields.isEnableSelect = num >= v12->fields.spendNum;
                              v12->fields.recvSum = v73;
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
  this = (RecoverItemComponent_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_100;
  this = (RecoverItemComponent_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                     (DataManager_o *)this,
                                     (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_ItemMaster___);
  if ( !this )
    goto LABEL_100;
  this = (RecoverItemComponent_o *)ItemMaster__GetEntityByType((ItemMaster_o *)this, 2, 0LL);
  if ( !this )
    goto LABEL_100;
  v34 = this;
  this = (RecoverItemComponent_o *)v12->fields.itemIconInfo;
  if ( !this )
    goto LABEL_100;
  ItemIconComponent__SetItemImage_28308164(
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
  this = (RecoverItemComponent_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_100;
  this = (RecoverItemComponent_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                     (DataManager_o *)this,
                                     (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_StoneShopMaster___);
  if ( !this )
    goto LABEL_100;
  this = (RecoverItemComponent_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                     (DataMasterBase_WarMaster__WarEntity__int__o *)this,
                                     v12->fields.targetId,
                                     (const MethodInfo_23E22D8 *)Method_DataMasterBase_StoneShopMaster__StoneShopEntity__int__GetEntity__);
  if ( !v12->fields.itemNameLb )
    goto LABEL_100;
  v35 = this;
  UILabel__set_text(v12->fields.itemNameLb, (System_String_o *)v34->fields.itemIconInfo, 0LL);
  if ( !*p_userEntity )
    goto LABEL_100;
  recvTarget = (*p_userEntity)->fields.recvTarget;
  if ( v35 )
    *p_spendNum = HIDWORD(v35->fields.cmdSpellIcon);
  v37 = v12->fields.currentNumLb;
  spendNum = recvTarget;
  v38 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &spendNum);
  this = (RecoverItemComponent_o *)System_String__Format((System_String_o *)StringLiteral_23720/*"{0:N0}"*/, v38, 0LL);
  if ( !v37 )
    goto LABEL_100;
  UILabel__set_text(v37, (System_String_o *)this, 0LL);
  v39 = v12->fields.spendNumLb;
  this = (RecoverItemComponent_o *)System_Int32__ToString((int)v12 + 120, 0LL);
  if ( !v39 )
    goto LABEL_100;
  UILabel__set_text(v39, (System_String_o *)this, 0LL);
  RecoverItemComponent__AttachStoneCountRefreshComponent(v12, v40);
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v41 = LocalizationManager__Get((System_String_o *)StringLiteral_14810/*"UNIT_INFO"*/, 0LL);
  recvRpNum = v12->fields.spendNum;
  v42 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &recvRpNum);
  v43 = System_String__Format(v41, v42, 0LL);
  v44 = v12->fields.itemDetailLb;
  v45 = (Il2CppObject *)v43;
  v46 = LocalizationManager__Get((System_String_o *)StringLiteral_11349/*"RP_RECOVER_NUM_TXT"*/, 0LL);
  v85 = v12->fields.recvRpNum;
  v47 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v85);
  this = (RecoverItemComponent_o *)System_String__Format_44563852(v46, v45, v47, 0LL);
  if ( !v44 )
LABEL_100:
    sub_B52A5C(this, data);
  UILabel__set_text(v44, (System_String_o *)this, 0LL);
  v48 = recvTarget < v12->fields.spendNum;
  v49 = v12->fields.recvRpNum + v12->fields.usrCurrentRp;
LABEL_95:
  v83 = !v48;
  v12->fields.isEnableSelect = v83;
  v12->fields.recvSum = v49;
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

  if ( (byte_42B3A1B & 1) == 0 )
  {
    sub_B52984(&System_Action_TypeInfo);
    sub_B52984(&Method_DataManager_GetMasterData_EventMaster___);
    sub_B52984(&LocalizationManager_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B52984(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_B52984(&TerminalSceneComponent_TypeInfo);
    sub_B52984(&Method_RecoverItemComponent___c__setRequestInfo_b__43_0__);
    sub_B52984(&RecoverItemComponent___c_TypeInfo);
    sub_B52984(&StringLiteral_11350/*"RP_UNRECOVERABLE_MESSAGE"*/);
    sub_B52984(&StringLiteral_1/*""*/);
    byte_42B3A1B = 1;
  }
  if ( this->fields.recvTarget != 2 )
    goto LABEL_16;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_32;
  DataManager__GetMasterData_WarQuestSelectionMaster_(
    Instance,
    (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_EventMaster___);
  if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  }
  if ( !byte_42AC2A0 )
  {
    sub_B52984(&TerminalSceneComponent_TypeInfo);
    byte_42AC2A0 = 1;
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
    sub_B52A5C(Instance, v10);
  if ( !ScrPlayerStatus__IsBPActive((ScrPlayerStatus_o *)Instance, 0LL) )
  {
    v13 = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    Instance = (DataManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11350/*"RP_UNRECOVERABLE_MESSAGE"*/, 0LL);
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
      _9__43_0 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
      System_Action___ctor(_9__43_0, v19, Method_RecoverItemComponent___c__setRequestInfo_b__43_0__, 0LL);
      v20 = RecoverItemComponent___c_TypeInfo->static_fields;
      v20->__9__43_0 = _9__43_0;
      sub_B52920(
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
    sub_B52920((BattleServantConfConponent_o *)&this->fields.callbackFunc, 0LL, v2, v3, v4, v5, v6, v7);
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

  if ( (byte_42B3A19 & 1) == 0 )
  {
    sub_B52984(&System_Action_TypeInfo);
    sub_B52984(&Method_RecoverItemComponent_setRequestInfo__);
    sub_B52984(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_42B3A19 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v7 = Instance;
  if ( isRes )
  {
    v8 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
    System_Action___ctor(v8, (Il2CppObject *)this, Method_RecoverItemComponent_setRequestInfo__, 0LL);
    if ( v7 )
    {
      CommonUI__CloseConfirmDialog_18158412(v7, v8, 0LL);
      return;
    }
LABEL_8:
    sub_B52A5C(Instance, v6);
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
  sub_B52920(
    p_method,
    (System_Int32_array **)object,
    *(System_String_array ***)&method,
    (System_String_array **)a4,
    v4,
    v5,
    v6,
    v7);
}


System_IAsyncResult_o *__fastcall RecoverItemComponent_CallbackFunc__BeginInvoke(
        RecoverItemComponent_CallbackFunc_o *this,
        int32_t type,
        int32_t id,
        int32_t num,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v11[4]; // [xsp+0h] [xbp-50h] BYREF
  int32_t v12; // [xsp+24h] [xbp-2Ch] BYREF
  int32_t v13; // [xsp+28h] [xbp-28h] BYREF
  int32_t v14; // [xsp+2Ch] [xbp-24h] BYREF

  v14 = type;
  v12 = num;
  v13 = id;
  if ( (byte_42AF2A1 & 1) == 0 )
  {
    sub_B52984(&int_TypeInfo);
    sub_B52984(&RecoverType_Type_TypeInfo);
    byte_42AF2A1 = 1;
  }
  v11[3] = 0LL;
  v11[0] = j_il2cpp_value_box_0(RecoverType_Type_TypeInfo, &v14);
  v11[1] = j_il2cpp_value_box_0(int_TypeInfo, &v13);
  v11[2] = j_il2cpp_value_box_0(int_TypeInfo, &v12);
  return (System_IAsyncResult_o *)sub_B52928(this, v11, callback, object);
}


void __fastcall RecoverItemComponent_CallbackFunc__EndInvoke(
        RecoverItemComponent_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B5292C(result, 0LL, method);
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
        sub_B52A40(*(_QWORD *)&v23->fields.extra_arg, *(_QWORD *)&type, *(_QWORD *)&id, *(_QWORD *)&num);
      if ( (sub_B529B4(v25) & 1) == 0 )
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
      v27 = sub_B529AC(v25);
      v28 = sub_B52DB0(v25);
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
            v21 = sub_AEB880(v24, v32, v33, v29);
          }
          v20 = *(_QWORD *)(v21 + 8);
        }
        else
        {
          v20 = *(_QWORD *)(*v24 + 16LL * *(unsigned __int16 *)(v25 + 72) + 320);
        }
        v22 = (void (__fastcall **)(__int64 *, _QWORD, _QWORD, _QWORD, _QWORD))sub_B52A34(v20, v25);
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
            v19 = sub_AEB880(v24, class_0, v12, v14);
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
  Il2CppObject *v1; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v3; // x2
  System_String_array **v4; // x3
  System_Boolean_array **v5; // x4
  System_Int32_array **v6; // x5
  System_Int32_array *v7; // x6
  System_Int32_array *v8; // x7

  if ( (byte_42AF29F & 1) == 0 )
  {
    sub_B52984(&RecoverItemComponent___c_TypeInfo);
    byte_42AF29F = 1;
  }
  v1 = (Il2CppObject *)sub_B52A54(RecoverItemComponent___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  static_fields = (BattleServantConfConponent_o *)RecoverItemComponent___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v1;
  sub_B52920(static_fields, (System_Int32_array **)v1, v3, v4, v5, v6, v7, v8);
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

  if ( (byte_42AF2A0 & 1) == 0 )
  {
    sub_B52984(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    sub_B52984(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_42AF2A0 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance
    || (CommonUI__CloseRecoverItemListDialog(Instance, 0LL),
        (Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__)) == 0LL) )
  {
    sub_B52A5C(Instance, v3);
  }
  AvalonSceneManager__transitionSceneRefresh((AvalonSceneManager_o *)Instance, 34, 1, 0LL, 0, 0LL);
}