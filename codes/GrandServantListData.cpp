void GrandServantListData___ctor(GrandServantListData_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x21
  GrandServantListData_Fields *p_fields; // x19
  Il2CppObject *Master_object; // x0
  System_Object_array *Entitys; // x20
  int max_length; // w8
  unsigned int v8; // w26
  Il2CppClass **v9; // x8
  UserServantGrandEntity_o *v10; // x21
  int64_t userSvtId; // x22
  int32_t grandGraphId; // w23
  System_Int64_array *EquipUserServantIdList; // x24
  int32_t v14; // w25
  GrandServantListSlotData_o *v15; // x21
  const MethodInfo *v16; // x5
  Il2CppClass *klass; // x8
  _QWORD *v18; // x9
  __int64 monitor_low; // x10
  void **v20; // x8

  if ( (byte_4C3DD7C & 1) == 0 )
  {
    sub_1C37058(&Method_DataManager_GetMaster_GrandGraphMaster___);
    sub_1C37058(&Method_DataManager_GetMaster_UserServantGrandMaster___);
    sub_1C37058(&DataManager_TypeInfo);
    sub_1C37058(&Method_DataMasterBase_UserServantGrandMaster__UserServantGrandEntity__string__getEntitys__);
    sub_1C37058(&GrandServantListSlotData_TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_List_GrandServantListSlotData__Add__);
    sub_1C37058(&Method_System_Collections_Generic_List_GrandServantListSlotData___ctor__);
    sub_1C37058(&System_Collections_Generic_List_GrandServantListSlotData__TypeInfo);
    byte_4C3DD7C = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_1C372A4(System_Collections_Generic_List_GrandServantListSlotData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_37A27F0 *)Method_System_Collections_Generic_List_GrandServantListSlotData___ctor__);
  this->fields.slotDataList = (struct System_Collections_Generic_List_GrandServantListSlotData__o *)v3;
  p_fields = &this->fields;
  sub_1C36FFC(&this->fields, v3);
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields._Kind_k__BackingField = 0;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_30E7C04 *)Method_DataManager_GetMaster_UserServantGrandMaster___);
  if ( !Master_object )
    goto LABEL_19;
  Entitys = DataMasterBase_object__object__object___getEntitys(
              (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
              (const MethodInfo_33A4DDC *)Method_DataMasterBase_UserServantGrandMaster__UserServantGrandEntity__string__getEntitys__);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_30E7C04 *)Method_DataManager_GetMaster_GrandGraphMaster___);
  if ( !Entitys )
    goto LABEL_19;
  max_length = Entitys->max_length;
  if ( max_length >= 1 )
  {
    v8 = 0;
    while ( 1 )
    {
      if ( v8 >= max_length )
        sub_1C372BC(Master_object);
      v9 = &Entitys->obj.klass + (int)v8;
      v10 = (UserServantGrandEntity_o *)v9[4];
      if ( !v10 )
        break;
      userSvtId = v10->fields.userSvtId;
      if ( userSvtId )
      {
        grandGraphId = v10->fields.grandGraphId;
        EquipUserServantIdList = UserServantGrandEntity__GetEquipUserServantIdList((UserServantGrandEntity_o *)v9[4], 0);
        v14 = UserServantGrandEntity__IsChangeFriendShipSvtEquipSkill(v10, 0);
        v15 = (GrandServantListSlotData_o *)sub_1C372A4(GrandServantListSlotData_TypeInfo);
        GrandServantListSlotData___ctor_32953548(v15, grandGraphId, userSvtId, EquipUserServantIdList, v14, v16);
        Master_object = (Il2CppObject *)p_fields->slotDataList;
        if ( !p_fields->slotDataList )
          break;
        klass = Master_object[1].klass;
        v18 = Method_System_Collections_Generic_List_GrandServantListSlotData__Add__;
        ++HIDWORD(Master_object[1].monitor);
        if ( !klass )
          break;
        monitor_low = SLODWORD(Master_object[1].monitor);
        if ( (unsigned int)monitor_low >= LODWORD(klass->_1.namespaze) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            (System_Collections_Generic_List_object__o *)Master_object,
            (Il2CppObject *)v15,
            *(const MethodInfo_37A3024 **)(*(_QWORD *)(v18[4] + 192LL) + 112LL));
        }
        else
        {
          v20 = &klass->_1.image + monitor_low;
          LODWORD(Master_object[1].monitor) = monitor_low + 1;
          v20[4] = v15;
          Master_object = (Il2CppObject *)sub_1C36FFC(v20 + 4, v15);
        }
      }
      max_length = Entitys->max_length;
      if ( (int)++v8 >= max_length )
        return;
    }
LABEL_19:
    sub_1C372B4(Master_object);
  }
}


void GrandServantListData___ctor_32954528(
        GrandServantListData_o *this,
        FollowerInfo_o *followerInfo,
        bool isUseGrandSupport,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v7; // x23
  GrandServantListData_Fields *p_fields; // x20
  __int64 v9; // x0
  int8_t v10; // w9
  struct ServantLeaderInfo_array *userSvtGrandHash; // x25
  int max_length; // w8
  unsigned int v13; // w26
  ServantLeaderInfo_o *v14; // x23
  int64_t userSvtId; // x29
  System_Collections_Generic_List_object__o *slotDataList; // x21
  int32_t grandGraphId; // w24
  int64_t pushUserSvtId; // x27
  GrandServantListSlotData_o *v19; // x22
  const MethodInfo *v20; // x4
  struct System_Object_array *items; // x8
  _QWORD *v22; // x9
  __int64 size; // x10
  Il2CppClass **v24; // x0

  if ( (byte_4C3DD7D & 1) == 0 )
  {
    sub_1C37058(&GrandServantListSlotData_TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_List_GrandServantListSlotData__Add__);
    sub_1C37058(&Method_System_Collections_Generic_List_GrandServantListSlotData___ctor__);
    sub_1C37058(&System_Collections_Generic_List_GrandServantListSlotData__TypeInfo);
    byte_4C3DD7D = 1;
  }
  v7 = (System_Collections_Generic_List_object__o *)sub_1C372A4(System_Collections_Generic_List_GrandServantListSlotData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v7,
    (const MethodInfo_37A27F0 *)Method_System_Collections_Generic_List_GrandServantListSlotData___ctor__);
  this->fields.slotDataList = (struct System_Collections_Generic_List_GrandServantListSlotData__o *)v7;
  p_fields = &this->fields;
  sub_1C36FFC(&this->fields, v7);
  System_Object___ctor((Il2CppObject *)this, 0);
  if ( isUseGrandSupport )
    v10 = 1;
  else
    v10 = 2;
  this->fields._Kind_k__BackingField = v10;
  this->fields._IsOtherUserData_k__BackingField = 1;
  if ( !followerInfo )
    goto LABEL_20;
  userSvtGrandHash = followerInfo->fields.userSvtGrandHash;
  if ( !userSvtGrandHash )
    goto LABEL_20;
  max_length = userSvtGrandHash->max_length;
  if ( max_length >= 1 )
  {
    v13 = 0;
    while ( 1 )
    {
      if ( v13 >= max_length )
        sub_1C372BC(v9);
      v14 = userSvtGrandHash->m_Items[v13];
      if ( !v14 )
        break;
      userSvtId = v14->fields.userSvtId;
      if ( userSvtId )
      {
        slotDataList = (System_Collections_Generic_List_object__o *)p_fields->slotDataList;
        grandGraphId = v14->fields.grandGraphId;
        pushUserSvtId = followerInfo->fields.pushUserSvtId;
        v19 = (GrandServantListSlotData_o *)sub_1C372A4(GrandServantListSlotData_TypeInfo);
        GrandServantListSlotData___ctor_32954984(v19, grandGraphId, v14, userSvtId == pushUserSvtId, v20);
        if ( !slotDataList )
          break;
        items = slotDataList->fields._items;
        v22 = Method_System_Collections_Generic_List_GrandServantListSlotData__Add__;
        ++slotDataList->fields._version;
        if ( !items )
          break;
        size = slotDataList->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            slotDataList,
            (Il2CppObject *)v19,
            *(const MethodInfo_37A3024 **)(*(_QWORD *)(v22[4] + 192LL) + 112LL));
        }
        else
        {
          v24 = &items->obj.klass + size;
          slotDataList->fields._size = size + 1;
          v24[4] = (Il2CppClass *)v19;
          v9 = sub_1C36FFC(v24 + 4, v19);
        }
      }
      max_length = userSvtGrandHash->max_length;
      if ( (int)++v13 >= max_length )
        return;
    }
LABEL_20:
    sub_1C372B4(v9);
  }
}


void GrandServantListData___ctor_32955440(
        GrandServantListData_o *this,
        OtherUserGameEntity_o *otherUserInfo,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v5; // x22
  GrandServantListData_Fields *p_fields; // x20
  __int64 v7; // x0
  struct ServantLeaderInfo_array *userSvtGrandHash; // x25
  int max_length; // w8
  unsigned int v10; // w26
  ServantLeaderInfo_o *v11; // x23
  System_Collections_Generic_List_object__o *slotDataList; // x21
  int32_t grandGraphId; // w24
  int64_t userSvtId; // x29
  int64_t pushUserSvtId; // x27
  GrandServantListSlotData_o *v16; // x22
  const MethodInfo *v17; // x4
  struct System_Object_array *items; // x8
  _QWORD *v19; // x9
  __int64 size; // x10
  Il2CppClass **v21; // x0

  if ( (byte_4C3DD7E & 1) == 0 )
  {
    sub_1C37058(&GrandServantListSlotData_TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_List_GrandServantListSlotData__Add__);
    sub_1C37058(&Method_System_Collections_Generic_List_GrandServantListSlotData___ctor__);
    sub_1C37058(&System_Collections_Generic_List_GrandServantListSlotData__TypeInfo);
    byte_4C3DD7E = 1;
  }
  v5 = (System_Collections_Generic_List_object__o *)sub_1C372A4(System_Collections_Generic_List_GrandServantListSlotData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_37A27F0 *)Method_System_Collections_Generic_List_GrandServantListSlotData___ctor__);
  this->fields.slotDataList = (struct System_Collections_Generic_List_GrandServantListSlotData__o *)v5;
  p_fields = &this->fields;
  sub_1C36FFC(&this->fields, v5);
  System_Object___ctor((Il2CppObject *)this, 0);
  *(_WORD *)&this->fields._IsOtherUserData_k__BackingField = 513;
  if ( !otherUserInfo )
    goto LABEL_17;
  userSvtGrandHash = otherUserInfo->fields.userSvtGrandHash;
  if ( !userSvtGrandHash )
    goto LABEL_17;
  max_length = userSvtGrandHash->max_length;
  if ( max_length >= 1 )
  {
    v10 = 0;
    while ( 1 )
    {
      if ( v10 >= max_length )
        sub_1C372BC(v7);
      v11 = userSvtGrandHash->m_Items[v10];
      if ( !v11 )
        break;
      if ( v11->fields.userSvtId )
      {
        ServantLeaderInfo__ChangeLimitCountBySpoilerProtection(v11, 0);
        slotDataList = (System_Collections_Generic_List_object__o *)p_fields->slotDataList;
        grandGraphId = v11->fields.grandGraphId;
        userSvtId = v11->fields.userSvtId;
        pushUserSvtId = otherUserInfo->fields.pushUserSvtId;
        v16 = (GrandServantListSlotData_o *)sub_1C372A4(GrandServantListSlotData_TypeInfo);
        GrandServantListSlotData___ctor_32954984(v16, grandGraphId, v11, userSvtId == pushUserSvtId, v17);
        if ( !slotDataList )
          break;
        items = slotDataList->fields._items;
        v19 = Method_System_Collections_Generic_List_GrandServantListSlotData__Add__;
        ++slotDataList->fields._version;
        if ( !items )
          break;
        size = slotDataList->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            slotDataList,
            (Il2CppObject *)v16,
            *(const MethodInfo_37A3024 **)(*(_QWORD *)(v19[4] + 192LL) + 112LL));
        }
        else
        {
          v21 = &items->obj.klass + size;
          slotDataList->fields._size = size + 1;
          v21[4] = (Il2CppClass *)v16;
          v7 = sub_1C36FFC(v21 + 4, v16);
        }
      }
      max_length = userSvtGrandHash->max_length;
      if ( (int)++v10 >= max_length )
        return;
    }
LABEL_17:
    sub_1C372B4(v7);
  }
}


GrandServantListSlotData_o *GrandServantListData__GetSlotData(
        GrandServantListData_o *this,
        int32_t grandGraphId,
        const MethodInfo *method)
{
  __int64 v5; // x21
  System_Collections_Generic_List_object__o *v6; // x0
  struct System_Collections_Generic_List_GrandServantListSlotData__o *slotDataList; // x20
  System_Func_object__bool__o *v8; // x22
  Il2CppObject *v9; // x20
  int32_t v10; // w21
  bool IsOtherUserData_k__BackingField; // w22
  const MethodInfo *v12; // x3
  struct System_Object_array *items; // x8
  _QWORD *v14; // x9
  __int64 size; // x10
  Il2CppClass **v16; // x8

  if ( (byte_4C3DD7F & 1) == 0 )
  {
    sub_1C37058(&Method_System_Linq_Enumerable_FirstOrDefault_GrandServantListSlotData___);
    sub_1C37058(&System_Func_GrandServantListSlotData__bool__TypeInfo);
    sub_1C37058(&GrandServantListSlotData_TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_List_GrandServantListSlotData__Add__);
    sub_1C37058(&Method_GrandServantListData___c__DisplayClass17_0__GetSlotData_b__0__);
    sub_1C37058(&GrandServantListData___c__DisplayClass17_0_TypeInfo);
    byte_4C3DD7F = 1;
  }
  v5 = sub_1C372A4(GrandServantListData___c__DisplayClass17_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    goto LABEL_11;
  *(_DWORD *)(v5 + 16) = grandGraphId;
  slotDataList = this->fields.slotDataList;
  v8 = (System_Func_object__bool__o *)sub_1C372A4(System_Func_GrandServantListSlotData__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v8,
    (Il2CppObject *)v5,
    Method_GrandServantListData___c__DisplayClass17_0__GetSlotData_b__0__,
    0);
  v9 = System_Linq_Enumerable__FirstOrDefault_object__51451648(
         (System_Collections_Generic_IEnumerable_TSource__o *)slotDataList,
         (System_Func_TSource__bool__o *)v8,
         (const MethodInfo_3111700 *)Method_System_Linq_Enumerable_FirstOrDefault_GrandServantListSlotData___);
  if ( v9 )
    return (GrandServantListSlotData_o *)v9;
  v10 = *(_DWORD *)(v5 + 16);
  IsOtherUserData_k__BackingField = this->fields._IsOtherUserData_k__BackingField;
  v9 = (Il2CppObject *)sub_1C372A4(GrandServantListSlotData_TypeInfo);
  GrandServantListSlotData___ctor((GrandServantListSlotData_o *)v9, v10, IsOtherUserData_k__BackingField, v12);
  v6 = (System_Collections_Generic_List_object__o *)this->fields.slotDataList;
  if ( !v6
    || (items = v6->fields._items,
        v14 = Method_System_Collections_Generic_List_GrandServantListSlotData__Add__,
        ++v6->fields._version,
        !items) )
  {
LABEL_11:
    sub_1C372B4(v6);
  }
  size = v6->fields._size;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v6,
      v9,
      *(const MethodInfo_37A3024 **)(*(_QWORD *)(v14[4] + 192LL) + 112LL));
  }
  else
  {
    v16 = &items->obj.klass + size;
    v6->fields._size = size + 1;
    v16[4] = (Il2CppClass *)v9;
    sub_1C36FFC(v16 + 4, v9);
  }
  return (GrandServantListSlotData_o *)v9;
}


void GrandServantListData__SetQuestData(
        GrandServantListData_o *this,
        GrandServantListQuestData_o *questData,
        const MethodInfo *method)
{
  this->fields._QuestData_k__BackingField = questData;
  sub_1C36FFC(&this->fields._QuestData_k__BackingField, questData);
}


bool GrandServantListData__get_IsOtherUserData(GrandServantListData_o *this, const MethodInfo *method)
{
  return this->fields._IsOtherUserData_k__BackingField;
}


int8_t GrandServantListData__get_Kind(GrandServantListData_o *this, const MethodInfo *method)
{
  return this->fields._Kind_k__BackingField;
}


GrandServantListQuestData_o *GrandServantListData__get_QuestData(
        GrandServantListData_o *this,
        const MethodInfo *method)
{
  return this->fields._QuestData_k__BackingField;
}


void GrandServantListData__set_IsOtherUserData(GrandServantListData_o *this, bool value, const MethodInfo *method)
{
  this->fields._IsOtherUserData_k__BackingField = value;
}


void GrandServantListData__set_Kind(GrandServantListData_o *this, int8_t value, const MethodInfo *method)
{
  this->fields._Kind_k__BackingField = value;
}


void GrandServantListData__set_QuestData(
        GrandServantListData_o *this,
        GrandServantListQuestData_o *value,
        const MethodInfo *method)
{
  this->fields._QuestData_k__BackingField = value;
  sub_1C36FFC(&this->fields._QuestData_k__BackingField, value);
}


void GrandServantListData___c__DisplayClass17_0___ctor(
        GrandServantListData___c__DisplayClass17_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool GrandServantListData___c__DisplayClass17_0___GetSlotData_b__0(
        GrandServantListData___c__DisplayClass17_0_o *this,
        GrandServantListSlotData_o *d,
        const MethodInfo *method)
{
  if ( !d )
    sub_1C372B4(this);
  return d->fields._GrandGraphId_k__BackingField == this->fields.grandGraphId;
}