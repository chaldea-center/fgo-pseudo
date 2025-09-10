void RecoverItemComponent___cctor(const MethodInfo *method)
{
  if ( (byte_4C213F2 & 1) == 0 )
  {
    sub_1C2D490(&RecoverItemComponent_TypeInfo);
    byte_4C213F2 = 1;
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

  if ( (byte_4C213EC & 1) == 0 )
  {
    sub_1C2D490(&System_Action_int__TypeInfo);
    sub_1C2D490(&Method_RecoverItemComponent__AttachStoneCountRefreshComponent_b__38_0__);
    byte_4C213EC = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  v4 = (System_Action_int__o *)sub_1C2D6DC(System_Action_int__TypeInfo);
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

  if ( (byte_4C213EF & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    sub_1C2D490(&Method_RecoverItemComponent_setRequestInfo__);
    sub_1C2D490(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4C213EF = 1;
  }
  if ( isRes )
  {
    this->fields.spendNum = useNum;
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v8 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
    System_Action___ctor(v8, (Il2CppObject *)this, Method_RecoverItemComponent_setRequestInfo__, 0);
    if ( !Instance )
LABEL_9:
      sub_1C2D6EC(v9, v10);
  }
  else
  {
    v9 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
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
  __int64 v30; // x2
  __int64 v31; // x3
  System_Object_array *v32; // x26
  __int64 v33; // x2
  __int64 v34; // x3
  __int64 v35; // x4
  Il2CppObject *v36; // x24
  __int64 v37; // x2
  __int64 v38; // x3
  __int64 v39; // x4
  Il2CppObject *v40; // x24
  __int64 v41; // x2
  __int64 v42; // x3
  __int64 v43; // x4
  Il2CppObject *v44; // x24
  __int64 v45; // x2
  __int64 v46; // x3
  __int64 v47; // x4
  Il2CppObject *v48; // x24
  __int64 v49; // x2
  __int64 v50; // x3
  __int64 v51; // x4
  Il2CppObject *v52; // x24
  Il2CppObject **v53; // x0
  System_String_o *v54; // x25
  System_Object_array *v55; // x26
  __int64 v56; // x2
  __int64 v57; // x3
  __int64 v58; // x4
  __int64 v59; // x24
  __int64 v60; // x2
  __int64 v61; // x3
  __int64 v62; // x4
  __int64 v63; // x24
  __int64 v64; // x2
  __int64 v65; // x3
  __int64 v66; // x4
  __int64 v67; // x24
  __int64 v68; // x2
  __int64 v69; // x3
  __int64 v70; // x4
  __int64 v71; // x24
  __int64 v72; // x2
  __int64 v73; // x3
  __int64 v74; // x4
  __int64 v75; // x24
  System_String_o *v76; // x24
  Il2CppObject *v77; // x23
  CommonConfirmDialog_ClickDelegate_o *v78; // x25
  System_String_o **v79; // x8
  System_String_o *v80; // x25
  __int64 v81; // x2
  __int64 v82; // x3
  __int64 v83; // x4
  Il2CppObject *v84; // x24
  __int64 v85; // x2
  __int64 v86; // x3
  __int64 v87; // x4
  Il2CppObject *v88; // x24
  __int64 v89; // x2
  __int64 v90; // x3
  __int64 v91; // x4
  Il2CppObject *v92; // x24
  __int64 v93; // x2
  __int64 v94; // x3
  __int64 v95; // x4
  Il2CppObject *v96; // x24
  __int64 v97; // x2
  __int64 v98; // x3
  __int64 v99; // x4
  Il2CppObject *v100; // x24
  __int64 v101; // x2
  __int64 v102; // x3
  __int64 v103; // x4
  Il2CppObject *v104; // x24
  System_String_o *v105; // x23
  Il2CppObject *v106; // x25
  CommonConfirmDialog_ClickDelegate_o *v107; // x26
  System_String_o *v108; // x0
  System_String_o *v109; // x20
  Il2CppObject *v110; // x21
  System_Action_o *v111; // x22
  System_String_o *v112; // x0
  System_String_o *v113; // x20
  Il2CppObject *Instance; // x21
  System_Action_o *v115; // x22
  Il2CppObject *v116; // x0
  int32_t targetId; // w20
  int32_t needAp; // w21
  CommonUI_o *v119; // x22
  System_Action_bool__int__o *v120; // x23
  __int64 v121; // x0
  int32_t v122; // [xsp+48h] [xbp-78h] BYREF
  int32_t v123; // [xsp+4Ch] [xbp-74h] BYREF
  int32_t recvSum; // [xsp+50h] [xbp-70h] BYREF
  int32_t usrMaxRp; // [xsp+54h] [xbp-6Ch] BYREF
  int32_t usrCurrentRp; // [xsp+58h] [xbp-68h] BYREF
  int32_t spendNum; // [xsp+5Ch] [xbp-64h] BYREF

  if ( (byte_4C213ED & 1) == 0 )
  {
    sub_1C2D490(&System_Action_bool__int__TypeInfo);
    sub_1C2D490(&System_Action_TypeInfo);
    sub_1C2D490(&BalanceConfig_TypeInfo);
    sub_1C2D490(&CommonConfirmDialog_ClickDelegate_TypeInfo);
    sub_1C2D490(&int_TypeInfo);
    sub_1C2D490(&LocalizationManager_TypeInfo);
    sub_1C2D490(&object___TypeInfo);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    sub_1C2D490(&Method_RecoverItemComponent_CloseApRecovDlg__);
    sub_1C2D490(&Method_RecoverItemComponent_OnClickItem__);
    sub_1C2D490(&Method_RecoverItemComponent_closeNotificationDlg__);
    sub_1C2D490(&Method_RecoverItemComponent_spendItemDlg__);
    sub_1C2D490(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C2D490(&StringLiteral_11160/*"RP_RECOVER_CONFIRM_MSG"*/);
    sub_1C2D490(&StringLiteral_3521/*"CMDSPELL_CURRENT_NUM"*/);
    sub_1C2D490(&StringLiteral_3673/*"COMMAND_SPELL_TXT"*/);
    sub_1C2D490(&StringLiteral_2026/*"AP_RECOVER_CONFIRM_MSG"*/);
    sub_1C2D490(&StringLiteral_11158/*"RP_FULL_MSG"*/);
    sub_1C2D490(&StringLiteral_14809/*"UNIT_INFO"*/);
    sub_1C2D490(&StringLiteral_2022/*"AP_ADD_CONFIRM_MSG"*/);
    sub_1C2D490(&StringLiteral_3679/*"COMMON_CONFIRM_DECIDE"*/);
    sub_1C2D490(&StringLiteral_3677/*"COMMON_CONFIRM_CANCEL"*/);
    sub_1C2D490(&StringLiteral_2023/*"AP_ADD_CONFIRM_MSG_OVER"*/);
    sub_1C2D490(&StringLiteral_2027/*"AP_RECOVER_CONFIRM_MSG_OVER"*/);
    sub_1C2D490(&StringLiteral_2024/*"AP_FULL_MSG"*/);
    sub_1C2D490(&StringLiteral_1/*""*/);
    sub_1C2D490(&StringLiteral_2032/*"AP_RECOVER_STONEPAY_WARNING_MSG"*/);
    byte_4C213ED = 1;
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
  v8 = LocalizationManager__Get((System_String_o *)StringLiteral_14809/*"UNIT_INFO"*/, 0);
  spendNum = this->fields.spendNum;
  v12 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &spendNum, v9, v10, v11);
  userEntity = (__int64)System_String__Format(v8, v12, 0);
  v13 = (System_String_o *)userEntity;
  if ( this->fields.currentType == 1 )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    mText = (Il2CppObject *)LocalizationManager__Get((System_String_o *)StringLiteral_3673/*"COMMAND_SPELL_TXT"*/, 0);
    if ( this->fields.currentType == 1 )
    {
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v15 = LocalizationManager__Get((System_String_o *)StringLiteral_3521/*"CMDSPELL_CURRENT_NUM"*/, 0);
      spendNum = this->fields.spendNum;
      v19 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &spendNum, v16, v17, v18);
      v13 = System_String__Format(v15, v19, 0);
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
  v21 = LocalizationManager__Get((System_String_o *)StringLiteral_3679/*"COMMON_CONFIRM_DECIDE"*/, 0);
  v22 = LocalizationManager__Get((System_String_o *)StringLiteral_3677/*"COMMON_CONFIRM_CANCEL"*/, 0);
  v23 = Method_RecoverItemComponent_OnClickItem__;
  if ( (*((_BYTE *)Method_RecoverItemComponent_OnClickItem__ + 83) & 2) != 0 )
    v23 = (_QWORD *)sub_1C2D4A8(Method_RecoverItemComponent_OnClickItem__);
  v24 = (System_Reflection_MethodBase_o *)sub_1C2D474(v23, v23[4]);
  OverwriteAssetSoundName__PlaySystemSe(v24, 0, 0, 0);
  if ( !this->fields.isAp )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v54 = LocalizationManager__Get((System_String_o *)StringLiteral_11160/*"RP_RECOVER_CONFIRM_MSG"*/, 0);
    userEntity = sub_1C2D538(object___TypeInfo, 7);
    if ( !userEntity )
      goto LABEL_140;
    v55 = (System_Object_array *)userEntity;
    if ( mText )
    {
      userEntity = sub_1C2D5CC(mText, *(_QWORD *)(*(_QWORD *)userEntity + 64LL));
      if ( !userEntity )
        goto LABEL_141;
    }
    if ( LODWORD(v55->max_length) )
    {
      v55->m_Items[0] = mText;
      userEntity = sub_1C2D434(v55->m_Items);
      if ( v13 )
      {
        userEntity = sub_1C2D5CC(v13, v55->obj.klass->_1.element_class);
        if ( !userEntity )
          goto LABEL_141;
      }
      if ( LODWORD(v55->max_length) > 1 )
      {
        v55->m_Items[1] = (Il2CppObject *)v13;
        sub_1C2D434(&v55->m_Items[1]);
        spendNum = this->fields.recvRpNum;
        userEntity = j_il2cpp_value_box_0(int_TypeInfo, &spendNum, v56, v57, v58);
        v59 = userEntity;
        if ( userEntity )
        {
          userEntity = sub_1C2D5CC(userEntity, v55->obj.klass->_1.element_class);
          if ( !userEntity )
            goto LABEL_141;
        }
        if ( LODWORD(v55->max_length) > 2 )
        {
          v55->m_Items[2] = (Il2CppObject *)v59;
          sub_1C2D434(&v55->m_Items[2]);
          usrCurrentRp = this->fields.usrCurrentRp;
          userEntity = j_il2cpp_value_box_0(int_TypeInfo, &usrCurrentRp, v60, v61, v62);
          v63 = userEntity;
          if ( userEntity )
          {
            userEntity = sub_1C2D5CC(userEntity, v55->obj.klass->_1.element_class);
            if ( !userEntity )
              goto LABEL_141;
          }
          if ( LODWORD(v55->max_length) > 3 )
          {
            v55->m_Items[3] = (Il2CppObject *)v63;
            sub_1C2D434(&v55->m_Items[3]);
            usrMaxRp = this->fields.usrMaxRp;
            userEntity = j_il2cpp_value_box_0(int_TypeInfo, &usrMaxRp, v64, v65, v66);
            v67 = userEntity;
            if ( userEntity )
            {
              userEntity = sub_1C2D5CC(userEntity, v55->obj.klass->_1.element_class);
              if ( !userEntity )
                goto LABEL_141;
            }
            if ( LODWORD(v55->max_length) > 4 )
            {
              v55->m_Items[4] = (Il2CppObject *)v67;
              sub_1C2D434(&v55->m_Items[4]);
              recvSum = this->fields.recvSum;
              userEntity = j_il2cpp_value_box_0(int_TypeInfo, &recvSum, v68, v69, v70);
              v71 = userEntity;
              if ( userEntity )
              {
                userEntity = sub_1C2D5CC(userEntity, v55->obj.klass->_1.element_class);
                if ( !userEntity )
                  goto LABEL_141;
              }
              if ( LODWORD(v55->max_length) > 5 )
              {
                v55->m_Items[5] = (Il2CppObject *)v71;
                sub_1C2D434(&v55->m_Items[5]);
                v123 = this->fields.usrMaxRp;
                userEntity = j_il2cpp_value_box_0(int_TypeInfo, &v123, v72, v73, v74);
                v75 = userEntity;
                if ( userEntity )
                {
                  userEntity = sub_1C2D5CC(userEntity, v55->obj.klass->_1.element_class);
                  if ( !userEntity )
                    goto LABEL_141;
                }
                if ( LODWORD(v55->max_length) > 6 )
                {
                  v55->m_Items[6] = (Il2CppObject *)v75;
                  sub_1C2D434(&v55->m_Items[6]);
                  userEntity = (__int64)System_String__Format_63499292(v54, v55, 0);
                  if ( !this->fields.userEntity )
                    goto LABEL_140;
                  v76 = (System_String_o *)userEntity;
                  if ( UserGameEntity__getRp(this->fields.userEntity, 0) < this->fields.usrMaxRp )
                    goto LABEL_80;
                  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                  v112 = LocalizationManager__Get((System_String_o *)StringLiteral_11158/*"RP_FULL_MSG"*/, 0);
                  v113 = System_String__Format(v112, mText, 0);
                  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
                  v115 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
                  System_Action___ctor(
                    v115,
                    (Il2CppObject *)this,
                    Method_RecoverItemComponent_closeNotificationDlg__,
                    0);
                  if ( !Instance )
                    goto LABEL_140;
                  CommonUI__OpenNotificationDialog(
                    (CommonUI_o *)Instance,
                    (System_String_o *)StringLiteral_1/*""*/,
                    v113,
                    v115,
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
    sub_1C2D6F4(userEntity, v5, v30, v31);
  }
  v25 = this->fields.recvSum;
  usrMaxAp = this->fields.usrMaxAp;
  if ( !this->fields.isAddAp )
  {
    if ( v25 <= usrMaxAp )
      v79 = (System_String_o **)&StringLiteral_2026/*"AP_RECOVER_CONFIRM_MSG"*/;
    else
      v79 = (System_String_o **)&StringLiteral_2027/*"AP_RECOVER_CONFIRM_MSG_OVER"*/;
    v80 = *v79;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v29 = LocalizationManager__Get(v80, 0);
    userEntity = sub_1C2D538(object___TypeInfo, 8);
    if ( !userEntity )
      goto LABEL_140;
    v32 = (System_Object_array *)userEntity;
    if ( mText )
    {
      userEntity = sub_1C2D5CC(mText, *(_QWORD *)(*(_QWORD *)userEntity + 64LL));
      if ( !userEntity )
        goto LABEL_141;
    }
    if ( LODWORD(v32->max_length) )
    {
      v32->m_Items[0] = mText;
      userEntity = sub_1C2D434(v32->m_Items);
      if ( v13 )
      {
        userEntity = sub_1C2D5CC(v13, v32->obj.klass->_1.element_class);
        if ( !userEntity )
          goto LABEL_141;
      }
      if ( LODWORD(v32->max_length) > 1 )
      {
        v32->m_Items[1] = (Il2CppObject *)v13;
        sub_1C2D434(&v32->m_Items[1]);
        spendNum = this->fields.apRcvRate;
        userEntity = j_il2cpp_value_box_0(int_TypeInfo, &spendNum, v81, v82, v83);
        v84 = (Il2CppObject *)userEntity;
        if ( userEntity )
        {
          userEntity = sub_1C2D5CC(userEntity, v32->obj.klass->_1.element_class);
          if ( !userEntity )
            goto LABEL_141;
        }
        if ( LODWORD(v32->max_length) > 2 )
        {
          v32->m_Items[2] = v84;
          sub_1C2D434(&v32->m_Items[2]);
          usrCurrentRp = this->fields.recvApNum;
          userEntity = j_il2cpp_value_box_0(int_TypeInfo, &usrCurrentRp, v85, v86, v87);
          v88 = (Il2CppObject *)userEntity;
          if ( userEntity )
          {
            userEntity = sub_1C2D5CC(userEntity, v32->obj.klass->_1.element_class);
            if ( !userEntity )
              goto LABEL_141;
          }
          if ( LODWORD(v32->max_length) > 3 )
          {
            v32->m_Items[3] = v88;
            sub_1C2D434(&v32->m_Items[3]);
            usrMaxRp = this->fields.usrCurrentAp;
            userEntity = j_il2cpp_value_box_0(int_TypeInfo, &usrMaxRp, v89, v90, v91);
            v92 = (Il2CppObject *)userEntity;
            if ( userEntity )
            {
              userEntity = sub_1C2D5CC(userEntity, v32->obj.klass->_1.element_class);
              if ( !userEntity )
                goto LABEL_141;
            }
            if ( LODWORD(v32->max_length) > 4 )
            {
              v32->m_Items[4] = v92;
              sub_1C2D434(&v32->m_Items[4]);
              recvSum = this->fields.usrMaxAp;
              userEntity = j_il2cpp_value_box_0(int_TypeInfo, &recvSum, v93, v94, v95);
              v96 = (Il2CppObject *)userEntity;
              if ( userEntity )
              {
                userEntity = sub_1C2D5CC(userEntity, v32->obj.klass->_1.element_class);
                if ( !userEntity )
                  goto LABEL_141;
              }
              if ( LODWORD(v32->max_length) > 5 )
              {
                v32->m_Items[5] = v96;
                sub_1C2D434(&v32->m_Items[5]);
                v123 = this->fields.recvSum;
                userEntity = j_il2cpp_value_box_0(int_TypeInfo, &v123, v97, v98, v99);
                v100 = (Il2CppObject *)userEntity;
                if ( userEntity )
                {
                  userEntity = sub_1C2D5CC(userEntity, v32->obj.klass->_1.element_class);
                  if ( !userEntity )
                    goto LABEL_141;
                }
                if ( LODWORD(v32->max_length) > 6 )
                {
                  v32->m_Items[6] = v100;
                  sub_1C2D434(&v32->m_Items[6]);
                  v122 = this->fields.usrMaxAp;
                  userEntity = j_il2cpp_value_box_0(int_TypeInfo, &v122, v101, v102, v103);
                  v104 = (Il2CppObject *)userEntity;
                  if ( userEntity )
                  {
                    userEntity = sub_1C2D5CC(userEntity, v32->obj.klass->_1.element_class);
                    if ( !userEntity )
                      goto LABEL_141;
                  }
                  if ( LODWORD(v32->max_length) > 7 )
                  {
                    v32->m_Items[7] = v104;
                    v53 = &v32->m_Items[7];
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
    v27 = (System_String_o **)&StringLiteral_2022/*"AP_ADD_CONFIRM_MSG"*/;
  else
    v27 = (System_String_o **)&StringLiteral_2023/*"AP_ADD_CONFIRM_MSG_OVER"*/;
  v28 = *v27;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v29 = LocalizationManager__Get(v28, 0);
  userEntity = sub_1C2D538(object___TypeInfo, 7);
  if ( !userEntity )
    goto LABEL_140;
  v32 = (System_Object_array *)userEntity;
  if ( mText )
  {
    userEntity = sub_1C2D5CC(mText, *(_QWORD *)(*(_QWORD *)userEntity + 64LL));
    if ( !userEntity )
      goto LABEL_141;
  }
  if ( !LODWORD(v32->max_length) )
    goto LABEL_139;
  v32->m_Items[0] = mText;
  userEntity = sub_1C2D434(v32->m_Items);
  if ( v13 )
  {
    userEntity = sub_1C2D5CC(v13, v32->obj.klass->_1.element_class);
    if ( !userEntity )
      goto LABEL_141;
  }
  if ( LODWORD(v32->max_length) <= 1 )
    goto LABEL_139;
  v32->m_Items[1] = (Il2CppObject *)v13;
  sub_1C2D434(&v32->m_Items[1]);
  spendNum = this->fields.recvApNum;
  userEntity = j_il2cpp_value_box_0(int_TypeInfo, &spendNum, v33, v34, v35);
  v36 = (Il2CppObject *)userEntity;
  if ( userEntity )
  {
    userEntity = sub_1C2D5CC(userEntity, v32->obj.klass->_1.element_class);
    if ( !userEntity )
      goto LABEL_141;
  }
  if ( LODWORD(v32->max_length) <= 2 )
    goto LABEL_139;
  v32->m_Items[2] = v36;
  sub_1C2D434(&v32->m_Items[2]);
  usrCurrentRp = this->fields.usrCurrentAp;
  userEntity = j_il2cpp_value_box_0(int_TypeInfo, &usrCurrentRp, v37, v38, v39);
  v40 = (Il2CppObject *)userEntity;
  if ( userEntity )
  {
    userEntity = sub_1C2D5CC(userEntity, v32->obj.klass->_1.element_class);
    if ( !userEntity )
      goto LABEL_141;
  }
  if ( LODWORD(v32->max_length) <= 3 )
    goto LABEL_139;
  v32->m_Items[3] = v40;
  sub_1C2D434(&v32->m_Items[3]);
  usrMaxRp = this->fields.usrMaxAp;
  userEntity = j_il2cpp_value_box_0(int_TypeInfo, &usrMaxRp, v41, v42, v43);
  v44 = (Il2CppObject *)userEntity;
  if ( userEntity )
  {
    userEntity = sub_1C2D5CC(userEntity, v32->obj.klass->_1.element_class);
    if ( !userEntity )
      goto LABEL_141;
  }
  if ( LODWORD(v32->max_length) <= 4 )
    goto LABEL_139;
  v32->m_Items[4] = v44;
  sub_1C2D434(&v32->m_Items[4]);
  recvSum = this->fields.recvSum;
  userEntity = j_il2cpp_value_box_0(int_TypeInfo, &recvSum, v45, v46, v47);
  v48 = (Il2CppObject *)userEntity;
  if ( userEntity )
  {
    userEntity = sub_1C2D5CC(userEntity, v32->obj.klass->_1.element_class);
    if ( !userEntity )
      goto LABEL_141;
  }
  if ( LODWORD(v32->max_length) <= 5 )
    goto LABEL_139;
  v32->m_Items[5] = v48;
  sub_1C2D434(&v32->m_Items[5]);
  v123 = this->fields.usrMaxAp;
  userEntity = j_il2cpp_value_box_0(int_TypeInfo, &v123, v49, v50, v51);
  v52 = (Il2CppObject *)userEntity;
  if ( userEntity )
  {
    userEntity = sub_1C2D5CC(userEntity, v32->obj.klass->_1.element_class);
    if ( !userEntity )
    {
LABEL_141:
      v121 = sub_1C2D710();
      sub_1C2D5B8(v121, 0);
    }
  }
  if ( LODWORD(v32->max_length) <= 6 )
    goto LABEL_139;
  v32->m_Items[6] = v52;
  v53 = &v32->m_Items[6];
LABEL_115:
  sub_1C2D434(v53);
  v76 = System_String__Format_63499292(v29, v32, 0);
  userEntity = (__int64)this->fields.userEntity;
  if ( !userEntity )
    goto LABEL_140;
  if ( UserGameEntity__getAct((UserGameEntity_o *)userEntity, 0) < this->fields.usrMaxAp )
  {
    if ( this->fields.currentType == 2 )
    {
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v105 = LocalizationManager__Get((System_String_o *)StringLiteral_2032/*"AP_RECOVER_STONEPAY_WARNING_MSG"*/, 0);
      v106 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v107 = (CommonConfirmDialog_ClickDelegate_o *)sub_1C2D6DC(CommonConfirmDialog_ClickDelegate_TypeInfo);
      CommonConfirmDialog_ClickDelegate___ctor(
        v107,
        (Il2CppObject *)this,
        Method_RecoverItemComponent_spendItemDlg__,
        0);
      userEntity = (__int64)BalanceConfig_TypeInfo;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
        userEntity = j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      if ( v106 )
      {
        CommonUI__OpenConfirmDecideDlgAddMsgFrame(
          (CommonUI_o *)v106,
          v7,
          v76,
          v105,
          v21,
          v22,
          v107,
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
      sub_1C2D6EC(userEntity, v5);
    }
    if ( this->fields.isAddAp || this->fields.apRcvRate != 100 || this->fields.spendNum >= 2 )
    {
      v116 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      targetId = this->fields.targetId;
      needAp = this->fields.needAp;
      v119 = (CommonUI_o *)v116;
      v120 = (System_Action_bool__int__o *)sub_1C2D6DC(System_Action_bool__int__TypeInfo);
      System_Action_bool__int____ctor(v120, (Il2CppObject *)this, Method_RecoverItemComponent_CloseApRecovDlg__, 0);
      if ( !v119 )
        goto LABEL_140;
      CommonUI__OpenApRecoverConfirmDlg(v119, targetId, needAp, v120, 0);
      return;
    }
LABEL_80:
    v77 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v78 = (CommonConfirmDialog_ClickDelegate_o *)sub_1C2D6DC(CommonConfirmDialog_ClickDelegate_TypeInfo);
    CommonConfirmDialog_ClickDelegate___ctor(v78, (Il2CppObject *)this, Method_RecoverItemComponent_spendItemDlg__, 0);
    userEntity = (__int64)BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      userEntity = j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    if ( v77 )
    {
      CommonUI__OpenConfirmDecideDlg(
        (CommonUI_o *)v77,
        v7,
        v76,
        v21,
        v22,
        v78,
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
  v108 = LocalizationManager__Get((System_String_o *)StringLiteral_2024/*"AP_FULL_MSG"*/, 0);
  v109 = System_String__Format(v108, mText, 0);
  v110 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v111 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
  System_Action___ctor(v111, (Il2CppObject *)this, Method_RecoverItemComponent_closeNotificationDlg__, 0);
  if ( !v110 )
    goto LABEL_140;
  CommonUI__OpenNotificationDialog(
    (CommonUI_o *)v110,
    (System_String_o *)StringLiteral_1/*""*/,
    v109,
    v111,
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
  __int64 v3; // x3
  __int64 v4; // x4
  UILabel_o *currentNumLb; // x19
  Il2CppObject *v8; // x0
  System_String_o *v9; // x0
  __int64 v10; // x1
  int32_t v11; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4C213F3 & 1) == 0 )
  {
    sub_1C2D490(&int_TypeInfo);
    sub_1C2D490(&StringLiteral_25069/*"{0:N0}"*/);
    byte_4C213F3 = 1;
  }
  currentNumLb = this->fields.currentNumLb;
  v11 = stoneCount;
  v8 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v11, method, v3, v4);
  v9 = System_String__Format((System_String_o *)StringLiteral_25069/*"{0:N0}"*/, v8, 0);
  if ( !currentNumLb )
    sub_1C2D6EC(v9, v10);
  UILabel__set_text(currentNumLb, v9, 0);
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

  if ( (byte_4C213E8 & 1) == 0 )
  {
    sub_1C2D490(&RecoverItemComponent_CallbackFunc_TypeInfo);
    byte_4C213E8 = 1;
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
    v9 = sub_1C676E8(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (RecoverItemComponent_o *)sub_1C2D9AC(v8);
  RecoverItemComponent__remove_callbackFunc(v11, v12, v13);
}


void RecoverItemComponent__closeNotificationDlg(RecoverItemComponent_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v3; // x1

  if ( (byte_4C213F1 & 1) == 0 )
  {
    sub_1C2D490(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4C213F1 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1C2D6EC(0, v3);
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

  if ( (byte_4C213E9 & 1) == 0 )
  {
    sub_1C2D490(&RecoverItemComponent_CallbackFunc_TypeInfo);
    byte_4C213E9 = 1;
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
    v9 = sub_1C676E8(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (RecoverItemComponent_o *)sub_1C2D9AC(v8);
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
  RecoverItemComponent_o **p_userEntity; // x23
  struct UserGameEntity_o *userEntity; // x8
  int32_t actMax; // w8
  unsigned int *p_spendNum; // x20
  UILabel_o *currentInfoLb; // x24
  UILabel_o *spendInfoLb; // x24
  int32_t currentType; // w8
  RecoverItemComponent_o *v19; // x21
  RecoverItemComponent_o *v20; // x22
  __int64 v21; // x2
  __int64 v22; // x3
  __int64 v23; // x4
  int32_t v24; // w8
  UILabel_o *v25; // x21
  Il2CppObject *v26; // x0
  UILabel_o *v27; // x21
  const MethodInfo *v28; // x1
  System_String_o *v29; // x20
  __int64 v30; // x2
  __int64 v31; // x3
  __int64 v32; // x4
  Il2CppObject *v33; // x0
  System_String_o *v34; // x0
  UILabel_o *v35; // x20
  Il2CppObject *v36; // x21
  System_String_o *v37; // x22
  __int64 v38; // x2
  __int64 v39; // x3
  __int64 v40; // x4
  Il2CppObject *v41; // x24
  __int64 v42; // x2
  __int64 v43; // x3
  __int64 v44; // x4
  Il2CppObject *v45; // x0
  bool v46; // cc
  int v47; // w8
  UILabel_o *v48; // x22
  UILabel_o *v49; // x22
  Il2CppObject *v50; // x0
  CommandSpellEntity_o *v51; // x22
  __int64 v52; // x2
  __int64 v53; // x3
  int32_t type; // w8
  struct ItemIconComponent_o *itemIconInfo; // x27
  float v56; // s0
  int v57; // w8
  float usrMaxAp; // s8
  float v59; // s9
  float v60; // s8
  unsigned int v61; // w9
  unsigned int v62; // w8
  System_String_o *v63; // x23
  __int64 v64; // x2
  __int64 v65; // x3
  __int64 v66; // x4
  Il2CppObject *v67; // x0
  System_String_o *v68; // x0
  UILabel_o *itemDetailLb; // x23
  Il2CppObject *v70; // x24
  System_String_o *v71; // x25
  __int64 v72; // x2
  __int64 v73; // x3
  __int64 v74; // x4
  Il2CppObject *v75; // x26
  __int64 v76; // x2
  __int64 v77; // x3
  __int64 v78; // x4
  Il2CppObject *v79; // x0
  int backSprite; // w22
  float v81; // s8
  float v82; // s8
  unsigned int v83; // w9
  unsigned int v84; // w8
  ItemEntity_o *RecvItemData; // x0
  ItemEntity_o *v86; // x24
  __int64 v87; // x2
  __int64 v88; // x3
  __int64 v89; // x4
  int32_t num; // w28
  int32_t v91; // w8
  BalanceConfig_c *v92; // x0
  float v93; // s8
  int v94; // w8
  int v95; // s0
  float v96; // s9
  float v97; // s8
  int v98; // w8
  float v99; // s8
  float v100; // s8
  int32_t v101; // w11
  int32_t v102; // w12
  unsigned int v103; // w8
  System_String_o *v104; // x23
  __int64 v105; // x2
  __int64 v106; // x3
  __int64 v107; // x4
  Il2CppObject *v108; // x0
  System_String_o *v109; // x0
  UILabel_o *v110; // x23
  Il2CppObject *v111; // x25
  System_String_o *v112; // x26
  __int64 v113; // x2
  __int64 v114; // x3
  __int64 v115; // x4
  Il2CppObject *v116; // x27
  __int64 v117; // x2
  __int64 v118; // x3
  __int64 v119; // x4
  Il2CppObject *v120; // x0
  int value; // w23
  float v122; // s8
  float v123; // s8
  unsigned int v124; // w8
  System_String_o *v125; // x21
  __int64 v126; // x2
  __int64 v127; // x3
  __int64 v128; // x4
  Il2CppObject *v129; // x0
  System_String_o *v130; // x0
  UILabel_o *v131; // x21
  Il2CppObject *v132; // x23
  System_String_o *v133; // x24
  __int64 v134; // x2
  __int64 v135; // x3
  __int64 v136; // x4
  Il2CppObject *v137; // x0
  UILabel_o *v138; // x21
  Il2CppObject *v139; // x0
  UILabel_o *v140; // x21
  int v141; // w8
  System_String_o *v142; // x21
  __int64 v143; // x2
  __int64 v144; // x3
  __int64 v145; // x4
  Il2CppObject *v146; // x0
  System_String_o *v147; // x0
  UILabel_o *v148; // x21
  Il2CppObject *v149; // x22
  System_String_o *v150; // x23
  __int64 v151; // x2
  __int64 v152; // x3
  __int64 v153; // x4
  Il2CppObject *v154; // x0
  UILabel_o *currentNumLb; // x21
  UILabel_o *spendNumLb; // x21
  char v157; // w9
  int32_t v158; // [xsp+4h] [xbp-8Ch] BYREF
  int32_t recvApNum; // [xsp+8h] [xbp-88h] BYREF
  int32_t apRcvRate; // [xsp+Ch] [xbp-84h] BYREF
  int32_t spendNum; // [xsp+10h] [xbp-80h] BYREF
  int32_t CommandSpell; // [xsp+14h] [xbp-7Ch] BYREF
  UserItemEntity_o *entity; // [xsp+18h] [xbp-78h] BYREF

  v10 = this;
  if ( (byte_4C213EA & 1) == 0 )
  {
    sub_1C2D490(&BalanceConfig_TypeInfo);
    sub_1C2D490(&Method_DataManager_GetMasterData_CommandSpellMaster___);
    sub_1C2D490(&Method_DataManager_GetMasterData_ItemMaster___);
    sub_1C2D490(&Method_DataManager_GetMasterData_StoneShopMaster___);
    sub_1C2D490(&Method_DataManager_GetMasterData_UserItemMaster___);
    sub_1C2D490(&Method_DataMasterBase_CommandSpellMaster__CommandSpellEntity__int__GetEntity__);
    sub_1C2D490(&Method_DataMasterBase_StoneShopMaster__StoneShopEntity__int__GetEntity__);
    sub_1C2D490(&int_TypeInfo);
    sub_1C2D490(&LocalizationManager_TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C2D490(&StringLiteral_3521/*"CMDSPELL_CURRENT_NUM"*/);
    sub_1C2D490(&StringLiteral_1919/*"ADD_RECOVER_CMDSPELL_TXT"*/);
    sub_1C2D490(&StringLiteral_3523/*"CMDSPELL_SPEND_NUM_TXT"*/);
    sub_1C2D490(&StringLiteral_25069/*"{0:N0}"*/);
    sub_1C2D490(&StringLiteral_861/*"-"*/);
    sub_1C2D490(&StringLiteral_14809/*"UNIT_INFO"*/);
    sub_1C2D490(&StringLiteral_12270/*"SPEND_NUM_TXT"*/);
    sub_1C2D490(&StringLiteral_3929/*"CURRENT_NUM_TXT"*/);
    sub_1C2D490(&StringLiteral_1920/*"ADD_RECOVER_NUM_TXT"*/);
    sub_1C2D490(&StringLiteral_2029/*"AP_RECOVER_NUM_TXT"*/);
    this = (RecoverItemComponent_o *)sub_1C2D490(&StringLiteral_3522/*"CMDSPELL_CURRENT_NUM_TXT"*/);
    byte_4C213EA = 1;
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
  sub_1C2D434(&v10->fields.dialog);
  v10->fields.callbackFunc = callback;
  v10->fields.needAp = needAp;
  *(_WORD *)&v10->fields.isAp = 1;
  sub_1C2D434(&v10->fields.callbackFunc);
  this = (RecoverItemComponent_o *)v10->fields.maskImg;
  if ( !this )
    goto LABEL_152;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
  v10->fields.userEntity = UserGameMaster__getSelfUserGame(0);
  p_userEntity = (RecoverItemComponent_o **)&v10->fields.userEntity;
  sub_1C2D434(&v10->fields.userEntity);
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
  UILabel__set_text((UILabel_o *)this, (System_String_o *)StringLiteral_861/*"-"*/, 0);
  this = (RecoverItemComponent_o *)v10->fields.currentNumLb;
  if ( !this )
    goto LABEL_152;
  UILabel__set_text((UILabel_o *)this, (System_String_o *)StringLiteral_861/*"-"*/, 0);
  this = (RecoverItemComponent_o *)v10->fields.spendNumLb;
  if ( !this )
    goto LABEL_152;
  UILabel__set_text((UILabel_o *)this, (System_String_o *)StringLiteral_861/*"-"*/, 0);
  this = (RecoverItemComponent_o *)v10->fields.itemDetailLb;
  if ( !this )
    goto LABEL_152;
  UILabel__set_text((UILabel_o *)this, (System_String_o *)StringLiteral_861/*"-"*/, 0);
  currentInfoLb = v10->fields.currentInfoLb;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  this = (RecoverItemComponent_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3929/*"CURRENT_NUM_TXT"*/, 0);
  if ( !currentInfoLb )
    goto LABEL_152;
  UILabel__set_text(currentInfoLb, (System_String_o *)this, 0);
  spendInfoLb = v10->fields.spendInfoLb;
  this = (RecoverItemComponent_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12270/*"SPEND_NUM_TXT"*/, 0);
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
    v48 = v10->fields.currentInfoLb;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    this = (RecoverItemComponent_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3522/*"CMDSPELL_CURRENT_NUM_TXT"*/, 0);
    if ( !v48 )
      goto LABEL_152;
    UILabel__set_text(v48, (System_String_o *)this, 0);
    v49 = v10->fields.spendInfoLb;
    this = (RecoverItemComponent_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3523/*"CMDSPELL_SPEND_NUM_TXT"*/, 0);
    if ( !v49 )
      goto LABEL_152;
    UILabel__set_text(v49, (System_String_o *)this, 0);
    this = (RecoverItemComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !this )
      goto LABEL_152;
    this = (RecoverItemComponent_o *)DataManager__GetMasterData_object_(
                                       (DataManager_o *)this,
                                       (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_CommandSpellMaster___);
    if ( !this )
      goto LABEL_152;
    v50 = DataMasterBase_object__object__int___GetEntity(
            (DataMasterBase_TMaster__TEntity__PKType__o *)this,
            v10->fields.targetId,
            (const MethodInfo_3387D98 *)Method_DataMasterBase_CommandSpellMaster__CommandSpellEntity__int__GetEntity__);
    if ( !v50 )
      goto LABEL_151;
    v51 = (CommandSpellEntity_o *)v50;
    this = (RecoverItemComponent_o *)v10->fields.cmdSpellIcon;
    if ( !this )
      goto LABEL_152;
    CommandSpellIconComponent__SetData((CommandSpellIconComponent_o *)this, v10->fields.userEntity, 0);
    this = (RecoverItemComponent_o *)v10->fields.itemNameLb;
    if ( !this )
      goto LABEL_152;
    UILabel__set_text((UILabel_o *)this, v51->fields.name, 0);
    this = *p_userEntity;
    if ( !*p_userEntity )
      goto LABEL_152;
    CommandSpell = UserGameEntity__getCommandSpell((UserGameEntity_o *)this, 0);
    *p_spendNum = v51->fields.consume;
    this = (RecoverItemComponent_o *)CommandSpellEntity__getValues(v51, 0);
    if ( !this )
      goto LABEL_152;
    if ( LODWORD(this->fields.m_CancellationTokenSource) )
    {
      type = v51->fields.type;
      itemIconInfo = this->fields.itemIconInfo;
      if ( type == 3 )
      {
        if ( !itemIconInfo )
          goto LABEL_152;
        if ( !LODWORD(itemIconInfo->fields.m_CancellationTokenSource) )
          goto LABEL_153;
        v56 = (float)((float)SLODWORD(itemIconInfo->fields.backSprite) / 1000.0) * 100.0;
        v57 = (int)v56;
        if ( v56 == INFINITY )
          v57 = 0x80000000;
        v10->fields.apRcvRate = v57;
        usrMaxAp = (float)v10->fields.usrMaxAp;
        v59 = (float)SLODWORD(itemIconInfo->fields.backSprite) / 1000.0;
        if ( !byte_4C21465 )
        {
          sub_1C2D490(&System_Math_TypeInfo);
          byte_4C21465 = 1;
        }
        v60 = v59 * usrMaxAp;
        if ( !System_Math_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
        v61 = vcvtps_s32_f32(v60);
        if ( ceilf(v60) == INFINITY )
          v62 = 0x80000000;
        else
          v62 = v61;
        v10->fields.recvApNum = v62;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v63 = LocalizationManager__Get((System_String_o *)StringLiteral_3521/*"CMDSPELL_CURRENT_NUM"*/, 0);
        spendNum = v10->fields.spendNum;
        v67 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &spendNum, v64, v65, v66);
        v68 = System_String__Format(v63, v67, 0);
        itemDetailLb = v10->fields.itemDetailLb;
        v70 = (Il2CppObject *)v68;
        v71 = LocalizationManager__Get((System_String_o *)StringLiteral_2029/*"AP_RECOVER_NUM_TXT"*/, 0);
        apRcvRate = v10->fields.apRcvRate;
        v75 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &apRcvRate, v72, v73, v74);
        recvApNum = v10->fields.recvApNum;
        v79 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &recvApNum, v76, v77, v78);
        this = (RecoverItemComponent_o *)System_String__Format_63499224(v71, v70, v75, v79, 0);
        if ( !itemDetailLb )
          goto LABEL_152;
        UILabel__set_text(itemDetailLb, (System_String_o *)this, 0);
        type = v51->fields.type;
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
            v46 = CommandSpell < v10->fields.spendNum;
            v47 = v10->fields.recvApNum + v10->fields.usrCurrentAp;
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
          v84 = *p_spendNum;
        }
        else
        {
          v81 = (float)(needAp - v10->fields.usrCurrentAp) / (float)backSprite;
          if ( !byte_4C21465 )
          {
            sub_1C2D490(&System_Math_TypeInfo);
            byte_4C21465 = 1;
          }
          v82 = fmaxf(v81, 1.0);
          if ( !System_Math_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
          v83 = vcvtps_s32_f32(v82);
          if ( ceilf(v82) == INFINITY )
            v84 = 0x80000000;
          else
            v84 = v83;
          *p_spendNum = v84;
        }
        v10->fields.recvApNum = v84 * backSprite;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v142 = LocalizationManager__Get((System_String_o *)StringLiteral_3521/*"CMDSPELL_CURRENT_NUM"*/, 0);
        spendNum = v10->fields.spendNum;
        v146 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &spendNum, v143, v144, v145);
        v147 = System_String__Format(v142, v146, 0);
        v148 = v10->fields.itemDetailLb;
        v149 = (Il2CppObject *)v147;
        v150 = LocalizationManager__Get((System_String_o *)StringLiteral_1919/*"ADD_RECOVER_CMDSPELL_TXT"*/, 0);
        apRcvRate = v10->fields.recvApNum;
        v154 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &apRcvRate, v151, v152, v153);
        this = (RecoverItemComponent_o *)System_String__Format_63499156(v150, v149, v154, 0);
        if ( !v148 )
          goto LABEL_152;
        UILabel__set_text(v148, (System_String_o *)this, 0);
        v10->fields.isAddAp = 1;
        goto LABEL_144;
      }
    }
LABEL_153:
    sub_1C2D6F4(this, data, v52, v53);
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
          v86 = RecvItemData;
          this = (RecoverItemComponent_o *)v10->fields.itemIconInfo;
          if ( this )
          {
            ItemIconComponent__SetItemImage_40697980(
              (ItemIconComponent_o *)this,
              v86->fields.imageId,
              v86->fields.bgImageId,
              v86->fields.type,
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
                  UILabel__set_text((UILabel_o *)this, v86->fields.name, 0);
                  *p_spendNum = 1;
                  this = (RecoverItemComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
                  if ( this )
                  {
                    this = (RecoverItemComponent_o *)DataManager__GetMasterData_object_(
                                                       (DataManager_o *)this,
                                                       (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_UserItemMaster___);
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
                        v91 = v86->fields.type;
                        if ( v91 == 3 )
                        {
                          v92 = BalanceConfig_TypeInfo;
                          if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
                          {
                            j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
                            v92 = BalanceConfig_TypeInfo;
                          }
                          v10->fields.spendNum = v92->static_fields->SpendApRecvItemNum;
                          v93 = (float)v86->fields.value / 1000.0;
                          if ( (float)(v93 * 100.0) == INFINITY )
                            v94 = 0x80000000;
                          else
                            v94 = (int)(float)(v93 * 100.0);
                          v95 = v10->fields.usrMaxAp;
                          v10->fields.apRcvRate = v94;
                          v96 = (float)v95;
                          if ( !byte_4C21465 )
                          {
                            sub_1C2D490(&System_Math_TypeInfo);
                            byte_4C21465 = 1;
                          }
                          v97 = v93 * v96;
                          if ( !System_Math_TypeInfo->_2.cctor_finished )
                            j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
                          v98 = vcvtps_s32_f32(v97);
                          if ( ceilf(v97) == INFINITY )
                            v98 = 0x80000000;
                          v10->fields.recvApNum = v98;
                          if ( needAp >= 1 )
                          {
                            v99 = (float)(needAp - v10->fields.usrCurrentAp) / (float)v98;
                            if ( !byte_4C21465 )
                            {
                              sub_1C2D490(&System_Math_TypeInfo);
                              byte_4C21465 = 1;
                            }
                            v100 = fmaxf(v99, 1.0);
                            if ( !System_Math_TypeInfo->_2.cctor_finished )
                              j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
                            v101 = v10->fields.apRcvRate;
                            v102 = v10->fields.recvApNum;
                            v103 = vcvtps_s32_f32(v100);
                            if ( ceilf(v100) == INFINITY )
                              v103 = 0x80000000;
                            v10->fields.spendNum = v103;
                            v10->fields.apRcvRate = v101 * v103;
                            v10->fields.recvApNum = v102 * v103;
                          }
                          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                          v104 = LocalizationManager__Get((System_String_o *)StringLiteral_14809/*"UNIT_INFO"*/, 0);
                          spendNum = v10->fields.spendNum;
                          v108 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &spendNum, v105, v106, v107);
                          v109 = System_String__Format(v104, v108, 0);
                          v110 = v10->fields.itemDetailLb;
                          v111 = (Il2CppObject *)v109;
                          v112 = LocalizationManager__Get((System_String_o *)StringLiteral_2029/*"AP_RECOVER_NUM_TXT"*/, 0);
                          apRcvRate = v10->fields.apRcvRate;
                          v116 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &apRcvRate, v113, v114, v115);
                          recvApNum = v10->fields.recvApNum;
                          v120 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &recvApNum, v117, v118, v119);
                          this = (RecoverItemComponent_o *)System_String__Format_63499224(v112, v111, v116, v120, 0);
                          if ( !v110 )
                            goto LABEL_152;
                          UILabel__set_text(v110, (System_String_o *)this, 0);
                          v91 = v86->fields.type;
                        }
                        if ( v91 == 4 )
                        {
                          value = v86->fields.value;
                          if ( needAp < 1 )
                          {
                            *p_spendNum = 1;
                          }
                          else
                          {
                            v122 = (float)(needAp - v10->fields.usrCurrentAp) / (float)value;
                            if ( !byte_4C21465 )
                            {
                              sub_1C2D490(&System_Math_TypeInfo);
                              byte_4C21465 = 1;
                            }
                            v123 = fmaxf(v122, 1.0);
                            if ( !System_Math_TypeInfo->_2.cctor_finished )
                              j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
                            v124 = vcvtps_s32_f32(v123);
                            if ( ceilf(v123) == INFINITY )
                              v124 = 0x80000000;
                            *p_spendNum = v124;
                            value *= v124;
                          }
                          v10->fields.recvApNum = value;
                          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                          v125 = LocalizationManager__Get((System_String_o *)StringLiteral_14809/*"UNIT_INFO"*/, 0);
                          spendNum = v10->fields.spendNum;
                          v129 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &spendNum, v126, v127, v128);
                          v130 = System_String__Format(v125, v129, 0);
                          v131 = v10->fields.itemDetailLb;
                          v132 = (Il2CppObject *)v130;
                          v133 = LocalizationManager__Get((System_String_o *)StringLiteral_1920/*"ADD_RECOVER_NUM_TXT"*/, 0);
                          apRcvRate = v10->fields.recvApNum;
                          v137 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &apRcvRate, v134, v135, v136);
                          this = (RecoverItemComponent_o *)System_String__Format_63499156(v133, v132, v137, 0);
                          if ( !v131 )
                            goto LABEL_152;
                          UILabel__set_text(v131, (System_String_o *)this, 0);
                          v10->fields.isAddAp = 1;
                        }
                        v138 = v10->fields.currentNumLb;
                        spendNum = num;
                        v139 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &spendNum, v87, v88, v89);
                        this = (RecoverItemComponent_o *)System_String__Format(
                                                           (System_String_o *)StringLiteral_25069/*"{0:N0}"*/,
                                                           v139,
                                                           0);
                        if ( v138 )
                        {
                          UILabel__set_text(v138, (System_String_o *)this, 0);
                          v140 = v10->fields.spendNumLb;
                          this = (RecoverItemComponent_o *)System_Int32__ToString((int)v10 + 128, 0);
                          if ( v140 )
                          {
                            UILabel__set_text(v140, (System_String_o *)this, 0);
                            v141 = v10->fields.recvApNum + v10->fields.usrCurrentAp;
                            v10->fields.isEnableSelect = num >= v10->fields.spendNum;
                            v10->fields.recvSum = v141;
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
    sub_1C2D6EC(this, data);
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
  this = (RecoverItemComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_152;
  this = (RecoverItemComponent_o *)DataManager__GetMasterData_object_(
                                     (DataManager_o *)this,
                                     (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_ItemMaster___);
  if ( !this )
    goto LABEL_152;
  this = (RecoverItemComponent_o *)ItemMaster__GetEntityByType((ItemMaster_o *)this, 2, 0);
  if ( !this )
    goto LABEL_152;
  v19 = this;
  this = (RecoverItemComponent_o *)v10->fields.itemIconInfo;
  if ( !this )
    goto LABEL_152;
  ItemIconComponent__SetItemImage_40697980(
    (ItemIconComponent_o *)this,
    (int32_t)v19->fields.cmdSpellBg,
    HIDWORD(v19->fields.cmdSpellBg),
    (int32_t)v19->fields.cmdSpellIcon,
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
  this = (RecoverItemComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_152;
  this = (RecoverItemComponent_o *)DataManager__GetMasterData_object_(
                                     (DataManager_o *)this,
                                     (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_StoneShopMaster___);
  if ( !this )
    goto LABEL_152;
  this = (RecoverItemComponent_o *)DataMasterBase_object__object__int___GetEntity(
                                     (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                     v10->fields.targetId,
                                     (const MethodInfo_3387D98 *)Method_DataMasterBase_StoneShopMaster__StoneShopEntity__int__GetEntity__);
  if ( !v10->fields.itemNameLb )
    goto LABEL_152;
  v20 = this;
  UILabel__set_text(v10->fields.itemNameLb, (System_String_o *)v19->fields.m_CancellationTokenSource, 0);
  if ( !*p_userEntity )
    goto LABEL_152;
  v24 = (int32_t)(*p_userEntity)->fields.userEntity;
  if ( v20 )
    *p_spendNum = HIDWORD(v20->fields.cmdSpellBg);
  v25 = v10->fields.currentNumLb;
  spendNum = v24;
  v26 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &spendNum, v21, v22, v23);
  this = (RecoverItemComponent_o *)System_String__Format((System_String_o *)StringLiteral_25069/*"{0:N0}"*/, v26, 0);
  if ( !v25 )
    goto LABEL_152;
  UILabel__set_text(v25, (System_String_o *)this, 0);
  v27 = v10->fields.spendNumLb;
  this = (RecoverItemComponent_o *)System_Int32__ToString((int)v10 + 128, 0);
  if ( !v27 )
    goto LABEL_152;
  UILabel__set_text(v27, (System_String_o *)this, 0);
  RecoverItemComponent__AttachStoneCountRefreshComponent(v10, v28);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v29 = LocalizationManager__Get((System_String_o *)StringLiteral_14809/*"UNIT_INFO"*/, 0);
  apRcvRate = v10->fields.spendNum;
  v33 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &apRcvRate, v30, v31, v32);
  v34 = System_String__Format(v29, v33, 0);
  v35 = v10->fields.itemDetailLb;
  v36 = (Il2CppObject *)v34;
  v37 = LocalizationManager__Get((System_String_o *)StringLiteral_2029/*"AP_RECOVER_NUM_TXT"*/, 0);
  recvApNum = v10->fields.apRcvRate;
  v41 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &recvApNum, v38, v39, v40);
  v158 = v10->fields.recvApNum;
  v45 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v158, v42, v43, v44);
  this = (RecoverItemComponent_o *)System_String__Format_63499224(v37, v36, v41, v45, 0);
  if ( !v35 )
    goto LABEL_152;
  UILabel__set_text(v35, (System_String_o *)this, 0);
  this = *p_userEntity;
  if ( !*p_userEntity )
    goto LABEL_152;
  v46 = UserGameEntity__get_PayableStoneNum((UserGameEntity_o *)this, 0) < v10->fields.spendNum;
  v47 = v10->fields.usrMaxAp + v10->fields.usrCurrentAp;
LABEL_147:
  v157 = !v46;
  v10->fields.isEnableSelect = v157;
  v10->fields.recvSum = v47;
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
      sub_1C2D6EC(0, method);
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
  RecoverItemComponent_o **p_userEntity; // x21
  BalanceConfig_c *v13; // x0
  int32_t UerGameRpMax; // w8
  unsigned int *p_spendNum; // x20
  UILabel_o *currentInfoLb; // x24
  UILabel_o *spendInfoLb; // x24
  int32_t currentType; // w8
  RecoverItemComponent_o *v19; // x22
  RecoverItemComponent_o *v20; // x23
  __int64 v21; // x2
  __int64 v22; // x3
  __int64 v23; // x4
  int32_t userEntity; // w8
  UILabel_o *v25; // x22
  Il2CppObject *v26; // x0
  UILabel_o *v27; // x22
  const MethodInfo *v28; // x1
  System_String_o *v29; // x20
  __int64 v30; // x2
  __int64 v31; // x3
  __int64 v32; // x4
  Il2CppObject *v33; // x0
  System_String_o *v34; // x0
  UILabel_o *v35; // x20
  Il2CppObject *v36; // x22
  System_String_o *v37; // x23
  __int64 v38; // x2
  __int64 v39; // x3
  __int64 v40; // x4
  Il2CppObject *v41; // x0
  bool v42; // cc
  int v43; // w8
  UILabel_o *v44; // x23
  UILabel_o *v45; // x23
  Il2CppObject *v46; // x0
  CommandSpellEntity_o *v47; // x23
  __int64 v48; // x2
  __int64 v49; // x3
  struct ItemIconComponent_o *itemIconInfo; // x8
  int backSprite; // w21
  float v52; // s8
  float v53; // s8
  unsigned int v54; // w9
  unsigned int v55; // w8
  ItemEntity_o *RecvItemData; // x0
  ItemEntity_o *v57; // x24
  int32_t v58; // w26
  int value; // w21
  float v60; // s8
  float v61; // s8
  unsigned int v62; // w8
  System_String_o *v63; // x21
  __int64 v64; // x2
  __int64 v65; // x3
  __int64 v66; // x4
  Il2CppObject *v67; // x0
  System_String_o *v68; // x0
  UILabel_o *v69; // x21
  Il2CppObject *v70; // x22
  System_String_o *v71; // x24
  __int64 v72; // x2
  __int64 v73; // x3
  __int64 v74; // x4
  Il2CppObject *v75; // x0
  UILabel_o *v76; // x21
  __int64 v77; // x2
  __int64 v78; // x3
  __int64 v79; // x4
  Il2CppObject *v80; // x0
  UILabel_o *v81; // x21
  int v82; // w8
  System_String_o *v83; // x21
  __int64 v84; // x2
  __int64 v85; // x3
  __int64 v86; // x4
  Il2CppObject *v87; // x0
  System_String_o *v88; // x0
  UILabel_o *itemDetailLb; // x21
  Il2CppObject *v90; // x22
  System_String_o *v91; // x23
  __int64 v92; // x2
  __int64 v93; // x3
  __int64 v94; // x4
  Il2CppObject *v95; // x0
  UILabel_o *currentNumLb; // x21
  UILabel_o *spendNumLb; // x21
  char v98; // w9
  int32_t v99; // [xsp+0h] [xbp-70h] BYREF
  int32_t recvRpNum; // [xsp+4h] [xbp-6Ch] BYREF
  int32_t spendNum; // [xsp+8h] [xbp-68h] BYREF
  int32_t CommandSpell; // [xsp+Ch] [xbp-64h] BYREF
  UserItemEntity_o *entity; // [xsp+28h] [xbp-48h] BYREF

  v10 = this;
  if ( (byte_4C213EB & 1) == 0 )
  {
    sub_1C2D490(&BalanceConfig_TypeInfo);
    sub_1C2D490(&Method_DataManager_GetMasterData_CommandSpellMaster___);
    sub_1C2D490(&Method_DataManager_GetMasterData_ItemMaster___);
    sub_1C2D490(&Method_DataManager_GetMasterData_StoneShopMaster___);
    sub_1C2D490(&Method_DataManager_GetMasterData_UserItemMaster___);
    sub_1C2D490(&Method_DataMasterBase_CommandSpellMaster__CommandSpellEntity__int__GetEntity__);
    sub_1C2D490(&Method_DataMasterBase_StoneShopMaster__StoneShopEntity__int__GetEntity__);
    sub_1C2D490(&int_TypeInfo);
    sub_1C2D490(&LocalizationManager_TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C2D490(&StringLiteral_3521/*"CMDSPELL_CURRENT_NUM"*/);
    sub_1C2D490(&StringLiteral_3523/*"CMDSPELL_SPEND_NUM_TXT"*/);
    sub_1C2D490(&StringLiteral_25069/*"{0:N0}"*/);
    sub_1C2D490(&StringLiteral_861/*"-"*/);
    sub_1C2D490(&StringLiteral_14809/*"UNIT_INFO"*/);
    sub_1C2D490(&StringLiteral_12270/*"SPEND_NUM_TXT"*/);
    sub_1C2D490(&StringLiteral_3929/*"CURRENT_NUM_TXT"*/);
    sub_1C2D490(&StringLiteral_11159/*"RP_RECOVER_CMDSPELL_TXT"*/);
    sub_1C2D490(&StringLiteral_11161/*"RP_RECOVER_NUM_TXT"*/);
    this = (RecoverItemComponent_o *)sub_1C2D490(&StringLiteral_3522/*"CMDSPELL_CURRENT_NUM_TXT"*/);
    byte_4C213EB = 1;
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
  sub_1C2D434(&v10->fields.dialog);
  v10->fields.callbackFunc = callback;
  sub_1C2D434(&v10->fields.callbackFunc);
  this = (RecoverItemComponent_o *)v10->fields.maskImg;
  if ( !this )
    goto LABEL_108;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
  v10->fields.userEntity = UserGameMaster__getSelfUserGame(0);
  p_userEntity = (RecoverItemComponent_o **)&v10->fields.userEntity;
  sub_1C2D434(&v10->fields.userEntity);
  this = (RecoverItemComponent_o *)v10->fields.userEntity;
  if ( !this )
    goto LABEL_108;
  v10->fields.usrCurrentRp = UserGameEntity__getRp((UserGameEntity_o *)this, 0);
  v13 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v13 = BalanceConfig_TypeInfo;
  }
  UerGameRpMax = v13->static_fields->UerGameRpMax;
  v10->fields.spendNum = 1;
  p_spendNum = (unsigned int *)&v10->fields.spendNum;
  this = (RecoverItemComponent_o *)v10->fields.itemNameLb;
  v10->fields.isAp = 0;
  v10->fields.usrMaxRp = UerGameRpMax;
  v10->fields.recvRpNum = UerGameRpMax;
  if ( !this )
    goto LABEL_108;
  UILabel__set_text((UILabel_o *)this, (System_String_o *)StringLiteral_861/*"-"*/, 0);
  this = (RecoverItemComponent_o *)v10->fields.currentNumLb;
  if ( !this )
    goto LABEL_108;
  UILabel__set_text((UILabel_o *)this, (System_String_o *)StringLiteral_861/*"-"*/, 0);
  this = (RecoverItemComponent_o *)v10->fields.spendNumLb;
  if ( !this )
    goto LABEL_108;
  UILabel__set_text((UILabel_o *)this, (System_String_o *)StringLiteral_861/*"-"*/, 0);
  this = (RecoverItemComponent_o *)v10->fields.itemDetailLb;
  if ( !this )
    goto LABEL_108;
  UILabel__set_text((UILabel_o *)this, (System_String_o *)StringLiteral_861/*"-"*/, 0);
  currentInfoLb = v10->fields.currentInfoLb;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  this = (RecoverItemComponent_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3929/*"CURRENT_NUM_TXT"*/, 0);
  if ( !currentInfoLb )
    goto LABEL_108;
  UILabel__set_text(currentInfoLb, (System_String_o *)this, 0);
  spendInfoLb = v10->fields.spendInfoLb;
  this = (RecoverItemComponent_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12270/*"SPEND_NUM_TXT"*/, 0);
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
          v44 = v10->fields.currentInfoLb;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          this = (RecoverItemComponent_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3522/*"CMDSPELL_CURRENT_NUM_TXT"*/, 0);
          if ( v44 )
          {
            UILabel__set_text(v44, (System_String_o *)this, 0);
            v45 = v10->fields.spendInfoLb;
            this = (RecoverItemComponent_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3523/*"CMDSPELL_SPEND_NUM_TXT"*/, 0);
            if ( v45 )
            {
              UILabel__set_text(v45, (System_String_o *)this, 0);
              this = (RecoverItemComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
              if ( this )
              {
                this = (RecoverItemComponent_o *)DataManager__GetMasterData_object_(
                                                   (DataManager_o *)this,
                                                   (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_CommandSpellMaster___);
                if ( this )
                {
                  v46 = DataMasterBase_object__object__int___GetEntity(
                          (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                          v10->fields.targetId,
                          (const MethodInfo_3387D98 *)Method_DataMasterBase_CommandSpellMaster__CommandSpellEntity__int__GetEntity__);
                  if ( !v46 )
                    goto LABEL_107;
                  v47 = (CommandSpellEntity_o *)v46;
                  this = (RecoverItemComponent_o *)v10->fields.cmdSpellIcon;
                  if ( this )
                  {
                    CommandSpellIconComponent__SetData((CommandSpellIconComponent_o *)this, v10->fields.userEntity, 0);
                    this = (RecoverItemComponent_o *)v10->fields.itemNameLb;
                    if ( this )
                    {
                      UILabel__set_text((UILabel_o *)this, v47->fields.name, 0);
                      this = *p_userEntity;
                      if ( *p_userEntity )
                      {
                        CommandSpell = UserGameEntity__getCommandSpell((UserGameEntity_o *)this, 0);
                        *p_spendNum = v47->fields.consume;
                        this = (RecoverItemComponent_o *)CommandSpellEntity__getValues(v47, 0);
                        if ( this )
                        {
                          if ( !LODWORD(this->fields.m_CancellationTokenSource) )
                            goto LABEL_109;
                          itemIconInfo = this->fields.itemIconInfo;
                          if ( !itemIconInfo )
                            goto LABEL_108;
                          if ( !LODWORD(itemIconInfo->fields.m_CancellationTokenSource) )
LABEL_109:
                            sub_1C2D6F4(this, data, v48, v49);
                          backSprite = (int)itemIconInfo->fields.backSprite;
                          if ( needRp < 1 )
                          {
                            v55 = *p_spendNum;
                          }
                          else
                          {
                            v52 = (float)(needRp - v10->fields.usrCurrentRp) / (float)backSprite;
                            if ( !byte_4C21465 )
                            {
                              sub_1C2D490(&System_Math_TypeInfo);
                              byte_4C21465 = 1;
                            }
                            v53 = fmaxf(v52, 1.0);
                            if ( !System_Math_TypeInfo->_2.cctor_finished )
                              j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
                            v54 = vcvtps_s32_f32(v53);
                            if ( ceilf(v53) == INFINITY )
                              v55 = 0x80000000;
                            else
                              v55 = v54;
                            *p_spendNum = v55;
                          }
                          v10->fields.recvRpNum = v55 * backSprite;
                          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                          v83 = LocalizationManager__Get((System_String_o *)StringLiteral_3521/*"CMDSPELL_CURRENT_NUM"*/, 0);
                          spendNum = v10->fields.spendNum;
                          v87 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &spendNum, v84, v85, v86);
                          v88 = System_String__Format(v83, v87, 0);
                          itemDetailLb = v10->fields.itemDetailLb;
                          v90 = (Il2CppObject *)v88;
                          v91 = LocalizationManager__Get((System_String_o *)StringLiteral_11159/*"RP_RECOVER_CMDSPELL_TXT"*/, 0);
                          recvRpNum = v10->fields.recvRpNum;
                          v95 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &recvRpNum, v92, v93, v94);
                          this = (RecoverItemComponent_o *)System_String__Format_63499156(v91, v90, v95, 0);
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
                                v42 = CommandSpell < v10->fields.spendNum;
                                v43 = v10->fields.recvRpNum + v10->fields.usrCurrentRp;
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
          v57 = RecvItemData;
          this = (RecoverItemComponent_o *)v10->fields.itemIconInfo;
          if ( this )
          {
            ItemIconComponent__SetItemImage_40697980(
              (ItemIconComponent_o *)this,
              v57->fields.imageId,
              v57->fields.bgImageId,
              v57->fields.type,
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
                  UILabel__set_text((UILabel_o *)this, v57->fields.name, 0);
                  this = (RecoverItemComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
                  if ( this )
                  {
                    this = (RecoverItemComponent_o *)DataManager__GetMasterData_object_(
                                                       (DataManager_o *)this,
                                                       (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_UserItemMaster___);
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
                        v58 = entity ? entity->fields.num : 0;
                        value = v57->fields.value;
                        if ( needRp < 1 )
                        {
                          *p_spendNum = 1;
                        }
                        else
                        {
                          v60 = (float)(needRp - v10->fields.usrCurrentRp) / (float)value;
                          if ( !byte_4C21465 )
                          {
                            sub_1C2D490(&System_Math_TypeInfo);
                            byte_4C21465 = 1;
                          }
                          v61 = fmaxf(v60, 1.0);
                          if ( !System_Math_TypeInfo->_2.cctor_finished )
                            j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
                          v62 = vcvtps_s32_f32(v61);
                          if ( ceilf(v61) == INFINITY )
                            v62 = 0x80000000;
                          *p_spendNum = v62;
                          value *= v62;
                        }
                        v10->fields.recvRpNum = value;
                        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                        v63 = LocalizationManager__Get((System_String_o *)StringLiteral_14809/*"UNIT_INFO"*/, 0);
                        spendNum = v10->fields.spendNum;
                        v67 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &spendNum, v64, v65, v66);
                        v68 = System_String__Format(v63, v67, 0);
                        v69 = v10->fields.itemDetailLb;
                        v70 = (Il2CppObject *)v68;
                        v71 = LocalizationManager__Get((System_String_o *)StringLiteral_11161/*"RP_RECOVER_NUM_TXT"*/, 0);
                        recvRpNum = v10->fields.recvRpNum;
                        v75 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &recvRpNum, v72, v73, v74);
                        this = (RecoverItemComponent_o *)System_String__Format_63499156(v71, v70, v75, 0);
                        if ( v69 )
                        {
                          UILabel__set_text(v69, (System_String_o *)this, 0);
                          v76 = v10->fields.currentNumLb;
                          v99 = v58;
                          v80 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v99, v77, v78, v79);
                          this = (RecoverItemComponent_o *)System_String__Format(
                                                             (System_String_o *)StringLiteral_25069/*"{0:N0}"*/,
                                                             v80,
                                                             0);
                          if ( v76 )
                          {
                            UILabel__set_text(v76, (System_String_o *)this, 0);
                            v81 = v10->fields.spendNumLb;
                            this = (RecoverItemComponent_o *)System_Int32__ToString((int)v10 + 128, 0);
                            if ( v81 )
                            {
                              UILabel__set_text(v81, (System_String_o *)this, 0);
                              v82 = v10->fields.recvRpNum + v10->fields.usrCurrentRp;
                              v10->fields.isEnableSelect = v58 >= v10->fields.spendNum;
                              v10->fields.recvSum = v82;
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
  this = (RecoverItemComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_108;
  this = (RecoverItemComponent_o *)DataManager__GetMasterData_object_(
                                     (DataManager_o *)this,
                                     (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_ItemMaster___);
  if ( !this )
    goto LABEL_108;
  this = (RecoverItemComponent_o *)ItemMaster__GetEntityByType((ItemMaster_o *)this, 2, 0);
  if ( !this )
    goto LABEL_108;
  v19 = this;
  this = (RecoverItemComponent_o *)v10->fields.itemIconInfo;
  if ( !this )
    goto LABEL_108;
  ItemIconComponent__SetItemImage_40697980(
    (ItemIconComponent_o *)this,
    (int32_t)v19->fields.cmdSpellBg,
    HIDWORD(v19->fields.cmdSpellBg),
    (int32_t)v19->fields.cmdSpellIcon,
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
  this = (RecoverItemComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_108;
  this = (RecoverItemComponent_o *)DataManager__GetMasterData_object_(
                                     (DataManager_o *)this,
                                     (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_StoneShopMaster___);
  if ( !this )
    goto LABEL_108;
  this = (RecoverItemComponent_o *)DataMasterBase_object__object__int___GetEntity(
                                     (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                     v10->fields.targetId,
                                     (const MethodInfo_3387D98 *)Method_DataMasterBase_StoneShopMaster__StoneShopEntity__int__GetEntity__);
  if ( !v10->fields.itemNameLb )
    goto LABEL_108;
  v20 = this;
  UILabel__set_text(v10->fields.itemNameLb, (System_String_o *)v19->fields.m_CancellationTokenSource, 0);
  if ( !*p_userEntity )
    goto LABEL_108;
  userEntity = (int32_t)(*p_userEntity)->fields.userEntity;
  if ( v20 )
    *p_spendNum = HIDWORD(v20->fields.cmdSpellBg);
  v25 = v10->fields.currentNumLb;
  spendNum = userEntity;
  v26 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &spendNum, v21, v22, v23);
  this = (RecoverItemComponent_o *)System_String__Format((System_String_o *)StringLiteral_25069/*"{0:N0}"*/, v26, 0);
  if ( !v25 )
    goto LABEL_108;
  UILabel__set_text(v25, (System_String_o *)this, 0);
  v27 = v10->fields.spendNumLb;
  this = (RecoverItemComponent_o *)System_Int32__ToString((int)v10 + 128, 0);
  if ( !v27 )
    goto LABEL_108;
  UILabel__set_text(v27, (System_String_o *)this, 0);
  RecoverItemComponent__AttachStoneCountRefreshComponent(v10, v28);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v29 = LocalizationManager__Get((System_String_o *)StringLiteral_14809/*"UNIT_INFO"*/, 0);
  recvRpNum = v10->fields.spendNum;
  v33 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &recvRpNum, v30, v31, v32);
  v34 = System_String__Format(v29, v33, 0);
  v35 = v10->fields.itemDetailLb;
  v36 = (Il2CppObject *)v34;
  v37 = LocalizationManager__Get((System_String_o *)StringLiteral_11161/*"RP_RECOVER_NUM_TXT"*/, 0);
  v99 = v10->fields.recvRpNum;
  v41 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v99, v38, v39, v40);
  this = (RecoverItemComponent_o *)System_String__Format_63499156(v37, v36, v41, 0);
  if ( !v35 || (UILabel__set_text(v35, (System_String_o *)this, 0), (this = *p_userEntity) == 0) )
LABEL_108:
    sub_1C2D6EC(this, data);
  v42 = UserGameEntity__get_PayableStoneNum((UserGameEntity_o *)this, 0) < v10->fields.spendNum;
  v43 = v10->fields.recvRpNum + v10->fields.usrCurrentRp;
LABEL_103:
  v98 = !v42;
  v10->fields.isEnableSelect = v98;
  v10->fields.recvSum = v43;
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

  if ( (byte_4C213F0 & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    sub_1C2D490(&Method_DataManager_GetMasterData_EventMaster___);
    sub_1C2D490(&LocalizationManager_TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C2D490(&TerminalSceneComponent_TypeInfo);
    sub_1C2D490(&Method_RecoverItemComponent___c__setRequestInfo_b__43_0__);
    sub_1C2D490(&RecoverItemComponent___c_TypeInfo);
    sub_1C2D490(&StringLiteral_11162/*"RP_UNRECOVERABLE_MESSAGE"*/);
    sub_1C2D490(&StringLiteral_1/*""*/);
    byte_4C213F0 = 1;
  }
  if ( this->fields.recvTarget != 2 )
    goto LABEL_14;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_27;
  DataManager__GetMasterData_object_(
    Instance,
    (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_EventMaster___);
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  if ( !byte_4C21383 )
  {
    sub_1C2D490(&TerminalSceneComponent_TypeInfo);
    byte_4C21383 = 1;
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
    sub_1C2D6EC(Instance, v4);
  if ( !ScrPlayerStatus__IsBPActive((ScrPlayerStatus_o *)Instance, 0) )
  {
    v7 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    Instance = (DataManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11162/*"RP_UNRECOVERABLE_MESSAGE"*/, 0);
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
      _9__43_0 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
      System_Action___ctor(_9__43_0, v12, Method_RecoverItemComponent___c__setRequestInfo_b__43_0__, 0);
      static_fields = RecoverItemComponent___c_TypeInfo->static_fields;
      static_fields->__9__43_0 = _9__43_0;
      Instance = (DataManager_o *)sub_1C2D434(&static_fields->__9__43_0);
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
    sub_1C2D434(&this->fields.callbackFunc);
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

  if ( (byte_4C213EE & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    sub_1C2D490(&Method_RecoverItemComponent_setRequestInfo__);
    sub_1C2D490(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4C213EE = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v7 = (CommonUI_o *)Instance;
  if ( isRes )
  {
    v8 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
    System_Action___ctor(v8, (Il2CppObject *)this, Method_RecoverItemComponent_setRequestInfo__, 0);
    if ( v7 )
    {
      CommonUI__CloseConfirmDialog_31167972(v7, v8, 0);
      return;
    }
LABEL_8:
    sub_1C2D6EC(Instance, v6);
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
  sub_1C2D434(&this->fields.m_target);
  v8 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_1C2D550(method) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1C2D708(0, "Delegate to an instance method cannot have null 'this'.");
      sub_1C2D5B8(v10, 0);
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
  this->fields.invoke_impl = (intptr_t)sub_1A6900C;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_1A68FAC;
}


// local variable allocation has failed, the output may be wrong!
System_IAsyncResult_o *RecoverItemComponent_CallbackFunc__BeginInvoke(
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
  if ( (byte_4C213F4 & 1) == 0 )
  {
    sub_1C2D490(&int_TypeInfo);
    sub_1C2D490(&RecoverType_Type_TypeInfo);
    byte_4C213F4 = 1;
  }
  v18 = 0u;
  v17[0] = j_il2cpp_value_box_0(RecoverType_Type_TypeInfo, &v21, *(_QWORD *)&id, *(_QWORD *)&num, callback);
  v17[1] = j_il2cpp_value_box_0(int_TypeInfo, &v20, v10, v11, v12);
  *(_QWORD *)&v18 = j_il2cpp_value_box_0(int_TypeInfo, &v19, v13, v14, v15);
  return (System_IAsyncResult_o *)sub_1C2D444(this, v17, callback, object);
}


void RecoverItemComponent_CallbackFunc__EndInvoke(
        RecoverItemComponent_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C2D448(result, 0, method);
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

  if ( (byte_4C213F5 & 1) == 0 )
  {
    sub_1C2D490(&RecoverItemComponent___c_TypeInfo);
    byte_4C213F5 = 1;
  }
  v1 = (Il2CppObject *)sub_1C2D6DC(RecoverItemComponent___c_TypeInfo);
  System_Object___ctor(v1, 0);
  RecoverItemComponent___c_TypeInfo->static_fields->__9 = (struct RecoverItemComponent___c_o *)v1;
  sub_1C2D434(RecoverItemComponent___c_TypeInfo->static_fields);
}


void RecoverItemComponent___c___ctor(RecoverItemComponent___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void RecoverItemComponent___c___setRequestInfo_b__43_0(RecoverItemComponent___c_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v3; // x1

  if ( (byte_4C213F6 & 1) == 0 )
  {
    sub_1C2D490(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C2D490(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    byte_4C213F6 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance
    || (CommonUI__CloseRecoverItemListDialog((CommonUI_o *)Instance, 0),
        (Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__)) == 0) )
  {
    sub_1C2D6EC(Instance, v3);
  }
  AvalonSceneManager__transitionSceneRefresh((AvalonSceneManager_o *)Instance, 34, 1, 0, 0, 0);
}