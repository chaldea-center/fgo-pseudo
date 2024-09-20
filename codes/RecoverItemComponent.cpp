void __fastcall RecoverItemComponent___cctor(const MethodInfo *method)
{
  if ( (byte_4A5EC6F & 1) == 0 )
  {
    sub_1B885B0(&RecoverItemComponent_TypeInfo);
    byte_4A5EC6F = 1;
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

  if ( (byte_4A5EC69 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_int__TypeInfo);
    sub_1B885B0(&Method_RecoverItemComponent__AttachStoneCountRefreshComponent_b__38_0__);
    byte_4A5EC69 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v4 = (System_Action_int__o *)sub_1B887FC(System_Action_int__TypeInfo);
  System_Action_int____ctor(
    v4,
    (Il2CppObject *)this,
    Method_RecoverItemComponent__AttachStoneCountRefreshComponent_b__38_0__,
    0LL);
  StoneCountRefreshComponent__AttachToGameObject(gameObject, v4, 1, 0LL);
}


void __fastcall RecoverItemComponent__CloseApRecovDlg(
        RecoverItemComponent_o *this,
        bool isRes,
        int32_t useNum,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x20
  System_Action_o *v8; // x21
  Il2CppObject *v9; // x0
  __int64 v10; // x1

  if ( (byte_4A5EC6C & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_RecoverItemComponent_setRequestInfo__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4A5EC6C = 1;
  }
  if ( isRes )
  {
    this->fields.spendNum = useNum;
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v8 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
    System_Action___ctor(v8, (Il2CppObject *)this, Method_RecoverItemComponent_setRequestInfo__, 0LL);
    if ( !Instance )
LABEL_9:
      sub_1B8880C(v9, v10);
  }
  else
  {
    v9 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !v9 )
      goto LABEL_9;
    Instance = v9;
    v8 = 0LL;
  }
  CommonUI__CloseApRecoverConfirmDlg((CommonUI_o *)Instance, v8, 0LL);
}


void __fastcall RecoverItemComponent__OnClickItem(RecoverItemComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *dialog; // x20
  __int64 userEntity; // x0
  __int64 v5; // x1
  struct RecoverDlgComponent_o *v6; // x8
  System_String_o *v7; // x20
  System_String_o *v8; // x21
  __int64 v9; // x2
  __int64 v10; // x3
  __int64 v11; // x4
  Il2CppObject *v12; // x0
  System_String_o *v13; // x24
  Il2CppObject *mText; // x23
  System_String_o *v15; // x21
  __int64 v16; // x2
  __int64 v17; // x3
  __int64 v18; // x4
  Il2CppObject *v19; // x0
  struct UILabel_o *itemNameLb; // x8
  System_String_o *v21; // x21
  System_String_o *v22; // x22
  _QWORD *v23; // x8
  System_Reflection_MethodBase_o *v24; // x0
  int32_t v25; // w8
  int32_t usrMaxAp; // w9
  System_String_o **v27; // x8
  System_String_o *v28; // x25
  System_String_o *v29; // x25
  int32_t v30; // w2
  int32_t v31; // w3
  System_Object_array *v32; // x26
  int32_t v33; // w2
  int32_t v34; // w3
  __int64 v35; // x2
  __int64 v36; // x3
  __int64 v37; // x4
  int32_t v38; // w2
  int32_t v39; // w3
  Il2CppObject *v40; // x24
  __int64 v41; // x2
  __int64 v42; // x3
  __int64 v43; // x4
  int32_t v44; // w2
  int32_t v45; // w3
  Il2CppObject *v46; // x24
  __int64 v47; // x2
  __int64 v48; // x3
  __int64 v49; // x4
  int32_t v50; // w2
  int32_t v51; // w3
  Il2CppObject *v52; // x24
  __int64 v53; // x2
  __int64 v54; // x3
  __int64 v55; // x4
  int32_t v56; // w2
  int32_t v57; // w3
  Il2CppObject *v58; // x24
  __int64 v59; // x2
  __int64 v60; // x3
  __int64 v61; // x4
  int32_t v62; // w2
  int32_t v63; // w3
  Il2CppObject *v64; // x24
  ServantStatusBattleListViewItem_o *v65; // x0
  System_String_o *v66; // x25
  int32_t v67; // w2
  int32_t v68; // w3
  System_Object_array *v69; // x26
  int32_t v70; // w2
  int32_t v71; // w3
  __int64 v72; // x2
  __int64 v73; // x3
  __int64 v74; // x4
  int32_t v75; // w2
  int32_t v76; // w3
  Il2CppObject *v77; // x24
  __int64 v78; // x2
  __int64 v79; // x3
  __int64 v80; // x4
  int32_t v81; // w2
  int32_t v82; // w3
  Il2CppObject *v83; // x24
  __int64 v84; // x2
  __int64 v85; // x3
  __int64 v86; // x4
  int32_t v87; // w2
  int32_t v88; // w3
  Il2CppObject *v89; // x24
  __int64 v90; // x2
  __int64 v91; // x3
  __int64 v92; // x4
  int32_t v93; // w2
  int32_t v94; // w3
  Il2CppObject *v95; // x24
  __int64 v96; // x2
  __int64 v97; // x3
  __int64 v98; // x4
  int32_t v99; // w2
  int32_t v100; // w3
  Il2CppObject *v101; // x24
  System_String_o *v102; // x24
  Il2CppObject *v103; // x23
  CommonConfirmDialog_ClickDelegate_o *v104; // x25
  System_String_o **v105; // x8
  System_String_o *v106; // x25
  int32_t v107; // w2
  int32_t v108; // w3
  int32_t v109; // w2
  int32_t v110; // w3
  __int64 v111; // x2
  __int64 v112; // x3
  __int64 v113; // x4
  int32_t v114; // w2
  int32_t v115; // w3
  Il2CppObject *v116; // x24
  __int64 v117; // x2
  __int64 v118; // x3
  __int64 v119; // x4
  int32_t v120; // w2
  int32_t v121; // w3
  Il2CppObject *v122; // x24
  __int64 v123; // x2
  __int64 v124; // x3
  __int64 v125; // x4
  int32_t v126; // w2
  int32_t v127; // w3
  Il2CppObject *v128; // x24
  __int64 v129; // x2
  __int64 v130; // x3
  __int64 v131; // x4
  int32_t v132; // w2
  int32_t v133; // w3
  Il2CppObject *v134; // x24
  __int64 v135; // x2
  __int64 v136; // x3
  __int64 v137; // x4
  int32_t v138; // w2
  int32_t v139; // w3
  Il2CppObject *v140; // x24
  __int64 v141; // x2
  __int64 v142; // x3
  __int64 v143; // x4
  System_String_o *v144; // x23
  Il2CppObject *v145; // x25
  CommonConfirmDialog_ClickDelegate_o *v146; // x26
  System_String_o *v147; // x0
  System_String_o *v148; // x20
  Il2CppObject *v149; // x21
  System_Action_o *v150; // x22
  System_String_o *v151; // x0
  System_String_o *v152; // x20
  Il2CppObject *Instance; // x21
  System_Action_o *v154; // x22
  Il2CppObject *v155; // x0
  int32_t targetId; // w20
  int32_t needAp; // w21
  CommonUI_o *v158; // x22
  System_Action_bool__int__o *v159; // x23
  __int64 v160; // x0
  int32_t v161; // [xsp+38h] [xbp-78h] BYREF
  int32_t v162; // [xsp+3Ch] [xbp-74h] BYREF
  int32_t recvSum; // [xsp+40h] [xbp-70h] BYREF
  int32_t usrMaxRp; // [xsp+44h] [xbp-6Ch] BYREF
  int32_t usrCurrentRp; // [xsp+48h] [xbp-68h] BYREF
  int32_t spendNum; // [xsp+4Ch] [xbp-64h] BYREF

  if ( (byte_4A5EC6A & 1) == 0 )
  {
    sub_1B885B0(&System_Action_bool__int__TypeInfo);
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&BalanceConfig_TypeInfo);
    sub_1B885B0(&CommonConfirmDialog_ClickDelegate_TypeInfo);
    sub_1B885B0(&int_TypeInfo);
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&object___TypeInfo);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&Method_RecoverItemComponent_CloseApRecovDlg__);
    sub_1B885B0(&Method_RecoverItemComponent_OnClickItem__);
    sub_1B885B0(&Method_RecoverItemComponent_closeNotificationDlg__);
    sub_1B885B0(&Method_RecoverItemComponent_spendItemDlg__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1B885B0(&StringLiteral_11130/*"RP_RECOVER_CONFIRM_MSG"*/);
    sub_1B885B0(&StringLiteral_3608/*"CMDSPELL_CURRENT_NUM"*/);
    sub_1B885B0(&StringLiteral_3751/*"COMMAND_SPELL_TXT"*/);
    sub_1B885B0(&StringLiteral_2123/*"AP_RECOVER_CONFIRM_MSG"*/);
    sub_1B885B0(&StringLiteral_11128/*"RP_FULL_MSG"*/);
    sub_1B885B0(&StringLiteral_14797/*"UNIT_INFO"*/);
    sub_1B885B0(&StringLiteral_2119/*"AP_ADD_CONFIRM_MSG"*/);
    sub_1B885B0(&StringLiteral_3757/*"COMMON_CONFIRM_DECIDE"*/);
    sub_1B885B0(&StringLiteral_3755/*"COMMON_CONFIRM_CANCEL"*/);
    sub_1B885B0(&StringLiteral_2120/*"AP_ADD_CONFIRM_MSG_OVER"*/);
    sub_1B885B0(&StringLiteral_2124/*"AP_RECOVER_CONFIRM_MSG_OVER"*/);
    sub_1B885B0(&StringLiteral_2121/*"AP_FULL_MSG"*/);
    sub_1B885B0(&StringLiteral_1/*""*/);
    sub_1B885B0(&StringLiteral_2129/*"AP_RECOVER_STONEPAY_WARNING_MSG"*/);
    byte_4A5EC6A = 1;
  }
  if ( !this->fields.isEnableSelect )
    return;
  dialog = (UnityEngine_Object_o *)this->fields.dialog;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  userEntity = UnityEngine_Object__op_Inequality(dialog, 0LL, 0LL);
  if ( (userEntity & 1) == 0 )
    return;
  v6 = this->fields.dialog;
  if ( !v6 )
    goto LABEL_140;
  if ( v6->fields.isClosed )
    return;
  v7 = (System_String_o *)StringLiteral_1/*""*/;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v8 = LocalizationManager__Get((System_String_o *)StringLiteral_14797/*"UNIT_INFO"*/, 0LL);
  spendNum = this->fields.spendNum;
  v12 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &spendNum, v9, v10, v11);
  userEntity = (__int64)System_String__Format(v8, v12, 0LL);
  v13 = (System_String_o *)userEntity;
  if ( this->fields.currentType == 1 )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    mText = (Il2CppObject *)LocalizationManager__Get((System_String_o *)StringLiteral_3751/*"COMMAND_SPELL_TXT"*/, 0LL);
    if ( this->fields.currentType == 1 )
    {
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v15 = LocalizationManager__Get((System_String_o *)StringLiteral_3608/*"CMDSPELL_CURRENT_NUM"*/, 0LL);
      spendNum = this->fields.spendNum;
      v19 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &spendNum, v16, v17, v18);
      v13 = System_String__Format(v15, v19, 0LL);
    }
  }
  else
  {
    itemNameLb = this->fields.itemNameLb;
    if ( !itemNameLb )
      goto LABEL_140;
    mText = (Il2CppObject *)itemNameLb->fields.mText;
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v21 = LocalizationManager__Get((System_String_o *)StringLiteral_3757/*"COMMON_CONFIRM_DECIDE"*/, 0LL);
  v22 = LocalizationManager__Get((System_String_o *)StringLiteral_3755/*"COMMON_CONFIRM_CANCEL"*/, 0LL);
  v23 = Method_RecoverItemComponent_OnClickItem__;
  if ( (*((_BYTE *)Method_RecoverItemComponent_OnClickItem__ + 83) & 2) != 0 )
    v23 = (_QWORD *)sub_1B885C8(Method_RecoverItemComponent_OnClickItem__);
  v24 = (System_Reflection_MethodBase_o *)sub_1B88594(v23, v23[4]);
  OverwriteAssetSoundName__PlaySystemSe(v24, 0, 0LL);
  if ( !this->fields.isAp )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v66 = LocalizationManager__Get((System_String_o *)StringLiteral_11130/*"RP_RECOVER_CONFIRM_MSG"*/, 0LL);
    userEntity = sub_1B88658(object___TypeInfo, 7LL);
    if ( !userEntity )
      goto LABEL_140;
    v69 = (System_Object_array *)userEntity;
    if ( mText )
    {
      userEntity = sub_1B886EC(mText, *(_QWORD *)(*(_QWORD *)userEntity + 64LL));
      if ( !userEntity )
        goto LABEL_141;
    }
    if ( v69->max_length )
    {
      v69->m_Items[0] = mText;
      sub_1B88554((ServantStatusBattleListViewItem_o *)v69->m_Items, (int32_t)mText, v67, v68);
      if ( v13 )
      {
        userEntity = sub_1B886EC(v13, v69->obj.klass->_1.element_class);
        if ( !userEntity )
          goto LABEL_141;
      }
      if ( v69->max_length > 1 )
      {
        v69->m_Items[1] = (Il2CppObject *)v13;
        sub_1B88554((ServantStatusBattleListViewItem_o *)&v69->m_Items[1], (int32_t)v13, v70, v71);
        spendNum = this->fields.recvRpNum;
        userEntity = j_il2cpp_value_box_0(int_TypeInfo, &spendNum, v72, v73, v74);
        v77 = (Il2CppObject *)userEntity;
        if ( userEntity )
        {
          userEntity = sub_1B886EC(userEntity, v69->obj.klass->_1.element_class);
          if ( !userEntity )
            goto LABEL_141;
        }
        if ( v69->max_length > 2 )
        {
          v69->m_Items[2] = v77;
          sub_1B88554((ServantStatusBattleListViewItem_o *)&v69->m_Items[2], (int32_t)v77, v75, v76);
          usrCurrentRp = this->fields.usrCurrentRp;
          userEntity = j_il2cpp_value_box_0(int_TypeInfo, &usrCurrentRp, v78, v79, v80);
          v83 = (Il2CppObject *)userEntity;
          if ( userEntity )
          {
            userEntity = sub_1B886EC(userEntity, v69->obj.klass->_1.element_class);
            if ( !userEntity )
              goto LABEL_141;
          }
          if ( v69->max_length > 3 )
          {
            v69->m_Items[3] = v83;
            sub_1B88554((ServantStatusBattleListViewItem_o *)&v69->m_Items[3], (int32_t)v83, v81, v82);
            usrMaxRp = this->fields.usrMaxRp;
            userEntity = j_il2cpp_value_box_0(int_TypeInfo, &usrMaxRp, v84, v85, v86);
            v89 = (Il2CppObject *)userEntity;
            if ( userEntity )
            {
              userEntity = sub_1B886EC(userEntity, v69->obj.klass->_1.element_class);
              if ( !userEntity )
                goto LABEL_141;
            }
            if ( v69->max_length > 4 )
            {
              v69->m_Items[4] = v89;
              sub_1B88554((ServantStatusBattleListViewItem_o *)&v69->m_Items[4], (int32_t)v89, v87, v88);
              recvSum = this->fields.recvSum;
              userEntity = j_il2cpp_value_box_0(int_TypeInfo, &recvSum, v90, v91, v92);
              v95 = (Il2CppObject *)userEntity;
              if ( userEntity )
              {
                userEntity = sub_1B886EC(userEntity, v69->obj.klass->_1.element_class);
                if ( !userEntity )
                  goto LABEL_141;
              }
              if ( v69->max_length > 5 )
              {
                v69->m_Items[5] = v95;
                sub_1B88554((ServantStatusBattleListViewItem_o *)&v69->m_Items[5], (int32_t)v95, v93, v94);
                v162 = this->fields.usrMaxRp;
                userEntity = j_il2cpp_value_box_0(int_TypeInfo, &v162, v96, v97, v98);
                v101 = (Il2CppObject *)userEntity;
                if ( userEntity )
                {
                  userEntity = sub_1B886EC(userEntity, v69->obj.klass->_1.element_class);
                  if ( !userEntity )
                    goto LABEL_141;
                }
                if ( v69->max_length > 6 )
                {
                  v69->m_Items[6] = v101;
                  sub_1B88554((ServantStatusBattleListViewItem_o *)&v69->m_Items[6], (int32_t)v101, v99, v100);
                  userEntity = (__int64)System_String__Format_61721540(v66, v69, 0LL);
                  if ( !this->fields.userEntity )
                    goto LABEL_140;
                  v102 = (System_String_o *)userEntity;
                  if ( UserGameEntity__getRp(this->fields.userEntity, 0LL) < this->fields.usrMaxRp )
                    goto LABEL_80;
                  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                  v151 = LocalizationManager__Get((System_String_o *)StringLiteral_11128/*"RP_FULL_MSG"*/, 0LL);
                  v152 = System_String__Format(v151, mText, 0LL);
                  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
                  v154 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
                  System_Action___ctor(
                    v154,
                    (Il2CppObject *)this,
                    Method_RecoverItemComponent_closeNotificationDlg__,
                    0LL);
                  if ( !Instance )
                    goto LABEL_140;
                  CommonUI__OpenNotificationDialog(
                    (CommonUI_o *)Instance,
                    (System_String_o *)StringLiteral_1/*""*/,
                    v152,
                    v154,
                    -1,
                    0,
                    0,
                    0,
                    1,
                    0,
                    1,
                    0,
                    0LL,
                    0.0,
                    0LL);
                  return;
                }
              }
            }
          }
        }
      }
    }
LABEL_139:
    sub_1B88814(userEntity, v5);
  }
  v25 = this->fields.recvSum;
  usrMaxAp = this->fields.usrMaxAp;
  if ( !this->fields.isAddAp )
  {
    if ( v25 <= usrMaxAp )
      v105 = (System_String_o **)&StringLiteral_2123/*"AP_RECOVER_CONFIRM_MSG"*/;
    else
      v105 = (System_String_o **)&StringLiteral_2124/*"AP_RECOVER_CONFIRM_MSG_OVER"*/;
    v106 = *v105;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v29 = LocalizationManager__Get(v106, 0LL);
    userEntity = sub_1B88658(object___TypeInfo, 8LL);
    if ( !userEntity )
      goto LABEL_140;
    v32 = (System_Object_array *)userEntity;
    if ( mText )
    {
      userEntity = sub_1B886EC(mText, *(_QWORD *)(*(_QWORD *)userEntity + 64LL));
      if ( !userEntity )
        goto LABEL_141;
    }
    if ( v32->max_length )
    {
      v32->m_Items[0] = mText;
      sub_1B88554((ServantStatusBattleListViewItem_o *)v32->m_Items, (int32_t)mText, v107, v108);
      if ( v13 )
      {
        userEntity = sub_1B886EC(v13, v32->obj.klass->_1.element_class);
        if ( !userEntity )
          goto LABEL_141;
      }
      if ( v32->max_length > 1 )
      {
        v32->m_Items[1] = (Il2CppObject *)v13;
        sub_1B88554((ServantStatusBattleListViewItem_o *)&v32->m_Items[1], (int32_t)v13, v109, v110);
        spendNum = this->fields.apRcvRate;
        userEntity = j_il2cpp_value_box_0(int_TypeInfo, &spendNum, v111, v112, v113);
        v116 = (Il2CppObject *)userEntity;
        if ( userEntity )
        {
          userEntity = sub_1B886EC(userEntity, v32->obj.klass->_1.element_class);
          if ( !userEntity )
            goto LABEL_141;
        }
        if ( v32->max_length > 2 )
        {
          v32->m_Items[2] = v116;
          sub_1B88554((ServantStatusBattleListViewItem_o *)&v32->m_Items[2], (int32_t)v116, v114, v115);
          usrCurrentRp = this->fields.recvApNum;
          userEntity = j_il2cpp_value_box_0(int_TypeInfo, &usrCurrentRp, v117, v118, v119);
          v122 = (Il2CppObject *)userEntity;
          if ( userEntity )
          {
            userEntity = sub_1B886EC(userEntity, v32->obj.klass->_1.element_class);
            if ( !userEntity )
              goto LABEL_141;
          }
          if ( v32->max_length > 3 )
          {
            v32->m_Items[3] = v122;
            sub_1B88554((ServantStatusBattleListViewItem_o *)&v32->m_Items[3], (int32_t)v122, v120, v121);
            usrMaxRp = this->fields.usrCurrentAp;
            userEntity = j_il2cpp_value_box_0(int_TypeInfo, &usrMaxRp, v123, v124, v125);
            v128 = (Il2CppObject *)userEntity;
            if ( userEntity )
            {
              userEntity = sub_1B886EC(userEntity, v32->obj.klass->_1.element_class);
              if ( !userEntity )
                goto LABEL_141;
            }
            if ( v32->max_length > 4 )
            {
              v32->m_Items[4] = v128;
              sub_1B88554((ServantStatusBattleListViewItem_o *)&v32->m_Items[4], (int32_t)v128, v126, v127);
              recvSum = this->fields.usrMaxAp;
              userEntity = j_il2cpp_value_box_0(int_TypeInfo, &recvSum, v129, v130, v131);
              v134 = (Il2CppObject *)userEntity;
              if ( userEntity )
              {
                userEntity = sub_1B886EC(userEntity, v32->obj.klass->_1.element_class);
                if ( !userEntity )
                  goto LABEL_141;
              }
              if ( v32->max_length > 5 )
              {
                v32->m_Items[5] = v134;
                sub_1B88554((ServantStatusBattleListViewItem_o *)&v32->m_Items[5], (int32_t)v134, v132, v133);
                v162 = this->fields.recvSum;
                userEntity = j_il2cpp_value_box_0(int_TypeInfo, &v162, v135, v136, v137);
                v140 = (Il2CppObject *)userEntity;
                if ( userEntity )
                {
                  userEntity = sub_1B886EC(userEntity, v32->obj.klass->_1.element_class);
                  if ( !userEntity )
                    goto LABEL_141;
                }
                if ( v32->max_length > 6 )
                {
                  v32->m_Items[6] = v140;
                  sub_1B88554((ServantStatusBattleListViewItem_o *)&v32->m_Items[6], (int32_t)v140, v138, v139);
                  v161 = this->fields.usrMaxAp;
                  userEntity = j_il2cpp_value_box_0(int_TypeInfo, &v161, v141, v142, v143);
                  v64 = (Il2CppObject *)userEntity;
                  if ( userEntity )
                  {
                    userEntity = sub_1B886EC(userEntity, v32->obj.klass->_1.element_class);
                    if ( !userEntity )
                      goto LABEL_141;
                  }
                  if ( v32->max_length > 7 )
                  {
                    v32->m_Items[7] = v64;
                    v65 = (ServantStatusBattleListViewItem_o *)&v32->m_Items[7];
                    goto LABEL_115;
                  }
                }
              }
            }
          }
        }
      }
    }
    goto LABEL_139;
  }
  if ( v25 <= usrMaxAp )
    v27 = (System_String_o **)&StringLiteral_2119/*"AP_ADD_CONFIRM_MSG"*/;
  else
    v27 = (System_String_o **)&StringLiteral_2120/*"AP_ADD_CONFIRM_MSG_OVER"*/;
  v28 = *v27;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v29 = LocalizationManager__Get(v28, 0LL);
  userEntity = sub_1B88658(object___TypeInfo, 7LL);
  if ( !userEntity )
    goto LABEL_140;
  v32 = (System_Object_array *)userEntity;
  if ( mText )
  {
    userEntity = sub_1B886EC(mText, *(_QWORD *)(*(_QWORD *)userEntity + 64LL));
    if ( !userEntity )
      goto LABEL_141;
  }
  if ( !v32->max_length )
    goto LABEL_139;
  v32->m_Items[0] = mText;
  sub_1B88554((ServantStatusBattleListViewItem_o *)v32->m_Items, (int32_t)mText, v30, v31);
  if ( v13 )
  {
    userEntity = sub_1B886EC(v13, v32->obj.klass->_1.element_class);
    if ( !userEntity )
      goto LABEL_141;
  }
  if ( v32->max_length <= 1 )
    goto LABEL_139;
  v32->m_Items[1] = (Il2CppObject *)v13;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v32->m_Items[1], (int32_t)v13, v33, v34);
  spendNum = this->fields.recvApNum;
  userEntity = j_il2cpp_value_box_0(int_TypeInfo, &spendNum, v35, v36, v37);
  v40 = (Il2CppObject *)userEntity;
  if ( userEntity )
  {
    userEntity = sub_1B886EC(userEntity, v32->obj.klass->_1.element_class);
    if ( !userEntity )
      goto LABEL_141;
  }
  if ( v32->max_length <= 2 )
    goto LABEL_139;
  v32->m_Items[2] = v40;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v32->m_Items[2], (int32_t)v40, v38, v39);
  usrCurrentRp = this->fields.usrCurrentAp;
  userEntity = j_il2cpp_value_box_0(int_TypeInfo, &usrCurrentRp, v41, v42, v43);
  v46 = (Il2CppObject *)userEntity;
  if ( userEntity )
  {
    userEntity = sub_1B886EC(userEntity, v32->obj.klass->_1.element_class);
    if ( !userEntity )
      goto LABEL_141;
  }
  if ( v32->max_length <= 3 )
    goto LABEL_139;
  v32->m_Items[3] = v46;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v32->m_Items[3], (int32_t)v46, v44, v45);
  usrMaxRp = this->fields.usrMaxAp;
  userEntity = j_il2cpp_value_box_0(int_TypeInfo, &usrMaxRp, v47, v48, v49);
  v52 = (Il2CppObject *)userEntity;
  if ( userEntity )
  {
    userEntity = sub_1B886EC(userEntity, v32->obj.klass->_1.element_class);
    if ( !userEntity )
      goto LABEL_141;
  }
  if ( v32->max_length <= 4 )
    goto LABEL_139;
  v32->m_Items[4] = v52;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v32->m_Items[4], (int32_t)v52, v50, v51);
  recvSum = this->fields.recvSum;
  userEntity = j_il2cpp_value_box_0(int_TypeInfo, &recvSum, v53, v54, v55);
  v58 = (Il2CppObject *)userEntity;
  if ( userEntity )
  {
    userEntity = sub_1B886EC(userEntity, v32->obj.klass->_1.element_class);
    if ( !userEntity )
      goto LABEL_141;
  }
  if ( v32->max_length <= 5 )
    goto LABEL_139;
  v32->m_Items[5] = v58;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v32->m_Items[5], (int32_t)v58, v56, v57);
  v162 = this->fields.usrMaxAp;
  userEntity = j_il2cpp_value_box_0(int_TypeInfo, &v162, v59, v60, v61);
  v64 = (Il2CppObject *)userEntity;
  if ( userEntity )
  {
    userEntity = sub_1B886EC(userEntity, v32->obj.klass->_1.element_class);
    if ( !userEntity )
    {
LABEL_141:
      v160 = sub_1B88830(userEntity);
      sub_1B886D8(v160, 0LL);
    }
  }
  if ( v32->max_length <= 6 )
    goto LABEL_139;
  v32->m_Items[6] = v64;
  v65 = (ServantStatusBattleListViewItem_o *)&v32->m_Items[6];
LABEL_115:
  sub_1B88554(v65, (int32_t)v64, v62, v63);
  v102 = System_String__Format_61721540(v29, v32, 0LL);
  userEntity = (__int64)this->fields.userEntity;
  if ( !userEntity )
    goto LABEL_140;
  if ( UserGameEntity__getAct((UserGameEntity_o *)userEntity, 0LL) < this->fields.usrMaxAp )
  {
    if ( this->fields.currentType == 2 )
    {
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v144 = LocalizationManager__Get((System_String_o *)StringLiteral_2129/*"AP_RECOVER_STONEPAY_WARNING_MSG"*/, 0LL);
      v145 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v146 = (CommonConfirmDialog_ClickDelegate_o *)sub_1B887FC(CommonConfirmDialog_ClickDelegate_TypeInfo);
      CommonConfirmDialog_ClickDelegate___ctor(
        v146,
        (Il2CppObject *)this,
        Method_RecoverItemComponent_spendItemDlg__,
        0LL);
      userEntity = (__int64)BalanceConfig_TypeInfo;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      if ( v145 )
      {
        CommonUI__OpenConfirmDecideDlgAddMsgFrame(
          (CommonUI_o *)v145,
          v7,
          v102,
          v144,
          v21,
          v22,
          v146,
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
LABEL_140:
      sub_1B8880C(userEntity, v5);
    }
    if ( this->fields.isAddAp || this->fields.apRcvRate != 100 || this->fields.spendNum >= 2 )
    {
      v155 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      targetId = this->fields.targetId;
      needAp = this->fields.needAp;
      v158 = (CommonUI_o *)v155;
      v159 = (System_Action_bool__int__o *)sub_1B887FC(System_Action_bool__int__TypeInfo);
      System_Action_bool__int____ctor(v159, (Il2CppObject *)this, Method_RecoverItemComponent_CloseApRecovDlg__, 0LL);
      if ( !v158 )
        goto LABEL_140;
      CommonUI__OpenApRecoverConfirmDlg(v158, targetId, needAp, v159, 0LL);
      return;
    }
LABEL_80:
    v103 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v104 = (CommonConfirmDialog_ClickDelegate_o *)sub_1B887FC(CommonConfirmDialog_ClickDelegate_TypeInfo);
    CommonConfirmDialog_ClickDelegate___ctor(
      v104,
      (Il2CppObject *)this,
      Method_RecoverItemComponent_spendItemDlg__,
      0LL);
    userEntity = (__int64)BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    if ( v103 )
    {
      CommonUI__OpenConfirmDecideDlg(
        (CommonUI_o *)v103,
        v7,
        v102,
        v21,
        v22,
        v104,
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
    goto LABEL_140;
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v147 = LocalizationManager__Get((System_String_o *)StringLiteral_2121/*"AP_FULL_MSG"*/, 0LL);
  v148 = System_String__Format(v147, mText, 0LL);
  v149 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v150 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
  System_Action___ctor(v150, (Il2CppObject *)this, Method_RecoverItemComponent_closeNotificationDlg__, 0LL);
  if ( !v149 )
    goto LABEL_140;
  CommonUI__OpenNotificationDialog(
    (CommonUI_o *)v149,
    (System_String_o *)StringLiteral_1/*""*/,
    v148,
    v150,
    -1,
    0,
    0,
    0,
    1,
    0,
    0,
    0,
    0LL,
    0.0,
    0LL);
}


void __fastcall RecoverItemComponent___AttachStoneCountRefreshComponent_b__38_0(
        RecoverItemComponent_o *this,
        int32_t stoneCount,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
  UILabel_o *currentNumLb; // x19
  Il2CppObject *v8; // x0
  System_String_o *v9; // x0
  __int64 v10; // x1
  int32_t v11; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4A5EC70 & 1) == 0 )
  {
    sub_1B885B0(&int_TypeInfo);
    sub_1B885B0(&StringLiteral_24971/*"{0:N0}"*/);
    byte_4A5EC70 = 1;
  }
  currentNumLb = this->fields.currentNumLb;
  v11 = stoneCount;
  v8 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v11, method, v3, v4);
  v9 = System_String__Format((System_String_o *)StringLiteral_24971/*"{0:N0}"*/, v8, 0LL);
  if ( !currentNumLb )
    sub_1B8880C(v9, v10);
  UILabel__set_text(currentNumLb, v9, 0LL);
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

  if ( (byte_4A5EC65 & 1) == 0 )
  {
    sub_1B885B0(&RecoverItemComponent_CallbackFunc_TypeInfo);
    byte_4A5EC65 = 1;
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
    v9 = sub_1BC3AA0(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_1B88ACC(v8);
  RecoverItemComponent__remove_callbackFunc(v11, v12, v13);
}


void __fastcall RecoverItemComponent__closeNotificationDlg(RecoverItemComponent_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v3; // x1

  if ( (byte_4A5EC6E & 1) == 0 )
  {
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4A5EC6E = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1B8880C(0LL, v3);
  CommonUI__CloseNotificationDialog((CommonUI_o *)Instance, 0LL);
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

  if ( (byte_4A5EC66 & 1) == 0 )
  {
    sub_1B885B0(&RecoverItemComponent_CallbackFunc_TypeInfo);
    byte_4A5EC66 = 1;
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
    v9 = sub_1BC3AA0(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_1B88ACC(v8);
  RecoverItemComponent__AttachStoneCountRefreshComponent(v11, v12);
}


void __fastcall RecoverItemComponent__setAPRecvItemInfo(
        RecoverItemComponent_o *this,
        RecoverEntity_o *data,
        int32_t needAp,
        RecoverDlgComponent_o *dlg,
        RecoverItemComponent_CallbackFunc_o *callback,
        const MethodInfo *method)
{
  RecoverItemComponent_o *v10; // x19
  int32_t targetId; // w8
  int32_t v12; // w2
  int32_t v13; // w3
  UserGameEntity_o *SelfUserGame; // x0
  RecoverItemComponent_o **p_userEntity; // x23
  int32_t v16; // w2
  int32_t v17; // w3
  struct UserGameEntity_o *userEntity; // x8
  int32_t actMax; // w8
  unsigned int *p_spendNum; // x20
  UILabel_o *currentInfoLb; // x24
  UILabel_o *spendInfoLb; // x24
  int32_t currentType; // w8
  RecoverItemComponent_o *v24; // x21
  RecoverItemComponent_o *v25; // x22
  __int64 v26; // x2
  __int64 v27; // x3
  __int64 v28; // x4
  int recvTarget; // w24
  UILabel_o *v30; // x21
  Il2CppObject *v31; // x0
  UILabel_o *v32; // x21
  const MethodInfo *v33; // x1
  System_String_o *v34; // x20
  __int64 v35; // x2
  __int64 v36; // x3
  __int64 v37; // x4
  Il2CppObject *v38; // x0
  System_String_o *v39; // x0
  UILabel_o *v40; // x20
  Il2CppObject *v41; // x21
  System_String_o *v42; // x22
  __int64 v43; // x2
  __int64 v44; // x3
  __int64 v45; // x4
  Il2CppObject *v46; // x23
  __int64 v47; // x2
  __int64 v48; // x3
  __int64 v49; // x4
  Il2CppObject *v50; // x0
  bool v51; // cc
  int v52; // w8
  UILabel_o *v53; // x22
  UILabel_o *v54; // x22
  Il2CppObject *v55; // x0
  CommandSpellEntity_o *v56; // x22
  int32_t type; // w8
  struct ItemIconComponent_o *itemIconInfo; // x27
  float v59; // s0
  int v60; // w8
  float usrMaxAp; // s8
  float v62; // s9
  float v63; // s8
  unsigned int v64; // w9
  unsigned int v65; // w8
  System_String_o *v66; // x23
  __int64 v67; // x2
  __int64 v68; // x3
  __int64 v69; // x4
  Il2CppObject *v70; // x0
  System_String_o *v71; // x0
  UILabel_o *itemDetailLb; // x23
  Il2CppObject *v73; // x24
  System_String_o *v74; // x25
  __int64 v75; // x2
  __int64 v76; // x3
  __int64 v77; // x4
  Il2CppObject *v78; // x26
  __int64 v79; // x2
  __int64 v80; // x3
  __int64 v81; // x4
  Il2CppObject *v82; // x0
  int backSprite; // w22
  float v84; // s8
  float v85; // s8
  unsigned int v86; // w9
  unsigned int v87; // w8
  ItemEntity_o *RecvItemData; // x0
  ItemEntity_o *v89; // x24
  __int64 v90; // x2
  __int64 v91; // x3
  __int64 v92; // x4
  int32_t num; // w28
  int32_t v94; // w8
  BalanceConfig_c *v95; // x0
  float v96; // s8
  int v97; // w8
  int v98; // s0
  float v99; // s9
  float v100; // s8
  int v101; // w8
  float v102; // s8
  float v103; // s8
  int32_t v104; // w11
  int32_t v105; // w12
  unsigned int v106; // w8
  System_String_o *v107; // x23
  __int64 v108; // x2
  __int64 v109; // x3
  __int64 v110; // x4
  Il2CppObject *v111; // x0
  System_String_o *v112; // x0
  UILabel_o *v113; // x23
  Il2CppObject *v114; // x25
  System_String_o *v115; // x26
  __int64 v116; // x2
  __int64 v117; // x3
  __int64 v118; // x4
  Il2CppObject *v119; // x27
  __int64 v120; // x2
  __int64 v121; // x3
  __int64 v122; // x4
  Il2CppObject *v123; // x0
  int value; // w23
  float v125; // s8
  float v126; // s8
  unsigned int v127; // w8
  System_String_o *v128; // x21
  __int64 v129; // x2
  __int64 v130; // x3
  __int64 v131; // x4
  Il2CppObject *v132; // x0
  System_String_o *v133; // x0
  UILabel_o *v134; // x21
  Il2CppObject *v135; // x23
  System_String_o *v136; // x24
  __int64 v137; // x2
  __int64 v138; // x3
  __int64 v139; // x4
  Il2CppObject *v140; // x0
  UILabel_o *v141; // x21
  Il2CppObject *v142; // x0
  UILabel_o *v143; // x21
  int v144; // w8
  System_String_o *v145; // x21
  __int64 v146; // x2
  __int64 v147; // x3
  __int64 v148; // x4
  Il2CppObject *v149; // x0
  System_String_o *v150; // x0
  UILabel_o *v151; // x21
  Il2CppObject *v152; // x22
  System_String_o *v153; // x23
  __int64 v154; // x2
  __int64 v155; // x3
  __int64 v156; // x4
  Il2CppObject *v157; // x0
  UILabel_o *currentNumLb; // x21
  UILabel_o *spendNumLb; // x21
  char v160; // w9
  int32_t v161; // [xsp+4h] [xbp-8Ch] BYREF
  int32_t recvApNum; // [xsp+8h] [xbp-88h] BYREF
  int32_t apRcvRate; // [xsp+Ch] [xbp-84h] BYREF
  int32_t spendNum; // [xsp+10h] [xbp-80h] BYREF
  int32_t CommandSpell; // [xsp+14h] [xbp-7Ch] BYREF
  UserItemEntity_o *entity; // [xsp+18h] [xbp-78h] BYREF

  v10 = this;
  if ( (byte_4A5EC67 & 1) == 0 )
  {
    sub_1B885B0(&BalanceConfig_TypeInfo);
    sub_1B885B0(&Method_DataManager_GetMasterData_CommandSpellMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_ItemMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_StoneShopMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_UserItemMaster___);
    sub_1B885B0(&Method_DataMasterBase_CommandSpellMaster__CommandSpellEntity__int__GetEntity__);
    sub_1B885B0(&Method_DataMasterBase_StoneShopMaster__StoneShopEntity__int__GetEntity__);
    sub_1B885B0(&int_TypeInfo);
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1B885B0(&StringLiteral_3608/*"CMDSPELL_CURRENT_NUM"*/);
    sub_1B885B0(&StringLiteral_2046/*"ADD_RECOVER_CMDSPELL_TXT"*/);
    sub_1B885B0(&StringLiteral_3610/*"CMDSPELL_SPEND_NUM_TXT"*/);
    sub_1B885B0(&StringLiteral_24971/*"{0:N0}"*/);
    sub_1B885B0(&StringLiteral_919/*"-"*/);
    sub_1B885B0(&StringLiteral_14797/*"UNIT_INFO"*/);
    sub_1B885B0(&StringLiteral_12193/*"SPEND_NUM_TXT"*/);
    sub_1B885B0(&StringLiteral_3949/*"CURRENT_NUM_TXT"*/);
    sub_1B885B0(&StringLiteral_2047/*"ADD_RECOVER_NUM_TXT"*/);
    sub_1B885B0(&StringLiteral_2126/*"AP_RECOVER_NUM_TXT"*/);
    this = (RecoverItemComponent_o *)sub_1B885B0(&StringLiteral_3609/*"CMDSPELL_CURRENT_NUM_TXT"*/);
    byte_4A5EC67 = 1;
  }
  entity = 0LL;
  CommandSpell = 0;
  if ( !data )
    goto LABEL_151;
  v10->fields.currentType = data->fields.recoverType;
  v10->fields.recvTarget = data->fields.target;
  targetId = data->fields.targetId;
  v10->fields.isEnableSelect = 0;
  v10->fields.targetId = targetId;
  v10->fields.dialog = dlg;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v10->fields.dialog, (int32_t)dlg, needAp, (int32_t)dlg);
  v10->fields.callbackFunc = callback;
  v10->fields.needAp = needAp;
  *(_WORD *)&v10->fields.isAp = 1;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v10->fields.callbackFunc, (int32_t)callback, v12, v13);
  this = (RecoverItemComponent_o *)v10->fields.maskImg;
  if ( !this )
    goto LABEL_151;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  v10->fields.userEntity = SelfUserGame;
  p_userEntity = (RecoverItemComponent_o **)&v10->fields.userEntity;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v10->fields.userEntity, (int32_t)SelfUserGame, v16, v17);
  this = (RecoverItemComponent_o *)v10->fields.userEntity;
  if ( !this )
    goto LABEL_151;
  this = (RecoverItemComponent_o *)UserGameEntity__getAct((UserGameEntity_o *)this, 0LL);
  userEntity = v10->fields.userEntity;
  v10->fields.usrCurrentAp = (int)this;
  if ( !userEntity )
    goto LABEL_151;
  actMax = userEntity->fields.actMax;
  v10->fields.spendNum = 1;
  p_spendNum = (unsigned int *)&v10->fields.spendNum;
  this = (RecoverItemComponent_o *)v10->fields.itemNameLb;
  v10->fields.usrMaxAp = actMax;
  v10->fields.recvApNum = actMax;
  v10->fields.apRcvRate = 100;
  if ( !this )
    goto LABEL_151;
  UILabel__set_text((UILabel_o *)this, (System_String_o *)StringLiteral_919/*"-"*/, 0LL);
  this = (RecoverItemComponent_o *)v10->fields.currentNumLb;
  if ( !this )
    goto LABEL_151;
  UILabel__set_text((UILabel_o *)this, (System_String_o *)StringLiteral_919/*"-"*/, 0LL);
  this = (RecoverItemComponent_o *)v10->fields.spendNumLb;
  if ( !this )
    goto LABEL_151;
  UILabel__set_text((UILabel_o *)this, (System_String_o *)StringLiteral_919/*"-"*/, 0LL);
  this = (RecoverItemComponent_o *)v10->fields.itemDetailLb;
  if ( !this )
    goto LABEL_151;
  UILabel__set_text((UILabel_o *)this, (System_String_o *)StringLiteral_919/*"-"*/, 0LL);
  currentInfoLb = v10->fields.currentInfoLb;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  this = (RecoverItemComponent_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3949/*"CURRENT_NUM_TXT"*/, 0LL);
  if ( !currentInfoLb )
    goto LABEL_151;
  UILabel__set_text(currentInfoLb, (System_String_o *)this, 0LL);
  spendInfoLb = v10->fields.spendInfoLb;
  this = (RecoverItemComponent_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12193/*"SPEND_NUM_TXT"*/, 0LL);
  if ( !spendInfoLb )
    goto LABEL_151;
  UILabel__set_text(spendInfoLb, (System_String_o *)this, 0LL);
  currentType = v10->fields.currentType;
  if ( currentType == 1 )
  {
    this = (RecoverItemComponent_o *)v10->fields.itemIconInfo;
    if ( !this )
      goto LABEL_151;
    this = (RecoverItemComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !this )
      goto LABEL_151;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
    this = (RecoverItemComponent_o *)v10->fields.cmdSpellBg;
    if ( !this )
      goto LABEL_151;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
    v53 = v10->fields.currentInfoLb;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    this = (RecoverItemComponent_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3609/*"CMDSPELL_CURRENT_NUM_TXT"*/, 0LL);
    if ( !v53 )
      goto LABEL_151;
    UILabel__set_text(v53, (System_String_o *)this, 0LL);
    v54 = v10->fields.spendInfoLb;
    this = (RecoverItemComponent_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3610/*"CMDSPELL_SPEND_NUM_TXT"*/, 0LL);
    if ( !v54 )
      goto LABEL_151;
    UILabel__set_text(v54, (System_String_o *)this, 0LL);
    this = (RecoverItemComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !this )
      goto LABEL_151;
    this = (RecoverItemComponent_o *)DataManager__GetMasterData_object_(
                                       (DataManager_o *)this,
                                       (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_CommandSpellMaster___);
    if ( !this )
      goto LABEL_151;
    v55 = DataMasterBase_object__object__int___GetEntity(
            (DataMasterBase_TMaster__TEntity__PKType__o *)this,
            v10->fields.targetId,
            (const MethodInfo_311D934 *)Method_DataMasterBase_CommandSpellMaster__CommandSpellEntity__int__GetEntity__);
    if ( !v55 )
      goto LABEL_150;
    v56 = (CommandSpellEntity_o *)v55;
    this = (RecoverItemComponent_o *)v10->fields.cmdSpellIcon;
    if ( !this )
      goto LABEL_151;
    CommandSpellIconComponent__SetData((CommandSpellIconComponent_o *)this, v10->fields.userEntity, 0LL);
    this = (RecoverItemComponent_o *)v10->fields.itemNameLb;
    if ( !this )
      goto LABEL_151;
    UILabel__set_text((UILabel_o *)this, v56->fields.name, 0LL);
    this = *p_userEntity;
    if ( !*p_userEntity )
      goto LABEL_151;
    CommandSpell = UserGameEntity__getCommandSpell((UserGameEntity_o *)this, 0LL);
    *p_spendNum = v56->fields.consume;
    this = (RecoverItemComponent_o *)CommandSpellEntity__getValues(v56, 0LL);
    if ( !this )
      goto LABEL_151;
    if ( LODWORD(this->fields.m_CancellationTokenSource) )
    {
      type = v56->fields.type;
      itemIconInfo = this->fields.itemIconInfo;
      if ( type == 3 )
      {
        if ( !itemIconInfo )
          goto LABEL_151;
        if ( !LODWORD(itemIconInfo->fields.m_CancellationTokenSource) )
          goto LABEL_152;
        v59 = (float)((float)SLODWORD(itemIconInfo->fields.backSprite) / 1000.0) * 100.0;
        v60 = (int)v59;
        if ( v59 == INFINITY )
          v60 = 0x80000000;
        v10->fields.apRcvRate = v60;
        usrMaxAp = (float)v10->fields.usrMaxAp;
        v62 = (float)SLODWORD(itemIconInfo->fields.backSprite) / 1000.0;
        if ( !byte_4A5638E )
        {
          sub_1B885B0(&System_Math_TypeInfo);
          byte_4A5638E = 1;
        }
        v63 = v62 * usrMaxAp;
        if ( !System_Math_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
        v64 = vcvtps_s32_f32(v63);
        if ( ceilf(v63) == INFINITY )
          v65 = 0x80000000;
        else
          v65 = v64;
        v10->fields.recvApNum = v65;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v66 = LocalizationManager__Get((System_String_o *)StringLiteral_3608/*"CMDSPELL_CURRENT_NUM"*/, 0LL);
        spendNum = v10->fields.spendNum;
        v70 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &spendNum, v67, v68, v69);
        v71 = System_String__Format(v66, v70, 0LL);
        itemDetailLb = v10->fields.itemDetailLb;
        v73 = (Il2CppObject *)v71;
        v74 = LocalizationManager__Get((System_String_o *)StringLiteral_2126/*"AP_RECOVER_NUM_TXT"*/, 0LL);
        apRcvRate = v10->fields.apRcvRate;
        v78 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &apRcvRate, v75, v76, v77);
        recvApNum = v10->fields.recvApNum;
        v82 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &recvApNum, v79, v80, v81);
        this = (RecoverItemComponent_o *)System_String__Format_61721472(v74, v73, v78, v82, 0LL);
        if ( !itemDetailLb )
          goto LABEL_151;
        UILabel__set_text(itemDetailLb, (System_String_o *)this, 0LL);
        type = v56->fields.type;
      }
      if ( type != 4 )
      {
LABEL_143:
        currentNumLb = v10->fields.currentNumLb;
        this = (RecoverItemComponent_o *)System_Int32__ToString((int32_t)&CommandSpell, 0LL);
        if ( currentNumLb )
        {
          UILabel__set_text(currentNumLb, (System_String_o *)this, 0LL);
          spendNumLb = v10->fields.spendNumLb;
          this = (RecoverItemComponent_o *)System_Int32__ToString((int)v10 + 128, 0LL);
          if ( spendNumLb )
          {
            UILabel__set_text(spendNumLb, (System_String_o *)this, 0LL);
            v51 = CommandSpell < v10->fields.spendNum;
            v52 = v10->fields.recvApNum + v10->fields.usrCurrentAp;
            goto LABEL_146;
          }
        }
        goto LABEL_151;
      }
      if ( !itemIconInfo )
        goto LABEL_151;
      if ( LODWORD(itemIconInfo->fields.m_CancellationTokenSource) )
      {
        backSprite = (int)itemIconInfo->fields.backSprite;
        if ( needAp < 1 )
        {
          v87 = *p_spendNum;
        }
        else
        {
          v84 = (float)(needAp - v10->fields.usrCurrentAp) / (float)backSprite;
          if ( !byte_4A5638E )
          {
            sub_1B885B0(&System_Math_TypeInfo);
            byte_4A5638E = 1;
          }
          v85 = fmaxf(v84, 1.0);
          if ( !System_Math_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
          v86 = vcvtps_s32_f32(v85);
          if ( ceilf(v85) == INFINITY )
            v87 = 0x80000000;
          else
            v87 = v86;
          *p_spendNum = v87;
        }
        v10->fields.recvApNum = v87 * backSprite;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v145 = LocalizationManager__Get((System_String_o *)StringLiteral_3608/*"CMDSPELL_CURRENT_NUM"*/, 0LL);
        spendNum = v10->fields.spendNum;
        v149 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &spendNum, v146, v147, v148);
        v150 = System_String__Format(v145, v149, 0LL);
        v151 = v10->fields.itemDetailLb;
        v152 = (Il2CppObject *)v150;
        v153 = LocalizationManager__Get((System_String_o *)StringLiteral_2046/*"ADD_RECOVER_CMDSPELL_TXT"*/, 0LL);
        apRcvRate = v10->fields.recvApNum;
        v157 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &apRcvRate, v154, v155, v156);
        this = (RecoverItemComponent_o *)System_String__Format_61721404(v153, v152, v157, 0LL);
        if ( !v151 )
          goto LABEL_151;
        UILabel__set_text(v151, (System_String_o *)this, 0LL);
        v10->fields.isAddAp = 1;
        goto LABEL_143;
      }
    }
LABEL_152:
    sub_1B88814(this, data);
  }
  if ( currentType == 3 )
  {
    this = (RecoverItemComponent_o *)v10->fields.itemIconInfo;
    if ( this )
    {
      this = (RecoverItemComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
      if ( this )
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
        this = (RecoverItemComponent_o *)v10->fields.cmdSpellBg;
        if ( this )
        {
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
          RecvItemData = RecoverEntity__getRecvItemData(data, 0LL);
          if ( !RecvItemData )
            goto LABEL_150;
          v89 = RecvItemData;
          this = (RecoverItemComponent_o *)v10->fields.itemIconInfo;
          if ( this )
          {
            ItemIconComponent__SetItemImage_38142580(
              (ItemIconComponent_o *)this,
              v89->fields.imageId,
              v89->fields.bgImageId,
              v89->fields.type,
              0,
              0LL);
            this = (RecoverItemComponent_o *)v10->fields.itemIconInfo;
            if ( this )
            {
              this = (RecoverItemComponent_o *)UnityEngine_Component__get_gameObject(
                                                 (UnityEngine_Component_o *)this,
                                                 0LL);
              if ( this )
              {
                UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
                this = (RecoverItemComponent_o *)v10->fields.itemNameLb;
                if ( this )
                {
                  UILabel__set_text((UILabel_o *)this, v89->fields.name, 0LL);
                  *p_spendNum = 1;
                  this = (RecoverItemComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
                  if ( this )
                  {
                    this = (RecoverItemComponent_o *)DataManager__GetMasterData_object_(
                                                       (DataManager_o *)this,
                                                       (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_UserItemMaster___);
                    if ( *p_userEntity )
                    {
                      if ( this )
                      {
                        this = (RecoverItemComponent_o *)UserItemMaster__TryGetEntity(
                                                           (UserItemMaster_o *)this,
                                                           &entity,
                                                           *(_QWORD *)&(*p_userEntity)->fields.m_CachedPtr,
                                                           v10->fields.targetId,
                                                           0LL);
                        if ( ((unsigned __int8)this & 1) != 0 )
                        {
                          if ( !entity )
                            goto LABEL_151;
                          num = entity->fields.num;
                        }
                        else
                        {
                          num = 0;
                        }
                        v94 = v89->fields.type;
                        if ( v94 == 3 )
                        {
                          v95 = BalanceConfig_TypeInfo;
                          if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
                          {
                            j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
                            v95 = BalanceConfig_TypeInfo;
                          }
                          v10->fields.spendNum = v95->static_fields->SpendApRecvItemNum;
                          v96 = (float)v89->fields.value / 1000.0;
                          if ( (float)(v96 * 100.0) == INFINITY )
                            v97 = 0x80000000;
                          else
                            v97 = (int)(float)(v96 * 100.0);
                          v98 = v10->fields.usrMaxAp;
                          v10->fields.apRcvRate = v97;
                          v99 = (float)v98;
                          if ( !byte_4A5638E )
                          {
                            sub_1B885B0(&System_Math_TypeInfo);
                            byte_4A5638E = 1;
                          }
                          v100 = v96 * v99;
                          if ( !System_Math_TypeInfo->_2.cctor_finished )
                            j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
                          v101 = vcvtps_s32_f32(v100);
                          if ( ceilf(v100) == INFINITY )
                            v101 = 0x80000000;
                          v10->fields.recvApNum = v101;
                          if ( needAp >= 1 )
                          {
                            v102 = (float)(needAp - v10->fields.usrCurrentAp) / (float)v101;
                            if ( !byte_4A5638E )
                            {
                              sub_1B885B0(&System_Math_TypeInfo);
                              byte_4A5638E = 1;
                            }
                            v103 = fmaxf(v102, 1.0);
                            if ( !System_Math_TypeInfo->_2.cctor_finished )
                              j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
                            v104 = v10->fields.apRcvRate;
                            v105 = v10->fields.recvApNum;
                            v106 = vcvtps_s32_f32(v103);
                            if ( ceilf(v103) == INFINITY )
                              v106 = 0x80000000;
                            v10->fields.spendNum = v106;
                            v10->fields.apRcvRate = v104 * v106;
                            v10->fields.recvApNum = v105 * v106;
                          }
                          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                          v107 = LocalizationManager__Get((System_String_o *)StringLiteral_14797/*"UNIT_INFO"*/, 0LL);
                          spendNum = v10->fields.spendNum;
                          v111 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &spendNum, v108, v109, v110);
                          v112 = System_String__Format(v107, v111, 0LL);
                          v113 = v10->fields.itemDetailLb;
                          v114 = (Il2CppObject *)v112;
                          v115 = LocalizationManager__Get((System_String_o *)StringLiteral_2126/*"AP_RECOVER_NUM_TXT"*/, 0LL);
                          apRcvRate = v10->fields.apRcvRate;
                          v119 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &apRcvRate, v116, v117, v118);
                          recvApNum = v10->fields.recvApNum;
                          v123 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &recvApNum, v120, v121, v122);
                          this = (RecoverItemComponent_o *)System_String__Format_61721472(v115, v114, v119, v123, 0LL);
                          if ( !v113 )
                            goto LABEL_151;
                          UILabel__set_text(v113, (System_String_o *)this, 0LL);
                          v94 = v89->fields.type;
                        }
                        if ( v94 == 4 )
                        {
                          value = v89->fields.value;
                          if ( needAp < 1 )
                          {
                            *p_spendNum = 1;
                          }
                          else
                          {
                            v125 = (float)(needAp - v10->fields.usrCurrentAp) / (float)value;
                            if ( !byte_4A5638E )
                            {
                              sub_1B885B0(&System_Math_TypeInfo);
                              byte_4A5638E = 1;
                            }
                            v126 = fmaxf(v125, 1.0);
                            if ( !System_Math_TypeInfo->_2.cctor_finished )
                              j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
                            v127 = vcvtps_s32_f32(v126);
                            if ( ceilf(v126) == INFINITY )
                              v127 = 0x80000000;
                            *p_spendNum = v127;
                            value *= v127;
                          }
                          v10->fields.recvApNum = value;
                          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                          v128 = LocalizationManager__Get((System_String_o *)StringLiteral_14797/*"UNIT_INFO"*/, 0LL);
                          spendNum = v10->fields.spendNum;
                          v132 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &spendNum, v129, v130, v131);
                          v133 = System_String__Format(v128, v132, 0LL);
                          v134 = v10->fields.itemDetailLb;
                          v135 = (Il2CppObject *)v133;
                          v136 = LocalizationManager__Get((System_String_o *)StringLiteral_2047/*"ADD_RECOVER_NUM_TXT"*/, 0LL);
                          apRcvRate = v10->fields.recvApNum;
                          v140 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &apRcvRate, v137, v138, v139);
                          this = (RecoverItemComponent_o *)System_String__Format_61721404(v136, v135, v140, 0LL);
                          if ( !v134 )
                            goto LABEL_151;
                          UILabel__set_text(v134, (System_String_o *)this, 0LL);
                          v10->fields.isAddAp = 1;
                        }
                        v141 = v10->fields.currentNumLb;
                        spendNum = num;
                        v142 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &spendNum, v90, v91, v92);
                        this = (RecoverItemComponent_o *)System_String__Format(
                                                           (System_String_o *)StringLiteral_24971/*"{0:N0}"*/,
                                                           v142,
                                                           0LL);
                        if ( v141 )
                        {
                          UILabel__set_text(v141, (System_String_o *)this, 0LL);
                          v143 = v10->fields.spendNumLb;
                          this = (RecoverItemComponent_o *)System_Int32__ToString((int)v10 + 128, 0LL);
                          if ( v143 )
                          {
                            UILabel__set_text(v143, (System_String_o *)this, 0LL);
                            v144 = v10->fields.recvApNum + v10->fields.usrCurrentAp;
                            v10->fields.isEnableSelect = num >= v10->fields.spendNum;
                            v10->fields.recvSum = v144;
                            v10->fields.targetId = data->fields.id;
                            goto LABEL_150;
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
LABEL_151:
    sub_1B8880C(this, data);
  }
  if ( currentType != 2 )
    goto LABEL_150;
  this = (RecoverItemComponent_o *)v10->fields.itemIconInfo;
  if ( !this )
    goto LABEL_151;
  this = (RecoverItemComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !this )
    goto LABEL_151;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
  this = (RecoverItemComponent_o *)v10->fields.cmdSpellBg;
  if ( !this )
    goto LABEL_151;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
  this = (RecoverItemComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_151;
  this = (RecoverItemComponent_o *)DataManager__GetMasterData_object_(
                                     (DataManager_o *)this,
                                     (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ItemMaster___);
  if ( !this )
    goto LABEL_151;
  this = (RecoverItemComponent_o *)ItemMaster__GetEntityByType((ItemMaster_o *)this, 2, 0LL);
  if ( !this )
    goto LABEL_151;
  v24 = this;
  this = (RecoverItemComponent_o *)v10->fields.itemIconInfo;
  if ( !this )
    goto LABEL_151;
  ItemIconComponent__SetItemImage_38142580(
    (ItemIconComponent_o *)this,
    (int32_t)v24->fields.cmdSpellBg,
    HIDWORD(v24->fields.cmdSpellBg),
    (int32_t)v24->fields.cmdSpellIcon,
    0,
    0LL);
  this = (RecoverItemComponent_o *)v10->fields.itemIconInfo;
  if ( !this )
    goto LABEL_151;
  this = (RecoverItemComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !this )
    goto LABEL_151;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
  this = (RecoverItemComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_151;
  this = (RecoverItemComponent_o *)DataManager__GetMasterData_object_(
                                     (DataManager_o *)this,
                                     (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_StoneShopMaster___);
  if ( !this )
    goto LABEL_151;
  this = (RecoverItemComponent_o *)DataMasterBase_object__object__int___GetEntity(
                                     (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                     v10->fields.targetId,
                                     (const MethodInfo_311D934 *)Method_DataMasterBase_StoneShopMaster__StoneShopEntity__int__GetEntity__);
  if ( !v10->fields.itemNameLb )
    goto LABEL_151;
  v25 = this;
  UILabel__set_text(v10->fields.itemNameLb, (System_String_o *)v24->fields.m_CancellationTokenSource, 0LL);
  if ( !*p_userEntity )
    goto LABEL_151;
  recvTarget = (*p_userEntity)->fields.recvTarget;
  if ( v25 )
    *p_spendNum = HIDWORD(v25->fields.cmdSpellBg);
  v30 = v10->fields.currentNumLb;
  spendNum = recvTarget;
  v31 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &spendNum, v26, v27, v28);
  this = (RecoverItemComponent_o *)System_String__Format((System_String_o *)StringLiteral_24971/*"{0:N0}"*/, v31, 0LL);
  if ( !v30 )
    goto LABEL_151;
  UILabel__set_text(v30, (System_String_o *)this, 0LL);
  v32 = v10->fields.spendNumLb;
  this = (RecoverItemComponent_o *)System_Int32__ToString((int)v10 + 128, 0LL);
  if ( !v32 )
    goto LABEL_151;
  UILabel__set_text(v32, (System_String_o *)this, 0LL);
  RecoverItemComponent__AttachStoneCountRefreshComponent(v10, v33);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v34 = LocalizationManager__Get((System_String_o *)StringLiteral_14797/*"UNIT_INFO"*/, 0LL);
  apRcvRate = v10->fields.spendNum;
  v38 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &apRcvRate, v35, v36, v37);
  v39 = System_String__Format(v34, v38, 0LL);
  v40 = v10->fields.itemDetailLb;
  v41 = (Il2CppObject *)v39;
  v42 = LocalizationManager__Get((System_String_o *)StringLiteral_2126/*"AP_RECOVER_NUM_TXT"*/, 0LL);
  recvApNum = v10->fields.apRcvRate;
  v46 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &recvApNum, v43, v44, v45);
  v161 = v10->fields.recvApNum;
  v50 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v161, v47, v48, v49);
  this = (RecoverItemComponent_o *)System_String__Format_61721472(v42, v41, v46, v50, 0LL);
  if ( !v40 )
    goto LABEL_151;
  UILabel__set_text(v40, (System_String_o *)this, 0LL);
  v51 = recvTarget < v10->fields.spendNum;
  v52 = v10->fields.usrMaxAp + v10->fields.usrCurrentAp;
LABEL_146:
  v160 = !v51;
  v10->fields.isEnableSelect = v160;
  v10->fields.recvSum = v52;
LABEL_150:
  RecoverItemComponent__setEnableSelectItem(v10, (const MethodInfo *)data);
}


void __fastcall RecoverItemComponent__setEnableSelectItem(RecoverItemComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *maskImg; // x0

  if ( !this->fields.isEnableSelect )
  {
    maskImg = this->fields.maskImg;
    if ( !maskImg )
      sub_1B8880C(0LL, method);
    UnityEngine_GameObject__SetActive(maskImg, 1, 0LL);
  }
}


void __fastcall RecoverItemComponent__setRPRecvItemInfo(
        RecoverItemComponent_o *this,
        RecoverEntity_o *data,
        int32_t needRp,
        RecoverDlgComponent_o *dlg,
        RecoverItemComponent_CallbackFunc_o *callback,
        const MethodInfo *method)
{
  RecoverItemComponent_o *v10; // x19
  int32_t targetId; // w8
  int32_t v12; // w2
  int32_t v13; // w3
  UserGameEntity_o *SelfUserGame; // x0
  RecoverItemComponent_o **p_userEntity; // x23
  int32_t v16; // w2
  int32_t v17; // w3
  BalanceConfig_c *v18; // x0
  int32_t UerGameRpMax; // w8
  unsigned int *p_spendNum; // x20
  UILabel_o *currentInfoLb; // x24
  UILabel_o *spendInfoLb; // x24
  int32_t currentType; // w8
  RecoverItemComponent_o *v24; // x21
  RecoverItemComponent_o *v25; // x22
  __int64 v26; // x2
  __int64 v27; // x3
  __int64 v28; // x4
  int recvTarget; // w23
  UILabel_o *v30; // x21
  Il2CppObject *v31; // x0
  UILabel_o *v32; // x21
  const MethodInfo *v33; // x1
  System_String_o *v34; // x20
  __int64 v35; // x2
  __int64 v36; // x3
  __int64 v37; // x4
  Il2CppObject *v38; // x0
  System_String_o *v39; // x0
  UILabel_o *v40; // x20
  Il2CppObject *v41; // x21
  System_String_o *v42; // x22
  __int64 v43; // x2
  __int64 v44; // x3
  __int64 v45; // x4
  Il2CppObject *v46; // x0
  bool v47; // cc
  int v48; // w8
  UILabel_o *v49; // x22
  UILabel_o *v50; // x22
  Il2CppObject *v51; // x0
  CommandSpellEntity_o *v52; // x22
  struct ItemIconComponent_o *itemIconInfo; // x8
  int backSprite; // w22
  float v55; // s8
  float v56; // s8
  unsigned int v57; // w9
  unsigned int v58; // w8
  ItemEntity_o *RecvItemData; // x0
  ItemEntity_o *v60; // x24
  int32_t v61; // w26
  int value; // w23
  float v63; // s8
  float v64; // s8
  unsigned int v65; // w8
  System_String_o *v66; // x21
  __int64 v67; // x2
  __int64 v68; // x3
  __int64 v69; // x4
  Il2CppObject *v70; // x0
  System_String_o *v71; // x0
  UILabel_o *v72; // x21
  Il2CppObject *v73; // x23
  System_String_o *v74; // x24
  __int64 v75; // x2
  __int64 v76; // x3
  __int64 v77; // x4
  Il2CppObject *v78; // x0
  UILabel_o *v79; // x21
  __int64 v80; // x2
  __int64 v81; // x3
  __int64 v82; // x4
  Il2CppObject *v83; // x0
  UILabel_o *v84; // x21
  int v85; // w8
  System_String_o *v86; // x21
  __int64 v87; // x2
  __int64 v88; // x3
  __int64 v89; // x4
  Il2CppObject *v90; // x0
  System_String_o *v91; // x0
  UILabel_o *itemDetailLb; // x21
  Il2CppObject *v93; // x22
  System_String_o *v94; // x23
  __int64 v95; // x2
  __int64 v96; // x3
  __int64 v97; // x4
  Il2CppObject *v98; // x0
  UILabel_o *currentNumLb; // x21
  UILabel_o *spendNumLb; // x21
  char v101; // w9
  int32_t v102; // [xsp+0h] [xbp-70h] BYREF
  int32_t recvRpNum; // [xsp+4h] [xbp-6Ch] BYREF
  int32_t spendNum; // [xsp+8h] [xbp-68h] BYREF
  int32_t CommandSpell; // [xsp+Ch] [xbp-64h] BYREF
  UserItemEntity_o *entity; // [xsp+28h] [xbp-48h] BYREF

  v10 = this;
  if ( (byte_4A5EC68 & 1) == 0 )
  {
    sub_1B885B0(&BalanceConfig_TypeInfo);
    sub_1B885B0(&Method_DataManager_GetMasterData_CommandSpellMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_ItemMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_StoneShopMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_UserItemMaster___);
    sub_1B885B0(&Method_DataMasterBase_CommandSpellMaster__CommandSpellEntity__int__GetEntity__);
    sub_1B885B0(&Method_DataMasterBase_StoneShopMaster__StoneShopEntity__int__GetEntity__);
    sub_1B885B0(&int_TypeInfo);
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1B885B0(&StringLiteral_3608/*"CMDSPELL_CURRENT_NUM"*/);
    sub_1B885B0(&StringLiteral_3610/*"CMDSPELL_SPEND_NUM_TXT"*/);
    sub_1B885B0(&StringLiteral_24971/*"{0:N0}"*/);
    sub_1B885B0(&StringLiteral_919/*"-"*/);
    sub_1B885B0(&StringLiteral_14797/*"UNIT_INFO"*/);
    sub_1B885B0(&StringLiteral_12193/*"SPEND_NUM_TXT"*/);
    sub_1B885B0(&StringLiteral_3949/*"CURRENT_NUM_TXT"*/);
    sub_1B885B0(&StringLiteral_11129/*"RP_RECOVER_CMDSPELL_TXT"*/);
    sub_1B885B0(&StringLiteral_11131/*"RP_RECOVER_NUM_TXT"*/);
    this = (RecoverItemComponent_o *)sub_1B885B0(&StringLiteral_3609/*"CMDSPELL_CURRENT_NUM_TXT"*/);
    byte_4A5EC68 = 1;
  }
  entity = 0LL;
  CommandSpell = 0;
  if ( !data )
    goto LABEL_107;
  v10->fields.currentType = data->fields.recoverType;
  v10->fields.recvTarget = data->fields.target;
  targetId = data->fields.targetId;
  v10->fields.isEnableSelect = 0;
  v10->fields.targetId = targetId;
  v10->fields.dialog = dlg;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v10->fields.dialog, (int32_t)dlg, needRp, (int32_t)dlg);
  v10->fields.callbackFunc = callback;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v10->fields.callbackFunc, (int32_t)callback, v12, v13);
  this = (RecoverItemComponent_o *)v10->fields.maskImg;
  if ( !this )
    goto LABEL_107;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  v10->fields.userEntity = SelfUserGame;
  p_userEntity = (RecoverItemComponent_o **)&v10->fields.userEntity;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v10->fields.userEntity, (int32_t)SelfUserGame, v16, v17);
  this = (RecoverItemComponent_o *)v10->fields.userEntity;
  if ( !this )
    goto LABEL_107;
  v10->fields.usrCurrentRp = UserGameEntity__getRp((UserGameEntity_o *)this, 0LL);
  v18 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v18 = BalanceConfig_TypeInfo;
  }
  UerGameRpMax = v18->static_fields->UerGameRpMax;
  v10->fields.spendNum = 1;
  p_spendNum = (unsigned int *)&v10->fields.spendNum;
  this = (RecoverItemComponent_o *)v10->fields.itemNameLb;
  v10->fields.isAp = 0;
  v10->fields.usrMaxRp = UerGameRpMax;
  v10->fields.recvRpNum = UerGameRpMax;
  if ( !this )
    goto LABEL_107;
  UILabel__set_text((UILabel_o *)this, (System_String_o *)StringLiteral_919/*"-"*/, 0LL);
  this = (RecoverItemComponent_o *)v10->fields.currentNumLb;
  if ( !this )
    goto LABEL_107;
  UILabel__set_text((UILabel_o *)this, (System_String_o *)StringLiteral_919/*"-"*/, 0LL);
  this = (RecoverItemComponent_o *)v10->fields.spendNumLb;
  if ( !this )
    goto LABEL_107;
  UILabel__set_text((UILabel_o *)this, (System_String_o *)StringLiteral_919/*"-"*/, 0LL);
  this = (RecoverItemComponent_o *)v10->fields.itemDetailLb;
  if ( !this )
    goto LABEL_107;
  UILabel__set_text((UILabel_o *)this, (System_String_o *)StringLiteral_919/*"-"*/, 0LL);
  currentInfoLb = v10->fields.currentInfoLb;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  this = (RecoverItemComponent_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3949/*"CURRENT_NUM_TXT"*/, 0LL);
  if ( !currentInfoLb )
    goto LABEL_107;
  UILabel__set_text(currentInfoLb, (System_String_o *)this, 0LL);
  spendInfoLb = v10->fields.spendInfoLb;
  this = (RecoverItemComponent_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12193/*"SPEND_NUM_TXT"*/, 0LL);
  if ( !spendInfoLb )
    goto LABEL_107;
  UILabel__set_text(spendInfoLb, (System_String_o *)this, 0LL);
  currentType = v10->fields.currentType;
  if ( currentType == 1 )
  {
    this = (RecoverItemComponent_o *)v10->fields.itemIconInfo;
    if ( this )
    {
      this = (RecoverItemComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
      if ( this )
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
        this = (RecoverItemComponent_o *)v10->fields.cmdSpellBg;
        if ( this )
        {
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
          v49 = v10->fields.currentInfoLb;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          this = (RecoverItemComponent_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3609/*"CMDSPELL_CURRENT_NUM_TXT"*/, 0LL);
          if ( v49 )
          {
            UILabel__set_text(v49, (System_String_o *)this, 0LL);
            v50 = v10->fields.spendInfoLb;
            this = (RecoverItemComponent_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3610/*"CMDSPELL_SPEND_NUM_TXT"*/, 0LL);
            if ( v50 )
            {
              UILabel__set_text(v50, (System_String_o *)this, 0LL);
              this = (RecoverItemComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
              if ( this )
              {
                this = (RecoverItemComponent_o *)DataManager__GetMasterData_object_(
                                                   (DataManager_o *)this,
                                                   (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_CommandSpellMaster___);
                if ( this )
                {
                  v51 = DataMasterBase_object__object__int___GetEntity(
                          (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                          v10->fields.targetId,
                          (const MethodInfo_311D934 *)Method_DataMasterBase_CommandSpellMaster__CommandSpellEntity__int__GetEntity__);
                  if ( !v51 )
                    goto LABEL_106;
                  v52 = (CommandSpellEntity_o *)v51;
                  this = (RecoverItemComponent_o *)v10->fields.cmdSpellIcon;
                  if ( this )
                  {
                    CommandSpellIconComponent__SetData((CommandSpellIconComponent_o *)this, v10->fields.userEntity, 0LL);
                    this = (RecoverItemComponent_o *)v10->fields.itemNameLb;
                    if ( this )
                    {
                      UILabel__set_text((UILabel_o *)this, v52->fields.name, 0LL);
                      this = *p_userEntity;
                      if ( *p_userEntity )
                      {
                        CommandSpell = UserGameEntity__getCommandSpell((UserGameEntity_o *)this, 0LL);
                        *p_spendNum = v52->fields.consume;
                        this = (RecoverItemComponent_o *)CommandSpellEntity__getValues(v52, 0LL);
                        if ( this )
                        {
                          if ( !LODWORD(this->fields.m_CancellationTokenSource) )
                            goto LABEL_108;
                          itemIconInfo = this->fields.itemIconInfo;
                          if ( !itemIconInfo )
                            goto LABEL_107;
                          if ( !LODWORD(itemIconInfo->fields.m_CancellationTokenSource) )
LABEL_108:
                            sub_1B88814(this, data);
                          backSprite = (int)itemIconInfo->fields.backSprite;
                          if ( needRp < 1 )
                          {
                            v58 = *p_spendNum;
                          }
                          else
                          {
                            v55 = (float)(needRp - v10->fields.usrCurrentRp) / (float)backSprite;
                            if ( !byte_4A5638E )
                            {
                              sub_1B885B0(&System_Math_TypeInfo);
                              byte_4A5638E = 1;
                            }
                            v56 = fmaxf(v55, 1.0);
                            if ( !System_Math_TypeInfo->_2.cctor_finished )
                              j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
                            v57 = vcvtps_s32_f32(v56);
                            if ( ceilf(v56) == INFINITY )
                              v58 = 0x80000000;
                            else
                              v58 = v57;
                            *p_spendNum = v58;
                          }
                          v10->fields.recvRpNum = v58 * backSprite;
                          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                          v86 = LocalizationManager__Get((System_String_o *)StringLiteral_3608/*"CMDSPELL_CURRENT_NUM"*/, 0LL);
                          spendNum = v10->fields.spendNum;
                          v90 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &spendNum, v87, v88, v89);
                          v91 = System_String__Format(v86, v90, 0LL);
                          itemDetailLb = v10->fields.itemDetailLb;
                          v93 = (Il2CppObject *)v91;
                          v94 = LocalizationManager__Get((System_String_o *)StringLiteral_11129/*"RP_RECOVER_CMDSPELL_TXT"*/, 0LL);
                          recvRpNum = v10->fields.recvRpNum;
                          v98 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &recvRpNum, v95, v96, v97);
                          this = (RecoverItemComponent_o *)System_String__Format_61721404(v94, v93, v98, 0LL);
                          if ( itemDetailLb )
                          {
                            UILabel__set_text(itemDetailLb, (System_String_o *)this, 0LL);
                            currentNumLb = v10->fields.currentNumLb;
                            this = (RecoverItemComponent_o *)System_Int32__ToString((int32_t)&CommandSpell, 0LL);
                            if ( currentNumLb )
                            {
                              UILabel__set_text(currentNumLb, (System_String_o *)this, 0LL);
                              spendNumLb = v10->fields.spendNumLb;
                              this = (RecoverItemComponent_o *)System_Int32__ToString((int)v10 + 128, 0LL);
                              if ( spendNumLb )
                              {
                                UILabel__set_text(spendNumLb, (System_String_o *)this, 0LL);
                                v47 = CommandSpell < v10->fields.spendNum;
                                v48 = v10->fields.recvRpNum + v10->fields.usrCurrentRp;
                                goto LABEL_102;
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
    goto LABEL_107;
  }
  if ( currentType == 3 )
  {
    this = (RecoverItemComponent_o *)v10->fields.itemIconInfo;
    if ( this )
    {
      this = (RecoverItemComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
      if ( this )
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
        this = (RecoverItemComponent_o *)v10->fields.cmdSpellBg;
        if ( this )
        {
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
          RecvItemData = RecoverEntity__getRecvItemData(data, 0LL);
          if ( !RecvItemData )
            goto LABEL_106;
          v60 = RecvItemData;
          this = (RecoverItemComponent_o *)v10->fields.itemIconInfo;
          if ( this )
          {
            ItemIconComponent__SetItemImage_38142580(
              (ItemIconComponent_o *)this,
              v60->fields.imageId,
              v60->fields.bgImageId,
              v60->fields.type,
              0,
              0LL);
            this = (RecoverItemComponent_o *)v10->fields.itemIconInfo;
            if ( this )
            {
              this = (RecoverItemComponent_o *)UnityEngine_Component__get_gameObject(
                                                 (UnityEngine_Component_o *)this,
                                                 0LL);
              if ( this )
              {
                UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
                this = (RecoverItemComponent_o *)v10->fields.itemNameLb;
                if ( this )
                {
                  UILabel__set_text((UILabel_o *)this, v60->fields.name, 0LL);
                  this = (RecoverItemComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
                  if ( this )
                  {
                    this = (RecoverItemComponent_o *)DataManager__GetMasterData_object_(
                                                       (DataManager_o *)this,
                                                       (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_UserItemMaster___);
                    if ( *p_userEntity )
                    {
                      if ( this )
                      {
                        UserItemMaster__TryGetEntity(
                          (UserItemMaster_o *)this,
                          &entity,
                          *(_QWORD *)&(*p_userEntity)->fields.m_CachedPtr,
                          v10->fields.targetId,
                          0LL);
                        v10->fields.spendNum = 1;
                        v61 = entity ? entity->fields.num : 0;
                        value = v60->fields.value;
                        if ( needRp < 1 )
                        {
                          *p_spendNum = 1;
                        }
                        else
                        {
                          v63 = (float)(needRp - v10->fields.usrCurrentRp) / (float)value;
                          if ( !byte_4A5638E )
                          {
                            sub_1B885B0(&System_Math_TypeInfo);
                            byte_4A5638E = 1;
                          }
                          v64 = fmaxf(v63, 1.0);
                          if ( !System_Math_TypeInfo->_2.cctor_finished )
                            j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
                          v65 = vcvtps_s32_f32(v64);
                          if ( ceilf(v64) == INFINITY )
                            v65 = 0x80000000;
                          *p_spendNum = v65;
                          value *= v65;
                        }
                        v10->fields.recvRpNum = value;
                        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                        v66 = LocalizationManager__Get((System_String_o *)StringLiteral_14797/*"UNIT_INFO"*/, 0LL);
                        spendNum = v10->fields.spendNum;
                        v70 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &spendNum, v67, v68, v69);
                        v71 = System_String__Format(v66, v70, 0LL);
                        v72 = v10->fields.itemDetailLb;
                        v73 = (Il2CppObject *)v71;
                        v74 = LocalizationManager__Get((System_String_o *)StringLiteral_11131/*"RP_RECOVER_NUM_TXT"*/, 0LL);
                        recvRpNum = v10->fields.recvRpNum;
                        v78 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &recvRpNum, v75, v76, v77);
                        this = (RecoverItemComponent_o *)System_String__Format_61721404(v74, v73, v78, 0LL);
                        if ( v72 )
                        {
                          UILabel__set_text(v72, (System_String_o *)this, 0LL);
                          v79 = v10->fields.currentNumLb;
                          v102 = v61;
                          v83 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v102, v80, v81, v82);
                          this = (RecoverItemComponent_o *)System_String__Format(
                                                             (System_String_o *)StringLiteral_24971/*"{0:N0}"*/,
                                                             v83,
                                                             0LL);
                          if ( v79 )
                          {
                            UILabel__set_text(v79, (System_String_o *)this, 0LL);
                            v84 = v10->fields.spendNumLb;
                            this = (RecoverItemComponent_o *)System_Int32__ToString((int)v10 + 128, 0LL);
                            if ( v84 )
                            {
                              UILabel__set_text(v84, (System_String_o *)this, 0LL);
                              v85 = v10->fields.recvRpNum + v10->fields.usrCurrentRp;
                              v10->fields.isEnableSelect = v61 >= v10->fields.spendNum;
                              v10->fields.recvSum = v85;
                              v10->fields.targetId = data->fields.id;
                              goto LABEL_106;
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
    goto LABEL_107;
  }
  if ( currentType != 2 )
    goto LABEL_106;
  this = (RecoverItemComponent_o *)v10->fields.itemIconInfo;
  if ( !this )
    goto LABEL_107;
  this = (RecoverItemComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !this )
    goto LABEL_107;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
  this = (RecoverItemComponent_o *)v10->fields.cmdSpellBg;
  if ( !this )
    goto LABEL_107;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
  this = (RecoverItemComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_107;
  this = (RecoverItemComponent_o *)DataManager__GetMasterData_object_(
                                     (DataManager_o *)this,
                                     (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ItemMaster___);
  if ( !this )
    goto LABEL_107;
  this = (RecoverItemComponent_o *)ItemMaster__GetEntityByType((ItemMaster_o *)this, 2, 0LL);
  if ( !this )
    goto LABEL_107;
  v24 = this;
  this = (RecoverItemComponent_o *)v10->fields.itemIconInfo;
  if ( !this )
    goto LABEL_107;
  ItemIconComponent__SetItemImage_38142580(
    (ItemIconComponent_o *)this,
    (int32_t)v24->fields.cmdSpellBg,
    HIDWORD(v24->fields.cmdSpellBg),
    (int32_t)v24->fields.cmdSpellIcon,
    0,
    0LL);
  this = (RecoverItemComponent_o *)v10->fields.itemIconInfo;
  if ( !this )
    goto LABEL_107;
  this = (RecoverItemComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !this )
    goto LABEL_107;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
  this = (RecoverItemComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_107;
  this = (RecoverItemComponent_o *)DataManager__GetMasterData_object_(
                                     (DataManager_o *)this,
                                     (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_StoneShopMaster___);
  if ( !this )
    goto LABEL_107;
  this = (RecoverItemComponent_o *)DataMasterBase_object__object__int___GetEntity(
                                     (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                     v10->fields.targetId,
                                     (const MethodInfo_311D934 *)Method_DataMasterBase_StoneShopMaster__StoneShopEntity__int__GetEntity__);
  if ( !v10->fields.itemNameLb )
    goto LABEL_107;
  v25 = this;
  UILabel__set_text(v10->fields.itemNameLb, (System_String_o *)v24->fields.m_CancellationTokenSource, 0LL);
  if ( !*p_userEntity )
    goto LABEL_107;
  recvTarget = (*p_userEntity)->fields.recvTarget;
  if ( v25 )
    *p_spendNum = HIDWORD(v25->fields.cmdSpellBg);
  v30 = v10->fields.currentNumLb;
  spendNum = recvTarget;
  v31 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &spendNum, v26, v27, v28);
  this = (RecoverItemComponent_o *)System_String__Format((System_String_o *)StringLiteral_24971/*"{0:N0}"*/, v31, 0LL);
  if ( !v30 )
    goto LABEL_107;
  UILabel__set_text(v30, (System_String_o *)this, 0LL);
  v32 = v10->fields.spendNumLb;
  this = (RecoverItemComponent_o *)System_Int32__ToString((int)v10 + 128, 0LL);
  if ( !v32 )
    goto LABEL_107;
  UILabel__set_text(v32, (System_String_o *)this, 0LL);
  RecoverItemComponent__AttachStoneCountRefreshComponent(v10, v33);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v34 = LocalizationManager__Get((System_String_o *)StringLiteral_14797/*"UNIT_INFO"*/, 0LL);
  recvRpNum = v10->fields.spendNum;
  v38 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &recvRpNum, v35, v36, v37);
  v39 = System_String__Format(v34, v38, 0LL);
  v40 = v10->fields.itemDetailLb;
  v41 = (Il2CppObject *)v39;
  v42 = LocalizationManager__Get((System_String_o *)StringLiteral_11131/*"RP_RECOVER_NUM_TXT"*/, 0LL);
  v102 = v10->fields.recvRpNum;
  v46 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v102, v43, v44, v45);
  this = (RecoverItemComponent_o *)System_String__Format_61721404(v42, v41, v46, 0LL);
  if ( !v40 )
LABEL_107:
    sub_1B8880C(this, data);
  UILabel__set_text(v40, (System_String_o *)this, 0LL);
  v47 = recvTarget < v10->fields.spendNum;
  v48 = v10->fields.recvRpNum + v10->fields.usrCurrentRp;
LABEL_102:
  v101 = !v47;
  v10->fields.isEnableSelect = v101;
  v10->fields.recvSum = v48;
LABEL_106:
  RecoverItemComponent__setEnableSelectItem(v10, (const MethodInfo *)data);
}


void __fastcall RecoverItemComponent__setRequestInfo(RecoverItemComponent_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  DataManager_o *Instance; // x0
  __int64 v6; // x1
  __int64 v7; // x8
  struct RecoverItemComponent_CallbackFunc_o *callbackFunc; // x20
  Il2CppObject *v9; // x19
  System_String_o *v10; // x20
  RecoverItemComponent___c_c *v11; // x8
  System_Action_o *_9__43_0; // x22
  System_String_o *v13; // x21
  Il2CppObject *v14; // x23
  struct RecoverItemComponent___c_StaticFields *static_fields; // x0
  int32_t v16; // w2
  int32_t v17; // w3

  if ( (byte_4A5EC6D & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_DataManager_GetMasterData_EventMaster___);
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1B885B0(&TerminalSceneComponent_TypeInfo);
    sub_1B885B0(&Method_RecoverItemComponent___c__setRequestInfo_b__43_0__);
    sub_1B885B0(&RecoverItemComponent___c_TypeInfo);
    sub_1B885B0(&StringLiteral_11132/*"RP_UNRECOVERABLE_MESSAGE"*/);
    sub_1B885B0(&StringLiteral_1/*""*/);
    byte_4A5EC6D = 1;
  }
  if ( this->fields.recvTarget != 2 )
    goto LABEL_14;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_27;
  DataManager__GetMasterData_object_(
    Instance,
    (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_EventMaster___);
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  if ( !byte_4A5629D )
  {
    sub_1B885B0(&TerminalSceneComponent_TypeInfo);
    byte_4A5629D = 1;
  }
  Instance = (DataManager_o *)TerminalSceneComponent_TypeInfo;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    Instance = (DataManager_o *)TerminalSceneComponent_TypeInfo;
  }
  v7 = **(_QWORD **)&Instance[1].fields._DispLog;
  if ( !v7 || (Instance = *(DataManager_o **)(v7 + 248)) == 0LL )
LABEL_27:
    sub_1B8880C(Instance, v6);
  if ( !ScrPlayerStatus__IsBPActive((ScrPlayerStatus_o *)Instance, 0LL) )
  {
    v9 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    Instance = (DataManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11132/*"RP_UNRECOVERABLE_MESSAGE"*/, 0LL);
    v10 = (System_String_o *)Instance;
    v11 = RecoverItemComponent___c_TypeInfo;
    if ( !RecoverItemComponent___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(RecoverItemComponent___c_TypeInfo);
      v11 = RecoverItemComponent___c_TypeInfo;
    }
    _9__43_0 = v11->static_fields->__9__43_0;
    v13 = (System_String_o *)StringLiteral_1/*""*/;
    if ( !_9__43_0 )
    {
      if ( !v11->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v11);
        v11 = RecoverItemComponent___c_TypeInfo;
      }
      v14 = (Il2CppObject *)v11->static_fields->__9;
      _9__43_0 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
      System_Action___ctor(_9__43_0, v14, Method_RecoverItemComponent___c__setRequestInfo_b__43_0__, 0LL);
      static_fields = RecoverItemComponent___c_TypeInfo->static_fields;
      static_fields->__9__43_0 = _9__43_0;
      sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->__9__43_0, (int32_t)_9__43_0, v16, v17);
    }
    if ( v9 )
    {
      CommonUI__OpenNotificationDialog((CommonUI_o *)v9, v13, v10, _9__43_0, -1, 0, 0, 0, 1, 0, 1, 0, 0LL, 0.0, 0LL);
      return;
    }
    goto LABEL_27;
  }
LABEL_14:
  callbackFunc = this->fields.callbackFunc;
  if ( callbackFunc )
  {
    this->fields.callbackFunc = 0LL;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.callbackFunc, 0, v2, v3);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD, _QWORD, _QWORD, _QWORD))callbackFunc->fields.m_target)(
      callbackFunc->fields.original_method_info,
      (unsigned int)this->fields.currentType,
      (unsigned int)this->fields.targetId,
      (unsigned int)this->fields.spendNum,
      *(_QWORD *)&callbackFunc->fields.extra_arg);
  }
}


void __fastcall RecoverItemComponent__spendItemDlg(RecoverItemComponent_o *this, bool isRes, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v6; // x1
  CommonUI_o *v7; // x21
  System_Action_o *v8; // x20

  if ( (byte_4A5EC6B & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_RecoverItemComponent_setRequestInfo__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4A5EC6B = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v7 = (CommonUI_o *)Instance;
  if ( isRes )
  {
    v8 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
    System_Action___ctor(v8, (Il2CppObject *)this, Method_RecoverItemComponent_setRequestInfo__, 0LL);
    if ( v7 )
    {
      CommonUI__CloseConfirmDialog_30494572(v7, v8, 0LL);
      return;
    }
LABEL_8:
    sub_1B8880C(Instance, v6);
  }
  if ( !Instance )
    goto LABEL_8;
  CommonUI__CloseConfirmDialog((CommonUI_o *)Instance, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall RecoverItemComponent_CallbackFunc___ctor(
        RecoverItemComponent_CallbackFunc_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  __int64 v4; // x8
  __int64 v6; // x21
  int v8; // w22
  struct System_Reflection_MethodInfo_o *v9; // x9
  __int64 v10; // x0

  v4 = *(_QWORD *)(*(_QWORD *)&method + 8LL);
  *(_QWORD *)&this->fields.extra_arg = *(_QWORD *)&method;
  v6 = *(_QWORD *)&method;
  *(_QWORD *)&this->fields.method_ptr = v4;
  *(_QWORD *)&this->fields.method = object;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.method, (int32_t)object, method, (int32_t)a4);
  v8 = *(unsigned __int8 *)(v6 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1B88670(v6) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1B88828(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1B886D8(v10, 0LL);
    }
    goto LABEL_5;
  }
  if ( v8 != 3 )
  {
LABEL_5:
    v9 = *(struct System_Reflection_MethodInfo_o **)&this->fields.method;
    this->fields.m_target = *(Il2CppObject **)&this->fields.method_ptr;
    this->fields.original_method_info = v9;
    goto LABEL_6;
  }
  this->fields.m_target = (Il2CppObject *)sub_19D318C;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_19D312C;
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
  __int64 v11; // x3
  __int64 v12; // x4
  __int64 v13; // x2
  __int64 v14; // x3
  __int64 v15; // x4
  _QWORD v17[2]; // [xsp+0h] [xbp-70h] BYREF
  __int128 v18; // [xsp+10h] [xbp-60h]
  int32_t v19; // [xsp+2Ch] [xbp-44h] BYREF
  int32_t v20; // [xsp+38h] [xbp-38h] BYREF
  int32_t v21; // [xsp+3Ch] [xbp-34h] BYREF

  v20 = id;
  v21 = type;
  v19 = num;
  if ( (byte_4A5EC71 & 1) == 0 )
  {
    sub_1B885B0(&int_TypeInfo);
    sub_1B885B0(&RecoverType_Type_TypeInfo);
    byte_4A5EC71 = 1;
  }
  v18 = 0u;
  v17[0] = j_il2cpp_value_box_0(RecoverType_Type_TypeInfo, &v21, *(_QWORD *)&id, *(_QWORD *)&num, callback);
  v17[1] = j_il2cpp_value_box_0(int_TypeInfo, &v20, v10, v11, v12);
  *(_QWORD *)&v18 = j_il2cpp_value_box_0(int_TypeInfo, &v19, v13, v14, v15);
  return (System_IAsyncResult_o *)sub_1B88564(this, v17, callback, object);
}


void __fastcall RecoverItemComponent_CallbackFunc__EndInvoke(
        RecoverItemComponent_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1B88568(result, 0LL, method);
}


void __fastcall RecoverItemComponent_CallbackFunc__Invoke(
        RecoverItemComponent_CallbackFunc_o *this,
        int32_t type,
        int32_t id,
        int32_t num,
        const MethodInfo *method)
{
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, int32_t, int32_t, int32_t, _QWORD))this->fields.m_target)(
    this->fields.original_method_info,
    type,
    id,
    num,
    *(_QWORD *)&this->fields.extra_arg);
}


void __fastcall RecoverItemComponent___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  int32_t v3; // w3

  if ( (byte_4A5EC72 & 1) == 0 )
  {
    sub_1B885B0(&RecoverItemComponent___c_TypeInfo);
    byte_4A5EC72 = 1;
  }
  v1 = (Il2CppObject *)sub_1B887FC(RecoverItemComponent___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  RecoverItemComponent___c_TypeInfo->static_fields->__9 = (struct RecoverItemComponent___c_o *)v1;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)RecoverItemComponent___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3);
}


void __fastcall RecoverItemComponent___c___ctor(RecoverItemComponent___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall RecoverItemComponent___c___setRequestInfo_b__43_0(
        RecoverItemComponent___c_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v3; // x1

  if ( (byte_4A5EC73 & 1) == 0 )
  {
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    byte_4A5EC73 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance
    || (CommonUI__CloseRecoverItemListDialog((CommonUI_o *)Instance, 0LL),
        (Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__)) == 0LL) )
  {
    sub_1B8880C(Instance, v3);
  }
  AvalonSceneManager__transitionSceneRefresh((AvalonSceneManager_o *)Instance, 34, 1, 0LL, 0, 0LL);
}