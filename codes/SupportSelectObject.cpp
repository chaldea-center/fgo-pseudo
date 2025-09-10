void SupportSelectObject___ctor(SupportSelectObject_o *this, const MethodInfo *method)
{
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0);
}


void SupportSelectObject__ActivateEquipOnly(SupportSelectObject_o *this, const MethodInfo *method)
{
  SupportSelectItemDraw_o *itemDraw; // x0

  itemDraw = this->fields.itemDraw;
  if ( !itemDraw )
    sub_1C2D6EC(0, method);
  SupportSelectItemDraw__ActivateEquipOnly(itemDraw, 0);
}


void SupportSelectObject__AddDepth(SupportSelectObject_o *this, int32_t depth, const MethodInfo *method)
{
  System_Object_array *ComponentsInChildren_object; // x0
  __int64 v6; // x1
  __int64 v7; // x2
  int max_length; // w8
  System_Object_array *v9; // x20
  unsigned int v10; // w21

  if ( (byte_4C239E3 & 1) == 0 )
  {
    sub_1C2D490(&Method_UnityEngine_Component_GetComponentsInChildren_UIWidget____78016632);
    byte_4C239E3 = 1;
  }
  ComponentsInChildren_object = UnityEngine_Component__GetComponentsInChildren_object_(
                                  (UnityEngine_Component_o *)this,
                                  1,
                                  (const MethodInfo_30C5E44 *)Method_UnityEngine_Component_GetComponentsInChildren_UIWidget____78016632);
  if ( !ComponentsInChildren_object )
    goto LABEL_11;
  max_length = ComponentsInChildren_object->max_length;
  v9 = ComponentsInChildren_object;
  if ( max_length >= 1 )
  {
    v10 = 0;
    while ( 1 )
    {
      if ( v10 >= max_length )
        sub_1C2D6F4(ComponentsInChildren_object, v6, v7);
      ComponentsInChildren_object = (System_Object_array *)v9->m_Items[v10];
      if ( !ComponentsInChildren_object )
        break;
      UIWidget__set_depth(
        (UIWidget_o *)ComponentsInChildren_object,
        LODWORD(ComponentsInChildren_object->m_Items[18]) + depth,
        0);
      max_length = v9->max_length;
      if ( (int)++v10 >= max_length )
        return;
    }
LABEL_11:
    sub_1C2D6EC(ComponentsInChildren_object, v6);
  }
}


void SupportSelectObject__Awake(SupportSelectObject_o *this, const MethodInfo *method)
{
  Il2CppObject *Component_object; // x0
  int32_t v4; // w2
  const MethodInfo *v5; // x3

  if ( (byte_4C239DC & 1) == 0 )
  {
    sub_1C2D490(&Method_UnityEngine_Component_GetComponent_SupportSelectItemDraw___);
    byte_4C239DC = 1;
  }
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)this,
                       (const MethodInfo_30C5120 *)Method_UnityEngine_Component_GetComponent_SupportSelectItemDraw___);
  this->fields.itemDraw = (struct SupportSelectItemDraw_o *)Component_object;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.itemDraw, (int32_t)Component_object, v4, v5);
}


void SupportSelectObject__ChangeEvent(
        SupportSelectObject_o *this,
        EventCampaignEntity_array *changeEventFriendPoints,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  const MethodInfo *v5; // x1

  this->fields.eventFriendPoints = changeEventFriendPoints;
  sub_1C2D434(
    (CGThumbnailListItem_o *)&this->fields.eventFriendPoints,
    (int32_t)changeEventFriendPoints,
    (int32_t)method,
    v3);
  SupportSelectObject__ModifyItem(this, v5);
}


void SupportSelectObject__ClearItem(SupportSelectObject_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  int32_t v5; // w2
  const MethodInfo *v6; // x3
  UnityEngine_Object_o *itemDraw; // x20
  __int64 v8; // x1
  SupportSelectItemDraw_o *v9; // x0

  if ( (byte_4C239DD & 1) == 0 )
  {
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    byte_4C239DD = 1;
  }
  this->fields.supportServantData = 0;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.supportServantData, 0, v2, v3);
  this->fields.callbackFunc = 0;
  *(_QWORD *)&this->fields.deckNum = 0;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.callbackFunc, 0, v5, v6);
  itemDraw = (UnityEngine_Object_o *)this->fields.itemDraw;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(itemDraw, 0, 0) )
  {
    v9 = this->fields.itemDraw;
    if ( !v9 )
      sub_1C2D6EC(0, v8);
    SupportSelectItemDraw__ClearItem(v9, 0);
  }
}


// local variable allocation has failed, the output may be wrong!
void SupportSelectObject__EndShowEquip(SupportSelectObject_o *this, bool isDecide, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v6; // x1

  if ( (byte_4C239E1 & 1) == 0 )
  {
    sub_1C2D490(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4C239E1 = 1;
  }
  if ( isDecide )
    SupportSelectObject__ModifyItem(this, (const MethodInfo *)isDecide);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1C2D6EC(0, v6);
  CommonUI__CloseServantEquipStatusDialog((CommonUI_o *)Instance, 0, 0);
}


int32_t SupportSelectObject__GetClassPos(SupportSelectObject_o *this, const MethodInfo *method)
{
  return this->fields.classPos;
}


int32_t SupportSelectObject__GetDeckNum(SupportSelectObject_o *this, const MethodInfo *method)
{
  return this->fields.deckNum;
}


EventCampaignEntity_array *SupportSelectObject__GetEventFriendPoints(
        SupportSelectObject_o *this,
        const MethodInfo *method)
{
  return this->fields.eventFriendPoints;
}


UserServantLeaderEntity_o *SupportSelectObject__GetLeaderInfo(SupportSelectObject_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( !this->fields.supportServantData )
    sub_1C2D6EC(this, method);
  return SupportServantData__getUserServantLeaderEntity(this->fields.supportServantData, this->fields.classPos, v2);
}


SupportServantData_o *SupportSelectObject__GetSupportServantData(SupportSelectObject_o *this, const MethodInfo *method)
{
  return this->fields.supportServantData;
}


void SupportSelectObject__HideEquip(SupportSelectObject_o *this, const MethodInfo *method)
{
  SupportSelectItemDraw_o *itemDraw; // x0

  itemDraw = this->fields.itemDraw;
  if ( !itemDraw )
    sub_1C2D6EC(0, method);
  SupportSelectItemDraw__SetEquipAlpha(itemDraw, 0.0, 0);
}


void SupportSelectObject__ModifyItem(SupportSelectObject_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *itemDraw; // x20
  SupportServantData_o *supportServantData; // x1
  SupportSelectItemDraw_o *v5; // x0

  if ( (byte_4C239DE & 1) == 0 )
  {
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    byte_4C239DE = 1;
  }
  itemDraw = (UnityEngine_Object_o *)this->fields.itemDraw;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(itemDraw, 0, 0) )
  {
    supportServantData = this->fields.supportServantData;
    if ( supportServantData )
    {
      v5 = this->fields.itemDraw;
      if ( !v5 )
        sub_1C2D6EC(0, supportServantData);
      SupportSelectItemDraw__SetItem(
        v5,
        supportServantData,
        this->fields.classPos,
        this->fields.eventFriendPoints,
        2,
        0);
    }
  }
}


void SupportSelectObject__OnClickItem(SupportSelectObject_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x4

  if ( this->fields.callbackFunc )
    SupportSelectObject__clickSelectItem(this, 3, this->fields.deckNum, this->fields.classPos, v2);
}


void SupportSelectObject__OnClickItemEquip(SupportSelectObject_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x4

  if ( this->fields.callbackFunc )
    SupportSelectObject__clickSelectItem(this, 4, this->fields.deckNum, this->fields.classPos, v2);
}


void SupportSelectObject__OnLongPressItem(SupportSelectObject_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  SupportServantData_o *supportServantData; // x0
  int32_t classPos; // w1
  struct SupportSelectMenu_CallbackFunc_o *callbackFunc; // x8
  int64_t Servant; // x0
  int64_t v8; // x20
  Il2CppObject *Entity; // x0
  void *monitor; // x20
  Il2CppClass *klass; // x21
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v12; // 0:x0.16

  if ( (byte_4C239E0 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_1C2D490(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    sub_1C2D490(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C239E0 = 1;
  }
  if ( this->fields.callbackFunc )
  {
    supportServantData = this->fields.supportServantData;
    if ( !supportServantData )
      goto LABEL_18;
    classPos = this->fields.classPos;
    if ( supportServantData->fields.isFriendInfo )
    {
      supportServantData = (SupportServantData_o *)SupportServantData__getUserServantLeaderEntity(
                                                     supportServantData,
                                                     classPos,
                                                     v2);
      if ( !supportServantData )
        goto LABEL_18;
      if ( *(int *)&supportServantData->fields.isFriendInfo >= 1 )
        goto LABEL_8;
    }
    else
    {
      Servant = SupportServantData__getServant(supportServantData, classPos, v2);
      if ( Servant >= 1 )
      {
        v8 = Servant;
        supportServantData = (SupportServantData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !supportServantData )
          goto LABEL_18;
        supportServantData = (SupportServantData_o *)DataManager__GetMasterData_object_(
                                                       (DataManager_o *)supportServantData,
                                                       (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_UserServantMaster___);
        if ( !supportServantData )
          goto LABEL_18;
        Entity = DataMasterBase_object__object__long___GetEntity(
                   (DataMasterBase_TMaster__TEntity__PKType__o *)supportServantData,
                   v8,
                   (const MethodInfo_338A2F4 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
        if ( Entity )
        {
          klass = Entity[5].klass;
          monitor = Entity[5].monitor;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          *(_QWORD *)&v12.fields.currentCryptoKey = klass;
          *(_QWORD *)&v12.fields.fakeValue = monitor;
          supportServantData = (SupportServantData_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(
                                                         v12,
                                                         0);
          if ( (int)supportServantData >= 1 )
          {
LABEL_8:
            callbackFunc = this->fields.callbackFunc;
            if ( callbackFunc )
            {
              ((void (__fastcall *)(intptr_t, __int64, _QWORD, _QWORD, intptr_t))callbackFunc->fields.invoke_impl)(
                callbackFunc->fields.method_code,
                9,
                (unsigned int)this->fields.deckNum,
                (unsigned int)this->fields.classPos,
                callbackFunc->fields.method);
              return;
            }
LABEL_18:
            sub_1C2D6EC(supportServantData, method);
          }
        }
      }
    }
  }
}


void SupportSelectObject__OnLongPressItemEquip(SupportSelectObject_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  SupportServantData_o *supportServantData; // x0
  struct SupportSelectMenu_CallbackFunc_o *callbackFunc; // x8

  if ( this->fields.callbackFunc )
  {
    supportServantData = this->fields.supportServantData;
    if ( !supportServantData )
      goto LABEL_7;
    supportServantData = (SupportServantData_o *)SupportServantData__getEquip(
                                                   supportServantData,
                                                   this->fields.classPos,
                                                   v2);
    if ( supportServantData )
    {
      callbackFunc = this->fields.callbackFunc;
      if ( callbackFunc )
      {
        ((void (__fastcall *)(intptr_t, __int64, _QWORD, _QWORD, intptr_t))callbackFunc->fields.invoke_impl)(
          callbackFunc->fields.method_code,
          10,
          (unsigned int)this->fields.deckNum,
          (unsigned int)this->fields.classPos,
          callbackFunc->fields.method);
        return;
      }
LABEL_7:
      sub_1C2D6EC(supportServantData, method);
    }
  }
}


void SupportSelectObject__SetActiveDragSwapGuide(SupportSelectObject_o *this, bool flag, const MethodInfo *method)
{
  SupportSelectItemDraw_o *itemDraw; // x0

  itemDraw = this->fields.itemDraw;
  if ( !itemDraw )
    sub_1C2D6EC(0, flag);
  SupportSelectItemDraw__SetActiveDragSwapGuide(itemDraw, flag, 0);
}


// local variable allocation has failed, the output may be wrong!
void SupportSelectObject__SetItem(
        SupportSelectObject_o *this,
        SupportServantData_o *supportServantData,
        int32_t deckNum,
        int32_t classPos,
        EventCampaignEntity_array *friendPointCampaigns,
        SupportSelectMenu_CallbackFunc_o *callback,
        const MethodInfo *method)
{
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  UnityEngine_Object_o *itemDraw; // x20
  __int64 v18; // x1
  SupportSelectItemDraw_o *v19; // x0

  if ( (byte_4C239DF & 1) == 0 )
  {
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    byte_4C239DF = 1;
  }
  this->fields.supportServantData = supportServantData;
  sub_1C2D434(
    (CGThumbnailListItem_o *)&this->fields.supportServantData,
    (int32_t)supportServantData,
    deckNum,
    *(const MethodInfo **)&classPos);
  this->fields.deckNum = deckNum;
  this->fields.classPos = classPos;
  this->fields.eventFriendPoints = friendPointCampaigns;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.eventFriendPoints, (int32_t)friendPointCampaigns, v13, v14);
  this->fields.callbackFunc = callback;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.callbackFunc, (int32_t)callback, v15, v16);
  itemDraw = (UnityEngine_Object_o *)this->fields.itemDraw;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(itemDraw, 0, 0) )
  {
    v19 = this->fields.itemDraw;
    if ( !v19 )
      sub_1C2D6EC(0, v18);
    SupportSelectItemDraw__SetItem(
      v19,
      this->fields.supportServantData,
      this->fields.classPos,
      this->fields.eventFriendPoints,
      2,
      0);
  }
}


void SupportSelectObject__ShowEquip(SupportSelectObject_o *this, const MethodInfo *method)
{
  SupportSelectItemDraw_o *itemDraw; // x0

  itemDraw = this->fields.itemDraw;
  if ( !itemDraw )
    sub_1C2D6EC(0, method);
  SupportSelectItemDraw__SetEquipAlpha(itemDraw, 1.0, 0);
}


void SupportSelectObject__add_callbackFunc(
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

  if ( (byte_4C239DA & 1) == 0 )
  {
    sub_1C2D490(&SupportSelectMenu_CallbackFunc_TypeInfo);
    byte_4C239DA = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v6 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Combine(v6, (System_Delegate_o *)value, 0);
    if ( v8 )
    {
      if ( (SupportSelectMenu_CallbackFunc_c *)v8->klass != SupportSelectMenu_CallbackFunc_TypeInfo )
        break;
    }
    v9 = sub_1C676E8(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_1C2D9AC(v8);
  SupportSelectObject__remove_callbackFunc(v11, v12, v13);
}


// local variable allocation has failed, the output may be wrong!
void SupportSelectObject__clickSelectItem(
        SupportSelectObject_o *this,
        int32_t result,
        int32_t deckNum,
        int32_t classPos,
        const MethodInfo *method)
{
  SupportSelectObject_o *v8; // x22
  struct SupportSelectMenu_CallbackFunc_o *callbackFunc; // x8
  struct SupportServantData_o *supportServantData; // x9
  void (__fastcall *invoke_impl)(intptr_t, __int64, _QWORD, _QWORD, intptr_t); // x5
  intptr_t method_code; // x0
  intptr_t v13; // x4
  __int64 v14; // x1
  _QWORD *v15; // x0
  System_Reflection_MethodBase_o *v16; // x0
  struct SupportSelectMenu_CallbackFunc_o *v17; // x8

  v8 = this;
  if ( (byte_4C239E2 & 1) == 0 )
  {
    this = (SupportSelectObject_o *)sub_1C2D490(&Method_SupportSelectObject_clickSelectItem__);
    byte_4C239E2 = 1;
  }
  callbackFunc = v8->fields.callbackFunc;
  if ( callbackFunc )
  {
    supportServantData = v8->fields.supportServantData;
    if ( supportServantData )
    {
      if ( supportServantData->fields.isFriendInfo )
      {
        if ( supportServantData->fields.isSelectServant )
        {
          invoke_impl = (void (__fastcall *)(intptr_t, __int64, _QWORD, _QWORD, intptr_t))callbackFunc->fields.invoke_impl;
          method_code = callbackFunc->fields.method_code;
          v13 = callbackFunc->fields.method;
          v14 = 8;
        }
        else
        {
          invoke_impl = (void (__fastcall *)(intptr_t, __int64, _QWORD, _QWORD, intptr_t))callbackFunc->fields.invoke_impl;
          method_code = callbackFunc->fields.method_code;
          v13 = callbackFunc->fields.method;
          if ( result == 4 )
            v14 = 10;
          else
            v14 = 9;
        }
LABEL_18:
        invoke_impl(method_code, v14, (unsigned int)deckNum, (unsigned int)classPos, v13);
        return;
      }
      v15 = Method_SupportSelectObject_clickSelectItem__;
      if ( (*((_BYTE *)Method_SupportSelectObject_clickSelectItem__ + 83) & 2) != 0 )
        v15 = (_QWORD *)sub_1C2D4A8(Method_SupportSelectObject_clickSelectItem__);
      v16 = (System_Reflection_MethodBase_o *)sub_1C2D474(v15, v15[4]);
      OverwriteAssetSoundName__PlaySystemSe(v16, 0, 0, 0);
      v17 = v8->fields.callbackFunc;
      if ( v17 )
      {
        invoke_impl = (void (__fastcall *)(intptr_t, __int64, _QWORD, _QWORD, intptr_t))v17->fields.invoke_impl;
        method_code = v17->fields.method_code;
        v13 = v17->fields.method;
        if ( result == 4 )
          v14 = 4;
        else
          v14 = 3;
        goto LABEL_18;
      }
    }
    sub_1C2D6EC(this, *(_QWORD *)&result);
  }
}


void SupportSelectObject__remove_callbackFunc(
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

  if ( (byte_4C239DB & 1) == 0 )
  {
    sub_1C2D490(&SupportSelectMenu_CallbackFunc_TypeInfo);
    byte_4C239DB = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v6 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Remove(v6, (System_Delegate_o *)value, 0);
    if ( v8 )
    {
      if ( (SupportSelectMenu_CallbackFunc_c *)v8->klass != SupportSelectMenu_CallbackFunc_TypeInfo )
        break;
    }
    v9 = sub_1C676E8(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_1C2D9AC(v8);
  SupportSelectObject__Awake(v11, v12);
}