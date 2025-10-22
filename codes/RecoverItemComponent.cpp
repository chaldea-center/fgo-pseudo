void RecoverItemComponent___cctor(const MethodInfo *method)
{
  if ( (byte_4C50CF5 & 1) == 0 )
  {
    sub_1C3E564(&RecoverItemComponent_TypeInfo);
    byte_4C50CF5 = 1;
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

  if ( (byte_4C50CEF & 1) == 0 )
  {
    sub_1C3E564(&System_Action_int__TypeInfo);
    sub_1C3E564(&Method_RecoverItemComponent__AttachStoneCountRefreshComponent_b__38_0__);
    byte_4C50CEF = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  v4 = (System_Action_int__o *)sub_1C3E7B0(System_Action_int__TypeInfo);
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

  if ( (byte_4C50CF2 & 1) == 0 )
  {
    sub_1C3E564(&System_Action_TypeInfo);
    sub_1C3E564(&Method_RecoverItemComponent_setRequestInfo__);
    sub_1C3E564(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4C50CF2 = 1;
  }
  if ( isRes )
  {
    this->fields.spendNum = useNum;
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v8 = (System_Action_o *)sub_1C3E7B0(System_Action_TypeInfo);
    System_Action___ctor(v8, (Il2CppObject *)this, Method_RecoverItemComponent_setRequestInfo__, 0);
    if ( !Instance )
LABEL_9:
      sub_1C3E7C0(v9, v10);
  }
  else
  {
    v9 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
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
  __int64 v12; // x5
  __int64 v13; // x6
  __int64 v14; // x7
  Il2CppObject *v15; // x0
  System_String_o *v16; // x24
  Il2CppObject *mText; // x23
  System_String_o *v18; // x21
  __int64 v19; // x2
  __int64 v20; // x3
  __int64 v21; // x4
  __int64 v22; // x5
  __int64 v23; // x6
  __int64 v24; // x7
  Il2CppObject *v25; // x0
  struct UILabel_o *itemNameLb; // x8
  System_String_o *v27; // x21
  System_String_o *v28; // x22
  _QWORD *v29; // x8
  System_Reflection_MethodBase_o *v30; // x0
  int32_t v31; // w8
  int32_t usrMaxAp; // w9
  System_String_o **v33; // x8
  System_String_o *v34; // x25
  System_String_o *v35; // x25
  __int64 v36; // x2
  System_Object_array *v37; // x26
  __int64 v38; // x2
  __int64 v39; // x3
  __int64 v40; // x4
  __int64 v41; // x5
  __int64 v42; // x6
  __int64 v43; // x7
  Il2CppObject *v44; // x24
  __int64 v45; // x2
  __int64 v46; // x3
  __int64 v47; // x4
  __int64 v48; // x5
  __int64 v49; // x6
  __int64 v50; // x7
  Il2CppObject *v51; // x24
  __int64 v52; // x2
  __int64 v53; // x3
  __int64 v54; // x4
  __int64 v55; // x5
  __int64 v56; // x6
  __int64 v57; // x7
  Il2CppObject *v58; // x24
  __int64 v59; // x2
  __int64 v60; // x3
  __int64 v61; // x4
  __int64 v62; // x5
  __int64 v63; // x6
  __int64 v64; // x7
  Il2CppObject *v65; // x24
  __int64 v66; // x2
  __int64 v67; // x3
  __int64 v68; // x4
  __int64 v69; // x5
  __int64 v70; // x6
  __int64 v71; // x7
  Il2CppObject *v72; // x24
  Il2CppObject **v73; // x0
  System_String_o *v74; // x25
  System_Object_array *v75; // x26
  __int64 v76; // x2
  __int64 v77; // x3
  __int64 v78; // x4
  __int64 v79; // x5
  __int64 v80; // x6
  __int64 v81; // x7
  __int64 v82; // x24
  __int64 v83; // x2
  __int64 v84; // x3
  __int64 v85; // x4
  __int64 v86; // x5
  __int64 v87; // x6
  __int64 v88; // x7
  __int64 v89; // x24
  __int64 v90; // x2
  __int64 v91; // x3
  __int64 v92; // x4
  __int64 v93; // x5
  __int64 v94; // x6
  __int64 v95; // x7
  __int64 v96; // x24
  __int64 v97; // x2
  __int64 v98; // x3
  __int64 v99; // x4
  __int64 v100; // x5
  __int64 v101; // x6
  __int64 v102; // x7
  __int64 v103; // x24
  __int64 v104; // x2
  __int64 v105; // x3
  __int64 v106; // x4
  __int64 v107; // x5
  __int64 v108; // x6
  __int64 v109; // x7
  __int64 v110; // x24
  System_String_o *v111; // x24
  Il2CppObject *v112; // x23
  CommonConfirmDialog_ClickDelegate_o *v113; // x25
  System_String_o **v114; // x8
  System_String_o *v115; // x25
  __int64 v116; // x2
  __int64 v117; // x3
  __int64 v118; // x4
  __int64 v119; // x5
  __int64 v120; // x6
  __int64 v121; // x7
  Il2CppObject *v122; // x24
  __int64 v123; // x2
  __int64 v124; // x3
  __int64 v125; // x4
  __int64 v126; // x5
  __int64 v127; // x6
  __int64 v128; // x7
  Il2CppObject *v129; // x24
  __int64 v130; // x2
  __int64 v131; // x3
  __int64 v132; // x4
  __int64 v133; // x5
  __int64 v134; // x6
  __int64 v135; // x7
  Il2CppObject *v136; // x24
  __int64 v137; // x2
  __int64 v138; // x3
  __int64 v139; // x4
  __int64 v140; // x5
  __int64 v141; // x6
  __int64 v142; // x7
  Il2CppObject *v143; // x24
  __int64 v144; // x2
  __int64 v145; // x3
  __int64 v146; // x4
  __int64 v147; // x5
  __int64 v148; // x6
  __int64 v149; // x7
  Il2CppObject *v150; // x24
  __int64 v151; // x2
  __int64 v152; // x3
  __int64 v153; // x4
  __int64 v154; // x5
  __int64 v155; // x6
  __int64 v156; // x7
  System_String_o *v157; // x23
  Il2CppObject *v158; // x25
  CommonConfirmDialog_ClickDelegate_o *v159; // x26
  System_String_o *v160; // x0
  System_String_o *v161; // x20
  Il2CppObject *v162; // x21
  System_Action_o *v163; // x22
  System_String_o *v164; // x0
  System_String_o *v165; // x20
  Il2CppObject *Instance; // x21
  System_Action_o *v167; // x22
  Il2CppObject *v168; // x0
  int32_t targetId; // w20
  int32_t needAp; // w21
  CommonUI_o *v171; // x22
  System_Action_bool__int__o *v172; // x23
  __int64 v173; // x0
  int32_t v174; // [xsp+48h] [xbp-78h] BYREF
  int32_t v175; // [xsp+4Ch] [xbp-74h] BYREF
  int32_t recvSum; // [xsp+50h] [xbp-70h] BYREF
  int32_t usrMaxRp; // [xsp+54h] [xbp-6Ch] BYREF
  int32_t usrCurrentRp; // [xsp+58h] [xbp-68h] BYREF
  int32_t spendNum; // [xsp+5Ch] [xbp-64h] BYREF

  if ( (byte_4C50CF0 & 1) == 0 )
  {
    sub_1C3E564(&System_Action_bool__int__TypeInfo);
    sub_1C3E564(&System_Action_TypeInfo);
    sub_1C3E564(&BalanceConfig_TypeInfo);
    sub_1C3E564(&CommonConfirmDialog_ClickDelegate_TypeInfo);
    sub_1C3E564(&int_TypeInfo);
    sub_1C3E564(&LocalizationManager_TypeInfo);
    sub_1C3E564(&object___TypeInfo);
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    sub_1C3E564(&Method_RecoverItemComponent_CloseApRecovDlg__);
    sub_1C3E564(&Method_RecoverItemComponent_OnClickItem__);
    sub_1C3E564(&Method_RecoverItemComponent_closeNotificationDlg__);
    sub_1C3E564(&Method_RecoverItemComponent_spendItemDlg__);
    sub_1C3E564(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C3E564(&StringLiteral_11169/*"RP_RECOVER_CONFIRM_MSG"*/);
    sub_1C3E564(&StringLiteral_3528/*"CMDSPELL_CURRENT_NUM"*/);
    sub_1C3E564(&StringLiteral_3680/*"COMMAND_SPELL_TXT"*/);
    sub_1C3E564(&StringLiteral_2028/*"AP_RECOVER_CONFIRM_MSG"*/);
    sub_1C3E564(&StringLiteral_11167/*"RP_FULL_MSG"*/);
    sub_1C3E564(&StringLiteral_14823/*"UNIT_INFO"*/);
    sub_1C3E564(&StringLiteral_2024/*"AP_ADD_CONFIRM_MSG"*/);
    sub_1C3E564(&StringLiteral_3686/*"COMMON_CONFIRM_DECIDE"*/);
    sub_1C3E564(&StringLiteral_3684/*"COMMON_CONFIRM_CANCEL"*/);
    sub_1C3E564(&StringLiteral_2025/*"AP_ADD_CONFIRM_MSG_OVER"*/);
    sub_1C3E564(&StringLiteral_2029/*"AP_RECOVER_CONFIRM_MSG_OVER"*/);
    sub_1C3E564(&StringLiteral_2026/*"AP_FULL_MSG"*/);
    sub_1C3E564(&StringLiteral_1/*""*/);
    sub_1C3E564(&StringLiteral_2034/*"AP_RECOVER_STONEPAY_WARNING_MSG"*/);
    byte_4C50CF0 = 1;
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
  v8 = LocalizationManager__Get((System_String_o *)StringLiteral_14823/*"UNIT_INFO"*/, 0);
  spendNum = this->fields.spendNum;
  v15 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &spendNum, v9, v10, v11, v12, v13, v14);
  userEntity = (__int64)System_String__Format(v8, v15, 0);
  v16 = (System_String_o *)userEntity;
  if ( this->fields.currentType == 1 )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    mText = (Il2CppObject *)LocalizationManager__Get((System_String_o *)StringLiteral_3680/*"COMMAND_SPELL_TXT"*/, 0);
    if ( this->fields.currentType == 1 )
    {
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v18 = LocalizationManager__Get((System_String_o *)StringLiteral_3528/*"CMDSPELL_CURRENT_NUM"*/, 0);
      spendNum = this->fields.spendNum;
      v25 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &spendNum, v19, v20, v21, v22, v23, v24);
      v16 = System_String__Format(v18, v25, 0);
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
  v27 = LocalizationManager__Get((System_String_o *)StringLiteral_3686/*"COMMON_CONFIRM_DECIDE"*/, 0);
  v28 = LocalizationManager__Get((System_String_o *)StringLiteral_3684/*"COMMON_CONFIRM_CANCEL"*/, 0);
  v29 = Method_RecoverItemComponent_OnClickItem__;
  if ( (*((_BYTE *)Method_RecoverItemComponent_OnClickItem__ + 83) & 2) != 0 )
    v29 = (_QWORD *)sub_1C3E57C(Method_RecoverItemComponent_OnClickItem__);
  v30 = (System_Reflection_MethodBase_o *)sub_1C3E548(v29, v29[4]);
  OverwriteAssetSoundName__PlaySystemSe(v30, 0, 0, 0);
  if ( !this->fields.isAp )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v74 = LocalizationManager__Get((System_String_o *)StringLiteral_11169/*"RP_RECOVER_CONFIRM_MSG"*/, 0);
    userEntity = sub_1C3E60C(object___TypeInfo, 7);
    if ( !userEntity )
      goto LABEL_140;
    v75 = (System_Object_array *)userEntity;
    if ( mText )
    {
      userEntity = sub_1C3E6A0(mText, *(_QWORD *)(*(_QWORD *)userEntity + 64LL));
      if ( !userEntity )
        goto LABEL_141;
    }
    if ( LODWORD(v75->max_length) )
    {
      v75->m_Items[0] = mText;
      userEntity = sub_1C3E508(v75->m_Items, mText);
      if ( v16 )
      {
        userEntity = sub_1C3E6A0(v16, v75->obj.klass->_1.element_class);
        if ( !userEntity )
          goto LABEL_141;
      }
      if ( LODWORD(v75->max_length) > 1 )
      {
        v75->m_Items[1] = (Il2CppObject *)v16;
        sub_1C3E508(&v75->m_Items[1], v16);
        spendNum = this->fields.recvRpNum;
        userEntity = j_il2cpp_value_box_0(int_TypeInfo, &spendNum, v76, v77, v78, v79, v80, v81);
        v82 = userEntity;
        if ( userEntity )
        {
          userEntity = sub_1C3E6A0(userEntity, v75->obj.klass->_1.element_class);
          if ( !userEntity )
            goto LABEL_141;
        }
        if ( LODWORD(v75->max_length) > 2 )
        {
          v75->m_Items[2] = (Il2CppObject *)v82;
          sub_1C3E508(&v75->m_Items[2], v82);
          usrCurrentRp = this->fields.usrCurrentRp;
          userEntity = j_il2cpp_value_box_0(int_TypeInfo, &usrCurrentRp, v83, v84, v85, v86, v87, v88);
          v89 = userEntity;
          if ( userEntity )
          {
            userEntity = sub_1C3E6A0(userEntity, v75->obj.klass->_1.element_class);
            if ( !userEntity )
              goto LABEL_141;
          }
          if ( LODWORD(v75->max_length) > 3 )
          {
            v75->m_Items[3] = (Il2CppObject *)v89;
            sub_1C3E508(&v75->m_Items[3], v89);
            usrMaxRp = this->fields.usrMaxRp;
            userEntity = j_il2cpp_value_box_0(int_TypeInfo, &usrMaxRp, v90, v91, v92, v93, v94, v95);
            v96 = userEntity;
            if ( userEntity )
            {
              userEntity = sub_1C3E6A0(userEntity, v75->obj.klass->_1.element_class);
              if ( !userEntity )
                goto LABEL_141;
            }
            if ( LODWORD(v75->max_length) > 4 )
            {
              v75->m_Items[4] = (Il2CppObject *)v96;
              sub_1C3E508(&v75->m_Items[4], v96);
              recvSum = this->fields.recvSum;
              userEntity = j_il2cpp_value_box_0(int_TypeInfo, &recvSum, v97, v98, v99, v100, v101, v102);
              v103 = userEntity;
              if ( userEntity )
              {
                userEntity = sub_1C3E6A0(userEntity, v75->obj.klass->_1.element_class);
                if ( !userEntity )
                  goto LABEL_141;
              }
              if ( LODWORD(v75->max_length) > 5 )
              {
                v75->m_Items[5] = (Il2CppObject *)v103;
                sub_1C3E508(&v75->m_Items[5], v103);
                v175 = this->fields.usrMaxRp;
                userEntity = j_il2cpp_value_box_0(int_TypeInfo, &v175, v104, v105, v106, v107, v108, v109);
                v110 = userEntity;
                if ( userEntity )
                {
                  userEntity = sub_1C3E6A0(userEntity, v75->obj.klass->_1.element_class);
                  if ( !userEntity )
                    goto LABEL_141;
                }
                if ( LODWORD(v75->max_length) > 6 )
                {
                  v75->m_Items[6] = (Il2CppObject *)v110;
                  sub_1C3E508(&v75->m_Items[6], v110);
                  userEntity = (__int64)System_String__Format_63677896(v74, v75, 0);
                  if ( !this->fields.userEntity )
                    goto LABEL_140;
                  v111 = (System_String_o *)userEntity;
                  if ( UserGameEntity__getRp(this->fields.userEntity, 0) < this->fields.usrMaxRp )
                    goto LABEL_80;
                  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                  v164 = LocalizationManager__Get((System_String_o *)StringLiteral_11167/*"RP_FULL_MSG"*/, 0);
                  v165 = System_String__Format(v164, mText, 0);
                  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
                  v167 = (System_Action_o *)sub_1C3E7B0(System_Action_TypeInfo);
                  System_Action___ctor(
                    v167,
                    (Il2CppObject *)this,
                    Method_RecoverItemComponent_closeNotificationDlg__,
                    0);
                  if ( !Instance )
                    goto LABEL_140;
                  CommonUI__OpenNotificationDialog(
                    (CommonUI_o *)Instance,
                    (System_String_o *)StringLiteral_1/*""*/,
                    v165,
                    v167,
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
    sub_1C3E7C8(userEntity, v5, v36);
  }
  v31 = this->fields.recvSum;
  usrMaxAp = this->fields.usrMaxAp;
  if ( !this->fields.isAddAp )
  {
    if ( v31 <= usrMaxAp )
      v114 = (System_String_o **)&StringLiteral_2028/*"AP_RECOVER_CONFIRM_MSG"*/;
    else
      v114 = (System_String_o **)&StringLiteral_2029/*"AP_RECOVER_CONFIRM_MSG_OVER"*/;
    v115 = *v114;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v35 = LocalizationManager__Get(v115, 0);
    userEntity = sub_1C3E60C(object___TypeInfo, 8);
    if ( !userEntity )
      goto LABEL_140;
    v37 = (System_Object_array *)userEntity;
    if ( mText )
    {
      userEntity = sub_1C3E6A0(mText, *(_QWORD *)(*(_QWORD *)userEntity + 64LL));
      if ( !userEntity )
        goto LABEL_141;
    }
    if ( LODWORD(v37->max_length) )
    {
      v37->m_Items[0] = mText;
      userEntity = sub_1C3E508(v37->m_Items, mText);
      if ( v16 )
      {
        userEntity = sub_1C3E6A0(v16, v37->obj.klass->_1.element_class);
        if ( !userEntity )
          goto LABEL_141;
      }
      if ( LODWORD(v37->max_length) > 1 )
      {
        v37->m_Items[1] = (Il2CppObject *)v16;
        sub_1C3E508(&v37->m_Items[1], v16);
        spendNum = this->fields.apRcvRate;
        userEntity = j_il2cpp_value_box_0(int_TypeInfo, &spendNum, v116, v117, v118, v119, v120, v121);
        v122 = (Il2CppObject *)userEntity;
        if ( userEntity )
        {
          userEntity = sub_1C3E6A0(userEntity, v37->obj.klass->_1.element_class);
          if ( !userEntity )
            goto LABEL_141;
        }
        if ( LODWORD(v37->max_length) > 2 )
        {
          v37->m_Items[2] = v122;
          sub_1C3E508(&v37->m_Items[2], v122);
          usrCurrentRp = this->fields.recvApNum;
          userEntity = j_il2cpp_value_box_0(int_TypeInfo, &usrCurrentRp, v123, v124, v125, v126, v127, v128);
          v129 = (Il2CppObject *)userEntity;
          if ( userEntity )
          {
            userEntity = sub_1C3E6A0(userEntity, v37->obj.klass->_1.element_class);
            if ( !userEntity )
              goto LABEL_141;
          }
          if ( LODWORD(v37->max_length) > 3 )
          {
            v37->m_Items[3] = v129;
            sub_1C3E508(&v37->m_Items[3], v129);
            usrMaxRp = this->fields.usrCurrentAp;
            userEntity = j_il2cpp_value_box_0(int_TypeInfo, &usrMaxRp, v130, v131, v132, v133, v134, v135);
            v136 = (Il2CppObject *)userEntity;
            if ( userEntity )
            {
              userEntity = sub_1C3E6A0(userEntity, v37->obj.klass->_1.element_class);
              if ( !userEntity )
                goto LABEL_141;
            }
            if ( LODWORD(v37->max_length) > 4 )
            {
              v37->m_Items[4] = v136;
              sub_1C3E508(&v37->m_Items[4], v136);
              recvSum = this->fields.usrMaxAp;
              userEntity = j_il2cpp_value_box_0(int_TypeInfo, &recvSum, v137, v138, v139, v140, v141, v142);
              v143 = (Il2CppObject *)userEntity;
              if ( userEntity )
              {
                userEntity = sub_1C3E6A0(userEntity, v37->obj.klass->_1.element_class);
                if ( !userEntity )
                  goto LABEL_141;
              }
              if ( LODWORD(v37->max_length) > 5 )
              {
                v37->m_Items[5] = v143;
                sub_1C3E508(&v37->m_Items[5], v143);
                v175 = this->fields.recvSum;
                userEntity = j_il2cpp_value_box_0(int_TypeInfo, &v175, v144, v145, v146, v147, v148, v149);
                v150 = (Il2CppObject *)userEntity;
                if ( userEntity )
                {
                  userEntity = sub_1C3E6A0(userEntity, v37->obj.klass->_1.element_class);
                  if ( !userEntity )
                    goto LABEL_141;
                }
                if ( LODWORD(v37->max_length) > 6 )
                {
                  v37->m_Items[6] = v150;
                  sub_1C3E508(&v37->m_Items[6], v150);
                  v174 = this->fields.usrMaxAp;
                  userEntity = j_il2cpp_value_box_0(int_TypeInfo, &v174, v151, v152, v153, v154, v155, v156);
                  v72 = (Il2CppObject *)userEntity;
                  if ( userEntity )
                  {
                    userEntity = sub_1C3E6A0(userEntity, v37->obj.klass->_1.element_class);
                    if ( !userEntity )
                      goto LABEL_141;
                  }
                  if ( LODWORD(v37->max_length) > 7 )
                  {
                    v37->m_Items[7] = v72;
                    v73 = &v37->m_Items[7];
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
  if ( v31 <= usrMaxAp )
    v33 = (System_String_o **)&StringLiteral_2024/*"AP_ADD_CONFIRM_MSG"*/;
  else
    v33 = (System_String_o **)&StringLiteral_2025/*"AP_ADD_CONFIRM_MSG_OVER"*/;
  v34 = *v33;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v35 = LocalizationManager__Get(v34, 0);
  userEntity = sub_1C3E60C(object___TypeInfo, 7);
  if ( !userEntity )
    goto LABEL_140;
  v37 = (System_Object_array *)userEntity;
  if ( mText )
  {
    userEntity = sub_1C3E6A0(mText, *(_QWORD *)(*(_QWORD *)userEntity + 64LL));
    if ( !userEntity )
      goto LABEL_141;
  }
  if ( !LODWORD(v37->max_length) )
    goto LABEL_139;
  v37->m_Items[0] = mText;
  userEntity = sub_1C3E508(v37->m_Items, mText);
  if ( v16 )
  {
    userEntity = sub_1C3E6A0(v16, v37->obj.klass->_1.element_class);
    if ( !userEntity )
      goto LABEL_141;
  }
  if ( LODWORD(v37->max_length) <= 1 )
    goto LABEL_139;
  v37->m_Items[1] = (Il2CppObject *)v16;
  sub_1C3E508(&v37->m_Items[1], v16);
  spendNum = this->fields.recvApNum;
  userEntity = j_il2cpp_value_box_0(int_TypeInfo, &spendNum, v38, v39, v40, v41, v42, v43);
  v44 = (Il2CppObject *)userEntity;
  if ( userEntity )
  {
    userEntity = sub_1C3E6A0(userEntity, v37->obj.klass->_1.element_class);
    if ( !userEntity )
      goto LABEL_141;
  }
  if ( LODWORD(v37->max_length) <= 2 )
    goto LABEL_139;
  v37->m_Items[2] = v44;
  sub_1C3E508(&v37->m_Items[2], v44);
  usrCurrentRp = this->fields.usrCurrentAp;
  userEntity = j_il2cpp_value_box_0(int_TypeInfo, &usrCurrentRp, v45, v46, v47, v48, v49, v50);
  v51 = (Il2CppObject *)userEntity;
  if ( userEntity )
  {
    userEntity = sub_1C3E6A0(userEntity, v37->obj.klass->_1.element_class);
    if ( !userEntity )
      goto LABEL_141;
  }
  if ( LODWORD(v37->max_length) <= 3 )
    goto LABEL_139;
  v37->m_Items[3] = v51;
  sub_1C3E508(&v37->m_Items[3], v51);
  usrMaxRp = this->fields.usrMaxAp;
  userEntity = j_il2cpp_value_box_0(int_TypeInfo, &usrMaxRp, v52, v53, v54, v55, v56, v57);
  v58 = (Il2CppObject *)userEntity;
  if ( userEntity )
  {
    userEntity = sub_1C3E6A0(userEntity, v37->obj.klass->_1.element_class);
    if ( !userEntity )
      goto LABEL_141;
  }
  if ( LODWORD(v37->max_length) <= 4 )
    goto LABEL_139;
  v37->m_Items[4] = v58;
  sub_1C3E508(&v37->m_Items[4], v58);
  recvSum = this->fields.recvSum;
  userEntity = j_il2cpp_value_box_0(int_TypeInfo, &recvSum, v59, v60, v61, v62, v63, v64);
  v65 = (Il2CppObject *)userEntity;
  if ( userEntity )
  {
    userEntity = sub_1C3E6A0(userEntity, v37->obj.klass->_1.element_class);
    if ( !userEntity )
      goto LABEL_141;
  }
  if ( LODWORD(v37->max_length) <= 5 )
    goto LABEL_139;
  v37->m_Items[5] = v65;
  sub_1C3E508(&v37->m_Items[5], v65);
  v175 = this->fields.usrMaxAp;
  userEntity = j_il2cpp_value_box_0(int_TypeInfo, &v175, v66, v67, v68, v69, v70, v71);
  v72 = (Il2CppObject *)userEntity;
  if ( userEntity )
  {
    userEntity = sub_1C3E6A0(userEntity, v37->obj.klass->_1.element_class);
    if ( !userEntity )
    {
LABEL_141:
      v173 = sub_1C3E7E4();
      sub_1C3E68C(v173, 0);
    }
  }
  if ( LODWORD(v37->max_length) <= 6 )
    goto LABEL_139;
  v37->m_Items[6] = v72;
  v73 = &v37->m_Items[6];
LABEL_115:
  sub_1C3E508(v73, v72);
  v111 = System_String__Format_63677896(v35, v37, 0);
  userEntity = (__int64)this->fields.userEntity;
  if ( !userEntity )
    goto LABEL_140;
  if ( UserGameEntity__getAct((UserGameEntity_o *)userEntity, 0) < this->fields.usrMaxAp )
  {
    if ( this->fields.currentType == 2 )
    {
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v157 = LocalizationManager__Get((System_String_o *)StringLiteral_2034/*"AP_RECOVER_STONEPAY_WARNING_MSG"*/, 0);
      v158 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v159 = (CommonConfirmDialog_ClickDelegate_o *)sub_1C3E7B0(CommonConfirmDialog_ClickDelegate_TypeInfo);
      CommonConfirmDialog_ClickDelegate___ctor(
        v159,
        (Il2CppObject *)this,
        Method_RecoverItemComponent_spendItemDlg__,
        0);
      userEntity = (__int64)BalanceConfig_TypeInfo;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
        userEntity = j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      if ( v158 )
      {
        CommonUI__OpenConfirmDecideDlgAddMsgFrame(
          (CommonUI_o *)v158,
          v7,
          v111,
          v157,
          v27,
          v28,
          v159,
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
      sub_1C3E7C0(userEntity, v5);
    }
    if ( this->fields.isAddAp || this->fields.apRcvRate != 100 || this->fields.spendNum >= 2 )
    {
      v168 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      targetId = this->fields.targetId;
      needAp = this->fields.needAp;
      v171 = (CommonUI_o *)v168;
      v172 = (System_Action_bool__int__o *)sub_1C3E7B0(System_Action_bool__int__TypeInfo);
      System_Action_bool__int____ctor(v172, (Il2CppObject *)this, Method_RecoverItemComponent_CloseApRecovDlg__, 0);
      if ( !v171 )
        goto LABEL_140;
      CommonUI__OpenApRecoverConfirmDlg(v171, targetId, needAp, v172, 0);
      return;
    }
LABEL_80:
    v112 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v113 = (CommonConfirmDialog_ClickDelegate_o *)sub_1C3E7B0(CommonConfirmDialog_ClickDelegate_TypeInfo);
    CommonConfirmDialog_ClickDelegate___ctor(v113, (Il2CppObject *)this, Method_RecoverItemComponent_spendItemDlg__, 0);
    userEntity = (__int64)BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      userEntity = j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    if ( v112 )
    {
      CommonUI__OpenConfirmDecideDlg(
        (CommonUI_o *)v112,
        v7,
        v111,
        v27,
        v28,
        v113,
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
  v160 = LocalizationManager__Get((System_String_o *)StringLiteral_2026/*"AP_FULL_MSG"*/, 0);
  v161 = System_String__Format(v160, mText, 0);
  v162 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v163 = (System_Action_o *)sub_1C3E7B0(System_Action_TypeInfo);
  System_Action___ctor(v163, (Il2CppObject *)this, Method_RecoverItemComponent_closeNotificationDlg__, 0);
  if ( !v162 )
    goto LABEL_140;
  CommonUI__OpenNotificationDialog(
    (CommonUI_o *)v162,
    (System_String_o *)StringLiteral_1/*""*/,
    v161,
    v163,
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
  __int64 v5; // x5
  __int64 v6; // x6
  __int64 v7; // x7
  UILabel_o *currentNumLb; // x19
  Il2CppObject *v11; // x0
  System_String_o *v12; // x0
  __int64 v13; // x1
  int32_t v14; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4C50CF6 & 1) == 0 )
  {
    sub_1C3E564(&int_TypeInfo);
    sub_1C3E564(&StringLiteral_25112/*"{0:N0}"*/);
    byte_4C50CF6 = 1;
  }
  currentNumLb = this->fields.currentNumLb;
  v14 = stoneCount;
  v11 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v14, method, v3, v4, v5, v6, v7);
  v12 = System_String__Format((System_String_o *)StringLiteral_25112/*"{0:N0}"*/, v11, 0);
  if ( !currentNumLb )
    sub_1C3E7C0(v12, v13);
  UILabel__set_text(currentNumLb, v12, 0);
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

  if ( (byte_4C50CEB & 1) == 0 )
  {
    sub_1C3E564(&RecoverItemComponent_CallbackFunc_TypeInfo);
    byte_4C50CEB = 1;
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
    v9 = sub_1C787BC(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (RecoverItemComponent_o *)sub_1C3EA80(v8);
  RecoverItemComponent__remove_callbackFunc(v11, v12, v13);
}


void RecoverItemComponent__closeNotificationDlg(RecoverItemComponent_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v3; // x1

  if ( (byte_4C50CF4 & 1) == 0 )
  {
    sub_1C3E564(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4C50CF4 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1C3E7C0(0, v3);
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

  if ( (byte_4C50CEC & 1) == 0 )
  {
    sub_1C3E564(&RecoverItemComponent_CallbackFunc_TypeInfo);
    byte_4C50CEC = 1;
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
    v9 = sub_1C787BC(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (RecoverItemComponent_o *)sub_1C3EA80(v8);
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
  __int64 v22; // x2
  __int64 v23; // x3
  __int64 v24; // x4
  __int64 v25; // x5
  __int64 v26; // x6
  __int64 v27; // x7
  int32_t v28; // w8
  UILabel_o *v29; // x21
  Il2CppObject *v30; // x0
  UILabel_o *v31; // x21
  const MethodInfo *v32; // x1
  System_String_o *v33; // x20
  __int64 v34; // x2
  __int64 v35; // x3
  __int64 v36; // x4
  __int64 v37; // x5
  __int64 v38; // x6
  __int64 v39; // x7
  Il2CppObject *v40; // x0
  System_String_o *v41; // x0
  UILabel_o *v42; // x20
  Il2CppObject *v43; // x21
  System_String_o *v44; // x22
  __int64 v45; // x2
  __int64 v46; // x3
  __int64 v47; // x4
  __int64 v48; // x5
  __int64 v49; // x6
  __int64 v50; // x7
  Il2CppObject *v51; // x24
  __int64 v52; // x2
  __int64 v53; // x3
  __int64 v54; // x4
  __int64 v55; // x5
  __int64 v56; // x6
  __int64 v57; // x7
  Il2CppObject *v58; // x0
  bool v59; // cc
  int v60; // w8
  UILabel_o *v61; // x22
  UILabel_o *v62; // x22
  Il2CppObject *v63; // x0
  CommandSpellEntity_o *v64; // x22
  __int64 v65; // x2
  int32_t type; // w8
  struct ItemIconComponent_o *itemIconInfo; // x27
  float v68; // s0
  int v69; // w8
  float usrMaxAp; // s8
  float v71; // s9
  float v72; // s8
  unsigned int v73; // w9
  unsigned int v74; // w8
  System_String_o *v75; // x23
  __int64 v76; // x2
  __int64 v77; // x3
  __int64 v78; // x4
  __int64 v79; // x5
  __int64 v80; // x6
  __int64 v81; // x7
  Il2CppObject *v82; // x0
  System_String_o *v83; // x0
  UILabel_o *itemDetailLb; // x23
  Il2CppObject *v85; // x24
  System_String_o *v86; // x25
  __int64 v87; // x2
  __int64 v88; // x3
  __int64 v89; // x4
  __int64 v90; // x5
  __int64 v91; // x6
  __int64 v92; // x7
  Il2CppObject *v93; // x26
  __int64 v94; // x2
  __int64 v95; // x3
  __int64 v96; // x4
  __int64 v97; // x5
  __int64 v98; // x6
  __int64 v99; // x7
  Il2CppObject *v100; // x0
  int backSprite; // w22
  float v102; // s8
  float v103; // s8
  unsigned int v104; // w9
  unsigned int v105; // w8
  ItemEntity_o *RecvItemData; // x0
  ItemEntity_o *v107; // x24
  __int64 v108; // x2
  __int64 v109; // x3
  __int64 v110; // x4
  __int64 v111; // x5
  __int64 v112; // x6
  __int64 v113; // x7
  int32_t num; // w28
  int32_t v115; // w8
  BalanceConfig_c *v116; // x0
  float v117; // s8
  int v118; // w8
  int v119; // s0
  float v120; // s9
  float v121; // s8
  int v122; // w8
  float v123; // s8
  float v124; // s8
  int32_t v125; // w11
  int32_t v126; // w12
  unsigned int v127; // w8
  System_String_o *v128; // x23
  __int64 v129; // x2
  __int64 v130; // x3
  __int64 v131; // x4
  __int64 v132; // x5
  __int64 v133; // x6
  __int64 v134; // x7
  Il2CppObject *v135; // x0
  System_String_o *v136; // x0
  UILabel_o *v137; // x23
  Il2CppObject *v138; // x25
  System_String_o *v139; // x26
  __int64 v140; // x2
  __int64 v141; // x3
  __int64 v142; // x4
  __int64 v143; // x5
  __int64 v144; // x6
  __int64 v145; // x7
  Il2CppObject *v146; // x27
  __int64 v147; // x2
  __int64 v148; // x3
  __int64 v149; // x4
  __int64 v150; // x5
  __int64 v151; // x6
  __int64 v152; // x7
  Il2CppObject *v153; // x0
  int value; // w23
  float v155; // s8
  float v156; // s8
  unsigned int v157; // w8
  System_String_o *v158; // x21
  __int64 v159; // x2
  __int64 v160; // x3
  __int64 v161; // x4
  __int64 v162; // x5
  __int64 v163; // x6
  __int64 v164; // x7
  Il2CppObject *v165; // x0
  System_String_o *v166; // x0
  UILabel_o *v167; // x21
  Il2CppObject *v168; // x23
  System_String_o *v169; // x24
  __int64 v170; // x2
  __int64 v171; // x3
  __int64 v172; // x4
  __int64 v173; // x5
  __int64 v174; // x6
  __int64 v175; // x7
  Il2CppObject *v176; // x0
  UILabel_o *v177; // x21
  Il2CppObject *v178; // x0
  UILabel_o *v179; // x21
  int v180; // w8
  System_String_o *v181; // x21
  __int64 v182; // x2
  __int64 v183; // x3
  __int64 v184; // x4
  __int64 v185; // x5
  __int64 v186; // x6
  __int64 v187; // x7
  Il2CppObject *v188; // x0
  System_String_o *v189; // x0
  UILabel_o *v190; // x21
  Il2CppObject *v191; // x22
  System_String_o *v192; // x23
  __int64 v193; // x2
  __int64 v194; // x3
  __int64 v195; // x4
  __int64 v196; // x5
  __int64 v197; // x6
  __int64 v198; // x7
  Il2CppObject *v199; // x0
  UILabel_o *currentNumLb; // x21
  UILabel_o *spendNumLb; // x21
  char v202; // w9
  int32_t v203; // [xsp+4h] [xbp-8Ch] BYREF
  int32_t recvApNum; // [xsp+8h] [xbp-88h] BYREF
  int32_t apRcvRate; // [xsp+Ch] [xbp-84h] BYREF
  int32_t spendNum; // [xsp+10h] [xbp-80h] BYREF
  int32_t CommandSpell; // [xsp+14h] [xbp-7Ch] BYREF
  UserItemEntity_o *entity; // [xsp+18h] [xbp-78h] BYREF

  v10 = this;
  if ( (byte_4C50CED & 1) == 0 )
  {
    sub_1C3E564(&BalanceConfig_TypeInfo);
    sub_1C3E564(&Method_DataManager_GetMasterData_CommandSpellMaster___);
    sub_1C3E564(&Method_DataManager_GetMasterData_ItemMaster___);
    sub_1C3E564(&Method_DataManager_GetMasterData_StoneShopMaster___);
    sub_1C3E564(&Method_DataManager_GetMasterData_UserItemMaster___);
    sub_1C3E564(&Method_DataMasterBase_CommandSpellMaster__CommandSpellEntity__int__GetEntity__);
    sub_1C3E564(&Method_DataMasterBase_StoneShopMaster__StoneShopEntity__int__GetEntity__);
    sub_1C3E564(&int_TypeInfo);
    sub_1C3E564(&LocalizationManager_TypeInfo);
    sub_1C3E564(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C3E564(&StringLiteral_3528/*"CMDSPELL_CURRENT_NUM"*/);
    sub_1C3E564(&StringLiteral_1919/*"ADD_RECOVER_CMDSPELL_TXT"*/);
    sub_1C3E564(&StringLiteral_3530/*"CMDSPELL_SPEND_NUM_TXT"*/);
    sub_1C3E564(&StringLiteral_25112/*"{0:N0}"*/);
    sub_1C3E564(&StringLiteral_861/*"-"*/);
    sub_1C3E564(&StringLiteral_14823/*"UNIT_INFO"*/);
    sub_1C3E564(&StringLiteral_12279/*"SPEND_NUM_TXT"*/);
    sub_1C3E564(&StringLiteral_3936/*"CURRENT_NUM_TXT"*/);
    sub_1C3E564(&StringLiteral_1920/*"ADD_RECOVER_NUM_TXT"*/);
    sub_1C3E564(&StringLiteral_2031/*"AP_RECOVER_NUM_TXT"*/);
    this = (RecoverItemComponent_o *)sub_1C3E564(&StringLiteral_3529/*"CMDSPELL_CURRENT_NUM_TXT"*/);
    byte_4C50CED = 1;
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
  sub_1C3E508(&v10->fields.dialog, dlg);
  v10->fields.callbackFunc = callback;
  v10->fields.needAp = needAp;
  *(_WORD *)&v10->fields.isAp = 1;
  sub_1C3E508(&v10->fields.callbackFunc, callback);
  this = (RecoverItemComponent_o *)v10->fields.maskImg;
  if ( !this )
    goto LABEL_152;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
  SelfUserGame = UserGameMaster__getSelfUserGame(0);
  v10->fields.userEntity = SelfUserGame;
  p_userEntity = (RecoverItemComponent_o **)&v10->fields.userEntity;
  sub_1C3E508(&v10->fields.userEntity, SelfUserGame);
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
  this = (RecoverItemComponent_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3936/*"CURRENT_NUM_TXT"*/, 0);
  if ( !currentInfoLb )
    goto LABEL_152;
  UILabel__set_text(currentInfoLb, (System_String_o *)this, 0);
  spendInfoLb = v10->fields.spendInfoLb;
  this = (RecoverItemComponent_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12279/*"SPEND_NUM_TXT"*/, 0);
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
    v61 = v10->fields.currentInfoLb;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    this = (RecoverItemComponent_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3529/*"CMDSPELL_CURRENT_NUM_TXT"*/, 0);
    if ( !v61 )
      goto LABEL_152;
    UILabel__set_text(v61, (System_String_o *)this, 0);
    v62 = v10->fields.spendInfoLb;
    this = (RecoverItemComponent_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3530/*"CMDSPELL_SPEND_NUM_TXT"*/, 0);
    if ( !v62 )
      goto LABEL_152;
    UILabel__set_text(v62, (System_String_o *)this, 0);
    this = (RecoverItemComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !this )
      goto LABEL_152;
    this = (RecoverItemComponent_o *)DataManager__GetMasterData_object_(
                                       (DataManager_o *)this,
                                       (const MethodInfo_30F9A70 *)Method_DataManager_GetMasterData_CommandSpellMaster___);
    if ( !this )
      goto LABEL_152;
    v63 = DataMasterBase_object__object__int___GetEntity(
            (DataMasterBase_TMaster__TEntity__PKType__o *)this,
            v10->fields.targetId,
            (const MethodInfo_33B2F58 *)Method_DataMasterBase_CommandSpellMaster__CommandSpellEntity__int__GetEntity__);
    if ( !v63 )
      goto LABEL_151;
    v64 = (CommandSpellEntity_o *)v63;
    this = (RecoverItemComponent_o *)v10->fields.cmdSpellIcon;
    if ( !this )
      goto LABEL_152;
    CommandSpellIconComponent__SetData((CommandSpellIconComponent_o *)this, v10->fields.userEntity, 0);
    this = (RecoverItemComponent_o *)v10->fields.itemNameLb;
    if ( !this )
      goto LABEL_152;
    UILabel__set_text((UILabel_o *)this, v64->fields.name, 0);
    this = *p_userEntity;
    if ( !*p_userEntity )
      goto LABEL_152;
    CommandSpell = UserGameEntity__getCommandSpell((UserGameEntity_o *)this, 0);
    *p_spendNum = v64->fields.consume;
    this = (RecoverItemComponent_o *)CommandSpellEntity__getValues(v64, 0);
    if ( !this )
      goto LABEL_152;
    if ( LODWORD(this->fields.m_CancellationTokenSource) )
    {
      type = v64->fields.type;
      itemIconInfo = this->fields.itemIconInfo;
      if ( type == 3 )
      {
        if ( !itemIconInfo )
          goto LABEL_152;
        if ( !LODWORD(itemIconInfo->fields.m_CancellationTokenSource) )
          goto LABEL_153;
        v68 = (float)((float)SLODWORD(itemIconInfo->fields.backSprite) / 1000.0) * 100.0;
        v69 = (int)v68;
        if ( v68 == INFINITY )
          v69 = 0x80000000;
        v10->fields.apRcvRate = v69;
        usrMaxAp = (float)v10->fields.usrMaxAp;
        v71 = (float)SLODWORD(itemIconInfo->fields.backSprite) / 1000.0;
        if ( !byte_4C50D68 )
        {
          sub_1C3E564(&System_Math_TypeInfo);
          byte_4C50D68 = 1;
        }
        v72 = v71 * usrMaxAp;
        if ( !System_Math_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
        v73 = vcvtps_s32_f32(v72);
        if ( ceilf(v72) == INFINITY )
          v74 = 0x80000000;
        else
          v74 = v73;
        v10->fields.recvApNum = v74;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v75 = LocalizationManager__Get((System_String_o *)StringLiteral_3528/*"CMDSPELL_CURRENT_NUM"*/, 0);
        spendNum = v10->fields.spendNum;
        v82 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &spendNum, v76, v77, v78, v79, v80, v81);
        v83 = System_String__Format(v75, v82, 0);
        itemDetailLb = v10->fields.itemDetailLb;
        v85 = (Il2CppObject *)v83;
        v86 = LocalizationManager__Get((System_String_o *)StringLiteral_2031/*"AP_RECOVER_NUM_TXT"*/, 0);
        apRcvRate = v10->fields.apRcvRate;
        v93 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &apRcvRate, v87, v88, v89, v90, v91, v92);
        recvApNum = v10->fields.recvApNum;
        v100 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &recvApNum, v94, v95, v96, v97, v98, v99);
        this = (RecoverItemComponent_o *)System_String__Format_63677828(v86, v85, v93, v100, 0);
        if ( !itemDetailLb )
          goto LABEL_152;
        UILabel__set_text(itemDetailLb, (System_String_o *)this, 0);
        type = v64->fields.type;
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
            v59 = CommandSpell < v10->fields.spendNum;
            v60 = v10->fields.recvApNum + v10->fields.usrCurrentAp;
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
          v105 = *p_spendNum;
        }
        else
        {
          v102 = (float)(needAp - v10->fields.usrCurrentAp) / (float)backSprite;
          if ( !byte_4C50D68 )
          {
            sub_1C3E564(&System_Math_TypeInfo);
            byte_4C50D68 = 1;
          }
          v103 = fmaxf(v102, 1.0);
          if ( !System_Math_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
          v104 = vcvtps_s32_f32(v103);
          if ( ceilf(v103) == INFINITY )
            v105 = 0x80000000;
          else
            v105 = v104;
          *p_spendNum = v105;
        }
        v10->fields.recvApNum = v105 * backSprite;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v181 = LocalizationManager__Get((System_String_o *)StringLiteral_3528/*"CMDSPELL_CURRENT_NUM"*/, 0);
        spendNum = v10->fields.spendNum;
        v188 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &spendNum, v182, v183, v184, v185, v186, v187);
        v189 = System_String__Format(v181, v188, 0);
        v190 = v10->fields.itemDetailLb;
        v191 = (Il2CppObject *)v189;
        v192 = LocalizationManager__Get((System_String_o *)StringLiteral_1919/*"ADD_RECOVER_CMDSPELL_TXT"*/, 0);
        apRcvRate = v10->fields.recvApNum;
        v199 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &apRcvRate, v193, v194, v195, v196, v197, v198);
        this = (RecoverItemComponent_o *)System_String__Format_63677760(v192, v191, v199, 0);
        if ( !v190 )
          goto LABEL_152;
        UILabel__set_text(v190, (System_String_o *)this, 0);
        v10->fields.isAddAp = 1;
        goto LABEL_144;
      }
    }
LABEL_153:
    sub_1C3E7C8(this, data, v65);
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
          v107 = RecvItemData;
          this = (RecoverItemComponent_o *)v10->fields.itemIconInfo;
          if ( this )
          {
            ItemIconComponent__SetItemImage_40966052(
              (ItemIconComponent_o *)this,
              v107->fields.imageId,
              v107->fields.bgImageId,
              v107->fields.type,
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
                  UILabel__set_text((UILabel_o *)this, v107->fields.name, 0);
                  *p_spendNum = 1;
                  this = (RecoverItemComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
                  if ( this )
                  {
                    this = (RecoverItemComponent_o *)DataManager__GetMasterData_object_(
                                                       (DataManager_o *)this,
                                                       (const MethodInfo_30F9A70 *)Method_DataManager_GetMasterData_UserItemMaster___);
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
                        v115 = v107->fields.type;
                        if ( v115 == 3 )
                        {
                          v116 = BalanceConfig_TypeInfo;
                          if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
                          {
                            j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
                            v116 = BalanceConfig_TypeInfo;
                          }
                          v10->fields.spendNum = v116->static_fields->SpendApRecvItemNum;
                          v117 = (float)v107->fields.value / 1000.0;
                          if ( (float)(v117 * 100.0) == INFINITY )
                            v118 = 0x80000000;
                          else
                            v118 = (int)(float)(v117 * 100.0);
                          v119 = v10->fields.usrMaxAp;
                          v10->fields.apRcvRate = v118;
                          v120 = (float)v119;
                          if ( !byte_4C50D68 )
                          {
                            sub_1C3E564(&System_Math_TypeInfo);
                            byte_4C50D68 = 1;
                          }
                          v121 = v117 * v120;
                          if ( !System_Math_TypeInfo->_2.cctor_finished )
                            j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
                          v122 = vcvtps_s32_f32(v121);
                          if ( ceilf(v121) == INFINITY )
                            v122 = 0x80000000;
                          v10->fields.recvApNum = v122;
                          if ( needAp >= 1 )
                          {
                            v123 = (float)(needAp - v10->fields.usrCurrentAp) / (float)v122;
                            if ( !byte_4C50D68 )
                            {
                              sub_1C3E564(&System_Math_TypeInfo);
                              byte_4C50D68 = 1;
                            }
                            v124 = fmaxf(v123, 1.0);
                            if ( !System_Math_TypeInfo->_2.cctor_finished )
                              j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
                            v125 = v10->fields.apRcvRate;
                            v126 = v10->fields.recvApNum;
                            v127 = vcvtps_s32_f32(v124);
                            if ( ceilf(v124) == INFINITY )
                              v127 = 0x80000000;
                            v10->fields.spendNum = v127;
                            v10->fields.apRcvRate = v125 * v127;
                            v10->fields.recvApNum = v126 * v127;
                          }
                          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                          v128 = LocalizationManager__Get((System_String_o *)StringLiteral_14823/*"UNIT_INFO"*/, 0);
                          spendNum = v10->fields.spendNum;
                          v135 = (Il2CppObject *)j_il2cpp_value_box_0(
                                                   int_TypeInfo,
                                                   &spendNum,
                                                   v129,
                                                   v130,
                                                   v131,
                                                   v132,
                                                   v133,
                                                   v134);
                          v136 = System_String__Format(v128, v135, 0);
                          v137 = v10->fields.itemDetailLb;
                          v138 = (Il2CppObject *)v136;
                          v139 = LocalizationManager__Get((System_String_o *)StringLiteral_2031/*"AP_RECOVER_NUM_TXT"*/, 0);
                          apRcvRate = v10->fields.apRcvRate;
                          v146 = (Il2CppObject *)j_il2cpp_value_box_0(
                                                   int_TypeInfo,
                                                   &apRcvRate,
                                                   v140,
                                                   v141,
                                                   v142,
                                                   v143,
                                                   v144,
                                                   v145);
                          recvApNum = v10->fields.recvApNum;
                          v153 = (Il2CppObject *)j_il2cpp_value_box_0(
                                                   int_TypeInfo,
                                                   &recvApNum,
                                                   v147,
                                                   v148,
                                                   v149,
                                                   v150,
                                                   v151,
                                                   v152);
                          this = (RecoverItemComponent_o *)System_String__Format_63677828(v139, v138, v146, v153, 0);
                          if ( !v137 )
                            goto LABEL_152;
                          UILabel__set_text(v137, (System_String_o *)this, 0);
                          v115 = v107->fields.type;
                        }
                        if ( v115 == 4 )
                        {
                          value = v107->fields.value;
                          if ( needAp < 1 )
                          {
                            *p_spendNum = 1;
                          }
                          else
                          {
                            v155 = (float)(needAp - v10->fields.usrCurrentAp) / (float)value;
                            if ( !byte_4C50D68 )
                            {
                              sub_1C3E564(&System_Math_TypeInfo);
                              byte_4C50D68 = 1;
                            }
                            v156 = fmaxf(v155, 1.0);
                            if ( !System_Math_TypeInfo->_2.cctor_finished )
                              j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
                            v157 = vcvtps_s32_f32(v156);
                            if ( ceilf(v156) == INFINITY )
                              v157 = 0x80000000;
                            *p_spendNum = v157;
                            value *= v157;
                          }
                          v10->fields.recvApNum = value;
                          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                          v158 = LocalizationManager__Get((System_String_o *)StringLiteral_14823/*"UNIT_INFO"*/, 0);
                          spendNum = v10->fields.spendNum;
                          v165 = (Il2CppObject *)j_il2cpp_value_box_0(
                                                   int_TypeInfo,
                                                   &spendNum,
                                                   v159,
                                                   v160,
                                                   v161,
                                                   v162,
                                                   v163,
                                                   v164);
                          v166 = System_String__Format(v158, v165, 0);
                          v167 = v10->fields.itemDetailLb;
                          v168 = (Il2CppObject *)v166;
                          v169 = LocalizationManager__Get((System_String_o *)StringLiteral_1920/*"ADD_RECOVER_NUM_TXT"*/, 0);
                          apRcvRate = v10->fields.recvApNum;
                          v176 = (Il2CppObject *)j_il2cpp_value_box_0(
                                                   int_TypeInfo,
                                                   &apRcvRate,
                                                   v170,
                                                   v171,
                                                   v172,
                                                   v173,
                                                   v174,
                                                   v175);
                          this = (RecoverItemComponent_o *)System_String__Format_63677760(v169, v168, v176, 0);
                          if ( !v167 )
                            goto LABEL_152;
                          UILabel__set_text(v167, (System_String_o *)this, 0);
                          v10->fields.isAddAp = 1;
                        }
                        v177 = v10->fields.currentNumLb;
                        spendNum = num;
                        v178 = (Il2CppObject *)j_il2cpp_value_box_0(
                                                 int_TypeInfo,
                                                 &spendNum,
                                                 v108,
                                                 v109,
                                                 v110,
                                                 v111,
                                                 v112,
                                                 v113);
                        this = (RecoverItemComponent_o *)System_String__Format(
                                                           (System_String_o *)StringLiteral_25112/*"{0:N0}"*/,
                                                           v178,
                                                           0);
                        if ( v177 )
                        {
                          UILabel__set_text(v177, (System_String_o *)this, 0);
                          v179 = v10->fields.spendNumLb;
                          this = (RecoverItemComponent_o *)System_Int32__ToString((int)v10 + 128, 0);
                          if ( v179 )
                          {
                            UILabel__set_text(v179, (System_String_o *)this, 0);
                            v180 = v10->fields.recvApNum + v10->fields.usrCurrentAp;
                            v10->fields.isEnableSelect = num >= v10->fields.spendNum;
                            v10->fields.recvSum = v180;
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
    sub_1C3E7C0(this, data);
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
  this = (RecoverItemComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_152;
  this = (RecoverItemComponent_o *)DataManager__GetMasterData_object_(
                                     (DataManager_o *)this,
                                     (const MethodInfo_30F9A70 *)Method_DataManager_GetMasterData_ItemMaster___);
  if ( !this )
    goto LABEL_152;
  this = (RecoverItemComponent_o *)ItemMaster__GetEntityByType((ItemMaster_o *)this, 2, 0);
  if ( !this )
    goto LABEL_152;
  v20 = this;
  this = (RecoverItemComponent_o *)v10->fields.itemIconInfo;
  if ( !this )
    goto LABEL_152;
  ItemIconComponent__SetItemImage_40966052(
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
  this = (RecoverItemComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_152;
  this = (RecoverItemComponent_o *)DataManager__GetMasterData_object_(
                                     (DataManager_o *)this,
                                     (const MethodInfo_30F9A70 *)Method_DataManager_GetMasterData_StoneShopMaster___);
  if ( !this )
    goto LABEL_152;
  this = (RecoverItemComponent_o *)DataMasterBase_object__object__int___GetEntity(
                                     (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                     v10->fields.targetId,
                                     (const MethodInfo_33B2F58 *)Method_DataMasterBase_StoneShopMaster__StoneShopEntity__int__GetEntity__);
  if ( !v10->fields.itemNameLb )
    goto LABEL_152;
  v21 = this;
  UILabel__set_text(v10->fields.itemNameLb, (System_String_o *)v20->fields.m_CancellationTokenSource, 0);
  if ( !*p_userEntity )
    goto LABEL_152;
  v28 = (int32_t)(*p_userEntity)->fields.userEntity;
  if ( v21 )
    *p_spendNum = HIDWORD(v21->fields.cmdSpellBg);
  v29 = v10->fields.currentNumLb;
  spendNum = v28;
  v30 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &spendNum, v22, v23, v24, v25, v26, v27);
  this = (RecoverItemComponent_o *)System_String__Format((System_String_o *)StringLiteral_25112/*"{0:N0}"*/, v30, 0);
  if ( !v29 )
    goto LABEL_152;
  UILabel__set_text(v29, (System_String_o *)this, 0);
  v31 = v10->fields.spendNumLb;
  this = (RecoverItemComponent_o *)System_Int32__ToString((int)v10 + 128, 0);
  if ( !v31 )
    goto LABEL_152;
  UILabel__set_text(v31, (System_String_o *)this, 0);
  RecoverItemComponent__AttachStoneCountRefreshComponent(v10, v32);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v33 = LocalizationManager__Get((System_String_o *)StringLiteral_14823/*"UNIT_INFO"*/, 0);
  apRcvRate = v10->fields.spendNum;
  v40 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &apRcvRate, v34, v35, v36, v37, v38, v39);
  v41 = System_String__Format(v33, v40, 0);
  v42 = v10->fields.itemDetailLb;
  v43 = (Il2CppObject *)v41;
  v44 = LocalizationManager__Get((System_String_o *)StringLiteral_2031/*"AP_RECOVER_NUM_TXT"*/, 0);
  recvApNum = v10->fields.apRcvRate;
  v51 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &recvApNum, v45, v46, v47, v48, v49, v50);
  v203 = v10->fields.recvApNum;
  v58 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v203, v52, v53, v54, v55, v56, v57);
  this = (RecoverItemComponent_o *)System_String__Format_63677828(v44, v43, v51, v58, 0);
  if ( !v42 )
    goto LABEL_152;
  UILabel__set_text(v42, (System_String_o *)this, 0);
  this = *p_userEntity;
  if ( !*p_userEntity )
    goto LABEL_152;
  v59 = UserGameEntity__get_PayableStoneNum((UserGameEntity_o *)this, 0) < v10->fields.spendNum;
  v60 = v10->fields.usrMaxAp + v10->fields.usrCurrentAp;
LABEL_147:
  v202 = !v59;
  v10->fields.isEnableSelect = v202;
  v10->fields.recvSum = v60;
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
      sub_1C3E7C0(0, method);
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
  __int64 v22; // x2
  __int64 v23; // x3
  __int64 v24; // x4
  __int64 v25; // x5
  __int64 v26; // x6
  __int64 v27; // x7
  int32_t userEntity; // w8
  UILabel_o *v29; // x22
  Il2CppObject *v30; // x0
  UILabel_o *v31; // x22
  const MethodInfo *v32; // x1
  System_String_o *v33; // x20
  __int64 v34; // x2
  __int64 v35; // x3
  __int64 v36; // x4
  __int64 v37; // x5
  __int64 v38; // x6
  __int64 v39; // x7
  Il2CppObject *v40; // x0
  System_String_o *v41; // x0
  UILabel_o *v42; // x20
  Il2CppObject *v43; // x22
  System_String_o *v44; // x23
  __int64 v45; // x2
  __int64 v46; // x3
  __int64 v47; // x4
  __int64 v48; // x5
  __int64 v49; // x6
  __int64 v50; // x7
  Il2CppObject *v51; // x0
  bool v52; // cc
  int v53; // w8
  UILabel_o *v54; // x23
  UILabel_o *v55; // x23
  Il2CppObject *v56; // x0
  CommandSpellEntity_o *v57; // x23
  __int64 v58; // x2
  struct ItemIconComponent_o *itemIconInfo; // x8
  int backSprite; // w21
  float v61; // s8
  float v62; // s8
  unsigned int v63; // w9
  unsigned int v64; // w8
  ItemEntity_o *RecvItemData; // x0
  ItemEntity_o *v66; // x24
  int32_t v67; // w26
  int value; // w21
  float v69; // s8
  float v70; // s8
  unsigned int v71; // w8
  System_String_o *v72; // x21
  __int64 v73; // x2
  __int64 v74; // x3
  __int64 v75; // x4
  __int64 v76; // x5
  __int64 v77; // x6
  __int64 v78; // x7
  Il2CppObject *v79; // x0
  System_String_o *v80; // x0
  UILabel_o *v81; // x21
  Il2CppObject *v82; // x22
  System_String_o *v83; // x24
  __int64 v84; // x2
  __int64 v85; // x3
  __int64 v86; // x4
  __int64 v87; // x5
  __int64 v88; // x6
  __int64 v89; // x7
  Il2CppObject *v90; // x0
  UILabel_o *v91; // x21
  __int64 v92; // x2
  __int64 v93; // x3
  __int64 v94; // x4
  __int64 v95; // x5
  __int64 v96; // x6
  __int64 v97; // x7
  Il2CppObject *v98; // x0
  UILabel_o *v99; // x21
  int v100; // w8
  System_String_o *v101; // x21
  __int64 v102; // x2
  __int64 v103; // x3
  __int64 v104; // x4
  __int64 v105; // x5
  __int64 v106; // x6
  __int64 v107; // x7
  Il2CppObject *v108; // x0
  System_String_o *v109; // x0
  UILabel_o *itemDetailLb; // x21
  Il2CppObject *v111; // x22
  System_String_o *v112; // x23
  __int64 v113; // x2
  __int64 v114; // x3
  __int64 v115; // x4
  __int64 v116; // x5
  __int64 v117; // x6
  __int64 v118; // x7
  Il2CppObject *v119; // x0
  UILabel_o *currentNumLb; // x21
  UILabel_o *spendNumLb; // x21
  char v122; // w9
  int32_t v123; // [xsp+0h] [xbp-70h] BYREF
  int32_t recvRpNum; // [xsp+4h] [xbp-6Ch] BYREF
  int32_t spendNum; // [xsp+8h] [xbp-68h] BYREF
  int32_t CommandSpell; // [xsp+Ch] [xbp-64h] BYREF
  UserItemEntity_o *entity; // [xsp+28h] [xbp-48h] BYREF

  v10 = this;
  if ( (byte_4C50CEE & 1) == 0 )
  {
    sub_1C3E564(&BalanceConfig_TypeInfo);
    sub_1C3E564(&Method_DataManager_GetMasterData_CommandSpellMaster___);
    sub_1C3E564(&Method_DataManager_GetMasterData_ItemMaster___);
    sub_1C3E564(&Method_DataManager_GetMasterData_StoneShopMaster___);
    sub_1C3E564(&Method_DataManager_GetMasterData_UserItemMaster___);
    sub_1C3E564(&Method_DataMasterBase_CommandSpellMaster__CommandSpellEntity__int__GetEntity__);
    sub_1C3E564(&Method_DataMasterBase_StoneShopMaster__StoneShopEntity__int__GetEntity__);
    sub_1C3E564(&int_TypeInfo);
    sub_1C3E564(&LocalizationManager_TypeInfo);
    sub_1C3E564(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C3E564(&StringLiteral_3528/*"CMDSPELL_CURRENT_NUM"*/);
    sub_1C3E564(&StringLiteral_3530/*"CMDSPELL_SPEND_NUM_TXT"*/);
    sub_1C3E564(&StringLiteral_25112/*"{0:N0}"*/);
    sub_1C3E564(&StringLiteral_861/*"-"*/);
    sub_1C3E564(&StringLiteral_14823/*"UNIT_INFO"*/);
    sub_1C3E564(&StringLiteral_12279/*"SPEND_NUM_TXT"*/);
    sub_1C3E564(&StringLiteral_3936/*"CURRENT_NUM_TXT"*/);
    sub_1C3E564(&StringLiteral_11168/*"RP_RECOVER_CMDSPELL_TXT"*/);
    sub_1C3E564(&StringLiteral_11170/*"RP_RECOVER_NUM_TXT"*/);
    this = (RecoverItemComponent_o *)sub_1C3E564(&StringLiteral_3529/*"CMDSPELL_CURRENT_NUM_TXT"*/);
    byte_4C50CEE = 1;
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
  sub_1C3E508(&v10->fields.dialog, dlg);
  v10->fields.callbackFunc = callback;
  sub_1C3E508(&v10->fields.callbackFunc, callback);
  this = (RecoverItemComponent_o *)v10->fields.maskImg;
  if ( !this )
    goto LABEL_108;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
  SelfUserGame = UserGameMaster__getSelfUserGame(0);
  v10->fields.userEntity = SelfUserGame;
  p_userEntity = (RecoverItemComponent_o **)&v10->fields.userEntity;
  sub_1C3E508(&v10->fields.userEntity, SelfUserGame);
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
  this = (RecoverItemComponent_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3936/*"CURRENT_NUM_TXT"*/, 0);
  if ( !currentInfoLb )
    goto LABEL_108;
  UILabel__set_text(currentInfoLb, (System_String_o *)this, 0);
  spendInfoLb = v10->fields.spendInfoLb;
  this = (RecoverItemComponent_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12279/*"SPEND_NUM_TXT"*/, 0);
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
          v54 = v10->fields.currentInfoLb;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          this = (RecoverItemComponent_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3529/*"CMDSPELL_CURRENT_NUM_TXT"*/, 0);
          if ( v54 )
          {
            UILabel__set_text(v54, (System_String_o *)this, 0);
            v55 = v10->fields.spendInfoLb;
            this = (RecoverItemComponent_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3530/*"CMDSPELL_SPEND_NUM_TXT"*/, 0);
            if ( v55 )
            {
              UILabel__set_text(v55, (System_String_o *)this, 0);
              this = (RecoverItemComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
              if ( this )
              {
                this = (RecoverItemComponent_o *)DataManager__GetMasterData_object_(
                                                   (DataManager_o *)this,
                                                   (const MethodInfo_30F9A70 *)Method_DataManager_GetMasterData_CommandSpellMaster___);
                if ( this )
                {
                  v56 = DataMasterBase_object__object__int___GetEntity(
                          (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                          v10->fields.targetId,
                          (const MethodInfo_33B2F58 *)Method_DataMasterBase_CommandSpellMaster__CommandSpellEntity__int__GetEntity__);
                  if ( !v56 )
                    goto LABEL_107;
                  v57 = (CommandSpellEntity_o *)v56;
                  this = (RecoverItemComponent_o *)v10->fields.cmdSpellIcon;
                  if ( this )
                  {
                    CommandSpellIconComponent__SetData((CommandSpellIconComponent_o *)this, v10->fields.userEntity, 0);
                    this = (RecoverItemComponent_o *)v10->fields.itemNameLb;
                    if ( this )
                    {
                      UILabel__set_text((UILabel_o *)this, v57->fields.name, 0);
                      this = *p_userEntity;
                      if ( *p_userEntity )
                      {
                        CommandSpell = UserGameEntity__getCommandSpell((UserGameEntity_o *)this, 0);
                        *p_spendNum = v57->fields.consume;
                        this = (RecoverItemComponent_o *)CommandSpellEntity__getValues(v57, 0);
                        if ( this )
                        {
                          if ( !LODWORD(this->fields.m_CancellationTokenSource) )
                            goto LABEL_109;
                          itemIconInfo = this->fields.itemIconInfo;
                          if ( !itemIconInfo )
                            goto LABEL_108;
                          if ( !LODWORD(itemIconInfo->fields.m_CancellationTokenSource) )
LABEL_109:
                            sub_1C3E7C8(this, data, v58);
                          backSprite = (int)itemIconInfo->fields.backSprite;
                          if ( needRp < 1 )
                          {
                            v64 = *p_spendNum;
                          }
                          else
                          {
                            v61 = (float)(needRp - v10->fields.usrCurrentRp) / (float)backSprite;
                            if ( !byte_4C50D68 )
                            {
                              sub_1C3E564(&System_Math_TypeInfo);
                              byte_4C50D68 = 1;
                            }
                            v62 = fmaxf(v61, 1.0);
                            if ( !System_Math_TypeInfo->_2.cctor_finished )
                              j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
                            v63 = vcvtps_s32_f32(v62);
                            if ( ceilf(v62) == INFINITY )
                              v64 = 0x80000000;
                            else
                              v64 = v63;
                            *p_spendNum = v64;
                          }
                          v10->fields.recvRpNum = v64 * backSprite;
                          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                          v101 = LocalizationManager__Get((System_String_o *)StringLiteral_3528/*"CMDSPELL_CURRENT_NUM"*/, 0);
                          spendNum = v10->fields.spendNum;
                          v108 = (Il2CppObject *)j_il2cpp_value_box_0(
                                                   int_TypeInfo,
                                                   &spendNum,
                                                   v102,
                                                   v103,
                                                   v104,
                                                   v105,
                                                   v106,
                                                   v107);
                          v109 = System_String__Format(v101, v108, 0);
                          itemDetailLb = v10->fields.itemDetailLb;
                          v111 = (Il2CppObject *)v109;
                          v112 = LocalizationManager__Get((System_String_o *)StringLiteral_11168/*"RP_RECOVER_CMDSPELL_TXT"*/, 0);
                          recvRpNum = v10->fields.recvRpNum;
                          v119 = (Il2CppObject *)j_il2cpp_value_box_0(
                                                   int_TypeInfo,
                                                   &recvRpNum,
                                                   v113,
                                                   v114,
                                                   v115,
                                                   v116,
                                                   v117,
                                                   v118);
                          this = (RecoverItemComponent_o *)System_String__Format_63677760(v112, v111, v119, 0);
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
                                v52 = CommandSpell < v10->fields.spendNum;
                                v53 = v10->fields.recvRpNum + v10->fields.usrCurrentRp;
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
          v66 = RecvItemData;
          this = (RecoverItemComponent_o *)v10->fields.itemIconInfo;
          if ( this )
          {
            ItemIconComponent__SetItemImage_40966052(
              (ItemIconComponent_o *)this,
              v66->fields.imageId,
              v66->fields.bgImageId,
              v66->fields.type,
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
                  UILabel__set_text((UILabel_o *)this, v66->fields.name, 0);
                  this = (RecoverItemComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
                  if ( this )
                  {
                    this = (RecoverItemComponent_o *)DataManager__GetMasterData_object_(
                                                       (DataManager_o *)this,
                                                       (const MethodInfo_30F9A70 *)Method_DataManager_GetMasterData_UserItemMaster___);
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
                        v67 = entity ? entity->fields.num : 0;
                        value = v66->fields.value;
                        if ( needRp < 1 )
                        {
                          *p_spendNum = 1;
                        }
                        else
                        {
                          v69 = (float)(needRp - v10->fields.usrCurrentRp) / (float)value;
                          if ( !byte_4C50D68 )
                          {
                            sub_1C3E564(&System_Math_TypeInfo);
                            byte_4C50D68 = 1;
                          }
                          v70 = fmaxf(v69, 1.0);
                          if ( !System_Math_TypeInfo->_2.cctor_finished )
                            j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
                          v71 = vcvtps_s32_f32(v70);
                          if ( ceilf(v70) == INFINITY )
                            v71 = 0x80000000;
                          *p_spendNum = v71;
                          value *= v71;
                        }
                        v10->fields.recvRpNum = value;
                        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                        v72 = LocalizationManager__Get((System_String_o *)StringLiteral_14823/*"UNIT_INFO"*/, 0);
                        spendNum = v10->fields.spendNum;
                        v79 = (Il2CppObject *)j_il2cpp_value_box_0(
                                                int_TypeInfo,
                                                &spendNum,
                                                v73,
                                                v74,
                                                v75,
                                                v76,
                                                v77,
                                                v78);
                        v80 = System_String__Format(v72, v79, 0);
                        v81 = v10->fields.itemDetailLb;
                        v82 = (Il2CppObject *)v80;
                        v83 = LocalizationManager__Get((System_String_o *)StringLiteral_11170/*"RP_RECOVER_NUM_TXT"*/, 0);
                        recvRpNum = v10->fields.recvRpNum;
                        v90 = (Il2CppObject *)j_il2cpp_value_box_0(
                                                int_TypeInfo,
                                                &recvRpNum,
                                                v84,
                                                v85,
                                                v86,
                                                v87,
                                                v88,
                                                v89);
                        this = (RecoverItemComponent_o *)System_String__Format_63677760(v83, v82, v90, 0);
                        if ( v81 )
                        {
                          UILabel__set_text(v81, (System_String_o *)this, 0);
                          v91 = v10->fields.currentNumLb;
                          v123 = v67;
                          v98 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v123, v92, v93, v94, v95, v96, v97);
                          this = (RecoverItemComponent_o *)System_String__Format(
                                                             (System_String_o *)StringLiteral_25112/*"{0:N0}"*/,
                                                             v98,
                                                             0);
                          if ( v91 )
                          {
                            UILabel__set_text(v91, (System_String_o *)this, 0);
                            v99 = v10->fields.spendNumLb;
                            this = (RecoverItemComponent_o *)System_Int32__ToString((int)v10 + 128, 0);
                            if ( v99 )
                            {
                              UILabel__set_text(v99, (System_String_o *)this, 0);
                              v100 = v10->fields.recvRpNum + v10->fields.usrCurrentRp;
                              v10->fields.isEnableSelect = v67 >= v10->fields.spendNum;
                              v10->fields.recvSum = v100;
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
  this = (RecoverItemComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_108;
  this = (RecoverItemComponent_o *)DataManager__GetMasterData_object_(
                                     (DataManager_o *)this,
                                     (const MethodInfo_30F9A70 *)Method_DataManager_GetMasterData_ItemMaster___);
  if ( !this )
    goto LABEL_108;
  this = (RecoverItemComponent_o *)ItemMaster__GetEntityByType((ItemMaster_o *)this, 2, 0);
  if ( !this )
    goto LABEL_108;
  v20 = this;
  this = (RecoverItemComponent_o *)v10->fields.itemIconInfo;
  if ( !this )
    goto LABEL_108;
  ItemIconComponent__SetItemImage_40966052(
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
  this = (RecoverItemComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_108;
  this = (RecoverItemComponent_o *)DataManager__GetMasterData_object_(
                                     (DataManager_o *)this,
                                     (const MethodInfo_30F9A70 *)Method_DataManager_GetMasterData_StoneShopMaster___);
  if ( !this )
    goto LABEL_108;
  this = (RecoverItemComponent_o *)DataMasterBase_object__object__int___GetEntity(
                                     (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                     v10->fields.targetId,
                                     (const MethodInfo_33B2F58 *)Method_DataMasterBase_StoneShopMaster__StoneShopEntity__int__GetEntity__);
  if ( !v10->fields.itemNameLb )
    goto LABEL_108;
  v21 = this;
  UILabel__set_text(v10->fields.itemNameLb, (System_String_o *)v20->fields.m_CancellationTokenSource, 0);
  if ( !*p_userEntity )
    goto LABEL_108;
  userEntity = (int32_t)(*p_userEntity)->fields.userEntity;
  if ( v21 )
    *p_spendNum = HIDWORD(v21->fields.cmdSpellBg);
  v29 = v10->fields.currentNumLb;
  spendNum = userEntity;
  v30 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &spendNum, v22, v23, v24, v25, v26, v27);
  this = (RecoverItemComponent_o *)System_String__Format((System_String_o *)StringLiteral_25112/*"{0:N0}"*/, v30, 0);
  if ( !v29 )
    goto LABEL_108;
  UILabel__set_text(v29, (System_String_o *)this, 0);
  v31 = v10->fields.spendNumLb;
  this = (RecoverItemComponent_o *)System_Int32__ToString((int)v10 + 128, 0);
  if ( !v31 )
    goto LABEL_108;
  UILabel__set_text(v31, (System_String_o *)this, 0);
  RecoverItemComponent__AttachStoneCountRefreshComponent(v10, v32);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v33 = LocalizationManager__Get((System_String_o *)StringLiteral_14823/*"UNIT_INFO"*/, 0);
  recvRpNum = v10->fields.spendNum;
  v40 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &recvRpNum, v34, v35, v36, v37, v38, v39);
  v41 = System_String__Format(v33, v40, 0);
  v42 = v10->fields.itemDetailLb;
  v43 = (Il2CppObject *)v41;
  v44 = LocalizationManager__Get((System_String_o *)StringLiteral_11170/*"RP_RECOVER_NUM_TXT"*/, 0);
  v123 = v10->fields.recvRpNum;
  v51 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v123, v45, v46, v47, v48, v49, v50);
  this = (RecoverItemComponent_o *)System_String__Format_63677760(v44, v43, v51, 0);
  if ( !v42 || (UILabel__set_text(v42, (System_String_o *)this, 0), (this = *p_userEntity) == 0) )
LABEL_108:
    sub_1C3E7C0(this, data);
  v52 = UserGameEntity__get_PayableStoneNum((UserGameEntity_o *)this, 0) < v10->fields.spendNum;
  v53 = v10->fields.recvRpNum + v10->fields.usrCurrentRp;
LABEL_103:
  v122 = !v52;
  v10->fields.isEnableSelect = v122;
  v10->fields.recvSum = v53;
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

  if ( (byte_4C50CF3 & 1) == 0 )
  {
    sub_1C3E564(&System_Action_TypeInfo);
    sub_1C3E564(&Method_DataManager_GetMasterData_EventMaster___);
    sub_1C3E564(&LocalizationManager_TypeInfo);
    sub_1C3E564(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C3E564(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C3E564(&TerminalSceneComponent_TypeInfo);
    sub_1C3E564(&Method_RecoverItemComponent___c__setRequestInfo_b__43_0__);
    sub_1C3E564(&RecoverItemComponent___c_TypeInfo);
    sub_1C3E564(&StringLiteral_11171/*"RP_UNRECOVERABLE_MESSAGE"*/);
    sub_1C3E564(&StringLiteral_1/*""*/);
    byte_4C50CF3 = 1;
  }
  if ( this->fields.recvTarget != 2 )
    goto LABEL_14;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_27;
  DataManager__GetMasterData_object_(
    Instance,
    (const MethodInfo_30F9A70 *)Method_DataManager_GetMasterData_EventMaster___);
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  if ( !byte_4C50C86 )
  {
    sub_1C3E564(&TerminalSceneComponent_TypeInfo);
    byte_4C50C86 = 1;
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
    sub_1C3E7C0(Instance, v4);
  if ( !ScrPlayerStatus__IsBPActive((ScrPlayerStatus_o *)Instance, 0) )
  {
    v7 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    Instance = (DataManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11171/*"RP_UNRECOVERABLE_MESSAGE"*/, 0);
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
      _9__43_0 = (System_Action_o *)sub_1C3E7B0(System_Action_TypeInfo);
      System_Action___ctor(_9__43_0, v12, Method_RecoverItemComponent___c__setRequestInfo_b__43_0__, 0);
      static_fields = RecoverItemComponent___c_TypeInfo->static_fields;
      static_fields->__9__43_0 = _9__43_0;
      Instance = (DataManager_o *)sub_1C3E508(&static_fields->__9__43_0, _9__43_0);
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
    sub_1C3E508(&this->fields.callbackFunc, 0);
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

  if ( (byte_4C50CF1 & 1) == 0 )
  {
    sub_1C3E564(&System_Action_TypeInfo);
    sub_1C3E564(&Method_RecoverItemComponent_setRequestInfo__);
    sub_1C3E564(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4C50CF1 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v7 = (CommonUI_o *)Instance;
  if ( isRes )
  {
    v8 = (System_Action_o *)sub_1C3E7B0(System_Action_TypeInfo);
    System_Action___ctor(v8, (Il2CppObject *)this, Method_RecoverItemComponent_setRequestInfo__, 0);
    if ( v7 )
    {
      CommonUI__CloseConfirmDialog_31238516(v7, v8, 0);
      return;
    }
LABEL_8:
    sub_1C3E7C0(Instance, v6);
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
  sub_1C3E508(&this->fields.m_target, object);
  v8 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_1C3E624(method) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1C3E7DC(0, "Delegate to an instance method cannot have null 'this'.");
      sub_1C3E68C(v10, 0);
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
  this->fields.invoke_impl = (intptr_t)sub_1A79A5C;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_1A799FC;
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
  __int64 v7; // x7
  __int64 v11; // x2
  __int64 v12; // x3
  __int64 v13; // x4
  __int64 v14; // x5
  __int64 v15; // x6
  __int64 v16; // x7
  __int64 v17; // x2
  __int64 v18; // x3
  __int64 v19; // x4
  __int64 v20; // x5
  __int64 v21; // x6
  __int64 v22; // x7
  _QWORD v24[2]; // [xsp+0h] [xbp-70h] BYREF
  __int128 v25; // [xsp+10h] [xbp-60h]
  int32_t v26; // [xsp+2Ch] [xbp-44h] BYREF
  int32_t v27; // [xsp+38h] [xbp-38h] BYREF
  int32_t v28; // [xsp+3Ch] [xbp-34h] BYREF

  v27 = id;
  v28 = type;
  v26 = num;
  if ( (byte_4C50CF7 & 1) == 0 )
  {
    sub_1C3E564(&int_TypeInfo);
    sub_1C3E564(&RecoverType_Type_TypeInfo);
    byte_4C50CF7 = 1;
  }
  v25 = 0u;
  v24[0] = j_il2cpp_value_box_0(
             RecoverType_Type_TypeInfo,
             &v28,
             *(_QWORD *)&id,
             *(_QWORD *)&num,
             callback,
             object,
             method,
             v7);
  v24[1] = j_il2cpp_value_box_0(int_TypeInfo, &v27, v11, v12, v13, v14, v15, v16);
  *(_QWORD *)&v25 = j_il2cpp_value_box_0(int_TypeInfo, &v26, v17, v18, v19, v20, v21, v22);
  return (System_IAsyncResult_o *)sub_1C3E518(this, v24, callback, object);
}


void RecoverItemComponent_CallbackFunc__EndInvoke(
        RecoverItemComponent_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C3E51C(result, 0, method);
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

  if ( (byte_4C50CF8 & 1) == 0 )
  {
    sub_1C3E564(&RecoverItemComponent___c_TypeInfo);
    byte_4C50CF8 = 1;
  }
  v1 = (Il2CppObject *)sub_1C3E7B0(RecoverItemComponent___c_TypeInfo);
  System_Object___ctor(v1, 0);
  RecoverItemComponent___c_TypeInfo->static_fields->__9 = (struct RecoverItemComponent___c_o *)v1;
  sub_1C3E508(RecoverItemComponent___c_TypeInfo->static_fields, v1);
}


void RecoverItemComponent___c___ctor(RecoverItemComponent___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void RecoverItemComponent___c___setRequestInfo_b__43_0(RecoverItemComponent___c_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v3; // x1

  if ( (byte_4C50CF9 & 1) == 0 )
  {
    sub_1C3E564(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C3E564(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    byte_4C50CF9 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance
    || (CommonUI__CloseRecoverItemListDialog((CommonUI_o *)Instance, 0),
        (Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__)) == 0) )
  {
    sub_1C3E7C0(Instance, v3);
  }
  AvalonSceneManager__transitionSceneRefresh((AvalonSceneManager_o *)Instance, 34, 1, 0, 0, 0);
}