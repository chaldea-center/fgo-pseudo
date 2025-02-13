void __fastcall RecoverItemComponent___cctor(const MethodInfo *method)
{
  if ( (byte_4BD71E8 & 1) == 0 )
  {
    sub_1C21E38(&RecoverItemComponent_TypeInfo);
    byte_4BD71E8 = 1;
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

  if ( (byte_4BD71E2 & 1) == 0 )
  {
    sub_1C21E38(&System_Action_int__TypeInfo);
    sub_1C21E38(&Method_RecoverItemComponent__AttachStoneCountRefreshComponent_b__38_0__);
    byte_4BD71E2 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v4 = (System_Action_int__o *)sub_1C22084(System_Action_int__TypeInfo);
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

  if ( (byte_4BD71E5 & 1) == 0 )
  {
    sub_1C21E38(&System_Action_TypeInfo);
    sub_1C21E38(&Method_RecoverItemComponent_setRequestInfo__);
    sub_1C21E38(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4BD71E5 = 1;
  }
  if ( isRes )
  {
    this->fields.spendNum = useNum;
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v8 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
    System_Action___ctor(v8, (Il2CppObject *)this, Method_RecoverItemComponent_setRequestInfo__, 0LL);
    if ( !Instance )
LABEL_9:
      sub_1C22094(v9, v10);
  }
  else
  {
    v9 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
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
  System_Object_array *v30; // x26
  __int64 v31; // x2
  __int64 v32; // x3
  __int64 v33; // x4
  Il2CppObject *v34; // x24
  __int64 v35; // x2
  __int64 v36; // x3
  __int64 v37; // x4
  Il2CppObject *v38; // x24
  __int64 v39; // x2
  __int64 v40; // x3
  __int64 v41; // x4
  Il2CppObject *v42; // x24
  __int64 v43; // x2
  __int64 v44; // x3
  __int64 v45; // x4
  Il2CppObject *v46; // x24
  __int64 v47; // x2
  __int64 v48; // x3
  __int64 v49; // x4
  Il2CppObject *v50; // x24
  Il2CppObject **v51; // x0
  System_String_o *v52; // x25
  System_Object_array *v53; // x26
  __int64 v54; // x2
  __int64 v55; // x3
  __int64 v56; // x4
  Il2CppObject *v57; // x24
  __int64 v58; // x2
  __int64 v59; // x3
  __int64 v60; // x4
  Il2CppObject *v61; // x24
  __int64 v62; // x2
  __int64 v63; // x3
  __int64 v64; // x4
  Il2CppObject *v65; // x24
  __int64 v66; // x2
  __int64 v67; // x3
  __int64 v68; // x4
  Il2CppObject *v69; // x24
  __int64 v70; // x2
  __int64 v71; // x3
  __int64 v72; // x4
  Il2CppObject *v73; // x24
  System_String_o *v74; // x24
  Il2CppObject *v75; // x23
  CommonConfirmDialog_ClickDelegate_o *v76; // x25
  System_String_o **v77; // x8
  System_String_o *v78; // x25
  __int64 v79; // x2
  __int64 v80; // x3
  __int64 v81; // x4
  Il2CppObject *v82; // x24
  __int64 v83; // x2
  __int64 v84; // x3
  __int64 v85; // x4
  Il2CppObject *v86; // x24
  __int64 v87; // x2
  __int64 v88; // x3
  __int64 v89; // x4
  Il2CppObject *v90; // x24
  __int64 v91; // x2
  __int64 v92; // x3
  __int64 v93; // x4
  Il2CppObject *v94; // x24
  __int64 v95; // x2
  __int64 v96; // x3
  __int64 v97; // x4
  Il2CppObject *v98; // x24
  __int64 v99; // x2
  __int64 v100; // x3
  __int64 v101; // x4
  System_String_o *v102; // x23
  Il2CppObject *v103; // x25
  CommonConfirmDialog_ClickDelegate_o *v104; // x26
  System_String_o *v105; // x0
  System_String_o *v106; // x20
  Il2CppObject *v107; // x21
  System_Action_o *v108; // x22
  System_String_o *v109; // x0
  System_String_o *v110; // x20
  Il2CppObject *Instance; // x21
  System_Action_o *v112; // x22
  Il2CppObject *v113; // x0
  int32_t targetId; // w20
  int32_t needAp; // w21
  CommonUI_o *v116; // x22
  System_Action_bool__int__o *v117; // x23
  __int64 v118; // x0
  int32_t v119; // [xsp+48h] [xbp-78h] BYREF
  int32_t v120; // [xsp+4Ch] [xbp-74h] BYREF
  int32_t recvSum; // [xsp+50h] [xbp-70h] BYREF
  int32_t usrMaxRp; // [xsp+54h] [xbp-6Ch] BYREF
  int32_t usrCurrentRp; // [xsp+58h] [xbp-68h] BYREF
  int32_t spendNum; // [xsp+5Ch] [xbp-64h] BYREF

  if ( (byte_4BD71E3 & 1) == 0 )
  {
    sub_1C21E38(&System_Action_bool__int__TypeInfo);
    sub_1C21E38(&System_Action_TypeInfo);
    sub_1C21E38(&BalanceConfig_TypeInfo);
    sub_1C21E38(&CommonConfirmDialog_ClickDelegate_TypeInfo);
    sub_1C21E38(&int_TypeInfo);
    sub_1C21E38(&LocalizationManager_TypeInfo);
    sub_1C21E38(&object___TypeInfo);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    sub_1C21E38(&Method_RecoverItemComponent_CloseApRecovDlg__);
    sub_1C21E38(&Method_RecoverItemComponent_OnClickItem__);
    sub_1C21E38(&Method_RecoverItemComponent_closeNotificationDlg__);
    sub_1C21E38(&Method_RecoverItemComponent_spendItemDlg__);
    sub_1C21E38(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C21E38(&StringLiteral_11345/*"RP_RECOVER_CONFIRM_MSG"*/);
    sub_1C21E38(&StringLiteral_3662/*"CMDSPELL_CURRENT_NUM"*/);
    sub_1C21E38(&StringLiteral_3806/*"COMMAND_SPELL_TXT"*/);
    sub_1C21E38(&StringLiteral_2161/*"AP_RECOVER_CONFIRM_MSG"*/);
    sub_1C21E38(&StringLiteral_11343/*"RP_FULL_MSG"*/);
    sub_1C21E38(&StringLiteral_15058/*"UNIT_INFO"*/);
    sub_1C21E38(&StringLiteral_2157/*"AP_ADD_CONFIRM_MSG"*/);
    sub_1C21E38(&StringLiteral_3812/*"COMMON_CONFIRM_DECIDE"*/);
    sub_1C21E38(&StringLiteral_3810/*"COMMON_CONFIRM_CANCEL"*/);
    sub_1C21E38(&StringLiteral_2158/*"AP_ADD_CONFIRM_MSG_OVER"*/);
    sub_1C21E38(&StringLiteral_2162/*"AP_RECOVER_CONFIRM_MSG_OVER"*/);
    sub_1C21E38(&StringLiteral_2159/*"AP_FULL_MSG"*/);
    sub_1C21E38(&StringLiteral_1/*""*/);
    sub_1C21E38(&StringLiteral_2167/*"AP_RECOVER_STONEPAY_WARNING_MSG"*/);
    byte_4BD71E3 = 1;
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
  v8 = LocalizationManager__Get((System_String_o *)StringLiteral_15058/*"UNIT_INFO"*/, 0LL);
  spendNum = this->fields.spendNum;
  v12 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &spendNum, v9, v10, v11);
  userEntity = (__int64)System_String__Format(v8, v12, 0LL);
  v13 = (System_String_o *)userEntity;
  if ( this->fields.currentType == 1 )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    mText = (Il2CppObject *)LocalizationManager__Get((System_String_o *)StringLiteral_3806/*"COMMAND_SPELL_TXT"*/, 0LL);
    if ( this->fields.currentType == 1 )
    {
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v15 = LocalizationManager__Get((System_String_o *)StringLiteral_3662/*"CMDSPELL_CURRENT_NUM"*/, 0LL);
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
  v21 = LocalizationManager__Get((System_String_o *)StringLiteral_3812/*"COMMON_CONFIRM_DECIDE"*/, 0LL);
  v22 = LocalizationManager__Get((System_String_o *)StringLiteral_3810/*"COMMON_CONFIRM_CANCEL"*/, 0LL);
  v23 = Method_RecoverItemComponent_OnClickItem__;
  if ( (*((_BYTE *)Method_RecoverItemComponent_OnClickItem__ + 83) & 2) != 0 )
    v23 = (_QWORD *)sub_1C21E50(Method_RecoverItemComponent_OnClickItem__);
  v24 = (System_Reflection_MethodBase_o *)sub_1C21E1C(v23, v23[4]);
  OverwriteAssetSoundName__PlaySystemSe(v24, 0, 0, 0LL);
  if ( !this->fields.isAp )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v52 = LocalizationManager__Get((System_String_o *)StringLiteral_11345/*"RP_RECOVER_CONFIRM_MSG"*/, 0LL);
    userEntity = sub_1C21EE0(object___TypeInfo, 7LL);
    if ( !userEntity )
      goto LABEL_140;
    v53 = (System_Object_array *)userEntity;
    if ( mText )
    {
      userEntity = sub_1C21F74(mText, *(_QWORD *)(*(_QWORD *)userEntity + 64LL));
      if ( !userEntity )
        goto LABEL_141;
    }
    if ( v53->max_length )
    {
      v53->m_Items[0] = mText;
      userEntity = sub_1C21DDC(v53->m_Items, mText);
      if ( v13 )
      {
        userEntity = sub_1C21F74(v13, v53->obj.klass->_1.element_class);
        if ( !userEntity )
          goto LABEL_141;
      }
      if ( v53->max_length > 1 )
      {
        v53->m_Items[1] = (Il2CppObject *)v13;
        sub_1C21DDC(&v53->m_Items[1], v13);
        spendNum = this->fields.recvRpNum;
        userEntity = j_il2cpp_value_box_0(int_TypeInfo, &spendNum, v54, v55, v56);
        v57 = (Il2CppObject *)userEntity;
        if ( userEntity )
        {
          userEntity = sub_1C21F74(userEntity, v53->obj.klass->_1.element_class);
          if ( !userEntity )
            goto LABEL_141;
        }
        if ( v53->max_length > 2 )
        {
          v53->m_Items[2] = v57;
          sub_1C21DDC(&v53->m_Items[2], v57);
          usrCurrentRp = this->fields.usrCurrentRp;
          userEntity = j_il2cpp_value_box_0(int_TypeInfo, &usrCurrentRp, v58, v59, v60);
          v61 = (Il2CppObject *)userEntity;
          if ( userEntity )
          {
            userEntity = sub_1C21F74(userEntity, v53->obj.klass->_1.element_class);
            if ( !userEntity )
              goto LABEL_141;
          }
          if ( v53->max_length > 3 )
          {
            v53->m_Items[3] = v61;
            sub_1C21DDC(&v53->m_Items[3], v61);
            usrMaxRp = this->fields.usrMaxRp;
            userEntity = j_il2cpp_value_box_0(int_TypeInfo, &usrMaxRp, v62, v63, v64);
            v65 = (Il2CppObject *)userEntity;
            if ( userEntity )
            {
              userEntity = sub_1C21F74(userEntity, v53->obj.klass->_1.element_class);
              if ( !userEntity )
                goto LABEL_141;
            }
            if ( v53->max_length > 4 )
            {
              v53->m_Items[4] = v65;
              sub_1C21DDC(&v53->m_Items[4], v65);
              recvSum = this->fields.recvSum;
              userEntity = j_il2cpp_value_box_0(int_TypeInfo, &recvSum, v66, v67, v68);
              v69 = (Il2CppObject *)userEntity;
              if ( userEntity )
              {
                userEntity = sub_1C21F74(userEntity, v53->obj.klass->_1.element_class);
                if ( !userEntity )
                  goto LABEL_141;
              }
              if ( v53->max_length > 5 )
              {
                v53->m_Items[5] = v69;
                sub_1C21DDC(&v53->m_Items[5], v69);
                v120 = this->fields.usrMaxRp;
                userEntity = j_il2cpp_value_box_0(int_TypeInfo, &v120, v70, v71, v72);
                v73 = (Il2CppObject *)userEntity;
                if ( userEntity )
                {
                  userEntity = sub_1C21F74(userEntity, v53->obj.klass->_1.element_class);
                  if ( !userEntity )
                    goto LABEL_141;
                }
                if ( v53->max_length > 6 )
                {
                  v53->m_Items[6] = v73;
                  sub_1C21DDC(&v53->m_Items[6], v73);
                  userEntity = (__int64)System_String__Format_63129984(v52, v53, 0LL);
                  if ( !this->fields.userEntity )
                    goto LABEL_140;
                  v74 = (System_String_o *)userEntity;
                  if ( UserGameEntity__getRp(this->fields.userEntity, 0LL) < this->fields.usrMaxRp )
                    goto LABEL_80;
                  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                  v109 = LocalizationManager__Get((System_String_o *)StringLiteral_11343/*"RP_FULL_MSG"*/, 0LL);
                  v110 = System_String__Format(v109, mText, 0LL);
                  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
                  v112 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
                  System_Action___ctor(
                    v112,
                    (Il2CppObject *)this,
                    Method_RecoverItemComponent_closeNotificationDlg__,
                    0LL);
                  if ( !Instance )
                    goto LABEL_140;
                  CommonUI__OpenNotificationDialog(
                    (CommonUI_o *)Instance,
                    (System_String_o *)StringLiteral_1/*""*/,
                    v110,
                    v112,
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
    sub_1C2209C(userEntity, v5);
  }
  v25 = this->fields.recvSum;
  usrMaxAp = this->fields.usrMaxAp;
  if ( !this->fields.isAddAp )
  {
    if ( v25 <= usrMaxAp )
      v77 = (System_String_o **)&StringLiteral_2161/*"AP_RECOVER_CONFIRM_MSG"*/;
    else
      v77 = (System_String_o **)&StringLiteral_2162/*"AP_RECOVER_CONFIRM_MSG_OVER"*/;
    v78 = *v77;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v29 = LocalizationManager__Get(v78, 0LL);
    userEntity = sub_1C21EE0(object___TypeInfo, 8LL);
    if ( !userEntity )
      goto LABEL_140;
    v30 = (System_Object_array *)userEntity;
    if ( mText )
    {
      userEntity = sub_1C21F74(mText, *(_QWORD *)(*(_QWORD *)userEntity + 64LL));
      if ( !userEntity )
        goto LABEL_141;
    }
    if ( v30->max_length )
    {
      v30->m_Items[0] = mText;
      userEntity = sub_1C21DDC(v30->m_Items, mText);
      if ( v13 )
      {
        userEntity = sub_1C21F74(v13, v30->obj.klass->_1.element_class);
        if ( !userEntity )
          goto LABEL_141;
      }
      if ( v30->max_length > 1 )
      {
        v30->m_Items[1] = (Il2CppObject *)v13;
        sub_1C21DDC(&v30->m_Items[1], v13);
        spendNum = this->fields.apRcvRate;
        userEntity = j_il2cpp_value_box_0(int_TypeInfo, &spendNum, v79, v80, v81);
        v82 = (Il2CppObject *)userEntity;
        if ( userEntity )
        {
          userEntity = sub_1C21F74(userEntity, v30->obj.klass->_1.element_class);
          if ( !userEntity )
            goto LABEL_141;
        }
        if ( v30->max_length > 2 )
        {
          v30->m_Items[2] = v82;
          sub_1C21DDC(&v30->m_Items[2], v82);
          usrCurrentRp = this->fields.recvApNum;
          userEntity = j_il2cpp_value_box_0(int_TypeInfo, &usrCurrentRp, v83, v84, v85);
          v86 = (Il2CppObject *)userEntity;
          if ( userEntity )
          {
            userEntity = sub_1C21F74(userEntity, v30->obj.klass->_1.element_class);
            if ( !userEntity )
              goto LABEL_141;
          }
          if ( v30->max_length > 3 )
          {
            v30->m_Items[3] = v86;
            sub_1C21DDC(&v30->m_Items[3], v86);
            usrMaxRp = this->fields.usrCurrentAp;
            userEntity = j_il2cpp_value_box_0(int_TypeInfo, &usrMaxRp, v87, v88, v89);
            v90 = (Il2CppObject *)userEntity;
            if ( userEntity )
            {
              userEntity = sub_1C21F74(userEntity, v30->obj.klass->_1.element_class);
              if ( !userEntity )
                goto LABEL_141;
            }
            if ( v30->max_length > 4 )
            {
              v30->m_Items[4] = v90;
              sub_1C21DDC(&v30->m_Items[4], v90);
              recvSum = this->fields.usrMaxAp;
              userEntity = j_il2cpp_value_box_0(int_TypeInfo, &recvSum, v91, v92, v93);
              v94 = (Il2CppObject *)userEntity;
              if ( userEntity )
              {
                userEntity = sub_1C21F74(userEntity, v30->obj.klass->_1.element_class);
                if ( !userEntity )
                  goto LABEL_141;
              }
              if ( v30->max_length > 5 )
              {
                v30->m_Items[5] = v94;
                sub_1C21DDC(&v30->m_Items[5], v94);
                v120 = this->fields.recvSum;
                userEntity = j_il2cpp_value_box_0(int_TypeInfo, &v120, v95, v96, v97);
                v98 = (Il2CppObject *)userEntity;
                if ( userEntity )
                {
                  userEntity = sub_1C21F74(userEntity, v30->obj.klass->_1.element_class);
                  if ( !userEntity )
                    goto LABEL_141;
                }
                if ( v30->max_length > 6 )
                {
                  v30->m_Items[6] = v98;
                  sub_1C21DDC(&v30->m_Items[6], v98);
                  v119 = this->fields.usrMaxAp;
                  userEntity = j_il2cpp_value_box_0(int_TypeInfo, &v119, v99, v100, v101);
                  v50 = (Il2CppObject *)userEntity;
                  if ( userEntity )
                  {
                    userEntity = sub_1C21F74(userEntity, v30->obj.klass->_1.element_class);
                    if ( !userEntity )
                      goto LABEL_141;
                  }
                  if ( v30->max_length > 7 )
                  {
                    v30->m_Items[7] = v50;
                    v51 = &v30->m_Items[7];
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
    v27 = (System_String_o **)&StringLiteral_2157/*"AP_ADD_CONFIRM_MSG"*/;
  else
    v27 = (System_String_o **)&StringLiteral_2158/*"AP_ADD_CONFIRM_MSG_OVER"*/;
  v28 = *v27;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v29 = LocalizationManager__Get(v28, 0LL);
  userEntity = sub_1C21EE0(object___TypeInfo, 7LL);
  if ( !userEntity )
    goto LABEL_140;
  v30 = (System_Object_array *)userEntity;
  if ( mText )
  {
    userEntity = sub_1C21F74(mText, *(_QWORD *)(*(_QWORD *)userEntity + 64LL));
    if ( !userEntity )
      goto LABEL_141;
  }
  if ( !v30->max_length )
    goto LABEL_139;
  v30->m_Items[0] = mText;
  userEntity = sub_1C21DDC(v30->m_Items, mText);
  if ( v13 )
  {
    userEntity = sub_1C21F74(v13, v30->obj.klass->_1.element_class);
    if ( !userEntity )
      goto LABEL_141;
  }
  if ( v30->max_length <= 1 )
    goto LABEL_139;
  v30->m_Items[1] = (Il2CppObject *)v13;
  sub_1C21DDC(&v30->m_Items[1], v13);
  spendNum = this->fields.recvApNum;
  userEntity = j_il2cpp_value_box_0(int_TypeInfo, &spendNum, v31, v32, v33);
  v34 = (Il2CppObject *)userEntity;
  if ( userEntity )
  {
    userEntity = sub_1C21F74(userEntity, v30->obj.klass->_1.element_class);
    if ( !userEntity )
      goto LABEL_141;
  }
  if ( v30->max_length <= 2 )
    goto LABEL_139;
  v30->m_Items[2] = v34;
  sub_1C21DDC(&v30->m_Items[2], v34);
  usrCurrentRp = this->fields.usrCurrentAp;
  userEntity = j_il2cpp_value_box_0(int_TypeInfo, &usrCurrentRp, v35, v36, v37);
  v38 = (Il2CppObject *)userEntity;
  if ( userEntity )
  {
    userEntity = sub_1C21F74(userEntity, v30->obj.klass->_1.element_class);
    if ( !userEntity )
      goto LABEL_141;
  }
  if ( v30->max_length <= 3 )
    goto LABEL_139;
  v30->m_Items[3] = v38;
  sub_1C21DDC(&v30->m_Items[3], v38);
  usrMaxRp = this->fields.usrMaxAp;
  userEntity = j_il2cpp_value_box_0(int_TypeInfo, &usrMaxRp, v39, v40, v41);
  v42 = (Il2CppObject *)userEntity;
  if ( userEntity )
  {
    userEntity = sub_1C21F74(userEntity, v30->obj.klass->_1.element_class);
    if ( !userEntity )
      goto LABEL_141;
  }
  if ( v30->max_length <= 4 )
    goto LABEL_139;
  v30->m_Items[4] = v42;
  sub_1C21DDC(&v30->m_Items[4], v42);
  recvSum = this->fields.recvSum;
  userEntity = j_il2cpp_value_box_0(int_TypeInfo, &recvSum, v43, v44, v45);
  v46 = (Il2CppObject *)userEntity;
  if ( userEntity )
  {
    userEntity = sub_1C21F74(userEntity, v30->obj.klass->_1.element_class);
    if ( !userEntity )
      goto LABEL_141;
  }
  if ( v30->max_length <= 5 )
    goto LABEL_139;
  v30->m_Items[5] = v46;
  sub_1C21DDC(&v30->m_Items[5], v46);
  v120 = this->fields.usrMaxAp;
  userEntity = j_il2cpp_value_box_0(int_TypeInfo, &v120, v47, v48, v49);
  v50 = (Il2CppObject *)userEntity;
  if ( userEntity )
  {
    userEntity = sub_1C21F74(userEntity, v30->obj.klass->_1.element_class);
    if ( !userEntity )
    {
LABEL_141:
      v118 = sub_1C220B8();
      sub_1C21F60(v118, 0LL);
    }
  }
  if ( v30->max_length <= 6 )
    goto LABEL_139;
  v30->m_Items[6] = v50;
  v51 = &v30->m_Items[6];
LABEL_115:
  sub_1C21DDC(v51, v50);
  v74 = System_String__Format_63129984(v29, v30, 0LL);
  userEntity = (__int64)this->fields.userEntity;
  if ( !userEntity )
    goto LABEL_140;
  if ( UserGameEntity__getAct((UserGameEntity_o *)userEntity, 0LL) < this->fields.usrMaxAp )
  {
    if ( this->fields.currentType == 2 )
    {
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v102 = LocalizationManager__Get((System_String_o *)StringLiteral_2167/*"AP_RECOVER_STONEPAY_WARNING_MSG"*/, 0LL);
      v103 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v104 = (CommonConfirmDialog_ClickDelegate_o *)sub_1C22084(CommonConfirmDialog_ClickDelegate_TypeInfo);
      CommonConfirmDialog_ClickDelegate___ctor(
        v104,
        (Il2CppObject *)this,
        Method_RecoverItemComponent_spendItemDlg__,
        0LL);
      userEntity = (__int64)BalanceConfig_TypeInfo;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
        userEntity = j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      if ( v103 )
      {
        CommonUI__OpenConfirmDecideDlgAddMsgFrame(
          (CommonUI_o *)v103,
          v7,
          v74,
          v102,
          v21,
          v22,
          v104,
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
      sub_1C22094(userEntity, v5);
    }
    if ( this->fields.isAddAp || this->fields.apRcvRate != 100 || this->fields.spendNum >= 2 )
    {
      v113 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      targetId = this->fields.targetId;
      needAp = this->fields.needAp;
      v116 = (CommonUI_o *)v113;
      v117 = (System_Action_bool__int__o *)sub_1C22084(System_Action_bool__int__TypeInfo);
      System_Action_bool__int____ctor(v117, (Il2CppObject *)this, Method_RecoverItemComponent_CloseApRecovDlg__, 0LL);
      if ( !v116 )
        goto LABEL_140;
      CommonUI__OpenApRecoverConfirmDlg(v116, targetId, needAp, v117, 0LL);
      return;
    }
LABEL_80:
    v75 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v76 = (CommonConfirmDialog_ClickDelegate_o *)sub_1C22084(CommonConfirmDialog_ClickDelegate_TypeInfo);
    CommonConfirmDialog_ClickDelegate___ctor(v76, (Il2CppObject *)this, Method_RecoverItemComponent_spendItemDlg__, 0LL);
    userEntity = (__int64)BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      userEntity = j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    if ( v75 )
    {
      CommonUI__OpenConfirmDecideDlg(
        (CommonUI_o *)v75,
        v7,
        v74,
        v21,
        v22,
        v76,
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
        0LL);
      return;
    }
    goto LABEL_140;
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v105 = LocalizationManager__Get((System_String_o *)StringLiteral_2159/*"AP_FULL_MSG"*/, 0LL);
  v106 = System_String__Format(v105, mText, 0LL);
  v107 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v108 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
  System_Action___ctor(v108, (Il2CppObject *)this, Method_RecoverItemComponent_closeNotificationDlg__, 0LL);
  if ( !v107 )
    goto LABEL_140;
  CommonUI__OpenNotificationDialog(
    (CommonUI_o *)v107,
    (System_String_o *)StringLiteral_1/*""*/,
    v106,
    v108,
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

  if ( (byte_4BD71E9 & 1) == 0 )
  {
    sub_1C21E38(&int_TypeInfo);
    sub_1C21E38(&StringLiteral_25415/*"{0:N0}"*/);
    byte_4BD71E9 = 1;
  }
  currentNumLb = this->fields.currentNumLb;
  v11 = stoneCount;
  v8 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v11, method, v3, v4);
  v9 = System_String__Format((System_String_o *)StringLiteral_25415/*"{0:N0}"*/, v8, 0LL);
  if ( !currentNumLb )
    sub_1C22094(v9, v10);
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

  if ( (byte_4BD71DE & 1) == 0 )
  {
    sub_1C21E38(&RecoverItemComponent_CallbackFunc_TypeInfo);
    byte_4BD71DE = 1;
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
    v9 = sub_1C5D328(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (RecoverItemComponent_o *)sub_1C22354(v8);
  RecoverItemComponent__remove_callbackFunc(v11, v12, v13);
}


void __fastcall RecoverItemComponent__closeNotificationDlg(RecoverItemComponent_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v3; // x1

  if ( (byte_4BD71E7 & 1) == 0 )
  {
    sub_1C21E38(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4BD71E7 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1C22094(0LL, v3);
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

  if ( (byte_4BD71DF & 1) == 0 )
  {
    sub_1C21E38(&RecoverItemComponent_CallbackFunc_TypeInfo);
    byte_4BD71DF = 1;
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
    v9 = sub_1C5D328(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (RecoverItemComponent_o *)sub_1C22354(v8);
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
  __int64 v22; // x2
  __int64 v23; // x3
  __int64 v24; // x4
  int recvTarget; // w8
  UILabel_o *v26; // x21
  Il2CppObject *v27; // x0
  UILabel_o *v28; // x21
  const MethodInfo *v29; // x1
  System_String_o *v30; // x20
  __int64 v31; // x2
  __int64 v32; // x3
  __int64 v33; // x4
  Il2CppObject *v34; // x0
  System_String_o *v35; // x0
  UILabel_o *v36; // x20
  Il2CppObject *v37; // x21
  System_String_o *v38; // x22
  __int64 v39; // x2
  __int64 v40; // x3
  __int64 v41; // x4
  Il2CppObject *v42; // x24
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
  int32_t type; // w8
  struct ItemIconComponent_o *itemIconInfo; // x27
  float v55; // s0
  int v56; // w8
  float usrMaxAp; // s8
  float v58; // s9
  float v59; // s8
  unsigned int v60; // w9
  unsigned int v61; // w8
  System_String_o *v62; // x23
  __int64 v63; // x2
  __int64 v64; // x3
  __int64 v65; // x4
  Il2CppObject *v66; // x0
  System_String_o *v67; // x0
  UILabel_o *itemDetailLb; // x23
  Il2CppObject *v69; // x24
  System_String_o *v70; // x25
  __int64 v71; // x2
  __int64 v72; // x3
  __int64 v73; // x4
  Il2CppObject *v74; // x26
  __int64 v75; // x2
  __int64 v76; // x3
  __int64 v77; // x4
  Il2CppObject *v78; // x0
  int backSprite; // w22
  float v80; // s8
  float v81; // s8
  unsigned int v82; // w9
  unsigned int v83; // w8
  ItemEntity_o *RecvItemData; // x0
  ItemEntity_o *v85; // x24
  __int64 v86; // x2
  __int64 v87; // x3
  __int64 v88; // x4
  int32_t num; // w28
  int32_t v90; // w8
  BalanceConfig_c *v91; // x0
  float v92; // s8
  int v93; // w8
  int v94; // s0
  float v95; // s9
  float v96; // s8
  int v97; // w8
  float v98; // s8
  float v99; // s8
  int32_t v100; // w11
  int32_t v101; // w12
  unsigned int v102; // w8
  System_String_o *v103; // x23
  __int64 v104; // x2
  __int64 v105; // x3
  __int64 v106; // x4
  Il2CppObject *v107; // x0
  System_String_o *v108; // x0
  UILabel_o *v109; // x23
  Il2CppObject *v110; // x25
  System_String_o *v111; // x26
  __int64 v112; // x2
  __int64 v113; // x3
  __int64 v114; // x4
  Il2CppObject *v115; // x27
  __int64 v116; // x2
  __int64 v117; // x3
  __int64 v118; // x4
  Il2CppObject *v119; // x0
  int value; // w23
  float v121; // s8
  float v122; // s8
  unsigned int v123; // w8
  System_String_o *v124; // x21
  __int64 v125; // x2
  __int64 v126; // x3
  __int64 v127; // x4
  Il2CppObject *v128; // x0
  System_String_o *v129; // x0
  UILabel_o *v130; // x21
  Il2CppObject *v131; // x23
  System_String_o *v132; // x24
  __int64 v133; // x2
  __int64 v134; // x3
  __int64 v135; // x4
  Il2CppObject *v136; // x0
  UILabel_o *v137; // x21
  Il2CppObject *v138; // x0
  UILabel_o *v139; // x21
  int v140; // w8
  System_String_o *v141; // x21
  __int64 v142; // x2
  __int64 v143; // x3
  __int64 v144; // x4
  Il2CppObject *v145; // x0
  System_String_o *v146; // x0
  UILabel_o *v147; // x21
  Il2CppObject *v148; // x22
  System_String_o *v149; // x23
  __int64 v150; // x2
  __int64 v151; // x3
  __int64 v152; // x4
  Il2CppObject *v153; // x0
  UILabel_o *currentNumLb; // x21
  UILabel_o *spendNumLb; // x21
  char v156; // w9
  int32_t v157; // [xsp+4h] [xbp-8Ch] BYREF
  int32_t recvApNum; // [xsp+8h] [xbp-88h] BYREF
  int32_t apRcvRate; // [xsp+Ch] [xbp-84h] BYREF
  int32_t spendNum; // [xsp+10h] [xbp-80h] BYREF
  int32_t CommandSpell; // [xsp+14h] [xbp-7Ch] BYREF
  UserItemEntity_o *entity; // [xsp+18h] [xbp-78h] BYREF

  v10 = this;
  if ( (byte_4BD71E0 & 1) == 0 )
  {
    sub_1C21E38(&BalanceConfig_TypeInfo);
    sub_1C21E38(&Method_DataManager_GetMasterData_CommandSpellMaster___);
    sub_1C21E38(&Method_DataManager_GetMasterData_ItemMaster___);
    sub_1C21E38(&Method_DataManager_GetMasterData_StoneShopMaster___);
    sub_1C21E38(&Method_DataManager_GetMasterData_UserItemMaster___);
    sub_1C21E38(&Method_DataMasterBase_CommandSpellMaster__CommandSpellEntity__int__GetEntity__);
    sub_1C21E38(&Method_DataMasterBase_StoneShopMaster__StoneShopEntity__int__GetEntity__);
    sub_1C21E38(&int_TypeInfo);
    sub_1C21E38(&LocalizationManager_TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C21E38(&StringLiteral_3662/*"CMDSPELL_CURRENT_NUM"*/);
    sub_1C21E38(&StringLiteral_2052/*"ADD_RECOVER_CMDSPELL_TXT"*/);
    sub_1C21E38(&StringLiteral_3664/*"CMDSPELL_SPEND_NUM_TXT"*/);
    sub_1C21E38(&StringLiteral_25415/*"{0:N0}"*/);
    sub_1C21E38(&StringLiteral_918/*"-"*/);
    sub_1C21E38(&StringLiteral_15058/*"UNIT_INFO"*/);
    sub_1C21E38(&StringLiteral_12431/*"SPEND_NUM_TXT"*/);
    sub_1C21E38(&StringLiteral_4041/*"CURRENT_NUM_TXT"*/);
    sub_1C21E38(&StringLiteral_2053/*"ADD_RECOVER_NUM_TXT"*/);
    sub_1C21E38(&StringLiteral_2164/*"AP_RECOVER_NUM_TXT"*/);
    this = (RecoverItemComponent_o *)sub_1C21E38(&StringLiteral_3663/*"CMDSPELL_CURRENT_NUM_TXT"*/);
    byte_4BD71E0 = 1;
  }
  entity = 0LL;
  CommandSpell = 0;
  if ( !data )
    goto LABEL_152;
  v10->fields.currentType = data->fields.recoverType;
  v10->fields.recvTarget = data->fields.target;
  targetId = data->fields.targetId;
  v10->fields.isEnableSelect = 0;
  v10->fields.targetId = targetId;
  v10->fields.dialog = dlg;
  sub_1C21DDC(&v10->fields.dialog, dlg);
  v10->fields.callbackFunc = callback;
  v10->fields.needAp = needAp;
  *(_WORD *)&v10->fields.isAp = 1;
  sub_1C21DDC(&v10->fields.callbackFunc, callback);
  this = (RecoverItemComponent_o *)v10->fields.maskImg;
  if ( !this )
    goto LABEL_152;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  v10->fields.userEntity = SelfUserGame;
  p_userEntity = (RecoverItemComponent_o **)&v10->fields.userEntity;
  sub_1C21DDC(&v10->fields.userEntity, SelfUserGame);
  this = (RecoverItemComponent_o *)v10->fields.userEntity;
  if ( !this )
    goto LABEL_152;
  this = (RecoverItemComponent_o *)UserGameEntity__getAct((UserGameEntity_o *)this, 0LL);
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
  UILabel__set_text((UILabel_o *)this, (System_String_o *)StringLiteral_918/*"-"*/, 0LL);
  this = (RecoverItemComponent_o *)v10->fields.currentNumLb;
  if ( !this )
    goto LABEL_152;
  UILabel__set_text((UILabel_o *)this, (System_String_o *)StringLiteral_918/*"-"*/, 0LL);
  this = (RecoverItemComponent_o *)v10->fields.spendNumLb;
  if ( !this )
    goto LABEL_152;
  UILabel__set_text((UILabel_o *)this, (System_String_o *)StringLiteral_918/*"-"*/, 0LL);
  this = (RecoverItemComponent_o *)v10->fields.itemDetailLb;
  if ( !this )
    goto LABEL_152;
  UILabel__set_text((UILabel_o *)this, (System_String_o *)StringLiteral_918/*"-"*/, 0LL);
  currentInfoLb = v10->fields.currentInfoLb;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  this = (RecoverItemComponent_o *)LocalizationManager__Get((System_String_o *)StringLiteral_4041/*"CURRENT_NUM_TXT"*/, 0LL);
  if ( !currentInfoLb )
    goto LABEL_152;
  UILabel__set_text(currentInfoLb, (System_String_o *)this, 0LL);
  spendInfoLb = v10->fields.spendInfoLb;
  this = (RecoverItemComponent_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12431/*"SPEND_NUM_TXT"*/, 0LL);
  if ( !spendInfoLb )
    goto LABEL_152;
  UILabel__set_text(spendInfoLb, (System_String_o *)this, 0LL);
  currentType = v10->fields.currentType;
  if ( currentType == 1 )
  {
    this = (RecoverItemComponent_o *)v10->fields.itemIconInfo;
    if ( !this )
      goto LABEL_152;
    this = (RecoverItemComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !this )
      goto LABEL_152;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
    this = (RecoverItemComponent_o *)v10->fields.cmdSpellBg;
    if ( !this )
      goto LABEL_152;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
    v49 = v10->fields.currentInfoLb;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    this = (RecoverItemComponent_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3663/*"CMDSPELL_CURRENT_NUM_TXT"*/, 0LL);
    if ( !v49 )
      goto LABEL_152;
    UILabel__set_text(v49, (System_String_o *)this, 0LL);
    v50 = v10->fields.spendInfoLb;
    this = (RecoverItemComponent_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3664/*"CMDSPELL_SPEND_NUM_TXT"*/, 0LL);
    if ( !v50 )
      goto LABEL_152;
    UILabel__set_text(v50, (System_String_o *)this, 0LL);
    this = (RecoverItemComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !this )
      goto LABEL_152;
    this = (RecoverItemComponent_o *)DataManager__GetMasterData_object_(
                                       (DataManager_o *)this,
                                       (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_CommandSpellMaster___);
    if ( !this )
      goto LABEL_152;
    v51 = DataMasterBase_object__object__int___GetEntity(
            (DataMasterBase_TMaster__TEntity__PKType__o *)this,
            v10->fields.targetId,
            (const MethodInfo_325BDC8 *)Method_DataMasterBase_CommandSpellMaster__CommandSpellEntity__int__GetEntity__);
    if ( !v51 )
      goto LABEL_151;
    v52 = (CommandSpellEntity_o *)v51;
    this = (RecoverItemComponent_o *)v10->fields.cmdSpellIcon;
    if ( !this )
      goto LABEL_152;
    CommandSpellIconComponent__SetData((CommandSpellIconComponent_o *)this, v10->fields.userEntity, 0LL);
    this = (RecoverItemComponent_o *)v10->fields.itemNameLb;
    if ( !this )
      goto LABEL_152;
    UILabel__set_text((UILabel_o *)this, v52->fields.name, 0LL);
    this = *p_userEntity;
    if ( !*p_userEntity )
      goto LABEL_152;
    CommandSpell = UserGameEntity__getCommandSpell((UserGameEntity_o *)this, 0LL);
    *p_spendNum = v52->fields.consume;
    this = (RecoverItemComponent_o *)CommandSpellEntity__getValues(v52, 0LL);
    if ( !this )
      goto LABEL_152;
    if ( LODWORD(this->fields.m_CancellationTokenSource) )
    {
      type = v52->fields.type;
      itemIconInfo = this->fields.itemIconInfo;
      if ( type == 3 )
      {
        if ( !itemIconInfo )
          goto LABEL_152;
        if ( !LODWORD(itemIconInfo->fields.m_CancellationTokenSource) )
          goto LABEL_153;
        v55 = (float)((float)SLODWORD(itemIconInfo->fields.backSprite) / 1000.0) * 100.0;
        v56 = (int)v55;
        if ( v55 == INFINITY )
          v56 = 0x80000000;
        v10->fields.apRcvRate = v56;
        usrMaxAp = (float)v10->fields.usrMaxAp;
        v58 = (float)SLODWORD(itemIconInfo->fields.backSprite) / 1000.0;
        if ( !byte_4BD7265 )
        {
          sub_1C21E38(&System_Math_TypeInfo);
          byte_4BD7265 = 1;
        }
        v59 = v58 * usrMaxAp;
        if ( !System_Math_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
        v60 = vcvtps_s32_f32(v59);
        if ( ceilf(v59) == INFINITY )
          v61 = 0x80000000;
        else
          v61 = v60;
        v10->fields.recvApNum = v61;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v62 = LocalizationManager__Get((System_String_o *)StringLiteral_3662/*"CMDSPELL_CURRENT_NUM"*/, 0LL);
        spendNum = v10->fields.spendNum;
        v66 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &spendNum, v63, v64, v65);
        v67 = System_String__Format(v62, v66, 0LL);
        itemDetailLb = v10->fields.itemDetailLb;
        v69 = (Il2CppObject *)v67;
        v70 = LocalizationManager__Get((System_String_o *)StringLiteral_2164/*"AP_RECOVER_NUM_TXT"*/, 0LL);
        apRcvRate = v10->fields.apRcvRate;
        v74 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &apRcvRate, v71, v72, v73);
        recvApNum = v10->fields.recvApNum;
        v78 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &recvApNum, v75, v76, v77);
        this = (RecoverItemComponent_o *)System_String__Format_63129916(v70, v69, v74, v78, 0LL);
        if ( !itemDetailLb )
          goto LABEL_152;
        UILabel__set_text(itemDetailLb, (System_String_o *)this, 0LL);
        type = v52->fields.type;
      }
      if ( type != 4 )
      {
LABEL_144:
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
            v48 = v10->fields.recvApNum + v10->fields.usrCurrentAp;
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
          v83 = *p_spendNum;
        }
        else
        {
          v80 = (float)(needAp - v10->fields.usrCurrentAp) / (float)backSprite;
          if ( !byte_4BD7265 )
          {
            sub_1C21E38(&System_Math_TypeInfo);
            byte_4BD7265 = 1;
          }
          v81 = fmaxf(v80, 1.0);
          if ( !System_Math_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
          v82 = vcvtps_s32_f32(v81);
          if ( ceilf(v81) == INFINITY )
            v83 = 0x80000000;
          else
            v83 = v82;
          *p_spendNum = v83;
        }
        v10->fields.recvApNum = v83 * backSprite;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v141 = LocalizationManager__Get((System_String_o *)StringLiteral_3662/*"CMDSPELL_CURRENT_NUM"*/, 0LL);
        spendNum = v10->fields.spendNum;
        v145 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &spendNum, v142, v143, v144);
        v146 = System_String__Format(v141, v145, 0LL);
        v147 = v10->fields.itemDetailLb;
        v148 = (Il2CppObject *)v146;
        v149 = LocalizationManager__Get((System_String_o *)StringLiteral_2052/*"ADD_RECOVER_CMDSPELL_TXT"*/, 0LL);
        apRcvRate = v10->fields.recvApNum;
        v153 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &apRcvRate, v150, v151, v152);
        this = (RecoverItemComponent_o *)System_String__Format_63129848(v149, v148, v153, 0LL);
        if ( !v147 )
          goto LABEL_152;
        UILabel__set_text(v147, (System_String_o *)this, 0LL);
        v10->fields.isAddAp = 1;
        goto LABEL_144;
      }
    }
LABEL_153:
    sub_1C2209C(this, data);
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
            goto LABEL_151;
          v85 = RecvItemData;
          this = (RecoverItemComponent_o *)v10->fields.itemIconInfo;
          if ( this )
          {
            ItemIconComponent__SetItemImage_39384288(
              (ItemIconComponent_o *)this,
              v85->fields.imageId,
              v85->fields.bgImageId,
              v85->fields.type,
              0,
              1,
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
                  UILabel__set_text((UILabel_o *)this, v85->fields.name, 0LL);
                  *p_spendNum = 1;
                  this = (RecoverItemComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
                  if ( this )
                  {
                    this = (RecoverItemComponent_o *)DataManager__GetMasterData_object_(
                                                       (DataManager_o *)this,
                                                       (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_UserItemMaster___);
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
                            goto LABEL_152;
                          num = entity->fields.num;
                        }
                        else
                        {
                          num = 0;
                        }
                        v90 = v85->fields.type;
                        if ( v90 == 3 )
                        {
                          v91 = BalanceConfig_TypeInfo;
                          if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
                          {
                            j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
                            v91 = BalanceConfig_TypeInfo;
                          }
                          v10->fields.spendNum = v91->static_fields->SpendApRecvItemNum;
                          v92 = (float)v85->fields.value / 1000.0;
                          if ( (float)(v92 * 100.0) == INFINITY )
                            v93 = 0x80000000;
                          else
                            v93 = (int)(float)(v92 * 100.0);
                          v94 = v10->fields.usrMaxAp;
                          v10->fields.apRcvRate = v93;
                          v95 = (float)v94;
                          if ( !byte_4BD7265 )
                          {
                            sub_1C21E38(&System_Math_TypeInfo);
                            byte_4BD7265 = 1;
                          }
                          v96 = v92 * v95;
                          if ( !System_Math_TypeInfo->_2.cctor_finished )
                            j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
                          v97 = vcvtps_s32_f32(v96);
                          if ( ceilf(v96) == INFINITY )
                            v97 = 0x80000000;
                          v10->fields.recvApNum = v97;
                          if ( needAp >= 1 )
                          {
                            v98 = (float)(needAp - v10->fields.usrCurrentAp) / (float)v97;
                            if ( !byte_4BD7265 )
                            {
                              sub_1C21E38(&System_Math_TypeInfo);
                              byte_4BD7265 = 1;
                            }
                            v99 = fmaxf(v98, 1.0);
                            if ( !System_Math_TypeInfo->_2.cctor_finished )
                              j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
                            v100 = v10->fields.apRcvRate;
                            v101 = v10->fields.recvApNum;
                            v102 = vcvtps_s32_f32(v99);
                            if ( ceilf(v99) == INFINITY )
                              v102 = 0x80000000;
                            v10->fields.spendNum = v102;
                            v10->fields.apRcvRate = v100 * v102;
                            v10->fields.recvApNum = v101 * v102;
                          }
                          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                          v103 = LocalizationManager__Get((System_String_o *)StringLiteral_15058/*"UNIT_INFO"*/, 0LL);
                          spendNum = v10->fields.spendNum;
                          v107 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &spendNum, v104, v105, v106);
                          v108 = System_String__Format(v103, v107, 0LL);
                          v109 = v10->fields.itemDetailLb;
                          v110 = (Il2CppObject *)v108;
                          v111 = LocalizationManager__Get((System_String_o *)StringLiteral_2164/*"AP_RECOVER_NUM_TXT"*/, 0LL);
                          apRcvRate = v10->fields.apRcvRate;
                          v115 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &apRcvRate, v112, v113, v114);
                          recvApNum = v10->fields.recvApNum;
                          v119 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &recvApNum, v116, v117, v118);
                          this = (RecoverItemComponent_o *)System_String__Format_63129916(v111, v110, v115, v119, 0LL);
                          if ( !v109 )
                            goto LABEL_152;
                          UILabel__set_text(v109, (System_String_o *)this, 0LL);
                          v90 = v85->fields.type;
                        }
                        if ( v90 == 4 )
                        {
                          value = v85->fields.value;
                          if ( needAp < 1 )
                          {
                            *p_spendNum = 1;
                          }
                          else
                          {
                            v121 = (float)(needAp - v10->fields.usrCurrentAp) / (float)value;
                            if ( !byte_4BD7265 )
                            {
                              sub_1C21E38(&System_Math_TypeInfo);
                              byte_4BD7265 = 1;
                            }
                            v122 = fmaxf(v121, 1.0);
                            if ( !System_Math_TypeInfo->_2.cctor_finished )
                              j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
                            v123 = vcvtps_s32_f32(v122);
                            if ( ceilf(v122) == INFINITY )
                              v123 = 0x80000000;
                            *p_spendNum = v123;
                            value *= v123;
                          }
                          v10->fields.recvApNum = value;
                          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                          v124 = LocalizationManager__Get((System_String_o *)StringLiteral_15058/*"UNIT_INFO"*/, 0LL);
                          spendNum = v10->fields.spendNum;
                          v128 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &spendNum, v125, v126, v127);
                          v129 = System_String__Format(v124, v128, 0LL);
                          v130 = v10->fields.itemDetailLb;
                          v131 = (Il2CppObject *)v129;
                          v132 = LocalizationManager__Get((System_String_o *)StringLiteral_2053/*"ADD_RECOVER_NUM_TXT"*/, 0LL);
                          apRcvRate = v10->fields.recvApNum;
                          v136 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &apRcvRate, v133, v134, v135);
                          this = (RecoverItemComponent_o *)System_String__Format_63129848(v132, v131, v136, 0LL);
                          if ( !v130 )
                            goto LABEL_152;
                          UILabel__set_text(v130, (System_String_o *)this, 0LL);
                          v10->fields.isAddAp = 1;
                        }
                        v137 = v10->fields.currentNumLb;
                        spendNum = num;
                        v138 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &spendNum, v86, v87, v88);
                        this = (RecoverItemComponent_o *)System_String__Format(
                                                           (System_String_o *)StringLiteral_25415/*"{0:N0}"*/,
                                                           v138,
                                                           0LL);
                        if ( v137 )
                        {
                          UILabel__set_text(v137, (System_String_o *)this, 0LL);
                          v139 = v10->fields.spendNumLb;
                          this = (RecoverItemComponent_o *)System_Int32__ToString((int)v10 + 128, 0LL);
                          if ( v139 )
                          {
                            UILabel__set_text(v139, (System_String_o *)this, 0LL);
                            v140 = v10->fields.recvApNum + v10->fields.usrCurrentAp;
                            v10->fields.isEnableSelect = num >= v10->fields.spendNum;
                            v10->fields.recvSum = v140;
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
    sub_1C22094(this, data);
  }
  if ( currentType != 2 )
    goto LABEL_151;
  this = (RecoverItemComponent_o *)v10->fields.itemIconInfo;
  if ( !this )
    goto LABEL_152;
  this = (RecoverItemComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !this )
    goto LABEL_152;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
  this = (RecoverItemComponent_o *)v10->fields.cmdSpellBg;
  if ( !this )
    goto LABEL_152;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
  this = (RecoverItemComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_152;
  this = (RecoverItemComponent_o *)DataManager__GetMasterData_object_(
                                     (DataManager_o *)this,
                                     (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_ItemMaster___);
  if ( !this )
    goto LABEL_152;
  this = (RecoverItemComponent_o *)ItemMaster__GetEntityByType((ItemMaster_o *)this, 2, 0LL);
  if ( !this )
    goto LABEL_152;
  v20 = this;
  this = (RecoverItemComponent_o *)v10->fields.itemIconInfo;
  if ( !this )
    goto LABEL_152;
  ItemIconComponent__SetItemImage_39384288(
    (ItemIconComponent_o *)this,
    (int32_t)v20->fields.cmdSpellBg,
    HIDWORD(v20->fields.cmdSpellBg),
    (int32_t)v20->fields.cmdSpellIcon,
    0,
    1,
    0LL);
  this = (RecoverItemComponent_o *)v10->fields.itemIconInfo;
  if ( !this )
    goto LABEL_152;
  this = (RecoverItemComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !this )
    goto LABEL_152;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
  this = (RecoverItemComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_152;
  this = (RecoverItemComponent_o *)DataManager__GetMasterData_object_(
                                     (DataManager_o *)this,
                                     (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_StoneShopMaster___);
  if ( !this )
    goto LABEL_152;
  this = (RecoverItemComponent_o *)DataMasterBase_object__object__int___GetEntity(
                                     (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                     v10->fields.targetId,
                                     (const MethodInfo_325BDC8 *)Method_DataMasterBase_StoneShopMaster__StoneShopEntity__int__GetEntity__);
  if ( !v10->fields.itemNameLb )
    goto LABEL_152;
  v21 = this;
  UILabel__set_text(v10->fields.itemNameLb, (System_String_o *)v20->fields.m_CancellationTokenSource, 0LL);
  if ( !*p_userEntity )
    goto LABEL_152;
  recvTarget = (*p_userEntity)->fields.recvTarget;
  if ( v21 )
    *p_spendNum = HIDWORD(v21->fields.cmdSpellBg);
  v26 = v10->fields.currentNumLb;
  spendNum = recvTarget;
  v27 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &spendNum, v22, v23, v24);
  this = (RecoverItemComponent_o *)System_String__Format((System_String_o *)StringLiteral_25415/*"{0:N0}"*/, v27, 0LL);
  if ( !v26 )
    goto LABEL_152;
  UILabel__set_text(v26, (System_String_o *)this, 0LL);
  v28 = v10->fields.spendNumLb;
  this = (RecoverItemComponent_o *)System_Int32__ToString((int)v10 + 128, 0LL);
  if ( !v28 )
    goto LABEL_152;
  UILabel__set_text(v28, (System_String_o *)this, 0LL);
  RecoverItemComponent__AttachStoneCountRefreshComponent(v10, v29);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v30 = LocalizationManager__Get((System_String_o *)StringLiteral_15058/*"UNIT_INFO"*/, 0LL);
  apRcvRate = v10->fields.spendNum;
  v34 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &apRcvRate, v31, v32, v33);
  v35 = System_String__Format(v30, v34, 0LL);
  v36 = v10->fields.itemDetailLb;
  v37 = (Il2CppObject *)v35;
  v38 = LocalizationManager__Get((System_String_o *)StringLiteral_2164/*"AP_RECOVER_NUM_TXT"*/, 0LL);
  recvApNum = v10->fields.apRcvRate;
  v42 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &recvApNum, v39, v40, v41);
  v157 = v10->fields.recvApNum;
  v46 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v157, v43, v44, v45);
  this = (RecoverItemComponent_o *)System_String__Format_63129916(v38, v37, v42, v46, 0LL);
  if ( !v36 )
    goto LABEL_152;
  UILabel__set_text(v36, (System_String_o *)this, 0LL);
  this = *p_userEntity;
  if ( !*p_userEntity )
    goto LABEL_152;
  v47 = UserGameEntity__get_PayableStoneNum((UserGameEntity_o *)this, 0LL) < v10->fields.spendNum;
  v48 = v10->fields.usrMaxAp + v10->fields.usrCurrentAp;
LABEL_147:
  v156 = !v47;
  v10->fields.isEnableSelect = v156;
  v10->fields.recvSum = v48;
LABEL_151:
  RecoverItemComponent__setEnableSelectItem(v10, (const MethodInfo *)data);
}


void __fastcall RecoverItemComponent__setEnableSelectItem(RecoverItemComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *maskImg; // x0

  if ( !this->fields.isEnableSelect )
  {
    maskImg = this->fields.maskImg;
    if ( !maskImg )
      sub_1C22094(0LL, method);
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
  __int64 v22; // x2
  __int64 v23; // x3
  __int64 v24; // x4
  int recvTarget; // w8
  UILabel_o *v26; // x22
  Il2CppObject *v27; // x0
  UILabel_o *v28; // x22
  const MethodInfo *v29; // x1
  System_String_o *v30; // x20
  __int64 v31; // x2
  __int64 v32; // x3
  __int64 v33; // x4
  Il2CppObject *v34; // x0
  System_String_o *v35; // x0
  UILabel_o *v36; // x20
  Il2CppObject *v37; // x22
  System_String_o *v38; // x23
  __int64 v39; // x2
  __int64 v40; // x3
  __int64 v41; // x4
  Il2CppObject *v42; // x0
  bool v43; // cc
  int v44; // w8
  UILabel_o *v45; // x23
  UILabel_o *v46; // x23
  Il2CppObject *v47; // x0
  CommandSpellEntity_o *v48; // x23
  struct ItemIconComponent_o *itemIconInfo; // x8
  int backSprite; // w21
  float v51; // s8
  float v52; // s8
  unsigned int v53; // w9
  unsigned int v54; // w8
  ItemEntity_o *RecvItemData; // x0
  ItemEntity_o *v56; // x24
  int32_t v57; // w26
  int value; // w21
  float v59; // s8
  float v60; // s8
  unsigned int v61; // w8
  System_String_o *v62; // x21
  __int64 v63; // x2
  __int64 v64; // x3
  __int64 v65; // x4
  Il2CppObject *v66; // x0
  System_String_o *v67; // x0
  UILabel_o *v68; // x21
  Il2CppObject *v69; // x22
  System_String_o *v70; // x24
  __int64 v71; // x2
  __int64 v72; // x3
  __int64 v73; // x4
  Il2CppObject *v74; // x0
  UILabel_o *v75; // x21
  __int64 v76; // x2
  __int64 v77; // x3
  __int64 v78; // x4
  Il2CppObject *v79; // x0
  UILabel_o *v80; // x21
  int v81; // w8
  System_String_o *v82; // x21
  __int64 v83; // x2
  __int64 v84; // x3
  __int64 v85; // x4
  Il2CppObject *v86; // x0
  System_String_o *v87; // x0
  UILabel_o *itemDetailLb; // x21
  Il2CppObject *v89; // x22
  System_String_o *v90; // x23
  __int64 v91; // x2
  __int64 v92; // x3
  __int64 v93; // x4
  Il2CppObject *v94; // x0
  UILabel_o *currentNumLb; // x21
  UILabel_o *spendNumLb; // x21
  char v97; // w9
  int32_t v98; // [xsp+0h] [xbp-70h] BYREF
  int32_t recvRpNum; // [xsp+4h] [xbp-6Ch] BYREF
  int32_t spendNum; // [xsp+8h] [xbp-68h] BYREF
  int32_t CommandSpell; // [xsp+Ch] [xbp-64h] BYREF
  UserItemEntity_o *entity; // [xsp+28h] [xbp-48h] BYREF

  v10 = this;
  if ( (byte_4BD71E1 & 1) == 0 )
  {
    sub_1C21E38(&BalanceConfig_TypeInfo);
    sub_1C21E38(&Method_DataManager_GetMasterData_CommandSpellMaster___);
    sub_1C21E38(&Method_DataManager_GetMasterData_ItemMaster___);
    sub_1C21E38(&Method_DataManager_GetMasterData_StoneShopMaster___);
    sub_1C21E38(&Method_DataManager_GetMasterData_UserItemMaster___);
    sub_1C21E38(&Method_DataMasterBase_CommandSpellMaster__CommandSpellEntity__int__GetEntity__);
    sub_1C21E38(&Method_DataMasterBase_StoneShopMaster__StoneShopEntity__int__GetEntity__);
    sub_1C21E38(&int_TypeInfo);
    sub_1C21E38(&LocalizationManager_TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C21E38(&StringLiteral_3662/*"CMDSPELL_CURRENT_NUM"*/);
    sub_1C21E38(&StringLiteral_3664/*"CMDSPELL_SPEND_NUM_TXT"*/);
    sub_1C21E38(&StringLiteral_25415/*"{0:N0}"*/);
    sub_1C21E38(&StringLiteral_918/*"-"*/);
    sub_1C21E38(&StringLiteral_15058/*"UNIT_INFO"*/);
    sub_1C21E38(&StringLiteral_12431/*"SPEND_NUM_TXT"*/);
    sub_1C21E38(&StringLiteral_4041/*"CURRENT_NUM_TXT"*/);
    sub_1C21E38(&StringLiteral_11344/*"RP_RECOVER_CMDSPELL_TXT"*/);
    sub_1C21E38(&StringLiteral_11346/*"RP_RECOVER_NUM_TXT"*/);
    this = (RecoverItemComponent_o *)sub_1C21E38(&StringLiteral_3663/*"CMDSPELL_CURRENT_NUM_TXT"*/);
    byte_4BD71E1 = 1;
  }
  entity = 0LL;
  CommandSpell = 0;
  if ( !data )
    goto LABEL_108;
  v10->fields.currentType = data->fields.recoverType;
  v10->fields.recvTarget = data->fields.target;
  targetId = data->fields.targetId;
  v10->fields.isEnableSelect = 0;
  v10->fields.targetId = targetId;
  v10->fields.dialog = dlg;
  sub_1C21DDC(&v10->fields.dialog, dlg);
  v10->fields.callbackFunc = callback;
  sub_1C21DDC(&v10->fields.callbackFunc, callback);
  this = (RecoverItemComponent_o *)v10->fields.maskImg;
  if ( !this )
    goto LABEL_108;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  v10->fields.userEntity = SelfUserGame;
  p_userEntity = (RecoverItemComponent_o **)&v10->fields.userEntity;
  sub_1C21DDC(&v10->fields.userEntity, SelfUserGame);
  this = (RecoverItemComponent_o *)v10->fields.userEntity;
  if ( !this )
    goto LABEL_108;
  v10->fields.usrCurrentRp = UserGameEntity__getRp((UserGameEntity_o *)this, 0LL);
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
  UILabel__set_text((UILabel_o *)this, (System_String_o *)StringLiteral_918/*"-"*/, 0LL);
  this = (RecoverItemComponent_o *)v10->fields.currentNumLb;
  if ( !this )
    goto LABEL_108;
  UILabel__set_text((UILabel_o *)this, (System_String_o *)StringLiteral_918/*"-"*/, 0LL);
  this = (RecoverItemComponent_o *)v10->fields.spendNumLb;
  if ( !this )
    goto LABEL_108;
  UILabel__set_text((UILabel_o *)this, (System_String_o *)StringLiteral_918/*"-"*/, 0LL);
  this = (RecoverItemComponent_o *)v10->fields.itemDetailLb;
  if ( !this )
    goto LABEL_108;
  UILabel__set_text((UILabel_o *)this, (System_String_o *)StringLiteral_918/*"-"*/, 0LL);
  currentInfoLb = v10->fields.currentInfoLb;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  this = (RecoverItemComponent_o *)LocalizationManager__Get((System_String_o *)StringLiteral_4041/*"CURRENT_NUM_TXT"*/, 0LL);
  if ( !currentInfoLb )
    goto LABEL_108;
  UILabel__set_text(currentInfoLb, (System_String_o *)this, 0LL);
  spendInfoLb = v10->fields.spendInfoLb;
  this = (RecoverItemComponent_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12431/*"SPEND_NUM_TXT"*/, 0LL);
  if ( !spendInfoLb )
    goto LABEL_108;
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
          v45 = v10->fields.currentInfoLb;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          this = (RecoverItemComponent_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3663/*"CMDSPELL_CURRENT_NUM_TXT"*/, 0LL);
          if ( v45 )
          {
            UILabel__set_text(v45, (System_String_o *)this, 0LL);
            v46 = v10->fields.spendInfoLb;
            this = (RecoverItemComponent_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3664/*"CMDSPELL_SPEND_NUM_TXT"*/, 0LL);
            if ( v46 )
            {
              UILabel__set_text(v46, (System_String_o *)this, 0LL);
              this = (RecoverItemComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
              if ( this )
              {
                this = (RecoverItemComponent_o *)DataManager__GetMasterData_object_(
                                                   (DataManager_o *)this,
                                                   (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_CommandSpellMaster___);
                if ( this )
                {
                  v47 = DataMasterBase_object__object__int___GetEntity(
                          (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                          v10->fields.targetId,
                          (const MethodInfo_325BDC8 *)Method_DataMasterBase_CommandSpellMaster__CommandSpellEntity__int__GetEntity__);
                  if ( !v47 )
                    goto LABEL_107;
                  v48 = (CommandSpellEntity_o *)v47;
                  this = (RecoverItemComponent_o *)v10->fields.cmdSpellIcon;
                  if ( this )
                  {
                    CommandSpellIconComponent__SetData((CommandSpellIconComponent_o *)this, v10->fields.userEntity, 0LL);
                    this = (RecoverItemComponent_o *)v10->fields.itemNameLb;
                    if ( this )
                    {
                      UILabel__set_text((UILabel_o *)this, v48->fields.name, 0LL);
                      this = *p_userEntity;
                      if ( *p_userEntity )
                      {
                        CommandSpell = UserGameEntity__getCommandSpell((UserGameEntity_o *)this, 0LL);
                        *p_spendNum = v48->fields.consume;
                        this = (RecoverItemComponent_o *)CommandSpellEntity__getValues(v48, 0LL);
                        if ( this )
                        {
                          if ( !LODWORD(this->fields.m_CancellationTokenSource) )
                            goto LABEL_109;
                          itemIconInfo = this->fields.itemIconInfo;
                          if ( !itemIconInfo )
                            goto LABEL_108;
                          if ( !LODWORD(itemIconInfo->fields.m_CancellationTokenSource) )
LABEL_109:
                            sub_1C2209C(this, data);
                          backSprite = (int)itemIconInfo->fields.backSprite;
                          if ( needRp < 1 )
                          {
                            v54 = *p_spendNum;
                          }
                          else
                          {
                            v51 = (float)(needRp - v10->fields.usrCurrentRp) / (float)backSprite;
                            if ( !byte_4BD7265 )
                            {
                              sub_1C21E38(&System_Math_TypeInfo);
                              byte_4BD7265 = 1;
                            }
                            v52 = fmaxf(v51, 1.0);
                            if ( !System_Math_TypeInfo->_2.cctor_finished )
                              j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
                            v53 = vcvtps_s32_f32(v52);
                            if ( ceilf(v52) == INFINITY )
                              v54 = 0x80000000;
                            else
                              v54 = v53;
                            *p_spendNum = v54;
                          }
                          v10->fields.recvRpNum = v54 * backSprite;
                          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                          v82 = LocalizationManager__Get((System_String_o *)StringLiteral_3662/*"CMDSPELL_CURRENT_NUM"*/, 0LL);
                          spendNum = v10->fields.spendNum;
                          v86 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &spendNum, v83, v84, v85);
                          v87 = System_String__Format(v82, v86, 0LL);
                          itemDetailLb = v10->fields.itemDetailLb;
                          v89 = (Il2CppObject *)v87;
                          v90 = LocalizationManager__Get((System_String_o *)StringLiteral_11344/*"RP_RECOVER_CMDSPELL_TXT"*/, 0LL);
                          recvRpNum = v10->fields.recvRpNum;
                          v94 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &recvRpNum, v91, v92, v93);
                          this = (RecoverItemComponent_o *)System_String__Format_63129848(v90, v89, v94, 0LL);
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
                                v43 = CommandSpell < v10->fields.spendNum;
                                v44 = v10->fields.recvRpNum + v10->fields.usrCurrentRp;
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
            goto LABEL_107;
          v56 = RecvItemData;
          this = (RecoverItemComponent_o *)v10->fields.itemIconInfo;
          if ( this )
          {
            ItemIconComponent__SetItemImage_39384288(
              (ItemIconComponent_o *)this,
              v56->fields.imageId,
              v56->fields.bgImageId,
              v56->fields.type,
              0,
              1,
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
                  UILabel__set_text((UILabel_o *)this, v56->fields.name, 0LL);
                  this = (RecoverItemComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
                  if ( this )
                  {
                    this = (RecoverItemComponent_o *)DataManager__GetMasterData_object_(
                                                       (DataManager_o *)this,
                                                       (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_UserItemMaster___);
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
                        v57 = entity ? entity->fields.num : 0;
                        value = v56->fields.value;
                        if ( needRp < 1 )
                        {
                          *p_spendNum = 1;
                        }
                        else
                        {
                          v59 = (float)(needRp - v10->fields.usrCurrentRp) / (float)value;
                          if ( !byte_4BD7265 )
                          {
                            sub_1C21E38(&System_Math_TypeInfo);
                            byte_4BD7265 = 1;
                          }
                          v60 = fmaxf(v59, 1.0);
                          if ( !System_Math_TypeInfo->_2.cctor_finished )
                            j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
                          v61 = vcvtps_s32_f32(v60);
                          if ( ceilf(v60) == INFINITY )
                            v61 = 0x80000000;
                          *p_spendNum = v61;
                          value *= v61;
                        }
                        v10->fields.recvRpNum = value;
                        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                        v62 = LocalizationManager__Get((System_String_o *)StringLiteral_15058/*"UNIT_INFO"*/, 0LL);
                        spendNum = v10->fields.spendNum;
                        v66 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &spendNum, v63, v64, v65);
                        v67 = System_String__Format(v62, v66, 0LL);
                        v68 = v10->fields.itemDetailLb;
                        v69 = (Il2CppObject *)v67;
                        v70 = LocalizationManager__Get((System_String_o *)StringLiteral_11346/*"RP_RECOVER_NUM_TXT"*/, 0LL);
                        recvRpNum = v10->fields.recvRpNum;
                        v74 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &recvRpNum, v71, v72, v73);
                        this = (RecoverItemComponent_o *)System_String__Format_63129848(v70, v69, v74, 0LL);
                        if ( v68 )
                        {
                          UILabel__set_text(v68, (System_String_o *)this, 0LL);
                          v75 = v10->fields.currentNumLb;
                          v98 = v57;
                          v79 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v98, v76, v77, v78);
                          this = (RecoverItemComponent_o *)System_String__Format(
                                                             (System_String_o *)StringLiteral_25415/*"{0:N0}"*/,
                                                             v79,
                                                             0LL);
                          if ( v75 )
                          {
                            UILabel__set_text(v75, (System_String_o *)this, 0LL);
                            v80 = v10->fields.spendNumLb;
                            this = (RecoverItemComponent_o *)System_Int32__ToString((int)v10 + 128, 0LL);
                            if ( v80 )
                            {
                              UILabel__set_text(v80, (System_String_o *)this, 0LL);
                              v81 = v10->fields.recvRpNum + v10->fields.usrCurrentRp;
                              v10->fields.isEnableSelect = v57 >= v10->fields.spendNum;
                              v10->fields.recvSum = v81;
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
  this = (RecoverItemComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !this )
    goto LABEL_108;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
  this = (RecoverItemComponent_o *)v10->fields.cmdSpellBg;
  if ( !this )
    goto LABEL_108;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
  this = (RecoverItemComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_108;
  this = (RecoverItemComponent_o *)DataManager__GetMasterData_object_(
                                     (DataManager_o *)this,
                                     (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_ItemMaster___);
  if ( !this )
    goto LABEL_108;
  this = (RecoverItemComponent_o *)ItemMaster__GetEntityByType((ItemMaster_o *)this, 2, 0LL);
  if ( !this )
    goto LABEL_108;
  v20 = this;
  this = (RecoverItemComponent_o *)v10->fields.itemIconInfo;
  if ( !this )
    goto LABEL_108;
  ItemIconComponent__SetItemImage_39384288(
    (ItemIconComponent_o *)this,
    (int32_t)v20->fields.cmdSpellBg,
    HIDWORD(v20->fields.cmdSpellBg),
    (int32_t)v20->fields.cmdSpellIcon,
    0,
    1,
    0LL);
  this = (RecoverItemComponent_o *)v10->fields.itemIconInfo;
  if ( !this )
    goto LABEL_108;
  this = (RecoverItemComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !this )
    goto LABEL_108;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
  this = (RecoverItemComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_108;
  this = (RecoverItemComponent_o *)DataManager__GetMasterData_object_(
                                     (DataManager_o *)this,
                                     (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_StoneShopMaster___);
  if ( !this )
    goto LABEL_108;
  this = (RecoverItemComponent_o *)DataMasterBase_object__object__int___GetEntity(
                                     (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                     v10->fields.targetId,
                                     (const MethodInfo_325BDC8 *)Method_DataMasterBase_StoneShopMaster__StoneShopEntity__int__GetEntity__);
  if ( !v10->fields.itemNameLb )
    goto LABEL_108;
  v21 = this;
  UILabel__set_text(v10->fields.itemNameLb, (System_String_o *)v20->fields.m_CancellationTokenSource, 0LL);
  if ( !*p_userEntity )
    goto LABEL_108;
  recvTarget = (*p_userEntity)->fields.recvTarget;
  if ( v21 )
    *p_spendNum = HIDWORD(v21->fields.cmdSpellBg);
  v26 = v10->fields.currentNumLb;
  spendNum = recvTarget;
  v27 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &spendNum, v22, v23, v24);
  this = (RecoverItemComponent_o *)System_String__Format((System_String_o *)StringLiteral_25415/*"{0:N0}"*/, v27, 0LL);
  if ( !v26 )
    goto LABEL_108;
  UILabel__set_text(v26, (System_String_o *)this, 0LL);
  v28 = v10->fields.spendNumLb;
  this = (RecoverItemComponent_o *)System_Int32__ToString((int)v10 + 128, 0LL);
  if ( !v28 )
    goto LABEL_108;
  UILabel__set_text(v28, (System_String_o *)this, 0LL);
  RecoverItemComponent__AttachStoneCountRefreshComponent(v10, v29);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v30 = LocalizationManager__Get((System_String_o *)StringLiteral_15058/*"UNIT_INFO"*/, 0LL);
  recvRpNum = v10->fields.spendNum;
  v34 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &recvRpNum, v31, v32, v33);
  v35 = System_String__Format(v30, v34, 0LL);
  v36 = v10->fields.itemDetailLb;
  v37 = (Il2CppObject *)v35;
  v38 = LocalizationManager__Get((System_String_o *)StringLiteral_11346/*"RP_RECOVER_NUM_TXT"*/, 0LL);
  v98 = v10->fields.recvRpNum;
  v42 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v98, v39, v40, v41);
  this = (RecoverItemComponent_o *)System_String__Format_63129848(v38, v37, v42, 0LL);
  if ( !v36 || (UILabel__set_text(v36, (System_String_o *)this, 0LL), (this = *p_userEntity) == 0LL) )
LABEL_108:
    sub_1C22094(this, data);
  v43 = UserGameEntity__get_PayableStoneNum((UserGameEntity_o *)this, 0LL) < v10->fields.spendNum;
  v44 = v10->fields.recvRpNum + v10->fields.usrCurrentRp;
LABEL_103:
  v97 = !v43;
  v10->fields.isEnableSelect = v97;
  v10->fields.recvSum = v44;
LABEL_107:
  RecoverItemComponent__setEnableSelectItem(v10, (const MethodInfo *)data);
}


void __fastcall RecoverItemComponent__setRequestInfo(RecoverItemComponent_o *this, const MethodInfo *method)
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

  if ( (byte_4BD71E6 & 1) == 0 )
  {
    sub_1C21E38(&System_Action_TypeInfo);
    sub_1C21E38(&Method_DataManager_GetMasterData_EventMaster___);
    sub_1C21E38(&LocalizationManager_TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C21E38(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C21E38(&TerminalSceneComponent_TypeInfo);
    sub_1C21E38(&Method_RecoverItemComponent___c__setRequestInfo_b__43_0__);
    sub_1C21E38(&RecoverItemComponent___c_TypeInfo);
    sub_1C21E38(&StringLiteral_11347/*"RP_UNRECOVERABLE_MESSAGE"*/);
    sub_1C21E38(&StringLiteral_1/*""*/);
    byte_4BD71E6 = 1;
  }
  if ( this->fields.recvTarget != 2 )
    goto LABEL_14;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_27;
  DataManager__GetMasterData_object_(
    Instance,
    (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_EventMaster___);
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  if ( !byte_4BD7183 )
  {
    sub_1C21E38(&TerminalSceneComponent_TypeInfo);
    byte_4BD7183 = 1;
  }
  Instance = (DataManager_o *)TerminalSceneComponent_TypeInfo;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    Instance = (DataManager_o *)TerminalSceneComponent_TypeInfo;
  }
  v5 = **(_QWORD **)&Instance[1].fields._DispLog;
  if ( !v5 || (Instance = *(DataManager_o **)(v5 + 248)) == 0LL )
LABEL_27:
    sub_1C22094(Instance, v4);
  if ( !ScrPlayerStatus__IsBPActive((ScrPlayerStatus_o *)Instance, 0LL) )
  {
    v7 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    Instance = (DataManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11347/*"RP_UNRECOVERABLE_MESSAGE"*/, 0LL);
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
      _9__43_0 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
      System_Action___ctor(_9__43_0, v12, Method_RecoverItemComponent___c__setRequestInfo_b__43_0__, 0LL);
      static_fields = RecoverItemComponent___c_TypeInfo->static_fields;
      static_fields->__9__43_0 = _9__43_0;
      Instance = (DataManager_o *)sub_1C21DDC(&static_fields->__9__43_0, _9__43_0);
    }
    if ( v7 )
    {
      CommonUI__OpenNotificationDialog((CommonUI_o *)v7, v11, v8, _9__43_0, -1, 0, 0, 0, 1, 0, 1, 0, 0LL, 0.0, 0LL);
      return;
    }
    goto LABEL_27;
  }
LABEL_14:
  callbackFunc = this->fields.callbackFunc;
  if ( callbackFunc )
  {
    this->fields.callbackFunc = 0LL;
    sub_1C21DDC(&this->fields.callbackFunc, 0LL);
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

  if ( (byte_4BD71E4 & 1) == 0 )
  {
    sub_1C21E38(&System_Action_TypeInfo);
    sub_1C21E38(&Method_RecoverItemComponent_setRequestInfo__);
    sub_1C21E38(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4BD71E4 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v7 = (CommonUI_o *)Instance;
  if ( isRes )
  {
    v8 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
    System_Action___ctor(v8, (Il2CppObject *)this, Method_RecoverItemComponent_setRequestInfo__, 0LL);
    if ( v7 )
    {
      CommonUI__CloseConfirmDialog_31128756(v7, v8, 0LL);
      return;
    }
LABEL_8:
    sub_1C22094(Instance, v6);
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
  sub_1C21DDC(&this->fields.method, object);
  v8 = *(unsigned __int8 *)(v6 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1C21EF8(v6) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1C220B0(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1C21F60(v10, 0LL);
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
  this->fields.m_target = (Il2CppObject *)sub_1A5B314;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_1A5B2B4;
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
  if ( (byte_4BD71EA & 1) == 0 )
  {
    sub_1C21E38(&int_TypeInfo);
    sub_1C21E38(&RecoverType_Type_TypeInfo);
    byte_4BD71EA = 1;
  }
  v18 = 0u;
  v17[0] = j_il2cpp_value_box_0(RecoverType_Type_TypeInfo, &v21, *(_QWORD *)&id, *(_QWORD *)&num, callback);
  v17[1] = j_il2cpp_value_box_0(int_TypeInfo, &v20, v10, v11, v12);
  *(_QWORD *)&v18 = j_il2cpp_value_box_0(int_TypeInfo, &v19, v13, v14, v15);
  return (System_IAsyncResult_o *)sub_1C21DEC(this, v17, callback, object);
}


void __fastcall RecoverItemComponent_CallbackFunc__EndInvoke(
        RecoverItemComponent_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C21DF0(result, 0LL, method);
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

  if ( (byte_4BD71EB & 1) == 0 )
  {
    sub_1C21E38(&RecoverItemComponent___c_TypeInfo);
    byte_4BD71EB = 1;
  }
  v1 = (Il2CppObject *)sub_1C22084(RecoverItemComponent___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  RecoverItemComponent___c_TypeInfo->static_fields->__9 = (struct RecoverItemComponent___c_o *)v1;
  sub_1C21DDC(RecoverItemComponent___c_TypeInfo->static_fields, v1);
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

  if ( (byte_4BD71EC & 1) == 0 )
  {
    sub_1C21E38(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C21E38(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    byte_4BD71EC = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance
    || (CommonUI__CloseRecoverItemListDialog((CommonUI_o *)Instance, 0LL),
        (Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__)) == 0LL) )
  {
    sub_1C22094(Instance, v3);
  }
  AvalonSceneManager__transitionSceneRefresh((AvalonSceneManager_o *)Instance, 34, 1, 0LL, 0, 0LL);
}