void RecoverItemComponent___cctor(const MethodInfo *method)
{
  if ( (byte_596A8BE & 1) == 0 )
  {
    sub_2213A60(&RecoverItemComponent_TypeInfo);
    byte_596A8BE = 1;
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

  if ( (byte_596A8B8 & 1) == 0 )
  {
    sub_2213A60(&System_Action_int__TypeInfo);
    sub_2213A60(&Method_RecoverItemComponent__AttachStoneCountRefreshComponent_b__38_0__);
    byte_596A8B8 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  v4 = (System_Action_int__o *)sub_2213CCC(System_Action_int__TypeInfo);
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
  const MethodInfo_47A29F8 *v7; // x0
  Il2CppObject *v8; // x20
  System_Action_o *v9; // x21
  Il2CppObject *Instance; // x0
  __int64 v11; // x1
  System_Action_o *v12; // x1

  if ( (byte_596A8BB & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_RecoverItemComponent_setRequestInfo__);
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_596A8BB = 1;
  }
  if ( !isRes )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( Instance )
    {
      v12 = 0;
      goto LABEL_8;
    }
LABEL_9:
    sub_2213CDC(Instance, v11);
  }
  v7 = (const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__;
  this->fields.spendNum = useNum;
  v8 = SingletonMonoBehaviour_object___get_Instance(v7);
  v9 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
  System_Action___ctor(v9, (Il2CppObject *)this, Method_RecoverItemComponent_setRequestInfo__, 0);
  if ( !v8 )
    goto LABEL_9;
  Instance = v8;
  v12 = v9;
LABEL_8:
  CommonUI__CloseApRecoverConfirmDlg((CommonUI_o *)Instance, v12, 0);
}


void RecoverItemComponent__OnClickItem(RecoverItemComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Object_o *dialog; // x20
  __int64 userEntity; // x0
  __int64 v6; // x1
  __int64 v7; // x2
  struct RecoverDlgComponent_o *v8; // x8
  System_String_o *v9; // x20
  System_String_o *v10; // x21
  Il2CppObject *v11; // x0
  __int64 v12; // x2
  System_String_o *v13; // x24
  Il2CppObject *mText; // x23
  System_String_o *v15; // x21
  Il2CppObject *v16; // x0
  struct UILabel_o *itemNameLb; // x8
  System_String_o *v18; // x21
  System_String_o *v19; // x22
  _QWORD *v20; // x8
  System_Reflection_MethodBase_o *v21; // x0
  __int64 v22; // x1
  __int64 v23; // x2
  int32_t v24; // w9
  int32_t usrMaxAp; // w10
  int v26; // w8
  System_String_o **v27; // x9
  System_String_o *v28; // x25
  System_String_o *v29; // x25
  System_String_o *v30; // x2
  System_String_o *v31; // x3
  int32_t v32; // w4
  int32_t v33; // w5
  bool v34; // w6
  bool v35; // w7
  System_Object_array *v36; // x26
  __int64 v37; // x1
  System_String_o *v38; // x2
  System_String_o *v39; // x3
  int32_t v40; // w4
  int32_t v41; // w5
  bool v42; // w6
  bool v43; // w7
  System_String_o *v44; // x2
  System_String_o *v45; // x3
  int32_t v46; // w4
  int32_t v47; // w5
  bool v48; // w6
  bool v49; // w7
  Il2CppObject *v50; // x24
  System_String_o *v51; // x2
  System_String_o *v52; // x3
  int32_t v53; // w4
  int32_t v54; // w5
  bool v55; // w6
  bool v56; // w7
  Il2CppObject *v57; // x24
  System_String_o *v58; // x2
  System_String_o *v59; // x3
  int32_t v60; // w4
  int32_t v61; // w5
  bool v62; // w6
  bool v63; // w7
  Il2CppObject *v64; // x24
  System_String_o *v65; // x2
  System_String_o *v66; // x3
  int32_t v67; // w4
  int32_t v68; // w5
  bool v69; // w6
  bool v70; // w7
  Il2CppObject *v71; // x24
  System_String_o *v72; // x2
  System_String_o *v73; // x3
  int32_t v74; // w4
  int32_t v75; // w5
  bool v76; // w6
  bool v77; // w7
  Il2CppObject *v78; // x24
  System_String_o *v79; // x25
  System_Object_array *v80; // x26
  __int64 v81; // x24
  __int64 v82; // x24
  __int64 v83; // x24
  __int64 v84; // x24
  __int64 v85; // x24
  System_String_o *v86; // x24
  __int64 v87; // x1
  __int64 v88; // x2
  Il2CppObject *v89; // x23
  CommonConfirmDialog_ClickDelegate_o *v90; // x25
  __int64 v91; // x2
  System_String_o **v92; // x9
  System_String_o *v93; // x25
  __int64 v94; // x24
  __int64 v95; // x24
  __int64 v96; // x24
  __int64 v97; // x24
  __int64 v98; // x24
  __int64 v99; // x24
  __int64 v100; // x1
  __int64 v101; // x2
  System_String_o *v102; // x23
  Il2CppObject *v103; // x25
  CommonConfirmDialog_ClickDelegate_o *v104; // x26
  __int64 v105; // x2
  System_String_o *v106; // x0
  System_String_o *v107; // x20
  Il2CppObject *v108; // x21
  System_Action_o *v109; // x22
  System_String_o *v110; // x0
  System_String_o *v111; // x20
  Il2CppObject *Instance; // x21
  System_Action_o *v113; // x22
  Il2CppObject *v114; // x22
  int32_t targetId; // w20
  int32_t needAp; // w21
  System_Action_bool__int__o *v117; // x23
  __int64 v118; // x0
  int32_t v119; // [xsp+48h] [xbp-78h] BYREF
  int32_t v120; // [xsp+4Ch] [xbp-74h] BYREF
  int32_t recvSum; // [xsp+50h] [xbp-70h] BYREF
  int32_t usrMaxRp; // [xsp+54h] [xbp-6Ch] BYREF
  int32_t usrCurrentRp; // [xsp+58h] [xbp-68h] BYREF
  int32_t spendNum; // [xsp+5Ch] [xbp-64h] BYREF

  if ( (byte_596A8B9 & 1) == 0 )
  {
    sub_2213A60(&System_Action_bool__int__TypeInfo);
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&BalanceConfig_TypeInfo);
    sub_2213A60(&CommonConfirmDialog_ClickDelegate_TypeInfo);
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&object___TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&Method_RecoverItemComponent_CloseApRecovDlg__);
    sub_2213A60(&Method_RecoverItemComponent_OnClickItem__);
    sub_2213A60(&Method_RecoverItemComponent_closeNotificationDlg__);
    sub_2213A60(&Method_RecoverItemComponent_spendItemDlg__);
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_2213A60(&StringLiteral_11654/*"RP_RECOVER_CONFIRM_MSG"*/);
    sub_2213A60(&StringLiteral_3670/*"CMDSPELL_CURRENT_NUM"*/);
    sub_2213A60(&StringLiteral_3822/*"COMMAND_SPELL_TXT"*/);
    sub_2213A60(&StringLiteral_2124/*"AP_RECOVER_CONFIRM_MSG"*/);
    sub_2213A60(&StringLiteral_11652/*"RP_FULL_MSG"*/);
    sub_2213A60(&StringLiteral_15412/*"UNIT_INFO"*/);
    sub_2213A60(&StringLiteral_2120/*"AP_ADD_CONFIRM_MSG"*/);
    sub_2213A60(&StringLiteral_3829/*"COMMON_CONFIRM_DECIDE"*/);
    sub_2213A60(&StringLiteral_3827/*"COMMON_CONFIRM_CANCEL"*/);
    sub_2213A60(&StringLiteral_2121/*"AP_ADD_CONFIRM_MSG_OVER"*/);
    sub_2213A60(&StringLiteral_2125/*"AP_RECOVER_CONFIRM_MSG_OVER"*/);
    sub_2213A60(&StringLiteral_2122/*"AP_FULL_MSG"*/);
    sub_2213A60(&StringLiteral_1/*""*/);
    sub_2213A60(&StringLiteral_2130/*"AP_RECOVER_STONEPAY_WARNING_MSG"*/);
    byte_596A8B9 = 1;
  }
  if ( !this->fields.isEnableSelect )
    return;
  dialog = (UnityEngine_Object_o *)this->fields.dialog;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v2);
  userEntity = UnityEngine_Object__op_Inequality(dialog, 0, 0);
  if ( (userEntity & 1) == 0 )
    return;
  v8 = this->fields.dialog;
  if ( !v8 )
    goto LABEL_94;
  if ( v8->fields.isClosed )
    return;
  v9 = (System_String_o *)StringLiteral_1/*""*/;
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v6, v7);
  v10 = LocalizationManager__Get((System_String_o *)StringLiteral_15412/*"UNIT_INFO"*/, 0);
  spendNum = this->fields.spendNum;
  v11 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &spendNum);
  userEntity = (__int64)System_String__Format(v10, v11, 0);
  v13 = (System_String_o *)userEntity;
  if ( this->fields.currentType == 1 )
  {
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v6, v12);
    mText = (Il2CppObject *)LocalizationManager__Get((System_String_o *)StringLiteral_3822/*"COMMAND_SPELL_TXT"*/, 0);
    if ( this->fields.currentType == 1 )
    {
      if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v6, v12);
      v15 = LocalizationManager__Get((System_String_o *)StringLiteral_3670/*"CMDSPELL_CURRENT_NUM"*/, 0);
      spendNum = this->fields.spendNum;
      v16 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &spendNum);
      v13 = System_String__Format(v15, v16, 0);
    }
  }
  else
  {
    itemNameLb = this->fields.itemNameLb;
    if ( !itemNameLb )
      goto LABEL_94;
    mText = (Il2CppObject *)itemNameLb->fields.mText;
  }
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v6, v12);
  v18 = LocalizationManager__Get((System_String_o *)StringLiteral_3829/*"COMMON_CONFIRM_DECIDE"*/, 0);
  v19 = LocalizationManager__Get((System_String_o *)StringLiteral_3827/*"COMMON_CONFIRM_CANCEL"*/, 0);
  v20 = Method_RecoverItemComponent_OnClickItem__;
  if ( (*((_BYTE *)Method_RecoverItemComponent_OnClickItem__ + 83) & 2) != 0 )
    v20 = (_QWORD *)sub_2213A78(Method_RecoverItemComponent_OnClickItem__);
  v21 = (System_Reflection_MethodBase_o *)sub_2213A44(v20, v20[4]);
  OverwriteAssetSoundName__PlaySystemSe(v21, 0, 0, 0);
  if ( !this->fields.isAp )
  {
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v22, v23);
    v79 = LocalizationManager__Get((System_String_o *)StringLiteral_11654/*"RP_RECOVER_CONFIRM_MSG"*/, 0);
    userEntity = sub_2213B20(object___TypeInfo, 7);
    if ( !userEntity )
      goto LABEL_94;
    v80 = (System_Object_array *)userEntity;
    sub_1FFE8F8(userEntity, mText);
    sub_1FFE2C4(v80, 0, mText);
    sub_1FFE8F8(v80, v13);
    sub_1FFE2C4(v80, 1, v13);
    spendNum = this->fields.recvRpNum;
    v81 = j_il2cpp_value_box_0(qword_5984348, &spendNum);
    sub_1FFE8F8(v80, v81);
    sub_1FFE2C4(v80, 2, v81);
    usrCurrentRp = this->fields.usrCurrentRp;
    v82 = j_il2cpp_value_box_0(qword_5984348, &usrCurrentRp);
    sub_1FFE8F8(v80, v82);
    sub_1FFE2C4(v80, 3, v82);
    usrMaxRp = this->fields.usrMaxRp;
    v83 = j_il2cpp_value_box_0(qword_5984348, &usrMaxRp);
    sub_1FFE8F8(v80, v83);
    sub_1FFE2C4(v80, 4, v83);
    recvSum = this->fields.recvSum;
    v84 = j_il2cpp_value_box_0(qword_5984348, &recvSum);
    sub_1FFE8F8(v80, v84);
    sub_1FFE2C4(v80, 5, v84);
    v120 = this->fields.usrMaxRp;
    v85 = j_il2cpp_value_box_0(qword_5984348, &v120);
    sub_1FFE8F8(v80, v85);
    sub_1FFE2C4(v80, 6, v85);
    userEntity = (__int64)System_String__Format_75698016(v79, v80, 0);
    if ( !this->fields.userEntity )
      goto LABEL_94;
    v86 = (System_String_o *)userEntity;
    if ( UserGameEntity__getRp(this->fields.userEntity, 0) < this->fields.usrMaxRp )
      goto LABEL_59;
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v87, v88);
    v110 = LocalizationManager__Get((System_String_o *)StringLiteral_11652/*"RP_FULL_MSG"*/, 0);
    v111 = System_String__Format(v110, mText, 0);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v113 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
    System_Action___ctor(v113, (Il2CppObject *)this, Method_RecoverItemComponent_closeNotificationDlg__, 0);
    if ( !Instance )
      goto LABEL_94;
    CommonUI__OpenNotificationDialog(
      (CommonUI_o *)Instance,
      (System_String_o *)StringLiteral_1/*""*/,
      v111,
      v113,
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
  v24 = this->fields.recvSum;
  usrMaxAp = this->fields.usrMaxAp;
  v26 = *(&LocalizationManager_TypeInfo->_2.cctor_finished + 1);
  if ( !this->fields.isAddAp )
  {
    if ( v24 <= usrMaxAp )
      v92 = (System_String_o **)&StringLiteral_2124/*"AP_RECOVER_CONFIRM_MSG"*/;
    else
      v92 = (System_String_o **)&StringLiteral_2125/*"AP_RECOVER_CONFIRM_MSG_OVER"*/;
    v93 = *v92;
    if ( !v26 )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v22, v23);
    v29 = LocalizationManager__Get(v93, 0);
    userEntity = sub_2213B20(object___TypeInfo, 8);
    if ( !userEntity )
      goto LABEL_94;
    v36 = (System_Object_array *)userEntity;
    sub_1FFE8F8(userEntity, mText);
    sub_1FFE2C4(v36, 0, mText);
    sub_1FFE8F8(v36, v13);
    sub_1FFE2C4(v36, 1, v13);
    spendNum = this->fields.apRcvRate;
    v94 = j_il2cpp_value_box_0(qword_5984348, &spendNum);
    sub_1FFE8F8(v36, v94);
    sub_1FFE2C4(v36, 2, v94);
    usrCurrentRp = this->fields.recvApNum;
    v95 = j_il2cpp_value_box_0(qword_5984348, &usrCurrentRp);
    sub_1FFE8F8(v36, v95);
    sub_1FFE2C4(v36, 3, v95);
    usrMaxRp = this->fields.usrCurrentAp;
    v96 = j_il2cpp_value_box_0(qword_5984348, &usrMaxRp);
    sub_1FFE8F8(v36, v96);
    sub_1FFE2C4(v36, 4, v96);
    recvSum = this->fields.usrMaxAp;
    v97 = j_il2cpp_value_box_0(qword_5984348, &recvSum);
    sub_1FFE8F8(v36, v97);
    sub_1FFE2C4(v36, 5, v97);
    v120 = this->fields.recvSum;
    v98 = j_il2cpp_value_box_0(qword_5984348, &v120);
    sub_1FFE8F8(v36, v98);
    sub_1FFE2C4(v36, 6, v98);
    v119 = this->fields.usrMaxAp;
    v99 = j_il2cpp_value_box_0(qword_5984348, &v119);
    sub_1FFE8F8(v36, v99);
    sub_1FFE2C4(v36, 7, v99);
    goto LABEL_70;
  }
  if ( v24 <= usrMaxAp )
    v27 = (System_String_o **)&StringLiteral_2120/*"AP_ADD_CONFIRM_MSG"*/;
  else
    v27 = (System_String_o **)&StringLiteral_2121/*"AP_ADD_CONFIRM_MSG_OVER"*/;
  v28 = *v27;
  if ( !v26 )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v22, v23);
  v29 = LocalizationManager__Get(v28, 0);
  userEntity = sub_2213B20(object___TypeInfo, 7);
  if ( !userEntity )
    goto LABEL_94;
  v36 = (System_Object_array *)userEntity;
  if ( mText )
  {
    userEntity = sub_2213BB4(mText, *(_QWORD *)(*(_QWORD *)userEntity + 64LL));
    if ( !userEntity )
      goto LABEL_96;
  }
  if ( !LODWORD(v36->max_length) )
    goto LABEL_95;
  v36->m_Items[0] = mText;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)v36->m_Items, (int32_t)mText, v30, v31, v32, v33, v34, v35);
  if ( v13 )
  {
    userEntity = sub_2213BB4(v13, v36->obj.klass->_1.element_class);
    if ( !userEntity )
      goto LABEL_96;
  }
  if ( (v36->max_length & 0xFFFFFFFE) == 0 )
    goto LABEL_95;
  v36->m_Items[1] = (Il2CppObject *)v13;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v36->m_Items[1], (int32_t)v13, v38, v39, v40, v41, v42, v43);
  spendNum = this->fields.recvApNum;
  userEntity = j_il2cpp_value_box_0(qword_5984348, &spendNum);
  v50 = (Il2CppObject *)userEntity;
  if ( userEntity )
  {
    userEntity = sub_2213BB4(userEntity, v36->obj.klass->_1.element_class);
    if ( !userEntity )
      goto LABEL_96;
  }
  if ( LODWORD(v36->max_length) <= 2 )
    goto LABEL_95;
  v36->m_Items[2] = v50;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v36->m_Items[2], (int32_t)v50, v44, v45, v46, v47, v48, v49);
  usrCurrentRp = this->fields.usrCurrentAp;
  userEntity = j_il2cpp_value_box_0(qword_5984348, &usrCurrentRp);
  v57 = (Il2CppObject *)userEntity;
  if ( userEntity )
  {
    userEntity = sub_2213BB4(userEntity, v36->obj.klass->_1.element_class);
    if ( !userEntity )
      goto LABEL_96;
  }
  if ( (v36->max_length & 0xFFFFFFFC) == 0 )
    goto LABEL_95;
  v36->m_Items[3] = v57;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v36->m_Items[3], (int32_t)v57, v51, v52, v53, v54, v55, v56);
  usrMaxRp = this->fields.usrMaxAp;
  userEntity = j_il2cpp_value_box_0(qword_5984348, &usrMaxRp);
  v64 = (Il2CppObject *)userEntity;
  if ( userEntity )
  {
    userEntity = sub_2213BB4(userEntity, v36->obj.klass->_1.element_class);
    if ( !userEntity )
      goto LABEL_96;
  }
  if ( LODWORD(v36->max_length) <= 4 )
    goto LABEL_95;
  v36->m_Items[4] = v64;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v36->m_Items[4], (int32_t)v64, v58, v59, v60, v61, v62, v63);
  recvSum = this->fields.recvSum;
  userEntity = j_il2cpp_value_box_0(qword_5984348, &recvSum);
  v71 = (Il2CppObject *)userEntity;
  if ( userEntity )
  {
    userEntity = sub_2213BB4(userEntity, v36->obj.klass->_1.element_class);
    if ( !userEntity )
      goto LABEL_96;
  }
  if ( LODWORD(v36->max_length) <= 5 )
    goto LABEL_95;
  v36->m_Items[5] = v71;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v36->m_Items[5], (int32_t)v71, v65, v66, v67, v68, v69, v70);
  v120 = this->fields.usrMaxAp;
  userEntity = j_il2cpp_value_box_0(qword_5984348, &v120);
  v78 = (Il2CppObject *)userEntity;
  if ( userEntity )
  {
    userEntity = sub_2213BB4(userEntity, v36->obj.klass->_1.element_class);
    if ( !userEntity )
    {
LABEL_96:
      v118 = sub_2213D00(userEntity, v37);
      sub_2213BA0(v118, 0);
    }
  }
  if ( LODWORD(v36->max_length) <= 6 )
LABEL_95:
    sub_2213CE4(userEntity);
  v36->m_Items[6] = v78;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v36->m_Items[6], (int32_t)v78, v72, v73, v74, v75, v76, v77);
LABEL_70:
  v86 = System_String__Format_75698016(v29, v36, 0);
  userEntity = (__int64)this->fields.userEntity;
  if ( !userEntity )
    goto LABEL_94;
  if ( UserGameEntity__getAct((UserGameEntity_o *)userEntity, 0) < this->fields.usrMaxAp )
  {
    if ( this->fields.currentType == 2 )
    {
      if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v100, v101);
      v102 = LocalizationManager__Get((System_String_o *)StringLiteral_2130/*"AP_RECOVER_STONEPAY_WARNING_MSG"*/, 0);
      v103 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v104 = (CommonConfirmDialog_ClickDelegate_o *)sub_2213CCC(CommonConfirmDialog_ClickDelegate_TypeInfo);
      CommonConfirmDialog_ClickDelegate___ctor(
        v104,
        (Il2CppObject *)this,
        Method_RecoverItemComponent_spendItemDlg__,
        0);
      userEntity = (__int64)BalanceConfig_TypeInfo;
      if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v6, v105);
      if ( v103 )
      {
        CommonUI__OpenConfirmDecideDlgAddMsgFrame(
          (CommonUI_o *)v103,
          v9,
          v86,
          v102,
          v18,
          v19,
          v104,
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
LABEL_94:
      sub_2213CDC(userEntity, v6);
    }
    if ( this->fields.isAddAp || this->fields.apRcvRate != 100 || this->fields.spendNum >= 2 )
    {
      v114 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      targetId = this->fields.targetId;
      needAp = this->fields.needAp;
      v117 = (System_Action_bool__int__o *)sub_2213CCC(System_Action_bool__int__TypeInfo);
      System_Action_bool__int____ctor(v117, (Il2CppObject *)this, Method_RecoverItemComponent_CloseApRecovDlg__, 0);
      if ( !v114 )
        goto LABEL_94;
      CommonUI__OpenApRecoverConfirmDlg((CommonUI_o *)v114, targetId, needAp, v117, 0);
      return;
    }
LABEL_59:
    v89 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v90 = (CommonConfirmDialog_ClickDelegate_o *)sub_2213CCC(CommonConfirmDialog_ClickDelegate_TypeInfo);
    CommonConfirmDialog_ClickDelegate___ctor(v90, (Il2CppObject *)this, Method_RecoverItemComponent_spendItemDlg__, 0);
    userEntity = (__int64)BalanceConfig_TypeInfo;
    if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v6, v91);
    if ( v89 )
    {
      CommonUI__OpenConfirmDecideDlg(
        (CommonUI_o *)v89,
        v9,
        v86,
        v18,
        v19,
        v90,
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
    goto LABEL_94;
  }
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v100, v101);
  v106 = LocalizationManager__Get((System_String_o *)StringLiteral_2122/*"AP_FULL_MSG"*/, 0);
  v107 = System_String__Format(v106, mText, 0);
  v108 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v109 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
  System_Action___ctor(v109, (Il2CppObject *)this, Method_RecoverItemComponent_closeNotificationDlg__, 0);
  if ( !v108 )
    goto LABEL_94;
  CommonUI__OpenNotificationDialog(
    (CommonUI_o *)v108,
    (System_String_o *)StringLiteral_1/*""*/,
    v107,
    v109,
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
  int32_t v9; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_596A8BF & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_26474/*"{0:N0}"*/);
    byte_596A8BF = 1;
  }
  currentNumLb = this->fields.currentNumLb;
  v9 = stoneCount;
  v6 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &v9);
  v7 = System_String__Format((System_String_o *)StringLiteral_26474/*"{0:N0}"*/, v6, 0);
  if ( !currentNumLb )
    sub_2213CDC(v7, v8);
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
  __int64 v9; // x2
  __int64 v10; // x3
  __int64 v11; // x0
  bool v12; // zf
  RecoverItemComponent_o *v13; // x0
  RecoverItemComponent_CallbackFunc_o *v14; // x1
  const MethodInfo *v15; // x2

  if ( (byte_596A8B4 & 1) == 0 )
  {
    sub_2213A60(&RecoverItemComponent_CallbackFunc_TypeInfo);
    byte_596A8B4 = 1;
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
    v11 = sub_224B48C(p_callbackFunc, v8, v6);
    v12 = v11 == (_QWORD)v6;
    v6 = (System_Delegate_o *)v11;
    if ( v12 )
      return;
  }
  v13 = (RecoverItemComponent_o *)sub_221405C(v8, RecoverItemComponent_CallbackFunc_TypeInfo, v9, v10);
  RecoverItemComponent__remove_callbackFunc(v13, v14, v15);
}


void RecoverItemComponent__closeNotificationDlg(RecoverItemComponent_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v3; // x1

  if ( (byte_596A8BD & 1) == 0 )
  {
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_596A8BD = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_2213CDC(0, v3);
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
  __int64 v9; // x2
  __int64 v10; // x3
  __int64 v11; // x0
  bool v12; // zf
  RecoverItemComponent_o *v13; // x0
  const MethodInfo *v14; // x1

  if ( (byte_596A8B5 & 1) == 0 )
  {
    sub_2213A60(&RecoverItemComponent_CallbackFunc_TypeInfo);
    byte_596A8B5 = 1;
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
    v11 = sub_224B48C(p_callbackFunc, v8, v6);
    v12 = v11 == (_QWORD)v6;
    v6 = (System_Delegate_o *)v11;
    if ( v12 )
      return;
  }
  v13 = (RecoverItemComponent_o *)sub_221405C(v8, RecoverItemComponent_CallbackFunc_TypeInfo, v9, v10);
  RecoverItemComponent__AttachStoneCountRefreshComponent(v13, v14);
}


// local variable allocation has failed, the output may be wrong!
void RecoverItemComponent__setAPRecvItemInfo(
        RecoverItemComponent_o *this,
        RecoverEntity_o *data,
        int32_t needAp,
        RecoverDlgComponent_o *dlg,
        RecoverItemComponent_CallbackFunc_o *callback,
        const MethodInfo *method)
{
  bool v6; // w6
  bool v7; // w7
  RecoverItemComponent_o *v12; // x19
  int32_t targetId; // w8
  System_String_o *v14; // x2
  System_String_o *v15; // x3
  int32_t v16; // w4
  int32_t v17; // w5
  bool v18; // w6
  bool v19; // w7
  UserGameEntity_o *SelfUserGame; // x0
  RecoverItemComponent_o **p_userEntity; // x23
  System_String_o *v22; // x2
  System_String_o *v23; // x3
  int32_t v24; // w4
  int32_t v25; // w5
  bool v26; // w6
  bool v27; // w7
  struct UserGameEntity_o *userEntity; // x8
  int32_t actMax; // w8
  unsigned int *p_spendNum; // x20
  __int64 v31; // x1
  __int64 v32; // x2
  UILabel_o *currentInfoLb; // x24
  UILabel_o *spendInfoLb; // x24
  int32_t currentType; // w8
  RecoverItemComponent_o *v36; // x21
  RecoverItemComponent_o *v37; // x22
  int32_t v38; // w8
  UILabel_o *v39; // x21
  Il2CppObject *v40; // x0
  UILabel_o *v41; // x21
  const MethodInfo *v42; // x1
  __int64 v43; // x1
  __int64 v44; // x2
  System_String_o *v45; // x20
  Il2CppObject *v46; // x0
  Il2CppObject *v47; // x21
  UILabel_o *v48; // x20
  System_String_o *v49; // x22
  Il2CppObject *v50; // x24
  Il2CppObject *v51; // x0
  int32_t PayableStoneNum; // w0
  int v53; // w9
  bool v54; // w8
  ItemEntity_o *RecvItemData; // x0
  ItemEntity_o *v56; // x24
  __int64 v57; // x2
  int32_t num; // w28
  __int64 v59; // x1
  __int64 v60; // x2
  UILabel_o *v61; // x22
  UILabel_o *v62; // x22
  Il2CppObject *v63; // x0
  CommandSpellEntity_o *v64; // x22
  int32_t CommandSpell; // w0
  int32_t consume; // w8
  __int64 v67; // x2
  int32_t type; // w8
  struct ItemIconComponent_o *itemIconInfo; // x27
  float v70; // s0
  int v71; // w8
  float v72; // s8
  float usrMaxAp; // s9
  float v74; // s8
  unsigned int v75; // w9
  LocalizationManager_c *v76; // x0
  unsigned int v77; // w8
  System_String_o *v78; // x23
  Il2CppObject *v79; // x0
  Il2CppObject *v80; // x24
  UILabel_o *itemDetailLb; // x23
  System_String_o *v82; // x25
  Il2CppObject *v83; // x26
  Il2CppObject *v84; // x0
  int backSprite; // w22
  float v86; // s8
  unsigned int v87; // w9
  unsigned int v88; // w8
  int32_t v89; // w8
  BalanceConfig_c *v90; // x0
  int v91; // w10
  float v92; // s9
  float v93; // s8
  int v94; // w8
  float v95; // s8
  unsigned int v96; // w9
  int v97; // w8
  float v98; // s8
  unsigned int v99; // w9
  int32_t v100; // w10
  int32_t v101; // w11
  unsigned int v102; // w8
  System_String_o *v103; // x23
  Il2CppObject *v104; // x0
  Il2CppObject *v105; // x25
  UILabel_o *v106; // x23
  System_String_o *v107; // x26
  Il2CppObject *v108; // x27
  Il2CppObject *v109; // x0
  int value; // w23
  float v111; // s8
  unsigned int v112; // w9
  int v113; // w8
  LocalizationManager_c *v114; // x0
  System_String_o *v115; // x21
  Il2CppObject *v116; // x0
  Il2CppObject *v117; // x23
  UILabel_o *v118; // x21
  System_String_o *v119; // x24
  Il2CppObject *v120; // x0
  UILabel_o *v121; // x21
  Il2CppObject *v122; // x0
  UILabel_o *v123; // x21
  bool v124; // w8
  LocalizationManager_c *v125; // x0
  System_String_o *v126; // x21
  Il2CppObject *v127; // x0
  Il2CppObject *v128; // x22
  UILabel_o *v129; // x21
  System_String_o *v130; // x23
  Il2CppObject *v131; // x0
  UILabel_o *currentNumLb; // x21
  UILabel_o *spendNumLb; // x21
  int32_t v134; // [xsp+4h] [xbp-8Ch] BYREF
  int32_t recvApNum; // [xsp+8h] [xbp-88h] BYREF
  int32_t apRcvRate; // [xsp+Ch] [xbp-84h] BYREF
  int32_t spendNum; // [xsp+10h] [xbp-80h] BYREF
  int32_t v138; // [xsp+14h] [xbp-7Ch] BYREF
  UserItemEntity_o *entity; // [xsp+18h] [xbp-78h] BYREF

  v12 = this;
  if ( (byte_596A8B6 & 1) == 0 )
  {
    sub_2213A60(&BalanceConfig_TypeInfo);
    sub_2213A60(&Method_DataManager_GetMasterData_CommandSpellMaster___);
    sub_2213A60(&Method_DataManager_GetMasterData_ItemMaster___);
    sub_2213A60(&Method_DataManager_GetMasterData_StoneShopMaster___);
    sub_2213A60(&Method_DataManager_GetMasterData_UserItemMaster___);
    sub_2213A60(&Method_DataMasterBase_CommandSpellMaster__CommandSpellEntity__int__GetEntity__);
    sub_2213A60(&Method_DataMasterBase_StoneShopMaster__StoneShopEntity__int__GetEntity__);
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_2213A60(&StringLiteral_3670/*"CMDSPELL_CURRENT_NUM"*/);
    sub_2213A60(&StringLiteral_2001/*"ADD_RECOVER_CMDSPELL_TXT"*/);
    sub_2213A60(&StringLiteral_3672/*"CMDSPELL_SPEND_NUM_TXT"*/);
    sub_2213A60(&StringLiteral_26474/*"{0:N0}"*/);
    sub_2213A60(&StringLiteral_923/*"-"*/);
    sub_2213A60(&StringLiteral_15412/*"UNIT_INFO"*/);
    sub_2213A60(&StringLiteral_12795/*"SPEND_NUM_TXT"*/);
    sub_2213A60(&StringLiteral_4080/*"CURRENT_NUM_TXT"*/);
    sub_2213A60(&StringLiteral_2002/*"ADD_RECOVER_NUM_TXT"*/);
    sub_2213A60(&StringLiteral_2127/*"AP_RECOVER_NUM_TXT"*/);
    this = (RecoverItemComponent_o *)sub_2213A60(&StringLiteral_3671/*"CMDSPELL_CURRENT_NUM_TXT"*/);
    byte_596A8B6 = 1;
  }
  entity = 0;
  v138 = 0;
  if ( !data )
    goto LABEL_162;
  v12->fields.currentType = data->fields.recoverType;
  v12->fields.recvTarget = data->fields.target;
  targetId = data->fields.targetId;
  v12->fields.isEnableSelect = 0;
  v12->fields.dialog = dlg;
  v12->fields.targetId = targetId;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&v12->fields.dialog,
    (int32_t)dlg,
    *(System_String_o **)&needAp,
    (System_String_o *)dlg,
    (int32_t)callback,
    (int32_t)method,
    v6,
    v7);
  v12->fields.callbackFunc = callback;
  v12->fields.needAp = needAp;
  *(_WORD *)&v12->fields.isAp = 1;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&v12->fields.callbackFunc,
    (int32_t)callback,
    v14,
    v15,
    v16,
    v17,
    v18,
    v19);
  this = (RecoverItemComponent_o *)v12->fields.maskImg;
  if ( !this )
    goto LABEL_162;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
  SelfUserGame = UserGameMaster__getSelfUserGame(0);
  v12->fields.userEntity = SelfUserGame;
  p_userEntity = (RecoverItemComponent_o **)&v12->fields.userEntity;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&v12->fields.userEntity,
    (int32_t)SelfUserGame,
    v22,
    v23,
    v24,
    v25,
    v26,
    v27);
  this = (RecoverItemComponent_o *)v12->fields.userEntity;
  if ( !this )
    goto LABEL_162;
  this = (RecoverItemComponent_o *)UserGameEntity__getAct((UserGameEntity_o *)this, 0);
  userEntity = v12->fields.userEntity;
  v12->fields.usrCurrentAp = (int)this;
  if ( !userEntity )
    goto LABEL_162;
  actMax = userEntity->fields.actMax;
  v12->fields.spendNum = 1;
  p_spendNum = (unsigned int *)&v12->fields.spendNum;
  this = (RecoverItemComponent_o *)v12->fields.itemNameLb;
  v12->fields.usrMaxAp = actMax;
  v12->fields.recvApNum = actMax;
  v12->fields.apRcvRate = 100;
  if ( !this )
    goto LABEL_162;
  UILabel__set_text((UILabel_o *)this, (System_String_o *)StringLiteral_923/*"-"*/, 0);
  this = (RecoverItemComponent_o *)v12->fields.currentNumLb;
  if ( !this )
    goto LABEL_162;
  UILabel__set_text((UILabel_o *)this, (System_String_o *)StringLiteral_923/*"-"*/, 0);
  this = (RecoverItemComponent_o *)v12->fields.spendNumLb;
  if ( !this )
    goto LABEL_162;
  UILabel__set_text((UILabel_o *)this, (System_String_o *)StringLiteral_923/*"-"*/, 0);
  this = (RecoverItemComponent_o *)v12->fields.itemDetailLb;
  if ( !this )
    goto LABEL_162;
  UILabel__set_text((UILabel_o *)this, (System_String_o *)StringLiteral_923/*"-"*/, 0);
  currentInfoLb = v12->fields.currentInfoLb;
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v31, v32);
  this = (RecoverItemComponent_o *)LocalizationManager__Get((System_String_o *)StringLiteral_4080/*"CURRENT_NUM_TXT"*/, 0);
  if ( !currentInfoLb )
    goto LABEL_162;
  UILabel__set_text(currentInfoLb, (System_String_o *)this, 0);
  spendInfoLb = v12->fields.spendInfoLb;
  this = (RecoverItemComponent_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12795/*"SPEND_NUM_TXT"*/, 0);
  if ( !spendInfoLb )
    goto LABEL_162;
  UILabel__set_text(spendInfoLb, (System_String_o *)this, 0);
  currentType = v12->fields.currentType;
  switch ( currentType )
  {
    case 1:
      this = (RecoverItemComponent_o *)v12->fields.itemIconInfo;
      if ( !this )
        goto LABEL_162;
      this = (RecoverItemComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
      if ( !this )
        goto LABEL_162;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
      this = (RecoverItemComponent_o *)v12->fields.cmdSpellBg;
      if ( !this )
        goto LABEL_162;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0);
      v61 = v12->fields.currentInfoLb;
      if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v59, v60);
      this = (RecoverItemComponent_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3671/*"CMDSPELL_CURRENT_NUM_TXT"*/, 0);
      if ( !v61 )
        goto LABEL_162;
      UILabel__set_text(v61, (System_String_o *)this, 0);
      v62 = v12->fields.spendInfoLb;
      this = (RecoverItemComponent_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3672/*"CMDSPELL_SPEND_NUM_TXT"*/, 0);
      if ( !v62 )
        goto LABEL_162;
      UILabel__set_text(v62, (System_String_o *)this, 0);
      this = (RecoverItemComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !this )
        goto LABEL_162;
      this = (RecoverItemComponent_o *)DataManager__GetMasterData_object_(
                                         (DataManager_o *)this,
                                         (const MethodInfo_385636C *)Method_DataManager_GetMasterData_CommandSpellMaster___);
      if ( !this )
        goto LABEL_162;
      v63 = DataMasterBase_object__object__int___GetEntity(
              (DataMasterBase_TMaster__TEntity__PKType__o *)this,
              v12->fields.targetId,
              (const MethodInfo_3F10B30 *)Method_DataMasterBase_CommandSpellMaster__CommandSpellEntity__int__GetEntity__);
      if ( !v63 )
        break;
      v64 = (CommandSpellEntity_o *)v63;
      this = (RecoverItemComponent_o *)v12->fields.cmdSpellIcon;
      if ( !this )
        goto LABEL_162;
      CommandSpellIconComponent__SetData((CommandSpellIconComponent_o *)this, v12->fields.userEntity, 0);
      this = (RecoverItemComponent_o *)v12->fields.itemNameLb;
      if ( !this )
        goto LABEL_162;
      UILabel__set_text((UILabel_o *)this, v64->fields.name, 0);
      this = *p_userEntity;
      if ( !*p_userEntity )
        goto LABEL_162;
      CommandSpell = UserGameEntity__getCommandSpell((UserGameEntity_o *)this, 0);
      consume = v64->fields.consume;
      v138 = CommandSpell;
      *p_spendNum = consume;
      this = (RecoverItemComponent_o *)CommandSpellEntity__getValues(v64, 0);
      if ( !this )
        goto LABEL_162;
      if ( LODWORD(this->fields.m_CancellationTokenSource) )
      {
        type = v64->fields.type;
        itemIconInfo = this->fields.itemIconInfo;
        if ( type == 3 )
        {
          if ( !itemIconInfo )
            goto LABEL_162;
          if ( !LODWORD(itemIconInfo->fields.m_CancellationTokenSource) )
            goto LABEL_163;
          v70 = (float)((float)SLODWORD(itemIconInfo->fields.backSprite) / 1000.0) * 100.0;
          if ( v70 == INFINITY )
            v71 = 0x80000000;
          else
            v71 = (int)v70;
          v12->fields.apRcvRate = v71;
          v72 = (float)SLODWORD(itemIconInfo->fields.backSprite) / 1000.0;
          usrMaxAp = (float)v12->fields.usrMaxAp;
          if ( !byte_596A15B )
          {
            sub_2213A60(&System_Math_TypeInfo);
            byte_596A15B = 1;
          }
          v74 = v72 * usrMaxAp;
          if ( !*(&System_Math_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, data, v67);
          v75 = vcvtps_s32_f32(v74);
          v76 = LocalizationManager_TypeInfo;
          if ( ceilf(v74) == INFINITY )
            v77 = 0x80000000;
          else
            v77 = v75;
          v12->fields.recvApNum = v77;
          if ( !*(&v76->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(v76, data, v67);
          v78 = LocalizationManager__Get((System_String_o *)StringLiteral_3670/*"CMDSPELL_CURRENT_NUM"*/, 0);
          spendNum = v12->fields.spendNum;
          v79 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &spendNum);
          v80 = (Il2CppObject *)System_String__Format(v78, v79, 0);
          itemDetailLb = v12->fields.itemDetailLb;
          v82 = LocalizationManager__Get((System_String_o *)StringLiteral_2127/*"AP_RECOVER_NUM_TXT"*/, 0);
          apRcvRate = v12->fields.apRcvRate;
          v83 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &apRcvRate);
          recvApNum = v12->fields.recvApNum;
          v84 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &recvApNum);
          this = (RecoverItemComponent_o *)System_String__Format_75697948(v82, v80, v83, v84, 0);
          if ( !itemDetailLb )
            goto LABEL_162;
          UILabel__set_text(itemDetailLb, (System_String_o *)this, 0);
          type = v64->fields.type;
        }
        if ( type != 4 )
        {
LABEL_157:
          currentNumLb = v12->fields.currentNumLb;
          this = (RecoverItemComponent_o *)System_Int32__ToString((int32_t)&v138, 0);
          if ( currentNumLb )
          {
            UILabel__set_text(currentNumLb, (System_String_o *)this, 0);
            spendNumLb = v12->fields.spendNumLb;
            this = (RecoverItemComponent_o *)System_Int32__ToString((int)v12 + 128, 0);
            if ( spendNumLb )
            {
              UILabel__set_text(spendNumLb, (System_String_o *)this, 0);
              v54 = v138 >= v12->fields.spendNum;
              v53 = v12->fields.recvApNum + v12->fields.usrCurrentAp;
              goto LABEL_160;
            }
          }
LABEL_162:
          sub_2213CDC(this, data);
        }
        if ( !itemIconInfo )
          goto LABEL_162;
        if ( LODWORD(itemIconInfo->fields.m_CancellationTokenSource) )
        {
          backSprite = (int)itemIconInfo->fields.backSprite;
          if ( needAp < 1 )
          {
            v88 = *p_spendNum;
          }
          else
          {
            if ( (float)((float)(needAp - v12->fields.usrCurrentAp) / (float)backSprite) > 1.0 )
              v86 = (float)(needAp - v12->fields.usrCurrentAp) / (float)backSprite;
            else
              v86 = 1.0;
            if ( !byte_596A15B )
            {
              sub_2213A60(&System_Math_TypeInfo);
              byte_596A15B = 1;
            }
            if ( !*(&System_Math_TypeInfo->_2.cctor_finished + 1) )
              j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, data, v67);
            v87 = vcvtps_s32_f32(v86);
            if ( ceilf(v86) == INFINITY )
              v88 = 0x80000000;
            else
              v88 = v87;
            *p_spendNum = v88;
          }
          v125 = LocalizationManager_TypeInfo;
          v12->fields.recvApNum = v88 * backSprite;
          if ( !*(&v125->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(v125, data, v67);
          v126 = LocalizationManager__Get((System_String_o *)StringLiteral_3670/*"CMDSPELL_CURRENT_NUM"*/, 0);
          spendNum = v12->fields.spendNum;
          v127 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &spendNum);
          v128 = (Il2CppObject *)System_String__Format(v126, v127, 0);
          v129 = v12->fields.itemDetailLb;
          v130 = LocalizationManager__Get((System_String_o *)StringLiteral_2001/*"ADD_RECOVER_CMDSPELL_TXT"*/, 0);
          apRcvRate = v12->fields.recvApNum;
          v131 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &apRcvRate);
          this = (RecoverItemComponent_o *)System_String__Format_75697880(v130, v128, v131, 0);
          if ( !v129 )
            goto LABEL_162;
          UILabel__set_text(v129, (System_String_o *)this, 0);
          v12->fields.isAddAp = 1;
          goto LABEL_157;
        }
      }
LABEL_163:
      sub_2213CE4(this);
    case 3:
      this = (RecoverItemComponent_o *)v12->fields.itemIconInfo;
      if ( !this )
        goto LABEL_162;
      this = (RecoverItemComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
      if ( !this )
        goto LABEL_162;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0);
      this = (RecoverItemComponent_o *)v12->fields.cmdSpellBg;
      if ( !this )
        goto LABEL_162;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
      RecvItemData = RecoverEntity__getRecvItemData(data, 0);
      if ( RecvItemData )
      {
        v56 = RecvItemData;
        this = (RecoverItemComponent_o *)v12->fields.itemIconInfo;
        if ( !this )
          goto LABEL_162;
        ItemIconComponent__SetItemImage_47882600(
          (ItemIconComponent_o *)this,
          v56->fields.imageId,
          v56->fields.bgImageId,
          v56->fields.type,
          0,
          1,
          0);
        this = (RecoverItemComponent_o *)v12->fields.itemIconInfo;
        if ( !this )
          goto LABEL_162;
        this = (RecoverItemComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
        if ( !this )
          goto LABEL_162;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0);
        this = (RecoverItemComponent_o *)v12->fields.itemNameLb;
        if ( !this )
          goto LABEL_162;
        UILabel__set_text((UILabel_o *)this, v56->fields.name, 0);
        *p_spendNum = 1;
        this = (RecoverItemComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !this )
          goto LABEL_162;
        this = (RecoverItemComponent_o *)DataManager__GetMasterData_object_(
                                           (DataManager_o *)this,
                                           (const MethodInfo_385636C *)Method_DataManager_GetMasterData_UserItemMaster___);
        if ( !*p_userEntity || !this )
          goto LABEL_162;
        this = (RecoverItemComponent_o *)UserItemMaster__TryGetEntity(
                                           (UserItemMaster_o *)this,
                                           &entity,
                                           (*p_userEntity)->fields.m_CachedPtr,
                                           v12->fields.targetId,
                                           0);
        if ( ((unsigned __int8)this & 1) != 0 )
        {
          if ( !entity )
            goto LABEL_162;
          num = entity->fields.num;
        }
        else
        {
          num = 0;
        }
        v89 = v56->fields.type;
        if ( v89 == 3 )
        {
          v90 = BalanceConfig_TypeInfo;
          if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
          {
            j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, data, v57);
            v90 = BalanceConfig_TypeInfo;
          }
          v91 = (unsigned __int8)byte_596A15B;
          v92 = (float)v12->fields.usrMaxAp;
          v12->fields.spendNum = v90->static_fields->SpendApRecvItemNum;
          v93 = (float)v56->fields.value / 1000.0;
          if ( (float)(v93 * 100.0) == INFINITY )
            v94 = 0x80000000;
          else
            v94 = (int)(float)(v93 * 100.0);
          v12->fields.apRcvRate = v94;
          if ( !v91 )
          {
            sub_2213A60(&System_Math_TypeInfo);
            byte_596A15B = 1;
          }
          v95 = v93 * v92;
          if ( !*(&System_Math_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, data, v57);
          v96 = vcvtps_s32_f32(v95);
          if ( ceilf(v95) == INFINITY )
            v97 = 0x80000000;
          else
            v97 = v96;
          v12->fields.recvApNum = v97;
          if ( needAp >= 1 )
          {
            if ( (float)((float)(needAp - v12->fields.usrCurrentAp) / (float)v97) > 1.0 )
              v98 = (float)(needAp - v12->fields.usrCurrentAp) / (float)v97;
            else
              v98 = 1.0;
            if ( !byte_596A15B )
            {
              sub_2213A60(&System_Math_TypeInfo);
              byte_596A15B = 1;
            }
            if ( !*(&System_Math_TypeInfo->_2.cctor_finished + 1) )
              j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, data, v57);
            v99 = vcvtps_s32_f32(v98);
            v100 = v12->fields.apRcvRate;
            v101 = v12->fields.recvApNum;
            if ( ceilf(v98) == INFINITY )
              v102 = 0x80000000;
            else
              v102 = v99;
            v12->fields.spendNum = v102;
            v12->fields.apRcvRate = v100 * v102;
            v12->fields.recvApNum = v101 * v102;
          }
          if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, data, v57);
          v103 = LocalizationManager__Get((System_String_o *)StringLiteral_15412/*"UNIT_INFO"*/, 0);
          spendNum = v12->fields.spendNum;
          v104 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &spendNum);
          v105 = (Il2CppObject *)System_String__Format(v103, v104, 0);
          v106 = v12->fields.itemDetailLb;
          v107 = LocalizationManager__Get((System_String_o *)StringLiteral_2127/*"AP_RECOVER_NUM_TXT"*/, 0);
          apRcvRate = v12->fields.apRcvRate;
          v108 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &apRcvRate);
          recvApNum = v12->fields.recvApNum;
          v109 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &recvApNum);
          this = (RecoverItemComponent_o *)System_String__Format_75697948(v107, v105, v108, v109, 0);
          if ( !v106 )
            goto LABEL_162;
          UILabel__set_text(v106, (System_String_o *)this, 0);
          v89 = v56->fields.type;
        }
        if ( v89 == 4 )
        {
          value = v56->fields.value;
          if ( needAp < 1 )
          {
            v113 = 1;
          }
          else
          {
            if ( (float)((float)(needAp - v12->fields.usrCurrentAp) / (float)value) > 1.0 )
              v111 = (float)(needAp - v12->fields.usrCurrentAp) / (float)value;
            else
              v111 = 1.0;
            if ( !byte_596A15B )
            {
              sub_2213A60(&System_Math_TypeInfo);
              byte_596A15B = 1;
            }
            if ( !*(&System_Math_TypeInfo->_2.cctor_finished + 1) )
              j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, data, v57);
            v112 = vcvtps_s32_f32(v111);
            if ( ceilf(v111) == INFINITY )
              v113 = 0x80000000;
            else
              v113 = v112;
            value *= v113;
          }
          v114 = LocalizationManager_TypeInfo;
          *p_spendNum = v113;
          v12->fields.recvApNum = value;
          if ( !*(&v114->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(v114, data, v57);
          v115 = LocalizationManager__Get((System_String_o *)StringLiteral_15412/*"UNIT_INFO"*/, 0);
          spendNum = v12->fields.spendNum;
          v116 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &spendNum);
          v117 = (Il2CppObject *)System_String__Format(v115, v116, 0);
          v118 = v12->fields.itemDetailLb;
          v119 = LocalizationManager__Get((System_String_o *)StringLiteral_2002/*"ADD_RECOVER_NUM_TXT"*/, 0);
          apRcvRate = v12->fields.recvApNum;
          v120 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &apRcvRate);
          this = (RecoverItemComponent_o *)System_String__Format_75697880(v119, v117, v120, 0);
          if ( !v118 )
            goto LABEL_162;
          UILabel__set_text(v118, (System_String_o *)this, 0);
          v12->fields.isAddAp = 1;
        }
        v121 = v12->fields.currentNumLb;
        spendNum = num;
        v122 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &spendNum);
        this = (RecoverItemComponent_o *)System_String__Format((System_String_o *)StringLiteral_26474/*"{0:N0}"*/, v122, 0);
        if ( !v121 )
          goto LABEL_162;
        UILabel__set_text(v121, (System_String_o *)this, 0);
        v123 = v12->fields.spendNumLb;
        this = (RecoverItemComponent_o *)System_Int32__ToString((int)v12 + 128, 0);
        if ( !v123 )
          goto LABEL_162;
        UILabel__set_text(v123, (System_String_o *)this, 0);
        v124 = num >= v12->fields.spendNum;
        v12->fields.recvSum = v12->fields.recvApNum + v12->fields.usrCurrentAp;
        v12->fields.isEnableSelect = v124;
        v12->fields.targetId = data->fields.id;
      }
      break;
    case 2:
      this = (RecoverItemComponent_o *)v12->fields.itemIconInfo;
      if ( this )
      {
        this = (RecoverItemComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
        if ( this )
        {
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0);
          this = (RecoverItemComponent_o *)v12->fields.cmdSpellBg;
          if ( this )
          {
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
            this = (RecoverItemComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
            if ( this )
            {
              this = (RecoverItemComponent_o *)DataManager__GetMasterData_object_(
                                                 (DataManager_o *)this,
                                                 (const MethodInfo_385636C *)Method_DataManager_GetMasterData_ItemMaster___);
              if ( this )
              {
                this = (RecoverItemComponent_o *)ItemMaster__GetEntityByType((ItemMaster_o *)this, 2, 0);
                if ( this )
                {
                  v36 = this;
                  this = (RecoverItemComponent_o *)v12->fields.itemIconInfo;
                  if ( this )
                  {
                    ItemIconComponent__SetItemImage_47882600(
                      (ItemIconComponent_o *)this,
                      (int32_t)v36->fields.cmdSpellBg,
                      HIDWORD(v36->fields.cmdSpellBg),
                      (int32_t)v36->fields.cmdSpellIcon,
                      0,
                      1,
                      0);
                    this = (RecoverItemComponent_o *)v12->fields.itemIconInfo;
                    if ( this )
                    {
                      this = (RecoverItemComponent_o *)UnityEngine_Component__get_gameObject(
                                                         (UnityEngine_Component_o *)this,
                                                         0);
                      if ( this )
                      {
                        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0);
                        this = (RecoverItemComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
                        if ( this )
                        {
                          this = (RecoverItemComponent_o *)DataManager__GetMasterData_object_(
                                                             (DataManager_o *)this,
                                                             (const MethodInfo_385636C *)Method_DataManager_GetMasterData_StoneShopMaster___);
                          if ( this )
                          {
                            this = (RecoverItemComponent_o *)DataMasterBase_object__object__int___GetEntity(
                                                               (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                                               v12->fields.targetId,
                                                               (const MethodInfo_3F10B30 *)Method_DataMasterBase_StoneShopMaster__StoneShopEntity__int__GetEntity__);
                            if ( v12->fields.itemNameLb )
                            {
                              v37 = this;
                              UILabel__set_text(
                                v12->fields.itemNameLb,
                                (System_String_o *)v36->fields.m_CancellationTokenSource,
                                0);
                              if ( *p_userEntity )
                              {
                                v38 = (int32_t)(*p_userEntity)->fields.userEntity;
                                if ( v37 )
                                  *p_spendNum = HIDWORD(v37->fields.cmdSpellBg);
                                v39 = v12->fields.currentNumLb;
                                spendNum = v38;
                                v40 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &spendNum);
                                this = (RecoverItemComponent_o *)System_String__Format(
                                                                   (System_String_o *)StringLiteral_26474/*"{0:N0}"*/,
                                                                   v40,
                                                                   0);
                                if ( v39 )
                                {
                                  UILabel__set_text(v39, (System_String_o *)this, 0);
                                  v41 = v12->fields.spendNumLb;
                                  this = (RecoverItemComponent_o *)System_Int32__ToString((int)v12 + 128, 0);
                                  if ( v41 )
                                  {
                                    UILabel__set_text(v41, (System_String_o *)this, 0);
                                    RecoverItemComponent__AttachStoneCountRefreshComponent(v12, v42);
                                    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
                                      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v43, v44);
                                    v45 = LocalizationManager__Get((System_String_o *)StringLiteral_15412/*"UNIT_INFO"*/, 0);
                                    apRcvRate = v12->fields.spendNum;
                                    v46 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &apRcvRate);
                                    v47 = (Il2CppObject *)System_String__Format(v45, v46, 0);
                                    v48 = v12->fields.itemDetailLb;
                                    v49 = LocalizationManager__Get((System_String_o *)StringLiteral_2127/*"AP_RECOVER_NUM_TXT"*/, 0);
                                    recvApNum = v12->fields.apRcvRate;
                                    v50 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &recvApNum);
                                    v134 = v12->fields.recvApNum;
                                    v51 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &v134);
                                    this = (RecoverItemComponent_o *)System_String__Format_75697948(
                                                                       v49,
                                                                       v47,
                                                                       v50,
                                                                       v51,
                                                                       0);
                                    if ( v48 )
                                    {
                                      UILabel__set_text(v48, (System_String_o *)this, 0);
                                      this = *p_userEntity;
                                      if ( *p_userEntity )
                                      {
                                        PayableStoneNum = UserGameEntity__get_PayableStoneNum(
                                                            (UserGameEntity_o *)this,
                                                            0);
                                        v53 = v12->fields.usrMaxAp + v12->fields.usrCurrentAp;
                                        v54 = PayableStoneNum >= v12->fields.spendNum;
LABEL_160:
                                        v12->fields.isEnableSelect = v54;
                                        v12->fields.recvSum = v53;
                                        break;
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
          }
        }
      }
      goto LABEL_162;
  }
  RecoverItemComponent__setEnableSelectItem(v12, (const MethodInfo *)data);
}


void RecoverItemComponent__setEnableSelectItem(RecoverItemComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *maskImg; // x0

  if ( !this->fields.isEnableSelect )
  {
    maskImg = this->fields.maskImg;
    if ( !maskImg )
      sub_2213CDC(0, method);
    UnityEngine_GameObject__SetActive(maskImg, 1, 0);
  }
}


// local variable allocation has failed, the output may be wrong!
void RecoverItemComponent__setRPRecvItemInfo(
        RecoverItemComponent_o *this,
        RecoverEntity_o *data,
        int32_t needRp,
        RecoverDlgComponent_o *dlg,
        RecoverItemComponent_CallbackFunc_o *callback,
        const MethodInfo *method)
{
  bool v6; // w6
  bool v7; // w7
  RecoverItemComponent_o *v12; // x19
  int32_t targetId; // w8
  System_String_o *v14; // x2
  System_String_o *v15; // x3
  int32_t v16; // w4
  int32_t v17; // w5
  bool v18; // w6
  bool v19; // w7
  UserGameEntity_o *SelfUserGame; // x0
  RecoverItemComponent_o **p_userEntity; // x21
  System_String_o *v22; // x2
  System_String_o *v23; // x3
  int32_t v24; // w4
  int32_t v25; // w5
  bool v26; // w6
  bool v27; // w7
  __int64 v28; // x2
  int32_t Rp; // w8
  BalanceConfig_c *v30; // x0
  int32_t UerGameRpMax; // w8
  unsigned int *p_spendNum; // x20
  __int64 v33; // x1
  __int64 v34; // x2
  UILabel_o *currentInfoLb; // x24
  UILabel_o *spendInfoLb; // x24
  int32_t currentType; // w8
  RecoverItemComponent_o *v38; // x22
  RecoverItemComponent_o *v39; // x23
  int32_t userEntity; // w8
  UILabel_o *v41; // x22
  Il2CppObject *v42; // x0
  UILabel_o *v43; // x22
  const MethodInfo *v44; // x1
  __int64 v45; // x1
  __int64 v46; // x2
  System_String_o *v47; // x20
  Il2CppObject *v48; // x0
  Il2CppObject *v49; // x22
  UILabel_o *v50; // x20
  System_String_o *v51; // x23
  Il2CppObject *v52; // x0
  int32_t PayableStoneNum; // w0
  int v54; // w9
  bool v55; // w8
  ItemEntity_o *RecvItemData; // x0
  ItemEntity_o *v57; // x24
  __int64 v58; // x1
  __int64 v59; // x2
  UserItemEntity_o *v60; // x8
  int32_t v61; // w26
  __int64 v62; // x1
  __int64 v63; // x2
  UILabel_o *v64; // x22
  UILabel_o *v65; // x22
  Il2CppObject *v66; // x0
  CommandSpellEntity_o *v67; // x22
  int32_t CommandSpell; // w0
  int32_t consume; // w8
  __int64 v70; // x2
  struct ItemIconComponent_o *itemIconInfo; // x8
  int backSprite; // w21
  float v73; // s8
  unsigned int v74; // w9
  unsigned int v75; // w8
  int value; // w21
  float v77; // s8
  unsigned int v78; // w9
  unsigned int v79; // w8
  LocalizationManager_c *v80; // x0
  System_String_o *v81; // x21
  Il2CppObject *v82; // x0
  Il2CppObject *v83; // x23
  UILabel_o *v84; // x21
  System_String_o *v85; // x24
  Il2CppObject *v86; // x0
  UILabel_o *v87; // x21
  Il2CppObject *v88; // x0
  UILabel_o *v89; // x21
  bool v90; // w8
  LocalizationManager_c *v91; // x0
  System_String_o *v92; // x21
  Il2CppObject *v93; // x0
  Il2CppObject *v94; // x22
  UILabel_o *itemDetailLb; // x21
  System_String_o *v96; // x23
  Il2CppObject *v97; // x0
  UILabel_o *currentNumLb; // x21
  UILabel_o *spendNumLb; // x21
  int32_t v100; // [xsp+8h] [xbp-68h] BYREF
  int32_t recvRpNum; // [xsp+Ch] [xbp-64h] BYREF
  int32_t spendNum; // [xsp+10h] [xbp-60h] BYREF
  int32_t v103; // [xsp+14h] [xbp-5Ch] BYREF
  UserItemEntity_o *entity; // [xsp+18h] [xbp-58h] BYREF

  v12 = this;
  if ( (byte_596A8B7 & 1) == 0 )
  {
    sub_2213A60(&BalanceConfig_TypeInfo);
    sub_2213A60(&Method_DataManager_GetMasterData_CommandSpellMaster___);
    sub_2213A60(&Method_DataManager_GetMasterData_ItemMaster___);
    sub_2213A60(&Method_DataManager_GetMasterData_StoneShopMaster___);
    sub_2213A60(&Method_DataManager_GetMasterData_UserItemMaster___);
    sub_2213A60(&Method_DataMasterBase_CommandSpellMaster__CommandSpellEntity__int__GetEntity__);
    sub_2213A60(&Method_DataMasterBase_StoneShopMaster__StoneShopEntity__int__GetEntity__);
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_2213A60(&StringLiteral_3670/*"CMDSPELL_CURRENT_NUM"*/);
    sub_2213A60(&StringLiteral_3672/*"CMDSPELL_SPEND_NUM_TXT"*/);
    sub_2213A60(&StringLiteral_26474/*"{0:N0}"*/);
    sub_2213A60(&StringLiteral_923/*"-"*/);
    sub_2213A60(&StringLiteral_15412/*"UNIT_INFO"*/);
    sub_2213A60(&StringLiteral_12795/*"SPEND_NUM_TXT"*/);
    sub_2213A60(&StringLiteral_4080/*"CURRENT_NUM_TXT"*/);
    sub_2213A60(&StringLiteral_11653/*"RP_RECOVER_CMDSPELL_TXT"*/);
    sub_2213A60(&StringLiteral_11655/*"RP_RECOVER_NUM_TXT"*/);
    this = (RecoverItemComponent_o *)sub_2213A60(&StringLiteral_3671/*"CMDSPELL_CURRENT_NUM_TXT"*/);
    byte_596A8B7 = 1;
  }
  entity = 0;
  v103 = 0;
  if ( !data )
    goto LABEL_112;
  v12->fields.currentType = data->fields.recoverType;
  v12->fields.recvTarget = data->fields.target;
  targetId = data->fields.targetId;
  v12->fields.isEnableSelect = 0;
  v12->fields.dialog = dlg;
  v12->fields.targetId = targetId;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&v12->fields.dialog,
    (int32_t)dlg,
    *(System_String_o **)&needRp,
    (System_String_o *)dlg,
    (int32_t)callback,
    (int32_t)method,
    v6,
    v7);
  v12->fields.callbackFunc = callback;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&v12->fields.callbackFunc,
    (int32_t)callback,
    v14,
    v15,
    v16,
    v17,
    v18,
    v19);
  this = (RecoverItemComponent_o *)v12->fields.maskImg;
  if ( !this )
    goto LABEL_112;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
  SelfUserGame = UserGameMaster__getSelfUserGame(0);
  v12->fields.userEntity = SelfUserGame;
  p_userEntity = (RecoverItemComponent_o **)&v12->fields.userEntity;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&v12->fields.userEntity,
    (int32_t)SelfUserGame,
    v22,
    v23,
    v24,
    v25,
    v26,
    v27);
  this = (RecoverItemComponent_o *)v12->fields.userEntity;
  if ( !this )
    goto LABEL_112;
  Rp = UserGameEntity__getRp((UserGameEntity_o *)this, 0);
  v30 = BalanceConfig_TypeInfo;
  v12->fields.usrCurrentRp = Rp;
  if ( !*(&v30->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(v30, data, v28);
    v30 = BalanceConfig_TypeInfo;
  }
  UerGameRpMax = v30->static_fields->UerGameRpMax;
  v12->fields.spendNum = 1;
  p_spendNum = (unsigned int *)&v12->fields.spendNum;
  this = (RecoverItemComponent_o *)v12->fields.itemNameLb;
  v12->fields.isAp = 0;
  v12->fields.usrMaxRp = UerGameRpMax;
  v12->fields.recvRpNum = UerGameRpMax;
  if ( !this )
    goto LABEL_112;
  UILabel__set_text((UILabel_o *)this, (System_String_o *)StringLiteral_923/*"-"*/, 0);
  this = (RecoverItemComponent_o *)v12->fields.currentNumLb;
  if ( !this )
    goto LABEL_112;
  UILabel__set_text((UILabel_o *)this, (System_String_o *)StringLiteral_923/*"-"*/, 0);
  this = (RecoverItemComponent_o *)v12->fields.spendNumLb;
  if ( !this )
    goto LABEL_112;
  UILabel__set_text((UILabel_o *)this, (System_String_o *)StringLiteral_923/*"-"*/, 0);
  this = (RecoverItemComponent_o *)v12->fields.itemDetailLb;
  if ( !this )
    goto LABEL_112;
  UILabel__set_text((UILabel_o *)this, (System_String_o *)StringLiteral_923/*"-"*/, 0);
  currentInfoLb = v12->fields.currentInfoLb;
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v33, v34);
  this = (RecoverItemComponent_o *)LocalizationManager__Get((System_String_o *)StringLiteral_4080/*"CURRENT_NUM_TXT"*/, 0);
  if ( !currentInfoLb )
    goto LABEL_112;
  UILabel__set_text(currentInfoLb, (System_String_o *)this, 0);
  spendInfoLb = v12->fields.spendInfoLb;
  this = (RecoverItemComponent_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12795/*"SPEND_NUM_TXT"*/, 0);
  if ( !spendInfoLb )
    goto LABEL_112;
  UILabel__set_text(spendInfoLb, (System_String_o *)this, 0);
  currentType = v12->fields.currentType;
  switch ( currentType )
  {
    case 1:
      this = (RecoverItemComponent_o *)v12->fields.itemIconInfo;
      if ( !this )
        goto LABEL_112;
      this = (RecoverItemComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
      if ( !this )
        goto LABEL_112;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
      this = (RecoverItemComponent_o *)v12->fields.cmdSpellBg;
      if ( !this )
        goto LABEL_112;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0);
      v64 = v12->fields.currentInfoLb;
      if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v62, v63);
      this = (RecoverItemComponent_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3671/*"CMDSPELL_CURRENT_NUM_TXT"*/, 0);
      if ( !v64 )
        goto LABEL_112;
      UILabel__set_text(v64, (System_String_o *)this, 0);
      v65 = v12->fields.spendInfoLb;
      this = (RecoverItemComponent_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3672/*"CMDSPELL_SPEND_NUM_TXT"*/, 0);
      if ( !v65 )
        goto LABEL_112;
      UILabel__set_text(v65, (System_String_o *)this, 0);
      this = (RecoverItemComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !this )
        goto LABEL_112;
      this = (RecoverItemComponent_o *)DataManager__GetMasterData_object_(
                                         (DataManager_o *)this,
                                         (const MethodInfo_385636C *)Method_DataManager_GetMasterData_CommandSpellMaster___);
      if ( !this )
        goto LABEL_112;
      v66 = DataMasterBase_object__object__int___GetEntity(
              (DataMasterBase_TMaster__TEntity__PKType__o *)this,
              v12->fields.targetId,
              (const MethodInfo_3F10B30 *)Method_DataMasterBase_CommandSpellMaster__CommandSpellEntity__int__GetEntity__);
      if ( v66 )
      {
        v67 = (CommandSpellEntity_o *)v66;
        this = (RecoverItemComponent_o *)v12->fields.cmdSpellIcon;
        if ( this )
        {
          CommandSpellIconComponent__SetData((CommandSpellIconComponent_o *)this, v12->fields.userEntity, 0);
          this = (RecoverItemComponent_o *)v12->fields.itemNameLb;
          if ( this )
          {
            UILabel__set_text((UILabel_o *)this, v67->fields.name, 0);
            this = *p_userEntity;
            if ( *p_userEntity )
            {
              CommandSpell = UserGameEntity__getCommandSpell((UserGameEntity_o *)this, 0);
              consume = v67->fields.consume;
              v103 = CommandSpell;
              *p_spendNum = consume;
              this = (RecoverItemComponent_o *)CommandSpellEntity__getValues(v67, 0);
              if ( this )
              {
                if ( !LODWORD(this->fields.m_CancellationTokenSource) )
                  goto LABEL_113;
                itemIconInfo = this->fields.itemIconInfo;
                if ( !itemIconInfo )
                  goto LABEL_112;
                if ( !LODWORD(itemIconInfo->fields.m_CancellationTokenSource) )
LABEL_113:
                  sub_2213CE4(this);
                backSprite = (int)itemIconInfo->fields.backSprite;
                if ( needRp < 1 )
                {
                  v75 = *p_spendNum;
                }
                else
                {
                  if ( (float)((float)(needRp - v12->fields.usrCurrentRp) / (float)backSprite) > 1.0 )
                    v73 = (float)(needRp - v12->fields.usrCurrentRp) / (float)backSprite;
                  else
                    v73 = 1.0;
                  if ( !byte_596A15B )
                  {
                    sub_2213A60(&System_Math_TypeInfo);
                    byte_596A15B = 1;
                  }
                  if ( !*(&System_Math_TypeInfo->_2.cctor_finished + 1) )
                    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, data, v70);
                  v74 = vcvtps_s32_f32(v73);
                  if ( ceilf(v73) == INFINITY )
                    v75 = 0x80000000;
                  else
                    v75 = v74;
                  *p_spendNum = v75;
                }
                v91 = LocalizationManager_TypeInfo;
                v12->fields.recvRpNum = v75 * backSprite;
                if ( !*(&v91->_2.cctor_finished + 1) )
                  j_il2cpp_runtime_class_init_0(v91, data, v70);
                v92 = LocalizationManager__Get((System_String_o *)StringLiteral_3670/*"CMDSPELL_CURRENT_NUM"*/, 0);
                spendNum = v12->fields.spendNum;
                v93 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &spendNum);
                v94 = (Il2CppObject *)System_String__Format(v92, v93, 0);
                itemDetailLb = v12->fields.itemDetailLb;
                v96 = LocalizationManager__Get((System_String_o *)StringLiteral_11653/*"RP_RECOVER_CMDSPELL_TXT"*/, 0);
                recvRpNum = v12->fields.recvRpNum;
                v97 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &recvRpNum);
                this = (RecoverItemComponent_o *)System_String__Format_75697880(v96, v94, v97, 0);
                if ( itemDetailLb )
                {
                  UILabel__set_text(itemDetailLb, (System_String_o *)this, 0);
                  currentNumLb = v12->fields.currentNumLb;
                  this = (RecoverItemComponent_o *)System_Int32__ToString((int32_t)&v103, 0);
                  if ( currentNumLb )
                  {
                    UILabel__set_text(currentNumLb, (System_String_o *)this, 0);
                    spendNumLb = v12->fields.spendNumLb;
                    this = (RecoverItemComponent_o *)System_Int32__ToString((int)v12 + 128, 0);
                    if ( spendNumLb )
                    {
                      UILabel__set_text(spendNumLb, (System_String_o *)this, 0);
                      v55 = v103 >= v12->fields.spendNum;
                      v54 = v12->fields.recvRpNum + v12->fields.usrCurrentRp;
                      goto LABEL_110;
                    }
                  }
                }
              }
            }
          }
        }
LABEL_112:
        sub_2213CDC(this, data);
      }
      break;
    case 3:
      this = (RecoverItemComponent_o *)v12->fields.itemIconInfo;
      if ( !this )
        goto LABEL_112;
      this = (RecoverItemComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
      if ( !this )
        goto LABEL_112;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0);
      this = (RecoverItemComponent_o *)v12->fields.cmdSpellBg;
      if ( !this )
        goto LABEL_112;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
      RecvItemData = RecoverEntity__getRecvItemData(data, 0);
      if ( RecvItemData )
      {
        v57 = RecvItemData;
        this = (RecoverItemComponent_o *)v12->fields.itemIconInfo;
        if ( !this )
          goto LABEL_112;
        ItemIconComponent__SetItemImage_47882600(
          (ItemIconComponent_o *)this,
          v57->fields.imageId,
          v57->fields.bgImageId,
          v57->fields.type,
          0,
          1,
          0);
        this = (RecoverItemComponent_o *)v12->fields.itemIconInfo;
        if ( !this )
          goto LABEL_112;
        this = (RecoverItemComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
        if ( !this )
          goto LABEL_112;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0);
        this = (RecoverItemComponent_o *)v12->fields.itemNameLb;
        if ( !this )
          goto LABEL_112;
        UILabel__set_text((UILabel_o *)this, v57->fields.name, 0);
        this = (RecoverItemComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !this )
          goto LABEL_112;
        this = (RecoverItemComponent_o *)DataManager__GetMasterData_object_(
                                           (DataManager_o *)this,
                                           (const MethodInfo_385636C *)Method_DataManager_GetMasterData_UserItemMaster___);
        if ( !*p_userEntity || !this )
          goto LABEL_112;
        UserItemMaster__TryGetEntity(
          (UserItemMaster_o *)this,
          &entity,
          (*p_userEntity)->fields.m_CachedPtr,
          v12->fields.targetId,
          0);
        v60 = entity;
        v12->fields.spendNum = 1;
        v61 = v60 ? v60->fields.num : 0;
        value = v57->fields.value;
        if ( needRp < 1 )
        {
          v79 = 1;
        }
        else
        {
          if ( (float)((float)(needRp - v12->fields.usrCurrentRp) / (float)value) > 1.0 )
            v77 = (float)(needRp - v12->fields.usrCurrentRp) / (float)value;
          else
            v77 = 1.0;
          if ( !byte_596A15B )
          {
            sub_2213A60(&System_Math_TypeInfo);
            byte_596A15B = 1;
          }
          if ( !*(&System_Math_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, v58, v59);
          v78 = vcvtps_s32_f32(v77);
          v79 = ceilf(v77) == INFINITY ? 0x80000000 : v78;
          value *= v79;
        }
        v80 = LocalizationManager_TypeInfo;
        *p_spendNum = v79;
        v12->fields.recvRpNum = value;
        if ( !*(&v80->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(v80, v58, v59);
        v81 = LocalizationManager__Get((System_String_o *)StringLiteral_15412/*"UNIT_INFO"*/, 0);
        spendNum = v12->fields.spendNum;
        v82 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &spendNum);
        v83 = (Il2CppObject *)System_String__Format(v81, v82, 0);
        v84 = v12->fields.itemDetailLb;
        v85 = LocalizationManager__Get((System_String_o *)StringLiteral_11655/*"RP_RECOVER_NUM_TXT"*/, 0);
        recvRpNum = v12->fields.recvRpNum;
        v86 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &recvRpNum);
        this = (RecoverItemComponent_o *)System_String__Format_75697880(v85, v83, v86, 0);
        if ( !v84 )
          goto LABEL_112;
        UILabel__set_text(v84, (System_String_o *)this, 0);
        v87 = v12->fields.currentNumLb;
        v100 = v61;
        v88 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &v100);
        this = (RecoverItemComponent_o *)System_String__Format((System_String_o *)StringLiteral_26474/*"{0:N0}"*/, v88, 0);
        if ( !v87 )
          goto LABEL_112;
        UILabel__set_text(v87, (System_String_o *)this, 0);
        v89 = v12->fields.spendNumLb;
        this = (RecoverItemComponent_o *)System_Int32__ToString((int)v12 + 128, 0);
        if ( !v89 )
          goto LABEL_112;
        UILabel__set_text(v89, (System_String_o *)this, 0);
        v90 = v61 >= v12->fields.spendNum;
        v12->fields.recvSum = v12->fields.recvRpNum + v12->fields.usrCurrentRp;
        v12->fields.isEnableSelect = v90;
        v12->fields.targetId = data->fields.id;
      }
      break;
    case 2:
      this = (RecoverItemComponent_o *)v12->fields.itemIconInfo;
      if ( this )
      {
        this = (RecoverItemComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
        if ( this )
        {
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0);
          this = (RecoverItemComponent_o *)v12->fields.cmdSpellBg;
          if ( this )
          {
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
            this = (RecoverItemComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
            if ( this )
            {
              this = (RecoverItemComponent_o *)DataManager__GetMasterData_object_(
                                                 (DataManager_o *)this,
                                                 (const MethodInfo_385636C *)Method_DataManager_GetMasterData_ItemMaster___);
              if ( this )
              {
                this = (RecoverItemComponent_o *)ItemMaster__GetEntityByType((ItemMaster_o *)this, 2, 0);
                if ( this )
                {
                  v38 = this;
                  this = (RecoverItemComponent_o *)v12->fields.itemIconInfo;
                  if ( this )
                  {
                    ItemIconComponent__SetItemImage_47882600(
                      (ItemIconComponent_o *)this,
                      (int32_t)v38->fields.cmdSpellBg,
                      HIDWORD(v38->fields.cmdSpellBg),
                      (int32_t)v38->fields.cmdSpellIcon,
                      0,
                      1,
                      0);
                    this = (RecoverItemComponent_o *)v12->fields.itemIconInfo;
                    if ( this )
                    {
                      this = (RecoverItemComponent_o *)UnityEngine_Component__get_gameObject(
                                                         (UnityEngine_Component_o *)this,
                                                         0);
                      if ( this )
                      {
                        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0);
                        this = (RecoverItemComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
                        if ( this )
                        {
                          this = (RecoverItemComponent_o *)DataManager__GetMasterData_object_(
                                                             (DataManager_o *)this,
                                                             (const MethodInfo_385636C *)Method_DataManager_GetMasterData_StoneShopMaster___);
                          if ( this )
                          {
                            this = (RecoverItemComponent_o *)DataMasterBase_object__object__int___GetEntity(
                                                               (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                                               v12->fields.targetId,
                                                               (const MethodInfo_3F10B30 *)Method_DataMasterBase_StoneShopMaster__StoneShopEntity__int__GetEntity__);
                            if ( v12->fields.itemNameLb )
                            {
                              v39 = this;
                              UILabel__set_text(
                                v12->fields.itemNameLb,
                                (System_String_o *)v38->fields.m_CancellationTokenSource,
                                0);
                              if ( *p_userEntity )
                              {
                                userEntity = (int32_t)(*p_userEntity)->fields.userEntity;
                                if ( v39 )
                                  *p_spendNum = HIDWORD(v39->fields.cmdSpellBg);
                                v41 = v12->fields.currentNumLb;
                                spendNum = userEntity;
                                v42 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &spendNum);
                                this = (RecoverItemComponent_o *)System_String__Format(
                                                                   (System_String_o *)StringLiteral_26474/*"{0:N0}"*/,
                                                                   v42,
                                                                   0);
                                if ( v41 )
                                {
                                  UILabel__set_text(v41, (System_String_o *)this, 0);
                                  v43 = v12->fields.spendNumLb;
                                  this = (RecoverItemComponent_o *)System_Int32__ToString((int)v12 + 128, 0);
                                  if ( v43 )
                                  {
                                    UILabel__set_text(v43, (System_String_o *)this, 0);
                                    RecoverItemComponent__AttachStoneCountRefreshComponent(v12, v44);
                                    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
                                      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v45, v46);
                                    v47 = LocalizationManager__Get((System_String_o *)StringLiteral_15412/*"UNIT_INFO"*/, 0);
                                    recvRpNum = v12->fields.spendNum;
                                    v48 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &recvRpNum);
                                    v49 = (Il2CppObject *)System_String__Format(v47, v48, 0);
                                    v50 = v12->fields.itemDetailLb;
                                    v51 = LocalizationManager__Get((System_String_o *)StringLiteral_11655/*"RP_RECOVER_NUM_TXT"*/, 0);
                                    v100 = v12->fields.recvRpNum;
                                    v52 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &v100);
                                    this = (RecoverItemComponent_o *)System_String__Format_75697880(v51, v49, v52, 0);
                                    if ( v50 )
                                    {
                                      UILabel__set_text(v50, (System_String_o *)this, 0);
                                      this = *p_userEntity;
                                      if ( *p_userEntity )
                                      {
                                        PayableStoneNum = UserGameEntity__get_PayableStoneNum(
                                                            (UserGameEntity_o *)this,
                                                            0);
                                        v54 = v12->fields.recvRpNum + v12->fields.usrCurrentRp;
                                        v55 = PayableStoneNum >= v12->fields.spendNum;
LABEL_110:
                                        v12->fields.isEnableSelect = v55;
                                        v12->fields.recvSum = v54;
                                        break;
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
          }
        }
      }
      goto LABEL_112;
  }
  RecoverItemComponent__setEnableSelectItem(v12, (const MethodInfo *)data);
}


void RecoverItemComponent__setRequestInfo(RecoverItemComponent_o *this, const MethodInfo *method)
{
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  DataManager_o *Instance; // x0
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x8
  struct RecoverItemComponent_CallbackFunc_o *callbackFunc; // x20
  __int64 v14; // x1
  __int64 v15; // x2
  Il2CppObject *v16; // x19
  __int64 v17; // x2
  System_String_o *v18; // x20
  RecoverItemComponent___c_c *v19; // x8
  struct RecoverItemComponent___c_StaticFields *static_fields; // x9
  System_Action_o *_9__43_0; // x22
  System_String_o *v22; // x21
  Il2CppObject *v23; // x23
  struct RecoverItemComponent___c_StaticFields *v24; // x0
  System_String_o *v25; // x2
  System_String_o *v26; // x3
  int32_t v27; // w4
  int32_t v28; // w5
  bool v29; // w6
  bool v30; // w7

  if ( (byte_596A8BC & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_DataManager_GetMasterData_EventMaster___);
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_2213A60(&TerminalSceneComponent_TypeInfo);
    sub_2213A60(&Method_RecoverItemComponent___c__setRequestInfo_b__43_0__);
    sub_2213A60(&RecoverItemComponent___c_TypeInfo);
    sub_2213A60(&StringLiteral_11656/*"RP_UNRECOVERABLE_MESSAGE"*/);
    sub_2213A60(&StringLiteral_1/*""*/);
    byte_596A8BC = 1;
  }
  if ( this->fields.recvTarget != 2 )
    goto LABEL_14;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_27;
  DataManager__GetMasterData_object_(
    Instance,
    (const MethodInfo_385636C *)Method_DataManager_GetMasterData_EventMaster___);
  if ( !*(&TerminalSceneComponent_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v10, v11);
  if ( !byte_596A090 )
  {
    sub_2213A60(&TerminalSceneComponent_TypeInfo);
    byte_596A090 = 1;
  }
  Instance = (DataManager_o *)TerminalSceneComponent_TypeInfo;
  if ( !*(&TerminalSceneComponent_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v10, v11);
    Instance = (DataManager_o *)TerminalSceneComponent_TypeInfo;
  }
  v12 = **(_QWORD **)&Instance[1].fields._DispLog;
  if ( !v12 || (Instance = *(DataManager_o **)(v12 + 248)) == 0 )
LABEL_27:
    sub_2213CDC(Instance, v10);
  if ( !ScrPlayerStatus__IsBPActive((ScrPlayerStatus_o *)Instance, 0) )
  {
    v16 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v14, v15);
    Instance = (DataManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11656/*"RP_UNRECOVERABLE_MESSAGE"*/, 0);
    v18 = (System_String_o *)Instance;
    v19 = RecoverItemComponent___c_TypeInfo;
    if ( !*(&RecoverItemComponent___c_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(RecoverItemComponent___c_TypeInfo, v10, v17);
      v19 = RecoverItemComponent___c_TypeInfo;
    }
    static_fields = v19->static_fields;
    _9__43_0 = static_fields->__9__43_0;
    v22 = (System_String_o *)StringLiteral_1/*""*/;
    if ( !_9__43_0 )
    {
      if ( !*(&v19->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(v19, v10, v17);
        static_fields = RecoverItemComponent___c_TypeInfo->static_fields;
      }
      v23 = (Il2CppObject *)static_fields->__9;
      _9__43_0 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
      System_Action___ctor(_9__43_0, v23, Method_RecoverItemComponent___c__setRequestInfo_b__43_0__, 0);
      v24 = RecoverItemComponent___c_TypeInfo->static_fields;
      v24->__9__43_0 = _9__43_0;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)&v24->__9__43_0, (int32_t)_9__43_0, v25, v26, v27, v28, v29, v30);
    }
    if ( v16 )
    {
      CommonUI__OpenNotificationDialog((CommonUI_o *)v16, v22, v18, _9__43_0, -1, 0, 0, 0, 1, 0, 1, 0, 0, 0.0, 0, 0);
      return;
    }
    goto LABEL_27;
  }
LABEL_14:
  callbackFunc = this->fields.callbackFunc;
  if ( callbackFunc )
  {
    this->fields.callbackFunc = 0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.callbackFunc, 0, v2, v3, v4, v5, v6, v7);
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

  if ( (byte_596A8BA & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_RecoverItemComponent_setRequestInfo__);
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_596A8BA = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v7 = (CommonUI_o *)Instance;
  if ( isRes )
  {
    v8 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
    System_Action___ctor(v8, (Il2CppObject *)this, Method_RecoverItemComponent_setRequestInfo__, 0);
    if ( v7 )
    {
      CommonUI__CloseConfirmDialog_37373868(v7, v8, 0);
      return;
    }
LABEL_8:
    sub_2213CDC(Instance, v6);
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
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  intptr_t v8; // x8
  int v12; // w22
  Il2CppObject *m_target; // x9
  __int64 v14; // x0

  v8 = *(_QWORD *)(method + 8);
  this->fields.method = method;
  this->fields.method_ptr = v8;
  this->fields.m_target = object;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.m_target,
    (int32_t)object,
    (System_String_o *)method,
    (System_String_o *)a4,
    v4,
    v5,
    v6,
    v7);
  v12 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_2213B38(method) & 1) == 0 )
  {
    if ( !object )
    {
      v14 = sub_2213CF8(0, "Delegate to an instance method cannot have null 'this'.");
      sub_2213BA0(v14, 0);
    }
    goto LABEL_5;
  }
  if ( v12 != 3 )
  {
LABEL_5:
    m_target = this->fields.m_target;
    this->fields.invoke_impl = this->fields.method_ptr;
    this->fields.method_code = (intptr_t)m_target;
    goto LABEL_6;
  }
  this->fields.invoke_impl = (intptr_t)sub_1FFFE94;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_1FFFE34;
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
  _QWORD v11[2]; // [xsp+0h] [xbp-60h] BYREF
  __int128 v12; // [xsp+10h] [xbp-50h]
  int32_t v13; // [xsp+24h] [xbp-3Ch] BYREF
  int32_t v14; // [xsp+28h] [xbp-38h] BYREF
  int32_t v15; // [xsp+2Ch] [xbp-34h] BYREF

  v14 = id;
  v15 = type;
  v13 = num;
  if ( (byte_596A8C0 & 1) == 0 )
  {
    sub_2213A60(&RecoverType_Type_TypeInfo);
    byte_596A8C0 = 1;
  }
  v12 = 0u;
  v11[0] = j_il2cpp_value_box_0(RecoverType_Type_TypeInfo, &v15);
  v11[1] = j_il2cpp_value_box_0(qword_5984348, &v14);
  *(_QWORD *)&v12 = j_il2cpp_value_box_0(qword_5984348, &v13);
  return sub_2213A14(this, v11, callback, object);
}


void RecoverItemComponent_CallbackFunc__EndInvoke(
        RecoverItemComponent_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_2213A18(result, 0, method);
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
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  if ( (byte_596A8C1 & 1) == 0 )
  {
    sub_2213A60(&RecoverItemComponent___c_TypeInfo);
    byte_596A8C1 = 1;
  }
  v1 = (Il2CppObject *)sub_2213CCC(RecoverItemComponent___c_TypeInfo);
  System_Object___ctor(v1, 0);
  RecoverItemComponent___c_TypeInfo->static_fields->__9 = (struct RecoverItemComponent___c_o *)v1;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)RecoverItemComponent___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void RecoverItemComponent___c___ctor(RecoverItemComponent___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void RecoverItemComponent___c___setRequestInfo_b__43_0(RecoverItemComponent___c_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v3; // x1

  if ( (byte_596A8C2 & 1) == 0 )
  {
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_2213A60(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    byte_596A8C2 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance
    || (CommonUI__CloseRecoverItemListDialog((CommonUI_o *)Instance, 0),
        (Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__)) == 0) )
  {
    sub_2213CDC(Instance, v3);
  }
  AvalonSceneManager__transitionSceneRefresh((AvalonSceneManager_o *)Instance, 34, 1, 0, 0, 0);
}