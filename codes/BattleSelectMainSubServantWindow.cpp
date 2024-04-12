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
  BattleBuffData_CheckIndividualitiesData_o *v5; // x21

  if ( (byte_42AD5F2 & 1) == 0 )
  {
    this = (BattleSelectMainSubServantWindow_o *)sub_B52984(&BattleBuffData_CheckIndividualitiesData_TypeInfo);
    byte_42AD5F2 = 1;
  }
  if ( !servantData
    || (buffData = servantData->fields.buffData,
        v5 = (BattleBuffData_CheckIndividualitiesData_o *)sub_B52A54(BattleBuffData_CheckIndividualitiesData_TypeInfo),
        BattleBuffData_CheckIndividualitiesData___ctor(v5, servantData, 0LL, 0LL, 0LL, 0LL, 0LL),
        !buffData)
    || (this = (BattleSelectMainSubServantWindow_o *)BattleBuffData__getBuffList_31340516(
                                                       buffData,
                                                       84,
                                                       v5,
                                                       1,
                                                       0,
                                                       0LL,
                                                       0LL)) == 0LL )
  {
    sub_B52A5C(this, servantData);
  }
  return this->fields._closeBtnObject == 0LL;
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
  __int64 v14; // x0

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
    {
LABEL_19:
      v14 = sub_B52A88(parentPanel);
      sub_B52A28(v14, 0LL);
    }
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
    sub_B52A5C(parentPanel, call);
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

  if ( (byte_42AD5EE & 1) == 0 )
  {
    sub_B52984(&Method_BattleSelectMainSubServantWindow_onCloseButton__);
    sub_B52984(&BattleWindowOuterClickComponent_OuterClickCall_TypeInfo);
    byte_42AD5EE = 1;
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
    sub_B52A5C(battleData, call);
  }
  ((void (__fastcall *)(BattleData_o *, __int64, __int64, void *))battleData->klass[1]._1.events)(
    battleData,
    3LL,
    1LL,
    battleData->klass[1]._1.properties);
  this->fields.isSelected = 0;
  *(_QWORD *)&this->fields.mainSelect_uniqueId = 0LL;
  BattleWindowComponent__Open((BattleWindowComponent_o *)this, call, 0LL);
  v9 = (BattleWindowOuterClickComponent_OuterClickCall_o *)sub_B52A54(BattleWindowOuterClickComponent_OuterClickCall_TypeInfo);
  BattleWindowOuterClickComponent_OuterClickCall___ctor(
    v9,
    (Il2CppObject *)this,
    Method_BattleSelectMainSubServantWindow_onCloseButton__,
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
  this->fields.callBack = callback;
  sub_B52920(&this->fields.callBack);
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
  int32_t v18; // w3
  const MethodInfo *v19; // x5
  const MethodInfo *v20; // x2
  struct BattleSelectServantComponent_array *v21; // x8
  BattleSelectServantComponent_o *v22; // x22
  const MethodInfo *v23; // x2
  struct BattleSelectServantComponent_array *subSvtList; // x8
  __int64 v25; // x24
  unsigned __int64 v26; // x9
  unsigned __int64 v27; // x27
  unsigned __int64 v28; // x9
  BattleSelectServantComponent_o *v29; // x21
  BattleServantData_o *v30; // x22
  BattleSelectServantComponent_CallBack_o *v31; // x23
  int32_t v32; // w3
  const MethodInfo *v33; // x5
  const MethodInfo *v34; // x2
  struct BattleSelectServantComponent_array *v35; // x8
  BattleSelectServantComponent_o *v36; // x21
  const MethodInfo *v37; // x2
  __int64 v38; // x0

  if ( (byte_42AD5ED & 1) == 0 )
  {
    sub_B52984(&Method_BattleSelectMainSubServantWindow_selectSvt__);
    sub_B52984(&BattleSelectServantComponent_CallBack_TypeInfo);
    sub_B52984(&LocalizationManager_TypeInfo);
    sub_B52984(&StringLiteral_2456/*"BATTLE_DIALOG_SELECTMAINSUB_SERVANT"*/);
    byte_42AD5ED = 1;
  }
  title_label = this->fields.title_label;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v8 = LocalizationManager__Get((System_String_o *)StringLiteral_2456/*"BATTLE_DIALOG_SELECTMAINSUB_SERVANT"*/, 0LL);
  if ( !title_label )
    goto LABEL_40;
  UILabel__set_text(title_label, v8, 0LL);
  mainSvtList = this->fields.mainSvtList;
  if ( !mainSvtList )
    goto LABEL_40;
  v11 = 4LL;
  while ( 1 )
  {
    max_length = mainSvtList->max_length;
    v13 = v11 - 4;
    if ( v11 - 4 >= (int)max_length )
      break;
    if ( !mainList )
      goto LABEL_40;
    if ( v13 >= max_length )
    {
LABEL_42:
      v38 = sub_B52A88(v8);
      sub_B52A28(v38, 0LL);
    }
    v14 = mainList->max_length;
    v15 = (BattleSelectServantComponent_o *)*((_QWORD *)&mainSvtList->obj.klass + v11);
    if ( (__int64)v13 >= (int)v14 )
    {
      if ( !v15 )
        goto LABEL_40;
      BattleSelectServantComponent__setNone(*((BattleSelectServantComponent_o **)&mainSvtList->obj.klass + v11), v9);
    }
    else
    {
      if ( v13 >= v14 )
        goto LABEL_42;
      v16 = (BattleServantData_o *)*((_QWORD *)&mainList->obj.klass + v11);
      v17 = (BattleSelectServantComponent_CallBack_o *)sub_B52A54(BattleSelectServantComponent_CallBack_TypeInfo);
      BattleSelectServantComponent_CallBack___ctor(
        v17,
        (Il2CppObject *)this,
        Method_BattleSelectMainSubServantWindow_selectSvt__,
        0LL);
      if ( !v15 )
        goto LABEL_40;
      BattleSelectServantComponent__setData(v15, v16, 1, v18, v17, v19);
      v21 = this->fields.mainSvtList;
      if ( !v21 )
        goto LABEL_40;
      if ( v13 >= v21->max_length || v13 >= mainList->max_length )
        goto LABEL_42;
      v22 = (BattleSelectServantComponent_o *)*((_QWORD *)&v21->obj.klass + v11);
      v8 = (System_String_o *)BattleSelectMainSubServantWindow__CheckCanOrderChangeServant(
                                (BattleSelectMainSubServantWindow_o *)v8,
                                *((BattleServantData_o **)&mainList->obj.klass + v11),
                                v20);
      if ( !v22 )
        goto LABEL_40;
      BattleSelectServantComponent__setSelectMask(v22, (unsigned __int8)v8 & 1, v23);
    }
    mainSvtList = this->fields.mainSvtList;
    ++v11;
    if ( !mainSvtList )
      goto LABEL_40;
  }
  subSvtList = this->fields.subSvtList;
  if ( !subSvtList )
LABEL_40:
    sub_B52A5C(v8, v9);
  v25 = 4LL;
  while ( 1 )
  {
    v26 = subSvtList->max_length;
    v27 = v25 - 4;
    if ( v25 - 4 >= (int)v26 )
      break;
    if ( !subList )
      goto LABEL_40;
    if ( v27 >= v26 )
      goto LABEL_42;
    v28 = subList->max_length;
    v29 = (BattleSelectServantComponent_o *)*((_QWORD *)&subSvtList->obj.klass + v25);
    if ( (__int64)v27 >= (int)v28 )
    {
      if ( !v29 )
        goto LABEL_40;
      BattleSelectServantComponent__setNone(*((BattleSelectServantComponent_o **)&subSvtList->obj.klass + v25), v9);
    }
    else
    {
      if ( v27 >= v28 )
        goto LABEL_42;
      v30 = (BattleServantData_o *)*((_QWORD *)&subList->obj.klass + v25);
      v31 = (BattleSelectServantComponent_CallBack_o *)sub_B52A54(BattleSelectServantComponent_CallBack_TypeInfo);
      BattleSelectServantComponent_CallBack___ctor(
        v31,
        (Il2CppObject *)this,
        Method_BattleSelectMainSubServantWindow_selectSvt__,
        0LL);
      if ( !v29 )
        goto LABEL_40;
      BattleSelectServantComponent__setData(v29, v30, 2, v32, v31, v33);
      v35 = this->fields.subSvtList;
      if ( !v35 )
        goto LABEL_40;
      if ( v27 >= v35->max_length || v27 >= subList->max_length )
        goto LABEL_42;
      v36 = (BattleSelectServantComponent_o *)*((_QWORD *)&v35->obj.klass + v25);
      v8 = (System_String_o *)BattleSelectMainSubServantWindow__CheckCanOrderChangeServant(
                                (BattleSelectMainSubServantWindow_o *)v8,
                                *((BattleServantData_o **)&subList->obj.klass + v25),
                                v34);
      if ( !v36 )
        goto LABEL_40;
      BattleSelectServantComponent__setSelectMask(v36, (unsigned __int8)v8 & 1, v37);
    }
    subSvtList = this->fields.subSvtList;
    ++v25;
    if ( !subSvtList )
      goto LABEL_40;
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
    sub_B52A5C(battleData, method);
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
  CommonUI_o *Instance; // x0
  __int64 v5; // x1

  if ( (byte_42AD5F1 & 1) == 0 )
  {
    sub_B52984(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_42AD5F1 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_B52A5C(0LL, v5);
  CommonUI__CloseNotificationDialog(Instance, 0LL);
  this->fields.isSelected = 0;
}


System_String_o *__fastcall BattleSelectMainSubServantWindow__get_closeBtnPath(
        BattleSelectMainSubServantWindow_o *this,
        const MethodInfo *method)
{
  if ( (byte_42AD5F3 & 1) == 0 )
  {
    sub_B52984(&StringLiteral_13097/*"Sprite"*/);
    byte_42AD5F3 = 1;
  }
  return (System_String_o *)StringLiteral_13097/*"Sprite"*/;
}


void __fastcall BattleSelectMainSubServantWindow__onActionButton(
        BattleSelectMainSubServantWindow_o *this,
        const MethodInfo *method)
{
  int mainSelect_uniqueId; // w2
  int subSelect_uniqueId; // w3
  BattleSelectMainSubServantWindow_SelectedCallBack_o *callBack; // x0
  CommonUI_o *Instance; // x20
  System_String_o *v7; // x21
  System_String_o *v8; // x22
  NotificationDialog_ClickDelegate_o *v9; // x23

  if ( (byte_42AD5F0 & 1) == 0 )
  {
    sub_B52984(&Method_BattleSelectMainSubServantWindow_endErrorDialog__);
    sub_B52984(&NotificationDialog_ClickDelegate_TypeInfo);
    sub_B52984(&LocalizationManager_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_B52984(&SoundManager_TypeInfo);
    sub_B52984(&StringLiteral_2546/*"BATTLE_SELECTSUBERROR_NOSELECT_CONF"*/);
    sub_B52984(&StringLiteral_2547/*"BATTLE_SELECTSUBERROR_NOSELECT_TITLE"*/);
    byte_42AD5F0 = 1;
  }
  if ( !this->fields.isSelected )
  {
    mainSelect_uniqueId = this->fields.mainSelect_uniqueId;
    if ( mainSelect_uniqueId < 1 || (subSelect_uniqueId = this->fields.subSelect_uniqueId, subSelect_uniqueId < 1) )
    {
      Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v7 = LocalizationManager__Get((System_String_o *)StringLiteral_2547/*"BATTLE_SELECTSUBERROR_NOSELECT_TITLE"*/, 0LL);
      v8 = LocalizationManager__Get((System_String_o *)StringLiteral_2546/*"BATTLE_SELECTSUBERROR_NOSELECT_CONF"*/, 0LL);
      v9 = (NotificationDialog_ClickDelegate_o *)sub_B52A54(NotificationDialog_ClickDelegate_TypeInfo);
      NotificationDialog_ClickDelegate___ctor(
        v9,
        (Il2CppObject *)this,
        Method_BattleSelectMainSubServantWindow_endErrorDialog__,
        0LL);
      if ( Instance )
      {
        CommonUI__OpenNotificationDialog_18160348(
          Instance,
          v7,
          v8,
          v9,
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
        goto LABEL_13;
      }
    }
    else
    {
      callBack = this->fields.callBack;
      if ( callBack )
      {
        BattleSelectMainSubServantWindow_SelectedCallBack__Invoke(
          callBack,
          1,
          mainSelect_uniqueId,
          subSelect_uniqueId,
          0LL);
LABEL_13:
        if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !SoundManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
        }
        SoundManager__playSystemSe(8, 0LL);
        this->fields.isSelected = 1;
        return;
      }
    }
    sub_B52A5C(callBack, method);
  }
}


void __fastcall BattleSelectMainSubServantWindow__onCloseButton(
        BattleSelectMainSubServantWindow_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  BattleSelectMainSubServantWindow_SelectedCallBack_o *callBack; // x0

  if ( (byte_42AD5EF & 1) == 0 )
  {
    sub_B52984(&SeManager_TypeInfo);
    byte_42AD5EF = 1;
  }
  if ( !this->fields.isSelected )
  {
    if ( (BYTE3(SeManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SeManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(SeManager_TypeInfo);
    SeManager__PlayCommonSe(10, 0LL);
    callBack = this->fields.callBack;
    if ( !callBack )
      sub_B52A5C(0LL, v3);
    BattleSelectMainSubServantWindow_SelectedCallBack__Invoke(
      callBack,
      0,
      this->fields.mainSelect_uniqueId,
      this->fields.subSelect_uniqueId,
      0LL);
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
  __int64 v14; // x0

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
      {
LABEL_35:
        v14 = sub_B52A88(this);
        sub_B52A28(v14, 0LL);
      }
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
    sub_B52A5C(this, *(_QWORD *)&position);
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
  this->fields.battleData = data;
  sub_B52920(&this->fields.battleData);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleSelectMainSubServantWindow__setInitialPos(
        BattleSelectMainSubServantWindow_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1
  UnityEngine_Transform_o *transform; // x20
  int v6; // s0

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject
    || (transform = UnityEngine_GameObject__get_transform(gameObject, 0LL),
        *(UnityEngine_Vector3_o *)&v6 = UnityEngine_Vector3__get_zero(0LL),
        !transform) )
  {
    sub_B52A5C(gameObject, v4);
  }
  UnityEngine_Transform__set_localPosition(transform, *(UnityEngine_Vector3_o *)&v6, 0LL);
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
  intptr_t *p_method; // x0

  v4 = **(_QWORD **)&method;
  *(_QWORD *)&this->fields.method = object;
  p_method = &this->fields.method;
  *((_QWORD *)p_method + 1) = *(_QWORD *)&method;
  *((_QWORD *)p_method - 2) = v4;
  sub_B52920(p_method);
}


System_IAsyncResult_o *__fastcall BattleSelectMainSubServantWindow_SelectedCallBack__BeginInvoke(
        BattleSelectMainSubServantWindow_SelectedCallBack_o *this,
        bool flg,
        int32_t mainUniqueId,
        int32_t subUniqueId,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v11[4]; // [xsp+0h] [xbp-50h] BYREF
  int32_t v12; // [xsp+24h] [xbp-2Ch] BYREF
  int32_t v13; // [xsp+28h] [xbp-28h] BYREF
  char v14[4]; // [xsp+2Ch] [xbp-24h] BYREF

  v14[0] = flg;
  v12 = subUniqueId;
  v13 = mainUniqueId;
  if ( (byte_42AD856 & 1) == 0 )
  {
    sub_B52984(&bool_TypeInfo);
    sub_B52984(&int_TypeInfo);
    byte_42AD856 = 1;
  }
  v11[3] = 0LL;
  v11[0] = j_il2cpp_value_box_0(bool_TypeInfo, v14);
  v11[1] = j_il2cpp_value_box_0(int_TypeInfo, &v13);
  v11[2] = j_il2cpp_value_box_0(int_TypeInfo, &v12);
  return (System_IAsyncResult_o *)sub_B52928(this, v11, callback, object);
}


void __fastcall BattleSelectMainSubServantWindow_SelectedCallBack__EndInvoke(
        BattleSelectMainSubServantWindow_SelectedCallBack_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B5292C(result, 0LL, method);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleSelectMainSubServantWindow_SelectedCallBack__Invoke(
        BattleSelectMainSubServantWindow_SelectedCallBack_o *this,
        bool flg,
        int32_t mainUniqueId,
        int32_t subUniqueId,
        const MethodInfo *method)
{
  __int64 v5; // x8
  __int64 v10; // x26
  BattleSelectMainSubServantWindow_SelectedCallBack_o **v11; // x27
  __int64 v12; // x28
  unsigned int v13; // w25
  __int64 class_0; // x0
  __int64 v15; // x3
  __int64 v16; // x8
  unsigned __int64 v17; // x10
  _DWORD *v18; // x11
  __int64 v19; // x0
  __int64 v20; // x0
  __int64 v21; // x0
  void (__fastcall **v22)(__int64 *, bool, _QWORD, _QWORD, _QWORD); // x0
  BattleSelectMainSubServantWindow_SelectedCallBack_o *v23; // x8
  __int64 *v24; // x23
  __int64 v25; // x24
  void (__fastcall *v26)(bool, _QWORD, _QWORD, __int64); // x25
  char v27; // w25
  char v28; // w0
  __int64 v29; // x3
  __int64 v30; // x8
  __int64 v31; // x1
  __int64 v32; // x2
  unsigned __int64 v33; // x10
  _DWORD *v34; // x11
  BattleSelectMainSubServantWindow_SelectedCallBack_o *v35; // [xsp+8h] [xbp-58h] BYREF

  v35 = this;
  v5 = *(_QWORD *)&this[1].fields.method_ptr;
  if ( !v5 )
  {
    v11 = &v35;
    v10 = 1LL;
    goto LABEL_5;
  }
  v10 = *(_QWORD *)(v5 + 24);
  if ( v10 )
  {
    v11 = (BattleSelectMainSubServantWindow_SelectedCallBack_o **)(v5 + 32);
LABEL_5:
    v12 = 0LL;
    while ( 1 )
    {
      v23 = v11[v12];
      v24 = *(__int64 **)&v23->fields.method;
      v25 = *(_QWORD *)&v23->fields.extra_arg;
      v26 = *(void (__fastcall **)(bool, _QWORD, _QWORD, __int64))&v23->fields.method_ptr;
      if ( *(__int16 *)(v25 + 72) == -1 )
        sub_B52A40(*(_QWORD *)&v23->fields.extra_arg, flg, *(_QWORD *)&mainUniqueId, *(_QWORD *)&subUniqueId);
      if ( (sub_B529B4(v25) & 1) == 0 )
        break;
      if ( *(_BYTE *)(v25 + 74) != 3 )
        goto LABEL_36;
      v26(flg, (unsigned int)mainUniqueId, (unsigned int)subUniqueId, v25);
LABEL_37:
      if ( ++v12 == v10 )
        return;
    }
    if ( v24 && *(__int16 *)(v25 + 72) != -1 && (*(_BYTE *)(*v24 + 277) & 1) == 0 && this->fields.m_target )
    {
      v27 = sub_B529AC(v25);
      v28 = sub_B52DB0(v25);
      if ( (v27 & 1) != 0 )
      {
        if ( (v28 & 1) != 0 )
        {
          v30 = *v24;
          v31 = *(_QWORD *)(v25 + 24);
          v32 = *(unsigned __int16 *)(v25 + 72);
          if ( *(_WORD *)(*v24 + 298) )
          {
            v33 = 0LL;
            v34 = (_DWORD *)(*(_QWORD *)(v30 + 176) + 8LL);
            while ( *((_QWORD *)v34 - 1) != v31 )
            {
              ++v33;
              v34 += 4;
              if ( v33 >= *(unsigned __int16 *)(*v24 + 298) )
                goto LABEL_35;
            }
            v21 = v30 + 16LL * (*v34 + (int)v32) + 312;
          }
          else
          {
LABEL_35:
            v21 = sub_AEB880(v24, v31, v32, v29);
          }
          v20 = *(_QWORD *)(v21 + 8);
        }
        else
        {
          v20 = *(_QWORD *)(*v24 + 16LL * *(unsigned __int16 *)(v25 + 72) + 320);
        }
        v22 = (void (__fastcall **)(__int64 *, bool, _QWORD, _QWORD, _QWORD))sub_B52A34(v20, v25);
        (*v22)(v24, flg, (unsigned int)mainUniqueId, (unsigned int)subUniqueId, v22);
      }
      else
      {
        v13 = *(unsigned __int16 *)(v25 + 72);
        if ( (v28 & 1) != 0 )
        {
          class_0 = j_il2cpp_method_get_class_0(v25);
          v16 = *v24;
          if ( *(_WORD *)(*v24 + 298) )
          {
            v17 = 0LL;
            v18 = (_DWORD *)(*(_QWORD *)(v16 + 176) + 8LL);
            while ( *((_QWORD *)v18 - 1) != class_0 )
            {
              ++v17;
              v18 += 4;
              if ( v17 >= *(unsigned __int16 *)(*v24 + 298) )
                goto LABEL_11;
            }
            v19 = v16 + 16LL * (int)(*v18 + v13) + 312;
          }
          else
          {
LABEL_11:
            v19 = sub_AEB880(v24, class_0, v13, v15);
          }
          (*(void (__fastcall **)(__int64 *, bool, _QWORD, _QWORD, _QWORD))v19)(
            v24,
            flg,
            (unsigned int)mainUniqueId,
            (unsigned int)subUniqueId,
            *(_QWORD *)(v19 + 8));
        }
        else
        {
          (*(void (__fastcall **)(__int64 *, bool, _QWORD, _QWORD, _QWORD))(*v24
                                                                          + 16LL * *(unsigned __int16 *)(v25 + 72)
                                                                          + 312))(
            v24,
            flg,
            (unsigned int)mainUniqueId,
            (unsigned int)subUniqueId,
            *(_QWORD *)(*v24 + 16LL * *(unsigned __int16 *)(v25 + 72) + 320));
        }
      }
      goto LABEL_37;
    }
LABEL_36:
    ((void (__fastcall *)(__int64 *, bool, _QWORD, _QWORD, __int64))v26)(
      v24,
      flg,
      (unsigned int)mainUniqueId,
      (unsigned int)subUniqueId,
      v25);
    goto LABEL_37;
  }
}