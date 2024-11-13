void __fastcall RecoverItemComponent___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2

  if ( (byte_4B10FA0 & 1) == 0 )
  {
    sub_1BCA7E0(&RecoverItemComponent_TypeInfo, v1, v2);
    byte_4B10FA0 = 1;
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
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  UnityEngine_GameObject_o *gameObject; // x20
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x3
  System_Action_int__o *v10; // x21

  if ( (byte_4B10F9A & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_int__TypeInfo, method, v2);
    sub_1BCA7E0(&Method_RecoverItemComponent__AttachStoneCountRefreshComponent_b__38_0__, v4, v5);
    byte_4B10F9A = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v10 = (System_Action_int__o *)sub_1BCAA2C(System_Action_int__TypeInfo, v7, v8, v9);
  System_Action_int____ctor(
    v10,
    (Il2CppObject *)this,
    Method_RecoverItemComponent__AttachStoneCountRefreshComponent_b__38_0__,
    0LL);
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
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  Il2CppObject *Instance; // x20
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x3
  System_Action_o *v15; // x21
  Il2CppObject *v16; // x0
  __int64 v17; // x1

  if ( (byte_4B10F9D & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, isRes, *(_QWORD *)&useNum);
    sub_1BCA7E0(&Method_RecoverItemComponent_setRequestInfo__, v7, v8);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v9, v10);
    byte_4B10F9D = 1;
  }
  if ( isRes )
  {
    this->fields.spendNum = useNum;
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v15 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v12, v13, v14);
    System_Action___ctor(v15, (Il2CppObject *)this, Method_RecoverItemComponent_setRequestInfo__, 0LL);
    if ( !Instance )
LABEL_9:
      sub_1BCAA3C(v16, v17);
  }
  else
  {
    v16 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !v16 )
      goto LABEL_9;
    Instance = v16;
    v15 = 0LL;
  }
  CommonUI__CloseApRecoverConfirmDlg((CommonUI_o *)Instance, v15, 0LL);
}


void __fastcall RecoverItemComponent__OnClickItem(RecoverItemComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x1
  __int64 v27; // x2
  __int64 v28; // x1
  __int64 v29; // x2
  __int64 v30; // x1
  __int64 v31; // x2
  __int64 v32; // x1
  __int64 v33; // x2
  __int64 v34; // x1
  __int64 v35; // x2
  __int64 v36; // x1
  __int64 v37; // x2
  __int64 v38; // x1
  __int64 v39; // x2
  __int64 v40; // x1
  __int64 v41; // x2
  __int64 v42; // x1
  __int64 v43; // x2
  __int64 v44; // x1
  __int64 v45; // x2
  __int64 v46; // x1
  __int64 v47; // x2
  __int64 v48; // x1
  __int64 v49; // x2
  __int64 v50; // x1
  __int64 v51; // x2
  __int64 v52; // x1
  __int64 v53; // x2
  __int64 v54; // x1
  __int64 v55; // x2
  UnityEngine_Object_o *dialog; // x20
  __int64 userEntity; // x0
  __int64 v58; // x1
  struct RecoverDlgComponent_o *v59; // x8
  System_String_o *v60; // x20
  System_String_o *v61; // x21
  Il2CppObject *v62; // x0
  System_String_o *v63; // x24
  Il2CppObject *mText; // x23
  System_String_o *v65; // x21
  Il2CppObject *v66; // x0
  struct UILabel_o *itemNameLb; // x8
  System_String_o *v68; // x21
  System_String_o *v69; // x22
  _QWORD *v70; // x8
  System_Reflection_MethodBase_o *v71; // x0
  __int64 v72; // x1
  int32_t v73; // w8
  int32_t usrMaxAp; // w9
  System_String_o **v75; // x8
  System_String_o *v76; // x25
  System_String_o *v77; // x25
  System_Object_array *v78; // x26
  Il2CppObject *v79; // x24
  Il2CppObject *v80; // x24
  Il2CppObject *v81; // x24
  Il2CppObject *v82; // x24
  Il2CppObject *v83; // x24
  Il2CppObject **v84; // x0
  System_String_o *v85; // x25
  System_Object_array *v86; // x26
  Il2CppObject *v87; // x24
  Il2CppObject *v88; // x24
  Il2CppObject *v89; // x24
  Il2CppObject *v90; // x24
  Il2CppObject *v91; // x24
  System_String_o *v92; // x24
  __int64 v93; // x1
  Il2CppObject *v94; // x23
  __int64 v95; // x1
  __int64 v96; // x2
  __int64 v97; // x3
  CommonConfirmDialog_ClickDelegate_o *v98; // x25
  System_String_o **v99; // x8
  System_String_o *v100; // x25
  Il2CppObject *v101; // x24
  Il2CppObject *v102; // x24
  Il2CppObject *v103; // x24
  Il2CppObject *v104; // x24
  Il2CppObject *v105; // x24
  __int64 v106; // x1
  System_String_o *v107; // x23
  Il2CppObject *v108; // x25
  __int64 v109; // x1
  __int64 v110; // x2
  __int64 v111; // x3
  CommonConfirmDialog_ClickDelegate_o *v112; // x26
  System_String_o *v113; // x0
  System_String_o *v114; // x20
  Il2CppObject *v115; // x21
  __int64 v116; // x1
  __int64 v117; // x2
  __int64 v118; // x3
  System_Action_o *v119; // x22
  System_String_o *v120; // x0
  System_String_o *v121; // x20
  Il2CppObject *Instance; // x21
  __int64 v123; // x1
  __int64 v124; // x2
  __int64 v125; // x3
  System_Action_o *v126; // x22
  Il2CppObject *v127; // x0
  int32_t targetId; // w20
  int32_t needAp; // w21
  CommonUI_o *v130; // x22
  __int64 v131; // x1
  __int64 v132; // x2
  __int64 v133; // x3
  System_Action_bool__int__o *v134; // x23
  __int64 v135; // x0
  int32_t v136; // [xsp+48h] [xbp-78h] BYREF
  int32_t v137; // [xsp+4Ch] [xbp-74h] BYREF
  int32_t recvSum; // [xsp+50h] [xbp-70h] BYREF
  int32_t usrMaxRp; // [xsp+54h] [xbp-6Ch] BYREF
  int32_t usrCurrentRp; // [xsp+58h] [xbp-68h] BYREF
  int32_t spendNum; // [xsp+5Ch] [xbp-64h] BYREF

  if ( (byte_4B10F9B & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_bool__int__TypeInfo, method, v2);
    sub_1BCA7E0(&System_Action_TypeInfo, v4, v5);
    sub_1BCA7E0(&BalanceConfig_TypeInfo, v6, v7);
    sub_1BCA7E0(&CommonConfirmDialog_ClickDelegate_TypeInfo, v8, v9);
    sub_1BCA7E0(&int_TypeInfo, v10, v11);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v12, v13);
    sub_1BCA7E0(&object___TypeInfo, v14, v15);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v16, v17);
    sub_1BCA7E0(&Method_RecoverItemComponent_CloseApRecovDlg__, v18, v19);
    sub_1BCA7E0(&Method_RecoverItemComponent_OnClickItem__, v20, v21);
    sub_1BCA7E0(&Method_RecoverItemComponent_closeNotificationDlg__, v22, v23);
    sub_1BCA7E0(&Method_RecoverItemComponent_spendItemDlg__, v24, v25);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v26, v27);
    sub_1BCA7E0(&StringLiteral_11267/*"RP_RECOVER_CONFIRM_MSG"*/, v28, v29);
    sub_1BCA7E0(&StringLiteral_3638/*"CMDSPELL_CURRENT_NUM"*/, v30, v31);
    sub_1BCA7E0(&StringLiteral_3782/*"COMMAND_SPELL_TXT"*/, v32, v33);
    sub_1BCA7E0(&StringLiteral_2143/*"AP_RECOVER_CONFIRM_MSG"*/, v34, v35);
    sub_1BCA7E0(&StringLiteral_11265/*"RP_FULL_MSG"*/, v36, v37);
    sub_1BCA7E0(&StringLiteral_14962/*"UNIT_INFO"*/, v38, v39);
    sub_1BCA7E0(&StringLiteral_2139/*"AP_ADD_CONFIRM_MSG"*/, v40, v41);
    sub_1BCA7E0(&StringLiteral_3788/*"COMMON_CONFIRM_DECIDE"*/, v42, v43);
    sub_1BCA7E0(&StringLiteral_3786/*"COMMON_CONFIRM_CANCEL"*/, v44, v45);
    sub_1BCA7E0(&StringLiteral_2140/*"AP_ADD_CONFIRM_MSG_OVER"*/, v46, v47);
    sub_1BCA7E0(&StringLiteral_2144/*"AP_RECOVER_CONFIRM_MSG_OVER"*/, v48, v49);
    sub_1BCA7E0(&StringLiteral_2141/*"AP_FULL_MSG"*/, v50, v51);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v52, v53);
    sub_1BCA7E0(&StringLiteral_2149/*"AP_RECOVER_STONEPAY_WARNING_MSG"*/, v54, v55);
    byte_4B10F9B = 1;
  }
  if ( !this->fields.isEnableSelect )
    return;
  dialog = (UnityEngine_Object_o *)this->fields.dialog;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  userEntity = UnityEngine_Object__op_Inequality(dialog, 0LL, 0LL);
  if ( (userEntity & 1) == 0 )
    return;
  v59 = this->fields.dialog;
  if ( !v59 )
    goto LABEL_140;
  if ( v59->fields.isClosed )
    return;
  v60 = (System_String_o *)StringLiteral_1/*""*/;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v58);
  v61 = LocalizationManager__Get((System_String_o *)StringLiteral_14962/*"UNIT_INFO"*/, 0LL);
  spendNum = this->fields.spendNum;
  v62 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &spendNum);
  userEntity = (__int64)System_String__Format(v61, v62, 0LL);
  v63 = (System_String_o *)userEntity;
  if ( this->fields.currentType == 1 )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v58);
    mText = (Il2CppObject *)LocalizationManager__Get((System_String_o *)StringLiteral_3782/*"COMMAND_SPELL_TXT"*/, 0LL);
    if ( this->fields.currentType == 1 )
    {
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v58);
      v65 = LocalizationManager__Get((System_String_o *)StringLiteral_3638/*"CMDSPELL_CURRENT_NUM"*/, 0LL);
      spendNum = this->fields.spendNum;
      v66 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &spendNum);
      v63 = System_String__Format(v65, v66, 0LL);
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
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v58);
  v68 = LocalizationManager__Get((System_String_o *)StringLiteral_3788/*"COMMON_CONFIRM_DECIDE"*/, 0LL);
  v69 = LocalizationManager__Get((System_String_o *)StringLiteral_3786/*"COMMON_CONFIRM_CANCEL"*/, 0LL);
  v70 = Method_RecoverItemComponent_OnClickItem__;
  if ( (*((_BYTE *)Method_RecoverItemComponent_OnClickItem__ + 83) & 2) != 0 )
    v70 = (_QWORD *)sub_1BCA7F8(Method_RecoverItemComponent_OnClickItem__);
  v71 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v70, v70[4]);
  OverwriteAssetSoundName__PlaySystemSe(v71, 0, 0LL);
  if ( !this->fields.isAp )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v72);
    v85 = LocalizationManager__Get((System_String_o *)StringLiteral_11267/*"RP_RECOVER_CONFIRM_MSG"*/, 0LL);
    userEntity = sub_1BCA888(object___TypeInfo, 7LL);
    if ( !userEntity )
      goto LABEL_140;
    v86 = (System_Object_array *)userEntity;
    if ( mText )
    {
      userEntity = sub_1BCA91C(mText, *(_QWORD *)(*(_QWORD *)userEntity + 64LL));
      if ( !userEntity )
        goto LABEL_141;
    }
    if ( v86->max_length )
    {
      v86->m_Items[0] = mText;
      userEntity = sub_1BCA784(v86->m_Items, mText);
      if ( v63 )
      {
        userEntity = sub_1BCA91C(v63, v86->obj.klass->_1.element_class);
        if ( !userEntity )
          goto LABEL_141;
      }
      if ( v86->max_length > 1 )
      {
        v86->m_Items[1] = (Il2CppObject *)v63;
        sub_1BCA784(&v86->m_Items[1], v63);
        spendNum = this->fields.recvRpNum;
        userEntity = j_il2cpp_value_box_0(int_TypeInfo, &spendNum);
        v87 = (Il2CppObject *)userEntity;
        if ( userEntity )
        {
          userEntity = sub_1BCA91C(userEntity, v86->obj.klass->_1.element_class);
          if ( !userEntity )
            goto LABEL_141;
        }
        if ( v86->max_length > 2 )
        {
          v86->m_Items[2] = v87;
          sub_1BCA784(&v86->m_Items[2], v87);
          usrCurrentRp = this->fields.usrCurrentRp;
          userEntity = j_il2cpp_value_box_0(int_TypeInfo, &usrCurrentRp);
          v88 = (Il2CppObject *)userEntity;
          if ( userEntity )
          {
            userEntity = sub_1BCA91C(userEntity, v86->obj.klass->_1.element_class);
            if ( !userEntity )
              goto LABEL_141;
          }
          if ( v86->max_length > 3 )
          {
            v86->m_Items[3] = v88;
            sub_1BCA784(&v86->m_Items[3], v88);
            usrMaxRp = this->fields.usrMaxRp;
            userEntity = j_il2cpp_value_box_0(int_TypeInfo, &usrMaxRp);
            v89 = (Il2CppObject *)userEntity;
            if ( userEntity )
            {
              userEntity = sub_1BCA91C(userEntity, v86->obj.klass->_1.element_class);
              if ( !userEntity )
                goto LABEL_141;
            }
            if ( v86->max_length > 4 )
            {
              v86->m_Items[4] = v89;
              sub_1BCA784(&v86->m_Items[4], v89);
              recvSum = this->fields.recvSum;
              userEntity = j_il2cpp_value_box_0(int_TypeInfo, &recvSum);
              v90 = (Il2CppObject *)userEntity;
              if ( userEntity )
              {
                userEntity = sub_1BCA91C(userEntity, v86->obj.klass->_1.element_class);
                if ( !userEntity )
                  goto LABEL_141;
              }
              if ( v86->max_length > 5 )
              {
                v86->m_Items[5] = v90;
                sub_1BCA784(&v86->m_Items[5], v90);
                v137 = this->fields.usrMaxRp;
                userEntity = j_il2cpp_value_box_0(int_TypeInfo, &v137);
                v91 = (Il2CppObject *)userEntity;
                if ( userEntity )
                {
                  userEntity = sub_1BCA91C(userEntity, v86->obj.klass->_1.element_class);
                  if ( !userEntity )
                    goto LABEL_141;
                }
                if ( v86->max_length > 6 )
                {
                  v86->m_Items[6] = v91;
                  sub_1BCA784(&v86->m_Items[6], v91);
                  userEntity = (__int64)System_String__Format_62415728(v85, v86, 0LL);
                  if ( !this->fields.userEntity )
                    goto LABEL_140;
                  v92 = (System_String_o *)userEntity;
                  if ( UserGameEntity__getRp(this->fields.userEntity, 0LL) < this->fields.usrMaxRp )
                    goto LABEL_80;
                  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v93);
                  v120 = LocalizationManager__Get((System_String_o *)StringLiteral_11265/*"RP_FULL_MSG"*/, 0LL);
                  v121 = System_String__Format(v120, mText, 0LL);
                  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
                  v126 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v123, v124, v125);
                  System_Action___ctor(
                    v126,
                    (Il2CppObject *)this,
                    Method_RecoverItemComponent_closeNotificationDlg__,
                    0LL);
                  if ( !Instance )
                    goto LABEL_140;
                  CommonUI__OpenNotificationDialog(
                    (CommonUI_o *)Instance,
                    (System_String_o *)StringLiteral_1/*""*/,
                    v121,
                    v126,
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
    sub_1BCAA44(userEntity, v58);
  }
  v73 = this->fields.recvSum;
  usrMaxAp = this->fields.usrMaxAp;
  if ( !this->fields.isAddAp )
  {
    if ( v73 <= usrMaxAp )
      v99 = (System_String_o **)&StringLiteral_2143/*"AP_RECOVER_CONFIRM_MSG"*/;
    else
      v99 = (System_String_o **)&StringLiteral_2144/*"AP_RECOVER_CONFIRM_MSG_OVER"*/;
    v100 = *v99;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v72);
    v77 = LocalizationManager__Get(v100, 0LL);
    userEntity = sub_1BCA888(object___TypeInfo, 8LL);
    if ( !userEntity )
      goto LABEL_140;
    v78 = (System_Object_array *)userEntity;
    if ( mText )
    {
      userEntity = sub_1BCA91C(mText, *(_QWORD *)(*(_QWORD *)userEntity + 64LL));
      if ( !userEntity )
        goto LABEL_141;
    }
    if ( v78->max_length )
    {
      v78->m_Items[0] = mText;
      userEntity = sub_1BCA784(v78->m_Items, mText);
      if ( v63 )
      {
        userEntity = sub_1BCA91C(v63, v78->obj.klass->_1.element_class);
        if ( !userEntity )
          goto LABEL_141;
      }
      if ( v78->max_length > 1 )
      {
        v78->m_Items[1] = (Il2CppObject *)v63;
        sub_1BCA784(&v78->m_Items[1], v63);
        spendNum = this->fields.apRcvRate;
        userEntity = j_il2cpp_value_box_0(int_TypeInfo, &spendNum);
        v101 = (Il2CppObject *)userEntity;
        if ( userEntity )
        {
          userEntity = sub_1BCA91C(userEntity, v78->obj.klass->_1.element_class);
          if ( !userEntity )
            goto LABEL_141;
        }
        if ( v78->max_length > 2 )
        {
          v78->m_Items[2] = v101;
          sub_1BCA784(&v78->m_Items[2], v101);
          usrCurrentRp = this->fields.recvApNum;
          userEntity = j_il2cpp_value_box_0(int_TypeInfo, &usrCurrentRp);
          v102 = (Il2CppObject *)userEntity;
          if ( userEntity )
          {
            userEntity = sub_1BCA91C(userEntity, v78->obj.klass->_1.element_class);
            if ( !userEntity )
              goto LABEL_141;
          }
          if ( v78->max_length > 3 )
          {
            v78->m_Items[3] = v102;
            sub_1BCA784(&v78->m_Items[3], v102);
            usrMaxRp = this->fields.usrCurrentAp;
            userEntity = j_il2cpp_value_box_0(int_TypeInfo, &usrMaxRp);
            v103 = (Il2CppObject *)userEntity;
            if ( userEntity )
            {
              userEntity = sub_1BCA91C(userEntity, v78->obj.klass->_1.element_class);
              if ( !userEntity )
                goto LABEL_141;
            }
            if ( v78->max_length > 4 )
            {
              v78->m_Items[4] = v103;
              sub_1BCA784(&v78->m_Items[4], v103);
              recvSum = this->fields.usrMaxAp;
              userEntity = j_il2cpp_value_box_0(int_TypeInfo, &recvSum);
              v104 = (Il2CppObject *)userEntity;
              if ( userEntity )
              {
                userEntity = sub_1BCA91C(userEntity, v78->obj.klass->_1.element_class);
                if ( !userEntity )
                  goto LABEL_141;
              }
              if ( v78->max_length > 5 )
              {
                v78->m_Items[5] = v104;
                sub_1BCA784(&v78->m_Items[5], v104);
                v137 = this->fields.recvSum;
                userEntity = j_il2cpp_value_box_0(int_TypeInfo, &v137);
                v105 = (Il2CppObject *)userEntity;
                if ( userEntity )
                {
                  userEntity = sub_1BCA91C(userEntity, v78->obj.klass->_1.element_class);
                  if ( !userEntity )
                    goto LABEL_141;
                }
                if ( v78->max_length > 6 )
                {
                  v78->m_Items[6] = v105;
                  sub_1BCA784(&v78->m_Items[6], v105);
                  v136 = this->fields.usrMaxAp;
                  userEntity = j_il2cpp_value_box_0(int_TypeInfo, &v136);
                  v83 = (Il2CppObject *)userEntity;
                  if ( userEntity )
                  {
                    userEntity = sub_1BCA91C(userEntity, v78->obj.klass->_1.element_class);
                    if ( !userEntity )
                      goto LABEL_141;
                  }
                  if ( v78->max_length > 7 )
                  {
                    v78->m_Items[7] = v83;
                    v84 = &v78->m_Items[7];
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
  if ( v73 <= usrMaxAp )
    v75 = (System_String_o **)&StringLiteral_2139/*"AP_ADD_CONFIRM_MSG"*/;
  else
    v75 = (System_String_o **)&StringLiteral_2140/*"AP_ADD_CONFIRM_MSG_OVER"*/;
  v76 = *v75;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v72);
  v77 = LocalizationManager__Get(v76, 0LL);
  userEntity = sub_1BCA888(object___TypeInfo, 7LL);
  if ( !userEntity )
    goto LABEL_140;
  v78 = (System_Object_array *)userEntity;
  if ( mText )
  {
    userEntity = sub_1BCA91C(mText, *(_QWORD *)(*(_QWORD *)userEntity + 64LL));
    if ( !userEntity )
      goto LABEL_141;
  }
  if ( !v78->max_length )
    goto LABEL_139;
  v78->m_Items[0] = mText;
  userEntity = sub_1BCA784(v78->m_Items, mText);
  if ( v63 )
  {
    userEntity = sub_1BCA91C(v63, v78->obj.klass->_1.element_class);
    if ( !userEntity )
      goto LABEL_141;
  }
  if ( v78->max_length <= 1 )
    goto LABEL_139;
  v78->m_Items[1] = (Il2CppObject *)v63;
  sub_1BCA784(&v78->m_Items[1], v63);
  spendNum = this->fields.recvApNum;
  userEntity = j_il2cpp_value_box_0(int_TypeInfo, &spendNum);
  v79 = (Il2CppObject *)userEntity;
  if ( userEntity )
  {
    userEntity = sub_1BCA91C(userEntity, v78->obj.klass->_1.element_class);
    if ( !userEntity )
      goto LABEL_141;
  }
  if ( v78->max_length <= 2 )
    goto LABEL_139;
  v78->m_Items[2] = v79;
  sub_1BCA784(&v78->m_Items[2], v79);
  usrCurrentRp = this->fields.usrCurrentAp;
  userEntity = j_il2cpp_value_box_0(int_TypeInfo, &usrCurrentRp);
  v80 = (Il2CppObject *)userEntity;
  if ( userEntity )
  {
    userEntity = sub_1BCA91C(userEntity, v78->obj.klass->_1.element_class);
    if ( !userEntity )
      goto LABEL_141;
  }
  if ( v78->max_length <= 3 )
    goto LABEL_139;
  v78->m_Items[3] = v80;
  sub_1BCA784(&v78->m_Items[3], v80);
  usrMaxRp = this->fields.usrMaxAp;
  userEntity = j_il2cpp_value_box_0(int_TypeInfo, &usrMaxRp);
  v81 = (Il2CppObject *)userEntity;
  if ( userEntity )
  {
    userEntity = sub_1BCA91C(userEntity, v78->obj.klass->_1.element_class);
    if ( !userEntity )
      goto LABEL_141;
  }
  if ( v78->max_length <= 4 )
    goto LABEL_139;
  v78->m_Items[4] = v81;
  sub_1BCA784(&v78->m_Items[4], v81);
  recvSum = this->fields.recvSum;
  userEntity = j_il2cpp_value_box_0(int_TypeInfo, &recvSum);
  v82 = (Il2CppObject *)userEntity;
  if ( userEntity )
  {
    userEntity = sub_1BCA91C(userEntity, v78->obj.klass->_1.element_class);
    if ( !userEntity )
      goto LABEL_141;
  }
  if ( v78->max_length <= 5 )
    goto LABEL_139;
  v78->m_Items[5] = v82;
  sub_1BCA784(&v78->m_Items[5], v82);
  v137 = this->fields.usrMaxAp;
  userEntity = j_il2cpp_value_box_0(int_TypeInfo, &v137);
  v83 = (Il2CppObject *)userEntity;
  if ( userEntity )
  {
    userEntity = sub_1BCA91C(userEntity, v78->obj.klass->_1.element_class);
    if ( !userEntity )
    {
LABEL_141:
      v135 = sub_1BCAA60();
      sub_1BCA908(v135, 0LL);
    }
  }
  if ( v78->max_length <= 6 )
    goto LABEL_139;
  v78->m_Items[6] = v83;
  v84 = &v78->m_Items[6];
LABEL_115:
  sub_1BCA784(v84, v83);
  v92 = System_String__Format_62415728(v77, v78, 0LL);
  userEntity = (__int64)this->fields.userEntity;
  if ( !userEntity )
    goto LABEL_140;
  if ( UserGameEntity__getAct((UserGameEntity_o *)userEntity, 0LL) < this->fields.usrMaxAp )
  {
    if ( this->fields.currentType == 2 )
    {
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v106);
      v107 = LocalizationManager__Get((System_String_o *)StringLiteral_2149/*"AP_RECOVER_STONEPAY_WARNING_MSG"*/, 0LL);
      v108 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v112 = (CommonConfirmDialog_ClickDelegate_o *)sub_1BCAA2C(
                                                      CommonConfirmDialog_ClickDelegate_TypeInfo,
                                                      v109,
                                                      v110,
                                                      v111);
      CommonConfirmDialog_ClickDelegate___ctor(
        v112,
        (Il2CppObject *)this,
        Method_RecoverItemComponent_spendItemDlg__,
        0LL);
      userEntity = (__int64)BalanceConfig_TypeInfo;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
        userEntity = j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v58);
      if ( v108 )
      {
        CommonUI__OpenConfirmDecideDlgAddMsgFrame(
          (CommonUI_o *)v108,
          v60,
          v92,
          v107,
          v68,
          v69,
          v112,
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
      sub_1BCAA3C(userEntity, v58);
    }
    if ( this->fields.isAddAp || this->fields.apRcvRate != 100 || this->fields.spendNum >= 2 )
    {
      v127 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      targetId = this->fields.targetId;
      needAp = this->fields.needAp;
      v130 = (CommonUI_o *)v127;
      v134 = (System_Action_bool__int__o *)sub_1BCAA2C(System_Action_bool__int__TypeInfo, v131, v132, v133);
      System_Action_bool__int____ctor(v134, (Il2CppObject *)this, Method_RecoverItemComponent_CloseApRecovDlg__, 0LL);
      if ( !v130 )
        goto LABEL_140;
      CommonUI__OpenApRecoverConfirmDlg(v130, targetId, needAp, v134, 0LL);
      return;
    }
LABEL_80:
    v94 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v98 = (CommonConfirmDialog_ClickDelegate_o *)sub_1BCAA2C(CommonConfirmDialog_ClickDelegate_TypeInfo, v95, v96, v97);
    CommonConfirmDialog_ClickDelegate___ctor(v98, (Il2CppObject *)this, Method_RecoverItemComponent_spendItemDlg__, 0LL);
    userEntity = (__int64)BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      userEntity = j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v58);
    if ( v94 )
    {
      CommonUI__OpenConfirmDecideDlg(
        (CommonUI_o *)v94,
        v60,
        v92,
        v68,
        v69,
        v98,
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
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v106);
  v113 = LocalizationManager__Get((System_String_o *)StringLiteral_2141/*"AP_FULL_MSG"*/, 0LL);
  v114 = System_String__Format(v113, mText, 0LL);
  v115 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v119 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v116, v117, v118);
  System_Action___ctor(v119, (Il2CppObject *)this, Method_RecoverItemComponent_closeNotificationDlg__, 0LL);
  if ( !v115 )
    goto LABEL_140;
  CommonUI__OpenNotificationDialog(
    (CommonUI_o *)v115,
    (System_String_o *)StringLiteral_1/*""*/,
    v114,
    v119,
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


// local variable allocation has failed, the output may be wrong!
void __fastcall RecoverItemComponent___AttachStoneCountRefreshComponent_b__38_0(
        RecoverItemComponent_o *this,
        int32_t stoneCount,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  UILabel_o *currentNumLb; // x19
  Il2CppObject *v8; // x0
  System_String_o *v9; // x0
  __int64 v10; // x1
  int32_t v11; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4B10FA1 & 1) == 0 )
  {
    sub_1BCA7E0(&int_TypeInfo, *(_QWORD *)&stoneCount, method);
    sub_1BCA7E0(&StringLiteral_25226/*"{0:N0}"*/, v5, v6);
    byte_4B10FA1 = 1;
  }
  currentNumLb = this->fields.currentNumLb;
  v11 = stoneCount;
  v8 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v11);
  v9 = System_String__Format((System_String_o *)StringLiteral_25226/*"{0:N0}"*/, v8, 0LL);
  if ( !currentNumLb )
    sub_1BCAA3C(v9, v10);
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

  if ( (byte_4B10F96 & 1) == 0 )
  {
    sub_1BCA7E0(&RecoverItemComponent_CallbackFunc_TypeInfo, value, method);
    byte_4B10F96 = 1;
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
    v9 = sub_1C05CD0(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (RecoverItemComponent_o *)sub_1BCACFC(v8);
  RecoverItemComponent__remove_callbackFunc(v11, v12, v13);
}


void __fastcall RecoverItemComponent__closeNotificationDlg(RecoverItemComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  Il2CppObject *Instance; // x0
  __int64 v4; // x1

  if ( (byte_4B10F9F & 1) == 0 )
  {
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, method, v2);
    byte_4B10F9F = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1BCAA3C(0LL, v4);
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

  if ( (byte_4B10F97 & 1) == 0 )
  {
    sub_1BCA7E0(&RecoverItemComponent_CallbackFunc_TypeInfo, value, method);
    byte_4B10F97 = 1;
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
    v9 = sub_1C05CD0(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (RecoverItemComponent_o *)sub_1BCACFC(v8);
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
  RecoverItemComponent_o *v10; // x19
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x1
  __int64 v32; // x2
  __int64 v33; // x1
  __int64 v34; // x2
  __int64 v35; // x1
  __int64 v36; // x2
  __int64 v37; // x1
  __int64 v38; // x2
  __int64 v39; // x1
  __int64 v40; // x2
  __int64 v41; // x1
  __int64 v42; // x2
  __int64 v43; // x1
  __int64 v44; // x2
  __int64 v45; // x1
  __int64 v46; // x2
  __int64 v47; // x1
  __int64 v48; // x2
  __int64 v49; // x1
  __int64 v50; // x2
  int32_t targetId; // w8
  UserGameEntity_o *SelfUserGame; // x0
  RecoverItemComponent_o **p_userEntity; // x23
  struct UserGameEntity_o *userEntity; // x8
  int32_t actMax; // w8
  unsigned int *p_spendNum; // x20
  __int64 v57; // x1
  UILabel_o *currentInfoLb; // x24
  UILabel_o *spendInfoLb; // x24
  int32_t currentType; // w8
  RecoverItemComponent_o *v61; // x21
  RecoverItemComponent_o *v62; // x22
  int recvTarget; // w24
  UILabel_o *v64; // x21
  Il2CppObject *v65; // x0
  UILabel_o *v66; // x21
  const MethodInfo *v67; // x1
  __int64 v68; // x1
  System_String_o *v69; // x20
  Il2CppObject *v70; // x0
  System_String_o *v71; // x0
  UILabel_o *v72; // x20
  Il2CppObject *v73; // x21
  System_String_o *v74; // x22
  Il2CppObject *v75; // x23
  Il2CppObject *v76; // x0
  bool v77; // cc
  int v78; // w8
  __int64 v79; // x1
  UILabel_o *v80; // x22
  UILabel_o *v81; // x22
  Il2CppObject *v82; // x0
  CommandSpellEntity_o *v83; // x22
  __int64 v84; // x2
  int32_t type; // w8
  struct ItemIconComponent_o *itemIconInfo; // x27
  float v87; // s0
  int v88; // w8
  float usrMaxAp; // s8
  float v90; // s9
  float v91; // s8
  unsigned int v92; // w9
  unsigned int v93; // w8
  System_String_o *v94; // x23
  Il2CppObject *v95; // x0
  System_String_o *v96; // x0
  UILabel_o *itemDetailLb; // x23
  Il2CppObject *v98; // x24
  System_String_o *v99; // x25
  Il2CppObject *v100; // x26
  Il2CppObject *v101; // x0
  int backSprite; // w22
  float v103; // s8
  float v104; // s8
  unsigned int v105; // w9
  unsigned int v106; // w8
  ItemEntity_o *RecvItemData; // x0
  ItemEntity_o *v108; // x24
  __int64 v109; // x2
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
  Il2CppObject *v125; // x0
  System_String_o *v126; // x0
  UILabel_o *v127; // x23
  Il2CppObject *v128; // x25
  System_String_o *v129; // x26
  Il2CppObject *v130; // x27
  Il2CppObject *v131; // x0
  int value; // w23
  float v133; // s8
  float v134; // s8
  unsigned int v135; // w8
  System_String_o *v136; // x21
  Il2CppObject *v137; // x0
  System_String_o *v138; // x0
  UILabel_o *v139; // x21
  Il2CppObject *v140; // x23
  System_String_o *v141; // x24
  Il2CppObject *v142; // x0
  UILabel_o *v143; // x21
  Il2CppObject *v144; // x0
  UILabel_o *v145; // x21
  int v146; // w8
  System_String_o *v147; // x21
  Il2CppObject *v148; // x0
  System_String_o *v149; // x0
  UILabel_o *v150; // x21
  Il2CppObject *v151; // x22
  System_String_o *v152; // x23
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
  if ( (byte_4B10F98 & 1) == 0 )
  {
    sub_1BCA7E0(&BalanceConfig_TypeInfo, data, *(_QWORD *)&needAp);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_CommandSpellMaster___, v11, v12);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ItemMaster___, v13, v14);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_StoneShopMaster___, v15, v16);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserItemMaster___, v17, v18);
    sub_1BCA7E0(&Method_DataMasterBase_CommandSpellMaster__CommandSpellEntity__int__GetEntity__, v19, v20);
    sub_1BCA7E0(&Method_DataMasterBase_StoneShopMaster__StoneShopEntity__int__GetEntity__, v21, v22);
    sub_1BCA7E0(&int_TypeInfo, v23, v24);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v25, v26);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v27, v28);
    sub_1BCA7E0(&StringLiteral_3638/*"CMDSPELL_CURRENT_NUM"*/, v29, v30);
    sub_1BCA7E0(&StringLiteral_2043/*"ADD_RECOVER_CMDSPELL_TXT"*/, v31, v32);
    sub_1BCA7E0(&StringLiteral_3640/*"CMDSPELL_SPEND_NUM_TXT"*/, v33, v34);
    sub_1BCA7E0(&StringLiteral_25226/*"{0:N0}"*/, v35, v36);
    sub_1BCA7E0(&StringLiteral_915/*"-"*/, v37, v38);
    sub_1BCA7E0(&StringLiteral_14962/*"UNIT_INFO"*/, v39, v40);
    sub_1BCA7E0(&StringLiteral_12349/*"SPEND_NUM_TXT"*/, v41, v42);
    sub_1BCA7E0(&StringLiteral_4015/*"CURRENT_NUM_TXT"*/, v43, v44);
    sub_1BCA7E0(&StringLiteral_2044/*"ADD_RECOVER_NUM_TXT"*/, v45, v46);
    sub_1BCA7E0(&StringLiteral_2146/*"AP_RECOVER_NUM_TXT"*/, v47, v48);
    this = (RecoverItemComponent_o *)sub_1BCA7E0(&StringLiteral_3639/*"CMDSPELL_CURRENT_NUM_TXT"*/, v49, v50);
    byte_4B10F98 = 1;
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
  sub_1BCA784(&v10->fields.dialog, dlg);
  v10->fields.callbackFunc = callback;
  v10->fields.needAp = needAp;
  *(_WORD *)&v10->fields.isAp = 1;
  sub_1BCA784(&v10->fields.callbackFunc, callback);
  this = (RecoverItemComponent_o *)v10->fields.maskImg;
  if ( !this )
    goto LABEL_151;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  v10->fields.userEntity = SelfUserGame;
  p_userEntity = (RecoverItemComponent_o **)&v10->fields.userEntity;
  sub_1BCA784(&v10->fields.userEntity, SelfUserGame);
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
  UILabel__set_text((UILabel_o *)this, (System_String_o *)StringLiteral_915/*"-"*/, 0LL);
  this = (RecoverItemComponent_o *)v10->fields.currentNumLb;
  if ( !this )
    goto LABEL_151;
  UILabel__set_text((UILabel_o *)this, (System_String_o *)StringLiteral_915/*"-"*/, 0LL);
  this = (RecoverItemComponent_o *)v10->fields.spendNumLb;
  if ( !this )
    goto LABEL_151;
  UILabel__set_text((UILabel_o *)this, (System_String_o *)StringLiteral_915/*"-"*/, 0LL);
  this = (RecoverItemComponent_o *)v10->fields.itemDetailLb;
  if ( !this )
    goto LABEL_151;
  UILabel__set_text((UILabel_o *)this, (System_String_o *)StringLiteral_915/*"-"*/, 0LL);
  currentInfoLb = v10->fields.currentInfoLb;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v57);
  this = (RecoverItemComponent_o *)LocalizationManager__Get((System_String_o *)StringLiteral_4015/*"CURRENT_NUM_TXT"*/, 0LL);
  if ( !currentInfoLb )
    goto LABEL_151;
  UILabel__set_text(currentInfoLb, (System_String_o *)this, 0LL);
  spendInfoLb = v10->fields.spendInfoLb;
  this = (RecoverItemComponent_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12349/*"SPEND_NUM_TXT"*/, 0LL);
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
    v80 = v10->fields.currentInfoLb;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v79);
    this = (RecoverItemComponent_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3639/*"CMDSPELL_CURRENT_NUM_TXT"*/, 0LL);
    if ( !v80 )
      goto LABEL_151;
    UILabel__set_text(v80, (System_String_o *)this, 0LL);
    v81 = v10->fields.spendInfoLb;
    this = (RecoverItemComponent_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3640/*"CMDSPELL_SPEND_NUM_TXT"*/, 0LL);
    if ( !v81 )
      goto LABEL_151;
    UILabel__set_text(v81, (System_String_o *)this, 0LL);
    this = (RecoverItemComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !this )
      goto LABEL_151;
    this = (RecoverItemComponent_o *)DataManager__GetMasterData_object_(
                                       (DataManager_o *)this,
                                       (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_CommandSpellMaster___);
    if ( !this )
      goto LABEL_151;
    v82 = DataMasterBase_object__object__int___GetEntity(
            (DataMasterBase_TMaster__TEntity__PKType__o *)this,
            v10->fields.targetId,
            (const MethodInfo_31B2E40 *)Method_DataMasterBase_CommandSpellMaster__CommandSpellEntity__int__GetEntity__);
    if ( !v82 )
      goto LABEL_150;
    v83 = (CommandSpellEntity_o *)v82;
    this = (RecoverItemComponent_o *)v10->fields.cmdSpellIcon;
    if ( !this )
      goto LABEL_151;
    CommandSpellIconComponent__SetData((CommandSpellIconComponent_o *)this, v10->fields.userEntity, 0LL);
    this = (RecoverItemComponent_o *)v10->fields.itemNameLb;
    if ( !this )
      goto LABEL_151;
    UILabel__set_text((UILabel_o *)this, v83->fields.name, 0LL);
    this = *p_userEntity;
    if ( !*p_userEntity )
      goto LABEL_151;
    CommandSpell = UserGameEntity__getCommandSpell((UserGameEntity_o *)this, 0LL);
    *p_spendNum = v83->fields.consume;
    this = (RecoverItemComponent_o *)CommandSpellEntity__getValues(v83, 0LL);
    if ( !this )
      goto LABEL_151;
    if ( LODWORD(this->fields.m_CancellationTokenSource) )
    {
      type = v83->fields.type;
      itemIconInfo = this->fields.itemIconInfo;
      if ( type == 3 )
      {
        if ( !itemIconInfo )
          goto LABEL_151;
        if ( !LODWORD(itemIconInfo->fields.m_CancellationTokenSource) )
          goto LABEL_152;
        v87 = (float)((float)SLODWORD(itemIconInfo->fields.backSprite) / 1000.0) * 100.0;
        v88 = (int)v87;
        if ( v87 == INFINITY )
          v88 = 0x80000000;
        v10->fields.apRcvRate = v88;
        usrMaxAp = (float)v10->fields.usrMaxAp;
        v90 = (float)SLODWORD(itemIconInfo->fields.backSprite) / 1000.0;
        if ( !byte_4B1103A )
        {
          sub_1BCA7E0(&System_Math_TypeInfo, data, v84);
          byte_4B1103A = 1;
        }
        v91 = v90 * usrMaxAp;
        if ( !System_Math_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, data);
        v92 = vcvtps_s32_f32(v91);
        if ( ceilf(v91) == INFINITY )
          v93 = 0x80000000;
        else
          v93 = v92;
        v10->fields.recvApNum = v93;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, data);
        v94 = LocalizationManager__Get((System_String_o *)StringLiteral_3638/*"CMDSPELL_CURRENT_NUM"*/, 0LL);
        spendNum = v10->fields.spendNum;
        v95 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &spendNum);
        v96 = System_String__Format(v94, v95, 0LL);
        itemDetailLb = v10->fields.itemDetailLb;
        v98 = (Il2CppObject *)v96;
        v99 = LocalizationManager__Get((System_String_o *)StringLiteral_2146/*"AP_RECOVER_NUM_TXT"*/, 0LL);
        apRcvRate = v10->fields.apRcvRate;
        v100 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &apRcvRate);
        recvApNum = v10->fields.recvApNum;
        v101 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &recvApNum);
        this = (RecoverItemComponent_o *)System_String__Format_62415660(v99, v98, v100, v101, 0LL);
        if ( !itemDetailLb )
          goto LABEL_151;
        UILabel__set_text(itemDetailLb, (System_String_o *)this, 0LL);
        type = v83->fields.type;
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
            v77 = CommandSpell < v10->fields.spendNum;
            v78 = v10->fields.recvApNum + v10->fields.usrCurrentAp;
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
          v106 = *p_spendNum;
        }
        else
        {
          v103 = (float)(needAp - v10->fields.usrCurrentAp) / (float)backSprite;
          if ( !byte_4B1103A )
          {
            sub_1BCA7E0(&System_Math_TypeInfo, data, v84);
            byte_4B1103A = 1;
          }
          v104 = fmaxf(v103, 1.0);
          if ( !System_Math_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, data);
          v105 = vcvtps_s32_f32(v104);
          if ( ceilf(v104) == INFINITY )
            v106 = 0x80000000;
          else
            v106 = v105;
          *p_spendNum = v106;
        }
        v10->fields.recvApNum = v106 * backSprite;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, data);
        v147 = LocalizationManager__Get((System_String_o *)StringLiteral_3638/*"CMDSPELL_CURRENT_NUM"*/, 0LL);
        spendNum = v10->fields.spendNum;
        v148 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &spendNum);
        v149 = System_String__Format(v147, v148, 0LL);
        v150 = v10->fields.itemDetailLb;
        v151 = (Il2CppObject *)v149;
        v152 = LocalizationManager__Get((System_String_o *)StringLiteral_2043/*"ADD_RECOVER_CMDSPELL_TXT"*/, 0LL);
        apRcvRate = v10->fields.recvApNum;
        v153 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &apRcvRate);
        this = (RecoverItemComponent_o *)System_String__Format_62415592(v152, v151, v153, 0LL);
        if ( !v150 )
          goto LABEL_151;
        UILabel__set_text(v150, (System_String_o *)this, 0LL);
        v10->fields.isAddAp = 1;
        goto LABEL_143;
      }
    }
LABEL_152:
    sub_1BCAA44(this, data);
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
          v108 = RecvItemData;
          this = (RecoverItemComponent_o *)v10->fields.itemIconInfo;
          if ( this )
          {
            ItemIconComponent__SetItemImage_38852864(
              (ItemIconComponent_o *)this,
              v108->fields.imageId,
              v108->fields.bgImageId,
              v108->fields.type,
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
                  UILabel__set_text((UILabel_o *)this, v108->fields.name, 0LL);
                  *p_spendNum = 1;
                  this = (RecoverItemComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
                  if ( this )
                  {
                    this = (RecoverItemComponent_o *)DataManager__GetMasterData_object_(
                                                       (DataManager_o *)this,
                                                       (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserItemMaster___);
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
                        v111 = v108->fields.type;
                        if ( v111 == 3 )
                        {
                          v112 = BalanceConfig_TypeInfo;
                          if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
                          {
                            j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, data);
                            v112 = BalanceConfig_TypeInfo;
                          }
                          v10->fields.spendNum = v112->static_fields->SpendApRecvItemNum;
                          v113 = (float)v108->fields.value / 1000.0;
                          if ( (float)(v113 * 100.0) == INFINITY )
                            v114 = 0x80000000;
                          else
                            v114 = (int)(float)(v113 * 100.0);
                          v115 = v10->fields.usrMaxAp;
                          v10->fields.apRcvRate = v114;
                          v116 = (float)v115;
                          if ( !byte_4B1103A )
                          {
                            sub_1BCA7E0(&System_Math_TypeInfo, data, v109);
                            byte_4B1103A = 1;
                          }
                          v117 = v113 * v116;
                          if ( !System_Math_TypeInfo->_2.cctor_finished )
                            j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, data);
                          v118 = vcvtps_s32_f32(v117);
                          if ( ceilf(v117) == INFINITY )
                            v118 = 0x80000000;
                          v10->fields.recvApNum = v118;
                          if ( needAp >= 1 )
                          {
                            v119 = (float)(needAp - v10->fields.usrCurrentAp) / (float)v118;
                            if ( !byte_4B1103A )
                            {
                              sub_1BCA7E0(&System_Math_TypeInfo, data, v109);
                              byte_4B1103A = 1;
                            }
                            v120 = fmaxf(v119, 1.0);
                            if ( !System_Math_TypeInfo->_2.cctor_finished )
                              j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, data);
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
                            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, data);
                          v124 = LocalizationManager__Get((System_String_o *)StringLiteral_14962/*"UNIT_INFO"*/, 0LL);
                          spendNum = v10->fields.spendNum;
                          v125 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &spendNum);
                          v126 = System_String__Format(v124, v125, 0LL);
                          v127 = v10->fields.itemDetailLb;
                          v128 = (Il2CppObject *)v126;
                          v129 = LocalizationManager__Get((System_String_o *)StringLiteral_2146/*"AP_RECOVER_NUM_TXT"*/, 0LL);
                          apRcvRate = v10->fields.apRcvRate;
                          v130 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &apRcvRate);
                          recvApNum = v10->fields.recvApNum;
                          v131 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &recvApNum);
                          this = (RecoverItemComponent_o *)System_String__Format_62415660(v129, v128, v130, v131, 0LL);
                          if ( !v127 )
                            goto LABEL_151;
                          UILabel__set_text(v127, (System_String_o *)this, 0LL);
                          v111 = v108->fields.type;
                        }
                        if ( v111 == 4 )
                        {
                          value = v108->fields.value;
                          if ( needAp < 1 )
                          {
                            *p_spendNum = 1;
                          }
                          else
                          {
                            v133 = (float)(needAp - v10->fields.usrCurrentAp) / (float)value;
                            if ( !byte_4B1103A )
                            {
                              sub_1BCA7E0(&System_Math_TypeInfo, data, v109);
                              byte_4B1103A = 1;
                            }
                            v134 = fmaxf(v133, 1.0);
                            if ( !System_Math_TypeInfo->_2.cctor_finished )
                              j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, data);
                            v135 = vcvtps_s32_f32(v134);
                            if ( ceilf(v134) == INFINITY )
                              v135 = 0x80000000;
                            *p_spendNum = v135;
                            value *= v135;
                          }
                          v10->fields.recvApNum = value;
                          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, data);
                          v136 = LocalizationManager__Get((System_String_o *)StringLiteral_14962/*"UNIT_INFO"*/, 0LL);
                          spendNum = v10->fields.spendNum;
                          v137 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &spendNum);
                          v138 = System_String__Format(v136, v137, 0LL);
                          v139 = v10->fields.itemDetailLb;
                          v140 = (Il2CppObject *)v138;
                          v141 = LocalizationManager__Get((System_String_o *)StringLiteral_2044/*"ADD_RECOVER_NUM_TXT"*/, 0LL);
                          apRcvRate = v10->fields.recvApNum;
                          v142 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &apRcvRate);
                          this = (RecoverItemComponent_o *)System_String__Format_62415592(v141, v140, v142, 0LL);
                          if ( !v139 )
                            goto LABEL_151;
                          UILabel__set_text(v139, (System_String_o *)this, 0LL);
                          v10->fields.isAddAp = 1;
                        }
                        v143 = v10->fields.currentNumLb;
                        spendNum = num;
                        v144 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &spendNum);
                        this = (RecoverItemComponent_o *)System_String__Format(
                                                           (System_String_o *)StringLiteral_25226/*"{0:N0}"*/,
                                                           v144,
                                                           0LL);
                        if ( v143 )
                        {
                          UILabel__set_text(v143, (System_String_o *)this, 0LL);
                          v145 = v10->fields.spendNumLb;
                          this = (RecoverItemComponent_o *)System_Int32__ToString((int)v10 + 128, 0LL);
                          if ( v145 )
                          {
                            UILabel__set_text(v145, (System_String_o *)this, 0LL);
                            v146 = v10->fields.recvApNum + v10->fields.usrCurrentAp;
                            v10->fields.isEnableSelect = num >= v10->fields.spendNum;
                            v10->fields.recvSum = v146;
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
    sub_1BCAA3C(this, data);
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
  this = (RecoverItemComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_151;
  this = (RecoverItemComponent_o *)DataManager__GetMasterData_object_(
                                     (DataManager_o *)this,
                                     (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ItemMaster___);
  if ( !this )
    goto LABEL_151;
  this = (RecoverItemComponent_o *)ItemMaster__GetEntityByType((ItemMaster_o *)this, 2, 0LL);
  if ( !this )
    goto LABEL_151;
  v61 = this;
  this = (RecoverItemComponent_o *)v10->fields.itemIconInfo;
  if ( !this )
    goto LABEL_151;
  ItemIconComponent__SetItemImage_38852864(
    (ItemIconComponent_o *)this,
    (int32_t)v61->fields.cmdSpellBg,
    HIDWORD(v61->fields.cmdSpellBg),
    (int32_t)v61->fields.cmdSpellIcon,
    0,
    0LL);
  this = (RecoverItemComponent_o *)v10->fields.itemIconInfo;
  if ( !this )
    goto LABEL_151;
  this = (RecoverItemComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !this )
    goto LABEL_151;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
  this = (RecoverItemComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_151;
  this = (RecoverItemComponent_o *)DataManager__GetMasterData_object_(
                                     (DataManager_o *)this,
                                     (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_StoneShopMaster___);
  if ( !this )
    goto LABEL_151;
  this = (RecoverItemComponent_o *)DataMasterBase_object__object__int___GetEntity(
                                     (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                     v10->fields.targetId,
                                     (const MethodInfo_31B2E40 *)Method_DataMasterBase_StoneShopMaster__StoneShopEntity__int__GetEntity__);
  if ( !v10->fields.itemNameLb )
    goto LABEL_151;
  v62 = this;
  UILabel__set_text(v10->fields.itemNameLb, (System_String_o *)v61->fields.m_CancellationTokenSource, 0LL);
  if ( !*p_userEntity )
    goto LABEL_151;
  recvTarget = (*p_userEntity)->fields.recvTarget;
  if ( v62 )
    *p_spendNum = HIDWORD(v62->fields.cmdSpellBg);
  v64 = v10->fields.currentNumLb;
  spendNum = recvTarget;
  v65 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &spendNum);
  this = (RecoverItemComponent_o *)System_String__Format((System_String_o *)StringLiteral_25226/*"{0:N0}"*/, v65, 0LL);
  if ( !v64 )
    goto LABEL_151;
  UILabel__set_text(v64, (System_String_o *)this, 0LL);
  v66 = v10->fields.spendNumLb;
  this = (RecoverItemComponent_o *)System_Int32__ToString((int)v10 + 128, 0LL);
  if ( !v66 )
    goto LABEL_151;
  UILabel__set_text(v66, (System_String_o *)this, 0LL);
  RecoverItemComponent__AttachStoneCountRefreshComponent(v10, v67);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v68);
  v69 = LocalizationManager__Get((System_String_o *)StringLiteral_14962/*"UNIT_INFO"*/, 0LL);
  apRcvRate = v10->fields.spendNum;
  v70 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &apRcvRate);
  v71 = System_String__Format(v69, v70, 0LL);
  v72 = v10->fields.itemDetailLb;
  v73 = (Il2CppObject *)v71;
  v74 = LocalizationManager__Get((System_String_o *)StringLiteral_2146/*"AP_RECOVER_NUM_TXT"*/, 0LL);
  recvApNum = v10->fields.apRcvRate;
  v75 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &recvApNum);
  v157 = v10->fields.recvApNum;
  v76 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v157);
  this = (RecoverItemComponent_o *)System_String__Format_62415660(v74, v73, v75, v76, 0LL);
  if ( !v72 )
    goto LABEL_151;
  UILabel__set_text(v72, (System_String_o *)this, 0LL);
  v77 = recvTarget < v10->fields.spendNum;
  v78 = v10->fields.usrMaxAp + v10->fields.usrCurrentAp;
LABEL_146:
  v156 = !v77;
  v10->fields.isEnableSelect = v156;
  v10->fields.recvSum = v78;
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
      sub_1BCAA3C(0LL, method);
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
  RecoverItemComponent_o *v10; // x19
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x1
  __int64 v32; // x2
  __int64 v33; // x1
  __int64 v34; // x2
  __int64 v35; // x1
  __int64 v36; // x2
  __int64 v37; // x1
  __int64 v38; // x2
  __int64 v39; // x1
  __int64 v40; // x2
  __int64 v41; // x1
  __int64 v42; // x2
  __int64 v43; // x1
  __int64 v44; // x2
  __int64 v45; // x1
  __int64 v46; // x2
  __int64 v47; // x1
  __int64 v48; // x2
  int32_t targetId; // w8
  UserGameEntity_o *SelfUserGame; // x0
  RecoverItemComponent_o **p_userEntity; // x23
  BalanceConfig_c *v52; // x0
  int32_t UerGameRpMax; // w8
  unsigned int *p_spendNum; // x20
  __int64 v55; // x1
  UILabel_o *currentInfoLb; // x24
  UILabel_o *spendInfoLb; // x24
  int32_t currentType; // w8
  RecoverItemComponent_o *v59; // x21
  RecoverItemComponent_o *v60; // x22
  int recvTarget; // w23
  UILabel_o *v62; // x21
  Il2CppObject *v63; // x0
  UILabel_o *v64; // x21
  const MethodInfo *v65; // x1
  __int64 v66; // x1
  System_String_o *v67; // x20
  Il2CppObject *v68; // x0
  System_String_o *v69; // x0
  UILabel_o *v70; // x20
  Il2CppObject *v71; // x21
  System_String_o *v72; // x22
  Il2CppObject *v73; // x0
  bool v74; // cc
  int v75; // w8
  __int64 v76; // x1
  UILabel_o *v77; // x22
  UILabel_o *v78; // x22
  Il2CppObject *v79; // x0
  CommandSpellEntity_o *v80; // x22
  __int64 v81; // x2
  struct ItemIconComponent_o *itemIconInfo; // x8
  int backSprite; // w22
  float v84; // s8
  float v85; // s8
  unsigned int v86; // w9
  unsigned int v87; // w8
  ItemEntity_o *RecvItemData; // x0
  ItemEntity_o *v89; // x24
  __int64 v90; // x1
  __int64 v91; // x2
  int32_t v92; // w26
  int value; // w23
  float v94; // s8
  float v95; // s8
  unsigned int v96; // w8
  System_String_o *v97; // x21
  Il2CppObject *v98; // x0
  System_String_o *v99; // x0
  UILabel_o *v100; // x21
  Il2CppObject *v101; // x23
  System_String_o *v102; // x24
  Il2CppObject *v103; // x0
  UILabel_o *v104; // x21
  Il2CppObject *v105; // x0
  UILabel_o *v106; // x21
  int v107; // w8
  System_String_o *v108; // x21
  Il2CppObject *v109; // x0
  System_String_o *v110; // x0
  UILabel_o *itemDetailLb; // x21
  Il2CppObject *v112; // x22
  System_String_o *v113; // x23
  Il2CppObject *v114; // x0
  UILabel_o *currentNumLb; // x21
  UILabel_o *spendNumLb; // x21
  char v117; // w9
  int32_t v118; // [xsp+0h] [xbp-70h] BYREF
  int32_t recvRpNum; // [xsp+4h] [xbp-6Ch] BYREF
  int32_t spendNum; // [xsp+8h] [xbp-68h] BYREF
  int32_t CommandSpell; // [xsp+Ch] [xbp-64h] BYREF
  UserItemEntity_o *entity; // [xsp+28h] [xbp-48h] BYREF

  v10 = this;
  if ( (byte_4B10F99 & 1) == 0 )
  {
    sub_1BCA7E0(&BalanceConfig_TypeInfo, data, *(_QWORD *)&needRp);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_CommandSpellMaster___, v11, v12);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ItemMaster___, v13, v14);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_StoneShopMaster___, v15, v16);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserItemMaster___, v17, v18);
    sub_1BCA7E0(&Method_DataMasterBase_CommandSpellMaster__CommandSpellEntity__int__GetEntity__, v19, v20);
    sub_1BCA7E0(&Method_DataMasterBase_StoneShopMaster__StoneShopEntity__int__GetEntity__, v21, v22);
    sub_1BCA7E0(&int_TypeInfo, v23, v24);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v25, v26);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v27, v28);
    sub_1BCA7E0(&StringLiteral_3638/*"CMDSPELL_CURRENT_NUM"*/, v29, v30);
    sub_1BCA7E0(&StringLiteral_3640/*"CMDSPELL_SPEND_NUM_TXT"*/, v31, v32);
    sub_1BCA7E0(&StringLiteral_25226/*"{0:N0}"*/, v33, v34);
    sub_1BCA7E0(&StringLiteral_915/*"-"*/, v35, v36);
    sub_1BCA7E0(&StringLiteral_14962/*"UNIT_INFO"*/, v37, v38);
    sub_1BCA7E0(&StringLiteral_12349/*"SPEND_NUM_TXT"*/, v39, v40);
    sub_1BCA7E0(&StringLiteral_4015/*"CURRENT_NUM_TXT"*/, v41, v42);
    sub_1BCA7E0(&StringLiteral_11266/*"RP_RECOVER_CMDSPELL_TXT"*/, v43, v44);
    sub_1BCA7E0(&StringLiteral_11268/*"RP_RECOVER_NUM_TXT"*/, v45, v46);
    this = (RecoverItemComponent_o *)sub_1BCA7E0(&StringLiteral_3639/*"CMDSPELL_CURRENT_NUM_TXT"*/, v47, v48);
    byte_4B10F99 = 1;
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
  sub_1BCA784(&v10->fields.dialog, dlg);
  v10->fields.callbackFunc = callback;
  sub_1BCA784(&v10->fields.callbackFunc, callback);
  this = (RecoverItemComponent_o *)v10->fields.maskImg;
  if ( !this )
    goto LABEL_107;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  v10->fields.userEntity = SelfUserGame;
  p_userEntity = (RecoverItemComponent_o **)&v10->fields.userEntity;
  sub_1BCA784(&v10->fields.userEntity, SelfUserGame);
  this = (RecoverItemComponent_o *)v10->fields.userEntity;
  if ( !this )
    goto LABEL_107;
  v10->fields.usrCurrentRp = UserGameEntity__getRp((UserGameEntity_o *)this, 0LL);
  v52 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, data);
    v52 = BalanceConfig_TypeInfo;
  }
  UerGameRpMax = v52->static_fields->UerGameRpMax;
  v10->fields.spendNum = 1;
  p_spendNum = (unsigned int *)&v10->fields.spendNum;
  this = (RecoverItemComponent_o *)v10->fields.itemNameLb;
  v10->fields.isAp = 0;
  v10->fields.usrMaxRp = UerGameRpMax;
  v10->fields.recvRpNum = UerGameRpMax;
  if ( !this )
    goto LABEL_107;
  UILabel__set_text((UILabel_o *)this, (System_String_o *)StringLiteral_915/*"-"*/, 0LL);
  this = (RecoverItemComponent_o *)v10->fields.currentNumLb;
  if ( !this )
    goto LABEL_107;
  UILabel__set_text((UILabel_o *)this, (System_String_o *)StringLiteral_915/*"-"*/, 0LL);
  this = (RecoverItemComponent_o *)v10->fields.spendNumLb;
  if ( !this )
    goto LABEL_107;
  UILabel__set_text((UILabel_o *)this, (System_String_o *)StringLiteral_915/*"-"*/, 0LL);
  this = (RecoverItemComponent_o *)v10->fields.itemDetailLb;
  if ( !this )
    goto LABEL_107;
  UILabel__set_text((UILabel_o *)this, (System_String_o *)StringLiteral_915/*"-"*/, 0LL);
  currentInfoLb = v10->fields.currentInfoLb;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v55);
  this = (RecoverItemComponent_o *)LocalizationManager__Get((System_String_o *)StringLiteral_4015/*"CURRENT_NUM_TXT"*/, 0LL);
  if ( !currentInfoLb )
    goto LABEL_107;
  UILabel__set_text(currentInfoLb, (System_String_o *)this, 0LL);
  spendInfoLb = v10->fields.spendInfoLb;
  this = (RecoverItemComponent_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12349/*"SPEND_NUM_TXT"*/, 0LL);
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
          v77 = v10->fields.currentInfoLb;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v76);
          this = (RecoverItemComponent_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3639/*"CMDSPELL_CURRENT_NUM_TXT"*/, 0LL);
          if ( v77 )
          {
            UILabel__set_text(v77, (System_String_o *)this, 0LL);
            v78 = v10->fields.spendInfoLb;
            this = (RecoverItemComponent_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3640/*"CMDSPELL_SPEND_NUM_TXT"*/, 0LL);
            if ( v78 )
            {
              UILabel__set_text(v78, (System_String_o *)this, 0LL);
              this = (RecoverItemComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
              if ( this )
              {
                this = (RecoverItemComponent_o *)DataManager__GetMasterData_object_(
                                                   (DataManager_o *)this,
                                                   (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_CommandSpellMaster___);
                if ( this )
                {
                  v79 = DataMasterBase_object__object__int___GetEntity(
                          (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                          v10->fields.targetId,
                          (const MethodInfo_31B2E40 *)Method_DataMasterBase_CommandSpellMaster__CommandSpellEntity__int__GetEntity__);
                  if ( !v79 )
                    goto LABEL_106;
                  v80 = (CommandSpellEntity_o *)v79;
                  this = (RecoverItemComponent_o *)v10->fields.cmdSpellIcon;
                  if ( this )
                  {
                    CommandSpellIconComponent__SetData((CommandSpellIconComponent_o *)this, v10->fields.userEntity, 0LL);
                    this = (RecoverItemComponent_o *)v10->fields.itemNameLb;
                    if ( this )
                    {
                      UILabel__set_text((UILabel_o *)this, v80->fields.name, 0LL);
                      this = *p_userEntity;
                      if ( *p_userEntity )
                      {
                        CommandSpell = UserGameEntity__getCommandSpell((UserGameEntity_o *)this, 0LL);
                        *p_spendNum = v80->fields.consume;
                        this = (RecoverItemComponent_o *)CommandSpellEntity__getValues(v80, 0LL);
                        if ( this )
                        {
                          if ( !LODWORD(this->fields.m_CancellationTokenSource) )
                            goto LABEL_108;
                          itemIconInfo = this->fields.itemIconInfo;
                          if ( !itemIconInfo )
                            goto LABEL_107;
                          if ( !LODWORD(itemIconInfo->fields.m_CancellationTokenSource) )
LABEL_108:
                            sub_1BCAA44(this, data);
                          backSprite = (int)itemIconInfo->fields.backSprite;
                          if ( needRp < 1 )
                          {
                            v87 = *p_spendNum;
                          }
                          else
                          {
                            v84 = (float)(needRp - v10->fields.usrCurrentRp) / (float)backSprite;
                            if ( !byte_4B1103A )
                            {
                              sub_1BCA7E0(&System_Math_TypeInfo, data, v81);
                              byte_4B1103A = 1;
                            }
                            v85 = fmaxf(v84, 1.0);
                            if ( !System_Math_TypeInfo->_2.cctor_finished )
                              j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, data);
                            v86 = vcvtps_s32_f32(v85);
                            if ( ceilf(v85) == INFINITY )
                              v87 = 0x80000000;
                            else
                              v87 = v86;
                            *p_spendNum = v87;
                          }
                          v10->fields.recvRpNum = v87 * backSprite;
                          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, data);
                          v108 = LocalizationManager__Get((System_String_o *)StringLiteral_3638/*"CMDSPELL_CURRENT_NUM"*/, 0LL);
                          spendNum = v10->fields.spendNum;
                          v109 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &spendNum);
                          v110 = System_String__Format(v108, v109, 0LL);
                          itemDetailLb = v10->fields.itemDetailLb;
                          v112 = (Il2CppObject *)v110;
                          v113 = LocalizationManager__Get((System_String_o *)StringLiteral_11266/*"RP_RECOVER_CMDSPELL_TXT"*/, 0LL);
                          recvRpNum = v10->fields.recvRpNum;
                          v114 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &recvRpNum);
                          this = (RecoverItemComponent_o *)System_String__Format_62415592(v113, v112, v114, 0LL);
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
                                v74 = CommandSpell < v10->fields.spendNum;
                                v75 = v10->fields.recvRpNum + v10->fields.usrCurrentRp;
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
          v89 = RecvItemData;
          this = (RecoverItemComponent_o *)v10->fields.itemIconInfo;
          if ( this )
          {
            ItemIconComponent__SetItemImage_38852864(
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
                  this = (RecoverItemComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
                  if ( this )
                  {
                    this = (RecoverItemComponent_o *)DataManager__GetMasterData_object_(
                                                       (DataManager_o *)this,
                                                       (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserItemMaster___);
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
                        v92 = entity ? entity->fields.num : 0;
                        value = v89->fields.value;
                        if ( needRp < 1 )
                        {
                          *p_spendNum = 1;
                        }
                        else
                        {
                          v94 = (float)(needRp - v10->fields.usrCurrentRp) / (float)value;
                          if ( !byte_4B1103A )
                          {
                            sub_1BCA7E0(&System_Math_TypeInfo, v90, v91);
                            byte_4B1103A = 1;
                          }
                          v95 = fmaxf(v94, 1.0);
                          if ( !System_Math_TypeInfo->_2.cctor_finished )
                            j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, v90);
                          v96 = vcvtps_s32_f32(v95);
                          if ( ceilf(v95) == INFINITY )
                            v96 = 0x80000000;
                          *p_spendNum = v96;
                          value *= v96;
                        }
                        v10->fields.recvRpNum = value;
                        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v90);
                        v97 = LocalizationManager__Get((System_String_o *)StringLiteral_14962/*"UNIT_INFO"*/, 0LL);
                        spendNum = v10->fields.spendNum;
                        v98 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &spendNum);
                        v99 = System_String__Format(v97, v98, 0LL);
                        v100 = v10->fields.itemDetailLb;
                        v101 = (Il2CppObject *)v99;
                        v102 = LocalizationManager__Get((System_String_o *)StringLiteral_11268/*"RP_RECOVER_NUM_TXT"*/, 0LL);
                        recvRpNum = v10->fields.recvRpNum;
                        v103 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &recvRpNum);
                        this = (RecoverItemComponent_o *)System_String__Format_62415592(v102, v101, v103, 0LL);
                        if ( v100 )
                        {
                          UILabel__set_text(v100, (System_String_o *)this, 0LL);
                          v104 = v10->fields.currentNumLb;
                          v118 = v92;
                          v105 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v118);
                          this = (RecoverItemComponent_o *)System_String__Format(
                                                             (System_String_o *)StringLiteral_25226/*"{0:N0}"*/,
                                                             v105,
                                                             0LL);
                          if ( v104 )
                          {
                            UILabel__set_text(v104, (System_String_o *)this, 0LL);
                            v106 = v10->fields.spendNumLb;
                            this = (RecoverItemComponent_o *)System_Int32__ToString((int)v10 + 128, 0LL);
                            if ( v106 )
                            {
                              UILabel__set_text(v106, (System_String_o *)this, 0LL);
                              v107 = v10->fields.recvRpNum + v10->fields.usrCurrentRp;
                              v10->fields.isEnableSelect = v92 >= v10->fields.spendNum;
                              v10->fields.recvSum = v107;
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
  this = (RecoverItemComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_107;
  this = (RecoverItemComponent_o *)DataManager__GetMasterData_object_(
                                     (DataManager_o *)this,
                                     (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ItemMaster___);
  if ( !this )
    goto LABEL_107;
  this = (RecoverItemComponent_o *)ItemMaster__GetEntityByType((ItemMaster_o *)this, 2, 0LL);
  if ( !this )
    goto LABEL_107;
  v59 = this;
  this = (RecoverItemComponent_o *)v10->fields.itemIconInfo;
  if ( !this )
    goto LABEL_107;
  ItemIconComponent__SetItemImage_38852864(
    (ItemIconComponent_o *)this,
    (int32_t)v59->fields.cmdSpellBg,
    HIDWORD(v59->fields.cmdSpellBg),
    (int32_t)v59->fields.cmdSpellIcon,
    0,
    0LL);
  this = (RecoverItemComponent_o *)v10->fields.itemIconInfo;
  if ( !this )
    goto LABEL_107;
  this = (RecoverItemComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !this )
    goto LABEL_107;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
  this = (RecoverItemComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_107;
  this = (RecoverItemComponent_o *)DataManager__GetMasterData_object_(
                                     (DataManager_o *)this,
                                     (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_StoneShopMaster___);
  if ( !this )
    goto LABEL_107;
  this = (RecoverItemComponent_o *)DataMasterBase_object__object__int___GetEntity(
                                     (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                     v10->fields.targetId,
                                     (const MethodInfo_31B2E40 *)Method_DataMasterBase_StoneShopMaster__StoneShopEntity__int__GetEntity__);
  if ( !v10->fields.itemNameLb )
    goto LABEL_107;
  v60 = this;
  UILabel__set_text(v10->fields.itemNameLb, (System_String_o *)v59->fields.m_CancellationTokenSource, 0LL);
  if ( !*p_userEntity )
    goto LABEL_107;
  recvTarget = (*p_userEntity)->fields.recvTarget;
  if ( v60 )
    *p_spendNum = HIDWORD(v60->fields.cmdSpellBg);
  v62 = v10->fields.currentNumLb;
  spendNum = recvTarget;
  v63 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &spendNum);
  this = (RecoverItemComponent_o *)System_String__Format((System_String_o *)StringLiteral_25226/*"{0:N0}"*/, v63, 0LL);
  if ( !v62 )
    goto LABEL_107;
  UILabel__set_text(v62, (System_String_o *)this, 0LL);
  v64 = v10->fields.spendNumLb;
  this = (RecoverItemComponent_o *)System_Int32__ToString((int)v10 + 128, 0LL);
  if ( !v64 )
    goto LABEL_107;
  UILabel__set_text(v64, (System_String_o *)this, 0LL);
  RecoverItemComponent__AttachStoneCountRefreshComponent(v10, v65);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v66);
  v67 = LocalizationManager__Get((System_String_o *)StringLiteral_14962/*"UNIT_INFO"*/, 0LL);
  recvRpNum = v10->fields.spendNum;
  v68 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &recvRpNum);
  v69 = System_String__Format(v67, v68, 0LL);
  v70 = v10->fields.itemDetailLb;
  v71 = (Il2CppObject *)v69;
  v72 = LocalizationManager__Get((System_String_o *)StringLiteral_11268/*"RP_RECOVER_NUM_TXT"*/, 0LL);
  v118 = v10->fields.recvRpNum;
  v73 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v118);
  this = (RecoverItemComponent_o *)System_String__Format_62415592(v72, v71, v73, 0LL);
  if ( !v70 )
LABEL_107:
    sub_1BCAA3C(this, data);
  UILabel__set_text(v70, (System_String_o *)this, 0LL);
  v74 = recvTarget < v10->fields.spendNum;
  v75 = v10->fields.recvRpNum + v10->fields.usrCurrentRp;
LABEL_102:
  v117 = !v74;
  v10->fields.isEnableSelect = v117;
  v10->fields.recvSum = v75;
LABEL_106:
  RecoverItemComponent__setEnableSelectItem(v10, (const MethodInfo *)data);
}


void __fastcall RecoverItemComponent__setRequestInfo(RecoverItemComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  DataManager_o *Instance; // x0
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x8
  struct RecoverItemComponent_CallbackFunc_o *callbackFunc; // x20
  __int64 v27; // x1
  Il2CppObject *v28; // x19
  __int64 v29; // x2
  __int64 v30; // x3
  System_String_o *v31; // x20
  RecoverItemComponent___c_c *v32; // x8
  System_Action_o *_9__43_0; // x22
  System_String_o *v34; // x21
  Il2CppObject *v35; // x23
  struct RecoverItemComponent___c_StaticFields *static_fields; // x0

  if ( (byte_4B10F9E & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_EventMaster___, v4, v5);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v6, v7);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v8, v9);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v10, v11);
    sub_1BCA7E0(&TerminalSceneComponent_TypeInfo, v12, v13);
    sub_1BCA7E0(&Method_RecoverItemComponent___c__setRequestInfo_b__43_0__, v14, v15);
    sub_1BCA7E0(&RecoverItemComponent___c_TypeInfo, v16, v17);
    sub_1BCA7E0(&StringLiteral_11269/*"RP_UNRECOVERABLE_MESSAGE"*/, v18, v19);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v20, v21);
    byte_4B10F9E = 1;
  }
  if ( this->fields.recvTarget != 2 )
    goto LABEL_14;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_27;
  DataManager__GetMasterData_object_(
    Instance,
    (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_EventMaster___);
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v23);
  if ( !byte_4B10F83 )
  {
    sub_1BCA7E0(&TerminalSceneComponent_TypeInfo, v23, v24);
    byte_4B10F83 = 1;
  }
  Instance = (DataManager_o *)TerminalSceneComponent_TypeInfo;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v23);
    Instance = (DataManager_o *)TerminalSceneComponent_TypeInfo;
  }
  v25 = **(_QWORD **)&Instance[1].fields._DispLog;
  if ( !v25 || (Instance = *(DataManager_o **)(v25 + 248)) == 0LL )
LABEL_27:
    sub_1BCAA3C(Instance, v23);
  if ( !ScrPlayerStatus__IsBPActive((ScrPlayerStatus_o *)Instance, 0LL) )
  {
    v28 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v27);
    Instance = (DataManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11269/*"RP_UNRECOVERABLE_MESSAGE"*/, 0LL);
    v31 = (System_String_o *)Instance;
    v32 = RecoverItemComponent___c_TypeInfo;
    if ( !RecoverItemComponent___c_TypeInfo->_2.cctor_finished )
    {
      Instance = (DataManager_o *)j_il2cpp_runtime_class_init_0(RecoverItemComponent___c_TypeInfo, v23);
      v32 = RecoverItemComponent___c_TypeInfo;
    }
    _9__43_0 = v32->static_fields->__9__43_0;
    v34 = (System_String_o *)StringLiteral_1/*""*/;
    if ( !_9__43_0 )
    {
      if ( !v32->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v32, v23);
        v32 = RecoverItemComponent___c_TypeInfo;
      }
      v35 = (Il2CppObject *)v32->static_fields->__9;
      _9__43_0 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v23, v29, v30);
      System_Action___ctor(_9__43_0, v35, Method_RecoverItemComponent___c__setRequestInfo_b__43_0__, 0LL);
      static_fields = RecoverItemComponent___c_TypeInfo->static_fields;
      static_fields->__9__43_0 = _9__43_0;
      Instance = (DataManager_o *)sub_1BCA784(&static_fields->__9__43_0, _9__43_0);
    }
    if ( v28 )
    {
      CommonUI__OpenNotificationDialog((CommonUI_o *)v28, v34, v31, _9__43_0, -1, 0, 0, 0, 1, 0, 1, 0, 0LL, 0.0, 0LL);
      return;
    }
    goto LABEL_27;
  }
LABEL_14:
  callbackFunc = this->fields.callbackFunc;
  if ( callbackFunc )
  {
    this->fields.callbackFunc = 0LL;
    sub_1BCA784(&this->fields.callbackFunc, 0LL);
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
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  Il2CppObject *Instance; // x0
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x3
  CommonUI_o *v13; // x21
  System_Action_o *v14; // x20

  if ( (byte_4B10F9C & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, isRes, method);
    sub_1BCA7E0(&Method_RecoverItemComponent_setRequestInfo__, v5, v6);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v7, v8);
    byte_4B10F9C = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v13 = (CommonUI_o *)Instance;
  if ( isRes )
  {
    v14 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v10, v11, v12);
    System_Action___ctor(v14, (Il2CppObject *)this, Method_RecoverItemComponent_setRequestInfo__, 0LL);
    if ( v13 )
    {
      CommonUI__CloseConfirmDialog_30766896(v13, v14, 0LL);
      return;
    }
LABEL_8:
    sub_1BCAA3C(Instance, v10);
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
  sub_1BCA784(&this->fields.method, object);
  v8 = *(unsigned __int8 *)(v6 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1BCA8A0(v6) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1BCAA58(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1BCA908(v10, 0LL);
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
  this->fields.m_target = (Il2CppObject *)sub_1A04F40;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_1A04EE0;
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
  _QWORD v13[2]; // [xsp+0h] [xbp-70h] BYREF
  __int128 v14; // [xsp+10h] [xbp-60h]
  int32_t v15; // [xsp+2Ch] [xbp-44h] BYREF
  int32_t v16; // [xsp+38h] [xbp-38h] BYREF
  int32_t v17; // [xsp+3Ch] [xbp-34h] BYREF

  v16 = id;
  v17 = type;
  v15 = num;
  if ( (byte_4B10FA2 & 1) == 0 )
  {
    sub_1BCA7E0(&int_TypeInfo, *(_QWORD *)&type, *(_QWORD *)&id);
    sub_1BCA7E0(&RecoverType_Type_TypeInfo, v10, v11);
    byte_4B10FA2 = 1;
  }
  v14 = 0u;
  v13[0] = j_il2cpp_value_box_0(RecoverType_Type_TypeInfo, &v17);
  v13[1] = j_il2cpp_value_box_0(int_TypeInfo, &v16);
  *(_QWORD *)&v14 = j_il2cpp_value_box_0(int_TypeInfo, &v15);
  return (System_IAsyncResult_o *)sub_1BCA794(this, v13, callback, object);
}


void __fastcall RecoverItemComponent_CallbackFunc__EndInvoke(
        RecoverItemComponent_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1BCA798(result, 0LL, method);
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
  __int64 v2; // x2
  __int64 v3; // x3
  Il2CppObject *v4; // x19

  if ( (byte_4B10FA3 & 1) == 0 )
  {
    sub_1BCA7E0(&RecoverItemComponent___c_TypeInfo, v1, v2);
    byte_4B10FA3 = 1;
  }
  v4 = (Il2CppObject *)sub_1BCAA2C(RecoverItemComponent___c_TypeInfo, v1, v2, v3);
  System_Object___ctor(v4, 0LL);
  RecoverItemComponent___c_TypeInfo->static_fields->__9 = (struct RecoverItemComponent___c_o *)v4;
  sub_1BCA784(RecoverItemComponent___c_TypeInfo->static_fields, v4);
}


void __fastcall RecoverItemComponent___c___ctor(RecoverItemComponent___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall RecoverItemComponent___c___setRequestInfo_b__43_0(
        RecoverItemComponent___c_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x1
  __int64 v4; // x2
  Il2CppObject *Instance; // x0
  __int64 v6; // x1

  if ( (byte_4B10FA4 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, method, v2);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v3, v4);
    byte_4B10FA4 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance
    || (CommonUI__CloseRecoverItemListDialog((CommonUI_o *)Instance, 0LL),
        (Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__)) == 0LL) )
  {
    sub_1BCAA3C(Instance, v6);
  }
  AvalonSceneManager__transitionSceneRefresh((AvalonSceneManager_o *)Instance, 34, 1, 0LL, 0, 0LL);
}