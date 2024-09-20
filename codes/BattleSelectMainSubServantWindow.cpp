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
  BattleBuffData_o *buffData; // x19
  BattleBuffData_CheckIndividualitiesData_o *v5; // x20

  if ( (byte_4A5E136 & 1) == 0 )
  {
    this = (BattleSelectMainSubServantWindow_o *)sub_1B885B0(&BattleBuffData_CheckIndividualitiesData_TypeInfo);
    byte_4A5E136 = 1;
  }
  if ( !servantData
    || (buffData = servantData->fields.buffData,
        v5 = (BattleBuffData_CheckIndividualitiesData_o *)sub_1B887FC(BattleBuffData_CheckIndividualitiesData_TypeInfo),
        BattleBuffData_CheckIndividualitiesData___ctor(v5, servantData, 0LL, 0LL, 0LL, 0LL, 0LL, 0LL),
        !buffData)
    || (this = (BattleSelectMainSubServantWindow_o *)BattleBuffData__getBuffList_42437664(
                                                       buffData,
                                                       84,
                                                       v5,
                                                       1,
                                                       0,
                                                       0LL,
                                                       0LL,
                                                       0LL)) == 0LL )
  {
    sub_1B8880C(this, servantData);
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
      sub_1B88814(parentPanel, call);
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
    sub_1B8880C(parentPanel, call);
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
  BattleData_o *battleData; // x0
  BattleServantData_array *v6; // x21
  BattleServantData_array *SubPlayerServantList; // x0
  const MethodInfo *v8; // x3
  BattleWindowOuterClickComponent_OuterClickCall_o *v9; // x20

  if ( (byte_4A5E132 & 1) == 0 )
  {
    sub_1B885B0(&Method_BattleSelectMainSubServantWindow_onCloseButton__);
    sub_1B885B0(&BattleWindowOuterClickComponent_OuterClickCall_TypeInfo);
    byte_4A5E132 = 1;
  }
  battleData = this->fields.battleData;
  if ( !battleData )
    goto LABEL_9;
  battleData = (BattleData_o *)BattleData__getFieldPlayerServantList(battleData, 0LL);
  if ( !this->fields.battleData )
    goto LABEL_9;
  v6 = (BattleServantData_array *)battleData;
  SubPlayerServantList = BattleData__getSubPlayerServantList(this->fields.battleData, 0LL);
  BattleSelectMainSubServantWindow__SetServantData(this, v6, SubPlayerServantList, v8);
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
    sub_1B8880C(battleData, call);
  }
  ((void (__fastcall *)(BattleData_o *, __int64, __int64, void *))battleData->klass[1]._1.events)(
    battleData,
    3LL,
    1LL,
    battleData->klass[1]._1.properties);
  this->fields.isSelected = 0;
  *(_QWORD *)&this->fields.mainSelect_uniqueId = 0LL;
  BattleWindowComponent__Open((BattleWindowComponent_o *)this, call, 0LL);
  v9 = (BattleWindowOuterClickComponent_OuterClickCall_o *)sub_1B887FC(BattleWindowOuterClickComponent_OuterClickCall_TypeInfo);
  BattleWindowOuterClickComponent_OuterClickCall___ctor(
    v9,
    (Il2CppObject *)this,
    (intptr_t)Method_BattleSelectMainSubServantWindow_onCloseButton__,
    0LL);
  BattleWindowOuterClickManagerComponent__setOuterClickCallBack(
    (BattleWindowOuterClickManagerComponent_o *)this,
    v9,
    0LL);
}


void __fastcall BattleSelectMainSubServantWindow__SetCallBack(
        BattleSelectMainSubServantWindow_o *this,
        BattleSelectMainSubServantWindow_SelectedCallBack_o *callback,
        const MethodInfo *method)
{
  int32_t v3; // w3

  this->fields.callBack = callback;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.callBack, (int32_t)callback, (int32_t)method, v3);
}


void __fastcall BattleSelectMainSubServantWindow__SetServantData(
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
  unsigned __int64 max_length; // x9
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
  const MethodInfo *v24; // x2
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
  const MethodInfo *v39; // x2

  if ( (byte_4A5E131 & 1) == 0 )
  {
    sub_1B885B0(&Method_BattleSelectMainSubServantWindow_selectSvt__);
    sub_1B885B0(&BattleSelectServantComponent_CallBack_TypeInfo);
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&StringLiteral_2867/*"BATTLE_DIALOG_SELECTMAINSUB_SERVANT"*/);
    byte_4A5E131 = 1;
  }
  title_label = this->fields.title_label;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v8 = LocalizationManager__Get((System_String_o *)StringLiteral_2867/*"BATTLE_DIALOG_SELECTMAINSUB_SERVANT"*/, 0LL);
  if ( !title_label )
    goto LABEL_39;
  UILabel__set_text(title_label, v8, 0LL);
  mainSvtList = this->fields.mainSvtList;
  if ( !mainSvtList )
    goto LABEL_39;
  v11 = 4LL;
  while ( 1 )
  {
    max_length = mainSvtList->max_length;
    v13 = v11 - 4;
    if ( v11 - 4 >= (int)max_length )
      break;
    if ( !mainList )
      goto LABEL_39;
    if ( v13 >= max_length )
LABEL_41:
      sub_1B88814(v8, v9);
    v14 = mainList->max_length;
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
      v17 = (BattleSelectServantComponent_CallBack_o *)sub_1B887FC(BattleSelectServantComponent_CallBack_TypeInfo);
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
      if ( v13 >= v22->max_length || v13 >= mainList->max_length )
        goto LABEL_41;
      v23 = (BattleSelectServantComponent_o *)*((_QWORD *)&v22->obj.klass + v11);
      v8 = (System_String_o *)BattleSelectMainSubServantWindow__CheckCanOrderChangeServant(
                                (BattleSelectMainSubServantWindow_o *)v8,
                                *((BattleServantData_o **)&mainList->obj.klass + v11),
                                v21);
      if ( !v23 )
        goto LABEL_39;
      BattleSelectServantComponent__setSelectMask(v23, (unsigned __int8)v8 & 1, v24);
    }
    mainSvtList = this->fields.mainSvtList;
    ++v11;
    if ( !mainSvtList )
      goto LABEL_39;
  }
  subSvtList = this->fields.subSvtList;
  if ( !subSvtList )
LABEL_39:
    sub_1B8880C(v8, v9);
  v26 = 4LL;
  while ( 1 )
  {
    v27 = subSvtList->max_length;
    v28 = v26 - 4;
    if ( v26 - 4 >= (int)v27 )
      break;
    if ( !subList )
      goto LABEL_39;
    if ( v28 >= v27 )
      goto LABEL_41;
    v29 = subList->max_length;
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
      v32 = (BattleSelectServantComponent_CallBack_o *)sub_1B887FC(BattleSelectServantComponent_CallBack_TypeInfo);
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
      if ( v28 >= v37->max_length || v28 >= subList->max_length )
        goto LABEL_41;
      v38 = (BattleSelectServantComponent_o *)*((_QWORD *)&v37->obj.klass + v26);
      v8 = (System_String_o *)BattleSelectMainSubServantWindow__CheckCanOrderChangeServant(
                                (BattleSelectMainSubServantWindow_o *)v8,
                                *((BattleServantData_o **)&subList->obj.klass + v26),
                                v36);
      if ( !v38 )
        goto LABEL_39;
      BattleSelectServantComponent__setSelectMask(v38, (unsigned __int8)v8 & 1, v39);
    }
    subSvtList = this->fields.subSvtList;
    ++v26;
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
    sub_1B8880C(battleData, method);
  }
  v4 = (BattleServantData_array *)battleData;
  SubPlayerServantList = BattleData__getSubPlayerServantList(this->fields.battleData, 0LL);
  BattleSelectMainSubServantWindow__SetServantData(this, v4, SubPlayerServantList, v6);
}


void __fastcall BattleSelectMainSubServantWindow__endErrorDialog(
        BattleSelectMainSubServantWindow_o *this,
        bool flg,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v5; // x1

  if ( (byte_4A5E135 & 1) == 0 )
  {
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4A5E135 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1B8880C(0LL, v5);
  CommonUI__CloseNotificationDialog((CommonUI_o *)Instance, 0LL);
  this->fields.isSelected = 0;
}


System_String_o *__fastcall BattleSelectMainSubServantWindow__get_closeBtnPath(
        BattleSelectMainSubServantWindow_o *this,
        const MethodInfo *method)
{
  if ( (byte_4A5E137 & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_12909/*"Sprite"*/);
    byte_4A5E137 = 1;
  }
  return (System_String_o *)StringLiteral_12909/*"Sprite"*/;
}


void __fastcall BattleSelectMainSubServantWindow__onActionButton(
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
  if ( (byte_4A5E134 & 1) == 0 )
  {
    sub_1B885B0(&Method_BattleSelectMainSubServantWindow_endErrorDialog__);
    sub_1B885B0(&Method_BattleSelectMainSubServantWindow_onActionButton__);
    sub_1B885B0(&NotificationDialog_ClickDelegate_TypeInfo);
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1B885B0(&StringLiteral_2979/*"BATTLE_SELECTSUBERROR_NOSELECT_CONF"*/);
    this = (BattleSelectMainSubServantWindow_o *)sub_1B885B0(&StringLiteral_2980/*"BATTLE_SELECTSUBERROR_NOSELECT_TITLE"*/);
    byte_4A5E134 = 1;
  }
  if ( !v2->fields.isSelected )
  {
    if ( v2->fields.mainSelect_uniqueId < 1 || v2->fields.subSelect_uniqueId < 1 )
    {
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v5 = LocalizationManager__Get((System_String_o *)StringLiteral_2980/*"BATTLE_SELECTSUBERROR_NOSELECT_TITLE"*/, 0LL);
      v6 = LocalizationManager__Get((System_String_o *)StringLiteral_2979/*"BATTLE_SELECTSUBERROR_NOSELECT_CONF"*/, 0LL);
      v7 = (NotificationDialog_ClickDelegate_o *)sub_1B887FC(NotificationDialog_ClickDelegate_TypeInfo);
      NotificationDialog_ClickDelegate___ctor(
        v7,
        (Il2CppObject *)v2,
        Method_BattleSelectMainSubServantWindow_endErrorDialog__,
        0LL);
      if ( Instance )
      {
        CommonUI__OpenNotificationDialog_30496496(
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
      callBack = v2->fields.callBack;
      if ( callBack )
      {
        ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64))callBack->fields.m_target)(
          callBack->fields.original_method_info,
          1LL);
LABEL_12:
        v8 = Method_BattleSelectMainSubServantWindow_onActionButton__;
        if ( (*((_BYTE *)Method_BattleSelectMainSubServantWindow_onActionButton__ + 83) & 2) != 0 )
          v8 = (_QWORD *)sub_1B885C8(Method_BattleSelectMainSubServantWindow_onActionButton__);
        v9 = (System_Reflection_MethodBase_o *)sub_1B88594(v8, v8[4]);
        OverwriteAssetSoundName__PlaySystemSe(v9, 8, 0LL);
        v2->fields.isSelected = 1;
        return;
      }
    }
    sub_1B8880C(this, method);
  }
}


void __fastcall BattleSelectMainSubServantWindow__onCloseButton(
        BattleSelectMainSubServantWindow_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  __int64 v5; // x0
  __int64 v6; // x1
  struct BattleSelectMainSubServantWindow_SelectedCallBack_o *callBack; // x8

  if ( (byte_4A5E133 & 1) == 0 )
  {
    sub_1B885B0(&Method_BattleSelectMainSubServantWindow_onCloseButton__);
    byte_4A5E133 = 1;
  }
  if ( !this->fields.isSelected )
  {
    v3 = Method_BattleSelectMainSubServantWindow_onCloseButton__;
    if ( (*((_BYTE *)Method_BattleSelectMainSubServantWindow_onCloseButton__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1B885C8(Method_BattleSelectMainSubServantWindow_onCloseButton__);
    v4 = (System_Reflection_MethodBase_o *)sub_1B88594(v3, v3[4]);
    OverwriteAssetSoundName__PlayCommonSe(v4, 10, 0LL);
    callBack = this->fields.callBack;
    if ( !callBack )
      sub_1B8880C(v5, v6);
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
        sub_1B88814(this, *(_QWORD *)&position);
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
    sub_1B8880C(this, *(_QWORD *)&position);
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

  this->fields.battleData = data;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.battleData, (int32_t)data, (int32_t)method, v3);
}


void __fastcall BattleSelectMainSubServantWindow__setInitialPos(
        BattleSelectMainSubServantWindow_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1
  UnityEngine_Transform_o *v5; // x20

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_6;
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(gameObject, 0LL);
  v5 = (UnityEngine_Transform_o *)gameObject;
  if ( !byte_4A55CE1 )
  {
    gameObject = (UnityEngine_GameObject_o *)sub_1B885B0(&UnityEngine_Vector3_TypeInfo);
    byte_4A55CE1 = 1;
  }
  if ( !v5 )
LABEL_6:
    sub_1B8880C(gameObject, v4);
  UnityEngine_Transform__set_localPosition(v5, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0LL);
  BattleWindowComponent__setInitialPos((BattleWindowComponent_o *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleSelectMainSubServantWindow_SelectedCallBack___ctor(
        BattleSelectMainSubServantWindow_SelectedCallBack_o *this,
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
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.method, (int32_t)object, method, (int32_t)a4);
  v8 = *(unsigned __int8 *)(v6 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1B88670(v6) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1B88828(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1B886D8(v10, 0LL);
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
  this->fields.m_target = (Il2CppObject *)sub_19D1EC4;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_19D1E64;
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
  char v21[4]; // [xsp+3Ch] [xbp-34h] BYREF

  v21[0] = flg;
  v20 = mainUniqueId;
  v19 = subUniqueId;
  if ( (byte_4A5E138 & 1) == 0 )
  {
    sub_1B885B0(&bool_TypeInfo);
    sub_1B885B0(&int_TypeInfo);
    byte_4A5E138 = 1;
  }
  v18 = 0u;
  v17[0] = j_il2cpp_value_box_0(bool_TypeInfo, v21, *(_QWORD *)&mainUniqueId, *(_QWORD *)&subUniqueId, callback);
  v17[1] = j_il2cpp_value_box_0(int_TypeInfo, &v20, v10, v11, v12);
  *(_QWORD *)&v18 = j_il2cpp_value_box_0(int_TypeInfo, &v19, v13, v14, v15);
  return (System_IAsyncResult_o *)sub_1B88564(this, v17, callback, object);
}


void __fastcall BattleSelectMainSubServantWindow_SelectedCallBack__EndInvoke(
        BattleSelectMainSubServantWindow_SelectedCallBack_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1B88568(result, 0LL, method);
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