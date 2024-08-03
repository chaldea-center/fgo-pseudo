void __fastcall RecoverItemComponent___cctor(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_49FFF33 & 1) == 0 )
  {
    sub_1B640C8(&RecoverItemComponent_TypeInfo, v1);
    byte_49FFF33 = 1;
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
  __int64 v5; // x1
  __int64 v6; // x2
  System_Action_int__o *v7; // x21

  if ( (byte_49FFF2D & 1) == 0 )
  {
    sub_1B640C8(&System_Action_int__TypeInfo, method);
    sub_1B640C8(&Method_RecoverItemComponent__AttachStoneCountRefreshComponent_b__38_0__, v3);
    byte_49FFF2D = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v7 = (System_Action_int__o *)sub_1B64314(System_Action_int__TypeInfo, v5, v6);
  System_Action_int____ctor(
    v7,
    (Il2CppObject *)this,
    Method_RecoverItemComponent__AttachStoneCountRefreshComponent_b__38_0__,
    0LL);
  StoneCountRefreshComponent__AttachToGameObject(gameObject, v7, 1, 0LL);
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
  __int64 v10; // x1
  __int64 v11; // x2
  System_Action_o *v12; // x21
  Il2CppObject *v13; // x0

  if ( (byte_49FFF30 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, isRes);
    sub_1B640C8(&Method_RecoverItemComponent_setRequestInfo__, v7);
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v8);
    byte_49FFF30 = 1;
  }
  if ( isRes )
  {
    this->fields.spendNum = useNum;
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v12 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v10, v11);
    System_Action___ctor(v12, (Il2CppObject *)this, Method_RecoverItemComponent_setRequestInfo__, 0LL);
    if ( !Instance )
LABEL_9:
      sub_1B64324(v13);
  }
  else
  {
    v13 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !v13 )
      goto LABEL_9;
    Instance = v13;
    v12 = 0LL;
  }
  CommonUI__CloseApRecoverConfirmDlg((CommonUI_o *)Instance, v12, 0LL);
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
  struct RecoverDlgComponent_o *v31; // x8
  System_String_o *v32; // x20
  System_String_o *v33; // x21
  Il2CppObject *v34; // x0
  System_String_o *v35; // x24
  Il2CppObject *mText; // x23
  System_String_o *v37; // x21
  Il2CppObject *v38; // x0
  struct UILabel_o *itemNameLb; // x8
  System_String_o *v40; // x21
  System_String_o *v41; // x22
  _QWORD *v42; // x8
  System_Reflection_MethodBase_o *v43; // x0
  int32_t v44; // w8
  int32_t usrMaxAp; // w9
  System_String_o **v46; // x8
  System_String_o *v47; // x25
  System_String_o *v48; // x25
  __int64 v49; // x1
  int32_t v50; // w2
  int32_t v51; // w3
  System_Object_array *v52; // x26
  int32_t v53; // w2
  int32_t v54; // w3
  int32_t v55; // w2
  int32_t v56; // w3
  Il2CppObject *v57; // x24
  int32_t v58; // w2
  int32_t v59; // w3
  Il2CppObject *v60; // x24
  int32_t v61; // w2
  int32_t v62; // w3
  Il2CppObject *v63; // x24
  int32_t v64; // w2
  int32_t v65; // w3
  Il2CppObject *v66; // x24
  int32_t v67; // w2
  int32_t v68; // w3
  Il2CppObject *v69; // x24
  ServantStatusBattleListViewItem_o *v70; // x0
  System_String_o *v71; // x25
  int32_t v72; // w2
  int32_t v73; // w3
  System_Object_array *v74; // x26
  int32_t v75; // w2
  int32_t v76; // w3
  int32_t v77; // w2
  int32_t v78; // w3
  Il2CppObject *v79; // x24
  int32_t v80; // w2
  int32_t v81; // w3
  Il2CppObject *v82; // x24
  int32_t v83; // w2
  int32_t v84; // w3
  Il2CppObject *v85; // x24
  int32_t v86; // w2
  int32_t v87; // w3
  Il2CppObject *v88; // x24
  int32_t v89; // w2
  int32_t v90; // w3
  Il2CppObject *v91; // x24
  System_String_o *v92; // x24
  Il2CppObject *v93; // x23
  __int64 v94; // x1
  __int64 v95; // x2
  CommonConfirmDialog_ClickDelegate_o *v96; // x25
  System_String_o **v97; // x8
  System_String_o *v98; // x25
  int32_t v99; // w2
  int32_t v100; // w3
  int32_t v101; // w2
  int32_t v102; // w3
  int32_t v103; // w2
  int32_t v104; // w3
  Il2CppObject *v105; // x24
  int32_t v106; // w2
  int32_t v107; // w3
  Il2CppObject *v108; // x24
  int32_t v109; // w2
  int32_t v110; // w3
  Il2CppObject *v111; // x24
  int32_t v112; // w2
  int32_t v113; // w3
  Il2CppObject *v114; // x24
  int32_t v115; // w2
  int32_t v116; // w3
  Il2CppObject *v117; // x24
  System_String_o *v118; // x23
  Il2CppObject *v119; // x25
  __int64 v120; // x1
  __int64 v121; // x2
  CommonConfirmDialog_ClickDelegate_o *v122; // x26
  System_String_o *v123; // x0
  System_String_o *v124; // x20
  Il2CppObject *v125; // x21
  __int64 v126; // x1
  __int64 v127; // x2
  System_Action_o *v128; // x22
  System_String_o *v129; // x0
  System_String_o *v130; // x20
  Il2CppObject *Instance; // x21
  __int64 v132; // x1
  __int64 v133; // x2
  System_Action_o *v134; // x22
  Il2CppObject *v135; // x0
  int32_t targetId; // w20
  int32_t needAp; // w21
  CommonUI_o *v138; // x22
  __int64 v139; // x1
  __int64 v140; // x2
  System_Action_bool__int__o *v141; // x23
  __int64 v142; // x0
  int32_t v143; // [xsp+38h] [xbp-78h] BYREF
  int32_t v144; // [xsp+3Ch] [xbp-74h] BYREF
  int32_t recvSum; // [xsp+40h] [xbp-70h] BYREF
  int32_t usrMaxRp; // [xsp+44h] [xbp-6Ch] BYREF
  int32_t usrCurrentRp; // [xsp+48h] [xbp-68h] BYREF
  int32_t spendNum; // [xsp+4Ch] [xbp-64h] BYREF

  if ( (byte_49FFF2E & 1) == 0 )
  {
    sub_1B640C8(&System_Action_bool__int__TypeInfo, method);
    sub_1B640C8(&System_Action_TypeInfo, v3);
    sub_1B640C8(&BalanceConfig_TypeInfo, v4);
    sub_1B640C8(&CommonConfirmDialog_ClickDelegate_TypeInfo, v5);
    sub_1B640C8(&int_TypeInfo, v6);
    sub_1B640C8(&LocalizationManager_TypeInfo, v7);
    sub_1B640C8(&object___TypeInfo, v8);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v9);
    sub_1B640C8(&Method_RecoverItemComponent_CloseApRecovDlg__, v10);
    sub_1B640C8(&Method_RecoverItemComponent_OnClickItem__, v11);
    sub_1B640C8(&Method_RecoverItemComponent_closeNotificationDlg__, v12);
    sub_1B640C8(&Method_RecoverItemComponent_spendItemDlg__, v13);
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v14);
    sub_1B640C8(&StringLiteral_11077/*"RP_RECOVER_CONFIRM_MSG"*/, v15);
    sub_1B640C8(&StringLiteral_3586/*"CMDSPELL_CURRENT_NUM"*/, v16);
    sub_1B640C8(&StringLiteral_3729/*"COMMAND_SPELL_TXT"*/, v17);
    sub_1B640C8(&StringLiteral_2125/*"AP_RECOVER_CONFIRM_MSG"*/, v18);
    sub_1B640C8(&StringLiteral_11075/*"RP_FULL_MSG"*/, v19);
    sub_1B640C8(&StringLiteral_14726/*"UNIT_INFO"*/, v20);
    sub_1B640C8(&StringLiteral_2121/*"AP_ADD_CONFIRM_MSG"*/, v21);
    sub_1B640C8(&StringLiteral_3735/*"COMMON_CONFIRM_DECIDE"*/, v22);
    sub_1B640C8(&StringLiteral_3733/*"COMMON_CONFIRM_CANCEL"*/, v23);
    sub_1B640C8(&StringLiteral_2122/*"AP_ADD_CONFIRM_MSG_OVER"*/, v24);
    sub_1B640C8(&StringLiteral_2126/*"AP_RECOVER_CONFIRM_MSG_OVER"*/, v25);
    sub_1B640C8(&StringLiteral_2123/*"AP_FULL_MSG"*/, v26);
    sub_1B640C8(&StringLiteral_1/*""*/, v27);
    sub_1B640C8(&StringLiteral_2131/*"AP_RECOVER_STONEPAY_WARNING_MSG"*/, v28);
    byte_49FFF2E = 1;
  }
  if ( !this->fields.isEnableSelect )
    return;
  dialog = (UnityEngine_Object_o *)this->fields.dialog;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  userEntity = UnityEngine_Object__op_Inequality(dialog, 0LL, 0LL);
  if ( (userEntity & 1) == 0 )
    return;
  v31 = this->fields.dialog;
  if ( !v31 )
    goto LABEL_140;
  if ( v31->fields.isClosed )
    return;
  v32 = (System_String_o *)StringLiteral_1/*""*/;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v33 = LocalizationManager__Get((System_String_o *)StringLiteral_14726/*"UNIT_INFO"*/, 0LL);
  spendNum = this->fields.spendNum;
  v34 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &spendNum);
  userEntity = (__int64)System_String__Format(v33, v34, 0LL);
  v35 = (System_String_o *)userEntity;
  if ( this->fields.currentType == 1 )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    mText = (Il2CppObject *)LocalizationManager__Get((System_String_o *)StringLiteral_3729/*"COMMAND_SPELL_TXT"*/, 0LL);
    if ( this->fields.currentType == 1 )
    {
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v37 = LocalizationManager__Get((System_String_o *)StringLiteral_3586/*"CMDSPELL_CURRENT_NUM"*/, 0LL);
      spendNum = this->fields.spendNum;
      v38 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &spendNum);
      v35 = System_String__Format(v37, v38, 0LL);
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
  v40 = LocalizationManager__Get((System_String_o *)StringLiteral_3735/*"COMMON_CONFIRM_DECIDE"*/, 0LL);
  v41 = LocalizationManager__Get((System_String_o *)StringLiteral_3733/*"COMMON_CONFIRM_CANCEL"*/, 0LL);
  v42 = Method_RecoverItemComponent_OnClickItem__;
  if ( (*((_BYTE *)Method_RecoverItemComponent_OnClickItem__ + 83) & 2) != 0 )
    v42 = (_QWORD *)sub_1B640E0(Method_RecoverItemComponent_OnClickItem__);
  v43 = (System_Reflection_MethodBase_o *)sub_1B640AC(v42, v42[4]);
  OverwriteAssetSoundName__PlaySystemSe(v43, 0, 0LL);
  if ( !this->fields.isAp )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v71 = LocalizationManager__Get((System_String_o *)StringLiteral_11077/*"RP_RECOVER_CONFIRM_MSG"*/, 0LL);
    userEntity = sub_1B64170(object___TypeInfo, 7LL);
    if ( !userEntity )
      goto LABEL_140;
    v74 = (System_Object_array *)userEntity;
    if ( mText )
    {
      userEntity = sub_1B64204(mText, *(_QWORD *)(*(_QWORD *)userEntity + 64LL));
      if ( !userEntity )
        goto LABEL_141;
    }
    if ( v74->max_length )
    {
      v74->m_Items[0] = mText;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)v74->m_Items, (int32_t)mText, v72, v73);
      if ( v35 )
      {
        userEntity = sub_1B64204(v35, v74->obj.klass->_1.element_class);
        if ( !userEntity )
          goto LABEL_141;
      }
      if ( v74->max_length > 1 )
      {
        v74->m_Items[1] = (Il2CppObject *)v35;
        sub_1B6406C((ServantStatusBattleListViewItem_o *)&v74->m_Items[1], (int32_t)v35, v75, v76);
        spendNum = this->fields.recvRpNum;
        userEntity = j_il2cpp_value_box_0(int_TypeInfo, &spendNum);
        v79 = (Il2CppObject *)userEntity;
        if ( userEntity )
        {
          userEntity = sub_1B64204(userEntity, v74->obj.klass->_1.element_class);
          if ( !userEntity )
            goto LABEL_141;
        }
        if ( v74->max_length > 2 )
        {
          v74->m_Items[2] = v79;
          sub_1B6406C((ServantStatusBattleListViewItem_o *)&v74->m_Items[2], (int32_t)v79, v77, v78);
          usrCurrentRp = this->fields.usrCurrentRp;
          userEntity = j_il2cpp_value_box_0(int_TypeInfo, &usrCurrentRp);
          v82 = (Il2CppObject *)userEntity;
          if ( userEntity )
          {
            userEntity = sub_1B64204(userEntity, v74->obj.klass->_1.element_class);
            if ( !userEntity )
              goto LABEL_141;
          }
          if ( v74->max_length > 3 )
          {
            v74->m_Items[3] = v82;
            sub_1B6406C((ServantStatusBattleListViewItem_o *)&v74->m_Items[3], (int32_t)v82, v80, v81);
            usrMaxRp = this->fields.usrMaxRp;
            userEntity = j_il2cpp_value_box_0(int_TypeInfo, &usrMaxRp);
            v85 = (Il2CppObject *)userEntity;
            if ( userEntity )
            {
              userEntity = sub_1B64204(userEntity, v74->obj.klass->_1.element_class);
              if ( !userEntity )
                goto LABEL_141;
            }
            if ( v74->max_length > 4 )
            {
              v74->m_Items[4] = v85;
              sub_1B6406C((ServantStatusBattleListViewItem_o *)&v74->m_Items[4], (int32_t)v85, v83, v84);
              recvSum = this->fields.recvSum;
              userEntity = j_il2cpp_value_box_0(int_TypeInfo, &recvSum);
              v88 = (Il2CppObject *)userEntity;
              if ( userEntity )
              {
                userEntity = sub_1B64204(userEntity, v74->obj.klass->_1.element_class);
                if ( !userEntity )
                  goto LABEL_141;
              }
              if ( v74->max_length > 5 )
              {
                v74->m_Items[5] = v88;
                sub_1B6406C((ServantStatusBattleListViewItem_o *)&v74->m_Items[5], (int32_t)v88, v86, v87);
                v144 = this->fields.usrMaxRp;
                userEntity = j_il2cpp_value_box_0(int_TypeInfo, &v144);
                v91 = (Il2CppObject *)userEntity;
                if ( userEntity )
                {
                  userEntity = sub_1B64204(userEntity, v74->obj.klass->_1.element_class);
                  if ( !userEntity )
                    goto LABEL_141;
                }
                if ( v74->max_length > 6 )
                {
                  v74->m_Items[6] = v91;
                  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v74->m_Items[6], (int32_t)v91, v89, v90);
                  userEntity = (__int64)System_String__Format_61389904(v71, v74, 0LL);
                  if ( !this->fields.userEntity )
                    goto LABEL_140;
                  v92 = (System_String_o *)userEntity;
                  if ( UserGameEntity__getRp(this->fields.userEntity, 0LL) < this->fields.usrMaxRp )
                    goto LABEL_80;
                  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                  v129 = LocalizationManager__Get((System_String_o *)StringLiteral_11075/*"RP_FULL_MSG"*/, 0LL);
                  v130 = System_String__Format(v129, mText, 0LL);
                  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
                  v134 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v132, v133);
                  System_Action___ctor(
                    v134,
                    (Il2CppObject *)this,
                    Method_RecoverItemComponent_closeNotificationDlg__,
                    0LL);
                  if ( !Instance )
                    goto LABEL_140;
                  CommonUI__OpenNotificationDialog(
                    (CommonUI_o *)Instance,
                    (System_String_o *)StringLiteral_1/*""*/,
                    v130,
                    v134,
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
    sub_1B6432C(userEntity, v49);
  }
  v44 = this->fields.recvSum;
  usrMaxAp = this->fields.usrMaxAp;
  if ( !this->fields.isAddAp )
  {
    if ( v44 <= usrMaxAp )
      v97 = (System_String_o **)&StringLiteral_2125/*"AP_RECOVER_CONFIRM_MSG"*/;
    else
      v97 = (System_String_o **)&StringLiteral_2126/*"AP_RECOVER_CONFIRM_MSG_OVER"*/;
    v98 = *v97;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v48 = LocalizationManager__Get(v98, 0LL);
    userEntity = sub_1B64170(object___TypeInfo, 8LL);
    if ( !userEntity )
      goto LABEL_140;
    v52 = (System_Object_array *)userEntity;
    if ( mText )
    {
      userEntity = sub_1B64204(mText, *(_QWORD *)(*(_QWORD *)userEntity + 64LL));
      if ( !userEntity )
        goto LABEL_141;
    }
    if ( v52->max_length )
    {
      v52->m_Items[0] = mText;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)v52->m_Items, (int32_t)mText, v99, v100);
      if ( v35 )
      {
        userEntity = sub_1B64204(v35, v52->obj.klass->_1.element_class);
        if ( !userEntity )
          goto LABEL_141;
      }
      if ( v52->max_length > 1 )
      {
        v52->m_Items[1] = (Il2CppObject *)v35;
        sub_1B6406C((ServantStatusBattleListViewItem_o *)&v52->m_Items[1], (int32_t)v35, v101, v102);
        spendNum = this->fields.apRcvRate;
        userEntity = j_il2cpp_value_box_0(int_TypeInfo, &spendNum);
        v105 = (Il2CppObject *)userEntity;
        if ( userEntity )
        {
          userEntity = sub_1B64204(userEntity, v52->obj.klass->_1.element_class);
          if ( !userEntity )
            goto LABEL_141;
        }
        if ( v52->max_length > 2 )
        {
          v52->m_Items[2] = v105;
          sub_1B6406C((ServantStatusBattleListViewItem_o *)&v52->m_Items[2], (int32_t)v105, v103, v104);
          usrCurrentRp = this->fields.recvApNum;
          userEntity = j_il2cpp_value_box_0(int_TypeInfo, &usrCurrentRp);
          v108 = (Il2CppObject *)userEntity;
          if ( userEntity )
          {
            userEntity = sub_1B64204(userEntity, v52->obj.klass->_1.element_class);
            if ( !userEntity )
              goto LABEL_141;
          }
          if ( v52->max_length > 3 )
          {
            v52->m_Items[3] = v108;
            sub_1B6406C((ServantStatusBattleListViewItem_o *)&v52->m_Items[3], (int32_t)v108, v106, v107);
            usrMaxRp = this->fields.usrCurrentAp;
            userEntity = j_il2cpp_value_box_0(int_TypeInfo, &usrMaxRp);
            v111 = (Il2CppObject *)userEntity;
            if ( userEntity )
            {
              userEntity = sub_1B64204(userEntity, v52->obj.klass->_1.element_class);
              if ( !userEntity )
                goto LABEL_141;
            }
            if ( v52->max_length > 4 )
            {
              v52->m_Items[4] = v111;
              sub_1B6406C((ServantStatusBattleListViewItem_o *)&v52->m_Items[4], (int32_t)v111, v109, v110);
              recvSum = this->fields.usrMaxAp;
              userEntity = j_il2cpp_value_box_0(int_TypeInfo, &recvSum);
              v114 = (Il2CppObject *)userEntity;
              if ( userEntity )
              {
                userEntity = sub_1B64204(userEntity, v52->obj.klass->_1.element_class);
                if ( !userEntity )
                  goto LABEL_141;
              }
              if ( v52->max_length > 5 )
              {
                v52->m_Items[5] = v114;
                sub_1B6406C((ServantStatusBattleListViewItem_o *)&v52->m_Items[5], (int32_t)v114, v112, v113);
                v144 = this->fields.recvSum;
                userEntity = j_il2cpp_value_box_0(int_TypeInfo, &v144);
                v117 = (Il2CppObject *)userEntity;
                if ( userEntity )
                {
                  userEntity = sub_1B64204(userEntity, v52->obj.klass->_1.element_class);
                  if ( !userEntity )
                    goto LABEL_141;
                }
                if ( v52->max_length > 6 )
                {
                  v52->m_Items[6] = v117;
                  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v52->m_Items[6], (int32_t)v117, v115, v116);
                  v143 = this->fields.usrMaxAp;
                  userEntity = j_il2cpp_value_box_0(int_TypeInfo, &v143);
                  v69 = (Il2CppObject *)userEntity;
                  if ( userEntity )
                  {
                    userEntity = sub_1B64204(userEntity, v52->obj.klass->_1.element_class);
                    if ( !userEntity )
                      goto LABEL_141;
                  }
                  if ( v52->max_length > 7 )
                  {
                    v52->m_Items[7] = v69;
                    v70 = (ServantStatusBattleListViewItem_o *)&v52->m_Items[7];
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
  if ( v44 <= usrMaxAp )
    v46 = (System_String_o **)&StringLiteral_2121/*"AP_ADD_CONFIRM_MSG"*/;
  else
    v46 = (System_String_o **)&StringLiteral_2122/*"AP_ADD_CONFIRM_MSG_OVER"*/;
  v47 = *v46;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v48 = LocalizationManager__Get(v47, 0LL);
  userEntity = sub_1B64170(object___TypeInfo, 7LL);
  if ( !userEntity )
    goto LABEL_140;
  v52 = (System_Object_array *)userEntity;
  if ( mText )
  {
    userEntity = sub_1B64204(mText, *(_QWORD *)(*(_QWORD *)userEntity + 64LL));
    if ( !userEntity )
      goto LABEL_141;
  }
  if ( !v52->max_length )
    goto LABEL_139;
  v52->m_Items[0] = mText;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)v52->m_Items, (int32_t)mText, v50, v51);
  if ( v35 )
  {
    userEntity = sub_1B64204(v35, v52->obj.klass->_1.element_class);
    if ( !userEntity )
      goto LABEL_141;
  }
  if ( v52->max_length <= 1 )
    goto LABEL_139;
  v52->m_Items[1] = (Il2CppObject *)v35;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v52->m_Items[1], (int32_t)v35, v53, v54);
  spendNum = this->fields.recvApNum;
  userEntity = j_il2cpp_value_box_0(int_TypeInfo, &spendNum);
  v57 = (Il2CppObject *)userEntity;
  if ( userEntity )
  {
    userEntity = sub_1B64204(userEntity, v52->obj.klass->_1.element_class);
    if ( !userEntity )
      goto LABEL_141;
  }
  if ( v52->max_length <= 2 )
    goto LABEL_139;
  v52->m_Items[2] = v57;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v52->m_Items[2], (int32_t)v57, v55, v56);
  usrCurrentRp = this->fields.usrCurrentAp;
  userEntity = j_il2cpp_value_box_0(int_TypeInfo, &usrCurrentRp);
  v60 = (Il2CppObject *)userEntity;
  if ( userEntity )
  {
    userEntity = sub_1B64204(userEntity, v52->obj.klass->_1.element_class);
    if ( !userEntity )
      goto LABEL_141;
  }
  if ( v52->max_length <= 3 )
    goto LABEL_139;
  v52->m_Items[3] = v60;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v52->m_Items[3], (int32_t)v60, v58, v59);
  usrMaxRp = this->fields.usrMaxAp;
  userEntity = j_il2cpp_value_box_0(int_TypeInfo, &usrMaxRp);
  v63 = (Il2CppObject *)userEntity;
  if ( userEntity )
  {
    userEntity = sub_1B64204(userEntity, v52->obj.klass->_1.element_class);
    if ( !userEntity )
      goto LABEL_141;
  }
  if ( v52->max_length <= 4 )
    goto LABEL_139;
  v52->m_Items[4] = v63;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v52->m_Items[4], (int32_t)v63, v61, v62);
  recvSum = this->fields.recvSum;
  userEntity = j_il2cpp_value_box_0(int_TypeInfo, &recvSum);
  v66 = (Il2CppObject *)userEntity;
  if ( userEntity )
  {
    userEntity = sub_1B64204(userEntity, v52->obj.klass->_1.element_class);
    if ( !userEntity )
      goto LABEL_141;
  }
  if ( v52->max_length <= 5 )
    goto LABEL_139;
  v52->m_Items[5] = v66;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v52->m_Items[5], (int32_t)v66, v64, v65);
  v144 = this->fields.usrMaxAp;
  userEntity = j_il2cpp_value_box_0(int_TypeInfo, &v144);
  v69 = (Il2CppObject *)userEntity;
  if ( userEntity )
  {
    userEntity = sub_1B64204(userEntity, v52->obj.klass->_1.element_class);
    if ( !userEntity )
    {
LABEL_141:
      v142 = sub_1B64348(userEntity);
      sub_1B641F0(v142, 0LL);
    }
  }
  if ( v52->max_length <= 6 )
    goto LABEL_139;
  v52->m_Items[6] = v69;
  v70 = (ServantStatusBattleListViewItem_o *)&v52->m_Items[6];
LABEL_115:
  sub_1B6406C(v70, (int32_t)v69, v67, v68);
  v92 = System_String__Format_61389904(v48, v52, 0LL);
  userEntity = (__int64)this->fields.userEntity;
  if ( !userEntity )
    goto LABEL_140;
  if ( UserGameEntity__getAct((UserGameEntity_o *)userEntity, 0LL) < this->fields.usrMaxAp )
  {
    if ( this->fields.currentType == 2 )
    {
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v118 = LocalizationManager__Get((System_String_o *)StringLiteral_2131/*"AP_RECOVER_STONEPAY_WARNING_MSG"*/, 0LL);
      v119 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v122 = (CommonConfirmDialog_ClickDelegate_o *)sub_1B64314(CommonConfirmDialog_ClickDelegate_TypeInfo, v120, v121);
      CommonConfirmDialog_ClickDelegate___ctor(
        v122,
        (Il2CppObject *)this,
        Method_RecoverItemComponent_spendItemDlg__,
        0LL);
      userEntity = (__int64)BalanceConfig_TypeInfo;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      if ( v119 )
      {
        CommonUI__OpenConfirmDecideDlgAddMsgFrame(
          (CommonUI_o *)v119,
          v32,
          v92,
          v118,
          v40,
          v41,
          v122,
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
      sub_1B64324(userEntity);
    }
    if ( this->fields.isAddAp || this->fields.apRcvRate != 100 || this->fields.spendNum >= 2 )
    {
      v135 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      targetId = this->fields.targetId;
      needAp = this->fields.needAp;
      v138 = (CommonUI_o *)v135;
      v141 = (System_Action_bool__int__o *)sub_1B64314(System_Action_bool__int__TypeInfo, v139, v140);
      System_Action_bool__int____ctor(v141, (Il2CppObject *)this, Method_RecoverItemComponent_CloseApRecovDlg__, 0LL);
      if ( !v138 )
        goto LABEL_140;
      CommonUI__OpenApRecoverConfirmDlg(v138, targetId, needAp, v141, 0LL);
      return;
    }
LABEL_80:
    v93 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v96 = (CommonConfirmDialog_ClickDelegate_o *)sub_1B64314(CommonConfirmDialog_ClickDelegate_TypeInfo, v94, v95);
    CommonConfirmDialog_ClickDelegate___ctor(v96, (Il2CppObject *)this, Method_RecoverItemComponent_spendItemDlg__, 0LL);
    userEntity = (__int64)BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    if ( v93 )
    {
      CommonUI__OpenConfirmDecideDlg(
        (CommonUI_o *)v93,
        v32,
        v92,
        v40,
        v41,
        v96,
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
  v123 = LocalizationManager__Get((System_String_o *)StringLiteral_2123/*"AP_FULL_MSG"*/, 0LL);
  v124 = System_String__Format(v123, mText, 0LL);
  v125 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v128 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v126, v127);
  System_Action___ctor(v128, (Il2CppObject *)this, Method_RecoverItemComponent_closeNotificationDlg__, 0LL);
  if ( !v125 )
    goto LABEL_140;
  CommonUI__OpenNotificationDialog(
    (CommonUI_o *)v125,
    (System_String_o *)StringLiteral_1/*""*/,
    v124,
    v128,
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
  UILabel_o *currentNumLb; // x19
  Il2CppObject *v7; // x0
  System_String_o *v8; // x0
  int32_t v9; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_49FFF34 & 1) == 0 )
  {
    sub_1B640C8(&int_TypeInfo, *(_QWORD *)&stoneCount);
    sub_1B640C8(&StringLiteral_24871/*"{0:N0}"*/, v5);
    byte_49FFF34 = 1;
  }
  currentNumLb = this->fields.currentNumLb;
  v9 = stoneCount;
  v7 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v9);
  v8 = System_String__Format((System_String_o *)StringLiteral_24871/*"{0:N0}"*/, v7, 0LL);
  if ( !currentNumLb )
    sub_1B64324(v8);
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

  if ( (byte_49FFF29 & 1) == 0 )
  {
    sub_1B640C8(&RecoverItemComponent_CallbackFunc_TypeInfo, value);
    byte_49FFF29 = 1;
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
    v9 = sub_1B9F5B8(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_1B645E4(v8);
  RecoverItemComponent__remove_callbackFunc(v11, v12, v13);
}


void __fastcall RecoverItemComponent__closeNotificationDlg(RecoverItemComponent_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0

  if ( (byte_49FFF32 & 1) == 0 )
  {
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, method);
    byte_49FFF32 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1B64324(0LL);
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

  if ( (byte_49FFF2A & 1) == 0 )
  {
    sub_1B640C8(&RecoverItemComponent_CallbackFunc_TypeInfo, value);
    byte_49FFF2A = 1;
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
    v9 = sub_1B9F5B8(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_1B645E4(v8);
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
  int32_t v32; // w2
  int32_t v33; // w3
  UserGameEntity_o *SelfUserGame; // x0
  RecoverItemComponent_o **p_userEntity; // x23
  int32_t v36; // w2
  int32_t v37; // w3
  struct UserGameEntity_o *userEntity; // x8
  int32_t actMax; // w8
  unsigned int *p_spendNum; // x20
  UILabel_o *currentInfoLb; // x24
  UILabel_o *spendInfoLb; // x24
  const MethodInfo *v43; // x1
  int32_t currentType; // w8
  RecoverItemComponent_o *v45; // x21
  RecoverItemComponent_o *v46; // x22
  int recvTarget; // w24
  UILabel_o *v48; // x21
  Il2CppObject *v49; // x0
  UILabel_o *v50; // x21
  const MethodInfo *v51; // x1
  System_String_o *v52; // x20
  Il2CppObject *v53; // x0
  System_String_o *v54; // x0
  UILabel_o *v55; // x20
  Il2CppObject *v56; // x21
  System_String_o *v57; // x22
  Il2CppObject *v58; // x23
  Il2CppObject *v59; // x0
  bool v60; // cc
  int v61; // w8
  UILabel_o *v62; // x22
  UILabel_o *v63; // x22
  Il2CppObject *v64; // x0
  CommandSpellEntity_o *v65; // x22
  __int64 v66; // x1
  int32_t type; // w8
  struct ItemIconComponent_o *itemIconInfo; // x27
  float v69; // s0
  int v70; // w8
  float usrMaxAp; // s8
  float v72; // s9
  float v73; // s8
  unsigned int v74; // w9
  unsigned int v75; // w8
  System_String_o *v76; // x23
  Il2CppObject *v77; // x0
  System_String_o *v78; // x0
  UILabel_o *itemDetailLb; // x23
  Il2CppObject *v80; // x24
  System_String_o *v81; // x25
  Il2CppObject *v82; // x26
  Il2CppObject *v83; // x0
  int backSprite; // w22
  float v85; // s8
  float v86; // s8
  unsigned int v87; // w9
  unsigned int v88; // w8
  ItemEntity_o *RecvItemData; // x0
  ItemEntity_o *v90; // x24
  __int64 v91; // x1
  int32_t num; // w28
  int32_t v93; // w8
  BalanceConfig_c *v94; // x0
  float v95; // s8
  int v96; // w8
  int v97; // s0
  float v98; // s9
  float v99; // s8
  int v100; // w8
  float v101; // s8
  float v102; // s8
  int32_t v103; // w11
  int32_t v104; // w12
  unsigned int v105; // w8
  System_String_o *v106; // x23
  Il2CppObject *v107; // x0
  System_String_o *v108; // x0
  UILabel_o *v109; // x23
  Il2CppObject *v110; // x25
  System_String_o *v111; // x26
  Il2CppObject *v112; // x27
  Il2CppObject *v113; // x0
  int value; // w23
  float v115; // s8
  float v116; // s8
  unsigned int v117; // w8
  System_String_o *v118; // x21
  Il2CppObject *v119; // x0
  System_String_o *v120; // x0
  UILabel_o *v121; // x21
  Il2CppObject *v122; // x23
  System_String_o *v123; // x24
  Il2CppObject *v124; // x0
  UILabel_o *v125; // x21
  Il2CppObject *v126; // x0
  UILabel_o *v127; // x21
  int v128; // w8
  System_String_o *v129; // x21
  Il2CppObject *v130; // x0
  System_String_o *v131; // x0
  UILabel_o *v132; // x21
  Il2CppObject *v133; // x22
  System_String_o *v134; // x23
  Il2CppObject *v135; // x0
  UILabel_o *currentNumLb; // x21
  UILabel_o *spendNumLb; // x21
  char v138; // w9
  int32_t v139; // [xsp+4h] [xbp-8Ch] BYREF
  int32_t recvApNum; // [xsp+8h] [xbp-88h] BYREF
  int32_t apRcvRate; // [xsp+Ch] [xbp-84h] BYREF
  int32_t spendNum; // [xsp+10h] [xbp-80h] BYREF
  int32_t CommandSpell; // [xsp+14h] [xbp-7Ch] BYREF
  UserItemEntity_o *entity; // [xsp+18h] [xbp-78h] BYREF

  v10 = this;
  if ( (byte_49FFF2B & 1) == 0 )
  {
    sub_1B640C8(&BalanceConfig_TypeInfo, data);
    sub_1B640C8(&Method_DataManager_GetMasterData_CommandSpellMaster___, v11);
    sub_1B640C8(&Method_DataManager_GetMasterData_ItemMaster___, v12);
    sub_1B640C8(&Method_DataManager_GetMasterData_StoneShopMaster___, v13);
    sub_1B640C8(&Method_DataManager_GetMasterData_UserItemMaster___, v14);
    sub_1B640C8(&Method_DataMasterBase_CommandSpellMaster__CommandSpellEntity__int__GetEntity__, v15);
    sub_1B640C8(&Method_DataMasterBase_StoneShopMaster__StoneShopEntity__int__GetEntity__, v16);
    sub_1B640C8(&int_TypeInfo, v17);
    sub_1B640C8(&LocalizationManager_TypeInfo, v18);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v19);
    sub_1B640C8(&StringLiteral_3586/*"CMDSPELL_CURRENT_NUM"*/, v20);
    sub_1B640C8(&StringLiteral_2048/*"ADD_RECOVER_CMDSPELL_TXT"*/, v21);
    sub_1B640C8(&StringLiteral_3588/*"CMDSPELL_SPEND_NUM_TXT"*/, v22);
    sub_1B640C8(&StringLiteral_24871/*"{0:N0}"*/, v23);
    sub_1B640C8(&StringLiteral_920/*"-"*/, v24);
    sub_1B640C8(&StringLiteral_14726/*"UNIT_INFO"*/, v25);
    sub_1B640C8(&StringLiteral_12138/*"SPEND_NUM_TXT"*/, v26);
    sub_1B640C8(&StringLiteral_3926/*"CURRENT_NUM_TXT"*/, v27);
    sub_1B640C8(&StringLiteral_2049/*"ADD_RECOVER_NUM_TXT"*/, v28);
    sub_1B640C8(&StringLiteral_2128/*"AP_RECOVER_NUM_TXT"*/, v29);
    this = (RecoverItemComponent_o *)sub_1B640C8(&StringLiteral_3587/*"CMDSPELL_CURRENT_NUM_TXT"*/, v30);
    byte_49FFF2B = 1;
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
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v10->fields.dialog, (int32_t)dlg, needAp, (int32_t)dlg);
  v10->fields.callbackFunc = callback;
  v10->fields.needAp = needAp;
  *(_WORD *)&v10->fields.isAp = 1;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v10->fields.callbackFunc, (int32_t)callback, v32, v33);
  this = (RecoverItemComponent_o *)v10->fields.maskImg;
  if ( !this )
    goto LABEL_151;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  v10->fields.userEntity = SelfUserGame;
  p_userEntity = (RecoverItemComponent_o **)&v10->fields.userEntity;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v10->fields.userEntity, (int32_t)SelfUserGame, v36, v37);
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
  UILabel__set_text((UILabel_o *)this, (System_String_o *)StringLiteral_920/*"-"*/, 0LL);
  this = (RecoverItemComponent_o *)v10->fields.currentNumLb;
  if ( !this )
    goto LABEL_151;
  UILabel__set_text((UILabel_o *)this, (System_String_o *)StringLiteral_920/*"-"*/, 0LL);
  this = (RecoverItemComponent_o *)v10->fields.spendNumLb;
  if ( !this )
    goto LABEL_151;
  UILabel__set_text((UILabel_o *)this, (System_String_o *)StringLiteral_920/*"-"*/, 0LL);
  this = (RecoverItemComponent_o *)v10->fields.itemDetailLb;
  if ( !this )
    goto LABEL_151;
  UILabel__set_text((UILabel_o *)this, (System_String_o *)StringLiteral_920/*"-"*/, 0LL);
  currentInfoLb = v10->fields.currentInfoLb;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  this = (RecoverItemComponent_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3926/*"CURRENT_NUM_TXT"*/, 0LL);
  if ( !currentInfoLb )
    goto LABEL_151;
  UILabel__set_text(currentInfoLb, (System_String_o *)this, 0LL);
  spendInfoLb = v10->fields.spendInfoLb;
  this = (RecoverItemComponent_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12138/*"SPEND_NUM_TXT"*/, 0LL);
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
    v62 = v10->fields.currentInfoLb;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    this = (RecoverItemComponent_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3587/*"CMDSPELL_CURRENT_NUM_TXT"*/, 0LL);
    if ( !v62 )
      goto LABEL_151;
    UILabel__set_text(v62, (System_String_o *)this, 0LL);
    v63 = v10->fields.spendInfoLb;
    this = (RecoverItemComponent_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3588/*"CMDSPELL_SPEND_NUM_TXT"*/, 0LL);
    if ( !v63 )
      goto LABEL_151;
    UILabel__set_text(v63, (System_String_o *)this, 0LL);
    this = (RecoverItemComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !this )
      goto LABEL_151;
    this = (RecoverItemComponent_o *)DataManager__GetMasterData_object_(
                                       (DataManager_o *)this,
                                       (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_CommandSpellMaster___);
    if ( !this )
      goto LABEL_151;
    v64 = DataMasterBase_object__object__int___GetEntity(
            (DataMasterBase_TMaster__TEntity__PKType__o *)this,
            v10->fields.targetId,
            (const MethodInfo_30D3EA4 *)Method_DataMasterBase_CommandSpellMaster__CommandSpellEntity__int__GetEntity__);
    if ( !v64 )
      goto LABEL_150;
    v65 = (CommandSpellEntity_o *)v64;
    this = (RecoverItemComponent_o *)v10->fields.cmdSpellIcon;
    if ( !this )
      goto LABEL_151;
    CommandSpellIconComponent__SetData((CommandSpellIconComponent_o *)this, v10->fields.userEntity, 0LL);
    this = (RecoverItemComponent_o *)v10->fields.itemNameLb;
    if ( !this )
      goto LABEL_151;
    UILabel__set_text((UILabel_o *)this, v65->fields.name, 0LL);
    this = *p_userEntity;
    if ( !*p_userEntity )
      goto LABEL_151;
    CommandSpell = UserGameEntity__getCommandSpell((UserGameEntity_o *)this, 0LL);
    *p_spendNum = v65->fields.consume;
    this = (RecoverItemComponent_o *)CommandSpellEntity__getValues(v65, 0LL);
    if ( !this )
      goto LABEL_151;
    if ( LODWORD(this->fields.m_CancellationTokenSource) )
    {
      type = v65->fields.type;
      itemIconInfo = this->fields.itemIconInfo;
      if ( type == 3 )
      {
        if ( !itemIconInfo )
          goto LABEL_151;
        if ( !LODWORD(itemIconInfo->fields.m_CancellationTokenSource) )
          goto LABEL_152;
        v69 = (float)((float)SLODWORD(itemIconInfo->fields.backSprite) / 1000.0) * 100.0;
        v70 = (int)v69;
        if ( v69 == INFINITY )
          v70 = 0x80000000;
        v10->fields.apRcvRate = v70;
        usrMaxAp = (float)v10->fields.usrMaxAp;
        v72 = (float)SLODWORD(itemIconInfo->fields.backSprite) / 1000.0;
        if ( !byte_49F779D )
        {
          sub_1B640C8(&System_Math_TypeInfo, v66);
          byte_49F779D = 1;
        }
        v73 = v72 * usrMaxAp;
        if ( !System_Math_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
        v74 = vcvtps_s32_f32(v73);
        if ( ceilf(v73) == INFINITY )
          v75 = 0x80000000;
        else
          v75 = v74;
        v10->fields.recvApNum = v75;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v76 = LocalizationManager__Get((System_String_o *)StringLiteral_3586/*"CMDSPELL_CURRENT_NUM"*/, 0LL);
        spendNum = v10->fields.spendNum;
        v77 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &spendNum);
        v78 = System_String__Format(v76, v77, 0LL);
        itemDetailLb = v10->fields.itemDetailLb;
        v80 = (Il2CppObject *)v78;
        v81 = LocalizationManager__Get((System_String_o *)StringLiteral_2128/*"AP_RECOVER_NUM_TXT"*/, 0LL);
        apRcvRate = v10->fields.apRcvRate;
        v82 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &apRcvRate);
        recvApNum = v10->fields.recvApNum;
        v83 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &recvApNum);
        this = (RecoverItemComponent_o *)System_String__Format_61389836(v81, v80, v82, v83, 0LL);
        if ( !itemDetailLb )
          goto LABEL_151;
        UILabel__set_text(itemDetailLb, (System_String_o *)this, 0LL);
        type = v65->fields.type;
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
            v60 = CommandSpell < v10->fields.spendNum;
            v61 = v10->fields.recvApNum + v10->fields.usrCurrentAp;
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
          v88 = *p_spendNum;
        }
        else
        {
          v85 = (float)(needAp - v10->fields.usrCurrentAp) / (float)backSprite;
          if ( !byte_49F779D )
          {
            sub_1B640C8(&System_Math_TypeInfo, v66);
            byte_49F779D = 1;
          }
          v86 = fmaxf(v85, 1.0);
          if ( !System_Math_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
          v87 = vcvtps_s32_f32(v86);
          if ( ceilf(v86) == INFINITY )
            v88 = 0x80000000;
          else
            v88 = v87;
          *p_spendNum = v88;
        }
        v10->fields.recvApNum = v88 * backSprite;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v129 = LocalizationManager__Get((System_String_o *)StringLiteral_3586/*"CMDSPELL_CURRENT_NUM"*/, 0LL);
        spendNum = v10->fields.spendNum;
        v130 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &spendNum);
        v131 = System_String__Format(v129, v130, 0LL);
        v132 = v10->fields.itemDetailLb;
        v133 = (Il2CppObject *)v131;
        v134 = LocalizationManager__Get((System_String_o *)StringLiteral_2048/*"ADD_RECOVER_CMDSPELL_TXT"*/, 0LL);
        apRcvRate = v10->fields.recvApNum;
        v135 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &apRcvRate);
        this = (RecoverItemComponent_o *)System_String__Format_61389768(v134, v133, v135, 0LL);
        if ( !v132 )
          goto LABEL_151;
        UILabel__set_text(v132, (System_String_o *)this, 0LL);
        v10->fields.isAddAp = 1;
        goto LABEL_143;
      }
    }
LABEL_152:
    sub_1B6432C(this, v66);
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
          v90 = RecvItemData;
          this = (RecoverItemComponent_o *)v10->fields.itemIconInfo;
          if ( this )
          {
            ItemIconComponent__SetItemImage_37826976(
              (ItemIconComponent_o *)this,
              v90->fields.imageId,
              v90->fields.bgImageId,
              v90->fields.type,
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
                  UILabel__set_text((UILabel_o *)this, v90->fields.name, 0LL);
                  *p_spendNum = 1;
                  this = (RecoverItemComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
                  if ( this )
                  {
                    this = (RecoverItemComponent_o *)DataManager__GetMasterData_object_(
                                                       (DataManager_o *)this,
                                                       (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_UserItemMaster___);
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
                        v93 = v90->fields.type;
                        if ( v93 == 3 )
                        {
                          v94 = BalanceConfig_TypeInfo;
                          if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
                          {
                            j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
                            v94 = BalanceConfig_TypeInfo;
                          }
                          v10->fields.spendNum = v94->static_fields->SpendApRecvItemNum;
                          v95 = (float)v90->fields.value / 1000.0;
                          if ( (float)(v95 * 100.0) == INFINITY )
                            v96 = 0x80000000;
                          else
                            v96 = (int)(float)(v95 * 100.0);
                          v97 = v10->fields.usrMaxAp;
                          v10->fields.apRcvRate = v96;
                          v98 = (float)v97;
                          if ( !byte_49F779D )
                          {
                            sub_1B640C8(&System_Math_TypeInfo, v91);
                            byte_49F779D = 1;
                          }
                          v99 = v95 * v98;
                          if ( !System_Math_TypeInfo->_2.cctor_finished )
                            j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
                          v100 = vcvtps_s32_f32(v99);
                          if ( ceilf(v99) == INFINITY )
                            v100 = 0x80000000;
                          v10->fields.recvApNum = v100;
                          if ( needAp >= 1 )
                          {
                            v101 = (float)(needAp - v10->fields.usrCurrentAp) / (float)v100;
                            if ( !byte_49F779D )
                            {
                              sub_1B640C8(&System_Math_TypeInfo, v91);
                              byte_49F779D = 1;
                            }
                            v102 = fmaxf(v101, 1.0);
                            if ( !System_Math_TypeInfo->_2.cctor_finished )
                              j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
                            v103 = v10->fields.apRcvRate;
                            v104 = v10->fields.recvApNum;
                            v105 = vcvtps_s32_f32(v102);
                            if ( ceilf(v102) == INFINITY )
                              v105 = 0x80000000;
                            v10->fields.spendNum = v105;
                            v10->fields.apRcvRate = v103 * v105;
                            v10->fields.recvApNum = v104 * v105;
                          }
                          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                          v106 = LocalizationManager__Get((System_String_o *)StringLiteral_14726/*"UNIT_INFO"*/, 0LL);
                          spendNum = v10->fields.spendNum;
                          v107 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &spendNum);
                          v108 = System_String__Format(v106, v107, 0LL);
                          v109 = v10->fields.itemDetailLb;
                          v110 = (Il2CppObject *)v108;
                          v111 = LocalizationManager__Get((System_String_o *)StringLiteral_2128/*"AP_RECOVER_NUM_TXT"*/, 0LL);
                          apRcvRate = v10->fields.apRcvRate;
                          v112 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &apRcvRate);
                          recvApNum = v10->fields.recvApNum;
                          v113 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &recvApNum);
                          this = (RecoverItemComponent_o *)System_String__Format_61389836(v111, v110, v112, v113, 0LL);
                          if ( !v109 )
                            goto LABEL_151;
                          UILabel__set_text(v109, (System_String_o *)this, 0LL);
                          v93 = v90->fields.type;
                        }
                        if ( v93 == 4 )
                        {
                          value = v90->fields.value;
                          if ( needAp < 1 )
                          {
                            *p_spendNum = 1;
                          }
                          else
                          {
                            v115 = (float)(needAp - v10->fields.usrCurrentAp) / (float)value;
                            if ( !byte_49F779D )
                            {
                              sub_1B640C8(&System_Math_TypeInfo, v91);
                              byte_49F779D = 1;
                            }
                            v116 = fmaxf(v115, 1.0);
                            if ( !System_Math_TypeInfo->_2.cctor_finished )
                              j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
                            v117 = vcvtps_s32_f32(v116);
                            if ( ceilf(v116) == INFINITY )
                              v117 = 0x80000000;
                            *p_spendNum = v117;
                            value *= v117;
                          }
                          v10->fields.recvApNum = value;
                          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                          v118 = LocalizationManager__Get((System_String_o *)StringLiteral_14726/*"UNIT_INFO"*/, 0LL);
                          spendNum = v10->fields.spendNum;
                          v119 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &spendNum);
                          v120 = System_String__Format(v118, v119, 0LL);
                          v121 = v10->fields.itemDetailLb;
                          v122 = (Il2CppObject *)v120;
                          v123 = LocalizationManager__Get((System_String_o *)StringLiteral_2049/*"ADD_RECOVER_NUM_TXT"*/, 0LL);
                          apRcvRate = v10->fields.recvApNum;
                          v124 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &apRcvRate);
                          this = (RecoverItemComponent_o *)System_String__Format_61389768(v123, v122, v124, 0LL);
                          if ( !v121 )
                            goto LABEL_151;
                          UILabel__set_text(v121, (System_String_o *)this, 0LL);
                          v10->fields.isAddAp = 1;
                        }
                        v125 = v10->fields.currentNumLb;
                        spendNum = num;
                        v126 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &spendNum);
                        this = (RecoverItemComponent_o *)System_String__Format(
                                                           (System_String_o *)StringLiteral_24871/*"{0:N0}"*/,
                                                           v126,
                                                           0LL);
                        if ( v125 )
                        {
                          UILabel__set_text(v125, (System_String_o *)this, 0LL);
                          v127 = v10->fields.spendNumLb;
                          this = (RecoverItemComponent_o *)System_Int32__ToString((int)v10 + 128, 0LL);
                          if ( v127 )
                          {
                            UILabel__set_text(v127, (System_String_o *)this, 0LL);
                            v128 = v10->fields.recvApNum + v10->fields.usrCurrentAp;
                            v10->fields.isEnableSelect = num >= v10->fields.spendNum;
                            v10->fields.recvSum = v128;
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
    sub_1B64324(this);
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
  this = (RecoverItemComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_151;
  this = (RecoverItemComponent_o *)DataManager__GetMasterData_object_(
                                     (DataManager_o *)this,
                                     (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_ItemMaster___);
  if ( !this )
    goto LABEL_151;
  this = (RecoverItemComponent_o *)ItemMaster__GetEntityByType((ItemMaster_o *)this, 2, 0LL);
  if ( !this )
    goto LABEL_151;
  v45 = this;
  this = (RecoverItemComponent_o *)v10->fields.itemIconInfo;
  if ( !this )
    goto LABEL_151;
  ItemIconComponent__SetItemImage_37826976(
    (ItemIconComponent_o *)this,
    (int32_t)v45->fields.cmdSpellBg,
    HIDWORD(v45->fields.cmdSpellBg),
    (int32_t)v45->fields.cmdSpellIcon,
    0,
    0LL);
  this = (RecoverItemComponent_o *)v10->fields.itemIconInfo;
  if ( !this )
    goto LABEL_151;
  this = (RecoverItemComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !this )
    goto LABEL_151;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
  this = (RecoverItemComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_151;
  this = (RecoverItemComponent_o *)DataManager__GetMasterData_object_(
                                     (DataManager_o *)this,
                                     (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_StoneShopMaster___);
  if ( !this )
    goto LABEL_151;
  this = (RecoverItemComponent_o *)DataMasterBase_object__object__int___GetEntity(
                                     (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                     v10->fields.targetId,
                                     (const MethodInfo_30D3EA4 *)Method_DataMasterBase_StoneShopMaster__StoneShopEntity__int__GetEntity__);
  if ( !v10->fields.itemNameLb )
    goto LABEL_151;
  v46 = this;
  UILabel__set_text(v10->fields.itemNameLb, (System_String_o *)v45->fields.m_CancellationTokenSource, 0LL);
  if ( !*p_userEntity )
    goto LABEL_151;
  recvTarget = (*p_userEntity)->fields.recvTarget;
  if ( v46 )
    *p_spendNum = HIDWORD(v46->fields.cmdSpellBg);
  v48 = v10->fields.currentNumLb;
  spendNum = recvTarget;
  v49 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &spendNum);
  this = (RecoverItemComponent_o *)System_String__Format((System_String_o *)StringLiteral_24871/*"{0:N0}"*/, v49, 0LL);
  if ( !v48 )
    goto LABEL_151;
  UILabel__set_text(v48, (System_String_o *)this, 0LL);
  v50 = v10->fields.spendNumLb;
  this = (RecoverItemComponent_o *)System_Int32__ToString((int)v10 + 128, 0LL);
  if ( !v50 )
    goto LABEL_151;
  UILabel__set_text(v50, (System_String_o *)this, 0LL);
  RecoverItemComponent__AttachStoneCountRefreshComponent(v10, v51);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v52 = LocalizationManager__Get((System_String_o *)StringLiteral_14726/*"UNIT_INFO"*/, 0LL);
  apRcvRate = v10->fields.spendNum;
  v53 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &apRcvRate);
  v54 = System_String__Format(v52, v53, 0LL);
  v55 = v10->fields.itemDetailLb;
  v56 = (Il2CppObject *)v54;
  v57 = LocalizationManager__Get((System_String_o *)StringLiteral_2128/*"AP_RECOVER_NUM_TXT"*/, 0LL);
  recvApNum = v10->fields.apRcvRate;
  v58 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &recvApNum);
  v139 = v10->fields.recvApNum;
  v59 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v139);
  this = (RecoverItemComponent_o *)System_String__Format_61389836(v57, v56, v58, v59, 0LL);
  if ( !v55 )
    goto LABEL_151;
  UILabel__set_text(v55, (System_String_o *)this, 0LL);
  v60 = recvTarget < v10->fields.spendNum;
  v61 = v10->fields.usrMaxAp + v10->fields.usrCurrentAp;
LABEL_146:
  v138 = !v60;
  v10->fields.isEnableSelect = v138;
  v10->fields.recvSum = v61;
LABEL_150:
  RecoverItemComponent__setEnableSelectItem(v10, v43);
}


void __fastcall RecoverItemComponent__setEnableSelectItem(RecoverItemComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *maskImg; // x0

  if ( !this->fields.isEnableSelect )
  {
    maskImg = this->fields.maskImg;
    if ( !maskImg )
      sub_1B64324(0LL);
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
  int32_t v31; // w2
  int32_t v32; // w3
  UserGameEntity_o *SelfUserGame; // x0
  RecoverItemComponent_o **p_userEntity; // x23
  int32_t v35; // w2
  int32_t v36; // w3
  BalanceConfig_c *v37; // x0
  int32_t UerGameRpMax; // w8
  unsigned int *p_spendNum; // x20
  UILabel_o *currentInfoLb; // x24
  UILabel_o *spendInfoLb; // x24
  const MethodInfo *v42; // x1
  int32_t currentType; // w8
  RecoverItemComponent_o *v44; // x21
  RecoverItemComponent_o *v45; // x22
  int recvTarget; // w23
  UILabel_o *v47; // x21
  Il2CppObject *v48; // x0
  UILabel_o *v49; // x21
  const MethodInfo *v50; // x1
  System_String_o *v51; // x20
  Il2CppObject *v52; // x0
  System_String_o *v53; // x0
  UILabel_o *v54; // x20
  Il2CppObject *v55; // x21
  System_String_o *v56; // x22
  Il2CppObject *v57; // x0
  bool v58; // cc
  int v59; // w8
  UILabel_o *v60; // x22
  UILabel_o *v61; // x22
  Il2CppObject *v62; // x0
  CommandSpellEntity_o *v63; // x22
  __int64 v64; // x1
  struct ItemIconComponent_o *itemIconInfo; // x8
  int backSprite; // w22
  float v67; // s8
  float v68; // s8
  unsigned int v69; // w9
  unsigned int v70; // w8
  ItemEntity_o *RecvItemData; // x0
  ItemEntity_o *v72; // x24
  __int64 v73; // x1
  int32_t v74; // w26
  int value; // w23
  float v76; // s8
  float v77; // s8
  unsigned int v78; // w8
  System_String_o *v79; // x21
  Il2CppObject *v80; // x0
  System_String_o *v81; // x0
  UILabel_o *v82; // x21
  Il2CppObject *v83; // x23
  System_String_o *v84; // x24
  Il2CppObject *v85; // x0
  UILabel_o *v86; // x21
  Il2CppObject *v87; // x0
  UILabel_o *v88; // x21
  int v89; // w8
  System_String_o *v90; // x21
  Il2CppObject *v91; // x0
  System_String_o *v92; // x0
  UILabel_o *itemDetailLb; // x21
  Il2CppObject *v94; // x22
  System_String_o *v95; // x23
  Il2CppObject *v96; // x0
  UILabel_o *currentNumLb; // x21
  UILabel_o *spendNumLb; // x21
  char v99; // w9
  int32_t v100; // [xsp+0h] [xbp-70h] BYREF
  int32_t recvRpNum; // [xsp+4h] [xbp-6Ch] BYREF
  int32_t spendNum; // [xsp+8h] [xbp-68h] BYREF
  int32_t CommandSpell; // [xsp+Ch] [xbp-64h] BYREF
  UserItemEntity_o *entity; // [xsp+28h] [xbp-48h] BYREF

  v10 = this;
  if ( (byte_49FFF2C & 1) == 0 )
  {
    sub_1B640C8(&BalanceConfig_TypeInfo, data);
    sub_1B640C8(&Method_DataManager_GetMasterData_CommandSpellMaster___, v11);
    sub_1B640C8(&Method_DataManager_GetMasterData_ItemMaster___, v12);
    sub_1B640C8(&Method_DataManager_GetMasterData_StoneShopMaster___, v13);
    sub_1B640C8(&Method_DataManager_GetMasterData_UserItemMaster___, v14);
    sub_1B640C8(&Method_DataMasterBase_CommandSpellMaster__CommandSpellEntity__int__GetEntity__, v15);
    sub_1B640C8(&Method_DataMasterBase_StoneShopMaster__StoneShopEntity__int__GetEntity__, v16);
    sub_1B640C8(&int_TypeInfo, v17);
    sub_1B640C8(&LocalizationManager_TypeInfo, v18);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v19);
    sub_1B640C8(&StringLiteral_3586/*"CMDSPELL_CURRENT_NUM"*/, v20);
    sub_1B640C8(&StringLiteral_3588/*"CMDSPELL_SPEND_NUM_TXT"*/, v21);
    sub_1B640C8(&StringLiteral_24871/*"{0:N0}"*/, v22);
    sub_1B640C8(&StringLiteral_920/*"-"*/, v23);
    sub_1B640C8(&StringLiteral_14726/*"UNIT_INFO"*/, v24);
    sub_1B640C8(&StringLiteral_12138/*"SPEND_NUM_TXT"*/, v25);
    sub_1B640C8(&StringLiteral_3926/*"CURRENT_NUM_TXT"*/, v26);
    sub_1B640C8(&StringLiteral_11076/*"RP_RECOVER_CMDSPELL_TXT"*/, v27);
    sub_1B640C8(&StringLiteral_11078/*"RP_RECOVER_NUM_TXT"*/, v28);
    this = (RecoverItemComponent_o *)sub_1B640C8(&StringLiteral_3587/*"CMDSPELL_CURRENT_NUM_TXT"*/, v29);
    byte_49FFF2C = 1;
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
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v10->fields.dialog, (int32_t)dlg, needRp, (int32_t)dlg);
  v10->fields.callbackFunc = callback;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v10->fields.callbackFunc, (int32_t)callback, v31, v32);
  this = (RecoverItemComponent_o *)v10->fields.maskImg;
  if ( !this )
    goto LABEL_107;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  v10->fields.userEntity = SelfUserGame;
  p_userEntity = (RecoverItemComponent_o **)&v10->fields.userEntity;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v10->fields.userEntity, (int32_t)SelfUserGame, v35, v36);
  this = (RecoverItemComponent_o *)v10->fields.userEntity;
  if ( !this )
    goto LABEL_107;
  v10->fields.usrCurrentRp = UserGameEntity__getRp((UserGameEntity_o *)this, 0LL);
  v37 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v37 = BalanceConfig_TypeInfo;
  }
  UerGameRpMax = v37->static_fields->UerGameRpMax;
  v10->fields.spendNum = 1;
  p_spendNum = (unsigned int *)&v10->fields.spendNum;
  this = (RecoverItemComponent_o *)v10->fields.itemNameLb;
  v10->fields.isAp = 0;
  v10->fields.usrMaxRp = UerGameRpMax;
  v10->fields.recvRpNum = UerGameRpMax;
  if ( !this )
    goto LABEL_107;
  UILabel__set_text((UILabel_o *)this, (System_String_o *)StringLiteral_920/*"-"*/, 0LL);
  this = (RecoverItemComponent_o *)v10->fields.currentNumLb;
  if ( !this )
    goto LABEL_107;
  UILabel__set_text((UILabel_o *)this, (System_String_o *)StringLiteral_920/*"-"*/, 0LL);
  this = (RecoverItemComponent_o *)v10->fields.spendNumLb;
  if ( !this )
    goto LABEL_107;
  UILabel__set_text((UILabel_o *)this, (System_String_o *)StringLiteral_920/*"-"*/, 0LL);
  this = (RecoverItemComponent_o *)v10->fields.itemDetailLb;
  if ( !this )
    goto LABEL_107;
  UILabel__set_text((UILabel_o *)this, (System_String_o *)StringLiteral_920/*"-"*/, 0LL);
  currentInfoLb = v10->fields.currentInfoLb;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  this = (RecoverItemComponent_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3926/*"CURRENT_NUM_TXT"*/, 0LL);
  if ( !currentInfoLb )
    goto LABEL_107;
  UILabel__set_text(currentInfoLb, (System_String_o *)this, 0LL);
  spendInfoLb = v10->fields.spendInfoLb;
  this = (RecoverItemComponent_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12138/*"SPEND_NUM_TXT"*/, 0LL);
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
          v60 = v10->fields.currentInfoLb;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          this = (RecoverItemComponent_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3587/*"CMDSPELL_CURRENT_NUM_TXT"*/, 0LL);
          if ( v60 )
          {
            UILabel__set_text(v60, (System_String_o *)this, 0LL);
            v61 = v10->fields.spendInfoLb;
            this = (RecoverItemComponent_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3588/*"CMDSPELL_SPEND_NUM_TXT"*/, 0LL);
            if ( v61 )
            {
              UILabel__set_text(v61, (System_String_o *)this, 0LL);
              this = (RecoverItemComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
              if ( this )
              {
                this = (RecoverItemComponent_o *)DataManager__GetMasterData_object_(
                                                   (DataManager_o *)this,
                                                   (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_CommandSpellMaster___);
                if ( this )
                {
                  v62 = DataMasterBase_object__object__int___GetEntity(
                          (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                          v10->fields.targetId,
                          (const MethodInfo_30D3EA4 *)Method_DataMasterBase_CommandSpellMaster__CommandSpellEntity__int__GetEntity__);
                  if ( !v62 )
                    goto LABEL_106;
                  v63 = (CommandSpellEntity_o *)v62;
                  this = (RecoverItemComponent_o *)v10->fields.cmdSpellIcon;
                  if ( this )
                  {
                    CommandSpellIconComponent__SetData((CommandSpellIconComponent_o *)this, v10->fields.userEntity, 0LL);
                    this = (RecoverItemComponent_o *)v10->fields.itemNameLb;
                    if ( this )
                    {
                      UILabel__set_text((UILabel_o *)this, v63->fields.name, 0LL);
                      this = *p_userEntity;
                      if ( *p_userEntity )
                      {
                        CommandSpell = UserGameEntity__getCommandSpell((UserGameEntity_o *)this, 0LL);
                        *p_spendNum = v63->fields.consume;
                        this = (RecoverItemComponent_o *)CommandSpellEntity__getValues(v63, 0LL);
                        if ( this )
                        {
                          if ( !LODWORD(this->fields.m_CancellationTokenSource) )
                            goto LABEL_108;
                          itemIconInfo = this->fields.itemIconInfo;
                          if ( !itemIconInfo )
                            goto LABEL_107;
                          if ( !LODWORD(itemIconInfo->fields.m_CancellationTokenSource) )
LABEL_108:
                            sub_1B6432C(this, v64);
                          backSprite = (int)itemIconInfo->fields.backSprite;
                          if ( needRp < 1 )
                          {
                            v70 = *p_spendNum;
                          }
                          else
                          {
                            v67 = (float)(needRp - v10->fields.usrCurrentRp) / (float)backSprite;
                            if ( !byte_49F779D )
                            {
                              sub_1B640C8(&System_Math_TypeInfo, v64);
                              byte_49F779D = 1;
                            }
                            v68 = fmaxf(v67, 1.0);
                            if ( !System_Math_TypeInfo->_2.cctor_finished )
                              j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
                            v69 = vcvtps_s32_f32(v68);
                            if ( ceilf(v68) == INFINITY )
                              v70 = 0x80000000;
                            else
                              v70 = v69;
                            *p_spendNum = v70;
                          }
                          v10->fields.recvRpNum = v70 * backSprite;
                          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                          v90 = LocalizationManager__Get((System_String_o *)StringLiteral_3586/*"CMDSPELL_CURRENT_NUM"*/, 0LL);
                          spendNum = v10->fields.spendNum;
                          v91 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &spendNum);
                          v92 = System_String__Format(v90, v91, 0LL);
                          itemDetailLb = v10->fields.itemDetailLb;
                          v94 = (Il2CppObject *)v92;
                          v95 = LocalizationManager__Get((System_String_o *)StringLiteral_11076/*"RP_RECOVER_CMDSPELL_TXT"*/, 0LL);
                          recvRpNum = v10->fields.recvRpNum;
                          v96 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &recvRpNum);
                          this = (RecoverItemComponent_o *)System_String__Format_61389768(v95, v94, v96, 0LL);
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
                                v58 = CommandSpell < v10->fields.spendNum;
                                v59 = v10->fields.recvRpNum + v10->fields.usrCurrentRp;
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
          v72 = RecvItemData;
          this = (RecoverItemComponent_o *)v10->fields.itemIconInfo;
          if ( this )
          {
            ItemIconComponent__SetItemImage_37826976(
              (ItemIconComponent_o *)this,
              v72->fields.imageId,
              v72->fields.bgImageId,
              v72->fields.type,
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
                  UILabel__set_text((UILabel_o *)this, v72->fields.name, 0LL);
                  this = (RecoverItemComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
                  if ( this )
                  {
                    this = (RecoverItemComponent_o *)DataManager__GetMasterData_object_(
                                                       (DataManager_o *)this,
                                                       (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_UserItemMaster___);
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
                        v74 = entity ? entity->fields.num : 0;
                        value = v72->fields.value;
                        if ( needRp < 1 )
                        {
                          *p_spendNum = 1;
                        }
                        else
                        {
                          v76 = (float)(needRp - v10->fields.usrCurrentRp) / (float)value;
                          if ( !byte_49F779D )
                          {
                            sub_1B640C8(&System_Math_TypeInfo, v73);
                            byte_49F779D = 1;
                          }
                          v77 = fmaxf(v76, 1.0);
                          if ( !System_Math_TypeInfo->_2.cctor_finished )
                            j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
                          v78 = vcvtps_s32_f32(v77);
                          if ( ceilf(v77) == INFINITY )
                            v78 = 0x80000000;
                          *p_spendNum = v78;
                          value *= v78;
                        }
                        v10->fields.recvRpNum = value;
                        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                        v79 = LocalizationManager__Get((System_String_o *)StringLiteral_14726/*"UNIT_INFO"*/, 0LL);
                        spendNum = v10->fields.spendNum;
                        v80 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &spendNum);
                        v81 = System_String__Format(v79, v80, 0LL);
                        v82 = v10->fields.itemDetailLb;
                        v83 = (Il2CppObject *)v81;
                        v84 = LocalizationManager__Get((System_String_o *)StringLiteral_11078/*"RP_RECOVER_NUM_TXT"*/, 0LL);
                        recvRpNum = v10->fields.recvRpNum;
                        v85 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &recvRpNum);
                        this = (RecoverItemComponent_o *)System_String__Format_61389768(v84, v83, v85, 0LL);
                        if ( v82 )
                        {
                          UILabel__set_text(v82, (System_String_o *)this, 0LL);
                          v86 = v10->fields.currentNumLb;
                          v100 = v74;
                          v87 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v100);
                          this = (RecoverItemComponent_o *)System_String__Format(
                                                             (System_String_o *)StringLiteral_24871/*"{0:N0}"*/,
                                                             v87,
                                                             0LL);
                          if ( v86 )
                          {
                            UILabel__set_text(v86, (System_String_o *)this, 0LL);
                            v88 = v10->fields.spendNumLb;
                            this = (RecoverItemComponent_o *)System_Int32__ToString((int)v10 + 128, 0LL);
                            if ( v88 )
                            {
                              UILabel__set_text(v88, (System_String_o *)this, 0LL);
                              v89 = v10->fields.recvRpNum + v10->fields.usrCurrentRp;
                              v10->fields.isEnableSelect = v74 >= v10->fields.spendNum;
                              v10->fields.recvSum = v89;
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
  this = (RecoverItemComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_107;
  this = (RecoverItemComponent_o *)DataManager__GetMasterData_object_(
                                     (DataManager_o *)this,
                                     (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_ItemMaster___);
  if ( !this )
    goto LABEL_107;
  this = (RecoverItemComponent_o *)ItemMaster__GetEntityByType((ItemMaster_o *)this, 2, 0LL);
  if ( !this )
    goto LABEL_107;
  v44 = this;
  this = (RecoverItemComponent_o *)v10->fields.itemIconInfo;
  if ( !this )
    goto LABEL_107;
  ItemIconComponent__SetItemImage_37826976(
    (ItemIconComponent_o *)this,
    (int32_t)v44->fields.cmdSpellBg,
    HIDWORD(v44->fields.cmdSpellBg),
    (int32_t)v44->fields.cmdSpellIcon,
    0,
    0LL);
  this = (RecoverItemComponent_o *)v10->fields.itemIconInfo;
  if ( !this )
    goto LABEL_107;
  this = (RecoverItemComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !this )
    goto LABEL_107;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
  this = (RecoverItemComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_107;
  this = (RecoverItemComponent_o *)DataManager__GetMasterData_object_(
                                     (DataManager_o *)this,
                                     (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_StoneShopMaster___);
  if ( !this )
    goto LABEL_107;
  this = (RecoverItemComponent_o *)DataMasterBase_object__object__int___GetEntity(
                                     (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                     v10->fields.targetId,
                                     (const MethodInfo_30D3EA4 *)Method_DataMasterBase_StoneShopMaster__StoneShopEntity__int__GetEntity__);
  if ( !v10->fields.itemNameLb )
    goto LABEL_107;
  v45 = this;
  UILabel__set_text(v10->fields.itemNameLb, (System_String_o *)v44->fields.m_CancellationTokenSource, 0LL);
  if ( !*p_userEntity )
    goto LABEL_107;
  recvTarget = (*p_userEntity)->fields.recvTarget;
  if ( v45 )
    *p_spendNum = HIDWORD(v45->fields.cmdSpellBg);
  v47 = v10->fields.currentNumLb;
  spendNum = recvTarget;
  v48 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &spendNum);
  this = (RecoverItemComponent_o *)System_String__Format((System_String_o *)StringLiteral_24871/*"{0:N0}"*/, v48, 0LL);
  if ( !v47 )
    goto LABEL_107;
  UILabel__set_text(v47, (System_String_o *)this, 0LL);
  v49 = v10->fields.spendNumLb;
  this = (RecoverItemComponent_o *)System_Int32__ToString((int)v10 + 128, 0LL);
  if ( !v49 )
    goto LABEL_107;
  UILabel__set_text(v49, (System_String_o *)this, 0LL);
  RecoverItemComponent__AttachStoneCountRefreshComponent(v10, v50);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v51 = LocalizationManager__Get((System_String_o *)StringLiteral_14726/*"UNIT_INFO"*/, 0LL);
  recvRpNum = v10->fields.spendNum;
  v52 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &recvRpNum);
  v53 = System_String__Format(v51, v52, 0LL);
  v54 = v10->fields.itemDetailLb;
  v55 = (Il2CppObject *)v53;
  v56 = LocalizationManager__Get((System_String_o *)StringLiteral_11078/*"RP_RECOVER_NUM_TXT"*/, 0LL);
  v100 = v10->fields.recvRpNum;
  v57 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v100);
  this = (RecoverItemComponent_o *)System_String__Format_61389768(v56, v55, v57, 0LL);
  if ( !v54 )
LABEL_107:
    sub_1B64324(this);
  UILabel__set_text(v54, (System_String_o *)this, 0LL);
  v58 = recvTarget < v10->fields.spendNum;
  v59 = v10->fields.recvRpNum + v10->fields.usrCurrentRp;
LABEL_102:
  v99 = !v58;
  v10->fields.isEnableSelect = v99;
  v10->fields.recvSum = v59;
LABEL_106:
  RecoverItemComponent__setEnableSelectItem(v10, v42);
}


void __fastcall RecoverItemComponent__setRequestInfo(RecoverItemComponent_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  DataManager_o *Instance; // x0
  __int64 v15; // x1
  __int64 v16; // x8
  struct RecoverItemComponent_CallbackFunc_o *callbackFunc; // x20
  Il2CppObject *v18; // x19
  __int64 v19; // x1
  __int64 v20; // x2
  System_String_o *v21; // x20
  RecoverItemComponent___c_c *v22; // x8
  System_Action_o *_9__43_0; // x22
  System_String_o *v24; // x21
  Il2CppObject *v25; // x23
  struct RecoverItemComponent___c_StaticFields *static_fields; // x0
  int32_t v27; // w2
  int32_t v28; // w3

  if ( (byte_49FFF31 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, method);
    sub_1B640C8(&Method_DataManager_GetMasterData_EventMaster___, v5);
    sub_1B640C8(&LocalizationManager_TypeInfo, v6);
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v7);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8);
    sub_1B640C8(&TerminalSceneComponent_TypeInfo, v9);
    sub_1B640C8(&Method_RecoverItemComponent___c__setRequestInfo_b__43_0__, v10);
    sub_1B640C8(&RecoverItemComponent___c_TypeInfo, v11);
    sub_1B640C8(&StringLiteral_11079/*"RP_UNRECOVERABLE_MESSAGE"*/, v12);
    sub_1B640C8(&StringLiteral_1/*""*/, v13);
    byte_49FFF31 = 1;
  }
  if ( this->fields.recvTarget != 2 )
    goto LABEL_14;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_27;
  DataManager__GetMasterData_object_(
    Instance,
    (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_EventMaster___);
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  if ( !byte_49F76BD )
  {
    sub_1B640C8(&TerminalSceneComponent_TypeInfo, v15);
    byte_49F76BD = 1;
  }
  Instance = (DataManager_o *)TerminalSceneComponent_TypeInfo;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    Instance = (DataManager_o *)TerminalSceneComponent_TypeInfo;
  }
  v16 = **(_QWORD **)&Instance[1].fields._DispLog;
  if ( !v16 || (Instance = *(DataManager_o **)(v16 + 248)) == 0LL )
LABEL_27:
    sub_1B64324(Instance);
  if ( !ScrPlayerStatus__IsBPActive((ScrPlayerStatus_o *)Instance, 0LL) )
  {
    v18 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    Instance = (DataManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11079/*"RP_UNRECOVERABLE_MESSAGE"*/, 0LL);
    v21 = (System_String_o *)Instance;
    v22 = RecoverItemComponent___c_TypeInfo;
    if ( !RecoverItemComponent___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(RecoverItemComponent___c_TypeInfo);
      v22 = RecoverItemComponent___c_TypeInfo;
    }
    _9__43_0 = v22->static_fields->__9__43_0;
    v24 = (System_String_o *)StringLiteral_1/*""*/;
    if ( !_9__43_0 )
    {
      if ( !v22->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v22);
        v22 = RecoverItemComponent___c_TypeInfo;
      }
      v25 = (Il2CppObject *)v22->static_fields->__9;
      _9__43_0 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v19, v20);
      System_Action___ctor(_9__43_0, v25, Method_RecoverItemComponent___c__setRequestInfo_b__43_0__, 0LL);
      static_fields = RecoverItemComponent___c_TypeInfo->static_fields;
      static_fields->__9__43_0 = _9__43_0;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)&static_fields->__9__43_0, (int32_t)_9__43_0, v27, v28);
    }
    if ( v18 )
    {
      CommonUI__OpenNotificationDialog((CommonUI_o *)v18, v24, v21, _9__43_0, -1, 0, 0, 0, 1, 0, 1, 0, 0LL, 0.0, 0LL);
      return;
    }
    goto LABEL_27;
  }
LABEL_14:
  callbackFunc = this->fields.callbackFunc;
  if ( callbackFunc )
  {
    this->fields.callbackFunc = 0LL;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.callbackFunc, 0, v2, v3);
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
  __int64 v9; // x2
  CommonUI_o *v10; // x21
  System_Action_o *v11; // x20

  if ( (byte_49FFF2F & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, isRes);
    sub_1B640C8(&Method_RecoverItemComponent_setRequestInfo__, v5);
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6);
    byte_49FFF2F = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v10 = (CommonUI_o *)Instance;
  if ( isRes )
  {
    v11 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v8, v9);
    System_Action___ctor(v11, (Il2CppObject *)this, Method_RecoverItemComponent_setRequestInfo__, 0LL);
    if ( v10 )
    {
      CommonUI__CloseConfirmDialog_30345628(v10, v11, 0LL);
      return;
    }
LABEL_8:
    sub_1B64324(Instance);
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
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.method, (int32_t)object, method, (int32_t)a4);
  v8 = *(unsigned __int8 *)(v6 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1B64188(v6) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1B64340(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1B641F0(v10, 0LL);
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
  this->fields.m_target = (Il2CppObject *)sub_19B0C3C;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_19B0BDC;
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
  _QWORD v12[2]; // [xsp+0h] [xbp-70h] BYREF
  __int128 v13; // [xsp+10h] [xbp-60h]
  int32_t v14; // [xsp+2Ch] [xbp-44h] BYREF
  int32_t v15; // [xsp+38h] [xbp-38h] BYREF
  int32_t v16; // [xsp+3Ch] [xbp-34h] BYREF

  v15 = id;
  v16 = type;
  v14 = num;
  if ( (byte_49FFF35 & 1) == 0 )
  {
    sub_1B640C8(&int_TypeInfo, *(_QWORD *)&type);
    sub_1B640C8(&RecoverType_Type_TypeInfo, v10);
    byte_49FFF35 = 1;
  }
  v13 = 0u;
  v12[0] = j_il2cpp_value_box_0(RecoverType_Type_TypeInfo, &v16);
  v12[1] = j_il2cpp_value_box_0(int_TypeInfo, &v15);
  *(_QWORD *)&v13 = j_il2cpp_value_box_0(int_TypeInfo, &v14);
  return (System_IAsyncResult_o *)sub_1B6407C(this, v12, callback, object);
}


void __fastcall RecoverItemComponent_CallbackFunc__EndInvoke(
        RecoverItemComponent_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1B64080(result, 0LL, method);
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
  Il2CppObject *v3; // x19
  int32_t v4; // w2
  int32_t v5; // w3

  if ( (byte_49FFF36 & 1) == 0 )
  {
    sub_1B640C8(&RecoverItemComponent___c_TypeInfo, v1);
    byte_49FFF36 = 1;
  }
  v3 = (Il2CppObject *)sub_1B64314(RecoverItemComponent___c_TypeInfo, v1, v2);
  System_Object___ctor(v3, 0LL);
  RecoverItemComponent___c_TypeInfo->static_fields->__9 = (struct RecoverItemComponent___c_o *)v3;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)RecoverItemComponent___c_TypeInfo->static_fields,
    (int32_t)v3,
    v4,
    v5);
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

  if ( (byte_49FFF37 & 1) == 0 )
  {
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, method);
    sub_1B640C8(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v2);
    byte_49FFF37 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance
    || (CommonUI__CloseRecoverItemListDialog((CommonUI_o *)Instance, 0LL),
        (Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__)) == 0LL) )
  {
    sub_1B64324(Instance);
  }
  AvalonSceneManager__transitionSceneRefresh((AvalonSceneManager_o *)Instance, 34, 1, 0LL, 0, 0LL);
}