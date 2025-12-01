void RecoverItemComponent___cctor(const MethodInfo *method)
{
  if ( (byte_4CC133D & 1) == 0 )
  {
    sub_1C713B0(&RecoverItemComponent_TypeInfo);
    byte_4CC133D = 1;
  }
  LODWORD(RecoverItemComponent_TypeInfo->static_fields->COLOR_VAL) = (struct RecoverItemComponent_StaticFields)1052770304;
}


void RecoverItemComponent___ctor(RecoverItemComponent_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void RecoverItemComponent__AttachStoneCountRefreshComponent(RecoverItemComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x20
  System_Action_int__o *v4; // x21

  if ( (byte_4CC1337 & 1) == 0 )
  {
    sub_1C713B0(&System_Action_int__TypeInfo);
    sub_1C713B0(&Method_RecoverItemComponent__AttachStoneCountRefreshComponent_b__38_0__);
    byte_4CC1337 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  v4 = (System_Action_int__o *)sub_1C715FC(System_Action_int__TypeInfo);
  System_Action_int____ctor(
    v4,
    (Il2CppObject *)this,
    Method_RecoverItemComponent__AttachStoneCountRefreshComponent_b__38_0__,
    0);
  StoneCountRefreshComponent__AttachToGameObject(gameObject, v4, 1, 0);
}


void RecoverItemComponent__CloseApRecovDlg(
        RecoverItemComponent_o *this,
        bool isRes,
        int32_t useNum,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x20
  System_Action_o *v8; // x21
  Il2CppObject *v9; // x0
  __int64 v10; // x1

  if ( (byte_4CC133A & 1) == 0 )
  {
    sub_1C713B0(&System_Action_TypeInfo);
    sub_1C713B0(&Method_RecoverItemComponent_setRequestInfo__);
    sub_1C713B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4CC133A = 1;
  }
  if ( isRes )
  {
    this->fields.spendNum = useNum;
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v8 = (System_Action_o *)sub_1C715FC(System_Action_TypeInfo);
    System_Action___ctor(v8, (Il2CppObject *)this, Method_RecoverItemComponent_setRequestInfo__, 0);
    if ( !Instance )
LABEL_9:
      sub_1C71608(v9, v10);
  }
  else
  {
    v9 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !v9 )
      goto LABEL_9;
    Instance = v9;
    v8 = 0;
  }
  CommonUI__CloseApRecoverConfirmDlg((CommonUI_o *)Instance, v8, 0);
}


void RecoverItemComponent__OnClickItem(RecoverItemComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *dialog; // x20
  __int64 userEntity; // x0
  __int64 v5; // x1
  struct RecoverDlgComponent_o *v6; // x8
  System_String_o *v7; // x20
  System_String_o *v8; // x21
  Il2CppObject *v9; // x0
  System_String_o *v10; // x24
  Il2CppObject *mText; // x23
  System_String_o *v12; // x21
  Il2CppObject *v13; // x0
  struct UILabel_o *itemNameLb; // x8
  System_String_o *v15; // x21
  System_String_o *v16; // x22
  _QWORD *v17; // x8
  System_Reflection_MethodBase_o *v18; // x0
  int32_t v19; // w8
  int32_t usrMaxAp; // w9
  System_String_o **v21; // x8
  System_String_o *v22; // x25
  System_String_o *v23; // x25
  System_Object_array *v24; // x26
  Il2CppObject *v25; // x24
  Il2CppObject *v26; // x24
  Il2CppObject *v27; // x24
  Il2CppObject *v28; // x24
  Il2CppObject *v29; // x24
  Il2CppObject **v30; // x0
  System_String_o *v31; // x25
  System_Object_array *v32; // x26
  __int64 v33; // x24
  __int64 v34; // x24
  __int64 v35; // x24
  __int64 v36; // x24
  __int64 v37; // x24
  System_String_o *v38; // x24
  Il2CppObject *v39; // x23
  CommonConfirmDialog_ClickDelegate_o *v40; // x25
  System_String_o **v41; // x8
  System_String_o *v42; // x25
  Il2CppObject *v43; // x24
  Il2CppObject *v44; // x24
  Il2CppObject *v45; // x24
  Il2CppObject *v46; // x24
  Il2CppObject *v47; // x24
  System_String_o *v48; // x23
  Il2CppObject *v49; // x25
  CommonConfirmDialog_ClickDelegate_o *v50; // x26
  System_String_o *v51; // x0
  System_String_o *v52; // x20
  Il2CppObject *v53; // x21
  System_Action_o *v54; // x22
  System_String_o *v55; // x0
  System_String_o *v56; // x20
  Il2CppObject *Instance; // x21
  System_Action_o *v58; // x22
  Il2CppObject *v59; // x0
  int32_t targetId; // w20
  int32_t needAp; // w21
  CommonUI_o *v62; // x22
  System_Action_bool__int__o *v63; // x23
  __int64 v64; // x0
  int32_t v65; // [xsp+48h] [xbp-78h] BYREF
  int32_t v66; // [xsp+4Ch] [xbp-74h] BYREF
  int32_t recvSum; // [xsp+50h] [xbp-70h] BYREF
  int32_t usrMaxRp; // [xsp+54h] [xbp-6Ch] BYREF
  int32_t usrCurrentRp; // [xsp+58h] [xbp-68h] BYREF
  int32_t spendNum; // [xsp+5Ch] [xbp-64h] BYREF

  if ( (byte_4CC1338 & 1) == 0 )
  {
    sub_1C713B0(&System_Action_bool__int__TypeInfo);
    sub_1C713B0(&System_Action_TypeInfo);
    sub_1C713B0(&BalanceConfig_TypeInfo);
    sub_1C713B0(&CommonConfirmDialog_ClickDelegate_TypeInfo);
    sub_1C713B0(&int_TypeInfo);
    sub_1C713B0(&LocalizationManager_TypeInfo);
    sub_1C713B0(&object___TypeInfo);
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    sub_1C713B0(&Method_RecoverItemComponent_CloseApRecovDlg__);
    sub_1C713B0(&Method_RecoverItemComponent_OnClickItem__);
    sub_1C713B0(&Method_RecoverItemComponent_closeNotificationDlg__);
    sub_1C713B0(&Method_RecoverItemComponent_spendItemDlg__);
    sub_1C713B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C713B0(&StringLiteral_11171/*"RP_RECOVER_CONFIRM_MSG"*/);
    sub_1C713B0(&StringLiteral_3523/*"CMDSPELL_CURRENT_NUM"*/);
    sub_1C713B0(&StringLiteral_3675/*"COMMAND_SPELL_TXT"*/);
    sub_1C713B0(&StringLiteral_2023/*"AP_RECOVER_CONFIRM_MSG"*/);
    sub_1C713B0(&StringLiteral_11169/*"RP_FULL_MSG"*/);
    sub_1C713B0(&StringLiteral_14820/*"UNIT_INFO"*/);
    sub_1C713B0(&StringLiteral_2019/*"AP_ADD_CONFIRM_MSG"*/);
    sub_1C713B0(&StringLiteral_3681/*"COMMON_CONFIRM_DECIDE"*/);
    sub_1C713B0(&StringLiteral_3679/*"COMMON_CONFIRM_CANCEL"*/);
    sub_1C713B0(&StringLiteral_2020/*"AP_ADD_CONFIRM_MSG_OVER"*/);
    sub_1C713B0(&StringLiteral_2024/*"AP_RECOVER_CONFIRM_MSG_OVER"*/);
    sub_1C713B0(&StringLiteral_2021/*"AP_FULL_MSG"*/);
    sub_1C713B0(&StringLiteral_1/*""*/);
    sub_1C713B0(&StringLiteral_2029/*"AP_RECOVER_STONEPAY_WARNING_MSG"*/);
    byte_4CC1338 = 1;
  }
  if ( !this->fields.isEnableSelect )
    return;
  dialog = (UnityEngine_Object_o *)this->fields.dialog;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  userEntity = UnityEngine_Object__op_Inequality(dialog, 0, 0);
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
  v8 = LocalizationManager__Get((System_String_o *)StringLiteral_14820/*"UNIT_INFO"*/, 0);
  spendNum = this->fields.spendNum;
  v9 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &spendNum);
  userEntity = (__int64)System_String__Format(v8, v9, 0);
  v10 = (System_String_o *)userEntity;
  if ( this->fields.currentType == 1 )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    mText = (Il2CppObject *)LocalizationManager__Get((System_String_o *)StringLiteral_3675/*"COMMAND_SPELL_TXT"*/, 0);
    if ( this->fields.currentType == 1 )
    {
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v12 = LocalizationManager__Get((System_String_o *)StringLiteral_3523/*"CMDSPELL_CURRENT_NUM"*/, 0);
      spendNum = this->fields.spendNum;
      v13 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &spendNum);
      v10 = System_String__Format(v12, v13, 0);
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
  v15 = LocalizationManager__Get((System_String_o *)StringLiteral_3681/*"COMMON_CONFIRM_DECIDE"*/, 0);
  v16 = LocalizationManager__Get((System_String_o *)StringLiteral_3679/*"COMMON_CONFIRM_CANCEL"*/, 0);
  v17 = Method_RecoverItemComponent_OnClickItem__;
  if ( (*((_BYTE *)Method_RecoverItemComponent_OnClickItem__ + 83) & 2) != 0 )
    v17 = (_QWORD *)sub_1C713C8(Method_RecoverItemComponent_OnClickItem__);
  v18 = (System_Reflection_MethodBase_o *)sub_1C71394(v17, v17[4]);
  OverwriteAssetSoundName__PlaySystemSe(v18, 0, 0, 0);
  if ( !this->fields.isAp )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v31 = LocalizationManager__Get((System_String_o *)StringLiteral_11171/*"RP_RECOVER_CONFIRM_MSG"*/, 0);
    userEntity = sub_1C71458(object___TypeInfo, 7);
    if ( !userEntity )
      goto LABEL_140;
    v32 = (System_Object_array *)userEntity;
    if ( mText )
    {
      userEntity = sub_1C714EC(mText, *(_QWORD *)(*(_QWORD *)userEntity + 64LL));
      if ( !userEntity )
        goto LABEL_141;
    }
    if ( LODWORD(v32->max_length) )
    {
      v32->m_Items[0] = mText;
      userEntity = sub_1C71354(v32->m_Items, mText);
      if ( v10 )
      {
        userEntity = sub_1C714EC(v10, v32->obj.klass->_1.element_class);
        if ( !userEntity )
          goto LABEL_141;
      }
      if ( LODWORD(v32->max_length) > 1 )
      {
        v32->m_Items[1] = (Il2CppObject *)v10;
        sub_1C71354(&v32->m_Items[1], v10);
        spendNum = this->fields.recvRpNum;
        userEntity = j_il2cpp_value_box_0(int_TypeInfo, &spendNum);
        v33 = userEntity;
        if ( userEntity )
        {
          userEntity = sub_1C714EC(userEntity, v32->obj.klass->_1.element_class);
          if ( !userEntity )
            goto LABEL_141;
        }
        if ( LODWORD(v32->max_length) > 2 )
        {
          v32->m_Items[2] = (Il2CppObject *)v33;
          sub_1C71354(&v32->m_Items[2], v33);
          usrCurrentRp = this->fields.usrCurrentRp;
          userEntity = j_il2cpp_value_box_0(int_TypeInfo, &usrCurrentRp);
          v34 = userEntity;
          if ( userEntity )
          {
            userEntity = sub_1C714EC(userEntity, v32->obj.klass->_1.element_class);
            if ( !userEntity )
              goto LABEL_141;
          }
          if ( LODWORD(v32->max_length) > 3 )
          {
            v32->m_Items[3] = (Il2CppObject *)v34;
            sub_1C71354(&v32->m_Items[3], v34);
            usrMaxRp = this->fields.usrMaxRp;
            userEntity = j_il2cpp_value_box_0(int_TypeInfo, &usrMaxRp);
            v35 = userEntity;
            if ( userEntity )
            {
              userEntity = sub_1C714EC(userEntity, v32->obj.klass->_1.element_class);
              if ( !userEntity )
                goto LABEL_141;
            }
            if ( LODWORD(v32->max_length) > 4 )
            {
              v32->m_Items[4] = (Il2CppObject *)v35;
              sub_1C71354(&v32->m_Items[4], v35);
              recvSum = this->fields.recvSum;
              userEntity = j_il2cpp_value_box_0(int_TypeInfo, &recvSum);
              v36 = userEntity;
              if ( userEntity )
              {
                userEntity = sub_1C714EC(userEntity, v32->obj.klass->_1.element_class);
                if ( !userEntity )
                  goto LABEL_141;
              }
              if ( LODWORD(v32->max_length) > 5 )
              {
                v32->m_Items[5] = (Il2CppObject *)v36;
                sub_1C71354(&v32->m_Items[5], v36);
                v66 = this->fields.usrMaxRp;
                userEntity = j_il2cpp_value_box_0(int_TypeInfo, &v66);
                v37 = userEntity;
                if ( userEntity )
                {
                  userEntity = sub_1C714EC(userEntity, v32->obj.klass->_1.element_class);
                  if ( !userEntity )
                    goto LABEL_141;
                }
                if ( LODWORD(v32->max_length) > 6 )
                {
                  v32->m_Items[6] = (Il2CppObject *)v37;
                  sub_1C71354(&v32->m_Items[6], v37);
                  userEntity = (__int64)System_String__Format_64073168(v31, v32, 0);
                  if ( !this->fields.userEntity )
                    goto LABEL_140;
                  v38 = (System_String_o *)userEntity;
                  if ( UserGameEntity__getRp(this->fields.userEntity, 0) < this->fields.usrMaxRp )
                    goto LABEL_80;
                  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                  v55 = LocalizationManager__Get((System_String_o *)StringLiteral_11169/*"RP_FULL_MSG"*/, 0);
                  v56 = System_String__Format(v55, mText, 0);
                  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
                  v58 = (System_Action_o *)sub_1C715FC(System_Action_TypeInfo);
                  System_Action___ctor(v58, (Il2CppObject *)this, Method_RecoverItemComponent_closeNotificationDlg__, 0);
                  if ( !Instance )
                    goto LABEL_140;
                  CommonUI__OpenNotificationDialog(
                    (CommonUI_o *)Instance,
                    (System_String_o *)StringLiteral_1/*""*/,
                    v56,
                    v58,
                    -1,
                    0,
                    0,
                    0,
                    1,
                    0,
                    1,
                    0,
                    0,
                    0.0,
                    0,
                    0);
                  return;
                }
              }
            }
          }
        }
      }
    }
LABEL_139:
    sub_1C71610(userEntity);
  }
  v19 = this->fields.recvSum;
  usrMaxAp = this->fields.usrMaxAp;
  if ( !this->fields.isAddAp )
  {
    if ( v19 <= usrMaxAp )
      v41 = (System_String_o **)&StringLiteral_2023/*"AP_RECOVER_CONFIRM_MSG"*/;
    else
      v41 = (System_String_o **)&StringLiteral_2024/*"AP_RECOVER_CONFIRM_MSG_OVER"*/;
    v42 = *v41;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v23 = LocalizationManager__Get(v42, 0);
    userEntity = sub_1C71458(object___TypeInfo, 8);
    if ( !userEntity )
      goto LABEL_140;
    v24 = (System_Object_array *)userEntity;
    if ( mText )
    {
      userEntity = sub_1C714EC(mText, *(_QWORD *)(*(_QWORD *)userEntity + 64LL));
      if ( !userEntity )
        goto LABEL_141;
    }
    if ( LODWORD(v24->max_length) )
    {
      v24->m_Items[0] = mText;
      userEntity = sub_1C71354(v24->m_Items, mText);
      if ( v10 )
      {
        userEntity = sub_1C714EC(v10, v24->obj.klass->_1.element_class);
        if ( !userEntity )
          goto LABEL_141;
      }
      if ( LODWORD(v24->max_length) > 1 )
      {
        v24->m_Items[1] = (Il2CppObject *)v10;
        sub_1C71354(&v24->m_Items[1], v10);
        spendNum = this->fields.apRcvRate;
        userEntity = j_il2cpp_value_box_0(int_TypeInfo, &spendNum);
        v43 = (Il2CppObject *)userEntity;
        if ( userEntity )
        {
          userEntity = sub_1C714EC(userEntity, v24->obj.klass->_1.element_class);
          if ( !userEntity )
            goto LABEL_141;
        }
        if ( LODWORD(v24->max_length) > 2 )
        {
          v24->m_Items[2] = v43;
          sub_1C71354(&v24->m_Items[2], v43);
          usrCurrentRp = this->fields.recvApNum;
          userEntity = j_il2cpp_value_box_0(int_TypeInfo, &usrCurrentRp);
          v44 = (Il2CppObject *)userEntity;
          if ( userEntity )
          {
            userEntity = sub_1C714EC(userEntity, v24->obj.klass->_1.element_class);
            if ( !userEntity )
              goto LABEL_141;
          }
          if ( LODWORD(v24->max_length) > 3 )
          {
            v24->m_Items[3] = v44;
            sub_1C71354(&v24->m_Items[3], v44);
            usrMaxRp = this->fields.usrCurrentAp;
            userEntity = j_il2cpp_value_box_0(int_TypeInfo, &usrMaxRp);
            v45 = (Il2CppObject *)userEntity;
            if ( userEntity )
            {
              userEntity = sub_1C714EC(userEntity, v24->obj.klass->_1.element_class);
              if ( !userEntity )
                goto LABEL_141;
            }
            if ( LODWORD(v24->max_length) > 4 )
            {
              v24->m_Items[4] = v45;
              sub_1C71354(&v24->m_Items[4], v45);
              recvSum = this->fields.usrMaxAp;
              userEntity = j_il2cpp_value_box_0(int_TypeInfo, &recvSum);
              v46 = (Il2CppObject *)userEntity;
              if ( userEntity )
              {
                userEntity = sub_1C714EC(userEntity, v24->obj.klass->_1.element_class);
                if ( !userEntity )
                  goto LABEL_141;
              }
              if ( LODWORD(v24->max_length) > 5 )
              {
                v24->m_Items[5] = v46;
                sub_1C71354(&v24->m_Items[5], v46);
                v66 = this->fields.recvSum;
                userEntity = j_il2cpp_value_box_0(int_TypeInfo, &v66);
                v47 = (Il2CppObject *)userEntity;
                if ( userEntity )
                {
                  userEntity = sub_1C714EC(userEntity, v24->obj.klass->_1.element_class);
                  if ( !userEntity )
                    goto LABEL_141;
                }
                if ( LODWORD(v24->max_length) > 6 )
                {
                  v24->m_Items[6] = v47;
                  sub_1C71354(&v24->m_Items[6], v47);
                  v65 = this->fields.usrMaxAp;
                  userEntity = j_il2cpp_value_box_0(int_TypeInfo, &v65);
                  v29 = (Il2CppObject *)userEntity;
                  if ( userEntity )
                  {
                    userEntity = sub_1C714EC(userEntity, v24->obj.klass->_1.element_class);
                    if ( !userEntity )
                      goto LABEL_141;
                  }
                  if ( LODWORD(v24->max_length) > 7 )
                  {
                    v24->m_Items[7] = v29;
                    v30 = &v24->m_Items[7];
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
  if ( v19 <= usrMaxAp )
    v21 = (System_String_o **)&StringLiteral_2019/*"AP_ADD_CONFIRM_MSG"*/;
  else
    v21 = (System_String_o **)&StringLiteral_2020/*"AP_ADD_CONFIRM_MSG_OVER"*/;
  v22 = *v21;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v23 = LocalizationManager__Get(v22, 0);
  userEntity = sub_1C71458(object___TypeInfo, 7);
  if ( !userEntity )
    goto LABEL_140;
  v24 = (System_Object_array *)userEntity;
  if ( mText )
  {
    userEntity = sub_1C714EC(mText, *(_QWORD *)(*(_QWORD *)userEntity + 64LL));
    if ( !userEntity )
      goto LABEL_141;
  }
  if ( !LODWORD(v24->max_length) )
    goto LABEL_139;
  v24->m_Items[0] = mText;
  userEntity = sub_1C71354(v24->m_Items, mText);
  if ( v10 )
  {
    userEntity = sub_1C714EC(v10, v24->obj.klass->_1.element_class);
    if ( !userEntity )
      goto LABEL_141;
  }
  if ( LODWORD(v24->max_length) <= 1 )
    goto LABEL_139;
  v24->m_Items[1] = (Il2CppObject *)v10;
  sub_1C71354(&v24->m_Items[1], v10);
  spendNum = this->fields.recvApNum;
  userEntity = j_il2cpp_value_box_0(int_TypeInfo, &spendNum);
  v25 = (Il2CppObject *)userEntity;
  if ( userEntity )
  {
    userEntity = sub_1C714EC(userEntity, v24->obj.klass->_1.element_class);
    if ( !userEntity )
      goto LABEL_141;
  }
  if ( LODWORD(v24->max_length) <= 2 )
    goto LABEL_139;
  v24->m_Items[2] = v25;
  sub_1C71354(&v24->m_Items[2], v25);
  usrCurrentRp = this->fields.usrCurrentAp;
  userEntity = j_il2cpp_value_box_0(int_TypeInfo, &usrCurrentRp);
  v26 = (Il2CppObject *)userEntity;
  if ( userEntity )
  {
    userEntity = sub_1C714EC(userEntity, v24->obj.klass->_1.element_class);
    if ( !userEntity )
      goto LABEL_141;
  }
  if ( LODWORD(v24->max_length) <= 3 )
    goto LABEL_139;
  v24->m_Items[3] = v26;
  sub_1C71354(&v24->m_Items[3], v26);
  usrMaxRp = this->fields.usrMaxAp;
  userEntity = j_il2cpp_value_box_0(int_TypeInfo, &usrMaxRp);
  v27 = (Il2CppObject *)userEntity;
  if ( userEntity )
  {
    userEntity = sub_1C714EC(userEntity, v24->obj.klass->_1.element_class);
    if ( !userEntity )
      goto LABEL_141;
  }
  if ( LODWORD(v24->max_length) <= 4 )
    goto LABEL_139;
  v24->m_Items[4] = v27;
  sub_1C71354(&v24->m_Items[4], v27);
  recvSum = this->fields.recvSum;
  userEntity = j_il2cpp_value_box_0(int_TypeInfo, &recvSum);
  v28 = (Il2CppObject *)userEntity;
  if ( userEntity )
  {
    userEntity = sub_1C714EC(userEntity, v24->obj.klass->_1.element_class);
    if ( !userEntity )
      goto LABEL_141;
  }
  if ( LODWORD(v24->max_length) <= 5 )
    goto LABEL_139;
  v24->m_Items[5] = v28;
  sub_1C71354(&v24->m_Items[5], v28);
  v66 = this->fields.usrMaxAp;
  userEntity = j_il2cpp_value_box_0(int_TypeInfo, &v66);
  v29 = (Il2CppObject *)userEntity;
  if ( userEntity )
  {
    userEntity = sub_1C714EC(userEntity, v24->obj.klass->_1.element_class);
    if ( !userEntity )
    {
LABEL_141:
      v64 = sub_1C7162C();
      sub_1C714D8(v64, 0);
    }
  }
  if ( LODWORD(v24->max_length) <= 6 )
    goto LABEL_139;
  v24->m_Items[6] = v29;
  v30 = &v24->m_Items[6];
LABEL_115:
  sub_1C71354(v30, v29);
  v38 = System_String__Format_64073168(v23, v24, 0);
  userEntity = (__int64)this->fields.userEntity;
  if ( !userEntity )
    goto LABEL_140;
  if ( UserGameEntity__getAct((UserGameEntity_o *)userEntity, 0) < this->fields.usrMaxAp )
  {
    if ( this->fields.currentType == 2 )
    {
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v48 = LocalizationManager__Get((System_String_o *)StringLiteral_2029/*"AP_RECOVER_STONEPAY_WARNING_MSG"*/, 0);
      v49 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v50 = (CommonConfirmDialog_ClickDelegate_o *)sub_1C715FC(CommonConfirmDialog_ClickDelegate_TypeInfo);
      CommonConfirmDialog_ClickDelegate___ctor(v50, (Il2CppObject *)this, Method_RecoverItemComponent_spendItemDlg__, 0);
      userEntity = (__int64)BalanceConfig_TypeInfo;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
        userEntity = j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      if ( v49 )
      {
        CommonUI__OpenConfirmDecideDlgAddMsgFrame(
          (CommonUI_o *)v49,
          v7,
          v38,
          v48,
          v15,
          v16,
          v50,
          BalanceConfig_TypeInfo->static_fields->DefaultFontSize,
          0.0,
          86.0,
          0,
          1,
          0,
          240,
          0,
          0);
        return;
      }
LABEL_140:
      sub_1C71608(userEntity, v5);
    }
    if ( this->fields.isAddAp || this->fields.apRcvRate != 100 || this->fields.spendNum >= 2 )
    {
      v59 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      targetId = this->fields.targetId;
      needAp = this->fields.needAp;
      v62 = (CommonUI_o *)v59;
      v63 = (System_Action_bool__int__o *)sub_1C715FC(System_Action_bool__int__TypeInfo);
      System_Action_bool__int____ctor(v63, (Il2CppObject *)this, Method_RecoverItemComponent_CloseApRecovDlg__, 0);
      if ( !v62 )
        goto LABEL_140;
      CommonUI__OpenApRecoverConfirmDlg(v62, targetId, needAp, v63, 0);
      return;
    }
LABEL_80:
    v39 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v40 = (CommonConfirmDialog_ClickDelegate_o *)sub_1C715FC(CommonConfirmDialog_ClickDelegate_TypeInfo);
    CommonConfirmDialog_ClickDelegate___ctor(v40, (Il2CppObject *)this, Method_RecoverItemComponent_spendItemDlg__, 0);
    userEntity = (__int64)BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      userEntity = j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    if ( v39 )
    {
      CommonUI__OpenConfirmDecideDlg(
        (CommonUI_o *)v39,
        v7,
        v38,
        v15,
        v16,
        v40,
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
        0,
        0);
      return;
    }
    goto LABEL_140;
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v51 = LocalizationManager__Get((System_String_o *)StringLiteral_2021/*"AP_FULL_MSG"*/, 0);
  v52 = System_String__Format(v51, mText, 0);
  v53 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v54 = (System_Action_o *)sub_1C715FC(System_Action_TypeInfo);
  System_Action___ctor(v54, (Il2CppObject *)this, Method_RecoverItemComponent_closeNotificationDlg__, 0);
  if ( !v53 )
    goto LABEL_140;
  CommonUI__OpenNotificationDialog(
    (CommonUI_o *)v53,
    (System_String_o *)StringLiteral_1/*""*/,
    v52,
    v54,
    -1,
    0,
    0,
    0,
    1,
    0,
    0,
    0,
    0,
    0.0,
    0,
    0);
}


void RecoverItemComponent___AttachStoneCountRefreshComponent_b__38_0(
        RecoverItemComponent_o *this,
        int32_t stoneCount,
        const MethodInfo *method)
{
  UILabel_o *currentNumLb; // x19
  Il2CppObject *v6; // x0
  System_String_o *v7; // x0
  __int64 v8; // x1
  int32_t v9; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4CC133E & 1) == 0 )
  {
    sub_1C713B0(&int_TypeInfo);
    sub_1C713B0(&StringLiteral_25222/*"{0:N0}"*/);
    byte_4CC133E = 1;
  }
  currentNumLb = this->fields.currentNumLb;
  v9 = stoneCount;
  v6 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v9);
  v7 = System_String__Format((System_String_o *)StringLiteral_25222/*"{0:N0}"*/, v6, 0);
  if ( !currentNumLb )
    sub_1C71608(v7, v8);
  UILabel__set_text(currentNumLb, v7, 0);
}


void RecoverItemComponent__add_callbackFunc(
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

  if ( (byte_4CC1333 & 1) == 0 )
  {
    sub_1C713B0(&RecoverItemComponent_CallbackFunc_TypeInfo);
    byte_4CC1333 = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v6 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Combine(v6, (System_Delegate_o *)value, 0);
    if ( v8 )
    {
      if ( (RecoverItemComponent_CallbackFunc_c *)v8->klass != RecoverItemComponent_CallbackFunc_TypeInfo )
        break;
    }
    v9 = sub_1CCD184(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (RecoverItemComponent_o *)sub_1C719A4(v8);
  RecoverItemComponent__remove_callbackFunc(v11, v12, v13);
}


void RecoverItemComponent__closeNotificationDlg(RecoverItemComponent_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v3; // x1

  if ( (byte_4CC133C & 1) == 0 )
  {
    sub_1C713B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4CC133C = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1C71608(0, v3);
  CommonUI__CloseNotificationDialog((CommonUI_o *)Instance, 0);
}


void RecoverItemComponent__remove_callbackFunc(
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

  if ( (byte_4CC1334 & 1) == 0 )
  {
    sub_1C713B0(&RecoverItemComponent_CallbackFunc_TypeInfo);
    byte_4CC1334 = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v6 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Remove(v6, (System_Delegate_o *)value, 0);
    if ( v8 )
    {
      if ( (RecoverItemComponent_CallbackFunc_c *)v8->klass != RecoverItemComponent_CallbackFunc_TypeInfo )
        break;
    }
    v9 = sub_1CCD184(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (RecoverItemComponent_o *)sub_1C719A4(v8);
  RecoverItemComponent__AttachStoneCountRefreshComponent(v11, v12);
}


void RecoverItemComponent__setAPRecvItemInfo(
        RecoverItemComponent_o *this,
        RecoverEntity_o *data,
        int32_t needAp,
        RecoverDlgComponent_o *dlg,
        RecoverItemComponent_CallbackFunc_o *callback,
        const MethodInfo *method)
{
  RecoverItemComponent_o *v10; // x19
  int32_t targetId; // w8
  UserGameEntity_o *SelfUserGame; // x0
  RecoverItemComponent_o **p_userEntity; // x23
  struct UserGameEntity_o *userEntity; // x8
  int32_t actMax; // w8
  unsigned int *p_spendNum; // x20
  UILabel_o *currentInfoLb; // x24
  UILabel_o *spendInfoLb; // x24
  int32_t currentType; // w8
  RecoverItemComponent_o *v20; // x21
  RecoverItemComponent_o *v21; // x22
  int32_t v22; // w8
  UILabel_o *v23; // x21
  Il2CppObject *v24; // x0
  UILabel_o *v25; // x21
  const MethodInfo *v26; // x1
  System_String_o *v27; // x20
  Il2CppObject *v28; // x0
  System_String_o *v29; // x0
  UILabel_o *v30; // x20
  Il2CppObject *v31; // x21
  System_String_o *v32; // x22
  Il2CppObject *v33; // x24
  Il2CppObject *v34; // x0
  bool v35; // cc
  int v36; // w8
  UILabel_o *v37; // x22
  UILabel_o *v38; // x22
  Il2CppObject *v39; // x0
  CommandSpellEntity_o *v40; // x22
  int32_t type; // w8
  struct ItemIconComponent_o *itemIconInfo; // x27
  float v43; // s0
  int v44; // w8
  float usrMaxAp; // s8
  float v46; // s9
  float v47; // s8
  unsigned int v48; // w9
  unsigned int v49; // w8
  System_String_o *v50; // x23
  Il2CppObject *v51; // x0
  System_String_o *v52; // x0
  UILabel_o *itemDetailLb; // x23
  Il2CppObject *v54; // x24
  System_String_o *v55; // x25
  Il2CppObject *v56; // x26
  Il2CppObject *v57; // x0
  int backSprite; // w22
  float v59; // s8
  float v60; // s8
  unsigned int v61; // w9
  unsigned int v62; // w8
  ItemEntity_o *RecvItemData; // x0
  ItemEntity_o *v64; // x24
  int32_t num; // w28
  int32_t v66; // w8
  BalanceConfig_c *v67; // x0
  float v68; // s8
  int v69; // w8
  int v70; // s0
  float v71; // s9
  float v72; // s8
  int v73; // w8
  float v74; // s8
  float v75; // s8
  int32_t v76; // w11
  int32_t v77; // w12
  unsigned int v78; // w8
  System_String_o *v79; // x23
  Il2CppObject *v80; // x0
  System_String_o *v81; // x0
  UILabel_o *v82; // x23
  Il2CppObject *v83; // x25
  System_String_o *v84; // x26
  Il2CppObject *v85; // x27
  Il2CppObject *v86; // x0
  int value; // w23
  float v88; // s8
  float v89; // s8
  unsigned int v90; // w8
  System_String_o *v91; // x21
  Il2CppObject *v92; // x0
  System_String_o *v93; // x0
  UILabel_o *v94; // x21
  Il2CppObject *v95; // x23
  System_String_o *v96; // x24
  Il2CppObject *v97; // x0
  UILabel_o *v98; // x21
  Il2CppObject *v99; // x0
  UILabel_o *v100; // x21
  int v101; // w8
  System_String_o *v102; // x21
  Il2CppObject *v103; // x0
  System_String_o *v104; // x0
  UILabel_o *v105; // x21
  Il2CppObject *v106; // x22
  System_String_o *v107; // x23
  Il2CppObject *v108; // x0
  UILabel_o *currentNumLb; // x21
  UILabel_o *spendNumLb; // x21
  char v111; // w9
  int32_t v112; // [xsp+4h] [xbp-8Ch] BYREF
  int32_t recvApNum; // [xsp+8h] [xbp-88h] BYREF
  int32_t apRcvRate; // [xsp+Ch] [xbp-84h] BYREF
  int32_t spendNum; // [xsp+10h] [xbp-80h] BYREF
  int32_t CommandSpell; // [xsp+14h] [xbp-7Ch] BYREF
  UserItemEntity_o *entity; // [xsp+18h] [xbp-78h] BYREF

  v10 = this;
  if ( (byte_4CC1335 & 1) == 0 )
  {
    sub_1C713B0(&BalanceConfig_TypeInfo);
    sub_1C713B0(&Method_DataManager_GetMasterData_CommandSpellMaster___);
    sub_1C713B0(&Method_DataManager_GetMasterData_ItemMaster___);
    sub_1C713B0(&Method_DataManager_GetMasterData_StoneShopMaster___);
    sub_1C713B0(&Method_DataManager_GetMasterData_UserItemMaster___);
    sub_1C713B0(&Method_DataMasterBase_CommandSpellMaster__CommandSpellEntity__int__GetEntity__);
    sub_1C713B0(&Method_DataMasterBase_StoneShopMaster__StoneShopEntity__int__GetEntity__);
    sub_1C713B0(&int_TypeInfo);
    sub_1C713B0(&LocalizationManager_TypeInfo);
    sub_1C713B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C713B0(&StringLiteral_3523/*"CMDSPELL_CURRENT_NUM"*/);
    sub_1C713B0(&StringLiteral_1914/*"ADD_RECOVER_CMDSPELL_TXT"*/);
    sub_1C713B0(&StringLiteral_3525/*"CMDSPELL_SPEND_NUM_TXT"*/);
    sub_1C713B0(&StringLiteral_25222/*"{0:N0}"*/);
    sub_1C713B0(&StringLiteral_858/*"-"*/);
    sub_1C713B0(&StringLiteral_14820/*"UNIT_INFO"*/);
    sub_1C713B0(&StringLiteral_12282/*"SPEND_NUM_TXT"*/);
    sub_1C713B0(&StringLiteral_3931/*"CURRENT_NUM_TXT"*/);
    sub_1C713B0(&StringLiteral_1915/*"ADD_RECOVER_NUM_TXT"*/);
    sub_1C713B0(&StringLiteral_2026/*"AP_RECOVER_NUM_TXT"*/);
    this = (RecoverItemComponent_o *)sub_1C713B0(&StringLiteral_3524/*"CMDSPELL_CURRENT_NUM_TXT"*/);
    byte_4CC1335 = 1;
  }
  entity = 0;
  CommandSpell = 0;
  if ( !data )
    goto LABEL_152;
  v10->fields.currentType = data->fields.recoverType;
  v10->fields.recvTarget = data->fields.target;
  targetId = data->fields.targetId;
  v10->fields.isEnableSelect = 0;
  v10->fields.targetId = targetId;
  v10->fields.dialog = dlg;
  sub_1C71354(&v10->fields.dialog, dlg);
  v10->fields.callbackFunc = callback;
  v10->fields.needAp = needAp;
  *(_WORD *)&v10->fields.isAp = 1;
  sub_1C71354(&v10->fields.callbackFunc, callback);
  this = (RecoverItemComponent_o *)v10->fields.maskImg;
  if ( !this )
    goto LABEL_152;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
  SelfUserGame = UserGameMaster__getSelfUserGame(0);
  v10->fields.userEntity = SelfUserGame;
  p_userEntity = (RecoverItemComponent_o **)&v10->fields.userEntity;
  sub_1C71354(&v10->fields.userEntity, SelfUserGame);
  this = (RecoverItemComponent_o *)v10->fields.userEntity;
  if ( !this )
    goto LABEL_152;
  this = (RecoverItemComponent_o *)UserGameEntity__getAct((UserGameEntity_o *)this, 0);
  userEntity = v10->fields.userEntity;
  v10->fields.usrCurrentAp = (int)this;
  if ( !userEntity )
    goto LABEL_152;
  actMax = userEntity->fields.actMax;
  v10->fields.spendNum = 1;
  p_spendNum = (unsigned int *)&v10->fields.spendNum;
  this = (RecoverItemComponent_o *)v10->fields.itemNameLb;
  v10->fields.usrMaxAp = actMax;
  v10->fields.recvApNum = actMax;
  v10->fields.apRcvRate = 100;
  if ( !this )
    goto LABEL_152;
  UILabel__set_text((UILabel_o *)this, (System_String_o *)StringLiteral_858/*"-"*/, 0);
  this = (RecoverItemComponent_o *)v10->fields.currentNumLb;
  if ( !this )
    goto LABEL_152;
  UILabel__set_text((UILabel_o *)this, (System_String_o *)StringLiteral_858/*"-"*/, 0);
  this = (RecoverItemComponent_o *)v10->fields.spendNumLb;
  if ( !this )
    goto LABEL_152;
  UILabel__set_text((UILabel_o *)this, (System_String_o *)StringLiteral_858/*"-"*/, 0);
  this = (RecoverItemComponent_o *)v10->fields.itemDetailLb;
  if ( !this )
    goto LABEL_152;
  UILabel__set_text((UILabel_o *)this, (System_String_o *)StringLiteral_858/*"-"*/, 0);
  currentInfoLb = v10->fields.currentInfoLb;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  this = (RecoverItemComponent_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3931/*"CURRENT_NUM_TXT"*/, 0);
  if ( !currentInfoLb )
    goto LABEL_152;
  UILabel__set_text(currentInfoLb, (System_String_o *)this, 0);
  spendInfoLb = v10->fields.spendInfoLb;
  this = (RecoverItemComponent_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12282/*"SPEND_NUM_TXT"*/, 0);
  if ( !spendInfoLb )
    goto LABEL_152;
  UILabel__set_text(spendInfoLb, (System_String_o *)this, 0);
  currentType = v10->fields.currentType;
  if ( currentType == 1 )
  {
    this = (RecoverItemComponent_o *)v10->fields.itemIconInfo;
    if ( !this )
      goto LABEL_152;
    this = (RecoverItemComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( !this )
      goto LABEL_152;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
    this = (RecoverItemComponent_o *)v10->fields.cmdSpellBg;
    if ( !this )
      goto LABEL_152;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0);
    v37 = v10->fields.currentInfoLb;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    this = (RecoverItemComponent_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3524/*"CMDSPELL_CURRENT_NUM_TXT"*/, 0);
    if ( !v37 )
      goto LABEL_152;
    UILabel__set_text(v37, (System_String_o *)this, 0);
    v38 = v10->fields.spendInfoLb;
    this = (RecoverItemComponent_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3525/*"CMDSPELL_SPEND_NUM_TXT"*/, 0);
    if ( !v38 )
      goto LABEL_152;
    UILabel__set_text(v38, (System_String_o *)this, 0);
    this = (RecoverItemComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !this )
      goto LABEL_152;
    this = (RecoverItemComponent_o *)DataManager__GetMasterData_object_(
                                       (DataManager_o *)this,
                                       (const MethodInfo_314B10C *)Method_DataManager_GetMasterData_CommandSpellMaster___);
    if ( !this )
      goto LABEL_152;
    v39 = DataMasterBase_object__object__int___GetEntity(
            (DataMasterBase_TMaster__TEntity__PKType__o *)this,
            v10->fields.targetId,
            (const MethodInfo_3408E80 *)Method_DataMasterBase_CommandSpellMaster__CommandSpellEntity__int__GetEntity__);
    if ( !v39 )
      goto LABEL_151;
    v40 = (CommandSpellEntity_o *)v39;
    this = (RecoverItemComponent_o *)v10->fields.cmdSpellIcon;
    if ( !this )
      goto LABEL_152;
    CommandSpellIconComponent__SetData((CommandSpellIconComponent_o *)this, v10->fields.userEntity, 0);
    this = (RecoverItemComponent_o *)v10->fields.itemNameLb;
    if ( !this )
      goto LABEL_152;
    UILabel__set_text((UILabel_o *)this, v40->fields.name, 0);
    this = *p_userEntity;
    if ( !*p_userEntity )
      goto LABEL_152;
    CommandSpell = UserGameEntity__getCommandSpell((UserGameEntity_o *)this, 0);
    *p_spendNum = v40->fields.consume;
    this = (RecoverItemComponent_o *)CommandSpellEntity__getValues(v40, 0);
    if ( !this )
      goto LABEL_152;
    if ( LODWORD(this->fields.m_CancellationTokenSource) )
    {
      type = v40->fields.type;
      itemIconInfo = this->fields.itemIconInfo;
      if ( type == 3 )
      {
        if ( !itemIconInfo )
          goto LABEL_152;
        if ( !LODWORD(itemIconInfo->fields.m_CancellationTokenSource) )
          goto LABEL_153;
        v43 = (float)((float)SLODWORD(itemIconInfo->fields.backSprite) / 1000.0) * 100.0;
        v44 = (int)v43;
        if ( v43 == INFINITY )
          v44 = 0x80000000;
        v10->fields.apRcvRate = v44;
        usrMaxAp = (float)v10->fields.usrMaxAp;
        v46 = (float)SLODWORD(itemIconInfo->fields.backSprite) / 1000.0;
        if ( !byte_4CC13B2 )
        {
          sub_1C713B0(&System_Math_TypeInfo);
          byte_4CC13B2 = 1;
        }
        v47 = v46 * usrMaxAp;
        if ( !System_Math_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
        v48 = vcvtps_s32_f32(v47);
        if ( ceilf(v47) == INFINITY )
          v49 = 0x80000000;
        else
          v49 = v48;
        v10->fields.recvApNum = v49;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v50 = LocalizationManager__Get((System_String_o *)StringLiteral_3523/*"CMDSPELL_CURRENT_NUM"*/, 0);
        spendNum = v10->fields.spendNum;
        v51 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &spendNum);
        v52 = System_String__Format(v50, v51, 0);
        itemDetailLb = v10->fields.itemDetailLb;
        v54 = (Il2CppObject *)v52;
        v55 = LocalizationManager__Get((System_String_o *)StringLiteral_2026/*"AP_RECOVER_NUM_TXT"*/, 0);
        apRcvRate = v10->fields.apRcvRate;
        v56 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &apRcvRate);
        recvApNum = v10->fields.recvApNum;
        v57 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &recvApNum);
        this = (RecoverItemComponent_o *)System_String__Format_64073100(v55, v54, v56, v57, 0);
        if ( !itemDetailLb )
          goto LABEL_152;
        UILabel__set_text(itemDetailLb, (System_String_o *)this, 0);
        type = v40->fields.type;
      }
      if ( type != 4 )
      {
LABEL_144:
        currentNumLb = v10->fields.currentNumLb;
        this = (RecoverItemComponent_o *)System_Int32__ToString((int32_t)&CommandSpell, 0);
        if ( currentNumLb )
        {
          UILabel__set_text(currentNumLb, (System_String_o *)this, 0);
          spendNumLb = v10->fields.spendNumLb;
          this = (RecoverItemComponent_o *)System_Int32__ToString((int)v10 + 128, 0);
          if ( spendNumLb )
          {
            UILabel__set_text(spendNumLb, (System_String_o *)this, 0);
            v35 = CommandSpell < v10->fields.spendNum;
            v36 = v10->fields.recvApNum + v10->fields.usrCurrentAp;
            goto LABEL_147;
          }
        }
        goto LABEL_152;
      }
      if ( !itemIconInfo )
        goto LABEL_152;
      if ( LODWORD(itemIconInfo->fields.m_CancellationTokenSource) )
      {
        backSprite = (int)itemIconInfo->fields.backSprite;
        if ( needAp < 1 )
        {
          v62 = *p_spendNum;
        }
        else
        {
          v59 = (float)(needAp - v10->fields.usrCurrentAp) / (float)backSprite;
          if ( !byte_4CC13B2 )
          {
            sub_1C713B0(&System_Math_TypeInfo);
            byte_4CC13B2 = 1;
          }
          v60 = fmaxf(v59, 1.0);
          if ( !System_Math_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
          v61 = vcvtps_s32_f32(v60);
          if ( ceilf(v60) == INFINITY )
            v62 = 0x80000000;
          else
            v62 = v61;
          *p_spendNum = v62;
        }
        v10->fields.recvApNum = v62 * backSprite;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v102 = LocalizationManager__Get((System_String_o *)StringLiteral_3523/*"CMDSPELL_CURRENT_NUM"*/, 0);
        spendNum = v10->fields.spendNum;
        v103 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &spendNum);
        v104 = System_String__Format(v102, v103, 0);
        v105 = v10->fields.itemDetailLb;
        v106 = (Il2CppObject *)v104;
        v107 = LocalizationManager__Get((System_String_o *)StringLiteral_1914/*"ADD_RECOVER_CMDSPELL_TXT"*/, 0);
        apRcvRate = v10->fields.recvApNum;
        v108 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &apRcvRate);
        this = (RecoverItemComponent_o *)System_String__Format_64073032(v107, v106, v108, 0);
        if ( !v105 )
          goto LABEL_152;
        UILabel__set_text(v105, (System_String_o *)this, 0);
        v10->fields.isAddAp = 1;
        goto LABEL_144;
      }
    }
LABEL_153:
    sub_1C71610(this);
  }
  if ( currentType == 3 )
  {
    this = (RecoverItemComponent_o *)v10->fields.itemIconInfo;
    if ( this )
    {
      this = (RecoverItemComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
      if ( this )
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0);
        this = (RecoverItemComponent_o *)v10->fields.cmdSpellBg;
        if ( this )
        {
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
          RecvItemData = RecoverEntity__getRecvItemData(data, 0);
          if ( !RecvItemData )
            goto LABEL_151;
          v64 = RecvItemData;
          this = (RecoverItemComponent_o *)v10->fields.itemIconInfo;
          if ( this )
          {
            ItemIconComponent__SetItemImage_41193944(
              (ItemIconComponent_o *)this,
              v64->fields.imageId,
              v64->fields.bgImageId,
              v64->fields.type,
              0,
              1,
              0);
            this = (RecoverItemComponent_o *)v10->fields.itemIconInfo;
            if ( this )
            {
              this = (RecoverItemComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
              if ( this )
              {
                UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0);
                this = (RecoverItemComponent_o *)v10->fields.itemNameLb;
                if ( this )
                {
                  UILabel__set_text((UILabel_o *)this, v64->fields.name, 0);
                  *p_spendNum = 1;
                  this = (RecoverItemComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
                  if ( this )
                  {
                    this = (RecoverItemComponent_o *)DataManager__GetMasterData_object_(
                                                       (DataManager_o *)this,
                                                       (const MethodInfo_314B10C *)Method_DataManager_GetMasterData_UserItemMaster___);
                    if ( *p_userEntity )
                    {
                      if ( this )
                      {
                        this = (RecoverItemComponent_o *)UserItemMaster__TryGetEntity(
                                                           (UserItemMaster_o *)this,
                                                           &entity,
                                                           (*p_userEntity)->fields.m_CachedPtr,
                                                           v10->fields.targetId,
                                                           0);
                        if ( ((unsigned __int8)this & 1) != 0 )
                        {
                          if ( !entity )
                            goto LABEL_152;
                          num = entity->fields.num;
                        }
                        else
                        {
                          num = 0;
                        }
                        v66 = v64->fields.type;
                        if ( v66 == 3 )
                        {
                          v67 = BalanceConfig_TypeInfo;
                          if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
                          {
                            j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
                            v67 = BalanceConfig_TypeInfo;
                          }
                          v10->fields.spendNum = v67->static_fields->SpendApRecvItemNum;
                          v68 = (float)v64->fields.value / 1000.0;
                          if ( (float)(v68 * 100.0) == INFINITY )
                            v69 = 0x80000000;
                          else
                            v69 = (int)(float)(v68 * 100.0);
                          v70 = v10->fields.usrMaxAp;
                          v10->fields.apRcvRate = v69;
                          v71 = (float)v70;
                          if ( !byte_4CC13B2 )
                          {
                            sub_1C713B0(&System_Math_TypeInfo);
                            byte_4CC13B2 = 1;
                          }
                          v72 = v68 * v71;
                          if ( !System_Math_TypeInfo->_2.cctor_finished )
                            j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
                          v73 = vcvtps_s32_f32(v72);
                          if ( ceilf(v72) == INFINITY )
                            v73 = 0x80000000;
                          v10->fields.recvApNum = v73;
                          if ( needAp >= 1 )
                          {
                            v74 = (float)(needAp - v10->fields.usrCurrentAp) / (float)v73;
                            if ( !byte_4CC13B2 )
                            {
                              sub_1C713B0(&System_Math_TypeInfo);
                              byte_4CC13B2 = 1;
                            }
                            v75 = fmaxf(v74, 1.0);
                            if ( !System_Math_TypeInfo->_2.cctor_finished )
                              j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
                            v76 = v10->fields.apRcvRate;
                            v77 = v10->fields.recvApNum;
                            v78 = vcvtps_s32_f32(v75);
                            if ( ceilf(v75) == INFINITY )
                              v78 = 0x80000000;
                            v10->fields.spendNum = v78;
                            v10->fields.apRcvRate = v76 * v78;
                            v10->fields.recvApNum = v77 * v78;
                          }
                          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                          v79 = LocalizationManager__Get((System_String_o *)StringLiteral_14820/*"UNIT_INFO"*/, 0);
                          spendNum = v10->fields.spendNum;
                          v80 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &spendNum);
                          v81 = System_String__Format(v79, v80, 0);
                          v82 = v10->fields.itemDetailLb;
                          v83 = (Il2CppObject *)v81;
                          v84 = LocalizationManager__Get((System_String_o *)StringLiteral_2026/*"AP_RECOVER_NUM_TXT"*/, 0);
                          apRcvRate = v10->fields.apRcvRate;
                          v85 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &apRcvRate);
                          recvApNum = v10->fields.recvApNum;
                          v86 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &recvApNum);
                          this = (RecoverItemComponent_o *)System_String__Format_64073100(v84, v83, v85, v86, 0);
                          if ( !v82 )
                            goto LABEL_152;
                          UILabel__set_text(v82, (System_String_o *)this, 0);
                          v66 = v64->fields.type;
                        }
                        if ( v66 == 4 )
                        {
                          value = v64->fields.value;
                          if ( needAp < 1 )
                          {
                            *p_spendNum = 1;
                          }
                          else
                          {
                            v88 = (float)(needAp - v10->fields.usrCurrentAp) / (float)value;
                            if ( !byte_4CC13B2 )
                            {
                              sub_1C713B0(&System_Math_TypeInfo);
                              byte_4CC13B2 = 1;
                            }
                            v89 = fmaxf(v88, 1.0);
                            if ( !System_Math_TypeInfo->_2.cctor_finished )
                              j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
                            v90 = vcvtps_s32_f32(v89);
                            if ( ceilf(v89) == INFINITY )
                              v90 = 0x80000000;
                            *p_spendNum = v90;
                            value *= v90;
                          }
                          v10->fields.recvApNum = value;
                          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                          v91 = LocalizationManager__Get((System_String_o *)StringLiteral_14820/*"UNIT_INFO"*/, 0);
                          spendNum = v10->fields.spendNum;
                          v92 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &spendNum);
                          v93 = System_String__Format(v91, v92, 0);
                          v94 = v10->fields.itemDetailLb;
                          v95 = (Il2CppObject *)v93;
                          v96 = LocalizationManager__Get((System_String_o *)StringLiteral_1915/*"ADD_RECOVER_NUM_TXT"*/, 0);
                          apRcvRate = v10->fields.recvApNum;
                          v97 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &apRcvRate);
                          this = (RecoverItemComponent_o *)System_String__Format_64073032(v96, v95, v97, 0);
                          if ( !v94 )
                            goto LABEL_152;
                          UILabel__set_text(v94, (System_String_o *)this, 0);
                          v10->fields.isAddAp = 1;
                        }
                        v98 = v10->fields.currentNumLb;
                        spendNum = num;
                        v99 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &spendNum);
                        this = (RecoverItemComponent_o *)System_String__Format(
                                                           (System_String_o *)StringLiteral_25222/*"{0:N0}"*/,
                                                           v99,
                                                           0);
                        if ( v98 )
                        {
                          UILabel__set_text(v98, (System_String_o *)this, 0);
                          v100 = v10->fields.spendNumLb;
                          this = (RecoverItemComponent_o *)System_Int32__ToString((int)v10 + 128, 0);
                          if ( v100 )
                          {
                            UILabel__set_text(v100, (System_String_o *)this, 0);
                            v101 = v10->fields.recvApNum + v10->fields.usrCurrentAp;
                            v10->fields.isEnableSelect = num >= v10->fields.spendNum;
                            v10->fields.recvSum = v101;
                            v10->fields.targetId = data->fields.id;
                            goto LABEL_151;
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
LABEL_152:
    sub_1C71608(this, data);
  }
  if ( currentType != 2 )
    goto LABEL_151;
  this = (RecoverItemComponent_o *)v10->fields.itemIconInfo;
  if ( !this )
    goto LABEL_152;
  this = (RecoverItemComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !this )
    goto LABEL_152;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0);
  this = (RecoverItemComponent_o *)v10->fields.cmdSpellBg;
  if ( !this )
    goto LABEL_152;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
  this = (RecoverItemComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_152;
  this = (RecoverItemComponent_o *)DataManager__GetMasterData_object_(
                                     (DataManager_o *)this,
                                     (const MethodInfo_314B10C *)Method_DataManager_GetMasterData_ItemMaster___);
  if ( !this )
    goto LABEL_152;
  this = (RecoverItemComponent_o *)ItemMaster__GetEntityByType((ItemMaster_o *)this, 2, 0);
  if ( !this )
    goto LABEL_152;
  v20 = this;
  this = (RecoverItemComponent_o *)v10->fields.itemIconInfo;
  if ( !this )
    goto LABEL_152;
  ItemIconComponent__SetItemImage_41193944(
    (ItemIconComponent_o *)this,
    (int32_t)v20->fields.cmdSpellBg,
    HIDWORD(v20->fields.cmdSpellBg),
    (int32_t)v20->fields.cmdSpellIcon,
    0,
    1,
    0);
  this = (RecoverItemComponent_o *)v10->fields.itemIconInfo;
  if ( !this )
    goto LABEL_152;
  this = (RecoverItemComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !this )
    goto LABEL_152;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0);
  this = (RecoverItemComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_152;
  this = (RecoverItemComponent_o *)DataManager__GetMasterData_object_(
                                     (DataManager_o *)this,
                                     (const MethodInfo_314B10C *)Method_DataManager_GetMasterData_StoneShopMaster___);
  if ( !this )
    goto LABEL_152;
  this = (RecoverItemComponent_o *)DataMasterBase_object__object__int___GetEntity(
                                     (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                     v10->fields.targetId,
                                     (const MethodInfo_3408E80 *)Method_DataMasterBase_StoneShopMaster__StoneShopEntity__int__GetEntity__);
  if ( !v10->fields.itemNameLb )
    goto LABEL_152;
  v21 = this;
  UILabel__set_text(v10->fields.itemNameLb, (System_String_o *)v20->fields.m_CancellationTokenSource, 0);
  if ( !*p_userEntity )
    goto LABEL_152;
  v22 = (int32_t)(*p_userEntity)->fields.userEntity;
  if ( v21 )
    *p_spendNum = HIDWORD(v21->fields.cmdSpellBg);
  v23 = v10->fields.currentNumLb;
  spendNum = v22;
  v24 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &spendNum);
  this = (RecoverItemComponent_o *)System_String__Format((System_String_o *)StringLiteral_25222/*"{0:N0}"*/, v24, 0);
  if ( !v23 )
    goto LABEL_152;
  UILabel__set_text(v23, (System_String_o *)this, 0);
  v25 = v10->fields.spendNumLb;
  this = (RecoverItemComponent_o *)System_Int32__ToString((int)v10 + 128, 0);
  if ( !v25 )
    goto LABEL_152;
  UILabel__set_text(v25, (System_String_o *)this, 0);
  RecoverItemComponent__AttachStoneCountRefreshComponent(v10, v26);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v27 = LocalizationManager__Get((System_String_o *)StringLiteral_14820/*"UNIT_INFO"*/, 0);
  apRcvRate = v10->fields.spendNum;
  v28 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &apRcvRate);
  v29 = System_String__Format(v27, v28, 0);
  v30 = v10->fields.itemDetailLb;
  v31 = (Il2CppObject *)v29;
  v32 = LocalizationManager__Get((System_String_o *)StringLiteral_2026/*"AP_RECOVER_NUM_TXT"*/, 0);
  recvApNum = v10->fields.apRcvRate;
  v33 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &recvApNum);
  v112 = v10->fields.recvApNum;
  v34 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v112);
  this = (RecoverItemComponent_o *)System_String__Format_64073100(v32, v31, v33, v34, 0);
  if ( !v30 )
    goto LABEL_152;
  UILabel__set_text(v30, (System_String_o *)this, 0);
  this = *p_userEntity;
  if ( !*p_userEntity )
    goto LABEL_152;
  v35 = UserGameEntity__get_PayableStoneNum((UserGameEntity_o *)this, 0) < v10->fields.spendNum;
  v36 = v10->fields.usrMaxAp + v10->fields.usrCurrentAp;
LABEL_147:
  v111 = !v35;
  v10->fields.isEnableSelect = v111;
  v10->fields.recvSum = v36;
LABEL_151:
  RecoverItemComponent__setEnableSelectItem(v10, (const MethodInfo *)data);
}


void RecoverItemComponent__setEnableSelectItem(RecoverItemComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *maskImg; // x0

  if ( !this->fields.isEnableSelect )
  {
    maskImg = this->fields.maskImg;
    if ( !maskImg )
      sub_1C71608(0, method);
    UnityEngine_GameObject__SetActive(maskImg, 1, 0);
  }
}


void RecoverItemComponent__setRPRecvItemInfo(
        RecoverItemComponent_o *this,
        RecoverEntity_o *data,
        int32_t needRp,
        RecoverDlgComponent_o *dlg,
        RecoverItemComponent_CallbackFunc_o *callback,
        const MethodInfo *method)
{
  RecoverItemComponent_o *v10; // x19
  int32_t targetId; // w8
  UserGameEntity_o *SelfUserGame; // x0
  RecoverItemComponent_o **p_userEntity; // x21
  BalanceConfig_c *v14; // x0
  int32_t UerGameRpMax; // w8
  unsigned int *p_spendNum; // x20
  UILabel_o *currentInfoLb; // x24
  UILabel_o *spendInfoLb; // x24
  int32_t currentType; // w8
  RecoverItemComponent_o *v20; // x22
  RecoverItemComponent_o *v21; // x23
  int32_t userEntity; // w8
  UILabel_o *v23; // x22
  Il2CppObject *v24; // x0
  UILabel_o *v25; // x22
  const MethodInfo *v26; // x1
  System_String_o *v27; // x20
  Il2CppObject *v28; // x0
  System_String_o *v29; // x0
  UILabel_o *v30; // x20
  Il2CppObject *v31; // x22
  System_String_o *v32; // x23
  Il2CppObject *v33; // x0
  bool v34; // cc
  int v35; // w8
  UILabel_o *v36; // x23
  UILabel_o *v37; // x23
  Il2CppObject *v38; // x0
  CommandSpellEntity_o *v39; // x23
  struct ItemIconComponent_o *itemIconInfo; // x8
  int backSprite; // w21
  float v42; // s8
  float v43; // s8
  unsigned int v44; // w9
  unsigned int v45; // w8
  ItemEntity_o *RecvItemData; // x0
  ItemEntity_o *v47; // x24
  int32_t v48; // w26
  int value; // w21
  float v50; // s8
  float v51; // s8
  unsigned int v52; // w8
  System_String_o *v53; // x21
  Il2CppObject *v54; // x0
  System_String_o *v55; // x0
  UILabel_o *v56; // x21
  Il2CppObject *v57; // x22
  System_String_o *v58; // x24
  Il2CppObject *v59; // x0
  UILabel_o *v60; // x21
  Il2CppObject *v61; // x0
  UILabel_o *v62; // x21
  int v63; // w8
  System_String_o *v64; // x21
  Il2CppObject *v65; // x0
  System_String_o *v66; // x0
  UILabel_o *itemDetailLb; // x21
  Il2CppObject *v68; // x22
  System_String_o *v69; // x23
  Il2CppObject *v70; // x0
  UILabel_o *currentNumLb; // x21
  UILabel_o *spendNumLb; // x21
  char v73; // w9
  int32_t v74; // [xsp+0h] [xbp-70h] BYREF
  int32_t recvRpNum; // [xsp+4h] [xbp-6Ch] BYREF
  int32_t spendNum; // [xsp+8h] [xbp-68h] BYREF
  int32_t CommandSpell; // [xsp+Ch] [xbp-64h] BYREF
  UserItemEntity_o *entity; // [xsp+28h] [xbp-48h] BYREF

  v10 = this;
  if ( (byte_4CC1336 & 1) == 0 )
  {
    sub_1C713B0(&BalanceConfig_TypeInfo);
    sub_1C713B0(&Method_DataManager_GetMasterData_CommandSpellMaster___);
    sub_1C713B0(&Method_DataManager_GetMasterData_ItemMaster___);
    sub_1C713B0(&Method_DataManager_GetMasterData_StoneShopMaster___);
    sub_1C713B0(&Method_DataManager_GetMasterData_UserItemMaster___);
    sub_1C713B0(&Method_DataMasterBase_CommandSpellMaster__CommandSpellEntity__int__GetEntity__);
    sub_1C713B0(&Method_DataMasterBase_StoneShopMaster__StoneShopEntity__int__GetEntity__);
    sub_1C713B0(&int_TypeInfo);
    sub_1C713B0(&LocalizationManager_TypeInfo);
    sub_1C713B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C713B0(&StringLiteral_3523/*"CMDSPELL_CURRENT_NUM"*/);
    sub_1C713B0(&StringLiteral_3525/*"CMDSPELL_SPEND_NUM_TXT"*/);
    sub_1C713B0(&StringLiteral_25222/*"{0:N0}"*/);
    sub_1C713B0(&StringLiteral_858/*"-"*/);
    sub_1C713B0(&StringLiteral_14820/*"UNIT_INFO"*/);
    sub_1C713B0(&StringLiteral_12282/*"SPEND_NUM_TXT"*/);
    sub_1C713B0(&StringLiteral_3931/*"CURRENT_NUM_TXT"*/);
    sub_1C713B0(&StringLiteral_11170/*"RP_RECOVER_CMDSPELL_TXT"*/);
    sub_1C713B0(&StringLiteral_11172/*"RP_RECOVER_NUM_TXT"*/);
    this = (RecoverItemComponent_o *)sub_1C713B0(&StringLiteral_3524/*"CMDSPELL_CURRENT_NUM_TXT"*/);
    byte_4CC1336 = 1;
  }
  entity = 0;
  CommandSpell = 0;
  if ( !data )
    goto LABEL_108;
  v10->fields.currentType = data->fields.recoverType;
  v10->fields.recvTarget = data->fields.target;
  targetId = data->fields.targetId;
  v10->fields.isEnableSelect = 0;
  v10->fields.targetId = targetId;
  v10->fields.dialog = dlg;
  sub_1C71354(&v10->fields.dialog, dlg);
  v10->fields.callbackFunc = callback;
  sub_1C71354(&v10->fields.callbackFunc, callback);
  this = (RecoverItemComponent_o *)v10->fields.maskImg;
  if ( !this )
    goto LABEL_108;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
  SelfUserGame = UserGameMaster__getSelfUserGame(0);
  v10->fields.userEntity = SelfUserGame;
  p_userEntity = (RecoverItemComponent_o **)&v10->fields.userEntity;
  sub_1C71354(&v10->fields.userEntity, SelfUserGame);
  this = (RecoverItemComponent_o *)v10->fields.userEntity;
  if ( !this )
    goto LABEL_108;
  v10->fields.usrCurrentRp = UserGameEntity__getRp((UserGameEntity_o *)this, 0);
  v14 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v14 = BalanceConfig_TypeInfo;
  }
  UerGameRpMax = v14->static_fields->UerGameRpMax;
  v10->fields.spendNum = 1;
  p_spendNum = (unsigned int *)&v10->fields.spendNum;
  this = (RecoverItemComponent_o *)v10->fields.itemNameLb;
  v10->fields.isAp = 0;
  v10->fields.usrMaxRp = UerGameRpMax;
  v10->fields.recvRpNum = UerGameRpMax;
  if ( !this )
    goto LABEL_108;
  UILabel__set_text((UILabel_o *)this, (System_String_o *)StringLiteral_858/*"-"*/, 0);
  this = (RecoverItemComponent_o *)v10->fields.currentNumLb;
  if ( !this )
    goto LABEL_108;
  UILabel__set_text((UILabel_o *)this, (System_String_o *)StringLiteral_858/*"-"*/, 0);
  this = (RecoverItemComponent_o *)v10->fields.spendNumLb;
  if ( !this )
    goto LABEL_108;
  UILabel__set_text((UILabel_o *)this, (System_String_o *)StringLiteral_858/*"-"*/, 0);
  this = (RecoverItemComponent_o *)v10->fields.itemDetailLb;
  if ( !this )
    goto LABEL_108;
  UILabel__set_text((UILabel_o *)this, (System_String_o *)StringLiteral_858/*"-"*/, 0);
  currentInfoLb = v10->fields.currentInfoLb;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  this = (RecoverItemComponent_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3931/*"CURRENT_NUM_TXT"*/, 0);
  if ( !currentInfoLb )
    goto LABEL_108;
  UILabel__set_text(currentInfoLb, (System_String_o *)this, 0);
  spendInfoLb = v10->fields.spendInfoLb;
  this = (RecoverItemComponent_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12282/*"SPEND_NUM_TXT"*/, 0);
  if ( !spendInfoLb )
    goto LABEL_108;
  UILabel__set_text(spendInfoLb, (System_String_o *)this, 0);
  currentType = v10->fields.currentType;
  if ( currentType == 1 )
  {
    this = (RecoverItemComponent_o *)v10->fields.itemIconInfo;
    if ( this )
    {
      this = (RecoverItemComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
      if ( this )
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
        this = (RecoverItemComponent_o *)v10->fields.cmdSpellBg;
        if ( this )
        {
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0);
          v36 = v10->fields.currentInfoLb;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          this = (RecoverItemComponent_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3524/*"CMDSPELL_CURRENT_NUM_TXT"*/, 0);
          if ( v36 )
          {
            UILabel__set_text(v36, (System_String_o *)this, 0);
            v37 = v10->fields.spendInfoLb;
            this = (RecoverItemComponent_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3525/*"CMDSPELL_SPEND_NUM_TXT"*/, 0);
            if ( v37 )
            {
              UILabel__set_text(v37, (System_String_o *)this, 0);
              this = (RecoverItemComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
              if ( this )
              {
                this = (RecoverItemComponent_o *)DataManager__GetMasterData_object_(
                                                   (DataManager_o *)this,
                                                   (const MethodInfo_314B10C *)Method_DataManager_GetMasterData_CommandSpellMaster___);
                if ( this )
                {
                  v38 = DataMasterBase_object__object__int___GetEntity(
                          (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                          v10->fields.targetId,
                          (const MethodInfo_3408E80 *)Method_DataMasterBase_CommandSpellMaster__CommandSpellEntity__int__GetEntity__);
                  if ( !v38 )
                    goto LABEL_107;
                  v39 = (CommandSpellEntity_o *)v38;
                  this = (RecoverItemComponent_o *)v10->fields.cmdSpellIcon;
                  if ( this )
                  {
                    CommandSpellIconComponent__SetData((CommandSpellIconComponent_o *)this, v10->fields.userEntity, 0);
                    this = (RecoverItemComponent_o *)v10->fields.itemNameLb;
                    if ( this )
                    {
                      UILabel__set_text((UILabel_o *)this, v39->fields.name, 0);
                      this = *p_userEntity;
                      if ( *p_userEntity )
                      {
                        CommandSpell = UserGameEntity__getCommandSpell((UserGameEntity_o *)this, 0);
                        *p_spendNum = v39->fields.consume;
                        this = (RecoverItemComponent_o *)CommandSpellEntity__getValues(v39, 0);
                        if ( this )
                        {
                          if ( !LODWORD(this->fields.m_CancellationTokenSource) )
                            goto LABEL_109;
                          itemIconInfo = this->fields.itemIconInfo;
                          if ( !itemIconInfo )
                            goto LABEL_108;
                          if ( !LODWORD(itemIconInfo->fields.m_CancellationTokenSource) )
LABEL_109:
                            sub_1C71610(this);
                          backSprite = (int)itemIconInfo->fields.backSprite;
                          if ( needRp < 1 )
                          {
                            v45 = *p_spendNum;
                          }
                          else
                          {
                            v42 = (float)(needRp - v10->fields.usrCurrentRp) / (float)backSprite;
                            if ( !byte_4CC13B2 )
                            {
                              sub_1C713B0(&System_Math_TypeInfo);
                              byte_4CC13B2 = 1;
                            }
                            v43 = fmaxf(v42, 1.0);
                            if ( !System_Math_TypeInfo->_2.cctor_finished )
                              j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
                            v44 = vcvtps_s32_f32(v43);
                            if ( ceilf(v43) == INFINITY )
                              v45 = 0x80000000;
                            else
                              v45 = v44;
                            *p_spendNum = v45;
                          }
                          v10->fields.recvRpNum = v45 * backSprite;
                          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                          v64 = LocalizationManager__Get((System_String_o *)StringLiteral_3523/*"CMDSPELL_CURRENT_NUM"*/, 0);
                          spendNum = v10->fields.spendNum;
                          v65 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &spendNum);
                          v66 = System_String__Format(v64, v65, 0);
                          itemDetailLb = v10->fields.itemDetailLb;
                          v68 = (Il2CppObject *)v66;
                          v69 = LocalizationManager__Get((System_String_o *)StringLiteral_11170/*"RP_RECOVER_CMDSPELL_TXT"*/, 0);
                          recvRpNum = v10->fields.recvRpNum;
                          v70 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &recvRpNum);
                          this = (RecoverItemComponent_o *)System_String__Format_64073032(v69, v68, v70, 0);
                          if ( itemDetailLb )
                          {
                            UILabel__set_text(itemDetailLb, (System_String_o *)this, 0);
                            currentNumLb = v10->fields.currentNumLb;
                            this = (RecoverItemComponent_o *)System_Int32__ToString((int32_t)&CommandSpell, 0);
                            if ( currentNumLb )
                            {
                              UILabel__set_text(currentNumLb, (System_String_o *)this, 0);
                              spendNumLb = v10->fields.spendNumLb;
                              this = (RecoverItemComponent_o *)System_Int32__ToString((int)v10 + 128, 0);
                              if ( spendNumLb )
                              {
                                UILabel__set_text(spendNumLb, (System_String_o *)this, 0);
                                v34 = CommandSpell < v10->fields.spendNum;
                                v35 = v10->fields.recvRpNum + v10->fields.usrCurrentRp;
                                goto LABEL_103;
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
    goto LABEL_108;
  }
  if ( currentType == 3 )
  {
    this = (RecoverItemComponent_o *)v10->fields.itemIconInfo;
    if ( this )
    {
      this = (RecoverItemComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
      if ( this )
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0);
        this = (RecoverItemComponent_o *)v10->fields.cmdSpellBg;
        if ( this )
        {
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
          RecvItemData = RecoverEntity__getRecvItemData(data, 0);
          if ( !RecvItemData )
            goto LABEL_107;
          v47 = RecvItemData;
          this = (RecoverItemComponent_o *)v10->fields.itemIconInfo;
          if ( this )
          {
            ItemIconComponent__SetItemImage_41193944(
              (ItemIconComponent_o *)this,
              v47->fields.imageId,
              v47->fields.bgImageId,
              v47->fields.type,
              0,
              1,
              0);
            this = (RecoverItemComponent_o *)v10->fields.itemIconInfo;
            if ( this )
            {
              this = (RecoverItemComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
              if ( this )
              {
                UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0);
                this = (RecoverItemComponent_o *)v10->fields.itemNameLb;
                if ( this )
                {
                  UILabel__set_text((UILabel_o *)this, v47->fields.name, 0);
                  this = (RecoverItemComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
                  if ( this )
                  {
                    this = (RecoverItemComponent_o *)DataManager__GetMasterData_object_(
                                                       (DataManager_o *)this,
                                                       (const MethodInfo_314B10C *)Method_DataManager_GetMasterData_UserItemMaster___);
                    if ( *p_userEntity )
                    {
                      if ( this )
                      {
                        UserItemMaster__TryGetEntity(
                          (UserItemMaster_o *)this,
                          &entity,
                          (*p_userEntity)->fields.m_CachedPtr,
                          v10->fields.targetId,
                          0);
                        v10->fields.spendNum = 1;
                        v48 = entity ? entity->fields.num : 0;
                        value = v47->fields.value;
                        if ( needRp < 1 )
                        {
                          *p_spendNum = 1;
                        }
                        else
                        {
                          v50 = (float)(needRp - v10->fields.usrCurrentRp) / (float)value;
                          if ( !byte_4CC13B2 )
                          {
                            sub_1C713B0(&System_Math_TypeInfo);
                            byte_4CC13B2 = 1;
                          }
                          v51 = fmaxf(v50, 1.0);
                          if ( !System_Math_TypeInfo->_2.cctor_finished )
                            j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
                          v52 = vcvtps_s32_f32(v51);
                          if ( ceilf(v51) == INFINITY )
                            v52 = 0x80000000;
                          *p_spendNum = v52;
                          value *= v52;
                        }
                        v10->fields.recvRpNum = value;
                        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                        v53 = LocalizationManager__Get((System_String_o *)StringLiteral_14820/*"UNIT_INFO"*/, 0);
                        spendNum = v10->fields.spendNum;
                        v54 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &spendNum);
                        v55 = System_String__Format(v53, v54, 0);
                        v56 = v10->fields.itemDetailLb;
                        v57 = (Il2CppObject *)v55;
                        v58 = LocalizationManager__Get((System_String_o *)StringLiteral_11172/*"RP_RECOVER_NUM_TXT"*/, 0);
                        recvRpNum = v10->fields.recvRpNum;
                        v59 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &recvRpNum);
                        this = (RecoverItemComponent_o *)System_String__Format_64073032(v58, v57, v59, 0);
                        if ( v56 )
                        {
                          UILabel__set_text(v56, (System_String_o *)this, 0);
                          v60 = v10->fields.currentNumLb;
                          v74 = v48;
                          v61 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v74);
                          this = (RecoverItemComponent_o *)System_String__Format(
                                                             (System_String_o *)StringLiteral_25222/*"{0:N0}"*/,
                                                             v61,
                                                             0);
                          if ( v60 )
                          {
                            UILabel__set_text(v60, (System_String_o *)this, 0);
                            v62 = v10->fields.spendNumLb;
                            this = (RecoverItemComponent_o *)System_Int32__ToString((int)v10 + 128, 0);
                            if ( v62 )
                            {
                              UILabel__set_text(v62, (System_String_o *)this, 0);
                              v63 = v10->fields.recvRpNum + v10->fields.usrCurrentRp;
                              v10->fields.isEnableSelect = v48 >= v10->fields.spendNum;
                              v10->fields.recvSum = v63;
                              v10->fields.targetId = data->fields.id;
                              goto LABEL_107;
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
    goto LABEL_108;
  }
  if ( currentType != 2 )
    goto LABEL_107;
  this = (RecoverItemComponent_o *)v10->fields.itemIconInfo;
  if ( !this )
    goto LABEL_108;
  this = (RecoverItemComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !this )
    goto LABEL_108;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0);
  this = (RecoverItemComponent_o *)v10->fields.cmdSpellBg;
  if ( !this )
    goto LABEL_108;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
  this = (RecoverItemComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_108;
  this = (RecoverItemComponent_o *)DataManager__GetMasterData_object_(
                                     (DataManager_o *)this,
                                     (const MethodInfo_314B10C *)Method_DataManager_GetMasterData_ItemMaster___);
  if ( !this )
    goto LABEL_108;
  this = (RecoverItemComponent_o *)ItemMaster__GetEntityByType((ItemMaster_o *)this, 2, 0);
  if ( !this )
    goto LABEL_108;
  v20 = this;
  this = (RecoverItemComponent_o *)v10->fields.itemIconInfo;
  if ( !this )
    goto LABEL_108;
  ItemIconComponent__SetItemImage_41193944(
    (ItemIconComponent_o *)this,
    (int32_t)v20->fields.cmdSpellBg,
    HIDWORD(v20->fields.cmdSpellBg),
    (int32_t)v20->fields.cmdSpellIcon,
    0,
    1,
    0);
  this = (RecoverItemComponent_o *)v10->fields.itemIconInfo;
  if ( !this )
    goto LABEL_108;
  this = (RecoverItemComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !this )
    goto LABEL_108;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0);
  this = (RecoverItemComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_108;
  this = (RecoverItemComponent_o *)DataManager__GetMasterData_object_(
                                     (DataManager_o *)this,
                                     (const MethodInfo_314B10C *)Method_DataManager_GetMasterData_StoneShopMaster___);
  if ( !this )
    goto LABEL_108;
  this = (RecoverItemComponent_o *)DataMasterBase_object__object__int___GetEntity(
                                     (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                     v10->fields.targetId,
                                     (const MethodInfo_3408E80 *)Method_DataMasterBase_StoneShopMaster__StoneShopEntity__int__GetEntity__);
  if ( !v10->fields.itemNameLb )
    goto LABEL_108;
  v21 = this;
  UILabel__set_text(v10->fields.itemNameLb, (System_String_o *)v20->fields.m_CancellationTokenSource, 0);
  if ( !*p_userEntity )
    goto LABEL_108;
  userEntity = (int32_t)(*p_userEntity)->fields.userEntity;
  if ( v21 )
    *p_spendNum = HIDWORD(v21->fields.cmdSpellBg);
  v23 = v10->fields.currentNumLb;
  spendNum = userEntity;
  v24 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &spendNum);
  this = (RecoverItemComponent_o *)System_String__Format((System_String_o *)StringLiteral_25222/*"{0:N0}"*/, v24, 0);
  if ( !v23 )
    goto LABEL_108;
  UILabel__set_text(v23, (System_String_o *)this, 0);
  v25 = v10->fields.spendNumLb;
  this = (RecoverItemComponent_o *)System_Int32__ToString((int)v10 + 128, 0);
  if ( !v25 )
    goto LABEL_108;
  UILabel__set_text(v25, (System_String_o *)this, 0);
  RecoverItemComponent__AttachStoneCountRefreshComponent(v10, v26);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v27 = LocalizationManager__Get((System_String_o *)StringLiteral_14820/*"UNIT_INFO"*/, 0);
  recvRpNum = v10->fields.spendNum;
  v28 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &recvRpNum);
  v29 = System_String__Format(v27, v28, 0);
  v30 = v10->fields.itemDetailLb;
  v31 = (Il2CppObject *)v29;
  v32 = LocalizationManager__Get((System_String_o *)StringLiteral_11172/*"RP_RECOVER_NUM_TXT"*/, 0);
  v74 = v10->fields.recvRpNum;
  v33 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v74);
  this = (RecoverItemComponent_o *)System_String__Format_64073032(v32, v31, v33, 0);
  if ( !v30 || (UILabel__set_text(v30, (System_String_o *)this, 0), (this = *p_userEntity) == 0) )
LABEL_108:
    sub_1C71608(this, data);
  v34 = UserGameEntity__get_PayableStoneNum((UserGameEntity_o *)this, 0) < v10->fields.spendNum;
  v35 = v10->fields.recvRpNum + v10->fields.usrCurrentRp;
LABEL_103:
  v73 = !v34;
  v10->fields.isEnableSelect = v73;
  v10->fields.recvSum = v35;
LABEL_107:
  RecoverItemComponent__setEnableSelectItem(v10, (const MethodInfo *)data);
}


void RecoverItemComponent__setRequestInfo(RecoverItemComponent_o *this, const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v4; // x1
  __int64 v5; // x8
  struct RecoverItemComponent_CallbackFunc_o *callbackFunc; // x20
  Il2CppObject *v7; // x19
  System_String_o *v8; // x20
  RecoverItemComponent___c_c *v9; // x8
  System_Action_o *_9__43_0; // x22
  System_String_o *v11; // x21
  Il2CppObject *v12; // x23
  struct RecoverItemComponent___c_StaticFields *static_fields; // x0

  if ( (byte_4CC133B & 1) == 0 )
  {
    sub_1C713B0(&System_Action_TypeInfo);
    sub_1C713B0(&Method_DataManager_GetMasterData_EventMaster___);
    sub_1C713B0(&LocalizationManager_TypeInfo);
    sub_1C713B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C713B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C713B0(&TerminalSceneComponent_TypeInfo);
    sub_1C713B0(&Method_RecoverItemComponent___c__setRequestInfo_b__43_0__);
    sub_1C713B0(&RecoverItemComponent___c_TypeInfo);
    sub_1C713B0(&StringLiteral_11173/*"RP_UNRECOVERABLE_MESSAGE"*/);
    sub_1C713B0(&StringLiteral_1/*""*/);
    byte_4CC133B = 1;
  }
  if ( this->fields.recvTarget != 2 )
    goto LABEL_14;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_27;
  DataManager__GetMasterData_object_(
    Instance,
    (const MethodInfo_314B10C *)Method_DataManager_GetMasterData_EventMaster___);
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  if ( !byte_4CC12CE )
  {
    sub_1C713B0(&TerminalSceneComponent_TypeInfo);
    byte_4CC12CE = 1;
  }
  Instance = (DataManager_o *)TerminalSceneComponent_TypeInfo;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    Instance = (DataManager_o *)TerminalSceneComponent_TypeInfo;
  }
  v5 = **(_QWORD **)&Instance[1].fields._DispLog;
  if ( !v5 || (Instance = *(DataManager_o **)(v5 + 248)) == 0 )
LABEL_27:
    sub_1C71608(Instance, v4);
  if ( !ScrPlayerStatus__IsBPActive((ScrPlayerStatus_o *)Instance, 0) )
  {
    v7 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    Instance = (DataManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11173/*"RP_UNRECOVERABLE_MESSAGE"*/, 0);
    v8 = (System_String_o *)Instance;
    v9 = RecoverItemComponent___c_TypeInfo;
    if ( !RecoverItemComponent___c_TypeInfo->_2.cctor_finished )
    {
      Instance = (DataManager_o *)j_il2cpp_runtime_class_init_0(RecoverItemComponent___c_TypeInfo);
      v9 = RecoverItemComponent___c_TypeInfo;
    }
    _9__43_0 = v9->static_fields->__9__43_0;
    v11 = (System_String_o *)StringLiteral_1/*""*/;
    if ( !_9__43_0 )
    {
      if ( !v9->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v9);
        v9 = RecoverItemComponent___c_TypeInfo;
      }
      v12 = (Il2CppObject *)v9->static_fields->__9;
      _9__43_0 = (System_Action_o *)sub_1C715FC(System_Action_TypeInfo);
      System_Action___ctor(_9__43_0, v12, Method_RecoverItemComponent___c__setRequestInfo_b__43_0__, 0);
      static_fields = RecoverItemComponent___c_TypeInfo->static_fields;
      static_fields->__9__43_0 = _9__43_0;
      Instance = (DataManager_o *)sub_1C71354(&static_fields->__9__43_0, _9__43_0);
    }
    if ( v7 )
    {
      CommonUI__OpenNotificationDialog((CommonUI_o *)v7, v11, v8, _9__43_0, -1, 0, 0, 0, 1, 0, 1, 0, 0, 0.0, 0, 0);
      return;
    }
    goto LABEL_27;
  }
LABEL_14:
  callbackFunc = this->fields.callbackFunc;
  if ( callbackFunc )
  {
    this->fields.callbackFunc = 0;
    sub_1C71354(&this->fields.callbackFunc, 0);
    ((void (__fastcall *)(intptr_t, _QWORD, _QWORD, _QWORD, intptr_t))callbackFunc->fields.invoke_impl)(
      callbackFunc->fields.method_code,
      (unsigned int)this->fields.currentType,
      (unsigned int)this->fields.targetId,
      (unsigned int)this->fields.spendNum,
      callbackFunc->fields.method);
  }
}


void RecoverItemComponent__spendItemDlg(RecoverItemComponent_o *this, bool isRes, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v6; // x1
  CommonUI_o *v7; // x21
  System_Action_o *v8; // x20

  if ( (byte_4CC1339 & 1) == 0 )
  {
    sub_1C713B0(&System_Action_TypeInfo);
    sub_1C713B0(&Method_RecoverItemComponent_setRequestInfo__);
    sub_1C713B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4CC1339 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v7 = (CommonUI_o *)Instance;
  if ( isRes )
  {
    v8 = (System_Action_o *)sub_1C715FC(System_Action_TypeInfo);
    System_Action___ctor(v8, (Il2CppObject *)this, Method_RecoverItemComponent_setRequestInfo__, 0);
    if ( v7 )
    {
      CommonUI__CloseConfirmDialog_31440904(v7, v8, 0);
      return;
    }
LABEL_8:
    sub_1C71608(Instance, v6);
  }
  if ( !Instance )
    goto LABEL_8;
  CommonUI__CloseConfirmDialog((CommonUI_o *)Instance, 0);
}


void RecoverItemComponent_CallbackFunc___ctor(
        RecoverItemComponent_CallbackFunc_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  intptr_t v4; // x8
  int v8; // w22
  Il2CppObject *m_target; // x9
  __int64 v10; // x0

  v4 = *(_QWORD *)(method + 8);
  this->fields.method = method;
  this->fields.method_ptr = v4;
  this->fields.m_target = object;
  sub_1C71354(&this->fields.m_target, object);
  v8 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_1C71470(method) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1C71624(0, "Delegate to an instance method cannot have null 'this'.");
      sub_1C714D8(v10, 0);
    }
    goto LABEL_5;
  }
  if ( v8 != 3 )
  {
LABEL_5:
    m_target = this->fields.m_target;
    this->fields.invoke_impl = this->fields.method_ptr;
    this->fields.method_code = (intptr_t)m_target;
    goto LABEL_6;
  }
  this->fields.invoke_impl = (intptr_t)sub_1A9D9DC;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_1A9D97C;
}


System_IAsyncResult_o *RecoverItemComponent_CallbackFunc__BeginInvoke(
        RecoverItemComponent_CallbackFunc_o *this,
        int32_t type,
        int32_t id,
        int32_t num,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  _QWORD v11[2]; // [xsp+0h] [xbp-70h] BYREF
  __int128 v12; // [xsp+10h] [xbp-60h]
  int32_t v13; // [xsp+2Ch] [xbp-44h] BYREF
  int32_t v14; // [xsp+38h] [xbp-38h] BYREF
  int32_t v15; // [xsp+3Ch] [xbp-34h] BYREF

  v14 = id;
  v15 = type;
  v13 = num;
  if ( (byte_4CC133F & 1) == 0 )
  {
    sub_1C713B0(&int_TypeInfo);
    sub_1C713B0(&RecoverType_Type_TypeInfo);
    byte_4CC133F = 1;
  }
  v12 = 0u;
  v11[0] = j_il2cpp_value_box_0(RecoverType_Type_TypeInfo, &v15);
  v11[1] = j_il2cpp_value_box_0(int_TypeInfo, &v14);
  *(_QWORD *)&v12 = j_il2cpp_value_box_0(int_TypeInfo, &v13);
  return (System_IAsyncResult_o *)sub_1C71364(this, v11, callback, object);
}


void RecoverItemComponent_CallbackFunc__EndInvoke(
        RecoverItemComponent_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C71368(result, 0, method);
}


void RecoverItemComponent_CallbackFunc__Invoke(
        RecoverItemComponent_CallbackFunc_o *this,
        int32_t type,
        int32_t id,
        int32_t num,
        const MethodInfo *method)
{
  ((void (__fastcall *)(intptr_t, int32_t, int32_t, int32_t, intptr_t))this->fields.invoke_impl)(
    this->fields.method_code,
    type,
    id,
    num,
    this->fields.method);
}


void RecoverItemComponent___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19

  if ( (byte_4CC1340 & 1) == 0 )
  {
    sub_1C713B0(&RecoverItemComponent___c_TypeInfo);
    byte_4CC1340 = 1;
  }
  v1 = (Il2CppObject *)sub_1C715FC(RecoverItemComponent___c_TypeInfo);
  System_Object___ctor(v1, 0);
  RecoverItemComponent___c_TypeInfo->static_fields->__9 = (struct RecoverItemComponent___c_o *)v1;
  sub_1C71354(RecoverItemComponent___c_TypeInfo->static_fields, v1);
}


void RecoverItemComponent___c___ctor(RecoverItemComponent___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void RecoverItemComponent___c___setRequestInfo_b__43_0(RecoverItemComponent___c_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v3; // x1

  if ( (byte_4CC1341 & 1) == 0 )
  {
    sub_1C713B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C713B0(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    byte_4CC1341 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance
    || (CommonUI__CloseRecoverItemListDialog((CommonUI_o *)Instance, 0),
        (Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__)) == 0) )
  {
    sub_1C71608(Instance, v3);
  }
  AvalonSceneManager__transitionSceneRefresh((AvalonSceneManager_o *)Instance, 34, 1, 0, 0, 0);
}