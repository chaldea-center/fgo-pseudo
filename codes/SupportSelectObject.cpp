void __fastcall SupportSelectObject___ctor(SupportSelectObject_o *this, const MethodInfo *method)
{
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0LL);
}


void __fastcall SupportSelectObject__ActivateEquipOnly(SupportSelectObject_o *this, const MethodInfo *method)
{
  SupportSelectItemDraw_o *itemDraw; // x0

  itemDraw = this->fields.itemDraw;
  if ( !itemDraw )
    sub_1BE4D28(0LL, method);
  SupportSelectItemDraw__ActivateEquipOnly(itemDraw, method);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SupportSelectObject__AddDepth(SupportSelectObject_o *this, int32_t depth, const MethodInfo *method)
{
  System_Object_array *ComponentsInChildren_object; // x0
  __int64 v6; // x1
  int max_length; // w8
  System_Object_array *v8; // x20
  unsigned int v9; // w21

  if ( (byte_4B634C9 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_UnityEngine_Component_GetComponentsInChildren_UIWidget____77181096, *(_QWORD *)&depth);
    byte_4B634C9 = 1;
  }
  ComponentsInChildren_object = UnityEngine_Component__GetComponentsInChildren_object_(
                                  (UnityEngine_Component_o *)this,
                                  1,
                                  (const MethodInfo_2F506A0 *)Method_UnityEngine_Component_GetComponentsInChildren_UIWidget____77181096);
  if ( !ComponentsInChildren_object )
    goto LABEL_11;
  max_length = ComponentsInChildren_object->max_length;
  v8 = ComponentsInChildren_object;
  if ( max_length >= 1 )
  {
    v9 = 0;
    while ( 1 )
    {
      if ( v9 >= max_length )
        sub_1BE4D30(ComponentsInChildren_object, v6);
      ComponentsInChildren_object = (System_Object_array *)v8->m_Items[v9];
      if ( !ComponentsInChildren_object )
        break;
      UIWidget__set_depth(
        (UIWidget_o *)ComponentsInChildren_object,
        LODWORD(ComponentsInChildren_object->m_Items[18]) + depth,
        0LL);
      max_length = v8->max_length;
      if ( (int)++v9 >= max_length )
        return;
    }
LABEL_11:
    sub_1BE4D28(ComponentsInChildren_object, v6);
  }
}


void __fastcall SupportSelectObject__Awake(SupportSelectObject_o *this, const MethodInfo *method)
{
  Il2CppObject *Component_object; // x0
  int64_t v4; // x2
  int32_t v5; // w3
  System_String_o *v6; // x4
  BattleSetupInfo_o *v7; // x5
  FollowerInfo_o *v8; // x6
  PartyListViewItem_o *v9; // x7

  if ( (byte_4B634C2 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_UnityEngine_Component_GetComponent_SupportSelectItemDraw___, method);
    byte_4B634C2 = 1;
  }
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)this,
                       (const MethodInfo_2F4FBB4 *)Method_UnityEngine_Component_GetComponent_SupportSelectItemDraw___);
  this->fields.itemDraw = (struct SupportSelectItemDraw_o *)Component_object;
  sub_1BE4A70((PartyOrganizationUtility_o *)&this->fields.itemDraw, (int64_t)Component_object, v4, v5, v6, v7, v8, v9);
}


void __fastcall SupportSelectObject__ChangeEvent(
        SupportSelectObject_o *this,
        EventCampaignEntity_array *changeEventFriendPoints,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  const MethodInfo *v9; // x1

  this->fields.eventFriendPoints = changeEventFriendPoints;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&this->fields.eventFriendPoints,
    (int64_t)changeEventFriendPoints,
    (int64_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  SupportSelectObject__ModifyItem(this, v9);
}


void __fastcall SupportSelectObject__ClearItem(SupportSelectObject_o *this, const MethodInfo *method)
{
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  int64_t v9; // x2
  int32_t v10; // w3
  System_String_o *v11; // x4
  BattleSetupInfo_o *v12; // x5
  FollowerInfo_o *v13; // x6
  PartyListViewItem_o *v14; // x7
  UnityEngine_Object_o *itemDraw; // x20
  const MethodInfo *v16; // x1
  SupportSelectItemDraw_o *v17; // x0

  if ( (byte_4B634C3 & 1) == 0 )
  {
    sub_1BE4ACC(&UnityEngine_Object_TypeInfo, method);
    byte_4B634C3 = 1;
  }
  this->fields.supportServantData = 0LL;
  sub_1BE4A70((PartyOrganizationUtility_o *)&this->fields.supportServantData, 0LL, v2, v3, v4, v5, v6, v7);
  this->fields.callbackFunc = 0LL;
  *(_QWORD *)&this->fields.deckNum = 0LL;
  sub_1BE4A70((PartyOrganizationUtility_o *)&this->fields.callbackFunc, 0LL, v9, v10, v11, v12, v13, v14);
  itemDraw = (UnityEngine_Object_o *)this->fields.itemDraw;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(itemDraw, 0LL, 0LL) )
  {
    v17 = this->fields.itemDraw;
    if ( !v17 )
      sub_1BE4D28(0LL, v16);
    SupportSelectItemDraw__ClearItem(v17, v16);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SupportSelectObject__EndShowEquip(SupportSelectObject_o *this, bool isDecide, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v6; // x1

  if ( (byte_4B634C7 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, isDecide);
    byte_4B634C7 = 1;
  }
  if ( isDecide )
    SupportSelectObject__ModifyItem(this, (const MethodInfo *)isDecide);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1BE4D28(0LL, v6);
  CommonUI__CloseServantEquipStatusDialog((CommonUI_o *)Instance, 0LL, 0LL);
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
  SupportServantData_o *supportServantData; // x0

  supportServantData = this->fields.supportServantData;
  if ( !supportServantData )
    sub_1BE4D28(0LL, method);
  return SupportServantData__getUserServantLeaderEntity(supportServantData, this->fields.classPos, 0LL);
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
    sub_1BE4D28(0LL, method);
  SupportSelectItemDraw__SetEquipAlpha(itemDraw, 0.0, method);
}


void __fastcall SupportSelectObject__ModifyItem(SupportSelectObject_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *itemDraw; // x20
  int32_t v4; // w4
  const MethodInfo *v5; // x5
  SupportServantData_o *supportServantData; // x1
  SupportSelectItemDraw_o *v7; // x0

  if ( (byte_4B634C4 & 1) == 0 )
  {
    sub_1BE4ACC(&UnityEngine_Object_TypeInfo, method);
    byte_4B634C4 = 1;
  }
  itemDraw = (UnityEngine_Object_o *)this->fields.itemDraw;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(itemDraw, 0LL, 0LL) )
  {
    supportServantData = this->fields.supportServantData;
    if ( supportServantData )
    {
      v7 = this->fields.itemDraw;
      if ( !v7 )
        sub_1BE4D28(0LL, supportServantData);
      SupportSelectItemDraw__SetItem(
        v7,
        supportServantData,
        this->fields.classPos,
        this->fields.eventFriendPoints,
        v4,
        v5);
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
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  SupportServantData_o *supportServantData; // x0
  int32_t classPos; // w1
  struct SupportSelectMenu_CallbackFunc_o *callbackFunc; // x8
  int64_t Servant; // x0
  int64_t v10; // x20
  Il2CppObject *Entity; // x0
  void *monitor; // x20
  Il2CppClass *klass; // x21
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v14; // 0:x0.16

  if ( (byte_4B634C6 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_DataManager_GetMasterData_UserServantMaster___, method);
    sub_1BE4ACC(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v3);
    sub_1BE4ACC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v4);
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_4B634C6 = 1;
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
                                                     0LL);
      if ( !supportServantData )
        goto LABEL_18;
      if ( *(int *)&supportServantData->fields.isFriendInfo >= 1 )
        goto LABEL_8;
    }
    else
    {
      Servant = SupportServantData__getServant(supportServantData, classPos, 0LL);
      if ( Servant >= 1 )
      {
        v10 = Servant;
        supportServantData = (SupportServantData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !supportServantData )
          goto LABEL_18;
        supportServantData = (SupportServantData_o *)DataManager__GetMasterData_object_(
                                                       (DataManager_o *)supportServantData,
                                                       (const MethodInfo_2F59110 *)Method_DataManager_GetMasterData_UserServantMaster___);
        if ( !supportServantData )
          goto LABEL_18;
        Entity = DataMasterBase_object__object__long___GetEntity(
                   (DataMasterBase_TMaster__TEntity__PKType__o *)supportServantData,
                   v10,
                   (const MethodInfo_31FD970 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
        if ( Entity )
        {
          klass = Entity[5].klass;
          monitor = Entity[5].monitor;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          *(_QWORD *)&v14.fields.currentCryptoKey = klass;
          *(_QWORD *)&v14.fields.fakeValue = monitor;
          supportServantData = (SupportServantData_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47299060(
                                                         v14,
                                                         0LL);
          if ( (int)supportServantData >= 1 )
          {
LABEL_8:
            callbackFunc = this->fields.callbackFunc;
            if ( callbackFunc )
            {
              ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64, _QWORD, _QWORD, _QWORD))callbackFunc->fields.m_target)(
                callbackFunc->fields.original_method_info,
                9LL,
                (unsigned int)this->fields.deckNum,
                (unsigned int)this->fields.classPos,
                *(_QWORD *)&callbackFunc->fields.extra_arg);
              return;
            }
LABEL_18:
            sub_1BE4D28(supportServantData, method);
          }
        }
      }
    }
  }
}


void __fastcall SupportSelectObject__OnLongPressItemEquip(SupportSelectObject_o *this, const MethodInfo *method)
{
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
                                                   0LL);
    if ( supportServantData )
    {
      callbackFunc = this->fields.callbackFunc;
      if ( callbackFunc )
      {
        ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64, _QWORD, _QWORD, _QWORD))callbackFunc->fields.m_target)(
          callbackFunc->fields.original_method_info,
          10LL,
          (unsigned int)this->fields.deckNum,
          (unsigned int)this->fields.classPos,
          *(_QWORD *)&callbackFunc->fields.extra_arg);
        return;
      }
LABEL_7:
      sub_1BE4D28(supportServantData, method);
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
    sub_1BE4D28(0LL, flag);
  SupportSelectItemDraw__SetActiveDragSwapGuide(itemDraw, flag, method);
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
  PartyListViewItem_o *v7; // x7
  int64_t v14; // x2
  int32_t v15; // w3
  System_String_o *v16; // x4
  BattleSetupInfo_o *v17; // x5
  FollowerInfo_o *v18; // x6
  PartyListViewItem_o *v19; // x7
  int64_t v20; // x2
  int32_t v21; // w3
  System_String_o *v22; // x4
  BattleSetupInfo_o *v23; // x5
  FollowerInfo_o *v24; // x6
  PartyListViewItem_o *v25; // x7
  UnityEngine_Object_o *itemDraw; // x20
  __int64 v27; // x1
  int32_t v28; // w4
  const MethodInfo *v29; // x5
  SupportSelectItemDraw_o *v30; // x0

  if ( (byte_4B634C5 & 1) == 0 )
  {
    sub_1BE4ACC(&UnityEngine_Object_TypeInfo, supportServantData);
    byte_4B634C5 = 1;
  }
  this->fields.supportServantData = supportServantData;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&this->fields.supportServantData,
    (int64_t)supportServantData,
    *(int64_t *)&deckNum,
    classPos,
    (System_String_o *)friendPointCampaigns,
    (BattleSetupInfo_o *)callback,
    (FollowerInfo_o *)method,
    v7);
  this->fields.deckNum = deckNum;
  this->fields.classPos = classPos;
  this->fields.eventFriendPoints = friendPointCampaigns;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&this->fields.eventFriendPoints,
    (int64_t)friendPointCampaigns,
    v14,
    v15,
    v16,
    v17,
    v18,
    v19);
  this->fields.callbackFunc = callback;
  sub_1BE4A70((PartyOrganizationUtility_o *)&this->fields.callbackFunc, (int64_t)callback, v20, v21, v22, v23, v24, v25);
  itemDraw = (UnityEngine_Object_o *)this->fields.itemDraw;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(itemDraw, 0LL, 0LL) )
  {
    v30 = this->fields.itemDraw;
    if ( !v30 )
      sub_1BE4D28(0LL, v27);
    SupportSelectItemDraw__SetItem(
      v30,
      this->fields.supportServantData,
      this->fields.classPos,
      this->fields.eventFriendPoints,
      v28,
      v29);
  }
}


void __fastcall SupportSelectObject__ShowEquip(SupportSelectObject_o *this, const MethodInfo *method)
{
  SupportSelectItemDraw_o *itemDraw; // x0

  itemDraw = this->fields.itemDraw;
  if ( !itemDraw )
    sub_1BE4D28(0LL, method);
  SupportSelectItemDraw__SetEquipAlpha(itemDraw, 1.0, method);
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

  if ( (byte_4B634C0 & 1) == 0 )
  {
    sub_1BE4ACC(&SupportSelectMenu_CallbackFunc_TypeInfo, value);
    byte_4B634C0 = 1;
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
    v9 = sub_1C1FFBC(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_1BE4FE8(v8);
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
  SupportSelectObject_o *v8; // x22
  struct SupportSelectMenu_CallbackFunc_o *callbackFunc; // x8
  struct SupportServantData_o *supportServantData; // x9
  Il2CppObject *m_target; // x5
  struct System_Reflection_MethodInfo_o *original_method_info; // x0
  __int64 v13; // x4
  __int64 v14; // x1
  _QWORD *v15; // x0
  System_Reflection_MethodBase_o *v16; // x0
  struct SupportSelectMenu_CallbackFunc_o *v17; // x8

  v8 = this;
  if ( (byte_4B634C8 & 1) == 0 )
  {
    this = (SupportSelectObject_o *)sub_1BE4ACC(&Method_SupportSelectObject_clickSelectItem__, *(_QWORD *)&result);
    byte_4B634C8 = 1;
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
          m_target = callbackFunc->fields.m_target;
          original_method_info = callbackFunc->fields.original_method_info;
          v13 = *(_QWORD *)&callbackFunc->fields.extra_arg;
          v14 = 8LL;
        }
        else
        {
          m_target = callbackFunc->fields.m_target;
          original_method_info = callbackFunc->fields.original_method_info;
          v13 = *(_QWORD *)&callbackFunc->fields.extra_arg;
          if ( result == 4 )
            v14 = 10LL;
          else
            v14 = 9LL;
        }
LABEL_18:
        ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64, _QWORD, _QWORD, __int64))m_target)(
          original_method_info,
          v14,
          (unsigned int)deckNum,
          (unsigned int)classPos,
          v13);
        return;
      }
      v15 = Method_SupportSelectObject_clickSelectItem__;
      if ( (*((_BYTE *)Method_SupportSelectObject_clickSelectItem__ + 83) & 2) != 0 )
        v15 = (_QWORD *)sub_1BE4AE4(Method_SupportSelectObject_clickSelectItem__);
      v16 = (System_Reflection_MethodBase_o *)sub_1BE4AB0(v15, v15[4]);
      OverwriteAssetSoundName__PlaySystemSe(v16, 0, 0LL);
      v17 = v8->fields.callbackFunc;
      if ( v17 )
      {
        m_target = v17->fields.m_target;
        original_method_info = v17->fields.original_method_info;
        v13 = *(_QWORD *)&v17->fields.extra_arg;
        if ( result == 4 )
          v14 = 4LL;
        else
          v14 = 3LL;
        goto LABEL_18;
      }
    }
    sub_1BE4D28(this, *(_QWORD *)&result);
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

  if ( (byte_4B634C1 & 1) == 0 )
  {
    sub_1BE4ACC(&SupportSelectMenu_CallbackFunc_TypeInfo, value);
    byte_4B634C1 = 1;
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
    v9 = sub_1C1FFBC(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_1BE4FE8(v8);
  SupportSelectObject__Awake(v11, v12);
}