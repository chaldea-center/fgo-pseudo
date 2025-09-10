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

  if ( (byte_4C2A8B2 & 1) == 0 )
  {
    this = (BattleSelectMainSubServantWindow_o *)sub_1C2D490(&BattleBuffData_CheckIndividualitiesData_TypeInfo);
    byte_4C2A8B2 = 1;
  }
  if ( !servantData
    || (buffData = servantData->fields.buffData,
        v5 = (BattleBuffData_CheckIndividualitiesData_o *)sub_1C2D6DC(BattleBuffData_CheckIndividualitiesData_TypeInfo),
        BattleBuffData_CheckIndividualitiesData___ctor_45569888(v5, servantData, 0, 0, 0, 0, 0, 1, 0),
        !buffData)
    || (this = (BattleSelectMainSubServantWindow_o *)BattleBuffData__getBuffList_45349584(
                                                       buffData,
                                                       84,
                                                       v5,
                                                       1,
                                                       0,
                                                       0,
                                                       0,
                                                       0)) == 0 )
  {
    sub_1C2D6EC(this, servantData);
  }
  return this->fields.m_CancellationTokenSource == 0;
}


void BattleSelectMainSubServantWindow__Close(
        BattleSelectMainSubServantWindow_o *this,
        BattleWindowComponent_EndCall_o *call,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *parentPanel; // x0
  __int64 v6; // x2
  struct BattleSelectServantComponent_array *mainSvtList; // x8
  __int64 v8; // x21
  int max_length; // w9
  BattleSelectServantComponent_o *v10; // x8
  struct BattleSelectServantComponent_array *subSvtList; // x8
  __int64 v12; // x21
  int v13; // w9
  BattleSelectServantComponent_o *v14; // x8

  parentPanel = this->fields.parentPanel;
  if ( !parentPanel )
    goto LABEL_17;
  UnityEngine_GameObject__SetActive(parentPanel, 0, 0);
  mainSvtList = this->fields.mainSvtList;
  this->fields.isSelected = 1;
  if ( !mainSvtList )
    goto LABEL_17;
  v8 = 0;
  while ( 1 )
  {
    max_length = mainSvtList->max_length;
    if ( (int)v8 >= max_length )
      break;
    if ( (unsigned int)v8 >= max_length )
LABEL_19:
      sub_1C2D6F4(parentPanel, call, v6);
    v10 = mainSvtList->m_Items[v8];
    if ( v10 )
    {
      parentPanel = (UnityEngine_GameObject_o *)v10->fields.servantIcon;
      if ( parentPanel )
      {
        ServantFaceIconComponent__ClearFaceAtlas((ServantFaceIconComponent_o *)parentPanel, 0);
        mainSvtList = this->fields.mainSvtList;
        ++v8;
        if ( mainSvtList )
          continue;
      }
    }
    goto LABEL_17;
  }
  subSvtList = this->fields.subSvtList;
  if ( !subSvtList )
LABEL_17:
    sub_1C2D6EC(parentPanel, call);
  v12 = 0;
  while ( 1 )
  {
    v13 = subSvtList->max_length;
    if ( (int)v12 >= v13 )
      break;
    if ( (unsigned int)v12 >= v13 )
      goto LABEL_19;
    v14 = subSvtList->m_Items[v12];
    if ( v14 )
    {
      parentPanel = (UnityEngine_GameObject_o *)v14->fields.servantIcon;
      if ( parentPanel )
      {
        ServantFaceIconComponent__ClearFaceAtlas((ServantFaceIconComponent_o *)parentPanel, 0);
        subSvtList = this->fields.subSvtList;
        ++v12;
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

  if ( (byte_4C2A8AE & 1) == 0 )
  {
    sub_1C2D490(&Method_BattleSelectMainSubServantWindow_onCloseButton__);
    sub_1C2D490(&BattleWindowOuterClickComponent_OuterClickCall_TypeInfo);
    byte_4C2A8AE = 1;
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
    sub_1C2D6EC(battleData, call);
  }
  ((void (__fastcall *)(BattleData_o *, __int64, __int64, void *))battleData->klass[1]._1.fields)(
    battleData,
    3,
    1,
    battleData->klass[1]._1.events);
  this->fields.isSelected = 0;
  *(_QWORD *)&this->fields.mainSelect_uniqueId = 0;
  BattleWindowComponent__Open((BattleWindowComponent_o *)this, call, 0);
  v9 = (BattleWindowOuterClickComponent_OuterClickCall_o *)sub_1C2D6DC(BattleWindowOuterClickComponent_OuterClickCall_TypeInfo);
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
  const MethodInfo *v3; // x3

  this->fields.callBack = callback;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.callBack, (int32_t)callback, (int32_t)method, v3);
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
  const MethodInfo *v10; // x2
  struct BattleSelectServantComponent_array *mainSvtList; // x8
  __int64 v12; // x27
  unsigned __int64 max_length_low; // x9
  unsigned __int64 v14; // x28
  unsigned __int64 v15; // x9
  BattleSelectServantComponent_o *v16; // x22
  BattleServantData_o *v17; // x23
  BattleSelectServantComponent_CallBack_o *v18; // x24
  const MethodInfo *v19; // x3
  int32_t v20; // w3
  const MethodInfo *v21; // x5
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
  struct BattleSelectServantComponent_array *v36; // x8
  BattleSelectServantComponent_o *v37; // x21
  const MethodInfo *v38; // x5

  if ( (byte_4C2A8AD & 1) == 0 )
  {
    sub_1C2D490(&Method_BattleSelectMainSubServantWindow_selectSvt__);
    sub_1C2D490(&BattleSelectServantComponent_CallBack_TypeInfo);
    sub_1C2D490(&LocalizationManager_TypeInfo);
    sub_1C2D490(&StringLiteral_2747/*"BATTLE_DIALOG_SELECTMAINSUB_SERVANT"*/);
    byte_4C2A8AD = 1;
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
  v12 = 4;
  while ( 1 )
  {
    max_length_low = LODWORD(mainSvtList->max_length);
    v14 = v12 - 4;
    if ( v12 - 4 >= (int)max_length_low )
      break;
    if ( !mainList )
      goto LABEL_39;
    if ( v14 >= max_length_low )
LABEL_41:
      sub_1C2D6F4(v8, v9, v10);
    v15 = LODWORD(mainList->max_length);
    v16 = (BattleSelectServantComponent_o *)*((_QWORD *)&mainSvtList->obj.klass + v12);
    if ( (__int64)v14 >= (int)v15 )
    {
      if ( !v16 )
        goto LABEL_39;
      BattleSelectServantComponent__setNone(*((BattleSelectServantComponent_o **)&mainSvtList->obj.klass + v12), v9);
    }
    else
    {
      if ( v14 >= v15 )
        goto LABEL_41;
      v17 = (BattleServantData_o *)*((_QWORD *)&mainList->obj.klass + v12);
      v18 = (BattleSelectServantComponent_CallBack_o *)sub_1C2D6DC(BattleSelectServantComponent_CallBack_TypeInfo);
      BattleSelectServantComponent_CallBack___ctor(
        v18,
        (Il2CppObject *)this,
        Method_BattleSelectMainSubServantWindow_selectSvt__,
        v19);
      if ( !v16 )
        goto LABEL_39;
      BattleSelectServantComponent__setData(v16, v17, 1, v20, v18, v21);
      v22 = this->fields.mainSvtList;
      if ( !v22 )
        goto LABEL_39;
      if ( v14 >= LODWORD(v22->max_length) || v14 >= LODWORD(mainList->max_length) )
        goto LABEL_41;
      v23 = (BattleSelectServantComponent_o *)*((_QWORD *)&v22->obj.klass + v12);
      v8 = (System_String_o *)BattleSelectMainSubServantWindow__CheckCanOrderChangeServant(
                                (BattleSelectMainSubServantWindow_o *)v8,
                                *((BattleServantData_o **)&mainList->obj.klass + v12),
                                v10);
      if ( !v23 )
        goto LABEL_39;
      BattleSelectServantComponent__setSelectMask(v23, (unsigned __int8)v8 & 1, 0, 16, 1, v24);
    }
    mainSvtList = this->fields.mainSvtList;
    ++v12;
    if ( !mainSvtList )
      goto LABEL_39;
  }
  subSvtList = this->fields.subSvtList;
  if ( !subSvtList )
LABEL_39:
    sub_1C2D6EC(v8, v9);
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
      v32 = (BattleSelectServantComponent_CallBack_o *)sub_1C2D6DC(BattleSelectServantComponent_CallBack_TypeInfo);
      BattleSelectServantComponent_CallBack___ctor(
        v32,
        (Il2CppObject *)this,
        Method_BattleSelectMainSubServantWindow_selectSvt__,
        v33);
      if ( !v30 )
        goto LABEL_39;
      BattleSelectServantComponent__setData(v30, v31, 2, v34, v32, v35);
      v36 = this->fields.subSvtList;
      if ( !v36 )
        goto LABEL_39;
      if ( v28 >= LODWORD(v36->max_length) || v28 >= LODWORD(subList->max_length) )
        goto LABEL_41;
      v37 = (BattleSelectServantComponent_o *)*((_QWORD *)&v36->obj.klass + v26);
      v8 = (System_String_o *)BattleSelectMainSubServantWindow__CheckCanOrderChangeServant(
                                (BattleSelectMainSubServantWindow_o *)v8,
                                *((BattleServantData_o **)&subList->obj.klass + v26),
                                v10);
      if ( !v37 )
        goto LABEL_39;
      BattleSelectServantComponent__setSelectMask(v37, (unsigned __int8)v8 & 1, 0, 16, 1, v38);
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
    sub_1C2D6EC(battleData, method);
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

  if ( (byte_4C2A8B1 & 1) == 0 )
  {
    sub_1C2D490(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4C2A8B1 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1C2D6EC(0, v5);
  CommonUI__CloseNotificationDialog((CommonUI_o *)Instance, 0);
  this->fields.isSelected = 0;
}


System_String_o *BattleSelectMainSubServantWindow__get_closeBtnPath(
        BattleSelectMainSubServantWindow_o *this,
        const MethodInfo *method)
{
  if ( (byte_4C2A8B3 & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_13003/*"Sprite"*/);
    byte_4C2A8B3 = 1;
  }
  return (System_String_o *)StringLiteral_13003/*"Sprite"*/;
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
  if ( (byte_4C2A8B0 & 1) == 0 )
  {
    sub_1C2D490(&Method_BattleSelectMainSubServantWindow_endErrorDialog__);
    sub_1C2D490(&Method_BattleSelectMainSubServantWindow_onActionButton__);
    sub_1C2D490(&NotificationDialog_ClickDelegate_TypeInfo);
    sub_1C2D490(&LocalizationManager_TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C2D490(&StringLiteral_2865/*"BATTLE_SELECTSUBERROR_NOSELECT_CONF"*/);
    this = (BattleSelectMainSubServantWindow_o *)sub_1C2D490(&StringLiteral_2866/*"BATTLE_SELECTSUBERROR_NOSELECT_TITLE"*/);
    byte_4C2A8B0 = 1;
  }
  if ( !v2->fields.isSelected )
  {
    if ( v2->fields.mainSelect_uniqueId < 1 || v2->fields.subSelect_uniqueId < 1 )
    {
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v5 = LocalizationManager__Get((System_String_o *)StringLiteral_2866/*"BATTLE_SELECTSUBERROR_NOSELECT_TITLE"*/, 0);
      v6 = LocalizationManager__Get((System_String_o *)StringLiteral_2865/*"BATTLE_SELECTSUBERROR_NOSELECT_CONF"*/, 0);
      v7 = (NotificationDialog_ClickDelegate_o *)sub_1C2D6DC(NotificationDialog_ClickDelegate_TypeInfo);
      NotificationDialog_ClickDelegate___ctor(
        v7,
        (Il2CppObject *)v2,
        Method_BattleSelectMainSubServantWindow_endErrorDialog__,
        0);
      if ( Instance )
      {
        CommonUI__OpenNotificationDialog_31170012(
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
          v8 = (_QWORD *)sub_1C2D4A8(Method_BattleSelectMainSubServantWindow_onActionButton__);
        v9 = (System_Reflection_MethodBase_o *)sub_1C2D474(v8, v8[4]);
        OverwriteAssetSoundName__PlaySystemSe(v9, 8, 0, 0);
        v2->fields.isSelected = 1;
        return;
      }
    }
    sub_1C2D6EC(this, method);
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

  if ( (byte_4C2A8AF & 1) == 0 )
  {
    sub_1C2D490(&Method_BattleSelectMainSubServantWindow_onCloseButton__);
    byte_4C2A8AF = 1;
  }
  if ( !this->fields.isSelected )
  {
    v3 = Method_BattleSelectMainSubServantWindow_onCloseButton__;
    if ( (*((_BYTE *)Method_BattleSelectMainSubServantWindow_onCloseButton__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C2D4A8(Method_BattleSelectMainSubServantWindow_onCloseButton__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C2D474(v3, v3[4]);
    OverwriteAssetSoundName__PlayCommonSe(v4, 10, 0, 0);
    callBack = this->fields.callBack;
    if ( !callBack )
      sub_1C2D6EC(v5, v6);
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
        sub_1C2D6F4(this, *(_QWORD *)&position, *(_QWORD *)&uniqueId);
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
    sub_1C2D6EC(this, *(_QWORD *)&position);
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
  const MethodInfo *v3; // x3

  this->fields.battleData = data;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.battleData, (int32_t)data, (int32_t)method, v3);
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
  if ( !byte_4C20DA1 )
  {
    gameObject = (UnityEngine_GameObject_o *)sub_1C2D490(&UnityEngine_Vector3_TypeInfo);
    byte_4C20DA1 = 1;
  }
  if ( !v5 )
LABEL_6:
    sub_1C2D6EC(gameObject, v4);
  UnityEngine_Transform__set_localPosition(v5, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0);
  BattleWindowComponent__setInitialPos((BattleWindowComponent_o *)this, 0);
}


void BattleSelectMainSubServantWindow_SelectedCallBack___ctor(
        BattleSelectMainSubServantWindow_SelectedCallBack_o *this,
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
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.m_target, (int32_t)object, method, a4);
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
  this->fields.invoke_impl = (intptr_t)sub_1A7572C;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_1A756CC;
}


// local variable allocation has failed, the output may be wrong!
System_IAsyncResult_o *BattleSelectMainSubServantWindow_SelectedCallBack__BeginInvoke(
        BattleSelectMainSubServantWindow_SelectedCallBack_o *this,
        bool flg,
        int32_t mainUniqueId,
        int32_t subUniqueId,
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
  bool v21[4]; // [xsp+3Ch] [xbp-34h] BYREF

  v21[0] = flg;
  v20 = mainUniqueId;
  v19 = subUniqueId;
  if ( (byte_4C2A8B4 & 1) == 0 )
  {
    sub_1C2D490(&bool_TypeInfo);
    sub_1C2D490(&int_TypeInfo);
    byte_4C2A8B4 = 1;
  }
  v18 = 0u;
  v17[0] = j_il2cpp_value_box_0(bool_TypeInfo, v21, *(_QWORD *)&mainUniqueId, *(_QWORD *)&subUniqueId, callback);
  v17[1] = j_il2cpp_value_box_0(int_TypeInfo, &v20, v10, v11, v12);
  *(_QWORD *)&v18 = j_il2cpp_value_box_0(int_TypeInfo, &v19, v13, v14, v15);
  return (System_IAsyncResult_o *)sub_1C2D444(this, v17, callback, object);
}


void BattleSelectMainSubServantWindow_SelectedCallBack__EndInvoke(
        BattleSelectMainSubServantWindow_SelectedCallBack_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C2D448(result, 0, method);
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