void BattleSelectMainSubServantWindow___ctor(BattleSelectMainSubServantWindow_o *this, const MethodInfo *method)
{
  this->fields.isSelected = 1;
  BattleWindowOuterClickManagerComponent___ctor((BattleWindowOuterClickManagerComponent_o *)this, 0);
}


bool BattleSelectMainSubServantWindow__CheckCanOrderChangeServant(
        BattleSelectMainSubServantWindow_o *this,
        BattleServantData_o *servantData,
        const MethodInfo *method)
{
  BattleBuffData_o *buffData; // x19
  BattleBuffData_CheckIndividualitiesData_o *v5; // x21

  if ( (byte_4CF1D42 & 1) == 0 )
  {
    this = (BattleSelectMainSubServantWindow_o *)sub_1C7BAE8(&BattleBuffData_CheckIndividualitiesData_TypeInfo);
    byte_4CF1D42 = 1;
  }
  if ( !servantData
    || (buffData = servantData->fields.buffData,
        v5 = (BattleBuffData_CheckIndividualitiesData_o *)sub_1C7BD34(BattleBuffData_CheckIndividualitiesData_TypeInfo),
        BattleBuffData_CheckIndividualitiesData___ctor_46474960(v5, servantData, 0, 0, 0, 0, 0, 1, 0),
        !buffData)
    || (this = (BattleSelectMainSubServantWindow_o *)BattleBuffData__getBuffList_46151608(
                                                       buffData,
                                                       84,
                                                       v5,
                                                       1,
                                                       0,
                                                       0,
                                                       0,
                                                       0)) == 0 )
  {
    sub_1C7BD40(this, servantData);
  }
  return this->fields.m_CancellationTokenSource == 0;
}


void BattleSelectMainSubServantWindow__Close(
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
  UnityEngine_GameObject__SetActive(parentPanel, 0, 0);
  mainSvtList = this->fields.mainSvtList;
  this->fields.isSelected = 1;
  if ( !mainSvtList )
    goto LABEL_17;
  v7 = 0;
  while ( 1 )
  {
    max_length = mainSvtList->max_length;
    if ( (int)v7 >= max_length )
      break;
    if ( (unsigned int)v7 >= max_length )
LABEL_19:
      sub_1C7BD48(parentPanel);
    v9 = mainSvtList->m_Items[v7];
    if ( v9 )
    {
      parentPanel = (UnityEngine_GameObject_o *)v9->fields.servantIcon;
      if ( parentPanel )
      {
        ServantFaceIconComponent__ClearFaceAtlas((ServantFaceIconComponent_o *)parentPanel, 0);
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
    sub_1C7BD40(parentPanel, call);
  v11 = 0;
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
        ServantFaceIconComponent__ClearFaceAtlas((ServantFaceIconComponent_o *)parentPanel, 0);
        subSvtList = this->fields.subSvtList;
        ++v11;
        if ( subSvtList )
          continue;
      }
    }
    goto LABEL_17;
  }
  BattleWindowComponent__Close((BattleWindowComponent_o *)this, call, 0);
}


// attributes: thunk
void BattleSelectMainSubServantWindow__Open(
        BattleSelectMainSubServantWindow_o *this,
        BattleWindowComponent_EndCall_o *call,
        const MethodInfo *method)
{
  BattleSelectMainSubServantWindow__OpenImpl(this, call, method);
}


void BattleSelectMainSubServantWindow__OpenImpl(
        BattleSelectMainSubServantWindow_o *this,
        BattleWindowComponent_EndCall_o *call,
        const MethodInfo *method)
{
  BattleData_o *battleData; // x0
  BattleServantData_array *v6; // x21
  BattleServantData_array *SubPlayerServantList; // x0
  const MethodInfo *v8; // x3
  BattleWindowOuterClickComponent_OuterClickCall_o *v9; // x20

  if ( (byte_4CF1D3E & 1) == 0 )
  {
    sub_1C7BAE8(&Method_BattleSelectMainSubServantWindow_onCloseButton__);
    sub_1C7BAE8(&BattleWindowOuterClickComponent_OuterClickCall_TypeInfo);
    byte_4CF1D3E = 1;
  }
  battleData = this->fields.battleData;
  if ( !battleData )
    goto LABEL_9;
  battleData = (BattleData_o *)BattleData__getFieldPlayerServantList(battleData, 0);
  if ( !this->fields.battleData )
    goto LABEL_9;
  v6 = (BattleServantData_array *)battleData;
  SubPlayerServantList = BattleData__getSubPlayerServantList(this->fields.battleData, 0);
  BattleSelectMainSubServantWindow__SetServantData(this, v6, SubPlayerServantList, v8);
  battleData = (BattleData_o *)this->fields.parentPanel;
  if ( !battleData
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)battleData, 1, 0),
        (battleData = (BattleData_o *)this->fields.actButton) == 0)
    || (((void (__fastcall *)(BattleData_o *, _QWORD, const MethodInfo *))battleData->klass->vtable._5_isAiTarget.methodPtr)(
          battleData,
          0,
          battleData->klass->vtable._5_isAiTarget.method),
        (battleData = (BattleData_o *)this->fields.actButton) == 0) )
  {
LABEL_9:
    sub_1C7BD40(battleData, call);
  }
  ((void (__fastcall *)(BattleData_o *, __int64, __int64, void *))battleData->klass[1]._1.fields)(
    battleData,
    3,
    1,
    battleData->klass[1]._1.events);
  this->fields.isSelected = 0;
  *(_QWORD *)&this->fields.mainSelect_uniqueId = 0;
  BattleWindowComponent__Open((BattleWindowComponent_o *)this, call, 0);
  v9 = (BattleWindowOuterClickComponent_OuterClickCall_o *)sub_1C7BD34(BattleWindowOuterClickComponent_OuterClickCall_TypeInfo);
  BattleWindowOuterClickComponent_OuterClickCall___ctor(
    v9,
    (Il2CppObject *)this,
    (intptr_t)Method_BattleSelectMainSubServantWindow_onCloseButton__,
    0);
  BattleWindowOuterClickManagerComponent__setOuterClickCallBack((BattleWindowOuterClickManagerComponent_o *)this, v9, 0);
}


void BattleSelectMainSubServantWindow__SetCallBack(
        BattleSelectMainSubServantWindow_o *this,
        BattleSelectMainSubServantWindow_SelectedCallBack_o *callback,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  this->fields.callBack = callback;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)&this->fields.callBack,
    (int32_t)callback,
    (int32_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void BattleSelectMainSubServantWindow__SetServantData(
        BattleSelectMainSubServantWindow_o *this,
        BattleServantData_array *mainList,
        BattleServantData_array *subList,
        const MethodInfo *method)
{
  UILabel_o *title_label; // x22
  System_String_o *v8; // x0
  const MethodInfo *v9; // x1
  struct BattleSelectServantComponent_array *mainSvtList; // x8
  __int64 v11; // x27
  unsigned __int64 max_length_low; // x9
  unsigned __int64 v13; // x28
  unsigned __int64 v14; // x9
  BattleSelectServantComponent_o *v15; // x22
  BattleServantData_o *v16; // x23
  BattleSelectServantComponent_CallBack_o *v17; // x24
  const MethodInfo *v18; // x3
  int32_t v19; // w3
  const MethodInfo *v20; // x5
  const MethodInfo *v21; // x2
  struct BattleSelectServantComponent_array *v22; // x8
  BattleSelectServantComponent_o *v23; // x22
  const MethodInfo *v24; // x5
  struct BattleSelectServantComponent_array *subSvtList; // x8
  __int64 v26; // x24
  unsigned __int64 v27; // x9
  unsigned __int64 v28; // x27
  unsigned __int64 v29; // x9
  BattleSelectServantComponent_o *v30; // x21
  BattleServantData_o *v31; // x22
  BattleSelectServantComponent_CallBack_o *v32; // x23
  const MethodInfo *v33; // x3
  int32_t v34; // w3
  const MethodInfo *v35; // x5
  const MethodInfo *v36; // x2
  struct BattleSelectServantComponent_array *v37; // x8
  BattleSelectServantComponent_o *v38; // x21
  const MethodInfo *v39; // x5

  if ( (byte_4CF1D3D & 1) == 0 )
  {
    sub_1C7BAE8(&Method_BattleSelectMainSubServantWindow_selectSvt__);
    sub_1C7BAE8(&BattleSelectServantComponent_CallBack_TypeInfo);
    sub_1C7BAE8(&LocalizationManager_TypeInfo);
    sub_1C7BAE8(&StringLiteral_2747/*"BATTLE_DIALOG_SELECTMAINSUB_SERVANT"*/);
    byte_4CF1D3D = 1;
  }
  title_label = this->fields.title_label;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v8 = LocalizationManager__Get((System_String_o *)StringLiteral_2747/*"BATTLE_DIALOG_SELECTMAINSUB_SERVANT"*/, 0);
  if ( !title_label )
    goto LABEL_39;
  UILabel__set_text(title_label, v8, 0);
  mainSvtList = this->fields.mainSvtList;
  if ( !mainSvtList )
    goto LABEL_39;
  v11 = 4;
  while ( 1 )
  {
    max_length_low = LODWORD(mainSvtList->max_length);
    v13 = v11 - 4;
    if ( v11 - 4 >= (int)max_length_low )
      break;
    if ( !mainList )
      goto LABEL_39;
    if ( v13 >= max_length_low )
LABEL_41:
      sub_1C7BD48(v8);
    v14 = LODWORD(mainList->max_length);
    v15 = (BattleSelectServantComponent_o *)*((_QWORD *)&mainSvtList->obj.klass + v11);
    if ( (__int64)v13 >= (int)v14 )
    {
      if ( !v15 )
        goto LABEL_39;
      BattleSelectServantComponent__setNone(*((BattleSelectServantComponent_o **)&mainSvtList->obj.klass + v11), v9);
    }
    else
    {
      if ( v13 >= v14 )
        goto LABEL_41;
      v16 = (BattleServantData_o *)*((_QWORD *)&mainList->obj.klass + v11);
      v17 = (BattleSelectServantComponent_CallBack_o *)sub_1C7BD34(BattleSelectServantComponent_CallBack_TypeInfo);
      BattleSelectServantComponent_CallBack___ctor(
        v17,
        (Il2CppObject *)this,
        Method_BattleSelectMainSubServantWindow_selectSvt__,
        v18);
      if ( !v15 )
        goto LABEL_39;
      BattleSelectServantComponent__setData(v15, v16, 1, v19, v17, v20);
      v22 = this->fields.mainSvtList;
      if ( !v22 )
        goto LABEL_39;
      if ( v13 >= LODWORD(v22->max_length) || v13 >= LODWORD(mainList->max_length) )
        goto LABEL_41;
      v23 = (BattleSelectServantComponent_o *)*((_QWORD *)&v22->obj.klass + v11);
      v8 = (System_String_o *)BattleSelectMainSubServantWindow__CheckCanOrderChangeServant(
                                (BattleSelectMainSubServantWindow_o *)v8,
                                *((BattleServantData_o **)&mainList->obj.klass + v11),
                                v21);
      if ( !v23 )
        goto LABEL_39;
      BattleSelectServantComponent__setSelectMask(v23, (unsigned __int8)v8 & 1, 0, 16, 1, v24);
    }
    mainSvtList = this->fields.mainSvtList;
    ++v11;
    if ( !mainSvtList )
      goto LABEL_39;
  }
  subSvtList = this->fields.subSvtList;
  if ( !subSvtList )
LABEL_39:
    sub_1C7BD40(v8, v9);
  v26 = 4;
  while ( 1 )
  {
    v27 = LODWORD(subSvtList->max_length);
    v28 = v26 - 4;
    if ( v26 - 4 >= (int)v27 )
      break;
    if ( !subList )
      goto LABEL_39;
    if ( v28 >= v27 )
      goto LABEL_41;
    v29 = LODWORD(subList->max_length);
    v30 = (BattleSelectServantComponent_o *)*((_QWORD *)&subSvtList->obj.klass + v26);
    if ( (__int64)v28 >= (int)v29 )
    {
      if ( !v30 )
        goto LABEL_39;
      BattleSelectServantComponent__setNone(*((BattleSelectServantComponent_o **)&subSvtList->obj.klass + v26), v9);
    }
    else
    {
      if ( v28 >= v29 )
        goto LABEL_41;
      v31 = (BattleServantData_o *)*((_QWORD *)&subList->obj.klass + v26);
      v32 = (BattleSelectServantComponent_CallBack_o *)sub_1C7BD34(BattleSelectServantComponent_CallBack_TypeInfo);
      BattleSelectServantComponent_CallBack___ctor(
        v32,
        (Il2CppObject *)this,
        Method_BattleSelectMainSubServantWindow_selectSvt__,
        v33);
      if ( !v30 )
        goto LABEL_39;
      BattleSelectServantComponent__setData(v30, v31, 2, v34, v32, v35);
      v37 = this->fields.subSvtList;
      if ( !v37 )
        goto LABEL_39;
      if ( v28 >= LODWORD(v37->max_length) || v28 >= LODWORD(subList->max_length) )
        goto LABEL_41;
      v38 = (BattleSelectServantComponent_o *)*((_QWORD *)&v37->obj.klass + v26);
      v8 = (System_String_o *)BattleSelectMainSubServantWindow__CheckCanOrderChangeServant(
                                (BattleSelectMainSubServantWindow_o *)v8,
                                *((BattleServantData_o **)&subList->obj.klass + v26),
                                v36);
      if ( !v38 )
        goto LABEL_39;
      BattleSelectServantComponent__setSelectMask(v38, (unsigned __int8)v8 & 1, 0, 16, 1, v39);
    }
    subSvtList = this->fields.subSvtList;
    ++v26;
    if ( !subSvtList )
      goto LABEL_39;
  }
}


void BattleSelectMainSubServantWindow__atlasLoadEnd(BattleSelectMainSubServantWindow_o *this, const MethodInfo *method)
{
  BattleData_o *battleData; // x0
  BattleServantData_array *v4; // x20
  BattleServantData_array *SubPlayerServantList; // x2
  const MethodInfo *v6; // x3

  battleData = this->fields.battleData;
  if ( !battleData
    || (battleData = (BattleData_o *)BattleData__getFieldPlayerServantList(battleData, 0), !this->fields.battleData) )
  {
    sub_1C7BD40(battleData, method);
  }
  v4 = (BattleServantData_array *)battleData;
  SubPlayerServantList = BattleData__getSubPlayerServantList(this->fields.battleData, 0);
  BattleSelectMainSubServantWindow__SetServantData(this, v4, SubPlayerServantList, v6);
}


void BattleSelectMainSubServantWindow__endErrorDialog(
        BattleSelectMainSubServantWindow_o *this,
        bool flg,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v5; // x1

  if ( (byte_4CF1D41 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4CF1D41 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1C7BD40(0, v5);
  CommonUI__CloseNotificationDialog((CommonUI_o *)Instance, 0);
  this->fields.isSelected = 0;
}


System_String_o *BattleSelectMainSubServantWindow__get_closeBtnPath(
        BattleSelectMainSubServantWindow_o *this,
        const MethodInfo *method)
{
  if ( (byte_4CF1D43 & 1) == 0 )
  {
    sub_1C7BAE8(&StringLiteral_13063/*"Sprite"*/);
    byte_4CF1D43 = 1;
  }
  return (System_String_o *)StringLiteral_13063/*"Sprite"*/;
}


void BattleSelectMainSubServantWindow__onActionButton(
        BattleSelectMainSubServantWindow_o *this,
        const MethodInfo *method)
{
  BattleSelectMainSubServantWindow_o *v2; // x19
  struct BattleSelectMainSubServantWindow_SelectedCallBack_o *callBack; // x8
  Il2CppObject *Instance; // x20
  System_String_o *v5; // x21
  System_String_o *v6; // x22
  NotificationDialog_ClickDelegate_o *v7; // x23
  _QWORD *v8; // x0
  System_Reflection_MethodBase_o *v9; // x0

  v2 = this;
  if ( (byte_4CF1D40 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_BattleSelectMainSubServantWindow_endErrorDialog__);
    sub_1C7BAE8(&Method_BattleSelectMainSubServantWindow_onActionButton__);
    sub_1C7BAE8(&NotificationDialog_ClickDelegate_TypeInfo);
    sub_1C7BAE8(&LocalizationManager_TypeInfo);
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C7BAE8(&StringLiteral_2865/*"BATTLE_SELECTSUBERROR_NOSELECT_CONF"*/);
    this = (BattleSelectMainSubServantWindow_o *)sub_1C7BAE8(&StringLiteral_2866/*"BATTLE_SELECTSUBERROR_NOSELECT_TITLE"*/);
    byte_4CF1D40 = 1;
  }
  if ( !v2->fields.isSelected )
  {
    if ( v2->fields.mainSelect_uniqueId < 1 || v2->fields.subSelect_uniqueId < 1 )
    {
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v5 = LocalizationManager__Get((System_String_o *)StringLiteral_2866/*"BATTLE_SELECTSUBERROR_NOSELECT_TITLE"*/, 0);
      v6 = LocalizationManager__Get((System_String_o *)StringLiteral_2865/*"BATTLE_SELECTSUBERROR_NOSELECT_CONF"*/, 0);
      v7 = (NotificationDialog_ClickDelegate_o *)sub_1C7BD34(NotificationDialog_ClickDelegate_TypeInfo);
      NotificationDialog_ClickDelegate___ctor(
        v7,
        (Il2CppObject *)v2,
        Method_BattleSelectMainSubServantWindow_endErrorDialog__,
        0);
      if ( Instance )
      {
        CommonUI__OpenNotificationDialog_31485276(
          (CommonUI_o *)Instance,
          v5,
          v6,
          v7,
          -1,
          0,
          0,
          0,
          0,
          1,
          0,
          0,
          0,
          0,
          0,
          1,
          0,
          0,
          0,
          0);
        goto LABEL_12;
      }
    }
    else
    {
      callBack = v2->fields.callBack;
      if ( callBack )
      {
        ((void (__fastcall *)(intptr_t, __int64))callBack->fields.invoke_impl)(callBack->fields.method_code, 1);
LABEL_12:
        v8 = Method_BattleSelectMainSubServantWindow_onActionButton__;
        if ( (*((_BYTE *)Method_BattleSelectMainSubServantWindow_onActionButton__ + 83) & 2) != 0 )
          v8 = (_QWORD *)sub_1C7BB00(Method_BattleSelectMainSubServantWindow_onActionButton__);
        v9 = (System_Reflection_MethodBase_o *)sub_1C7BACC(v8, v8[4]);
        OverwriteAssetSoundName__PlaySystemSe(v9, 8, 0, 0);
        v2->fields.isSelected = 1;
        return;
      }
    }
    sub_1C7BD40(this, method);
  }
}


void BattleSelectMainSubServantWindow__onCloseButton(
        BattleSelectMainSubServantWindow_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  __int64 v5; // x0
  __int64 v6; // x1
  struct BattleSelectMainSubServantWindow_SelectedCallBack_o *callBack; // x8

  if ( (byte_4CF1D3F & 1) == 0 )
  {
    sub_1C7BAE8(&Method_BattleSelectMainSubServantWindow_onCloseButton__);
    byte_4CF1D3F = 1;
  }
  if ( !this->fields.isSelected )
  {
    v3 = Method_BattleSelectMainSubServantWindow_onCloseButton__;
    if ( (*((_BYTE *)Method_BattleSelectMainSubServantWindow_onCloseButton__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C7BB00(Method_BattleSelectMainSubServantWindow_onCloseButton__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C7BACC(v3, v3[4]);
    OverwriteAssetSoundName__PlayCommonSe(v4, 10, 0, 0);
    callBack = this->fields.callBack;
    if ( !callBack )
      sub_1C7BD40(v5, v6);
    ((void (__fastcall *)(intptr_t, _QWORD, _QWORD, _QWORD, intptr_t))callBack->fields.invoke_impl)(
      callBack->fields.method_code,
      0,
      (unsigned int)this->fields.mainSelect_uniqueId,
      (unsigned int)this->fields.subSelect_uniqueId,
      callBack->fields.method);
    this->fields.isSelected = 1;
  }
}


// local variable allocation has failed, the output may be wrong!
void BattleSelectMainSubServantWindow__selectSvt(
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
    v11 = 0;
    while ( 1 )
    {
      max_length = subSvtList->max_length;
      if ( (int)v11 >= max_length )
        break;
      if ( (unsigned int)v11 >= max_length )
LABEL_35:
        sub_1C7BD48(this);
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
    v7 = 0;
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
      ((void (__fastcall *)(BattleSelectMainSubServantWindow_o *, _QWORD, const MethodInfo *, const MethodInfo *))this->klass->vtable._5_set_closeBtnObject.methodPtr)(
        this,
        0,
        this->klass->vtable._5_set_closeBtnObject.method,
        method);
      this = (BattleSelectMainSubServantWindow_o *)v4->fields.actButton;
      if ( this )
      {
        klass = this->klass;
        goto LABEL_33;
      }
    }
LABEL_34:
    sub_1C7BD40(this, *(_QWORD *)&position);
  }
  this = (BattleSelectMainSubServantWindow_o *)v4->fields.actButton;
  if ( !this )
    goto LABEL_34;
  ((void (__fastcall *)(BattleSelectMainSubServantWindow_o *, __int64, const MethodInfo *, const MethodInfo *))this->klass->vtable._5_set_closeBtnObject.methodPtr)(
    this,
    1,
    this->klass->vtable._5_set_closeBtnObject.method,
    method);
  this = (BattleSelectMainSubServantWindow_o *)v4->fields.actButton;
  if ( !this )
    goto LABEL_34;
  klass = this->klass;
LABEL_33:
  ((void (*)(void))klass[1]._1.image)();
}


void BattleSelectMainSubServantWindow__setBattleData(
        BattleSelectMainSubServantWindow_o *this,
        BattleData_o *data,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  this->fields.battleData = data;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)&this->fields.battleData,
    (int32_t)data,
    (int32_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void BattleSelectMainSubServantWindow__setInitialPos(
        BattleSelectMainSubServantWindow_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1
  UnityEngine_Transform_o *v5; // x20

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    goto LABEL_6;
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(gameObject, 0);
  v5 = (UnityEngine_Transform_o *)gameObject;
  if ( !byte_4CE7E59 )
  {
    gameObject = (UnityEngine_GameObject_o *)sub_1C7BAE8(&UnityEngine_Vector3_TypeInfo);
    byte_4CE7E59 = 1;
  }
  if ( !v5 )
LABEL_6:
    sub_1C7BD40(gameObject, v4);
  UnityEngine_Transform__set_localPosition(v5, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0);
  BattleWindowComponent__setInitialPos((BattleWindowComponent_o *)this, 0);
}


void BattleSelectMainSubServantWindow_SelectedCallBack___ctor(
        BattleSelectMainSubServantWindow_SelectedCallBack_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  intptr_t v8; // x8
  int v12; // w22
  Il2CppObject *m_target; // x9
  __int64 v14; // x0

  v8 = *(_QWORD *)(method + 8);
  this->fields.method = method;
  this->fields.method_ptr = v8;
  this->fields.m_target = object;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)&this->fields.m_target,
    (int32_t)object,
    method,
    (int32_t)a4,
    v4,
    v5,
    v6,
    v7);
  v12 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_1C7BBA8(method) & 1) == 0 )
  {
    if ( !object )
    {
      v14 = sub_1C7BD5C(0, "Delegate to an instance method cannot have null 'this'.");
      sub_1C7BC10(v14, 0);
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
  this->fields.invoke_impl = (intptr_t)sub_1AB557C;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_1AB551C;
}


System_IAsyncResult_o *BattleSelectMainSubServantWindow_SelectedCallBack__BeginInvoke(
        BattleSelectMainSubServantWindow_SelectedCallBack_o *this,
        bool flg,
        int32_t mainUniqueId,
        int32_t subUniqueId,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  _QWORD v11[2]; // [xsp+0h] [xbp-70h] BYREF
  __int128 v12; // [xsp+10h] [xbp-60h]
  int32_t v13; // [xsp+2Ch] [xbp-44h] BYREF
  int32_t v14; // [xsp+38h] [xbp-38h] BYREF
  bool v15[4]; // [xsp+3Ch] [xbp-34h] BYREF

  v15[0] = flg;
  v14 = mainUniqueId;
  v13 = subUniqueId;
  if ( (byte_4CF1D44 & 1) == 0 )
  {
    sub_1C7BAE8(&bool_TypeInfo);
    sub_1C7BAE8(&int_TypeInfo);
    byte_4CF1D44 = 1;
  }
  v12 = 0u;
  v11[0] = j_il2cpp_value_box_0(bool_TypeInfo, v15);
  v11[1] = j_il2cpp_value_box_0(int_TypeInfo, &v14);
  *(_QWORD *)&v12 = j_il2cpp_value_box_0(int_TypeInfo, &v13);
  return (System_IAsyncResult_o *)sub_1C7BA9C(this, v11, callback, object);
}


void BattleSelectMainSubServantWindow_SelectedCallBack__EndInvoke(
        BattleSelectMainSubServantWindow_SelectedCallBack_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C7BAA0(result, 0, method);
}


void BattleSelectMainSubServantWindow_SelectedCallBack__Invoke(
        BattleSelectMainSubServantWindow_SelectedCallBack_o *this,
        bool flg,
        int32_t mainUniqueId,
        int32_t subUniqueId,
        const MethodInfo *method)
{
  ((void (__fastcall *)(intptr_t, bool, int32_t, int32_t, intptr_t))this->fields.invoke_impl)(
    this->fields.method_code,
    flg,
    mainUniqueId,
    subUniqueId,
    this->fields.method);
}