void __fastcall BattleSelectMainSubServantWindow___ctor(
        BattleSelectMainSubServantWindow_o *this,
        const MethodInfo *method)
{
  this->fields.isSelected = 1;
  BattleWindowOuterClickManagerComponent___ctor((BattleWindowOuterClickManagerComponent_o *)this, 0LL);
}


bool __fastcall BattleSelectMainSubServantWindow__CheckCanOrderChangeServant(
        BattleSelectMainSubServantWindow_o *this,
        BattleServantData_o *servantData,
        const MethodInfo *method)
{
  __int64 v3; // x3
  BattleBuffData_o *buffData; // x19
  BattleBuffData_CheckIndividualitiesData_o *v6; // x20

  if ( (byte_4B1925A & 1) == 0 )
  {
    this = (BattleSelectMainSubServantWindow_o *)sub_1BCA7E0(
                                                   &BattleBuffData_CheckIndividualitiesData_TypeInfo,
                                                   servantData,
                                                   method);
    byte_4B1925A = 1;
  }
  if ( !servantData
    || (buffData = servantData->fields.buffData,
        v6 = (BattleBuffData_CheckIndividualitiesData_o *)sub_1BCAA2C(
                                                            BattleBuffData_CheckIndividualitiesData_TypeInfo,
                                                            servantData,
                                                            method,
                                                            v3),
        BattleBuffData_CheckIndividualitiesData___ctor_43379556(v6, servantData, 0LL, 0LL, 0LL, 0LL, 0LL, 0LL),
        !buffData)
    || (this = (BattleSelectMainSubServantWindow_o *)BattleBuffData__getBuffList_43192668(
                                                       buffData,
                                                       84,
                                                       v6,
                                                       1,
                                                       0,
                                                       0LL,
                                                       0LL,
                                                       0LL)) == 0LL )
  {
    sub_1BCAA3C(this, servantData);
  }
  return this->fields.m_CancellationTokenSource == 0LL;
}


void __fastcall BattleSelectMainSubServantWindow__Close(
        BattleSelectMainSubServantWindow_o *this,
        BattleWindowComponent_EndCall_o *call,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *parentPanel; // x0
  struct BattleSelectServantComponent_array *mainSvtList; // x8
  __int64 v7; // x21
  int max_length; // w9
  BattleSelectServantComponent_o *v9; // x8
  struct BattleSelectServantComponent_array *subSvtList; // x8
  __int64 v11; // x21
  int v12; // w9
  BattleSelectServantComponent_o *v13; // x8

  parentPanel = this->fields.parentPanel;
  if ( !parentPanel )
    goto LABEL_17;
  UnityEngine_GameObject__SetActive(parentPanel, 0, 0LL);
  mainSvtList = this->fields.mainSvtList;
  this->fields.isSelected = 1;
  if ( !mainSvtList )
    goto LABEL_17;
  v7 = 0LL;
  while ( 1 )
  {
    max_length = mainSvtList->max_length;
    if ( (int)v7 >= max_length )
      break;
    if ( (unsigned int)v7 >= max_length )
LABEL_19:
      sub_1BCAA44(parentPanel, call);
    v9 = mainSvtList->m_Items[v7];
    if ( v9 )
    {
      parentPanel = (UnityEngine_GameObject_o *)v9->fields.servantIcon;
      if ( parentPanel )
      {
        ServantFaceIconComponent__ClearFaceAtlas((ServantFaceIconComponent_o *)parentPanel, 0LL);
        mainSvtList = this->fields.mainSvtList;
        ++v7;
        if ( mainSvtList )
          continue;
      }
    }
    goto LABEL_17;
  }
  subSvtList = this->fields.subSvtList;
  if ( !subSvtList )
LABEL_17:
    sub_1BCAA3C(parentPanel, call);
  v11 = 0LL;
  while ( 1 )
  {
    v12 = subSvtList->max_length;
    if ( (int)v11 >= v12 )
      break;
    if ( (unsigned int)v11 >= v12 )
      goto LABEL_19;
    v13 = subSvtList->m_Items[v11];
    if ( v13 )
    {
      parentPanel = (UnityEngine_GameObject_o *)v13->fields.servantIcon;
      if ( parentPanel )
      {
        ServantFaceIconComponent__ClearFaceAtlas((ServantFaceIconComponent_o *)parentPanel, 0LL);
        subSvtList = this->fields.subSvtList;
        ++v11;
        if ( subSvtList )
          continue;
      }
    }
    goto LABEL_17;
  }
  BattleWindowComponent__Close((BattleWindowComponent_o *)this, call, 0LL);
}


// attributes: thunk
void __fastcall BattleSelectMainSubServantWindow__Open(
        BattleSelectMainSubServantWindow_o *this,
        BattleWindowComponent_EndCall_o *call,
        const MethodInfo *method)
{
  BattleSelectMainSubServantWindow__OpenImpl(this, call, method);
}


void __fastcall BattleSelectMainSubServantWindow__OpenImpl(
        BattleSelectMainSubServantWindow_o *this,
        BattleWindowComponent_EndCall_o *call,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  BattleData_o *battleData; // x0
  BattleServantData_array *v8; // x21
  BattleServantData_array *SubPlayerServantList; // x0
  const MethodInfo *v10; // x3
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x3
  BattleWindowOuterClickComponent_OuterClickCall_o *v14; // x20

  if ( (byte_4B19256 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_BattleSelectMainSubServantWindow_onCloseButton__, call, method);
    sub_1BCA7E0(&BattleWindowOuterClickComponent_OuterClickCall_TypeInfo, v5, v6);
    byte_4B19256 = 1;
  }
  battleData = this->fields.battleData;
  if ( !battleData )
    goto LABEL_9;
  battleData = (BattleData_o *)BattleData__getFieldPlayerServantList(battleData, 0LL);
  if ( !this->fields.battleData )
    goto LABEL_9;
  v8 = (BattleServantData_array *)battleData;
  SubPlayerServantList = BattleData__getSubPlayerServantList(this->fields.battleData, 0LL);
  BattleSelectMainSubServantWindow__SetServantData(this, v8, SubPlayerServantList, v10);
  battleData = (BattleData_o *)this->fields.parentPanel;
  if ( !battleData
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)battleData, 1, 0LL),
        (battleData = (BattleData_o *)this->fields.actButton) == 0LL)
    || (((void (__fastcall *)(BattleData_o *, _QWORD, void *))battleData->klass->vtable._5_isAiTarget.method)(
          battleData,
          0LL,
          battleData->klass[1]._1.image),
        (battleData = (BattleData_o *)this->fields.actButton) == 0LL) )
  {
LABEL_9:
    sub_1BCAA3C(battleData, call);
  }
  ((void (__fastcall *)(BattleData_o *, __int64, __int64, void *))battleData->klass[1]._1.events)(
    battleData,
    3LL,
    1LL,
    battleData->klass[1]._1.properties);
  this->fields.isSelected = 0;
  *(_QWORD *)&this->fields.mainSelect_uniqueId = 0LL;
  BattleWindowComponent__Open((BattleWindowComponent_o *)this, call, 0LL);
  v14 = (BattleWindowOuterClickComponent_OuterClickCall_o *)sub_1BCAA2C(
                                                              BattleWindowOuterClickComponent_OuterClickCall_TypeInfo,
                                                              v11,
                                                              v12,
                                                              v13);
  BattleWindowOuterClickComponent_OuterClickCall___ctor(
    v14,
    (Il2CppObject *)this,
    (intptr_t)Method_BattleSelectMainSubServantWindow_onCloseButton__,
    0LL);
  BattleWindowOuterClickManagerComponent__setOuterClickCallBack(
    (BattleWindowOuterClickManagerComponent_o *)this,
    v14,
    0LL);
}


void __fastcall BattleSelectMainSubServantWindow__SetCallBack(
        BattleSelectMainSubServantWindow_o *this,
        BattleSelectMainSubServantWindow_SelectedCallBack_o *callback,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  this->fields.callBack = callback;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.callBack,
    (int64_t)callback,
    (int64_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall BattleSelectMainSubServantWindow__SetServantData(
        BattleSelectMainSubServantWindow_o *this,
        BattleServantData_array *mainList,
        BattleServantData_array *subList,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  UILabel_o *title_label; // x22
  System_String_o *v14; // x0
  const MethodInfo *v15; // x1
  __int64 v16; // x2
  __int64 v17; // x3
  struct BattleSelectServantComponent_array *mainSvtList; // x8
  __int64 v19; // x27
  unsigned __int64 max_length; // x9
  unsigned __int64 v21; // x28
  unsigned __int64 v22; // x9
  BattleSelectServantComponent_o *v23; // x22
  BattleServantData_o *v24; // x23
  BattleSelectServantComponent_CallBack_o *v25; // x24
  const MethodInfo *v26; // x3
  int32_t v27; // w3
  const MethodInfo *v28; // x5
  const MethodInfo *v29; // x2
  struct BattleSelectServantComponent_array *v30; // x8
  BattleSelectServantComponent_o *v31; // x22
  const MethodInfo *v32; // x2
  struct BattleSelectServantComponent_array *subSvtList; // x8
  __int64 v34; // x24
  unsigned __int64 v35; // x9
  unsigned __int64 v36; // x27
  unsigned __int64 v37; // x9
  BattleSelectServantComponent_o *v38; // x21
  BattleServantData_o *v39; // x22
  BattleSelectServantComponent_CallBack_o *v40; // x23
  const MethodInfo *v41; // x3
  int32_t v42; // w3
  const MethodInfo *v43; // x5
  const MethodInfo *v44; // x2
  struct BattleSelectServantComponent_array *v45; // x8
  BattleSelectServantComponent_o *v46; // x21
  const MethodInfo *v47; // x2

  if ( (byte_4B19255 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_BattleSelectMainSubServantWindow_selectSvt__, mainList, subList);
    sub_1BCA7E0(&BattleSelectServantComponent_CallBack_TypeInfo, v7, v8);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v9, v10);
    sub_1BCA7E0(&StringLiteral_2888/*"BATTLE_DIALOG_SELECTMAINSUB_SERVANT"*/, v11, v12);
    byte_4B19255 = 1;
  }
  title_label = this->fields.title_label;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, mainList);
  v14 = LocalizationManager__Get((System_String_o *)StringLiteral_2888/*"BATTLE_DIALOG_SELECTMAINSUB_SERVANT"*/, 0LL);
  if ( !title_label )
    goto LABEL_39;
  UILabel__set_text(title_label, v14, 0LL);
  mainSvtList = this->fields.mainSvtList;
  if ( !mainSvtList )
    goto LABEL_39;
  v19 = 4LL;
  while ( 1 )
  {
    max_length = mainSvtList->max_length;
    v21 = v19 - 4;
    if ( v19 - 4 >= (int)max_length )
      break;
    if ( !mainList )
      goto LABEL_39;
    if ( v21 >= max_length )
LABEL_41:
      sub_1BCAA44(v14, v15);
    v22 = mainList->max_length;
    v23 = (BattleSelectServantComponent_o *)*((_QWORD *)&mainSvtList->obj.klass + v19);
    if ( (__int64)v21 >= (int)v22 )
    {
      if ( !v23 )
        goto LABEL_39;
      BattleSelectServantComponent__setNone(*((BattleSelectServantComponent_o **)&mainSvtList->obj.klass + v19), v15);
    }
    else
    {
      if ( v21 >= v22 )
        goto LABEL_41;
      v24 = (BattleServantData_o *)*((_QWORD *)&mainList->obj.klass + v19);
      v25 = (BattleSelectServantComponent_CallBack_o *)sub_1BCAA2C(
                                                         BattleSelectServantComponent_CallBack_TypeInfo,
                                                         v15,
                                                         v16,
                                                         v17);
      BattleSelectServantComponent_CallBack___ctor(
        v25,
        (Il2CppObject *)this,
        Method_BattleSelectMainSubServantWindow_selectSvt__,
        v26);
      if ( !v23 )
        goto LABEL_39;
      BattleSelectServantComponent__setData(v23, v24, 1, v27, v25, v28);
      v30 = this->fields.mainSvtList;
      if ( !v30 )
        goto LABEL_39;
      if ( v21 >= v30->max_length || v21 >= mainList->max_length )
        goto LABEL_41;
      v31 = (BattleSelectServantComponent_o *)*((_QWORD *)&v30->obj.klass + v19);
      v14 = (System_String_o *)BattleSelectMainSubServantWindow__CheckCanOrderChangeServant(
                                 (BattleSelectMainSubServantWindow_o *)v14,
                                 *((BattleServantData_o **)&mainList->obj.klass + v19),
                                 v29);
      if ( !v31 )
        goto LABEL_39;
      BattleSelectServantComponent__setSelectMask(v31, (unsigned __int8)v14 & 1, v32);
    }
    mainSvtList = this->fields.mainSvtList;
    ++v19;
    if ( !mainSvtList )
      goto LABEL_39;
  }
  subSvtList = this->fields.subSvtList;
  if ( !subSvtList )
LABEL_39:
    sub_1BCAA3C(v14, v15);
  v34 = 4LL;
  while ( 1 )
  {
    v35 = subSvtList->max_length;
    v36 = v34 - 4;
    if ( v34 - 4 >= (int)v35 )
      break;
    if ( !subList )
      goto LABEL_39;
    if ( v36 >= v35 )
      goto LABEL_41;
    v37 = subList->max_length;
    v38 = (BattleSelectServantComponent_o *)*((_QWORD *)&subSvtList->obj.klass + v34);
    if ( (__int64)v36 >= (int)v37 )
    {
      if ( !v38 )
        goto LABEL_39;
      BattleSelectServantComponent__setNone(*((BattleSelectServantComponent_o **)&subSvtList->obj.klass + v34), v15);
    }
    else
    {
      if ( v36 >= v37 )
        goto LABEL_41;
      v39 = (BattleServantData_o *)*((_QWORD *)&subList->obj.klass + v34);
      v40 = (BattleSelectServantComponent_CallBack_o *)sub_1BCAA2C(
                                                         BattleSelectServantComponent_CallBack_TypeInfo,
                                                         v15,
                                                         v16,
                                                         v17);
      BattleSelectServantComponent_CallBack___ctor(
        v40,
        (Il2CppObject *)this,
        Method_BattleSelectMainSubServantWindow_selectSvt__,
        v41);
      if ( !v38 )
        goto LABEL_39;
      BattleSelectServantComponent__setData(v38, v39, 2, v42, v40, v43);
      v45 = this->fields.subSvtList;
      if ( !v45 )
        goto LABEL_39;
      if ( v36 >= v45->max_length || v36 >= subList->max_length )
        goto LABEL_41;
      v46 = (BattleSelectServantComponent_o *)*((_QWORD *)&v45->obj.klass + v34);
      v14 = (System_String_o *)BattleSelectMainSubServantWindow__CheckCanOrderChangeServant(
                                 (BattleSelectMainSubServantWindow_o *)v14,
                                 *((BattleServantData_o **)&subList->obj.klass + v34),
                                 v44);
      if ( !v46 )
        goto LABEL_39;
      BattleSelectServantComponent__setSelectMask(v46, (unsigned __int8)v14 & 1, v47);
    }
    subSvtList = this->fields.subSvtList;
    ++v34;
    if ( !subSvtList )
      goto LABEL_39;
  }
}


void __fastcall BattleSelectMainSubServantWindow__atlasLoadEnd(
        BattleSelectMainSubServantWindow_o *this,
        const MethodInfo *method)
{
  BattleData_o *battleData; // x0
  BattleServantData_array *v4; // x20
  BattleServantData_array *SubPlayerServantList; // x2
  const MethodInfo *v6; // x3

  battleData = this->fields.battleData;
  if ( !battleData
    || (battleData = (BattleData_o *)BattleData__getFieldPlayerServantList(battleData, 0LL), !this->fields.battleData) )
  {
    sub_1BCAA3C(battleData, method);
  }
  v4 = (BattleServantData_array *)battleData;
  SubPlayerServantList = BattleData__getSubPlayerServantList(this->fields.battleData, 0LL);
  BattleSelectMainSubServantWindow__SetServantData(this, v4, SubPlayerServantList, v6);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleSelectMainSubServantWindow__endErrorDialog(
        BattleSelectMainSubServantWindow_o *this,
        bool flg,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v5; // x1

  if ( (byte_4B19259 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, flg, method);
    byte_4B19259 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1BCAA3C(0LL, v5);
  CommonUI__CloseNotificationDialog((CommonUI_o *)Instance, 0LL);
  this->fields.isSelected = 0;
}


System_String_o *__fastcall BattleSelectMainSubServantWindow__get_closeBtnPath(
        BattleSelectMainSubServantWindow_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B1925B & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_13069/*"Sprite"*/, method, v2);
    byte_4B1925B = 1;
  }
  return (System_String_o *)StringLiteral_13069/*"Sprite"*/;
}


void __fastcall BattleSelectMainSubServantWindow__onActionButton(
        BattleSelectMainSubServantWindow_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  BattleSelectMainSubServantWindow_o *v3; // x19
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
  struct BattleSelectMainSubServantWindow_SelectedCallBack_o *callBack; // x8
  __int64 v17; // x1
  Il2CppObject *Instance; // x20
  System_String_o *v19; // x21
  System_String_o *v20; // x22
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x3
  NotificationDialog_ClickDelegate_o *v24; // x23
  _QWORD *v25; // x0
  System_Reflection_MethodBase_o *v26; // x0

  v3 = this;
  if ( (byte_4B19258 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_BattleSelectMainSubServantWindow_endErrorDialog__, method, v2);
    sub_1BCA7E0(&Method_BattleSelectMainSubServantWindow_onActionButton__, v4, v5);
    sub_1BCA7E0(&NotificationDialog_ClickDelegate_TypeInfo, v6, v7);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v8, v9);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v10, v11);
    sub_1BCA7E0(&StringLiteral_3000/*"BATTLE_SELECTSUBERROR_NOSELECT_CONF"*/, v12, v13);
    this = (BattleSelectMainSubServantWindow_o *)sub_1BCA7E0(&StringLiteral_3001/*"BATTLE_SELECTSUBERROR_NOSELECT_TITLE"*/, v14, v15);
    byte_4B19258 = 1;
  }
  if ( !v3->fields.isSelected )
  {
    if ( v3->fields.mainSelect_uniqueId < 1 || v3->fields.subSelect_uniqueId < 1 )
    {
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v17);
      v19 = LocalizationManager__Get((System_String_o *)StringLiteral_3001/*"BATTLE_SELECTSUBERROR_NOSELECT_TITLE"*/, 0LL);
      v20 = LocalizationManager__Get((System_String_o *)StringLiteral_3000/*"BATTLE_SELECTSUBERROR_NOSELECT_CONF"*/, 0LL);
      v24 = (NotificationDialog_ClickDelegate_o *)sub_1BCAA2C(NotificationDialog_ClickDelegate_TypeInfo, v21, v22, v23);
      NotificationDialog_ClickDelegate___ctor(
        v24,
        (Il2CppObject *)v3,
        Method_BattleSelectMainSubServantWindow_endErrorDialog__,
        0LL);
      if ( Instance )
      {
        CommonUI__OpenNotificationDialog_30768824(
          (CommonUI_o *)Instance,
          v19,
          v20,
          v24,
          -1,
          0,
          0,
          0,
          0,
          1,
          0LL,
          0LL,
          0,
          0,
          0LL,
          1,
          0LL,
          0LL,
          0LL,
          0LL);
        goto LABEL_12;
      }
    }
    else
    {
      callBack = v3->fields.callBack;
      if ( callBack )
      {
        ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64))callBack->fields.m_target)(
          callBack->fields.original_method_info,
          1LL);
LABEL_12:
        v25 = Method_BattleSelectMainSubServantWindow_onActionButton__;
        if ( (*((_BYTE *)Method_BattleSelectMainSubServantWindow_onActionButton__ + 83) & 2) != 0 )
          v25 = (_QWORD *)sub_1BCA7F8(Method_BattleSelectMainSubServantWindow_onActionButton__);
        v26 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v25, v25[4]);
        OverwriteAssetSoundName__PlaySystemSe(v26, 8, 0LL);
        v3->fields.isSelected = 1;
        return;
      }
    }
    sub_1BCAA3C(this, method);
  }
}


void __fastcall BattleSelectMainSubServantWindow__onCloseButton(
        BattleSelectMainSubServantWindow_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  __int64 v6; // x0
  __int64 v7; // x1
  struct BattleSelectMainSubServantWindow_SelectedCallBack_o *callBack; // x8

  if ( (byte_4B19257 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_BattleSelectMainSubServantWindow_onCloseButton__, method, v2);
    byte_4B19257 = 1;
  }
  if ( !this->fields.isSelected )
  {
    v4 = Method_BattleSelectMainSubServantWindow_onCloseButton__;
    if ( (*((_BYTE *)Method_BattleSelectMainSubServantWindow_onCloseButton__ + 83) & 2) != 0 )
      v4 = (_QWORD *)sub_1BCA7F8(Method_BattleSelectMainSubServantWindow_onCloseButton__);
    v5 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v4, v4[4]);
    OverwriteAssetSoundName__PlayCommonSe(v5, 10, 0LL);
    callBack = this->fields.callBack;
    if ( !callBack )
      sub_1BCAA3C(v6, v7);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD, _QWORD, _QWORD, _QWORD))callBack->fields.m_target)(
      callBack->fields.original_method_info,
      0LL,
      (unsigned int)this->fields.mainSelect_uniqueId,
      (unsigned int)this->fields.subSelect_uniqueId,
      *(_QWORD *)&callBack->fields.extra_arg);
    this->fields.isSelected = 1;
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleSelectMainSubServantWindow__selectSvt(
        BattleSelectMainSubServantWindow_o *this,
        int32_t position,
        int32_t uniqueId,
        const MethodInfo *method)
{
  BattleSelectMainSubServantWindow_o *v4; // x19
  struct BattleSelectServantComponent_array *mainSvtList; // x8
  int32_t v6; // w20
  __int64 v7; // x21
  int v8; // w9
  struct BattleSelectServantComponent_array *subSvtList; // x8
  int32_t v10; // w20
  __int64 v11; // x21
  int max_length; // w9
  BattleSelectMainSubServantWindow_c *klass; // x8

  v4 = this;
  if ( position == 2 )
  {
    subSvtList = this->fields.subSvtList;
    if ( this->fields.subSelect_uniqueId == uniqueId )
      v10 = 0;
    else
      v10 = uniqueId;
    if ( !subSvtList )
      goto LABEL_34;
    v11 = 0LL;
    while ( 1 )
    {
      max_length = subSvtList->max_length;
      if ( (int)v11 >= max_length )
        break;
      if ( (unsigned int)v11 >= max_length )
LABEL_35:
        sub_1BCAA44(this, *(_QWORD *)&position);
      this = (BattleSelectMainSubServantWindow_o *)subSvtList->m_Items[v11];
      if ( this )
      {
        BattleSelectServantComponent__setTarget(
          (BattleSelectServantComponent_o *)this,
          v10,
          *(const MethodInfo **)&uniqueId);
        subSvtList = v4->fields.subSvtList;
        ++v11;
        if ( subSvtList )
          continue;
      }
      goto LABEL_34;
    }
    v4->fields.subSelect_uniqueId = v10;
  }
  else if ( position == 1 )
  {
    mainSvtList = this->fields.mainSvtList;
    if ( this->fields.mainSelect_uniqueId == uniqueId )
      v6 = 0;
    else
      v6 = uniqueId;
    if ( !mainSvtList )
      goto LABEL_34;
    v7 = 0LL;
    while ( 1 )
    {
      v8 = mainSvtList->max_length;
      if ( (int)v7 >= v8 )
        break;
      if ( (unsigned int)v7 >= v8 )
        goto LABEL_35;
      this = (BattleSelectMainSubServantWindow_o *)mainSvtList->m_Items[v7];
      if ( this )
      {
        BattleSelectServantComponent__setTarget(
          (BattleSelectServantComponent_o *)this,
          v6,
          *(const MethodInfo **)&uniqueId);
        mainSvtList = v4->fields.mainSvtList;
        ++v7;
        if ( mainSvtList )
          continue;
      }
      goto LABEL_34;
    }
    v4->fields.mainSelect_uniqueId = v6;
  }
  if ( v4->fields.mainSelect_uniqueId < 1 || v4->fields.subSelect_uniqueId < 1 )
  {
    this = (BattleSelectMainSubServantWindow_o *)v4->fields.actButton;
    if ( this )
    {
      ((void (__fastcall *)(BattleSelectMainSubServantWindow_o *, _QWORD, Il2CppMethodPointer, const MethodInfo *))this->klass->vtable._5_set_closeBtnObject.method)(
        this,
        0LL,
        this->klass->vtable._6_get_closeBtnPath.methodPtr,
        method);
      this = (BattleSelectMainSubServantWindow_o *)v4->fields.actButton;
      if ( this )
      {
        klass = this->klass;
        goto LABEL_33;
      }
    }
LABEL_34:
    sub_1BCAA3C(this, *(_QWORD *)&position);
  }
  this = (BattleSelectMainSubServantWindow_o *)v4->fields.actButton;
  if ( !this )
    goto LABEL_34;
  ((void (__fastcall *)(BattleSelectMainSubServantWindow_o *, __int64, Il2CppMethodPointer, const MethodInfo *))this->klass->vtable._5_set_closeBtnObject.method)(
    this,
    1LL,
    this->klass->vtable._6_get_closeBtnPath.methodPtr,
    method);
  this = (BattleSelectMainSubServantWindow_o *)v4->fields.actButton;
  if ( !this )
    goto LABEL_34;
  klass = this->klass;
LABEL_33:
  ((void (*)(void))klass[1]._1.gc_desc)();
}


void __fastcall BattleSelectMainSubServantWindow__setBattleData(
        BattleSelectMainSubServantWindow_o *this,
        BattleData_o *data,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  this->fields.battleData = data;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.battleData,
    (int64_t)data,
    (int64_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall BattleSelectMainSubServantWindow__setInitialPos(
        BattleSelectMainSubServantWindow_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1
  __int64 v5; // x2
  UnityEngine_Transform_o *v6; // x20

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_6;
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(gameObject, 0LL);
  v6 = (UnityEngine_Transform_o *)gameObject;
  if ( !byte_4B109C1 )
  {
    gameObject = (UnityEngine_GameObject_o *)sub_1BCA7E0(&UnityEngine_Vector3_TypeInfo, v4, v5);
    byte_4B109C1 = 1;
  }
  if ( !v6 )
LABEL_6:
    sub_1BCAA3C(gameObject, v4);
  UnityEngine_Transform__set_localPosition(v6, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0LL);
  BattleWindowComponent__setInitialPos((BattleWindowComponent_o *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleSelectMainSubServantWindow_SelectedCallBack___ctor(
        BattleSelectMainSubServantWindow_SelectedCallBack_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v8; // x8
  __int64 v10; // x21
  int v12; // w22
  struct System_Reflection_MethodInfo_o *v13; // x9
  __int64 v14; // x0

  v8 = *(_QWORD *)(*(_QWORD *)&method + 8LL);
  *(_QWORD *)&this->fields.extra_arg = *(_QWORD *)&method;
  v10 = *(_QWORD *)&method;
  *(_QWORD *)&this->fields.method_ptr = v8;
  *(_QWORD *)&this->fields.method = object;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.method,
    (int64_t)object,
    *(int64_t *)&method,
    (int32_t)a4,
    v4,
    v5,
    v6,
    v7);
  v12 = *(unsigned __int8 *)(v10 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1BCA8A0(v10) & 1) == 0 )
  {
    if ( !object )
    {
      v14 = sub_1BCAA58(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1BCA908(v14, 0LL);
    }
    goto LABEL_5;
  }
  if ( v12 != 3 )
  {
LABEL_5:
    v13 = *(struct System_Reflection_MethodInfo_o **)&this->fields.method;
    this->fields.m_target = *(Il2CppObject **)&this->fields.method_ptr;
    this->fields.original_method_info = v13;
    goto LABEL_6;
  }
  this->fields.m_target = (Il2CppObject *)sub_1A1055C;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_1A104FC;
}


// local variable allocation has failed, the output may be wrong!
System_IAsyncResult_o *__fastcall BattleSelectMainSubServantWindow_SelectedCallBack__BeginInvoke(
        BattleSelectMainSubServantWindow_SelectedCallBack_o *this,
        bool flg,
        int32_t mainUniqueId,
        int32_t subUniqueId,
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
  char v17[4]; // [xsp+3Ch] [xbp-34h] BYREF

  v17[0] = flg;
  v16 = mainUniqueId;
  v15 = subUniqueId;
  if ( (byte_4B1925C & 1) == 0 )
  {
    sub_1BCA7E0(&bool_TypeInfo, flg, *(_QWORD *)&mainUniqueId);
    sub_1BCA7E0(&int_TypeInfo, v10, v11);
    byte_4B1925C = 1;
  }
  v14 = 0u;
  v13[0] = j_il2cpp_value_box_0(bool_TypeInfo, v17);
  v13[1] = j_il2cpp_value_box_0(int_TypeInfo, &v16);
  *(_QWORD *)&v14 = j_il2cpp_value_box_0(int_TypeInfo, &v15);
  return (System_IAsyncResult_o *)sub_1BCA794(this, v13, callback, object);
}


void __fastcall BattleSelectMainSubServantWindow_SelectedCallBack__EndInvoke(
        BattleSelectMainSubServantWindow_SelectedCallBack_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1BCA798(result, 0LL, method);
}


void __fastcall BattleSelectMainSubServantWindow_SelectedCallBack__Invoke(
        BattleSelectMainSubServantWindow_SelectedCallBack_o *this,
        bool flg,
        int32_t mainUniqueId,
        int32_t subUniqueId,
        const MethodInfo *method)
{
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, bool, int32_t, int32_t, _QWORD))this->fields.m_target)(
    this->fields.original_method_info,
    flg,
    mainUniqueId,
    subUniqueId,
    *(_QWORD *)&this->fields.extra_arg);
}