void __fastcall RecoverItemComponent___cctor(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_4AB980D & 1) == 0 )
  {
    sub_1BAB41C(&RecoverItemComponent_TypeInfo, v1);
    byte_4AB980D = 1;
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

  if ( (byte_4AB9807 & 1) == 0 )
  {
    sub_1BAB41C(&System_Action_int__TypeInfo, method);
    sub_1BAB41C(&Method_RecoverItemComponent__AttachStoneCountRefreshComponent_b__38_0__, v3);
    byte_4AB9807 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v5 = (System_Action_int__o *)sub_1BAB668(System_Action_int__TypeInfo);
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

  if ( (byte_4AB980A & 1) == 0 )
  {
    sub_1BAB41C(&System_Action_TypeInfo, isRes);
    sub_1BAB41C(&Method_RecoverItemComponent_setRequestInfo__, v7);
    sub_1BAB41C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v8);
    byte_4AB980A = 1;
  }
  if ( isRes )
  {
    this->fields.spendNum = useNum;
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_378A22C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v10 = (System_Action_o *)sub_1BAB668(System_Action_TypeInfo);
    System_Action___ctor(v10, (Il2CppObject *)this, Method_RecoverItemComponent_setRequestInfo__, 0LL);
    if ( !Instance )
LABEL_9:
      sub_1BAB678(v11, v12);
  }
  else
  {
    v11 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_378A22C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
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
  int32_t v56; // w2
  int32_t v57; // w3
  System_Object_array *v58; // x26
  int32_t v59; // w2
  int32_t v60; // w3
  __int64 v61; // x2
  __int64 v62; // x3
  __int64 v63; // x4
  int32_t v64; // w2
  int32_t v65; // w3
  Il2CppObject *v66; // x24
  __int64 v67; // x2
  __int64 v68; // x3
  __int64 v69; // x4
  int32_t v70; // w2
  int32_t v71; // w3
  Il2CppObject *v72; // x24
  __int64 v73; // x2
  __int64 v74; // x3
  __int64 v75; // x4
  int32_t v76; // w2
  int32_t v77; // w3
  Il2CppObject *v78; // x24
  __int64 v79; // x2
  __int64 v80; // x3
  __int64 v81; // x4
  int32_t v82; // w2
  int32_t v83; // w3
  Il2CppObject *v84; // x24
  __int64 v85; // x2
  __int64 v86; // x3
  __int64 v87; // x4
  int32_t v88; // w2
  int32_t v89; // w3
  Il2CppObject *v90; // x24
  ServantStatusBattleListViewItem_o *v91; // x0
  System_String_o *v92; // x25
  int32_t v93; // w2
  int32_t v94; // w3
  System_Object_array *v95; // x26
  int32_t v96; // w2
  int32_t v97; // w3
  __int64 v98; // x2
  __int64 v99; // x3
  __int64 v100; // x4
  int32_t v101; // w2
  int32_t v102; // w3
  Il2CppObject *v103; // x24
  __int64 v104; // x2
  __int64 v105; // x3
  __int64 v106; // x4
  int32_t v107; // w2
  int32_t v108; // w3
  Il2CppObject *v109; // x24
  __int64 v110; // x2
  __int64 v111; // x3
  __int64 v112; // x4
  int32_t v113; // w2
  int32_t v114; // w3
  Il2CppObject *v115; // x24
  __int64 v116; // x2
  __int64 v117; // x3
  __int64 v118; // x4
  int32_t v119; // w2
  int32_t v120; // w3
  Il2CppObject *v121; // x24
  __int64 v122; // x2
  __int64 v123; // x3
  __int64 v124; // x4
  int32_t v125; // w2
  int32_t v126; // w3
  Il2CppObject *v127; // x24
  System_String_o *v128; // x24
  Il2CppObject *v129; // x23
  CommonConfirmDialog_ClickDelegate_o *v130; // x25
  System_String_o **v131; // x8
  System_String_o *v132; // x25
  int32_t v133; // w2
  int32_t v134; // w3
  int32_t v135; // w2
  int32_t v136; // w3
  __int64 v137; // x2
  __int64 v138; // x3
  __int64 v139; // x4
  int32_t v140; // w2
  int32_t v141; // w3
  Il2CppObject *v142; // x24
  __int64 v143; // x2
  __int64 v144; // x3
  __int64 v145; // x4
  int32_t v146; // w2
  int32_t v147; // w3
  Il2CppObject *v148; // x24
  __int64 v149; // x2
  __int64 v150; // x3
  __int64 v151; // x4
  int32_t v152; // w2
  int32_t v153; // w3
  Il2CppObject *v154; // x24
  __int64 v155; // x2
  __int64 v156; // x3
  __int64 v157; // x4
  int32_t v158; // w2
  int32_t v159; // w3
  Il2CppObject *v160; // x24
  __int64 v161; // x2
  __int64 v162; // x3
  __int64 v163; // x4
  int32_t v164; // w2
  int32_t v165; // w3
  Il2CppObject *v166; // x24
  __int64 v167; // x2
  __int64 v168; // x3
  __int64 v169; // x4
  System_String_o *v170; // x23
  Il2CppObject *v171; // x25
  CommonConfirmDialog_ClickDelegate_o *v172; // x26
  System_String_o *v173; // x0
  System_String_o *v174; // x20
  Il2CppObject *v175; // x21
  System_Action_o *v176; // x22
  System_String_o *v177; // x0
  System_String_o *v178; // x20
  Il2CppObject *Instance; // x21
  System_Action_o *v180; // x22
  Il2CppObject *v181; // x0
  int32_t targetId; // w20
  int32_t needAp; // w21
  CommonUI_o *v184; // x22
  System_Action_bool__int__o *v185; // x23
  __int64 v186; // x0
  int32_t v187; // [xsp+48h] [xbp-78h] BYREF
  int32_t v188; // [xsp+4Ch] [xbp-74h] BYREF
  int32_t recvSum; // [xsp+50h] [xbp-70h] BYREF
  int32_t usrMaxRp; // [xsp+54h] [xbp-6Ch] BYREF
  int32_t usrCurrentRp; // [xsp+58h] [xbp-68h] BYREF
  int32_t spendNum; // [xsp+5Ch] [xbp-64h] BYREF

  if ( (byte_4AB9808 & 1) == 0 )
  {
    sub_1BAB41C(&System_Action_bool__int__TypeInfo, method);
    sub_1BAB41C(&System_Action_TypeInfo, v3);
    sub_1BAB41C(&BalanceConfig_TypeInfo, v4);
    sub_1BAB41C(&CommonConfirmDialog_ClickDelegate_TypeInfo, v5);
    sub_1BAB41C(&int_TypeInfo, v6);
    sub_1BAB41C(&LocalizationManager_TypeInfo, v7);
    sub_1BAB41C(&object___TypeInfo, v8);
    sub_1BAB41C(&UnityEngine_Object_TypeInfo, v9);
    sub_1BAB41C(&Method_RecoverItemComponent_CloseApRecovDlg__, v10);
    sub_1BAB41C(&Method_RecoverItemComponent_OnClickItem__, v11);
    sub_1BAB41C(&Method_RecoverItemComponent_closeNotificationDlg__, v12);
    sub_1BAB41C(&Method_RecoverItemComponent_spendItemDlg__, v13);
    sub_1BAB41C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v14);
    sub_1BAB41C(&StringLiteral_11139/*"RP_RECOVER_CONFIRM_MSG"*/, v15);
    sub_1BAB41C(&StringLiteral_3606/*"CMDSPELL_CURRENT_NUM"*/, v16);
    sub_1BAB41C(&StringLiteral_3749/*"COMMAND_SPELL_TXT"*/, v17);
    sub_1BAB41C(&StringLiteral_2120/*"AP_RECOVER_CONFIRM_MSG"*/, v18);
    sub_1BAB41C(&StringLiteral_11137/*"RP_FULL_MSG"*/, v19);
    sub_1BAB41C(&StringLiteral_14827/*"UNIT_INFO"*/, v20);
    sub_1BAB41C(&StringLiteral_2116/*"AP_ADD_CONFIRM_MSG"*/, v21);
    sub_1BAB41C(&StringLiteral_3755/*"COMMON_CONFIRM_DECIDE"*/, v22);
    sub_1BAB41C(&StringLiteral_3753/*"COMMON_CONFIRM_CANCEL"*/, v23);
    sub_1BAB41C(&StringLiteral_2117/*"AP_ADD_CONFIRM_MSG_OVER"*/, v24);
    sub_1BAB41C(&StringLiteral_2121/*"AP_RECOVER_CONFIRM_MSG_OVER"*/, v25);
    sub_1BAB41C(&StringLiteral_2118/*"AP_FULL_MSG"*/, v26);
    sub_1BAB41C(&StringLiteral_1/*""*/, v27);
    sub_1BAB41C(&StringLiteral_2126/*"AP_RECOVER_STONEPAY_WARNING_MSG"*/, v28);
    byte_4AB9808 = 1;
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
  v34 = LocalizationManager__Get((System_String_o *)StringLiteral_14827/*"UNIT_INFO"*/, 0LL);
  spendNum = this->fields.spendNum;
  v38 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &spendNum, v35, v36, v37);
  userEntity = (__int64)System_String__Format(v34, v38, 0LL);
  v39 = (System_String_o *)userEntity;
  if ( this->fields.currentType == 1 )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    mText = (Il2CppObject *)LocalizationManager__Get((System_String_o *)StringLiteral_3749/*"COMMAND_SPELL_TXT"*/, 0LL);
    if ( this->fields.currentType == 1 )
    {
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v41 = LocalizationManager__Get((System_String_o *)StringLiteral_3606/*"CMDSPELL_CURRENT_NUM"*/, 0LL);
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
  v47 = LocalizationManager__Get((System_String_o *)StringLiteral_3755/*"COMMON_CONFIRM_DECIDE"*/, 0LL);
  v48 = LocalizationManager__Get((System_String_o *)StringLiteral_3753/*"COMMON_CONFIRM_CANCEL"*/, 0LL);
  v49 = Method_RecoverItemComponent_OnClickItem__;
  if ( (*((_BYTE *)Method_RecoverItemComponent_OnClickItem__ + 83) & 2) != 0 )
    v49 = (_QWORD *)sub_1BAB434(Method_RecoverItemComponent_OnClickItem__);
  v50 = (System_Reflection_MethodBase_o *)sub_1BAB400(v49, v49[4]);
  OverwriteAssetSoundName__PlaySystemSe(v50, 0, 0LL);
  if ( !this->fields.isAp )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v92 = LocalizationManager__Get((System_String_o *)StringLiteral_11139/*"RP_RECOVER_CONFIRM_MSG"*/, 0LL);
    userEntity = sub_1BAB4C4(object___TypeInfo, 7LL);
    if ( !userEntity )
      goto LABEL_140;
    v95 = (System_Object_array *)userEntity;
    if ( mText )
    {
      userEntity = sub_1BAB558(mText, *(_QWORD *)(*(_QWORD *)userEntity + 64LL));
      if ( !userEntity )
        goto LABEL_141;
    }
    if ( v95->max_length )
    {
      v95->m_Items[0] = mText;
      sub_1BAB3C0((ServantStatusBattleListViewItem_o *)v95->m_Items, (int32_t)mText, v93, v94);
      if ( v39 )
      {
        userEntity = sub_1BAB558(v39, v95->obj.klass->_1.element_class);
        if ( !userEntity )
          goto LABEL_141;
      }
      if ( v95->max_length > 1 )
      {
        v95->m_Items[1] = (Il2CppObject *)v39;
        sub_1BAB3C0((ServantStatusBattleListViewItem_o *)&v95->m_Items[1], (int32_t)v39, v96, v97);
        spendNum = this->fields.recvRpNum;
        userEntity = j_il2cpp_value_box_0(int_TypeInfo, &spendNum, v98, v99, v100);
        v103 = (Il2CppObject *)userEntity;
        if ( userEntity )
        {
          userEntity = sub_1BAB558(userEntity, v95->obj.klass->_1.element_class);
          if ( !userEntity )
            goto LABEL_141;
        }
        if ( v95->max_length > 2 )
        {
          v95->m_Items[2] = v103;
          sub_1BAB3C0((ServantStatusBattleListViewItem_o *)&v95->m_Items[2], (int32_t)v103, v101, v102);
          usrCurrentRp = this->fields.usrCurrentRp;
          userEntity = j_il2cpp_value_box_0(int_TypeInfo, &usrCurrentRp, v104, v105, v106);
          v109 = (Il2CppObject *)userEntity;
          if ( userEntity )
          {
            userEntity = sub_1BAB558(userEntity, v95->obj.klass->_1.element_class);
            if ( !userEntity )
              goto LABEL_141;
          }
          if ( v95->max_length > 3 )
          {
            v95->m_Items[3] = v109;
            sub_1BAB3C0((ServantStatusBattleListViewItem_o *)&v95->m_Items[3], (int32_t)v109, v107, v108);
            usrMaxRp = this->fields.usrMaxRp;
            userEntity = j_il2cpp_value_box_0(int_TypeInfo, &usrMaxRp, v110, v111, v112);
            v115 = (Il2CppObject *)userEntity;
            if ( userEntity )
            {
              userEntity = sub_1BAB558(userEntity, v95->obj.klass->_1.element_class);
              if ( !userEntity )
                goto LABEL_141;
            }
            if ( v95->max_length > 4 )
            {
              v95->m_Items[4] = v115;
              sub_1BAB3C0((ServantStatusBattleListViewItem_o *)&v95->m_Items[4], (int32_t)v115, v113, v114);
              recvSum = this->fields.recvSum;
              userEntity = j_il2cpp_value_box_0(int_TypeInfo, &recvSum, v116, v117, v118);
              v121 = (Il2CppObject *)userEntity;
              if ( userEntity )
              {
                userEntity = sub_1BAB558(userEntity, v95->obj.klass->_1.element_class);
                if ( !userEntity )
                  goto LABEL_141;
              }
              if ( v95->max_length > 5 )
              {
                v95->m_Items[5] = v121;
                sub_1BAB3C0((ServantStatusBattleListViewItem_o *)&v95->m_Items[5], (int32_t)v121, v119, v120);
                v188 = this->fields.usrMaxRp;
                userEntity = j_il2cpp_value_box_0(int_TypeInfo, &v188, v122, v123, v124);
                v127 = (Il2CppObject *)userEntity;
                if ( userEntity )
                {
                  userEntity = sub_1BAB558(userEntity, v95->obj.klass->_1.element_class);
                  if ( !userEntity )
                    goto LABEL_141;
                }
                if ( v95->max_length > 6 )
                {
                  v95->m_Items[6] = v127;
                  sub_1BAB3C0((ServantStatusBattleListViewItem_o *)&v95->m_Items[6], (int32_t)v127, v125, v126);
                  userEntity = (__int64)System_String__Format_62062636(v92, v95, 0LL);
                  if ( !this->fields.userEntity )
                    goto LABEL_140;
                  v128 = (System_String_o *)userEntity;
                  if ( UserGameEntity__getRp(this->fields.userEntity, 0LL) < this->fields.usrMaxRp )
                    goto LABEL_80;
                  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                  v177 = LocalizationManager__Get((System_String_o *)StringLiteral_11137/*"RP_FULL_MSG"*/, 0LL);
                  v178 = System_String__Format(v177, mText, 0LL);
                  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_378A22C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
                  v180 = (System_Action_o *)sub_1BAB668(System_Action_TypeInfo);
                  System_Action___ctor(
                    v180,
                    (Il2CppObject *)this,
                    Method_RecoverItemComponent_closeNotificationDlg__,
                    0LL);
                  if ( !Instance )
                    goto LABEL_140;
                  CommonUI__OpenNotificationDialog(
                    (CommonUI_o *)Instance,
                    (System_String_o *)StringLiteral_1/*""*/,
                    v178,
                    v180,
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
    sub_1BAB680(userEntity, v31);
  }
  v51 = this->fields.recvSum;
  usrMaxAp = this->fields.usrMaxAp;
  if ( !this->fields.isAddAp )
  {
    if ( v51 <= usrMaxAp )
      v131 = (System_String_o **)&StringLiteral_2120/*"AP_RECOVER_CONFIRM_MSG"*/;
    else
      v131 = (System_String_o **)&StringLiteral_2121/*"AP_RECOVER_CONFIRM_MSG_OVER"*/;
    v132 = *v131;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v55 = LocalizationManager__Get(v132, 0LL);
    userEntity = sub_1BAB4C4(object___TypeInfo, 8LL);
    if ( !userEntity )
      goto LABEL_140;
    v58 = (System_Object_array *)userEntity;
    if ( mText )
    {
      userEntity = sub_1BAB558(mText, *(_QWORD *)(*(_QWORD *)userEntity + 64LL));
      if ( !userEntity )
        goto LABEL_141;
    }
    if ( v58->max_length )
    {
      v58->m_Items[0] = mText;
      sub_1BAB3C0((ServantStatusBattleListViewItem_o *)v58->m_Items, (int32_t)mText, v133, v134);
      if ( v39 )
      {
        userEntity = sub_1BAB558(v39, v58->obj.klass->_1.element_class);
        if ( !userEntity )
          goto LABEL_141;
      }
      if ( v58->max_length > 1 )
      {
        v58->m_Items[1] = (Il2CppObject *)v39;
        sub_1BAB3C0((ServantStatusBattleListViewItem_o *)&v58->m_Items[1], (int32_t)v39, v135, v136);
        spendNum = this->fields.apRcvRate;
        userEntity = j_il2cpp_value_box_0(int_TypeInfo, &spendNum, v137, v138, v139);
        v142 = (Il2CppObject *)userEntity;
        if ( userEntity )
        {
          userEntity = sub_1BAB558(userEntity, v58->obj.klass->_1.element_class);
          if ( !userEntity )
            goto LABEL_141;
        }
        if ( v58->max_length > 2 )
        {
          v58->m_Items[2] = v142;
          sub_1BAB3C0((ServantStatusBattleListViewItem_o *)&v58->m_Items[2], (int32_t)v142, v140, v141);
          usrCurrentRp = this->fields.recvApNum;
          userEntity = j_il2cpp_value_box_0(int_TypeInfo, &usrCurrentRp, v143, v144, v145);
          v148 = (Il2CppObject *)userEntity;
          if ( userEntity )
          {
            userEntity = sub_1BAB558(userEntity, v58->obj.klass->_1.element_class);
            if ( !userEntity )
              goto LABEL_141;
          }
          if ( v58->max_length > 3 )
          {
            v58->m_Items[3] = v148;
            sub_1BAB3C0((ServantStatusBattleListViewItem_o *)&v58->m_Items[3], (int32_t)v148, v146, v147);
            usrMaxRp = this->fields.usrCurrentAp;
            userEntity = j_il2cpp_value_box_0(int_TypeInfo, &usrMaxRp, v149, v150, v151);
            v154 = (Il2CppObject *)userEntity;
            if ( userEntity )
            {
              userEntity = sub_1BAB558(userEntity, v58->obj.klass->_1.element_class);
              if ( !userEntity )
                goto LABEL_141;
            }
            if ( v58->max_length > 4 )
            {
              v58->m_Items[4] = v154;
              sub_1BAB3C0((ServantStatusBattleListViewItem_o *)&v58->m_Items[4], (int32_t)v154, v152, v153);
              recvSum = this->fields.usrMaxAp;
              userEntity = j_il2cpp_value_box_0(int_TypeInfo, &recvSum, v155, v156, v157);
              v160 = (Il2CppObject *)userEntity;
              if ( userEntity )
              {
                userEntity = sub_1BAB558(userEntity, v58->obj.klass->_1.element_class);
                if ( !userEntity )
                  goto LABEL_141;
              }
              if ( v58->max_length > 5 )
              {
                v58->m_Items[5] = v160;
                sub_1BAB3C0((ServantStatusBattleListViewItem_o *)&v58->m_Items[5], (int32_t)v160, v158, v159);
                v188 = this->fields.recvSum;
                userEntity = j_il2cpp_value_box_0(int_TypeInfo, &v188, v161, v162, v163);
                v166 = (Il2CppObject *)userEntity;
                if ( userEntity )
                {
                  userEntity = sub_1BAB558(userEntity, v58->obj.klass->_1.element_class);
                  if ( !userEntity )
                    goto LABEL_141;
                }
                if ( v58->max_length > 6 )
                {
                  v58->m_Items[6] = v166;
                  sub_1BAB3C0((ServantStatusBattleListViewItem_o *)&v58->m_Items[6], (int32_t)v166, v164, v165);
                  v187 = this->fields.usrMaxAp;
                  userEntity = j_il2cpp_value_box_0(int_TypeInfo, &v187, v167, v168, v169);
                  v90 = (Il2CppObject *)userEntity;
                  if ( userEntity )
                  {
                    userEntity = sub_1BAB558(userEntity, v58->obj.klass->_1.element_class);
                    if ( !userEntity )
                      goto LABEL_141;
                  }
                  if ( v58->max_length > 7 )
                  {
                    v58->m_Items[7] = v90;
                    v91 = (ServantStatusBattleListViewItem_o *)&v58->m_Items[7];
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
    v53 = (System_String_o **)&StringLiteral_2116/*"AP_ADD_CONFIRM_MSG"*/;
  else
    v53 = (System_String_o **)&StringLiteral_2117/*"AP_ADD_CONFIRM_MSG_OVER"*/;
  v54 = *v53;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v55 = LocalizationManager__Get(v54, 0LL);
  userEntity = sub_1BAB4C4(object___TypeInfo, 7LL);
  if ( !userEntity )
    goto LABEL_140;
  v58 = (System_Object_array *)userEntity;
  if ( mText )
  {
    userEntity = sub_1BAB558(mText, *(_QWORD *)(*(_QWORD *)userEntity + 64LL));
    if ( !userEntity )
      goto LABEL_141;
  }
  if ( !v58->max_length )
    goto LABEL_139;
  v58->m_Items[0] = mText;
  sub_1BAB3C0((ServantStatusBattleListViewItem_o *)v58->m_Items, (int32_t)mText, v56, v57);
  if ( v39 )
  {
    userEntity = sub_1BAB558(v39, v58->obj.klass->_1.element_class);
    if ( !userEntity )
      goto LABEL_141;
  }
  if ( v58->max_length <= 1 )
    goto LABEL_139;
  v58->m_Items[1] = (Il2CppObject *)v39;
  sub_1BAB3C0((ServantStatusBattleListViewItem_o *)&v58->m_Items[1], (int32_t)v39, v59, v60);
  spendNum = this->fields.recvApNum;
  userEntity = j_il2cpp_value_box_0(int_TypeInfo, &spendNum, v61, v62, v63);
  v66 = (Il2CppObject *)userEntity;
  if ( userEntity )
  {
    userEntity = sub_1BAB558(userEntity, v58->obj.klass->_1.element_class);
    if ( !userEntity )
      goto LABEL_141;
  }
  if ( v58->max_length <= 2 )
    goto LABEL_139;
  v58->m_Items[2] = v66;
  sub_1BAB3C0((ServantStatusBattleListViewItem_o *)&v58->m_Items[2], (int32_t)v66, v64, v65);
  usrCurrentRp = this->fields.usrCurrentAp;
  userEntity = j_il2cpp_value_box_0(int_TypeInfo, &usrCurrentRp, v67, v68, v69);
  v72 = (Il2CppObject *)userEntity;
  if ( userEntity )
  {
    userEntity = sub_1BAB558(userEntity, v58->obj.klass->_1.element_class);
    if ( !userEntity )
      goto LABEL_141;
  }
  if ( v58->max_length <= 3 )
    goto LABEL_139;
  v58->m_Items[3] = v72;
  sub_1BAB3C0((ServantStatusBattleListViewItem_o *)&v58->m_Items[3], (int32_t)v72, v70, v71);
  usrMaxRp = this->fields.usrMaxAp;
  userEntity = j_il2cpp_value_box_0(int_TypeInfo, &usrMaxRp, v73, v74, v75);
  v78 = (Il2CppObject *)userEntity;
  if ( userEntity )
  {
    userEntity = sub_1BAB558(userEntity, v58->obj.klass->_1.element_class);
    if ( !userEntity )
      goto LABEL_141;
  }
  if ( v58->max_length <= 4 )
    goto LABEL_139;
  v58->m_Items[4] = v78;
  sub_1BAB3C0((ServantStatusBattleListViewItem_o *)&v58->m_Items[4], (int32_t)v78, v76, v77);
  recvSum = this->fields.recvSum;
  userEntity = j_il2cpp_value_box_0(int_TypeInfo, &recvSum, v79, v80, v81);
  v84 = (Il2CppObject *)userEntity;
  if ( userEntity )
  {
    userEntity = sub_1BAB558(userEntity, v58->obj.klass->_1.element_class);
    if ( !userEntity )
      goto LABEL_141;
  }
  if ( v58->max_length <= 5 )
    goto LABEL_139;
  v58->m_Items[5] = v84;
  sub_1BAB3C0((ServantStatusBattleListViewItem_o *)&v58->m_Items[5], (int32_t)v84, v82, v83);
  v188 = this->fields.usrMaxAp;
  userEntity = j_il2cpp_value_box_0(int_TypeInfo, &v188, v85, v86, v87);
  v90 = (Il2CppObject *)userEntity;
  if ( userEntity )
  {
    userEntity = sub_1BAB558(userEntity, v58->obj.klass->_1.element_class);
    if ( !userEntity )
    {
LABEL_141:
      v186 = sub_1BAB69C(userEntity);
      sub_1BAB544(v186, 0LL);
    }
  }
  if ( v58->max_length <= 6 )
    goto LABEL_139;
  v58->m_Items[6] = v90;
  v91 = (ServantStatusBattleListViewItem_o *)&v58->m_Items[6];
LABEL_115:
  sub_1BAB3C0(v91, (int32_t)v90, v88, v89);
  v128 = System_String__Format_62062636(v55, v58, 0LL);
  userEntity = (__int64)this->fields.userEntity;
  if ( !userEntity )
    goto LABEL_140;
  if ( UserGameEntity__getAct((UserGameEntity_o *)userEntity, 0LL) < this->fields.usrMaxAp )
  {
    if ( this->fields.currentType == 2 )
    {
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v170 = LocalizationManager__Get((System_String_o *)StringLiteral_2126/*"AP_RECOVER_STONEPAY_WARNING_MSG"*/, 0LL);
      v171 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_378A22C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v172 = (CommonConfirmDialog_ClickDelegate_o *)sub_1BAB668(CommonConfirmDialog_ClickDelegate_TypeInfo);
      CommonConfirmDialog_ClickDelegate___ctor(
        v172,
        (Il2CppObject *)this,
        Method_RecoverItemComponent_spendItemDlg__,
        0LL);
      userEntity = (__int64)BalanceConfig_TypeInfo;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      if ( v171 )
      {
        CommonUI__OpenConfirmDecideDlgAddMsgFrame(
          (CommonUI_o *)v171,
          v33,
          v128,
          v170,
          v47,
          v48,
          v172,
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
      sub_1BAB678(userEntity, v31);
    }
    if ( this->fields.isAddAp || this->fields.apRcvRate != 100 || this->fields.spendNum >= 2 )
    {
      v181 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_378A22C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      targetId = this->fields.targetId;
      needAp = this->fields.needAp;
      v184 = (CommonUI_o *)v181;
      v185 = (System_Action_bool__int__o *)sub_1BAB668(System_Action_bool__int__TypeInfo);
      System_Action_bool__int____ctor(v185, (Il2CppObject *)this, Method_RecoverItemComponent_CloseApRecovDlg__, 0LL);
      if ( !v184 )
        goto LABEL_140;
      CommonUI__OpenApRecoverConfirmDlg(v184, targetId, needAp, v185, 0LL);
      return;
    }
LABEL_80:
    v129 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_378A22C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v130 = (CommonConfirmDialog_ClickDelegate_o *)sub_1BAB668(CommonConfirmDialog_ClickDelegate_TypeInfo);
    CommonConfirmDialog_ClickDelegate___ctor(
      v130,
      (Il2CppObject *)this,
      Method_RecoverItemComponent_spendItemDlg__,
      0LL);
    userEntity = (__int64)BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    if ( v129 )
    {
      CommonUI__OpenConfirmDecideDlg(
        (CommonUI_o *)v129,
        v33,
        v128,
        v47,
        v48,
        v130,
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
  v173 = LocalizationManager__Get((System_String_o *)StringLiteral_2118/*"AP_FULL_MSG"*/, 0LL);
  v174 = System_String__Format(v173, mText, 0LL);
  v175 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_378A22C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v176 = (System_Action_o *)sub_1BAB668(System_Action_TypeInfo);
  System_Action___ctor(v176, (Il2CppObject *)this, Method_RecoverItemComponent_closeNotificationDlg__, 0LL);
  if ( !v175 )
    goto LABEL_140;
  CommonUI__OpenNotificationDialog(
    (CommonUI_o *)v175,
    (System_String_o *)StringLiteral_1/*""*/,
    v174,
    v176,
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
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v7; // x1
  UILabel_o *currentNumLb; // x19
  Il2CppObject *v9; // x0
  System_String_o *v10; // x0
  __int64 v11; // x1
  int32_t v12; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4AB980E & 1) == 0 )
  {
    sub_1BAB41C(&int_TypeInfo, *(_QWORD *)&stoneCount);
    sub_1BAB41C(&StringLiteral_25014/*"{0:N0}"*/, v7);
    byte_4AB980E = 1;
  }
  currentNumLb = this->fields.currentNumLb;
  v12 = stoneCount;
  v9 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v12, method, v3, v4);
  v10 = System_String__Format((System_String_o *)StringLiteral_25014/*"{0:N0}"*/, v9, 0LL);
  if ( !currentNumLb )
    sub_1BAB678(v10, v11);
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

  if ( (byte_4AB9803 & 1) == 0 )
  {
    sub_1BAB41C(&RecoverItemComponent_CallbackFunc_TypeInfo, value);
    byte_4AB9803 = 1;
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
    v9 = sub_1BE690C(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_1BAB938(v8);
  RecoverItemComponent__remove_callbackFunc(v11, v12, v13);
}


void __fastcall RecoverItemComponent__closeNotificationDlg(RecoverItemComponent_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v3; // x1

  if ( (byte_4AB980C & 1) == 0 )
  {
    sub_1BAB41C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, method);
    byte_4AB980C = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_378A22C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1BAB678(0LL, v3);
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

  if ( (byte_4AB9804 & 1) == 0 )
  {
    sub_1BAB41C(&RecoverItemComponent_CallbackFunc_TypeInfo, value);
    byte_4AB9804 = 1;
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
    v9 = sub_1BE690C(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_1BAB938(v8);
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
  int32_t currentType; // w8
  RecoverItemComponent_o *v44; // x21
  RecoverItemComponent_o *v45; // x22
  __int64 v46; // x2
  __int64 v47; // x3
  __int64 v48; // x4
  int recvTarget; // w24
  UILabel_o *v50; // x21
  Il2CppObject *v51; // x0
  UILabel_o *v52; // x21
  const MethodInfo *v53; // x1
  System_String_o *v54; // x20
  __int64 v55; // x2
  __int64 v56; // x3
  __int64 v57; // x4
  Il2CppObject *v58; // x0
  System_String_o *v59; // x0
  UILabel_o *v60; // x20
  Il2CppObject *v61; // x21
  System_String_o *v62; // x22
  __int64 v63; // x2
  __int64 v64; // x3
  __int64 v65; // x4
  Il2CppObject *v66; // x23
  __int64 v67; // x2
  __int64 v68; // x3
  __int64 v69; // x4
  Il2CppObject *v70; // x0
  bool v71; // cc
  int v72; // w8
  UILabel_o *v73; // x22
  UILabel_o *v74; // x22
  Il2CppObject *v75; // x0
  CommandSpellEntity_o *v76; // x22
  int32_t type; // w8
  struct ItemIconComponent_o *itemIconInfo; // x27
  float v79; // s0
  int v80; // w8
  float usrMaxAp; // s8
  float v82; // s9
  float v83; // s8
  unsigned int v84; // w9
  unsigned int v85; // w8
  System_String_o *v86; // x23
  __int64 v87; // x2
  __int64 v88; // x3
  __int64 v89; // x4
  Il2CppObject *v90; // x0
  System_String_o *v91; // x0
  UILabel_o *itemDetailLb; // x23
  Il2CppObject *v93; // x24
  System_String_o *v94; // x25
  __int64 v95; // x2
  __int64 v96; // x3
  __int64 v97; // x4
  Il2CppObject *v98; // x26
  __int64 v99; // x2
  __int64 v100; // x3
  __int64 v101; // x4
  Il2CppObject *v102; // x0
  int backSprite; // w22
  float v104; // s8
  float v105; // s8
  unsigned int v106; // w9
  unsigned int v107; // w8
  ItemEntity_o *RecvItemData; // x0
  ItemEntity_o *v109; // x24
  __int64 v110; // x2
  __int64 v111; // x3
  __int64 v112; // x4
  int32_t num; // w28
  int32_t v114; // w8
  BalanceConfig_c *v115; // x0
  float v116; // s8
  int v117; // w8
  int v118; // s0
  float v119; // s9
  float v120; // s8
  int v121; // w8
  float v122; // s8
  float v123; // s8
  int32_t v124; // w11
  int32_t v125; // w12
  unsigned int v126; // w8
  System_String_o *v127; // x23
  __int64 v128; // x2
  __int64 v129; // x3
  __int64 v130; // x4
  Il2CppObject *v131; // x0
  System_String_o *v132; // x0
  UILabel_o *v133; // x23
  Il2CppObject *v134; // x25
  System_String_o *v135; // x26
  __int64 v136; // x2
  __int64 v137; // x3
  __int64 v138; // x4
  Il2CppObject *v139; // x27
  __int64 v140; // x2
  __int64 v141; // x3
  __int64 v142; // x4
  Il2CppObject *v143; // x0
  int value; // w23
  float v145; // s8
  float v146; // s8
  unsigned int v147; // w8
  System_String_o *v148; // x21
  __int64 v149; // x2
  __int64 v150; // x3
  __int64 v151; // x4
  Il2CppObject *v152; // x0
  System_String_o *v153; // x0
  UILabel_o *v154; // x21
  Il2CppObject *v155; // x23
  System_String_o *v156; // x24
  __int64 v157; // x2
  __int64 v158; // x3
  __int64 v159; // x4
  Il2CppObject *v160; // x0
  UILabel_o *v161; // x21
  Il2CppObject *v162; // x0
  UILabel_o *v163; // x21
  int v164; // w8
  System_String_o *v165; // x21
  __int64 v166; // x2
  __int64 v167; // x3
  __int64 v168; // x4
  Il2CppObject *v169; // x0
  System_String_o *v170; // x0
  UILabel_o *v171; // x21
  Il2CppObject *v172; // x22
  System_String_o *v173; // x23
  __int64 v174; // x2
  __int64 v175; // x3
  __int64 v176; // x4
  Il2CppObject *v177; // x0
  UILabel_o *currentNumLb; // x21
  UILabel_o *spendNumLb; // x21
  char v180; // w9
  int32_t v181; // [xsp+4h] [xbp-8Ch] BYREF
  int32_t recvApNum; // [xsp+8h] [xbp-88h] BYREF
  int32_t apRcvRate; // [xsp+Ch] [xbp-84h] BYREF
  int32_t spendNum; // [xsp+10h] [xbp-80h] BYREF
  int32_t CommandSpell; // [xsp+14h] [xbp-7Ch] BYREF
  UserItemEntity_o *entity; // [xsp+18h] [xbp-78h] BYREF

  v10 = this;
  if ( (byte_4AB9805 & 1) == 0 )
  {
    sub_1BAB41C(&BalanceConfig_TypeInfo, data);
    sub_1BAB41C(&Method_DataManager_GetMasterData_CommandSpellMaster___, v11);
    sub_1BAB41C(&Method_DataManager_GetMasterData_ItemMaster___, v12);
    sub_1BAB41C(&Method_DataManager_GetMasterData_StoneShopMaster___, v13);
    sub_1BAB41C(&Method_DataManager_GetMasterData_UserItemMaster___, v14);
    sub_1BAB41C(&Method_DataMasterBase_CommandSpellMaster__CommandSpellEntity__int__GetEntity__, v15);
    sub_1BAB41C(&Method_DataMasterBase_StoneShopMaster__StoneShopEntity__int__GetEntity__, v16);
    sub_1BAB41C(&int_TypeInfo, v17);
    sub_1BAB41C(&LocalizationManager_TypeInfo, v18);
    sub_1BAB41C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v19);
    sub_1BAB41C(&StringLiteral_3606/*"CMDSPELL_CURRENT_NUM"*/, v20);
    sub_1BAB41C(&StringLiteral_2043/*"ADD_RECOVER_CMDSPELL_TXT"*/, v21);
    sub_1BAB41C(&StringLiteral_3608/*"CMDSPELL_SPEND_NUM_TXT"*/, v22);
    sub_1BAB41C(&StringLiteral_25014/*"{0:N0}"*/, v23);
    sub_1BAB41C(&StringLiteral_915/*"-"*/, v24);
    sub_1BAB41C(&StringLiteral_14827/*"UNIT_INFO"*/, v25);
    sub_1BAB41C(&StringLiteral_12220/*"SPEND_NUM_TXT"*/, v26);
    sub_1BAB41C(&StringLiteral_3947/*"CURRENT_NUM_TXT"*/, v27);
    sub_1BAB41C(&StringLiteral_2044/*"ADD_RECOVER_NUM_TXT"*/, v28);
    sub_1BAB41C(&StringLiteral_2123/*"AP_RECOVER_NUM_TXT"*/, v29);
    this = (RecoverItemComponent_o *)sub_1BAB41C(&StringLiteral_3607/*"CMDSPELL_CURRENT_NUM_TXT"*/, v30);
    byte_4AB9805 = 1;
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
  sub_1BAB3C0((ServantStatusBattleListViewItem_o *)&v10->fields.dialog, (int32_t)dlg, needAp, (int32_t)dlg);
  v10->fields.callbackFunc = callback;
  v10->fields.needAp = needAp;
  *(_WORD *)&v10->fields.isAp = 1;
  sub_1BAB3C0((ServantStatusBattleListViewItem_o *)&v10->fields.callbackFunc, (int32_t)callback, v32, v33);
  this = (RecoverItemComponent_o *)v10->fields.maskImg;
  if ( !this )
    goto LABEL_151;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  v10->fields.userEntity = SelfUserGame;
  p_userEntity = (RecoverItemComponent_o **)&v10->fields.userEntity;
  sub_1BAB3C0((ServantStatusBattleListViewItem_o *)&v10->fields.userEntity, (int32_t)SelfUserGame, v36, v37);
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
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  this = (RecoverItemComponent_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3947/*"CURRENT_NUM_TXT"*/, 0LL);
  if ( !currentInfoLb )
    goto LABEL_151;
  UILabel__set_text(currentInfoLb, (System_String_o *)this, 0LL);
  spendInfoLb = v10->fields.spendInfoLb;
  this = (RecoverItemComponent_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12220/*"SPEND_NUM_TXT"*/, 0LL);
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
    v73 = v10->fields.currentInfoLb;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    this = (RecoverItemComponent_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3607/*"CMDSPELL_CURRENT_NUM_TXT"*/, 0LL);
    if ( !v73 )
      goto LABEL_151;
    UILabel__set_text(v73, (System_String_o *)this, 0LL);
    v74 = v10->fields.spendInfoLb;
    this = (RecoverItemComponent_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3608/*"CMDSPELL_SPEND_NUM_TXT"*/, 0LL);
    if ( !v74 )
      goto LABEL_151;
    UILabel__set_text(v74, (System_String_o *)this, 0LL);
    this = (RecoverItemComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_378A22C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !this )
      goto LABEL_151;
    this = (RecoverItemComponent_o *)DataManager__GetMasterData_object_(
                                       (DataManager_o *)this,
                                       (const MethodInfo_2EC55C8 *)Method_DataManager_GetMasterData_CommandSpellMaster___);
    if ( !this )
      goto LABEL_151;
    v75 = DataMasterBase_object__object__int___GetEntity(
            (DataMasterBase_TMaster__TEntity__PKType__o *)this,
            v10->fields.targetId,
            (const MethodInfo_3163D90 *)Method_DataMasterBase_CommandSpellMaster__CommandSpellEntity__int__GetEntity__);
    if ( !v75 )
      goto LABEL_150;
    v76 = (CommandSpellEntity_o *)v75;
    this = (RecoverItemComponent_o *)v10->fields.cmdSpellIcon;
    if ( !this )
      goto LABEL_151;
    CommandSpellIconComponent__SetData((CommandSpellIconComponent_o *)this, v10->fields.userEntity, 0LL);
    this = (RecoverItemComponent_o *)v10->fields.itemNameLb;
    if ( !this )
      goto LABEL_151;
    UILabel__set_text((UILabel_o *)this, v76->fields.name, 0LL);
    this = *p_userEntity;
    if ( !*p_userEntity )
      goto LABEL_151;
    CommandSpell = UserGameEntity__getCommandSpell((UserGameEntity_o *)this, 0LL);
    *p_spendNum = v76->fields.consume;
    this = (RecoverItemComponent_o *)CommandSpellEntity__getValues(v76, 0LL);
    if ( !this )
      goto LABEL_151;
    if ( LODWORD(this->fields.m_CancellationTokenSource) )
    {
      type = v76->fields.type;
      itemIconInfo = this->fields.itemIconInfo;
      if ( type == 3 )
      {
        if ( !itemIconInfo )
          goto LABEL_151;
        if ( !LODWORD(itemIconInfo->fields.m_CancellationTokenSource) )
          goto LABEL_152;
        v79 = (float)((float)SLODWORD(itemIconInfo->fields.backSprite) / 1000.0) * 100.0;
        v80 = (int)v79;
        if ( v79 == INFINITY )
          v80 = 0x80000000;
        v10->fields.apRcvRate = v80;
        usrMaxAp = (float)v10->fields.usrMaxAp;
        v82 = (float)SLODWORD(itemIconInfo->fields.backSprite) / 1000.0;
        if ( !byte_4AB12E7 )
        {
          sub_1BAB41C(&System_Math_TypeInfo, data);
          byte_4AB12E7 = 1;
        }
        v83 = v82 * usrMaxAp;
        if ( !System_Math_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
        v84 = vcvtps_s32_f32(v83);
        if ( ceilf(v83) == INFINITY )
          v85 = 0x80000000;
        else
          v85 = v84;
        v10->fields.recvApNum = v85;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v86 = LocalizationManager__Get((System_String_o *)StringLiteral_3606/*"CMDSPELL_CURRENT_NUM"*/, 0LL);
        spendNum = v10->fields.spendNum;
        v90 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &spendNum, v87, v88, v89);
        v91 = System_String__Format(v86, v90, 0LL);
        itemDetailLb = v10->fields.itemDetailLb;
        v93 = (Il2CppObject *)v91;
        v94 = LocalizationManager__Get((System_String_o *)StringLiteral_2123/*"AP_RECOVER_NUM_TXT"*/, 0LL);
        apRcvRate = v10->fields.apRcvRate;
        v98 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &apRcvRate, v95, v96, v97);
        recvApNum = v10->fields.recvApNum;
        v102 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &recvApNum, v99, v100, v101);
        this = (RecoverItemComponent_o *)System_String__Format_62062568(v94, v93, v98, v102, 0LL);
        if ( !itemDetailLb )
          goto LABEL_151;
        UILabel__set_text(itemDetailLb, (System_String_o *)this, 0LL);
        type = v76->fields.type;
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
            v71 = CommandSpell < v10->fields.spendNum;
            v72 = v10->fields.recvApNum + v10->fields.usrCurrentAp;
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
          v107 = *p_spendNum;
        }
        else
        {
          v104 = (float)(needAp - v10->fields.usrCurrentAp) / (float)backSprite;
          if ( !byte_4AB12E7 )
          {
            sub_1BAB41C(&System_Math_TypeInfo, data);
            byte_4AB12E7 = 1;
          }
          v105 = fmaxf(v104, 1.0);
          if ( !System_Math_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
          v106 = vcvtps_s32_f32(v105);
          if ( ceilf(v105) == INFINITY )
            v107 = 0x80000000;
          else
            v107 = v106;
          *p_spendNum = v107;
        }
        v10->fields.recvApNum = v107 * backSprite;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v165 = LocalizationManager__Get((System_String_o *)StringLiteral_3606/*"CMDSPELL_CURRENT_NUM"*/, 0LL);
        spendNum = v10->fields.spendNum;
        v169 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &spendNum, v166, v167, v168);
        v170 = System_String__Format(v165, v169, 0LL);
        v171 = v10->fields.itemDetailLb;
        v172 = (Il2CppObject *)v170;
        v173 = LocalizationManager__Get((System_String_o *)StringLiteral_2043/*"ADD_RECOVER_CMDSPELL_TXT"*/, 0LL);
        apRcvRate = v10->fields.recvApNum;
        v177 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &apRcvRate, v174, v175, v176);
        this = (RecoverItemComponent_o *)System_String__Format_62062500(v173, v172, v177, 0LL);
        if ( !v171 )
          goto LABEL_151;
        UILabel__set_text(v171, (System_String_o *)this, 0LL);
        v10->fields.isAddAp = 1;
        goto LABEL_143;
      }
    }
LABEL_152:
    sub_1BAB680(this, data);
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
          v109 = RecvItemData;
          this = (RecoverItemComponent_o *)v10->fields.itemIconInfo;
          if ( this )
          {
            ItemIconComponent__SetItemImage_38522388(
              (ItemIconComponent_o *)this,
              v109->fields.imageId,
              v109->fields.bgImageId,
              v109->fields.type,
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
                  UILabel__set_text((UILabel_o *)this, v109->fields.name, 0LL);
                  *p_spendNum = 1;
                  this = (RecoverItemComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_378A22C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
                  if ( this )
                  {
                    this = (RecoverItemComponent_o *)DataManager__GetMasterData_object_(
                                                       (DataManager_o *)this,
                                                       (const MethodInfo_2EC55C8 *)Method_DataManager_GetMasterData_UserItemMaster___);
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
                        v114 = v109->fields.type;
                        if ( v114 == 3 )
                        {
                          v115 = BalanceConfig_TypeInfo;
                          if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
                          {
                            j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
                            v115 = BalanceConfig_TypeInfo;
                          }
                          v10->fields.spendNum = v115->static_fields->SpendApRecvItemNum;
                          v116 = (float)v109->fields.value / 1000.0;
                          if ( (float)(v116 * 100.0) == INFINITY )
                            v117 = 0x80000000;
                          else
                            v117 = (int)(float)(v116 * 100.0);
                          v118 = v10->fields.usrMaxAp;
                          v10->fields.apRcvRate = v117;
                          v119 = (float)v118;
                          if ( !byte_4AB12E7 )
                          {
                            sub_1BAB41C(&System_Math_TypeInfo, data);
                            byte_4AB12E7 = 1;
                          }
                          v120 = v116 * v119;
                          if ( !System_Math_TypeInfo->_2.cctor_finished )
                            j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
                          v121 = vcvtps_s32_f32(v120);
                          if ( ceilf(v120) == INFINITY )
                            v121 = 0x80000000;
                          v10->fields.recvApNum = v121;
                          if ( needAp >= 1 )
                          {
                            v122 = (float)(needAp - v10->fields.usrCurrentAp) / (float)v121;
                            if ( !byte_4AB12E7 )
                            {
                              sub_1BAB41C(&System_Math_TypeInfo, data);
                              byte_4AB12E7 = 1;
                            }
                            v123 = fmaxf(v122, 1.0);
                            if ( !System_Math_TypeInfo->_2.cctor_finished )
                              j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
                            v124 = v10->fields.apRcvRate;
                            v125 = v10->fields.recvApNum;
                            v126 = vcvtps_s32_f32(v123);
                            if ( ceilf(v123) == INFINITY )
                              v126 = 0x80000000;
                            v10->fields.spendNum = v126;
                            v10->fields.apRcvRate = v124 * v126;
                            v10->fields.recvApNum = v125 * v126;
                          }
                          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                          v127 = LocalizationManager__Get((System_String_o *)StringLiteral_14827/*"UNIT_INFO"*/, 0LL);
                          spendNum = v10->fields.spendNum;
                          v131 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &spendNum, v128, v129, v130);
                          v132 = System_String__Format(v127, v131, 0LL);
                          v133 = v10->fields.itemDetailLb;
                          v134 = (Il2CppObject *)v132;
                          v135 = LocalizationManager__Get((System_String_o *)StringLiteral_2123/*"AP_RECOVER_NUM_TXT"*/, 0LL);
                          apRcvRate = v10->fields.apRcvRate;
                          v139 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &apRcvRate, v136, v137, v138);
                          recvApNum = v10->fields.recvApNum;
                          v143 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &recvApNum, v140, v141, v142);
                          this = (RecoverItemComponent_o *)System_String__Format_62062568(v135, v134, v139, v143, 0LL);
                          if ( !v133 )
                            goto LABEL_151;
                          UILabel__set_text(v133, (System_String_o *)this, 0LL);
                          v114 = v109->fields.type;
                        }
                        if ( v114 == 4 )
                        {
                          value = v109->fields.value;
                          if ( needAp < 1 )
                          {
                            *p_spendNum = 1;
                          }
                          else
                          {
                            v145 = (float)(needAp - v10->fields.usrCurrentAp) / (float)value;
                            if ( !byte_4AB12E7 )
                            {
                              sub_1BAB41C(&System_Math_TypeInfo, data);
                              byte_4AB12E7 = 1;
                            }
                            v146 = fmaxf(v145, 1.0);
                            if ( !System_Math_TypeInfo->_2.cctor_finished )
                              j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
                            v147 = vcvtps_s32_f32(v146);
                            if ( ceilf(v146) == INFINITY )
                              v147 = 0x80000000;
                            *p_spendNum = v147;
                            value *= v147;
                          }
                          v10->fields.recvApNum = value;
                          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                          v148 = LocalizationManager__Get((System_String_o *)StringLiteral_14827/*"UNIT_INFO"*/, 0LL);
                          spendNum = v10->fields.spendNum;
                          v152 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &spendNum, v149, v150, v151);
                          v153 = System_String__Format(v148, v152, 0LL);
                          v154 = v10->fields.itemDetailLb;
                          v155 = (Il2CppObject *)v153;
                          v156 = LocalizationManager__Get((System_String_o *)StringLiteral_2044/*"ADD_RECOVER_NUM_TXT"*/, 0LL);
                          apRcvRate = v10->fields.recvApNum;
                          v160 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &apRcvRate, v157, v158, v159);
                          this = (RecoverItemComponent_o *)System_String__Format_62062500(v156, v155, v160, 0LL);
                          if ( !v154 )
                            goto LABEL_151;
                          UILabel__set_text(v154, (System_String_o *)this, 0LL);
                          v10->fields.isAddAp = 1;
                        }
                        v161 = v10->fields.currentNumLb;
                        spendNum = num;
                        v162 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &spendNum, v110, v111, v112);
                        this = (RecoverItemComponent_o *)System_String__Format(
                                                           (System_String_o *)StringLiteral_25014/*"{0:N0}"*/,
                                                           v162,
                                                           0LL);
                        if ( v161 )
                        {
                          UILabel__set_text(v161, (System_String_o *)this, 0LL);
                          v163 = v10->fields.spendNumLb;
                          this = (RecoverItemComponent_o *)System_Int32__ToString((int)v10 + 128, 0LL);
                          if ( v163 )
                          {
                            UILabel__set_text(v163, (System_String_o *)this, 0LL);
                            v164 = v10->fields.recvApNum + v10->fields.usrCurrentAp;
                            v10->fields.isEnableSelect = num >= v10->fields.spendNum;
                            v10->fields.recvSum = v164;
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
    sub_1BAB678(this, data);
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
  this = (RecoverItemComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_378A22C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_151;
  this = (RecoverItemComponent_o *)DataManager__GetMasterData_object_(
                                     (DataManager_o *)this,
                                     (const MethodInfo_2EC55C8 *)Method_DataManager_GetMasterData_ItemMaster___);
  if ( !this )
    goto LABEL_151;
  this = (RecoverItemComponent_o *)ItemMaster__GetEntityByType((ItemMaster_o *)this, 2, 0LL);
  if ( !this )
    goto LABEL_151;
  v44 = this;
  this = (RecoverItemComponent_o *)v10->fields.itemIconInfo;
  if ( !this )
    goto LABEL_151;
  ItemIconComponent__SetItemImage_38522388(
    (ItemIconComponent_o *)this,
    (int32_t)v44->fields.cmdSpellBg,
    HIDWORD(v44->fields.cmdSpellBg),
    (int32_t)v44->fields.cmdSpellIcon,
    0,
    0LL);
  this = (RecoverItemComponent_o *)v10->fields.itemIconInfo;
  if ( !this )
    goto LABEL_151;
  this = (RecoverItemComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !this )
    goto LABEL_151;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
  this = (RecoverItemComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_378A22C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_151;
  this = (RecoverItemComponent_o *)DataManager__GetMasterData_object_(
                                     (DataManager_o *)this,
                                     (const MethodInfo_2EC55C8 *)Method_DataManager_GetMasterData_StoneShopMaster___);
  if ( !this )
    goto LABEL_151;
  this = (RecoverItemComponent_o *)DataMasterBase_object__object__int___GetEntity(
                                     (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                     v10->fields.targetId,
                                     (const MethodInfo_3163D90 *)Method_DataMasterBase_StoneShopMaster__StoneShopEntity__int__GetEntity__);
  if ( !v10->fields.itemNameLb )
    goto LABEL_151;
  v45 = this;
  UILabel__set_text(v10->fields.itemNameLb, (System_String_o *)v44->fields.m_CancellationTokenSource, 0LL);
  if ( !*p_userEntity )
    goto LABEL_151;
  recvTarget = (*p_userEntity)->fields.recvTarget;
  if ( v45 )
    *p_spendNum = HIDWORD(v45->fields.cmdSpellBg);
  v50 = v10->fields.currentNumLb;
  spendNum = recvTarget;
  v51 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &spendNum, v46, v47, v48);
  this = (RecoverItemComponent_o *)System_String__Format((System_String_o *)StringLiteral_25014/*"{0:N0}"*/, v51, 0LL);
  if ( !v50 )
    goto LABEL_151;
  UILabel__set_text(v50, (System_String_o *)this, 0LL);
  v52 = v10->fields.spendNumLb;
  this = (RecoverItemComponent_o *)System_Int32__ToString((int)v10 + 128, 0LL);
  if ( !v52 )
    goto LABEL_151;
  UILabel__set_text(v52, (System_String_o *)this, 0LL);
  RecoverItemComponent__AttachStoneCountRefreshComponent(v10, v53);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v54 = LocalizationManager__Get((System_String_o *)StringLiteral_14827/*"UNIT_INFO"*/, 0LL);
  apRcvRate = v10->fields.spendNum;
  v58 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &apRcvRate, v55, v56, v57);
  v59 = System_String__Format(v54, v58, 0LL);
  v60 = v10->fields.itemDetailLb;
  v61 = (Il2CppObject *)v59;
  v62 = LocalizationManager__Get((System_String_o *)StringLiteral_2123/*"AP_RECOVER_NUM_TXT"*/, 0LL);
  recvApNum = v10->fields.apRcvRate;
  v66 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &recvApNum, v63, v64, v65);
  v181 = v10->fields.recvApNum;
  v70 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v181, v67, v68, v69);
  this = (RecoverItemComponent_o *)System_String__Format_62062568(v62, v61, v66, v70, 0LL);
  if ( !v60 )
    goto LABEL_151;
  UILabel__set_text(v60, (System_String_o *)this, 0LL);
  v71 = recvTarget < v10->fields.spendNum;
  v72 = v10->fields.usrMaxAp + v10->fields.usrCurrentAp;
LABEL_146:
  v180 = !v71;
  v10->fields.isEnableSelect = v180;
  v10->fields.recvSum = v72;
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
      sub_1BAB678(0LL, method);
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
  int32_t currentType; // w8
  RecoverItemComponent_o *v43; // x21
  RecoverItemComponent_o *v44; // x22
  __int64 v45; // x2
  __int64 v46; // x3
  __int64 v47; // x4
  int recvTarget; // w23
  UILabel_o *v49; // x21
  Il2CppObject *v50; // x0
  UILabel_o *v51; // x21
  const MethodInfo *v52; // x1
  System_String_o *v53; // x20
  __int64 v54; // x2
  __int64 v55; // x3
  __int64 v56; // x4
  Il2CppObject *v57; // x0
  System_String_o *v58; // x0
  UILabel_o *v59; // x20
  Il2CppObject *v60; // x21
  System_String_o *v61; // x22
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
  struct ItemIconComponent_o *itemIconInfo; // x8
  int backSprite; // w22
  float v74; // s8
  float v75; // s8
  unsigned int v76; // w9
  unsigned int v77; // w8
  ItemEntity_o *RecvItemData; // x0
  ItemEntity_o *v79; // x24
  __int64 v80; // x1
  int32_t v81; // w26
  int value; // w23
  float v83; // s8
  float v84; // s8
  unsigned int v85; // w8
  System_String_o *v86; // x21
  __int64 v87; // x2
  __int64 v88; // x3
  __int64 v89; // x4
  Il2CppObject *v90; // x0
  System_String_o *v91; // x0
  UILabel_o *v92; // x21
  Il2CppObject *v93; // x23
  System_String_o *v94; // x24
  __int64 v95; // x2
  __int64 v96; // x3
  __int64 v97; // x4
  Il2CppObject *v98; // x0
  UILabel_o *v99; // x21
  __int64 v100; // x2
  __int64 v101; // x3
  __int64 v102; // x4
  Il2CppObject *v103; // x0
  UILabel_o *v104; // x21
  int v105; // w8
  System_String_o *v106; // x21
  __int64 v107; // x2
  __int64 v108; // x3
  __int64 v109; // x4
  Il2CppObject *v110; // x0
  System_String_o *v111; // x0
  UILabel_o *itemDetailLb; // x21
  Il2CppObject *v113; // x22
  System_String_o *v114; // x23
  __int64 v115; // x2
  __int64 v116; // x3
  __int64 v117; // x4
  Il2CppObject *v118; // x0
  UILabel_o *currentNumLb; // x21
  UILabel_o *spendNumLb; // x21
  char v121; // w9
  int32_t v122; // [xsp+0h] [xbp-70h] BYREF
  int32_t recvRpNum; // [xsp+4h] [xbp-6Ch] BYREF
  int32_t spendNum; // [xsp+8h] [xbp-68h] BYREF
  int32_t CommandSpell; // [xsp+Ch] [xbp-64h] BYREF
  UserItemEntity_o *entity; // [xsp+28h] [xbp-48h] BYREF

  v10 = this;
  if ( (byte_4AB9806 & 1) == 0 )
  {
    sub_1BAB41C(&BalanceConfig_TypeInfo, data);
    sub_1BAB41C(&Method_DataManager_GetMasterData_CommandSpellMaster___, v11);
    sub_1BAB41C(&Method_DataManager_GetMasterData_ItemMaster___, v12);
    sub_1BAB41C(&Method_DataManager_GetMasterData_StoneShopMaster___, v13);
    sub_1BAB41C(&Method_DataManager_GetMasterData_UserItemMaster___, v14);
    sub_1BAB41C(&Method_DataMasterBase_CommandSpellMaster__CommandSpellEntity__int__GetEntity__, v15);
    sub_1BAB41C(&Method_DataMasterBase_StoneShopMaster__StoneShopEntity__int__GetEntity__, v16);
    sub_1BAB41C(&int_TypeInfo, v17);
    sub_1BAB41C(&LocalizationManager_TypeInfo, v18);
    sub_1BAB41C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v19);
    sub_1BAB41C(&StringLiteral_3606/*"CMDSPELL_CURRENT_NUM"*/, v20);
    sub_1BAB41C(&StringLiteral_3608/*"CMDSPELL_SPEND_NUM_TXT"*/, v21);
    sub_1BAB41C(&StringLiteral_25014/*"{0:N0}"*/, v22);
    sub_1BAB41C(&StringLiteral_915/*"-"*/, v23);
    sub_1BAB41C(&StringLiteral_14827/*"UNIT_INFO"*/, v24);
    sub_1BAB41C(&StringLiteral_12220/*"SPEND_NUM_TXT"*/, v25);
    sub_1BAB41C(&StringLiteral_3947/*"CURRENT_NUM_TXT"*/, v26);
    sub_1BAB41C(&StringLiteral_11138/*"RP_RECOVER_CMDSPELL_TXT"*/, v27);
    sub_1BAB41C(&StringLiteral_11140/*"RP_RECOVER_NUM_TXT"*/, v28);
    this = (RecoverItemComponent_o *)sub_1BAB41C(&StringLiteral_3607/*"CMDSPELL_CURRENT_NUM_TXT"*/, v29);
    byte_4AB9806 = 1;
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
  sub_1BAB3C0((ServantStatusBattleListViewItem_o *)&v10->fields.dialog, (int32_t)dlg, needRp, (int32_t)dlg);
  v10->fields.callbackFunc = callback;
  sub_1BAB3C0((ServantStatusBattleListViewItem_o *)&v10->fields.callbackFunc, (int32_t)callback, v31, v32);
  this = (RecoverItemComponent_o *)v10->fields.maskImg;
  if ( !this )
    goto LABEL_107;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  v10->fields.userEntity = SelfUserGame;
  p_userEntity = (RecoverItemComponent_o **)&v10->fields.userEntity;
  sub_1BAB3C0((ServantStatusBattleListViewItem_o *)&v10->fields.userEntity, (int32_t)SelfUserGame, v35, v36);
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
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  this = (RecoverItemComponent_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3947/*"CURRENT_NUM_TXT"*/, 0LL);
  if ( !currentInfoLb )
    goto LABEL_107;
  UILabel__set_text(currentInfoLb, (System_String_o *)this, 0LL);
  spendInfoLb = v10->fields.spendInfoLb;
  this = (RecoverItemComponent_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12220/*"SPEND_NUM_TXT"*/, 0LL);
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
          v68 = v10->fields.currentInfoLb;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          this = (RecoverItemComponent_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3607/*"CMDSPELL_CURRENT_NUM_TXT"*/, 0LL);
          if ( v68 )
          {
            UILabel__set_text(v68, (System_String_o *)this, 0LL);
            v69 = v10->fields.spendInfoLb;
            this = (RecoverItemComponent_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3608/*"CMDSPELL_SPEND_NUM_TXT"*/, 0LL);
            if ( v69 )
            {
              UILabel__set_text(v69, (System_String_o *)this, 0LL);
              this = (RecoverItemComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_378A22C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
              if ( this )
              {
                this = (RecoverItemComponent_o *)DataManager__GetMasterData_object_(
                                                   (DataManager_o *)this,
                                                   (const MethodInfo_2EC55C8 *)Method_DataManager_GetMasterData_CommandSpellMaster___);
                if ( this )
                {
                  v70 = DataMasterBase_object__object__int___GetEntity(
                          (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                          v10->fields.targetId,
                          (const MethodInfo_3163D90 *)Method_DataMasterBase_CommandSpellMaster__CommandSpellEntity__int__GetEntity__);
                  if ( !v70 )
                    goto LABEL_106;
                  v71 = (CommandSpellEntity_o *)v70;
                  this = (RecoverItemComponent_o *)v10->fields.cmdSpellIcon;
                  if ( this )
                  {
                    CommandSpellIconComponent__SetData((CommandSpellIconComponent_o *)this, v10->fields.userEntity, 0LL);
                    this = (RecoverItemComponent_o *)v10->fields.itemNameLb;
                    if ( this )
                    {
                      UILabel__set_text((UILabel_o *)this, v71->fields.name, 0LL);
                      this = *p_userEntity;
                      if ( *p_userEntity )
                      {
                        CommandSpell = UserGameEntity__getCommandSpell((UserGameEntity_o *)this, 0LL);
                        *p_spendNum = v71->fields.consume;
                        this = (RecoverItemComponent_o *)CommandSpellEntity__getValues(v71, 0LL);
                        if ( this )
                        {
                          if ( !LODWORD(this->fields.m_CancellationTokenSource) )
                            goto LABEL_108;
                          itemIconInfo = this->fields.itemIconInfo;
                          if ( !itemIconInfo )
                            goto LABEL_107;
                          if ( !LODWORD(itemIconInfo->fields.m_CancellationTokenSource) )
LABEL_108:
                            sub_1BAB680(this, data);
                          backSprite = (int)itemIconInfo->fields.backSprite;
                          if ( needRp < 1 )
                          {
                            v77 = *p_spendNum;
                          }
                          else
                          {
                            v74 = (float)(needRp - v10->fields.usrCurrentRp) / (float)backSprite;
                            if ( !byte_4AB12E7 )
                            {
                              sub_1BAB41C(&System_Math_TypeInfo, data);
                              byte_4AB12E7 = 1;
                            }
                            v75 = fmaxf(v74, 1.0);
                            if ( !System_Math_TypeInfo->_2.cctor_finished )
                              j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
                            v76 = vcvtps_s32_f32(v75);
                            if ( ceilf(v75) == INFINITY )
                              v77 = 0x80000000;
                            else
                              v77 = v76;
                            *p_spendNum = v77;
                          }
                          v10->fields.recvRpNum = v77 * backSprite;
                          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                          v106 = LocalizationManager__Get((System_String_o *)StringLiteral_3606/*"CMDSPELL_CURRENT_NUM"*/, 0LL);
                          spendNum = v10->fields.spendNum;
                          v110 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &spendNum, v107, v108, v109);
                          v111 = System_String__Format(v106, v110, 0LL);
                          itemDetailLb = v10->fields.itemDetailLb;
                          v113 = (Il2CppObject *)v111;
                          v114 = LocalizationManager__Get((System_String_o *)StringLiteral_11138/*"RP_RECOVER_CMDSPELL_TXT"*/, 0LL);
                          recvRpNum = v10->fields.recvRpNum;
                          v118 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &recvRpNum, v115, v116, v117);
                          this = (RecoverItemComponent_o *)System_String__Format_62062500(v114, v113, v118, 0LL);
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
                                v66 = CommandSpell < v10->fields.spendNum;
                                v67 = v10->fields.recvRpNum + v10->fields.usrCurrentRp;
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
          v79 = RecvItemData;
          this = (RecoverItemComponent_o *)v10->fields.itemIconInfo;
          if ( this )
          {
            ItemIconComponent__SetItemImage_38522388(
              (ItemIconComponent_o *)this,
              v79->fields.imageId,
              v79->fields.bgImageId,
              v79->fields.type,
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
                  UILabel__set_text((UILabel_o *)this, v79->fields.name, 0LL);
                  this = (RecoverItemComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_378A22C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
                  if ( this )
                  {
                    this = (RecoverItemComponent_o *)DataManager__GetMasterData_object_(
                                                       (DataManager_o *)this,
                                                       (const MethodInfo_2EC55C8 *)Method_DataManager_GetMasterData_UserItemMaster___);
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
                        v81 = entity ? entity->fields.num : 0;
                        value = v79->fields.value;
                        if ( needRp < 1 )
                        {
                          *p_spendNum = 1;
                        }
                        else
                        {
                          v83 = (float)(needRp - v10->fields.usrCurrentRp) / (float)value;
                          if ( !byte_4AB12E7 )
                          {
                            sub_1BAB41C(&System_Math_TypeInfo, v80);
                            byte_4AB12E7 = 1;
                          }
                          v84 = fmaxf(v83, 1.0);
                          if ( !System_Math_TypeInfo->_2.cctor_finished )
                            j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
                          v85 = vcvtps_s32_f32(v84);
                          if ( ceilf(v84) == INFINITY )
                            v85 = 0x80000000;
                          *p_spendNum = v85;
                          value *= v85;
                        }
                        v10->fields.recvRpNum = value;
                        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                        v86 = LocalizationManager__Get((System_String_o *)StringLiteral_14827/*"UNIT_INFO"*/, 0LL);
                        spendNum = v10->fields.spendNum;
                        v90 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &spendNum, v87, v88, v89);
                        v91 = System_String__Format(v86, v90, 0LL);
                        v92 = v10->fields.itemDetailLb;
                        v93 = (Il2CppObject *)v91;
                        v94 = LocalizationManager__Get((System_String_o *)StringLiteral_11140/*"RP_RECOVER_NUM_TXT"*/, 0LL);
                        recvRpNum = v10->fields.recvRpNum;
                        v98 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &recvRpNum, v95, v96, v97);
                        this = (RecoverItemComponent_o *)System_String__Format_62062500(v94, v93, v98, 0LL);
                        if ( v92 )
                        {
                          UILabel__set_text(v92, (System_String_o *)this, 0LL);
                          v99 = v10->fields.currentNumLb;
                          v122 = v81;
                          v103 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v122, v100, v101, v102);
                          this = (RecoverItemComponent_o *)System_String__Format(
                                                             (System_String_o *)StringLiteral_25014/*"{0:N0}"*/,
                                                             v103,
                                                             0LL);
                          if ( v99 )
                          {
                            UILabel__set_text(v99, (System_String_o *)this, 0LL);
                            v104 = v10->fields.spendNumLb;
                            this = (RecoverItemComponent_o *)System_Int32__ToString((int)v10 + 128, 0LL);
                            if ( v104 )
                            {
                              UILabel__set_text(v104, (System_String_o *)this, 0LL);
                              v105 = v10->fields.recvRpNum + v10->fields.usrCurrentRp;
                              v10->fields.isEnableSelect = v81 >= v10->fields.spendNum;
                              v10->fields.recvSum = v105;
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
  this = (RecoverItemComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_378A22C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_107;
  this = (RecoverItemComponent_o *)DataManager__GetMasterData_object_(
                                     (DataManager_o *)this,
                                     (const MethodInfo_2EC55C8 *)Method_DataManager_GetMasterData_ItemMaster___);
  if ( !this )
    goto LABEL_107;
  this = (RecoverItemComponent_o *)ItemMaster__GetEntityByType((ItemMaster_o *)this, 2, 0LL);
  if ( !this )
    goto LABEL_107;
  v43 = this;
  this = (RecoverItemComponent_o *)v10->fields.itemIconInfo;
  if ( !this )
    goto LABEL_107;
  ItemIconComponent__SetItemImage_38522388(
    (ItemIconComponent_o *)this,
    (int32_t)v43->fields.cmdSpellBg,
    HIDWORD(v43->fields.cmdSpellBg),
    (int32_t)v43->fields.cmdSpellIcon,
    0,
    0LL);
  this = (RecoverItemComponent_o *)v10->fields.itemIconInfo;
  if ( !this )
    goto LABEL_107;
  this = (RecoverItemComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !this )
    goto LABEL_107;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
  this = (RecoverItemComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_378A22C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_107;
  this = (RecoverItemComponent_o *)DataManager__GetMasterData_object_(
                                     (DataManager_o *)this,
                                     (const MethodInfo_2EC55C8 *)Method_DataManager_GetMasterData_StoneShopMaster___);
  if ( !this )
    goto LABEL_107;
  this = (RecoverItemComponent_o *)DataMasterBase_object__object__int___GetEntity(
                                     (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                     v10->fields.targetId,
                                     (const MethodInfo_3163D90 *)Method_DataMasterBase_StoneShopMaster__StoneShopEntity__int__GetEntity__);
  if ( !v10->fields.itemNameLb )
    goto LABEL_107;
  v44 = this;
  UILabel__set_text(v10->fields.itemNameLb, (System_String_o *)v43->fields.m_CancellationTokenSource, 0LL);
  if ( !*p_userEntity )
    goto LABEL_107;
  recvTarget = (*p_userEntity)->fields.recvTarget;
  if ( v44 )
    *p_spendNum = HIDWORD(v44->fields.cmdSpellBg);
  v49 = v10->fields.currentNumLb;
  spendNum = recvTarget;
  v50 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &spendNum, v45, v46, v47);
  this = (RecoverItemComponent_o *)System_String__Format((System_String_o *)StringLiteral_25014/*"{0:N0}"*/, v50, 0LL);
  if ( !v49 )
    goto LABEL_107;
  UILabel__set_text(v49, (System_String_o *)this, 0LL);
  v51 = v10->fields.spendNumLb;
  this = (RecoverItemComponent_o *)System_Int32__ToString((int)v10 + 128, 0LL);
  if ( !v51 )
    goto LABEL_107;
  UILabel__set_text(v51, (System_String_o *)this, 0LL);
  RecoverItemComponent__AttachStoneCountRefreshComponent(v10, v52);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v53 = LocalizationManager__Get((System_String_o *)StringLiteral_14827/*"UNIT_INFO"*/, 0LL);
  recvRpNum = v10->fields.spendNum;
  v57 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &recvRpNum, v54, v55, v56);
  v58 = System_String__Format(v53, v57, 0LL);
  v59 = v10->fields.itemDetailLb;
  v60 = (Il2CppObject *)v58;
  v61 = LocalizationManager__Get((System_String_o *)StringLiteral_11140/*"RP_RECOVER_NUM_TXT"*/, 0LL);
  v122 = v10->fields.recvRpNum;
  v65 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v122, v62, v63, v64);
  this = (RecoverItemComponent_o *)System_String__Format_62062500(v61, v60, v65, 0LL);
  if ( !v59 )
LABEL_107:
    sub_1BAB678(this, data);
  UILabel__set_text(v59, (System_String_o *)this, 0LL);
  v66 = recvTarget < v10->fields.spendNum;
  v67 = v10->fields.recvRpNum + v10->fields.usrCurrentRp;
LABEL_102:
  v121 = !v66;
  v10->fields.isEnableSelect = v121;
  v10->fields.recvSum = v67;
LABEL_106:
  RecoverItemComponent__setEnableSelectItem(v10, (const MethodInfo *)data);
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
  System_String_o *v19; // x20
  RecoverItemComponent___c_c *v20; // x8
  System_Action_o *_9__43_0; // x22
  System_String_o *v22; // x21
  Il2CppObject *v23; // x23
  struct RecoverItemComponent___c_StaticFields *static_fields; // x0
  int32_t v25; // w2
  int32_t v26; // w3

  if ( (byte_4AB980B & 1) == 0 )
  {
    sub_1BAB41C(&System_Action_TypeInfo, method);
    sub_1BAB41C(&Method_DataManager_GetMasterData_EventMaster___, v5);
    sub_1BAB41C(&LocalizationManager_TypeInfo, v6);
    sub_1BAB41C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v7);
    sub_1BAB41C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8);
    sub_1BAB41C(&TerminalSceneComponent_TypeInfo, v9);
    sub_1BAB41C(&Method_RecoverItemComponent___c__setRequestInfo_b__43_0__, v10);
    sub_1BAB41C(&RecoverItemComponent___c_TypeInfo, v11);
    sub_1BAB41C(&StringLiteral_11141/*"RP_UNRECOVERABLE_MESSAGE"*/, v12);
    sub_1BAB41C(&StringLiteral_1/*""*/, v13);
    byte_4AB980B = 1;
  }
  if ( this->fields.recvTarget != 2 )
    goto LABEL_14;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_378A22C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_27;
  DataManager__GetMasterData_object_(
    Instance,
    (const MethodInfo_2EC55C8 *)Method_DataManager_GetMasterData_EventMaster___);
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  if ( !byte_4AB0C49 )
  {
    sub_1BAB41C(&TerminalSceneComponent_TypeInfo, v15);
    byte_4AB0C49 = 1;
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
    sub_1BAB678(Instance, v15);
  if ( !ScrPlayerStatus__IsBPActive((ScrPlayerStatus_o *)Instance, 0LL) )
  {
    v18 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_378A22C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    Instance = (DataManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11141/*"RP_UNRECOVERABLE_MESSAGE"*/, 0LL);
    v19 = (System_String_o *)Instance;
    v20 = RecoverItemComponent___c_TypeInfo;
    if ( !RecoverItemComponent___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(RecoverItemComponent___c_TypeInfo);
      v20 = RecoverItemComponent___c_TypeInfo;
    }
    _9__43_0 = v20->static_fields->__9__43_0;
    v22 = (System_String_o *)StringLiteral_1/*""*/;
    if ( !_9__43_0 )
    {
      if ( !v20->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v20);
        v20 = RecoverItemComponent___c_TypeInfo;
      }
      v23 = (Il2CppObject *)v20->static_fields->__9;
      _9__43_0 = (System_Action_o *)sub_1BAB668(System_Action_TypeInfo);
      System_Action___ctor(_9__43_0, v23, Method_RecoverItemComponent___c__setRequestInfo_b__43_0__, 0LL);
      static_fields = RecoverItemComponent___c_TypeInfo->static_fields;
      static_fields->__9__43_0 = _9__43_0;
      sub_1BAB3C0((ServantStatusBattleListViewItem_o *)&static_fields->__9__43_0, (int32_t)_9__43_0, v25, v26);
    }
    if ( v18 )
    {
      CommonUI__OpenNotificationDialog((CommonUI_o *)v18, v22, v19, _9__43_0, -1, 0, 0, 0, 1, 0, 1, 0, 0LL, 0.0, 0LL);
      return;
    }
    goto LABEL_27;
  }
LABEL_14:
  callbackFunc = this->fields.callbackFunc;
  if ( callbackFunc )
  {
    this->fields.callbackFunc = 0LL;
    sub_1BAB3C0((ServantStatusBattleListViewItem_o *)&this->fields.callbackFunc, 0, v2, v3);
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

  if ( (byte_4AB9809 & 1) == 0 )
  {
    sub_1BAB41C(&System_Action_TypeInfo, isRes);
    sub_1BAB41C(&Method_RecoverItemComponent_setRequestInfo__, v5);
    sub_1BAB41C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6);
    byte_4AB9809 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_378A22C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v9 = (CommonUI_o *)Instance;
  if ( isRes )
  {
    v10 = (System_Action_o *)sub_1BAB668(System_Action_TypeInfo);
    System_Action___ctor(v10, (Il2CppObject *)this, Method_RecoverItemComponent_setRequestInfo__, 0LL);
    if ( v9 )
    {
      CommonUI__CloseConfirmDialog_30637300(v9, v10, 0LL);
      return;
    }
LABEL_8:
    sub_1BAB678(Instance, v8);
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
  sub_1BAB3C0((ServantStatusBattleListViewItem_o *)&this->fields.method, (int32_t)object, method, (int32_t)a4);
  v8 = *(unsigned __int8 *)(v6 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1BAB4DC(v6) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1BAB694(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1BAB544(v10, 0LL);
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
  this->fields.m_target = (Il2CppObject *)sub_19F385C;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_19F37FC;
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
  if ( (byte_4AB980F & 1) == 0 )
  {
    sub_1BAB41C(&int_TypeInfo, *(_QWORD *)&type);
    sub_1BAB41C(&RecoverType_Type_TypeInfo, v10);
    byte_4AB980F = 1;
  }
  v19 = 0u;
  v18[0] = j_il2cpp_value_box_0(RecoverType_Type_TypeInfo, &v22, *(_QWORD *)&id, *(_QWORD *)&num, callback);
  v18[1] = j_il2cpp_value_box_0(int_TypeInfo, &v21, v11, v12, v13);
  *(_QWORD *)&v19 = j_il2cpp_value_box_0(int_TypeInfo, &v20, v14, v15, v16);
  return (System_IAsyncResult_o *)sub_1BAB3D0(this, v18, callback, object);
}


void __fastcall RecoverItemComponent_CallbackFunc__EndInvoke(
        RecoverItemComponent_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1BAB3D4(result, 0LL, method);
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
  int32_t v3; // w2
  int32_t v4; // w3

  if ( (byte_4AB9810 & 1) == 0 )
  {
    sub_1BAB41C(&RecoverItemComponent___c_TypeInfo, v1);
    byte_4AB9810 = 1;
  }
  v2 = (Il2CppObject *)sub_1BAB668(RecoverItemComponent___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  RecoverItemComponent___c_TypeInfo->static_fields->__9 = (struct RecoverItemComponent___c_o *)v2;
  sub_1BAB3C0(
    (ServantStatusBattleListViewItem_o *)RecoverItemComponent___c_TypeInfo->static_fields,
    (int32_t)v2,
    v3,
    v4);
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

  if ( (byte_4AB9811 & 1) == 0 )
  {
    sub_1BAB41C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, method);
    sub_1BAB41C(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v2);
    byte_4AB9811 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_378A22C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance
    || (CommonUI__CloseRecoverItemListDialog((CommonUI_o *)Instance, 0LL),
        (Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_378A22C *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__)) == 0LL) )
  {
    sub_1BAB678(Instance, v4);
  }
  AvalonSceneManager__transitionSceneRefresh((AvalonSceneManager_o *)Instance, 34, 1, 0LL, 0, 0LL);
}