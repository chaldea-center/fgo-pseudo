void __fastcall RecoverItemComponent___cctor(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_4B3EF5E & 1) == 0 )
  {
    sub_1BDB878(&RecoverItemComponent_TypeInfo, v1);
    byte_4B3EF5E = 1;
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
  UnityEngine_GameObject_o *gameObject; // x20
  System_Action_int__o *v5; // x21

  if ( (byte_4B3EF58 & 1) == 0 )
  {
    sub_1BDB878(&System_Action_int__TypeInfo, method);
    sub_1BDB878(&Method_RecoverItemComponent__AttachStoneCountRefreshComponent_b__38_0__, v3);
    byte_4B3EF58 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v5 = (System_Action_int__o *)sub_1BDBAC4(System_Action_int__TypeInfo);
  System_Action_int____ctor(
    v5,
    (Il2CppObject *)this,
    Method_RecoverItemComponent__AttachStoneCountRefreshComponent_b__38_0__,
    0LL);
  StoneCountRefreshComponent__AttachToGameObject(gameObject, v5, 1, 0LL);
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
  Il2CppObject *Instance; // x20
  System_Action_o *v10; // x21
  Il2CppObject *v11; // x0
  __int64 v12; // x1

  if ( (byte_4B3EF5B & 1) == 0 )
  {
    sub_1BDB878(&System_Action_TypeInfo, isRes);
    sub_1BDB878(&Method_RecoverItemComponent_setRequestInfo__, v7);
    sub_1BDB878(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v8);
    byte_4B3EF5B = 1;
  }
  if ( isRes )
  {
    this->fields.spendNum = useNum;
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v10 = (System_Action_o *)sub_1BDBAC4(System_Action_TypeInfo);
    System_Action___ctor(v10, (Il2CppObject *)this, Method_RecoverItemComponent_setRequestInfo__, 0LL);
    if ( !Instance )
LABEL_9:
      sub_1BDBAD4(v11, v12);
  }
  else
  {
    v11 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !v11 )
      goto LABEL_9;
    Instance = v11;
    v10 = 0LL;
  }
  CommonUI__CloseApRecoverConfirmDlg((CommonUI_o *)Instance, v10, 0LL);
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
  UnityEngine_Object_o *dialog; // x20
  __int64 userEntity; // x0
  __int64 v31; // x1
  struct RecoverDlgComponent_o *v32; // x8
  System_String_o *v33; // x20
  System_String_o *v34; // x21
  __int64 v35; // x2
  __int64 v36; // x3
  __int64 v37; // x4
  Il2CppObject *v38; // x0
  System_String_o *v39; // x24
  Il2CppObject *mText; // x23
  System_String_o *v41; // x21
  __int64 v42; // x2
  __int64 v43; // x3
  __int64 v44; // x4
  Il2CppObject *v45; // x0
  struct UILabel_o *itemNameLb; // x8
  System_String_o *v47; // x21
  System_String_o *v48; // x22
  _QWORD *v49; // x8
  System_Reflection_MethodBase_o *v50; // x0
  int32_t v51; // w8
  int32_t usrMaxAp; // w9
  System_String_o **v53; // x8
  System_String_o *v54; // x25
  System_String_o *v55; // x25
  __int64 v56; // x2
  __int64 v57; // x3
  System_Object_array *v58; // x26
  __int64 v59; // x2
  __int64 v60; // x3
  __int64 v61; // x4
  Il2CppObject *v62; // x24
  __int64 v63; // x2
  __int64 v64; // x3
  __int64 v65; // x4
  Il2CppObject *v66; // x24
  __int64 v67; // x2
  __int64 v68; // x3
  __int64 v69; // x4
  Il2CppObject *v70; // x24
  __int64 v71; // x2
  __int64 v72; // x3
  __int64 v73; // x4
  Il2CppObject *v74; // x24
  __int64 v75; // x2
  __int64 v76; // x3
  __int64 v77; // x4
  Il2CppObject *v78; // x24
  Il2CppObject **v79; // x0
  System_String_o *v80; // x25
  System_Object_array *v81; // x26
  __int64 v82; // x2
  __int64 v83; // x3
  __int64 v84; // x4
  Il2CppObject *v85; // x24
  __int64 v86; // x2
  __int64 v87; // x3
  __int64 v88; // x4
  Il2CppObject *v89; // x24
  __int64 v90; // x2
  __int64 v91; // x3
  __int64 v92; // x4
  Il2CppObject *v93; // x24
  __int64 v94; // x2
  __int64 v95; // x3
  __int64 v96; // x4
  Il2CppObject *v97; // x24
  __int64 v98; // x2
  __int64 v99; // x3
  __int64 v100; // x4
  Il2CppObject *v101; // x24
  System_String_o *v102; // x24
  Il2CppObject *v103; // x23
  CommonConfirmDialog_ClickDelegate_o *v104; // x25
  System_String_o **v105; // x8
  System_String_o *v106; // x25
  __int64 v107; // x2
  __int64 v108; // x3
  __int64 v109; // x4
  Il2CppObject *v110; // x24
  __int64 v111; // x2
  __int64 v112; // x3
  __int64 v113; // x4
  Il2CppObject *v114; // x24
  __int64 v115; // x2
  __int64 v116; // x3
  __int64 v117; // x4
  Il2CppObject *v118; // x24
  __int64 v119; // x2
  __int64 v120; // x3
  __int64 v121; // x4
  Il2CppObject *v122; // x24
  __int64 v123; // x2
  __int64 v124; // x3
  __int64 v125; // x4
  Il2CppObject *v126; // x24
  __int64 v127; // x2
  __int64 v128; // x3
  __int64 v129; // x4
  Il2CppObject *v130; // x24
  System_String_o *v131; // x23
  Il2CppObject *v132; // x25
  CommonConfirmDialog_ClickDelegate_o *v133; // x26
  System_String_o *v134; // x0
  System_String_o *v135; // x20
  Il2CppObject *v136; // x21
  System_Action_o *v137; // x22
  System_String_o *v138; // x0
  System_String_o *v139; // x20
  Il2CppObject *Instance; // x21
  System_Action_o *v141; // x22
  Il2CppObject *v142; // x0
  int32_t targetId; // w20
  int32_t needAp; // w21
  CommonUI_o *v145; // x22
  System_Action_bool__int__o *v146; // x23
  __int64 v147; // x0
  int32_t v148; // [xsp+48h] [xbp-78h] BYREF
  int32_t v149; // [xsp+4Ch] [xbp-74h] BYREF
  int32_t recvSum; // [xsp+50h] [xbp-70h] BYREF
  int32_t usrMaxRp; // [xsp+54h] [xbp-6Ch] BYREF
  int32_t usrCurrentRp; // [xsp+58h] [xbp-68h] BYREF
  int32_t spendNum; // [xsp+5Ch] [xbp-64h] BYREF

  if ( (byte_4B3EF59 & 1) == 0 )
  {
    sub_1BDB878(&System_Action_bool__int__TypeInfo, method);
    sub_1BDB878(&System_Action_TypeInfo, v3);
    sub_1BDB878(&BalanceConfig_TypeInfo, v4);
    sub_1BDB878(&CommonConfirmDialog_ClickDelegate_TypeInfo, v5);
    sub_1BDB878(&int_TypeInfo, v6);
    sub_1BDB878(&LocalizationManager_TypeInfo, v7);
    sub_1BDB878(&object___TypeInfo, v8);
    sub_1BDB878(&UnityEngine_Object_TypeInfo, v9);
    sub_1BDB878(&Method_RecoverItemComponent_CloseApRecovDlg__, v10);
    sub_1BDB878(&Method_RecoverItemComponent_OnClickItem__, v11);
    sub_1BDB878(&Method_RecoverItemComponent_closeNotificationDlg__, v12);
    sub_1BDB878(&Method_RecoverItemComponent_spendItemDlg__, v13);
    sub_1BDB878(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v14);
    sub_1BDB878(&StringLiteral_11141/*"RP_RECOVER_CONFIRM_MSG"*/, v15);
    sub_1BDB878(&StringLiteral_3560/*"CMDSPELL_CURRENT_NUM"*/, v16);
    sub_1BDB878(&StringLiteral_3712/*"COMMAND_SPELL_TXT"*/, v17);
    sub_1BDB878(&StringLiteral_2053/*"AP_RECOVER_CONFIRM_MSG"*/, v18);
    sub_1BDB878(&StringLiteral_11139/*"RP_FULL_MSG"*/, v19);
    sub_1BDB878(&StringLiteral_14781/*"UNIT_INFO"*/, v20);
    sub_1BDB878(&StringLiteral_2049/*"AP_ADD_CONFIRM_MSG"*/, v21);
    sub_1BDB878(&StringLiteral_3718/*"COMMON_CONFIRM_DECIDE"*/, v22);
    sub_1BDB878(&StringLiteral_3716/*"COMMON_CONFIRM_CANCEL"*/, v23);
    sub_1BDB878(&StringLiteral_2050/*"AP_ADD_CONFIRM_MSG_OVER"*/, v24);
    sub_1BDB878(&StringLiteral_2054/*"AP_RECOVER_CONFIRM_MSG_OVER"*/, v25);
    sub_1BDB878(&StringLiteral_2051/*"AP_FULL_MSG"*/, v26);
    sub_1BDB878(&StringLiteral_1/*""*/, v27);
    sub_1BDB878(&StringLiteral_2059/*"AP_RECOVER_STONEPAY_WARNING_MSG"*/, v28);
    byte_4B3EF59 = 1;
  }
  if ( !this->fields.isEnableSelect )
    return;
  dialog = (UnityEngine_Object_o *)this->fields.dialog;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  userEntity = UnityEngine_Object__op_Inequality(dialog, 0LL, 0LL);
  if ( (userEntity & 1) == 0 )
    return;
  v32 = this->fields.dialog;
  if ( !v32 )
    goto LABEL_140;
  if ( v32->fields.isClosed )
    return;
  v33 = (System_String_o *)StringLiteral_1/*""*/;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v34 = LocalizationManager__Get((System_String_o *)StringLiteral_14781/*"UNIT_INFO"*/, 0LL);
  spendNum = this->fields.spendNum;
  v38 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &spendNum, v35, v36, v37);
  userEntity = (__int64)System_String__Format(v34, v38, 0LL);
  v39 = (System_String_o *)userEntity;
  if ( this->fields.currentType == 1 )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    mText = (Il2CppObject *)LocalizationManager__Get((System_String_o *)StringLiteral_3712/*"COMMAND_SPELL_TXT"*/, 0LL);
    if ( this->fields.currentType == 1 )
    {
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v41 = LocalizationManager__Get((System_String_o *)StringLiteral_3560/*"CMDSPELL_CURRENT_NUM"*/, 0LL);
      spendNum = this->fields.spendNum;
      v45 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &spendNum, v42, v43, v44);
      v39 = System_String__Format(v41, v45, 0LL);
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
  v47 = LocalizationManager__Get((System_String_o *)StringLiteral_3718/*"COMMON_CONFIRM_DECIDE"*/, 0LL);
  v48 = LocalizationManager__Get((System_String_o *)StringLiteral_3716/*"COMMON_CONFIRM_CANCEL"*/, 0LL);
  v49 = Method_RecoverItemComponent_OnClickItem__;
  if ( (*((_BYTE *)Method_RecoverItemComponent_OnClickItem__ + 83) & 2) != 0 )
    v49 = (_QWORD *)sub_1BDB890(Method_RecoverItemComponent_OnClickItem__);
  v50 = (System_Reflection_MethodBase_o *)sub_1BDB85C(v49, v49[4]);
  OverwriteAssetSoundName__PlaySystemSe(v50, 0, 0, 0LL);
  if ( !this->fields.isAp )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v80 = LocalizationManager__Get((System_String_o *)StringLiteral_11141/*"RP_RECOVER_CONFIRM_MSG"*/, 0LL);
    userEntity = sub_1BDB920(object___TypeInfo, 7LL);
    if ( !userEntity )
      goto LABEL_140;
    v81 = (System_Object_array *)userEntity;
    if ( mText )
    {
      userEntity = sub_1BDB9B4(mText, *(_QWORD *)(*(_QWORD *)userEntity + 64LL));
      if ( !userEntity )
        goto LABEL_141;
    }
    if ( v81->max_length )
    {
      v81->m_Items[0] = mText;
      userEntity = sub_1BDB81C(v81->m_Items);
      if ( v39 )
      {
        userEntity = sub_1BDB9B4(v39, v81->obj.klass->_1.element_class);
        if ( !userEntity )
          goto LABEL_141;
      }
      if ( v81->max_length > 1 )
      {
        v81->m_Items[1] = (Il2CppObject *)v39;
        sub_1BDB81C(&v81->m_Items[1]);
        spendNum = this->fields.recvRpNum;
        userEntity = j_il2cpp_value_box_0(int_TypeInfo, &spendNum, v82, v83, v84);
        v85 = (Il2CppObject *)userEntity;
        if ( userEntity )
        {
          userEntity = sub_1BDB9B4(userEntity, v81->obj.klass->_1.element_class);
          if ( !userEntity )
            goto LABEL_141;
        }
        if ( v81->max_length > 2 )
        {
          v81->m_Items[2] = v85;
          sub_1BDB81C(&v81->m_Items[2]);
          usrCurrentRp = this->fields.usrCurrentRp;
          userEntity = j_il2cpp_value_box_0(int_TypeInfo, &usrCurrentRp, v86, v87, v88);
          v89 = (Il2CppObject *)userEntity;
          if ( userEntity )
          {
            userEntity = sub_1BDB9B4(userEntity, v81->obj.klass->_1.element_class);
            if ( !userEntity )
              goto LABEL_141;
          }
          if ( v81->max_length > 3 )
          {
            v81->m_Items[3] = v89;
            sub_1BDB81C(&v81->m_Items[3]);
            usrMaxRp = this->fields.usrMaxRp;
            userEntity = j_il2cpp_value_box_0(int_TypeInfo, &usrMaxRp, v90, v91, v92);
            v93 = (Il2CppObject *)userEntity;
            if ( userEntity )
            {
              userEntity = sub_1BDB9B4(userEntity, v81->obj.klass->_1.element_class);
              if ( !userEntity )
                goto LABEL_141;
            }
            if ( v81->max_length > 4 )
            {
              v81->m_Items[4] = v93;
              sub_1BDB81C(&v81->m_Items[4]);
              recvSum = this->fields.recvSum;
              userEntity = j_il2cpp_value_box_0(int_TypeInfo, &recvSum, v94, v95, v96);
              v97 = (Il2CppObject *)userEntity;
              if ( userEntity )
              {
                userEntity = sub_1BDB9B4(userEntity, v81->obj.klass->_1.element_class);
                if ( !userEntity )
                  goto LABEL_141;
              }
              if ( v81->max_length > 5 )
              {
                v81->m_Items[5] = v97;
                sub_1BDB81C(&v81->m_Items[5]);
                v149 = this->fields.usrMaxRp;
                userEntity = j_il2cpp_value_box_0(int_TypeInfo, &v149, v98, v99, v100);
                v101 = (Il2CppObject *)userEntity;
                if ( userEntity )
                {
                  userEntity = sub_1BDB9B4(userEntity, v81->obj.klass->_1.element_class);
                  if ( !userEntity )
                    goto LABEL_141;
                }
                if ( v81->max_length > 6 )
                {
                  v81->m_Items[6] = v101;
                  sub_1BDB81C(&v81->m_Items[6]);
                  userEntity = (__int64)System_String__Format_62613688(v80, v81, 0LL);
                  if ( !this->fields.userEntity )
                    goto LABEL_140;
                  v102 = (System_String_o *)userEntity;
                  if ( UserGameEntity__getRp(this->fields.userEntity, 0LL) < this->fields.usrMaxRp )
                    goto LABEL_80;
                  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                  v138 = LocalizationManager__Get((System_String_o *)StringLiteral_11139/*"RP_FULL_MSG"*/, 0LL);
                  v139 = System_String__Format(v138, mText, 0LL);
                  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
                  v141 = (System_Action_o *)sub_1BDBAC4(System_Action_TypeInfo);
                  System_Action___ctor(
                    v141,
                    (Il2CppObject *)this,
                    Method_RecoverItemComponent_closeNotificationDlg__,
                    0LL);
                  if ( !Instance )
                    goto LABEL_140;
                  CommonUI__OpenNotificationDialog(
                    (CommonUI_o *)Instance,
                    (System_String_o *)StringLiteral_1/*""*/,
                    v139,
                    v141,
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
                    0,
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
    sub_1BDBADC(userEntity, v31, v56, v57);
  }
  v51 = this->fields.recvSum;
  usrMaxAp = this->fields.usrMaxAp;
  if ( !this->fields.isAddAp )
  {
    if ( v51 <= usrMaxAp )
      v105 = (System_String_o **)&StringLiteral_2053/*"AP_RECOVER_CONFIRM_MSG"*/;
    else
      v105 = (System_String_o **)&StringLiteral_2054/*"AP_RECOVER_CONFIRM_MSG_OVER"*/;
    v106 = *v105;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v55 = LocalizationManager__Get(v106, 0LL);
    userEntity = sub_1BDB920(object___TypeInfo, 8LL);
    if ( !userEntity )
      goto LABEL_140;
    v58 = (System_Object_array *)userEntity;
    if ( mText )
    {
      userEntity = sub_1BDB9B4(mText, *(_QWORD *)(*(_QWORD *)userEntity + 64LL));
      if ( !userEntity )
        goto LABEL_141;
    }
    if ( v58->max_length )
    {
      v58->m_Items[0] = mText;
      userEntity = sub_1BDB81C(v58->m_Items);
      if ( v39 )
      {
        userEntity = sub_1BDB9B4(v39, v58->obj.klass->_1.element_class);
        if ( !userEntity )
          goto LABEL_141;
      }
      if ( v58->max_length > 1 )
      {
        v58->m_Items[1] = (Il2CppObject *)v39;
        sub_1BDB81C(&v58->m_Items[1]);
        spendNum = this->fields.apRcvRate;
        userEntity = j_il2cpp_value_box_0(int_TypeInfo, &spendNum, v107, v108, v109);
        v110 = (Il2CppObject *)userEntity;
        if ( userEntity )
        {
          userEntity = sub_1BDB9B4(userEntity, v58->obj.klass->_1.element_class);
          if ( !userEntity )
            goto LABEL_141;
        }
        if ( v58->max_length > 2 )
        {
          v58->m_Items[2] = v110;
          sub_1BDB81C(&v58->m_Items[2]);
          usrCurrentRp = this->fields.recvApNum;
          userEntity = j_il2cpp_value_box_0(int_TypeInfo, &usrCurrentRp, v111, v112, v113);
          v114 = (Il2CppObject *)userEntity;
          if ( userEntity )
          {
            userEntity = sub_1BDB9B4(userEntity, v58->obj.klass->_1.element_class);
            if ( !userEntity )
              goto LABEL_141;
          }
          if ( v58->max_length > 3 )
          {
            v58->m_Items[3] = v114;
            sub_1BDB81C(&v58->m_Items[3]);
            usrMaxRp = this->fields.usrCurrentAp;
            userEntity = j_il2cpp_value_box_0(int_TypeInfo, &usrMaxRp, v115, v116, v117);
            v118 = (Il2CppObject *)userEntity;
            if ( userEntity )
            {
              userEntity = sub_1BDB9B4(userEntity, v58->obj.klass->_1.element_class);
              if ( !userEntity )
                goto LABEL_141;
            }
            if ( v58->max_length > 4 )
            {
              v58->m_Items[4] = v118;
              sub_1BDB81C(&v58->m_Items[4]);
              recvSum = this->fields.usrMaxAp;
              userEntity = j_il2cpp_value_box_0(int_TypeInfo, &recvSum, v119, v120, v121);
              v122 = (Il2CppObject *)userEntity;
              if ( userEntity )
              {
                userEntity = sub_1BDB9B4(userEntity, v58->obj.klass->_1.element_class);
                if ( !userEntity )
                  goto LABEL_141;
              }
              if ( v58->max_length > 5 )
              {
                v58->m_Items[5] = v122;
                sub_1BDB81C(&v58->m_Items[5]);
                v149 = this->fields.recvSum;
                userEntity = j_il2cpp_value_box_0(int_TypeInfo, &v149, v123, v124, v125);
                v126 = (Il2CppObject *)userEntity;
                if ( userEntity )
                {
                  userEntity = sub_1BDB9B4(userEntity, v58->obj.klass->_1.element_class);
                  if ( !userEntity )
                    goto LABEL_141;
                }
                if ( v58->max_length > 6 )
                {
                  v58->m_Items[6] = v126;
                  sub_1BDB81C(&v58->m_Items[6]);
                  v148 = this->fields.usrMaxAp;
                  userEntity = j_il2cpp_value_box_0(int_TypeInfo, &v148, v127, v128, v129);
                  v130 = (Il2CppObject *)userEntity;
                  if ( userEntity )
                  {
                    userEntity = sub_1BDB9B4(userEntity, v58->obj.klass->_1.element_class);
                    if ( !userEntity )
                      goto LABEL_141;
                  }
                  if ( v58->max_length > 7 )
                  {
                    v58->m_Items[7] = v130;
                    v79 = &v58->m_Items[7];
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
  if ( v51 <= usrMaxAp )
    v53 = (System_String_o **)&StringLiteral_2049/*"AP_ADD_CONFIRM_MSG"*/;
  else
    v53 = (System_String_o **)&StringLiteral_2050/*"AP_ADD_CONFIRM_MSG_OVER"*/;
  v54 = *v53;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v55 = LocalizationManager__Get(v54, 0LL);
  userEntity = sub_1BDB920(object___TypeInfo, 7LL);
  if ( !userEntity )
    goto LABEL_140;
  v58 = (System_Object_array *)userEntity;
  if ( mText )
  {
    userEntity = sub_1BDB9B4(mText, *(_QWORD *)(*(_QWORD *)userEntity + 64LL));
    if ( !userEntity )
      goto LABEL_141;
  }
  if ( !v58->max_length )
    goto LABEL_139;
  v58->m_Items[0] = mText;
  userEntity = sub_1BDB81C(v58->m_Items);
  if ( v39 )
  {
    userEntity = sub_1BDB9B4(v39, v58->obj.klass->_1.element_class);
    if ( !userEntity )
      goto LABEL_141;
  }
  if ( v58->max_length <= 1 )
    goto LABEL_139;
  v58->m_Items[1] = (Il2CppObject *)v39;
  sub_1BDB81C(&v58->m_Items[1]);
  spendNum = this->fields.recvApNum;
  userEntity = j_il2cpp_value_box_0(int_TypeInfo, &spendNum, v59, v60, v61);
  v62 = (Il2CppObject *)userEntity;
  if ( userEntity )
  {
    userEntity = sub_1BDB9B4(userEntity, v58->obj.klass->_1.element_class);
    if ( !userEntity )
      goto LABEL_141;
  }
  if ( v58->max_length <= 2 )
    goto LABEL_139;
  v58->m_Items[2] = v62;
  sub_1BDB81C(&v58->m_Items[2]);
  usrCurrentRp = this->fields.usrCurrentAp;
  userEntity = j_il2cpp_value_box_0(int_TypeInfo, &usrCurrentRp, v63, v64, v65);
  v66 = (Il2CppObject *)userEntity;
  if ( userEntity )
  {
    userEntity = sub_1BDB9B4(userEntity, v58->obj.klass->_1.element_class);
    if ( !userEntity )
      goto LABEL_141;
  }
  if ( v58->max_length <= 3 )
    goto LABEL_139;
  v58->m_Items[3] = v66;
  sub_1BDB81C(&v58->m_Items[3]);
  usrMaxRp = this->fields.usrMaxAp;
  userEntity = j_il2cpp_value_box_0(int_TypeInfo, &usrMaxRp, v67, v68, v69);
  v70 = (Il2CppObject *)userEntity;
  if ( userEntity )
  {
    userEntity = sub_1BDB9B4(userEntity, v58->obj.klass->_1.element_class);
    if ( !userEntity )
      goto LABEL_141;
  }
  if ( v58->max_length <= 4 )
    goto LABEL_139;
  v58->m_Items[4] = v70;
  sub_1BDB81C(&v58->m_Items[4]);
  recvSum = this->fields.recvSum;
  userEntity = j_il2cpp_value_box_0(int_TypeInfo, &recvSum, v71, v72, v73);
  v74 = (Il2CppObject *)userEntity;
  if ( userEntity )
  {
    userEntity = sub_1BDB9B4(userEntity, v58->obj.klass->_1.element_class);
    if ( !userEntity )
      goto LABEL_141;
  }
  if ( v58->max_length <= 5 )
    goto LABEL_139;
  v58->m_Items[5] = v74;
  sub_1BDB81C(&v58->m_Items[5]);
  v149 = this->fields.usrMaxAp;
  userEntity = j_il2cpp_value_box_0(int_TypeInfo, &v149, v75, v76, v77);
  v78 = (Il2CppObject *)userEntity;
  if ( userEntity )
  {
    userEntity = sub_1BDB9B4(userEntity, v58->obj.klass->_1.element_class);
    if ( !userEntity )
    {
LABEL_141:
      v147 = sub_1BDBAF8();
      sub_1BDB9A0(v147, 0LL);
    }
  }
  if ( v58->max_length <= 6 )
    goto LABEL_139;
  v58->m_Items[6] = v78;
  v79 = &v58->m_Items[6];
LABEL_115:
  sub_1BDB81C(v79);
  v102 = System_String__Format_62613688(v55, v58, 0LL);
  userEntity = (__int64)this->fields.userEntity;
  if ( !userEntity )
    goto LABEL_140;
  if ( UserGameEntity__getAct((UserGameEntity_o *)userEntity, 0LL) < this->fields.usrMaxAp )
  {
    if ( this->fields.currentType == 2 )
    {
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v131 = LocalizationManager__Get((System_String_o *)StringLiteral_2059/*"AP_RECOVER_STONEPAY_WARNING_MSG"*/, 0LL);
      v132 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v133 = (CommonConfirmDialog_ClickDelegate_o *)sub_1BDBAC4(CommonConfirmDialog_ClickDelegate_TypeInfo);
      CommonConfirmDialog_ClickDelegate___ctor(
        v133,
        (Il2CppObject *)this,
        Method_RecoverItemComponent_spendItemDlg__,
        0LL);
      userEntity = (__int64)BalanceConfig_TypeInfo;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
        userEntity = j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      if ( v132 )
      {
        CommonUI__OpenConfirmDecideDlgAddMsgFrame(
          (CommonUI_o *)v132,
          v33,
          v102,
          v131,
          v47,
          v48,
          v133,
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
      sub_1BDBAD4(userEntity, v31);
    }
    if ( this->fields.isAddAp || this->fields.apRcvRate != 100 || this->fields.spendNum >= 2 )
    {
      v142 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      targetId = this->fields.targetId;
      needAp = this->fields.needAp;
      v145 = (CommonUI_o *)v142;
      v146 = (System_Action_bool__int__o *)sub_1BDBAC4(System_Action_bool__int__TypeInfo);
      System_Action_bool__int____ctor(v146, (Il2CppObject *)this, Method_RecoverItemComponent_CloseApRecovDlg__, 0LL);
      if ( !v145 )
        goto LABEL_140;
      CommonUI__OpenApRecoverConfirmDlg(v145, targetId, needAp, v146, 0LL);
      return;
    }
LABEL_80:
    v103 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v104 = (CommonConfirmDialog_ClickDelegate_o *)sub_1BDBAC4(CommonConfirmDialog_ClickDelegate_TypeInfo);
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
      CommonUI__OpenConfirmDecideDlg(
        (CommonUI_o *)v103,
        v33,
        v102,
        v47,
        v48,
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
        0,
        0LL);
      return;
    }
    goto LABEL_140;
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v134 = LocalizationManager__Get((System_String_o *)StringLiteral_2051/*"AP_FULL_MSG"*/, 0LL);
  v135 = System_String__Format(v134, mText, 0LL);
  v136 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v137 = (System_Action_o *)sub_1BDBAC4(System_Action_TypeInfo);
  System_Action___ctor(v137, (Il2CppObject *)this, Method_RecoverItemComponent_closeNotificationDlg__, 0LL);
  if ( !v136 )
    goto LABEL_140;
  CommonUI__OpenNotificationDialog(
    (CommonUI_o *)v136,
    (System_String_o *)StringLiteral_1/*""*/,
    v135,
    v137,
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
    0,
    0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall RecoverItemComponent___AttachStoneCountRefreshComponent_b__38_0(
        RecoverItemComponent_o *this,
        int32_t stoneCount,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v7; // x1
  UILabel_o *currentNumLb; // x19
  Il2CppObject *v9; // x0
  System_String_o *v10; // x0
  __int64 v11; // x1
  int32_t v12; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4B3EF5F & 1) == 0 )
  {
    sub_1BDB878(&int_TypeInfo, *(_QWORD *)&stoneCount);
    sub_1BDB878(&StringLiteral_25166/*"{0:N0}"*/, v7);
    byte_4B3EF5F = 1;
  }
  currentNumLb = this->fields.currentNumLb;
  v12 = stoneCount;
  v9 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v12, method, v3, v4);
  v10 = System_String__Format((System_String_o *)StringLiteral_25166/*"{0:N0}"*/, v9, 0LL);
  if ( !currentNumLb )
    sub_1BDBAD4(v10, v11);
  UILabel__set_text(currentNumLb, v10, 0LL);
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

  if ( (byte_4B3EF54 & 1) == 0 )
  {
    sub_1BDB878(&RecoverItemComponent_CallbackFunc_TypeInfo, value);
    byte_4B3EF54 = 1;
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
    v9 = sub_1C15B34(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (RecoverItemComponent_o *)sub_1BDBD94(v8);
  RecoverItemComponent__remove_callbackFunc(v11, v12, v13);
}


void __fastcall RecoverItemComponent__closeNotificationDlg(RecoverItemComponent_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v3; // x1

  if ( (byte_4B3EF5D & 1) == 0 )
  {
    sub_1BDB878(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, method);
    byte_4B3EF5D = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1BDBAD4(0LL, v3);
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

  if ( (byte_4B3EF55 & 1) == 0 )
  {
    sub_1BDB878(&RecoverItemComponent_CallbackFunc_TypeInfo, value);
    byte_4B3EF55 = 1;
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
    v9 = sub_1C15B34(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (RecoverItemComponent_o *)sub_1BDBD94(v8);
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
  __int64 v30; // x1
  int32_t targetId; // w8
  RecoverItemComponent_o **p_userEntity; // x23
  struct UserGameEntity_o *userEntity; // x8
  int32_t actMax; // w8
  unsigned int *p_spendNum; // x20
  UILabel_o *currentInfoLb; // x24
  UILabel_o *spendInfoLb; // x24
  int32_t currentType; // w8
  RecoverItemComponent_o *v39; // x21
  RecoverItemComponent_o *v40; // x22
  __int64 v41; // x2
  __int64 v42; // x3
  __int64 v43; // x4
  int v44; // w8
  UILabel_o *v45; // x21
  Il2CppObject *v46; // x0
  UILabel_o *v47; // x21
  const MethodInfo *v48; // x1
  System_String_o *v49; // x20
  __int64 v50; // x2
  __int64 v51; // x3
  __int64 v52; // x4
  Il2CppObject *v53; // x0
  System_String_o *v54; // x0
  UILabel_o *v55; // x20
  Il2CppObject *v56; // x21
  System_String_o *v57; // x22
  __int64 v58; // x2
  __int64 v59; // x3
  __int64 v60; // x4
  Il2CppObject *v61; // x24
  __int64 v62; // x2
  __int64 v63; // x3
  __int64 v64; // x4
  Il2CppObject *v65; // x0
  bool v66; // cc
  int v67; // w8
  UILabel_o *v68; // x22
  UILabel_o *v69; // x22
  Il2CppObject *v70; // x0
  CommandSpellEntity_o *v71; // x22
  __int64 v72; // x2
  __int64 v73; // x3
  int32_t type; // w8
  struct ItemIconComponent_o *itemIconInfo; // x27
  float v76; // s0
  int v77; // w8
  float usrMaxAp; // s8
  float v79; // s9
  float v80; // s8
  unsigned int v81; // w9
  unsigned int v82; // w8
  System_String_o *v83; // x23
  __int64 v84; // x2
  __int64 v85; // x3
  __int64 v86; // x4
  Il2CppObject *v87; // x0
  System_String_o *v88; // x0
  UILabel_o *itemDetailLb; // x23
  Il2CppObject *v90; // x24
  System_String_o *v91; // x25
  __int64 v92; // x2
  __int64 v93; // x3
  __int64 v94; // x4
  Il2CppObject *v95; // x26
  __int64 v96; // x2
  __int64 v97; // x3
  __int64 v98; // x4
  Il2CppObject *v99; // x0
  int backSprite; // w22
  float v101; // s8
  float v102; // s8
  unsigned int v103; // w9
  unsigned int v104; // w8
  ItemEntity_o *RecvItemData; // x0
  ItemEntity_o *v106; // x24
  __int64 v107; // x2
  __int64 v108; // x3
  __int64 v109; // x4
  int32_t num; // w28
  int32_t v111; // w8
  BalanceConfig_c *v112; // x0
  float v113; // s8
  int v114; // w8
  int v115; // s0
  float v116; // s9
  float v117; // s8
  int v118; // w8
  float v119; // s8
  float v120; // s8
  int32_t v121; // w11
  int32_t v122; // w12
  unsigned int v123; // w8
  System_String_o *v124; // x23
  __int64 v125; // x2
  __int64 v126; // x3
  __int64 v127; // x4
  Il2CppObject *v128; // x0
  System_String_o *v129; // x0
  UILabel_o *v130; // x23
  Il2CppObject *v131; // x25
  System_String_o *v132; // x26
  __int64 v133; // x2
  __int64 v134; // x3
  __int64 v135; // x4
  Il2CppObject *v136; // x27
  __int64 v137; // x2
  __int64 v138; // x3
  __int64 v139; // x4
  Il2CppObject *v140; // x0
  int value; // w23
  float v142; // s8
  float v143; // s8
  unsigned int v144; // w8
  System_String_o *v145; // x21
  __int64 v146; // x2
  __int64 v147; // x3
  __int64 v148; // x4
  Il2CppObject *v149; // x0
  System_String_o *v150; // x0
  UILabel_o *v151; // x21
  Il2CppObject *v152; // x23
  System_String_o *v153; // x24
  __int64 v154; // x2
  __int64 v155; // x3
  __int64 v156; // x4
  Il2CppObject *v157; // x0
  UILabel_o *v158; // x21
  Il2CppObject *v159; // x0
  UILabel_o *v160; // x21
  int v161; // w8
  System_String_o *v162; // x21
  __int64 v163; // x2
  __int64 v164; // x3
  __int64 v165; // x4
  Il2CppObject *v166; // x0
  System_String_o *v167; // x0
  UILabel_o *v168; // x21
  Il2CppObject *v169; // x22
  System_String_o *v170; // x23
  __int64 v171; // x2
  __int64 v172; // x3
  __int64 v173; // x4
  Il2CppObject *v174; // x0
  UILabel_o *currentNumLb; // x21
  UILabel_o *spendNumLb; // x21
  char v177; // w9
  int32_t v178; // [xsp+4h] [xbp-8Ch] BYREF
  int32_t recvApNum; // [xsp+8h] [xbp-88h] BYREF
  int32_t apRcvRate; // [xsp+Ch] [xbp-84h] BYREF
  int32_t spendNum; // [xsp+10h] [xbp-80h] BYREF
  int32_t CommandSpell; // [xsp+14h] [xbp-7Ch] BYREF
  UserItemEntity_o *entity; // [xsp+18h] [xbp-78h] BYREF

  v10 = this;
  if ( (byte_4B3EF56 & 1) == 0 )
  {
    sub_1BDB878(&BalanceConfig_TypeInfo, data);
    sub_1BDB878(&Method_DataManager_GetMasterData_CommandSpellMaster___, v11);
    sub_1BDB878(&Method_DataManager_GetMasterData_ItemMaster___, v12);
    sub_1BDB878(&Method_DataManager_GetMasterData_StoneShopMaster___, v13);
    sub_1BDB878(&Method_DataManager_GetMasterData_UserItemMaster___, v14);
    sub_1BDB878(&Method_DataMasterBase_CommandSpellMaster__CommandSpellEntity__int__GetEntity__, v15);
    sub_1BDB878(&Method_DataMasterBase_StoneShopMaster__StoneShopEntity__int__GetEntity__, v16);
    sub_1BDB878(&int_TypeInfo, v17);
    sub_1BDB878(&LocalizationManager_TypeInfo, v18);
    sub_1BDB878(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v19);
    sub_1BDB878(&StringLiteral_3560/*"CMDSPELL_CURRENT_NUM"*/, v20);
    sub_1BDB878(&StringLiteral_1942/*"ADD_RECOVER_CMDSPELL_TXT"*/, v21);
    sub_1BDB878(&StringLiteral_3562/*"CMDSPELL_SPEND_NUM_TXT"*/, v22);
    sub_1BDB878(&StringLiteral_25166/*"{0:N0}"*/, v23);
    sub_1BDB878(&StringLiteral_871/*"-"*/, v24);
    sub_1BDB878(&StringLiteral_14781/*"UNIT_INFO"*/, v25);
    sub_1BDB878(&StringLiteral_12244/*"SPEND_NUM_TXT"*/, v26);
    sub_1BDB878(&StringLiteral_3965/*"CURRENT_NUM_TXT"*/, v27);
    sub_1BDB878(&StringLiteral_1943/*"ADD_RECOVER_NUM_TXT"*/, v28);
    sub_1BDB878(&StringLiteral_2056/*"AP_RECOVER_NUM_TXT"*/, v29);
    this = (RecoverItemComponent_o *)sub_1BDB878(&StringLiteral_3561/*"CMDSPELL_CURRENT_NUM_TXT"*/, v30);
    byte_4B3EF56 = 1;
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
  sub_1BDB81C(&v10->fields.dialog);
  v10->fields.callbackFunc = callback;
  v10->fields.needAp = needAp;
  *(_WORD *)&v10->fields.isAp = 1;
  sub_1BDB81C(&v10->fields.callbackFunc);
  this = (RecoverItemComponent_o *)v10->fields.maskImg;
  if ( !this )
    goto LABEL_152;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
  v10->fields.userEntity = UserGameMaster__getSelfUserGame(0LL);
  p_userEntity = (RecoverItemComponent_o **)&v10->fields.userEntity;
  sub_1BDB81C(&v10->fields.userEntity);
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
  UILabel__set_text((UILabel_o *)this, (System_String_o *)StringLiteral_871/*"-"*/, 0LL);
  this = (RecoverItemComponent_o *)v10->fields.currentNumLb;
  if ( !this )
    goto LABEL_152;
  UILabel__set_text((UILabel_o *)this, (System_String_o *)StringLiteral_871/*"-"*/, 0LL);
  this = (RecoverItemComponent_o *)v10->fields.spendNumLb;
  if ( !this )
    goto LABEL_152;
  UILabel__set_text((UILabel_o *)this, (System_String_o *)StringLiteral_871/*"-"*/, 0LL);
  this = (RecoverItemComponent_o *)v10->fields.itemDetailLb;
  if ( !this )
    goto LABEL_152;
  UILabel__set_text((UILabel_o *)this, (System_String_o *)StringLiteral_871/*"-"*/, 0LL);
  currentInfoLb = v10->fields.currentInfoLb;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  this = (RecoverItemComponent_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3965/*"CURRENT_NUM_TXT"*/, 0LL);
  if ( !currentInfoLb )
    goto LABEL_152;
  UILabel__set_text(currentInfoLb, (System_String_o *)this, 0LL);
  spendInfoLb = v10->fields.spendInfoLb;
  this = (RecoverItemComponent_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12244/*"SPEND_NUM_TXT"*/, 0LL);
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
    v68 = v10->fields.currentInfoLb;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    this = (RecoverItemComponent_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3561/*"CMDSPELL_CURRENT_NUM_TXT"*/, 0LL);
    if ( !v68 )
      goto LABEL_152;
    UILabel__set_text(v68, (System_String_o *)this, 0LL);
    v69 = v10->fields.spendInfoLb;
    this = (RecoverItemComponent_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3562/*"CMDSPELL_SPEND_NUM_TXT"*/, 0LL);
    if ( !v69 )
      goto LABEL_152;
    UILabel__set_text(v69, (System_String_o *)this, 0LL);
    this = (RecoverItemComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !this )
      goto LABEL_152;
    this = (RecoverItemComponent_o *)DataManager__GetMasterData_object_(
                                       (DataManager_o *)this,
                                       (const MethodInfo_303395C *)Method_DataManager_GetMasterData_CommandSpellMaster___);
    if ( !this )
      goto LABEL_152;
    v70 = DataMasterBase_object__object__int___GetEntity(
            (DataMasterBase_TMaster__TEntity__PKType__o *)this,
            v10->fields.targetId,
            (const MethodInfo_32E1E3C *)Method_DataMasterBase_CommandSpellMaster__CommandSpellEntity__int__GetEntity__);
    if ( !v70 )
      goto LABEL_151;
    v71 = (CommandSpellEntity_o *)v70;
    this = (RecoverItemComponent_o *)v10->fields.cmdSpellIcon;
    if ( !this )
      goto LABEL_152;
    CommandSpellIconComponent__SetData((CommandSpellIconComponent_o *)this, v10->fields.userEntity, 0LL);
    this = (RecoverItemComponent_o *)v10->fields.itemNameLb;
    if ( !this )
      goto LABEL_152;
    UILabel__set_text((UILabel_o *)this, v71->fields.name, 0LL);
    this = *p_userEntity;
    if ( !*p_userEntity )
      goto LABEL_152;
    CommandSpell = UserGameEntity__getCommandSpell((UserGameEntity_o *)this, 0LL);
    *p_spendNum = v71->fields.consume;
    this = (RecoverItemComponent_o *)CommandSpellEntity__getValues(v71, 0LL);
    if ( !this )
      goto LABEL_152;
    if ( LODWORD(this->fields.m_CancellationTokenSource) )
    {
      type = v71->fields.type;
      itemIconInfo = this->fields.itemIconInfo;
      if ( type == 3 )
      {
        if ( !itemIconInfo )
          goto LABEL_152;
        if ( !LODWORD(itemIconInfo->fields.m_CancellationTokenSource) )
          goto LABEL_153;
        v76 = (float)((float)SLODWORD(itemIconInfo->fields.backSprite) / 1000.0) * 100.0;
        v77 = (int)v76;
        if ( v76 == INFINITY )
          v77 = 0x80000000;
        v10->fields.apRcvRate = v77;
        usrMaxAp = (float)v10->fields.usrMaxAp;
        v79 = (float)SLODWORD(itemIconInfo->fields.backSprite) / 1000.0;
        if ( !byte_4B3EFD1 )
        {
          sub_1BDB878(&System_Math_TypeInfo, data);
          byte_4B3EFD1 = 1;
        }
        v80 = v79 * usrMaxAp;
        if ( !System_Math_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
        v81 = vcvtps_s32_f32(v80);
        if ( ceilf(v80) == INFINITY )
          v82 = 0x80000000;
        else
          v82 = v81;
        v10->fields.recvApNum = v82;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v83 = LocalizationManager__Get((System_String_o *)StringLiteral_3560/*"CMDSPELL_CURRENT_NUM"*/, 0LL);
        spendNum = v10->fields.spendNum;
        v87 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &spendNum, v84, v85, v86);
        v88 = System_String__Format(v83, v87, 0LL);
        itemDetailLb = v10->fields.itemDetailLb;
        v90 = (Il2CppObject *)v88;
        v91 = LocalizationManager__Get((System_String_o *)StringLiteral_2056/*"AP_RECOVER_NUM_TXT"*/, 0LL);
        apRcvRate = v10->fields.apRcvRate;
        v95 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &apRcvRate, v92, v93, v94);
        recvApNum = v10->fields.recvApNum;
        v99 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &recvApNum, v96, v97, v98);
        this = (RecoverItemComponent_o *)System_String__Format_62613620(v91, v90, v95, v99, 0LL);
        if ( !itemDetailLb )
          goto LABEL_152;
        UILabel__set_text(itemDetailLb, (System_String_o *)this, 0LL);
        type = v71->fields.type;
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
            v66 = CommandSpell < v10->fields.spendNum;
            v67 = v10->fields.recvApNum + v10->fields.usrCurrentAp;
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
          v104 = *p_spendNum;
        }
        else
        {
          v101 = (float)(needAp - v10->fields.usrCurrentAp) / (float)backSprite;
          if ( !byte_4B3EFD1 )
          {
            sub_1BDB878(&System_Math_TypeInfo, data);
            byte_4B3EFD1 = 1;
          }
          v102 = fmaxf(v101, 1.0);
          if ( !System_Math_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
          v103 = vcvtps_s32_f32(v102);
          if ( ceilf(v102) == INFINITY )
            v104 = 0x80000000;
          else
            v104 = v103;
          *p_spendNum = v104;
        }
        v10->fields.recvApNum = v104 * backSprite;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v162 = LocalizationManager__Get((System_String_o *)StringLiteral_3560/*"CMDSPELL_CURRENT_NUM"*/, 0LL);
        spendNum = v10->fields.spendNum;
        v166 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &spendNum, v163, v164, v165);
        v167 = System_String__Format(v162, v166, 0LL);
        v168 = v10->fields.itemDetailLb;
        v169 = (Il2CppObject *)v167;
        v170 = LocalizationManager__Get((System_String_o *)StringLiteral_1942/*"ADD_RECOVER_CMDSPELL_TXT"*/, 0LL);
        apRcvRate = v10->fields.recvApNum;
        v174 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &apRcvRate, v171, v172, v173);
        this = (RecoverItemComponent_o *)System_String__Format_62613552(v170, v169, v174, 0LL);
        if ( !v168 )
          goto LABEL_152;
        UILabel__set_text(v168, (System_String_o *)this, 0LL);
        v10->fields.isAddAp = 1;
        goto LABEL_144;
      }
    }
LABEL_153:
    sub_1BDBADC(this, data, v72, v73);
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
          v106 = RecvItemData;
          this = (RecoverItemComponent_o *)v10->fields.itemIconInfo;
          if ( this )
          {
            ItemIconComponent__SetItemImage_39932756(
              (ItemIconComponent_o *)this,
              v106->fields.imageId,
              v106->fields.bgImageId,
              v106->fields.type,
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
                  UILabel__set_text((UILabel_o *)this, v106->fields.name, 0LL);
                  *p_spendNum = 1;
                  this = (RecoverItemComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
                  if ( this )
                  {
                    this = (RecoverItemComponent_o *)DataManager__GetMasterData_object_(
                                                       (DataManager_o *)this,
                                                       (const MethodInfo_303395C *)Method_DataManager_GetMasterData_UserItemMaster___);
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
                        v111 = v106->fields.type;
                        if ( v111 == 3 )
                        {
                          v112 = BalanceConfig_TypeInfo;
                          if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
                          {
                            j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
                            v112 = BalanceConfig_TypeInfo;
                          }
                          v10->fields.spendNum = v112->static_fields->SpendApRecvItemNum;
                          v113 = (float)v106->fields.value / 1000.0;
                          if ( (float)(v113 * 100.0) == INFINITY )
                            v114 = 0x80000000;
                          else
                            v114 = (int)(float)(v113 * 100.0);
                          v115 = v10->fields.usrMaxAp;
                          v10->fields.apRcvRate = v114;
                          v116 = (float)v115;
                          if ( !byte_4B3EFD1 )
                          {
                            sub_1BDB878(&System_Math_TypeInfo, data);
                            byte_4B3EFD1 = 1;
                          }
                          v117 = v113 * v116;
                          if ( !System_Math_TypeInfo->_2.cctor_finished )
                            j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
                          v118 = vcvtps_s32_f32(v117);
                          if ( ceilf(v117) == INFINITY )
                            v118 = 0x80000000;
                          v10->fields.recvApNum = v118;
                          if ( needAp >= 1 )
                          {
                            v119 = (float)(needAp - v10->fields.usrCurrentAp) / (float)v118;
                            if ( !byte_4B3EFD1 )
                            {
                              sub_1BDB878(&System_Math_TypeInfo, data);
                              byte_4B3EFD1 = 1;
                            }
                            v120 = fmaxf(v119, 1.0);
                            if ( !System_Math_TypeInfo->_2.cctor_finished )
                              j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
                            v121 = v10->fields.apRcvRate;
                            v122 = v10->fields.recvApNum;
                            v123 = vcvtps_s32_f32(v120);
                            if ( ceilf(v120) == INFINITY )
                              v123 = 0x80000000;
                            v10->fields.spendNum = v123;
                            v10->fields.apRcvRate = v121 * v123;
                            v10->fields.recvApNum = v122 * v123;
                          }
                          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                          v124 = LocalizationManager__Get((System_String_o *)StringLiteral_14781/*"UNIT_INFO"*/, 0LL);
                          spendNum = v10->fields.spendNum;
                          v128 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &spendNum, v125, v126, v127);
                          v129 = System_String__Format(v124, v128, 0LL);
                          v130 = v10->fields.itemDetailLb;
                          v131 = (Il2CppObject *)v129;
                          v132 = LocalizationManager__Get((System_String_o *)StringLiteral_2056/*"AP_RECOVER_NUM_TXT"*/, 0LL);
                          apRcvRate = v10->fields.apRcvRate;
                          v136 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &apRcvRate, v133, v134, v135);
                          recvApNum = v10->fields.recvApNum;
                          v140 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &recvApNum, v137, v138, v139);
                          this = (RecoverItemComponent_o *)System_String__Format_62613620(v132, v131, v136, v140, 0LL);
                          if ( !v130 )
                            goto LABEL_152;
                          UILabel__set_text(v130, (System_String_o *)this, 0LL);
                          v111 = v106->fields.type;
                        }
                        if ( v111 == 4 )
                        {
                          value = v106->fields.value;
                          if ( needAp < 1 )
                          {
                            *p_spendNum = 1;
                          }
                          else
                          {
                            v142 = (float)(needAp - v10->fields.usrCurrentAp) / (float)value;
                            if ( !byte_4B3EFD1 )
                            {
                              sub_1BDB878(&System_Math_TypeInfo, data);
                              byte_4B3EFD1 = 1;
                            }
                            v143 = fmaxf(v142, 1.0);
                            if ( !System_Math_TypeInfo->_2.cctor_finished )
                              j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
                            v144 = vcvtps_s32_f32(v143);
                            if ( ceilf(v143) == INFINITY )
                              v144 = 0x80000000;
                            *p_spendNum = v144;
                            value *= v144;
                          }
                          v10->fields.recvApNum = value;
                          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                          v145 = LocalizationManager__Get((System_String_o *)StringLiteral_14781/*"UNIT_INFO"*/, 0LL);
                          spendNum = v10->fields.spendNum;
                          v149 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &spendNum, v146, v147, v148);
                          v150 = System_String__Format(v145, v149, 0LL);
                          v151 = v10->fields.itemDetailLb;
                          v152 = (Il2CppObject *)v150;
                          v153 = LocalizationManager__Get((System_String_o *)StringLiteral_1943/*"ADD_RECOVER_NUM_TXT"*/, 0LL);
                          apRcvRate = v10->fields.recvApNum;
                          v157 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &apRcvRate, v154, v155, v156);
                          this = (RecoverItemComponent_o *)System_String__Format_62613552(v153, v152, v157, 0LL);
                          if ( !v151 )
                            goto LABEL_152;
                          UILabel__set_text(v151, (System_String_o *)this, 0LL);
                          v10->fields.isAddAp = 1;
                        }
                        v158 = v10->fields.currentNumLb;
                        spendNum = num;
                        v159 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &spendNum, v107, v108, v109);
                        this = (RecoverItemComponent_o *)System_String__Format(
                                                           (System_String_o *)StringLiteral_25166/*"{0:N0}"*/,
                                                           v159,
                                                           0LL);
                        if ( v158 )
                        {
                          UILabel__set_text(v158, (System_String_o *)this, 0LL);
                          v160 = v10->fields.spendNumLb;
                          this = (RecoverItemComponent_o *)System_Int32__ToString((int)v10 + 128, 0LL);
                          if ( v160 )
                          {
                            UILabel__set_text(v160, (System_String_o *)this, 0LL);
                            v161 = v10->fields.recvApNum + v10->fields.usrCurrentAp;
                            v10->fields.isEnableSelect = num >= v10->fields.spendNum;
                            v10->fields.recvSum = v161;
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
    sub_1BDBAD4(this, data);
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
  this = (RecoverItemComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_152;
  this = (RecoverItemComponent_o *)DataManager__GetMasterData_object_(
                                     (DataManager_o *)this,
                                     (const MethodInfo_303395C *)Method_DataManager_GetMasterData_ItemMaster___);
  if ( !this )
    goto LABEL_152;
  this = (RecoverItemComponent_o *)ItemMaster__GetEntityByType((ItemMaster_o *)this, 2, 0LL);
  if ( !this )
    goto LABEL_152;
  v39 = this;
  this = (RecoverItemComponent_o *)v10->fields.itemIconInfo;
  if ( !this )
    goto LABEL_152;
  ItemIconComponent__SetItemImage_39932756(
    (ItemIconComponent_o *)this,
    (int32_t)v39->fields.cmdSpellBg,
    HIDWORD(v39->fields.cmdSpellBg),
    (int32_t)v39->fields.cmdSpellIcon,
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
  this = (RecoverItemComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_152;
  this = (RecoverItemComponent_o *)DataManager__GetMasterData_object_(
                                     (DataManager_o *)this,
                                     (const MethodInfo_303395C *)Method_DataManager_GetMasterData_StoneShopMaster___);
  if ( !this )
    goto LABEL_152;
  this = (RecoverItemComponent_o *)DataMasterBase_object__object__int___GetEntity(
                                     (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                     v10->fields.targetId,
                                     (const MethodInfo_32E1E3C *)Method_DataMasterBase_StoneShopMaster__StoneShopEntity__int__GetEntity__);
  if ( !v10->fields.itemNameLb )
    goto LABEL_152;
  v40 = this;
  UILabel__set_text(v10->fields.itemNameLb, (System_String_o *)v39->fields.m_CancellationTokenSource, 0LL);
  if ( !*p_userEntity )
    goto LABEL_152;
  v44 = (int)(*p_userEntity)->fields.userEntity;
  if ( v40 )
    *p_spendNum = HIDWORD(v40->fields.cmdSpellBg);
  v45 = v10->fields.currentNumLb;
  spendNum = v44;
  v46 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &spendNum, v41, v42, v43);
  this = (RecoverItemComponent_o *)System_String__Format((System_String_o *)StringLiteral_25166/*"{0:N0}"*/, v46, 0LL);
  if ( !v45 )
    goto LABEL_152;
  UILabel__set_text(v45, (System_String_o *)this, 0LL);
  v47 = v10->fields.spendNumLb;
  this = (RecoverItemComponent_o *)System_Int32__ToString((int)v10 + 128, 0LL);
  if ( !v47 )
    goto LABEL_152;
  UILabel__set_text(v47, (System_String_o *)this, 0LL);
  RecoverItemComponent__AttachStoneCountRefreshComponent(v10, v48);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v49 = LocalizationManager__Get((System_String_o *)StringLiteral_14781/*"UNIT_INFO"*/, 0LL);
  apRcvRate = v10->fields.spendNum;
  v53 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &apRcvRate, v50, v51, v52);
  v54 = System_String__Format(v49, v53, 0LL);
  v55 = v10->fields.itemDetailLb;
  v56 = (Il2CppObject *)v54;
  v57 = LocalizationManager__Get((System_String_o *)StringLiteral_2056/*"AP_RECOVER_NUM_TXT"*/, 0LL);
  recvApNum = v10->fields.apRcvRate;
  v61 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &recvApNum, v58, v59, v60);
  v178 = v10->fields.recvApNum;
  v65 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v178, v62, v63, v64);
  this = (RecoverItemComponent_o *)System_String__Format_62613620(v57, v56, v61, v65, 0LL);
  if ( !v55 )
    goto LABEL_152;
  UILabel__set_text(v55, (System_String_o *)this, 0LL);
  this = *p_userEntity;
  if ( !*p_userEntity )
    goto LABEL_152;
  v66 = UserGameEntity__get_PayableStoneNum((UserGameEntity_o *)this, 0LL) < v10->fields.spendNum;
  v67 = v10->fields.usrMaxAp + v10->fields.usrCurrentAp;
LABEL_147:
  v177 = !v66;
  v10->fields.isEnableSelect = v177;
  v10->fields.recvSum = v67;
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
      sub_1BDBAD4(0LL, method);
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
  int32_t targetId; // w8
  RecoverItemComponent_o **p_userEntity; // x21
  BalanceConfig_c *v32; // x0
  int32_t UerGameRpMax; // w8
  unsigned int *p_spendNum; // x20
  UILabel_o *currentInfoLb; // x24
  UILabel_o *spendInfoLb; // x24
  int32_t currentType; // w8
  RecoverItemComponent_o *v38; // x22
  RecoverItemComponent_o *v39; // x23
  __int64 v40; // x2
  __int64 v41; // x3
  __int64 v42; // x4
  int userEntity; // w8
  UILabel_o *v44; // x22
  Il2CppObject *v45; // x0
  UILabel_o *v46; // x22
  const MethodInfo *v47; // x1
  System_String_o *v48; // x20
  __int64 v49; // x2
  __int64 v50; // x3
  __int64 v51; // x4
  Il2CppObject *v52; // x0
  System_String_o *v53; // x0
  UILabel_o *v54; // x20
  Il2CppObject *v55; // x22
  System_String_o *v56; // x23
  __int64 v57; // x2
  __int64 v58; // x3
  __int64 v59; // x4
  Il2CppObject *v60; // x0
  bool v61; // cc
  int v62; // w8
  UILabel_o *v63; // x23
  UILabel_o *v64; // x23
  Il2CppObject *v65; // x0
  CommandSpellEntity_o *v66; // x23
  __int64 v67; // x2
  __int64 v68; // x3
  struct ItemIconComponent_o *itemIconInfo; // x8
  int backSprite; // w21
  float v71; // s8
  float v72; // s8
  unsigned int v73; // w9
  unsigned int v74; // w8
  ItemEntity_o *RecvItemData; // x0
  ItemEntity_o *v76; // x24
  __int64 v77; // x1
  int32_t v78; // w26
  int value; // w21
  float v80; // s8
  float v81; // s8
  unsigned int v82; // w8
  System_String_o *v83; // x21
  __int64 v84; // x2
  __int64 v85; // x3
  __int64 v86; // x4
  Il2CppObject *v87; // x0
  System_String_o *v88; // x0
  UILabel_o *v89; // x21
  Il2CppObject *v90; // x22
  System_String_o *v91; // x24
  __int64 v92; // x2
  __int64 v93; // x3
  __int64 v94; // x4
  Il2CppObject *v95; // x0
  UILabel_o *v96; // x21
  __int64 v97; // x2
  __int64 v98; // x3
  __int64 v99; // x4
  Il2CppObject *v100; // x0
  UILabel_o *v101; // x21
  int v102; // w8
  System_String_o *v103; // x21
  __int64 v104; // x2
  __int64 v105; // x3
  __int64 v106; // x4
  Il2CppObject *v107; // x0
  System_String_o *v108; // x0
  UILabel_o *itemDetailLb; // x21
  Il2CppObject *v110; // x22
  System_String_o *v111; // x23
  __int64 v112; // x2
  __int64 v113; // x3
  __int64 v114; // x4
  Il2CppObject *v115; // x0
  UILabel_o *currentNumLb; // x21
  UILabel_o *spendNumLb; // x21
  char v118; // w9
  int32_t v119; // [xsp+0h] [xbp-70h] BYREF
  int32_t recvRpNum; // [xsp+4h] [xbp-6Ch] BYREF
  int32_t spendNum; // [xsp+8h] [xbp-68h] BYREF
  int32_t CommandSpell; // [xsp+Ch] [xbp-64h] BYREF
  UserItemEntity_o *entity; // [xsp+28h] [xbp-48h] BYREF

  v10 = this;
  if ( (byte_4B3EF57 & 1) == 0 )
  {
    sub_1BDB878(&BalanceConfig_TypeInfo, data);
    sub_1BDB878(&Method_DataManager_GetMasterData_CommandSpellMaster___, v11);
    sub_1BDB878(&Method_DataManager_GetMasterData_ItemMaster___, v12);
    sub_1BDB878(&Method_DataManager_GetMasterData_StoneShopMaster___, v13);
    sub_1BDB878(&Method_DataManager_GetMasterData_UserItemMaster___, v14);
    sub_1BDB878(&Method_DataMasterBase_CommandSpellMaster__CommandSpellEntity__int__GetEntity__, v15);
    sub_1BDB878(&Method_DataMasterBase_StoneShopMaster__StoneShopEntity__int__GetEntity__, v16);
    sub_1BDB878(&int_TypeInfo, v17);
    sub_1BDB878(&LocalizationManager_TypeInfo, v18);
    sub_1BDB878(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v19);
    sub_1BDB878(&StringLiteral_3560/*"CMDSPELL_CURRENT_NUM"*/, v20);
    sub_1BDB878(&StringLiteral_3562/*"CMDSPELL_SPEND_NUM_TXT"*/, v21);
    sub_1BDB878(&StringLiteral_25166/*"{0:N0}"*/, v22);
    sub_1BDB878(&StringLiteral_871/*"-"*/, v23);
    sub_1BDB878(&StringLiteral_14781/*"UNIT_INFO"*/, v24);
    sub_1BDB878(&StringLiteral_12244/*"SPEND_NUM_TXT"*/, v25);
    sub_1BDB878(&StringLiteral_3965/*"CURRENT_NUM_TXT"*/, v26);
    sub_1BDB878(&StringLiteral_11140/*"RP_RECOVER_CMDSPELL_TXT"*/, v27);
    sub_1BDB878(&StringLiteral_11142/*"RP_RECOVER_NUM_TXT"*/, v28);
    this = (RecoverItemComponent_o *)sub_1BDB878(&StringLiteral_3561/*"CMDSPELL_CURRENT_NUM_TXT"*/, v29);
    byte_4B3EF57 = 1;
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
  sub_1BDB81C(&v10->fields.dialog);
  v10->fields.callbackFunc = callback;
  sub_1BDB81C(&v10->fields.callbackFunc);
  this = (RecoverItemComponent_o *)v10->fields.maskImg;
  if ( !this )
    goto LABEL_108;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
  v10->fields.userEntity = UserGameMaster__getSelfUserGame(0LL);
  p_userEntity = (RecoverItemComponent_o **)&v10->fields.userEntity;
  sub_1BDB81C(&v10->fields.userEntity);
  this = (RecoverItemComponent_o *)v10->fields.userEntity;
  if ( !this )
    goto LABEL_108;
  v10->fields.usrCurrentRp = UserGameEntity__getRp((UserGameEntity_o *)this, 0LL);
  v32 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v32 = BalanceConfig_TypeInfo;
  }
  UerGameRpMax = v32->static_fields->UerGameRpMax;
  v10->fields.spendNum = 1;
  p_spendNum = (unsigned int *)&v10->fields.spendNum;
  this = (RecoverItemComponent_o *)v10->fields.itemNameLb;
  v10->fields.isAp = 0;
  v10->fields.usrMaxRp = UerGameRpMax;
  v10->fields.recvRpNum = UerGameRpMax;
  if ( !this )
    goto LABEL_108;
  UILabel__set_text((UILabel_o *)this, (System_String_o *)StringLiteral_871/*"-"*/, 0LL);
  this = (RecoverItemComponent_o *)v10->fields.currentNumLb;
  if ( !this )
    goto LABEL_108;
  UILabel__set_text((UILabel_o *)this, (System_String_o *)StringLiteral_871/*"-"*/, 0LL);
  this = (RecoverItemComponent_o *)v10->fields.spendNumLb;
  if ( !this )
    goto LABEL_108;
  UILabel__set_text((UILabel_o *)this, (System_String_o *)StringLiteral_871/*"-"*/, 0LL);
  this = (RecoverItemComponent_o *)v10->fields.itemDetailLb;
  if ( !this )
    goto LABEL_108;
  UILabel__set_text((UILabel_o *)this, (System_String_o *)StringLiteral_871/*"-"*/, 0LL);
  currentInfoLb = v10->fields.currentInfoLb;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  this = (RecoverItemComponent_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3965/*"CURRENT_NUM_TXT"*/, 0LL);
  if ( !currentInfoLb )
    goto LABEL_108;
  UILabel__set_text(currentInfoLb, (System_String_o *)this, 0LL);
  spendInfoLb = v10->fields.spendInfoLb;
  this = (RecoverItemComponent_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12244/*"SPEND_NUM_TXT"*/, 0LL);
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
          v63 = v10->fields.currentInfoLb;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          this = (RecoverItemComponent_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3561/*"CMDSPELL_CURRENT_NUM_TXT"*/, 0LL);
          if ( v63 )
          {
            UILabel__set_text(v63, (System_String_o *)this, 0LL);
            v64 = v10->fields.spendInfoLb;
            this = (RecoverItemComponent_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3562/*"CMDSPELL_SPEND_NUM_TXT"*/, 0LL);
            if ( v64 )
            {
              UILabel__set_text(v64, (System_String_o *)this, 0LL);
              this = (RecoverItemComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
              if ( this )
              {
                this = (RecoverItemComponent_o *)DataManager__GetMasterData_object_(
                                                   (DataManager_o *)this,
                                                   (const MethodInfo_303395C *)Method_DataManager_GetMasterData_CommandSpellMaster___);
                if ( this )
                {
                  v65 = DataMasterBase_object__object__int___GetEntity(
                          (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                          v10->fields.targetId,
                          (const MethodInfo_32E1E3C *)Method_DataMasterBase_CommandSpellMaster__CommandSpellEntity__int__GetEntity__);
                  if ( !v65 )
                    goto LABEL_107;
                  v66 = (CommandSpellEntity_o *)v65;
                  this = (RecoverItemComponent_o *)v10->fields.cmdSpellIcon;
                  if ( this )
                  {
                    CommandSpellIconComponent__SetData((CommandSpellIconComponent_o *)this, v10->fields.userEntity, 0LL);
                    this = (RecoverItemComponent_o *)v10->fields.itemNameLb;
                    if ( this )
                    {
                      UILabel__set_text((UILabel_o *)this, v66->fields.name, 0LL);
                      this = *p_userEntity;
                      if ( *p_userEntity )
                      {
                        CommandSpell = UserGameEntity__getCommandSpell((UserGameEntity_o *)this, 0LL);
                        *p_spendNum = v66->fields.consume;
                        this = (RecoverItemComponent_o *)CommandSpellEntity__getValues(v66, 0LL);
                        if ( this )
                        {
                          if ( !LODWORD(this->fields.m_CancellationTokenSource) )
                            goto LABEL_109;
                          itemIconInfo = this->fields.itemIconInfo;
                          if ( !itemIconInfo )
                            goto LABEL_108;
                          if ( !LODWORD(itemIconInfo->fields.m_CancellationTokenSource) )
LABEL_109:
                            sub_1BDBADC(this, data, v67, v68);
                          backSprite = (int)itemIconInfo->fields.backSprite;
                          if ( needRp < 1 )
                          {
                            v74 = *p_spendNum;
                          }
                          else
                          {
                            v71 = (float)(needRp - v10->fields.usrCurrentRp) / (float)backSprite;
                            if ( !byte_4B3EFD1 )
                            {
                              sub_1BDB878(&System_Math_TypeInfo, data);
                              byte_4B3EFD1 = 1;
                            }
                            v72 = fmaxf(v71, 1.0);
                            if ( !System_Math_TypeInfo->_2.cctor_finished )
                              j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
                            v73 = vcvtps_s32_f32(v72);
                            if ( ceilf(v72) == INFINITY )
                              v74 = 0x80000000;
                            else
                              v74 = v73;
                            *p_spendNum = v74;
                          }
                          v10->fields.recvRpNum = v74 * backSprite;
                          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                          v103 = LocalizationManager__Get((System_String_o *)StringLiteral_3560/*"CMDSPELL_CURRENT_NUM"*/, 0LL);
                          spendNum = v10->fields.spendNum;
                          v107 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &spendNum, v104, v105, v106);
                          v108 = System_String__Format(v103, v107, 0LL);
                          itemDetailLb = v10->fields.itemDetailLb;
                          v110 = (Il2CppObject *)v108;
                          v111 = LocalizationManager__Get((System_String_o *)StringLiteral_11140/*"RP_RECOVER_CMDSPELL_TXT"*/, 0LL);
                          recvRpNum = v10->fields.recvRpNum;
                          v115 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &recvRpNum, v112, v113, v114);
                          this = (RecoverItemComponent_o *)System_String__Format_62613552(v111, v110, v115, 0LL);
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
                                v61 = CommandSpell < v10->fields.spendNum;
                                v62 = v10->fields.recvRpNum + v10->fields.usrCurrentRp;
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
          v76 = RecvItemData;
          this = (RecoverItemComponent_o *)v10->fields.itemIconInfo;
          if ( this )
          {
            ItemIconComponent__SetItemImage_39932756(
              (ItemIconComponent_o *)this,
              v76->fields.imageId,
              v76->fields.bgImageId,
              v76->fields.type,
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
                  UILabel__set_text((UILabel_o *)this, v76->fields.name, 0LL);
                  this = (RecoverItemComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
                  if ( this )
                  {
                    this = (RecoverItemComponent_o *)DataManager__GetMasterData_object_(
                                                       (DataManager_o *)this,
                                                       (const MethodInfo_303395C *)Method_DataManager_GetMasterData_UserItemMaster___);
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
                        v78 = entity ? entity->fields.num : 0;
                        value = v76->fields.value;
                        if ( needRp < 1 )
                        {
                          *p_spendNum = 1;
                        }
                        else
                        {
                          v80 = (float)(needRp - v10->fields.usrCurrentRp) / (float)value;
                          if ( !byte_4B3EFD1 )
                          {
                            sub_1BDB878(&System_Math_TypeInfo, v77);
                            byte_4B3EFD1 = 1;
                          }
                          v81 = fmaxf(v80, 1.0);
                          if ( !System_Math_TypeInfo->_2.cctor_finished )
                            j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
                          v82 = vcvtps_s32_f32(v81);
                          if ( ceilf(v81) == INFINITY )
                            v82 = 0x80000000;
                          *p_spendNum = v82;
                          value *= v82;
                        }
                        v10->fields.recvRpNum = value;
                        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                        v83 = LocalizationManager__Get((System_String_o *)StringLiteral_14781/*"UNIT_INFO"*/, 0LL);
                        spendNum = v10->fields.spendNum;
                        v87 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &spendNum, v84, v85, v86);
                        v88 = System_String__Format(v83, v87, 0LL);
                        v89 = v10->fields.itemDetailLb;
                        v90 = (Il2CppObject *)v88;
                        v91 = LocalizationManager__Get((System_String_o *)StringLiteral_11142/*"RP_RECOVER_NUM_TXT"*/, 0LL);
                        recvRpNum = v10->fields.recvRpNum;
                        v95 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &recvRpNum, v92, v93, v94);
                        this = (RecoverItemComponent_o *)System_String__Format_62613552(v91, v90, v95, 0LL);
                        if ( v89 )
                        {
                          UILabel__set_text(v89, (System_String_o *)this, 0LL);
                          v96 = v10->fields.currentNumLb;
                          v119 = v78;
                          v100 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v119, v97, v98, v99);
                          this = (RecoverItemComponent_o *)System_String__Format(
                                                             (System_String_o *)StringLiteral_25166/*"{0:N0}"*/,
                                                             v100,
                                                             0LL);
                          if ( v96 )
                          {
                            UILabel__set_text(v96, (System_String_o *)this, 0LL);
                            v101 = v10->fields.spendNumLb;
                            this = (RecoverItemComponent_o *)System_Int32__ToString((int)v10 + 128, 0LL);
                            if ( v101 )
                            {
                              UILabel__set_text(v101, (System_String_o *)this, 0LL);
                              v102 = v10->fields.recvRpNum + v10->fields.usrCurrentRp;
                              v10->fields.isEnableSelect = v78 >= v10->fields.spendNum;
                              v10->fields.recvSum = v102;
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
  this = (RecoverItemComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_108;
  this = (RecoverItemComponent_o *)DataManager__GetMasterData_object_(
                                     (DataManager_o *)this,
                                     (const MethodInfo_303395C *)Method_DataManager_GetMasterData_ItemMaster___);
  if ( !this )
    goto LABEL_108;
  this = (RecoverItemComponent_o *)ItemMaster__GetEntityByType((ItemMaster_o *)this, 2, 0LL);
  if ( !this )
    goto LABEL_108;
  v38 = this;
  this = (RecoverItemComponent_o *)v10->fields.itemIconInfo;
  if ( !this )
    goto LABEL_108;
  ItemIconComponent__SetItemImage_39932756(
    (ItemIconComponent_o *)this,
    (int32_t)v38->fields.cmdSpellBg,
    HIDWORD(v38->fields.cmdSpellBg),
    (int32_t)v38->fields.cmdSpellIcon,
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
  this = (RecoverItemComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_108;
  this = (RecoverItemComponent_o *)DataManager__GetMasterData_object_(
                                     (DataManager_o *)this,
                                     (const MethodInfo_303395C *)Method_DataManager_GetMasterData_StoneShopMaster___);
  if ( !this )
    goto LABEL_108;
  this = (RecoverItemComponent_o *)DataMasterBase_object__object__int___GetEntity(
                                     (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                     v10->fields.targetId,
                                     (const MethodInfo_32E1E3C *)Method_DataMasterBase_StoneShopMaster__StoneShopEntity__int__GetEntity__);
  if ( !v10->fields.itemNameLb )
    goto LABEL_108;
  v39 = this;
  UILabel__set_text(v10->fields.itemNameLb, (System_String_o *)v38->fields.m_CancellationTokenSource, 0LL);
  if ( !*p_userEntity )
    goto LABEL_108;
  userEntity = (int)(*p_userEntity)->fields.userEntity;
  if ( v39 )
    *p_spendNum = HIDWORD(v39->fields.cmdSpellBg);
  v44 = v10->fields.currentNumLb;
  spendNum = userEntity;
  v45 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &spendNum, v40, v41, v42);
  this = (RecoverItemComponent_o *)System_String__Format((System_String_o *)StringLiteral_25166/*"{0:N0}"*/, v45, 0LL);
  if ( !v44 )
    goto LABEL_108;
  UILabel__set_text(v44, (System_String_o *)this, 0LL);
  v46 = v10->fields.spendNumLb;
  this = (RecoverItemComponent_o *)System_Int32__ToString((int)v10 + 128, 0LL);
  if ( !v46 )
    goto LABEL_108;
  UILabel__set_text(v46, (System_String_o *)this, 0LL);
  RecoverItemComponent__AttachStoneCountRefreshComponent(v10, v47);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v48 = LocalizationManager__Get((System_String_o *)StringLiteral_14781/*"UNIT_INFO"*/, 0LL);
  recvRpNum = v10->fields.spendNum;
  v52 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &recvRpNum, v49, v50, v51);
  v53 = System_String__Format(v48, v52, 0LL);
  v54 = v10->fields.itemDetailLb;
  v55 = (Il2CppObject *)v53;
  v56 = LocalizationManager__Get((System_String_o *)StringLiteral_11142/*"RP_RECOVER_NUM_TXT"*/, 0LL);
  v119 = v10->fields.recvRpNum;
  v60 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v119, v57, v58, v59);
  this = (RecoverItemComponent_o *)System_String__Format_62613552(v56, v55, v60, 0LL);
  if ( !v54 || (UILabel__set_text(v54, (System_String_o *)this, 0LL), (this = *p_userEntity) == 0LL) )
LABEL_108:
    sub_1BDBAD4(this, data);
  v61 = UserGameEntity__get_PayableStoneNum((UserGameEntity_o *)this, 0LL) < v10->fields.spendNum;
  v62 = v10->fields.recvRpNum + v10->fields.usrCurrentRp;
LABEL_103:
  v118 = !v61;
  v10->fields.isEnableSelect = v118;
  v10->fields.recvSum = v62;
LABEL_107:
  RecoverItemComponent__setEnableSelectItem(v10, (const MethodInfo *)data);
}


void __fastcall RecoverItemComponent__setRequestInfo(RecoverItemComponent_o *this, const MethodInfo *method)
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
  DataManager_o *Instance; // x0
  __int64 v13; // x1
  __int64 v14; // x8
  struct RecoverItemComponent_CallbackFunc_o *callbackFunc; // x20
  Il2CppObject *v16; // x19
  System_String_o *v17; // x20
  RecoverItemComponent___c_c *v18; // x8
  System_Action_o *_9__43_0; // x22
  System_String_o *v20; // x21
  Il2CppObject *v21; // x23
  struct RecoverItemComponent___c_StaticFields *static_fields; // x0

  if ( (byte_4B3EF5C & 1) == 0 )
  {
    sub_1BDB878(&System_Action_TypeInfo, method);
    sub_1BDB878(&Method_DataManager_GetMasterData_EventMaster___, v3);
    sub_1BDB878(&LocalizationManager_TypeInfo, v4);
    sub_1BDB878(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    sub_1BDB878(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    sub_1BDB878(&TerminalSceneComponent_TypeInfo, v7);
    sub_1BDB878(&Method_RecoverItemComponent___c__setRequestInfo_b__43_0__, v8);
    sub_1BDB878(&RecoverItemComponent___c_TypeInfo, v9);
    sub_1BDB878(&StringLiteral_11143/*"RP_UNRECOVERABLE_MESSAGE"*/, v10);
    sub_1BDB878(&StringLiteral_1/*""*/, v11);
    byte_4B3EF5C = 1;
  }
  if ( this->fields.recvTarget != 2 )
    goto LABEL_14;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_27;
  DataManager__GetMasterData_object_(
    Instance,
    (const MethodInfo_303395C *)Method_DataManager_GetMasterData_EventMaster___);
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  if ( !byte_4B3EEEF )
  {
    sub_1BDB878(&TerminalSceneComponent_TypeInfo, v13);
    byte_4B3EEEF = 1;
  }
  Instance = (DataManager_o *)TerminalSceneComponent_TypeInfo;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    Instance = (DataManager_o *)TerminalSceneComponent_TypeInfo;
  }
  v14 = **(_QWORD **)&Instance[1].fields._DispLog;
  if ( !v14 || (Instance = *(DataManager_o **)(v14 + 248)) == 0LL )
LABEL_27:
    sub_1BDBAD4(Instance, v13);
  if ( !ScrPlayerStatus__IsBPActive((ScrPlayerStatus_o *)Instance, 0LL) )
  {
    v16 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    Instance = (DataManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11143/*"RP_UNRECOVERABLE_MESSAGE"*/, 0LL);
    v17 = (System_String_o *)Instance;
    v18 = RecoverItemComponent___c_TypeInfo;
    if ( !RecoverItemComponent___c_TypeInfo->_2.cctor_finished )
    {
      Instance = (DataManager_o *)j_il2cpp_runtime_class_init_0(RecoverItemComponent___c_TypeInfo);
      v18 = RecoverItemComponent___c_TypeInfo;
    }
    _9__43_0 = v18->static_fields->__9__43_0;
    v20 = (System_String_o *)StringLiteral_1/*""*/;
    if ( !_9__43_0 )
    {
      if ( !v18->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v18);
        v18 = RecoverItemComponent___c_TypeInfo;
      }
      v21 = (Il2CppObject *)v18->static_fields->__9;
      _9__43_0 = (System_Action_o *)sub_1BDBAC4(System_Action_TypeInfo);
      System_Action___ctor(_9__43_0, v21, Method_RecoverItemComponent___c__setRequestInfo_b__43_0__, 0LL);
      static_fields = RecoverItemComponent___c_TypeInfo->static_fields;
      static_fields->__9__43_0 = _9__43_0;
      Instance = (DataManager_o *)sub_1BDB81C(&static_fields->__9__43_0);
    }
    if ( v16 )
    {
      CommonUI__OpenNotificationDialog((CommonUI_o *)v16, v20, v17, _9__43_0, -1, 0, 0, 0, 1, 0, 1, 0, 0LL, 0.0, 0, 0LL);
      return;
    }
    goto LABEL_27;
  }
LABEL_14:
  callbackFunc = this->fields.callbackFunc;
  if ( callbackFunc )
  {
    this->fields.callbackFunc = 0LL;
    sub_1BDB81C(&this->fields.callbackFunc);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD, _QWORD, _QWORD, _QWORD))callbackFunc->fields.m_target)(
      callbackFunc->fields.original_method_info,
      (unsigned int)this->fields.currentType,
      (unsigned int)this->fields.targetId,
      (unsigned int)this->fields.spendNum,
      *(_QWORD *)&callbackFunc->fields.extra_arg);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall RecoverItemComponent__spendItemDlg(RecoverItemComponent_o *this, bool isRes, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  Il2CppObject *Instance; // x0
  __int64 v8; // x1
  CommonUI_o *v9; // x21
  System_Action_o *v10; // x20

  if ( (byte_4B3EF5A & 1) == 0 )
  {
    sub_1BDB878(&System_Action_TypeInfo, isRes);
    sub_1BDB878(&Method_RecoverItemComponent_setRequestInfo__, v5);
    sub_1BDB878(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6);
    byte_4B3EF5A = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v9 = (CommonUI_o *)Instance;
  if ( isRes )
  {
    v10 = (System_Action_o *)sub_1BDBAC4(System_Action_TypeInfo);
    System_Action___ctor(v10, (Il2CppObject *)this, Method_RecoverItemComponent_setRequestInfo__, 0LL);
    if ( v9 )
    {
      CommonUI__CloseConfirmDialog_30833860(v9, v10, 0LL);
      return;
    }
LABEL_8:
    sub_1BDBAD4(Instance, v8);
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
  sub_1BDB81C(&this->fields.method);
  v8 = *(unsigned __int8 *)(v6 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1BDB938(v6) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1BDBAF0(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1BDB9A0(v10, 0LL);
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
  this->fields.m_target = (Il2CppObject *)sub_1A1C554;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_1A1C4F4;
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
  __int64 v11; // x2
  __int64 v12; // x3
  __int64 v13; // x4
  __int64 v14; // x2
  __int64 v15; // x3
  __int64 v16; // x4
  _QWORD v18[2]; // [xsp+0h] [xbp-70h] BYREF
  __int128 v19; // [xsp+10h] [xbp-60h]
  int32_t v20; // [xsp+2Ch] [xbp-44h] BYREF
  int32_t v21; // [xsp+38h] [xbp-38h] BYREF
  int32_t v22; // [xsp+3Ch] [xbp-34h] BYREF

  v21 = id;
  v22 = type;
  v20 = num;
  if ( (byte_4B3EF60 & 1) == 0 )
  {
    sub_1BDB878(&int_TypeInfo, *(_QWORD *)&type);
    sub_1BDB878(&RecoverType_Type_TypeInfo, v10);
    byte_4B3EF60 = 1;
  }
  v19 = 0u;
  v18[0] = j_il2cpp_value_box_0(RecoverType_Type_TypeInfo, &v22, *(_QWORD *)&id, *(_QWORD *)&num, callback);
  v18[1] = j_il2cpp_value_box_0(int_TypeInfo, &v21, v11, v12, v13);
  *(_QWORD *)&v19 = j_il2cpp_value_box_0(int_TypeInfo, &v20, v14, v15, v16);
  return (System_IAsyncResult_o *)sub_1BDB82C(this, v18, callback, object);
}


void __fastcall RecoverItemComponent_CallbackFunc__EndInvoke(
        RecoverItemComponent_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1BDB830(result, 0LL, method);
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
  __int64 v1; // x1
  Il2CppObject *v2; // x19

  if ( (byte_4B3EF61 & 1) == 0 )
  {
    sub_1BDB878(&RecoverItemComponent___c_TypeInfo, v1);
    byte_4B3EF61 = 1;
  }
  v2 = (Il2CppObject *)sub_1BDBAC4(RecoverItemComponent___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  RecoverItemComponent___c_TypeInfo->static_fields->__9 = (struct RecoverItemComponent___c_o *)v2;
  sub_1BDB81C(RecoverItemComponent___c_TypeInfo->static_fields);
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
  Il2CppObject *Instance; // x0
  __int64 v4; // x1

  if ( (byte_4B3EF62 & 1) == 0 )
  {
    sub_1BDB878(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, method);
    sub_1BDB878(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v2);
    byte_4B3EF62 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance
    || (CommonUI__CloseRecoverItemListDialog((CommonUI_o *)Instance, 0LL),
        (Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__)) == 0LL) )
  {
    sub_1BDBAD4(Instance, v4);
  }
  AvalonSceneManager__transitionSceneRefresh((AvalonSceneManager_o *)Instance, 34, 1, 0LL, 0, 0LL);
}