void __fastcall SupportSelectObject___ctor(SupportSelectObject_o *this, const MethodInfo *method)
{
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0LL);
}


void __fastcall SupportSelectObject__ActivateEquipOnly(SupportSelectObject_o *this, const MethodInfo *method)
{
  SupportSelectItemDraw_o *itemDraw; // x0

  itemDraw = this->fields.itemDraw;
  if ( !itemDraw )
    sub_B2C434(0LL, method);
  SupportSelectItemDraw__ActivateEquipOnly(itemDraw, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SupportSelectObject__AddDepth(SupportSelectObject_o *this, int32_t depth, const MethodInfo *method)
{
  WarBoardControlPlayTalkUiComponent_array *ComponentsInChildren_WarBoardControlPlayTalkUiComponent; // x0
  __int64 v6; // x1
  int max_length; // w8
  WarBoardControlPlayTalkUiComponent_array *v8; // x20
  unsigned int v9; // w21
  __int64 v10; // x0

  if ( (byte_418ABE2 & 1) == 0 )
  {
    sub_B2C35C(&Method_UnityEngine_Component_GetComponentsInChildren_UIWidget____67395072, *(_QWORD *)&depth);
    byte_418ABE2 = 1;
  }
  ComponentsInChildren_WarBoardControlPlayTalkUiComponent = UnityEngine_Component__GetComponentsInChildren_WarBoardControlPlayTalkUiComponent_(
                                                              (UnityEngine_Component_o *)this,
                                                              1,
                                                              (const MethodInfo_172DFBC *)Method_UnityEngine_Component_GetComponentsInChildren_UIWidget____67395072);
  if ( !ComponentsInChildren_WarBoardControlPlayTalkUiComponent )
    goto LABEL_11;
  max_length = ComponentsInChildren_WarBoardControlPlayTalkUiComponent->max_length;
  v8 = ComponentsInChildren_WarBoardControlPlayTalkUiComponent;
  if ( max_length >= 1 )
  {
    v9 = 0;
    while ( 1 )
    {
      if ( v9 >= max_length )
      {
        v10 = sub_B2C460(ComponentsInChildren_WarBoardControlPlayTalkUiComponent);
        sub_B2C400(v10, 0LL);
      }
      ComponentsInChildren_WarBoardControlPlayTalkUiComponent = (WarBoardControlPlayTalkUiComponent_array *)v8->m_Items[v9];
      if ( !ComponentsInChildren_WarBoardControlPlayTalkUiComponent )
        break;
      UIWidget__set_depth(
        (UIWidget_o *)ComponentsInChildren_WarBoardControlPlayTalkUiComponent,
        LODWORD(ComponentsInChildren_WarBoardControlPlayTalkUiComponent->m_Items[17]) + depth,
        0LL);
      max_length = v8->max_length;
      if ( (int)++v9 >= max_length )
        return;
    }
LABEL_11:
    sub_B2C434(ComponentsInChildren_WarBoardControlPlayTalkUiComponent, v6);
  }
}


void __fastcall SupportSelectObject__Awake(SupportSelectObject_o *this, const MethodInfo *method)
{
  WebViewObject_o *Component_WebViewObject; // x1
  System_String_array **v4; // x2
  System_String_array **v5; // x3
  System_Boolean_array **v6; // x4
  System_Int32_array **v7; // x5
  System_Int32_array *v8; // x6
  System_Int32_array *v9; // x7

  if ( (byte_418ABDB & 1) == 0 )
  {
    sub_B2C35C(&Method_UnityEngine_Component_GetComponent_SupportSelectItemDraw___, method);
    byte_418ABDB = 1;
  }
  Component_WebViewObject = UnityEngine_Component__GetComponent_WebViewObject_(
                              (UnityEngine_Component_o *)this,
                              (const MethodInfo_172DB90 *)Method_UnityEngine_Component_GetComponent_SupportSelectItemDraw___);
  this->fields.itemDraw = (struct SupportSelectItemDraw_o *)Component_WebViewObject;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.itemDraw,
    (System_Int32_array **)Component_WebViewObject,
    v4,
    v5,
    v6,
    v7,
    v8,
    v9);
}


void __fastcall SupportSelectObject__ChangeEvent(
        SupportSelectObject_o *this,
        EventCampaignEntity_array *changeEventFriendPoints,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  const MethodInfo *v9; // x1

  this->fields.eventFriendPoints = changeEventFriendPoints;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.eventFriendPoints,
    (System_Int32_array **)changeEventFriendPoints,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  SupportSelectObject__ModifyItem(this, v9);
}


void __fastcall SupportSelectObject__ClearItem(SupportSelectObject_o *this, const MethodInfo *method)
{
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7
  UnityEngine_Object_o *itemDraw; // x20
  __int64 v16; // x1
  SupportSelectItemDraw_o *v17; // x0

  if ( (byte_418ABDC & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, method);
    byte_418ABDC = 1;
  }
  this->fields.supportServantData = 0LL;
  sub_B2C2F8((BattleServantConfConponent_o *)&this->fields.supportServantData, 0LL, v2, v3, v4, v5, v6, v7);
  this->fields.callbackFunc = 0LL;
  *(_QWORD *)&this->fields.deckNum = 0LL;
  sub_B2C2F8((BattleServantConfConponent_o *)&this->fields.callbackFunc, 0LL, v9, v10, v11, v12, v13, v14);
  itemDraw = (UnityEngine_Object_o *)this->fields.itemDraw;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(itemDraw, 0LL, 0LL) )
  {
    v17 = this->fields.itemDraw;
    if ( !v17 )
      sub_B2C434(0LL, v16);
    SupportSelectItemDraw__ClearItem(v17, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SupportSelectObject__EndShowEquip(SupportSelectObject_o *this, bool isDecide, const MethodInfo *method)
{
  CommonUI_o *Instance; // x0
  __int64 v6; // x1

  if ( (byte_418ABE0 & 1) == 0 )
  {
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, isDecide);
    byte_418ABE0 = 1;
  }
  if ( isDecide )
    SupportSelectObject__ModifyItem(this, (const MethodInfo *)isDecide);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_B2C434(0LL, v6);
  CommonUI__CloseServantEquipStatusDialog(Instance, 0LL, 0LL);
}


int32_t __fastcall SupportSelectObject__GetClassPos(SupportSelectObject_o *this, const MethodInfo *method)
{
  return this->fields.classPos;
}


int32_t __fastcall SupportSelectObject__GetDeckNum(SupportSelectObject_o *this, const MethodInfo *method)
{
  return this->fields.deckNum;
}


EventCampaignEntity_array *__fastcall SupportSelectObject__GetEventFriendPoints(
        SupportSelectObject_o *this,
        const MethodInfo *method)
{
  return this->fields.eventFriendPoints;
}


UserServantLeaderEntity_o *__fastcall SupportSelectObject__GetLeaderInfo(
        SupportSelectObject_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( !this->fields.supportServantData )
    sub_B2C434(this, method);
  return SupportServantData__getUserServantLeaderEntity(this->fields.supportServantData, this->fields.classPos, v2);
}


SupportServantData_o *__fastcall SupportSelectObject__GetSupportServantData(
        SupportSelectObject_o *this,
        const MethodInfo *method)
{
  return this->fields.supportServantData;
}


void __fastcall SupportSelectObject__HideEquip(SupportSelectObject_o *this, const MethodInfo *method)
{
  SupportSelectItemDraw_o *itemDraw; // x0

  itemDraw = this->fields.itemDraw;
  if ( !itemDraw )
    sub_B2C434(0LL, method);
  SupportSelectItemDraw__SetEquipAlpha(itemDraw, 0.0, 0LL);
}


void __fastcall SupportSelectObject__ModifyItem(SupportSelectObject_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *itemDraw; // x20
  SupportServantData_o *supportServantData; // x1
  SupportSelectItemDraw_o *v5; // x0

  if ( (byte_418ABDD & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, method);
    byte_418ABDD = 1;
  }
  itemDraw = (UnityEngine_Object_o *)this->fields.itemDraw;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(itemDraw, 0LL, 0LL) )
  {
    supportServantData = this->fields.supportServantData;
    if ( supportServantData )
    {
      v5 = this->fields.itemDraw;
      if ( !v5 )
        sub_B2C434(0LL, supportServantData);
      SupportSelectItemDraw__SetItem(
        v5,
        supportServantData,
        this->fields.classPos,
        this->fields.eventFriendPoints,
        2,
        0LL);
    }
  }
}


void __fastcall SupportSelectObject__OnClickItem(SupportSelectObject_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x4

  if ( this->fields.callbackFunc )
    SupportSelectObject__clickSelectItem(this, 3, this->fields.deckNum, this->fields.classPos, v2);
}


void __fastcall SupportSelectObject__OnClickItemEquip(SupportSelectObject_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x4

  if ( this->fields.callbackFunc )
    SupportSelectObject__clickSelectItem(this, 4, this->fields.deckNum, this->fields.classPos, v2);
}


void __fastcall SupportSelectObject__OnLongPressItem(SupportSelectObject_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  SupportServantData_o *supportServantData; // x0
  int32_t classPos; // w1
  int64_t Servant; // x0
  int64_t v10; // x20
  UserServantEntity_o *Entity; // x0
  __int64 v12; // x20
  __int64 v13; // x21
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v14; // 0:x0.16

  if ( (byte_418ABDF & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_UserServantMaster___, method);
    sub_B2C35C(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v4);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v5);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    byte_418ABDF = 1;
  }
  if ( this->fields.callbackFunc )
  {
    supportServantData = this->fields.supportServantData;
    if ( !supportServantData )
      goto LABEL_19;
    classPos = this->fields.classPos;
    if ( supportServantData->fields.isFriendInfo )
    {
      supportServantData = (SupportServantData_o *)SupportServantData__getUserServantLeaderEntity(
                                                     supportServantData,
                                                     classPos,
                                                     v2);
      if ( !supportServantData )
        goto LABEL_19;
      if ( *(int *)&supportServantData->fields.isFriendInfo >= 1 )
        goto LABEL_8;
    }
    else
    {
      Servant = SupportServantData__getServant(supportServantData, classPos, v2);
      if ( Servant >= 1 )
      {
        v10 = Servant;
        supportServantData = (SupportServantData_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !supportServantData )
          goto LABEL_19;
        supportServantData = (SupportServantData_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                       (DataManager_o *)supportServantData,
                                                       (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserServantMaster___);
        if ( !supportServantData )
          goto LABEL_19;
        Entity = DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
                   (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)supportServantData,
                   v10,
                   (const MethodInfo_24E42F8 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
        if ( Entity )
        {
          v13 = *(_QWORD *)&Entity->fields.svtId.fields.currentCryptoKey;
          v12 = *(_QWORD *)&Entity->fields.svtId.fields.fakeValue;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          }
          *(_QWORD *)&v14.fields.currentCryptoKey = v13;
          *(_QWORD *)&v14.fields.fakeValue = v12;
          if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v14, 0LL) >= 1 )
          {
LABEL_8:
            supportServantData = (SupportServantData_o *)this->fields.callbackFunc;
            if ( supportServantData )
            {
              SupportSelectMenu_CallbackFunc__Invoke(
                (SupportSelectMenu_CallbackFunc_o *)supportServantData,
                9,
                this->fields.deckNum,
                this->fields.classPos,
                0LL);
              return;
            }
LABEL_19:
            sub_B2C434(supportServantData, method);
          }
        }
      }
    }
  }
}


void __fastcall SupportSelectObject__OnLongPressItemEquip(SupportSelectObject_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  SupportSelectMenu_CallbackFunc_o *supportServantData; // x0

  if ( this->fields.callbackFunc )
  {
    supportServantData = (SupportSelectMenu_CallbackFunc_o *)this->fields.supportServantData;
    if ( !supportServantData )
      goto LABEL_7;
    if ( SupportServantData__getEquip((SupportServantData_o *)supportServantData, this->fields.classPos, v2) )
    {
      supportServantData = this->fields.callbackFunc;
      if ( supportServantData )
      {
        SupportSelectMenu_CallbackFunc__Invoke(supportServantData, 10, this->fields.deckNum, this->fields.classPos, 0LL);
        return;
      }
LABEL_7:
      sub_B2C434(supportServantData, method);
    }
  }
}


void __fastcall SupportSelectObject__SetActiveDragSwapGuide(
        SupportSelectObject_o *this,
        bool flag,
        const MethodInfo *method)
{
  SupportSelectItemDraw_o *itemDraw; // x0

  itemDraw = this->fields.itemDraw;
  if ( !itemDraw )
    sub_B2C434(0LL, flag);
  SupportSelectItemDraw__SetActiveDragSwapGuide(itemDraw, flag, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SupportSelectObject__SetItem(
        SupportSelectObject_o *this,
        SupportServantData_o *supportServantData,
        int32_t deckNum,
        int32_t classPos,
        EventCampaignEntity_array *friendPointCampaigns,
        SupportSelectMenu_CallbackFunc_o *callback,
        const MethodInfo *method)
{
  System_Int32_array *v7; // x7
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7
  UnityEngine_Object_o *itemDraw; // x20
  __int64 v27; // x1
  SupportSelectItemDraw_o *v28; // x0

  if ( (byte_418ABDE & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, supportServantData);
    byte_418ABDE = 1;
  }
  this->fields.supportServantData = supportServantData;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.supportServantData,
    (System_Int32_array **)supportServantData,
    *(System_String_array ***)&deckNum,
    *(System_String_array ***)&classPos,
    (System_Boolean_array **)friendPointCampaigns,
    (System_Int32_array **)callback,
    (System_Int32_array *)method,
    v7);
  this->fields.deckNum = deckNum;
  this->fields.classPos = classPos;
  this->fields.eventFriendPoints = friendPointCampaigns;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.eventFriendPoints,
    (System_Int32_array **)friendPointCampaigns,
    v14,
    v15,
    v16,
    v17,
    v18,
    v19);
  this->fields.callbackFunc = callback;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.callbackFunc,
    (System_Int32_array **)callback,
    v20,
    v21,
    v22,
    v23,
    v24,
    v25);
  itemDraw = (UnityEngine_Object_o *)this->fields.itemDraw;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(itemDraw, 0LL, 0LL) )
  {
    v28 = this->fields.itemDraw;
    if ( !v28 )
      sub_B2C434(0LL, v27);
    SupportSelectItemDraw__SetItem(
      v28,
      this->fields.supportServantData,
      this->fields.classPos,
      this->fields.eventFriendPoints,
      2,
      0LL);
  }
}


void __fastcall SupportSelectObject__ShowEquip(SupportSelectObject_o *this, const MethodInfo *method)
{
  SupportSelectItemDraw_o *itemDraw; // x0

  itemDraw = this->fields.itemDraw;
  if ( !itemDraw )
    sub_B2C434(0LL, method);
  SupportSelectItemDraw__SetEquipAlpha(itemDraw, 1.0, 0LL);
}


void __fastcall SupportSelectObject__add_callbackFunc(
        SupportSelectObject_o *this,
        SupportSelectMenu_CallbackFunc_o *value,
        const MethodInfo *method)
{
  struct SupportSelectMenu_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v6; // x21
  struct SupportSelectMenu_CallbackFunc_o *callbackFunc; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  SupportSelectObject_o *v11; // x0
  SupportSelectMenu_CallbackFunc_o *v12; // x1
  const MethodInfo *v13; // x2

  if ( (byte_418ABD9 & 1) == 0 )
  {
    sub_B2C35C(&SupportSelectMenu_CallbackFunc_TypeInfo, value);
    byte_418ABD9 = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v6 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Combine(v6, (System_Delegate_o *)value, 0LL);
    if ( v8 )
    {
      if ( (SupportSelectMenu_CallbackFunc_c *)v8->klass != SupportSelectMenu_CallbackFunc_TypeInfo )
        break;
    }
    v9 = sub_B20D74(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_B2C728(v8);
  SupportSelectObject__remove_callbackFunc(v11, v12, v13);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SupportSelectObject__clickSelectItem(
        SupportSelectObject_o *this,
        int32_t result,
        int32_t deckNum,
        int32_t classPos,
        const MethodInfo *method)
{
  SupportSelectMenu_CallbackFunc_o *callbackFunc; // x0
  struct SupportServantData_o *supportServantData; // x8
  int32_t v11; // w1

  if ( (byte_418ABE1 & 1) == 0 )
  {
    sub_B2C35C(&SoundManager_TypeInfo, *(_QWORD *)&result);
    byte_418ABE1 = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  if ( callbackFunc )
  {
    supportServantData = this->fields.supportServantData;
    if ( supportServantData )
    {
      if ( supportServantData->fields.isFriendInfo )
      {
        if ( supportServantData->fields.isSelectServant )
        {
          v11 = 8;
        }
        else if ( result == 4 )
        {
          v11 = 10;
        }
        else
        {
          v11 = 9;
        }
LABEL_19:
        SupportSelectMenu_CallbackFunc__Invoke(callbackFunc, v11, deckNum, classPos, 0LL);
        return;
      }
      if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SoundManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
      }
      SoundManager__playSystemSe(0, 0LL);
      callbackFunc = this->fields.callbackFunc;
      if ( callbackFunc )
      {
        if ( result == 4 )
          v11 = 4;
        else
          v11 = 3;
        goto LABEL_19;
      }
    }
    sub_B2C434(callbackFunc, *(_QWORD *)&result);
  }
}


void __fastcall SupportSelectObject__remove_callbackFunc(
        SupportSelectObject_o *this,
        SupportSelectMenu_CallbackFunc_o *value,
        const MethodInfo *method)
{
  struct SupportSelectMenu_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v6; // x21
  struct SupportSelectMenu_CallbackFunc_o *callbackFunc; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  SupportSelectObject_o *v11; // x0
  const MethodInfo *v12; // x1

  if ( (byte_418ABDA & 1) == 0 )
  {
    sub_B2C35C(&SupportSelectMenu_CallbackFunc_TypeInfo, value);
    byte_418ABDA = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v6 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Remove(v6, (System_Delegate_o *)value, 0LL);
    if ( v8 )
    {
      if ( (SupportSelectMenu_CallbackFunc_c *)v8->klass != SupportSelectMenu_CallbackFunc_TypeInfo )
        break;
    }
    v9 = sub_B20D74(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_B2C728(v8);
  SupportSelectObject__Awake(v11, v12);
}