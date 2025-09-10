void GrandServantListData___ctor(GrandServantListData_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x21
  GrandServantListData_Fields *p_fields; // x19
  Il2CppObject *Master_object; // x0
  __int64 v6; // x1
  System_Object_array *Entitys; // x20
  __int64 v8; // x2
  int max_length; // w8
  unsigned int v10; // w26
  Il2CppClass **v11; // x8
  UserServantGrandEntity_o *v12; // x21
  int64_t userSvtId; // x22
  int32_t grandGraphId; // w23
  System_Int64_array *EquipUserServantIdList; // x24
  int32_t v16; // w25
  GrandServantListSlotData_o *v17; // x21
  const MethodInfo *v18; // x5
  Il2CppClass *klass; // x8
  _QWORD *v20; // x9
  __int64 monitor_low; // x10
  void **v22; // x8

  if ( (byte_4C220C3 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataManager_GetMaster_GrandGraphMaster___);
    sub_1C2D490(&Method_DataManager_GetMaster_UserServantGrandMaster___);
    sub_1C2D490(&DataManager_TypeInfo);
    sub_1C2D490(&Method_DataMasterBase_UserServantGrandMaster__UserServantGrandEntity__string__getEntitys__);
    sub_1C2D490(&GrandServantListSlotData_TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_List_GrandServantListSlotData__Add__);
    sub_1C2D490(&Method_System_Collections_Generic_List_GrandServantListSlotData___ctor__);
    sub_1C2D490(&System_Collections_Generic_List_GrandServantListSlotData__TypeInfo);
    byte_4C220C3 = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_1C2D6DC(System_Collections_Generic_List_GrandServantListSlotData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_3789350 *)Method_System_Collections_Generic_List_GrandServantListSlotData___ctor__);
  this->fields.slotDataList = (struct System_Collections_Generic_List_GrandServantListSlotData__o *)v3;
  p_fields = &this->fields;
  sub_1C2D434(&this->fields);
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields._Kind_k__BackingField = 0;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_UserServantGrandMaster___);
  if ( !Master_object )
    goto LABEL_19;
  Entitys = DataMasterBase_object__object__object___getEntitys(
              (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
              (const MethodInfo_338BAD4 *)Method_DataMasterBase_UserServantGrandMaster__UserServantGrandEntity__string__getEntitys__);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_GrandGraphMaster___);
  if ( !Entitys )
    goto LABEL_19;
  max_length = Entitys->max_length;
  if ( max_length >= 1 )
  {
    v10 = 0;
    while ( 1 )
    {
      if ( v10 >= max_length )
        sub_1C2D6F4(Master_object, v6, v8);
      v11 = &Entitys->obj.klass + (int)v10;
      v12 = (UserServantGrandEntity_o *)v11[4];
      if ( !v12 )
        break;
      userSvtId = v12->fields.userSvtId;
      if ( userSvtId )
      {
        grandGraphId = v12->fields.grandGraphId;
        EquipUserServantIdList = UserServantGrandEntity__GetEquipUserServantIdList(
                                   (UserServantGrandEntity_o *)v11[4],
                                   0);
        v16 = UserServantGrandEntity__IsChangeFriendShipSvtEquipSkill(v12, 0);
        v17 = (GrandServantListSlotData_o *)sub_1C2D6DC(GrandServantListSlotData_TypeInfo);
        GrandServantListSlotData___ctor_32744420(v17, grandGraphId, userSvtId, EquipUserServantIdList, v16, v18);
        Master_object = (Il2CppObject *)p_fields->slotDataList;
        if ( !p_fields->slotDataList )
          break;
        klass = Master_object[1].klass;
        v20 = Method_System_Collections_Generic_List_GrandServantListSlotData__Add__;
        ++HIDWORD(Master_object[1].monitor);
        if ( !klass )
          break;
        monitor_low = SLODWORD(Master_object[1].monitor);
        if ( (unsigned int)monitor_low >= LODWORD(klass->_1.namespaze) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            (System_Collections_Generic_List_object__o *)Master_object,
            (Il2CppObject *)v17,
            *(const MethodInfo_3789B84 **)(*(_QWORD *)(v20[4] + 192LL) + 112LL));
        }
        else
        {
          v22 = &klass->_1.image + monitor_low;
          LODWORD(Master_object[1].monitor) = monitor_low + 1;
          v22[4] = v17;
          Master_object = (Il2CppObject *)sub_1C2D434(v22 + 4);
        }
      }
      max_length = Entitys->max_length;
      if ( (int)++v10 >= max_length )
        return;
    }
LABEL_19:
    sub_1C2D6EC(Master_object, v6);
  }
}


void GrandServantListData___ctor_32745400(
        GrandServantListData_o *this,
        FollowerInfo_o *followerInfo,
        bool isUseGrandSupport,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v7; // x23
  GrandServantListData_Fields *p_fields; // x20
  __int64 v9; // x0
  __int64 v10; // x1
  __int64 v11; // x2
  int8_t v12; // w9
  struct ServantLeaderInfo_array *userSvtGrandHash; // x25
  int max_length; // w8
  unsigned int v15; // w26
  ServantLeaderInfo_o *v16; // x23
  int64_t userSvtId; // x29
  System_Collections_Generic_List_object__o *slotDataList; // x21
  int32_t grandGraphId; // w24
  int64_t pushUserSvtId; // x27
  GrandServantListSlotData_o *v21; // x22
  const MethodInfo *v22; // x4
  struct System_Object_array *items; // x8
  _QWORD *v24; // x9
  __int64 size; // x10
  Il2CppClass **v26; // x0

  if ( (byte_4C220C4 & 1) == 0 )
  {
    sub_1C2D490(&GrandServantListSlotData_TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_List_GrandServantListSlotData__Add__);
    sub_1C2D490(&Method_System_Collections_Generic_List_GrandServantListSlotData___ctor__);
    sub_1C2D490(&System_Collections_Generic_List_GrandServantListSlotData__TypeInfo);
    byte_4C220C4 = 1;
  }
  v7 = (System_Collections_Generic_List_object__o *)sub_1C2D6DC(System_Collections_Generic_List_GrandServantListSlotData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v7,
    (const MethodInfo_3789350 *)Method_System_Collections_Generic_List_GrandServantListSlotData___ctor__);
  this->fields.slotDataList = (struct System_Collections_Generic_List_GrandServantListSlotData__o *)v7;
  p_fields = &this->fields;
  sub_1C2D434(&this->fields);
  System_Object___ctor((Il2CppObject *)this, 0);
  if ( isUseGrandSupport )
    v12 = 1;
  else
    v12 = 2;
  this->fields._Kind_k__BackingField = v12;
  this->fields._IsOtherUserData_k__BackingField = 1;
  if ( !followerInfo )
    goto LABEL_20;
  userSvtGrandHash = followerInfo->fields.userSvtGrandHash;
  if ( !userSvtGrandHash )
    goto LABEL_20;
  max_length = userSvtGrandHash->max_length;
  if ( max_length >= 1 )
  {
    v15 = 0;
    while ( 1 )
    {
      if ( v15 >= max_length )
        sub_1C2D6F4(v9, v10, v11);
      v16 = userSvtGrandHash->m_Items[v15];
      if ( !v16 )
        break;
      userSvtId = v16->fields.userSvtId;
      if ( userSvtId )
      {
        slotDataList = (System_Collections_Generic_List_object__o *)p_fields->slotDataList;
        grandGraphId = v16->fields.grandGraphId;
        pushUserSvtId = followerInfo->fields.pushUserSvtId;
        v21 = (GrandServantListSlotData_o *)sub_1C2D6DC(GrandServantListSlotData_TypeInfo);
        GrandServantListSlotData___ctor_32745856(v21, grandGraphId, v16, userSvtId == pushUserSvtId, v22);
        if ( !slotDataList )
          break;
        items = slotDataList->fields._items;
        v24 = Method_System_Collections_Generic_List_GrandServantListSlotData__Add__;
        ++slotDataList->fields._version;
        if ( !items )
          break;
        size = slotDataList->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            slotDataList,
            (Il2CppObject *)v21,
            *(const MethodInfo_3789B84 **)(*(_QWORD *)(v24[4] + 192LL) + 112LL));
        }
        else
        {
          v26 = &items->obj.klass + size;
          slotDataList->fields._size = size + 1;
          v26[4] = (Il2CppClass *)v21;
          v9 = sub_1C2D434(v26 + 4);
        }
      }
      max_length = userSvtGrandHash->max_length;
      if ( (int)++v15 >= max_length )
        return;
    }
LABEL_20:
    sub_1C2D6EC(v9, v10);
  }
}


void GrandServantListData___ctor_32746312(
        GrandServantListData_o *this,
        OtherUserGameEntity_o *otherUserInfo,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v5; // x22
  GrandServantListData_Fields *p_fields; // x20
  __int64 v7; // x0
  __int64 v8; // x1
  __int64 v9; // x2
  struct ServantLeaderInfo_array *userSvtGrandHash; // x25
  int max_length; // w8
  unsigned int v12; // w26
  ServantLeaderInfo_o *v13; // x23
  System_Collections_Generic_List_object__o *slotDataList; // x21
  int32_t grandGraphId; // w24
  int64_t userSvtId; // x29
  int64_t pushUserSvtId; // x27
  GrandServantListSlotData_o *v18; // x22
  const MethodInfo *v19; // x4
  struct System_Object_array *items; // x8
  _QWORD *v21; // x9
  __int64 size; // x10
  Il2CppClass **v23; // x0

  if ( (byte_4C220C5 & 1) == 0 )
  {
    sub_1C2D490(&GrandServantListSlotData_TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_List_GrandServantListSlotData__Add__);
    sub_1C2D490(&Method_System_Collections_Generic_List_GrandServantListSlotData___ctor__);
    sub_1C2D490(&System_Collections_Generic_List_GrandServantListSlotData__TypeInfo);
    byte_4C220C5 = 1;
  }
  v5 = (System_Collections_Generic_List_object__o *)sub_1C2D6DC(System_Collections_Generic_List_GrandServantListSlotData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_3789350 *)Method_System_Collections_Generic_List_GrandServantListSlotData___ctor__);
  this->fields.slotDataList = (struct System_Collections_Generic_List_GrandServantListSlotData__o *)v5;
  p_fields = &this->fields;
  sub_1C2D434(&this->fields);
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
    v12 = 0;
    while ( 1 )
    {
      if ( v12 >= max_length )
        sub_1C2D6F4(v7, v8, v9);
      v13 = userSvtGrandHash->m_Items[v12];
      if ( !v13 )
        break;
      if ( v13->fields.userSvtId )
      {
        ServantLeaderInfo__ChangeLimitCountBySpoilerProtection(v13, 0);
        slotDataList = (System_Collections_Generic_List_object__o *)p_fields->slotDataList;
        grandGraphId = v13->fields.grandGraphId;
        userSvtId = v13->fields.userSvtId;
        pushUserSvtId = otherUserInfo->fields.pushUserSvtId;
        v18 = (GrandServantListSlotData_o *)sub_1C2D6DC(GrandServantListSlotData_TypeInfo);
        GrandServantListSlotData___ctor_32745856(v18, grandGraphId, v13, userSvtId == pushUserSvtId, v19);
        if ( !slotDataList )
          break;
        items = slotDataList->fields._items;
        v21 = Method_System_Collections_Generic_List_GrandServantListSlotData__Add__;
        ++slotDataList->fields._version;
        if ( !items )
          break;
        size = slotDataList->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            slotDataList,
            (Il2CppObject *)v18,
            *(const MethodInfo_3789B84 **)(*(_QWORD *)(v21[4] + 192LL) + 112LL));
        }
        else
        {
          v23 = &items->obj.klass + size;
          slotDataList->fields._size = size + 1;
          v23[4] = (Il2CppClass *)v18;
          v7 = sub_1C2D434(v23 + 4);
        }
      }
      max_length = userSvtGrandHash->max_length;
      if ( (int)++v12 >= max_length )
        return;
    }
LABEL_17:
    sub_1C2D6EC(v7, v8);
  }
}


GrandServantListSlotData_o *GrandServantListData__GetSlotData(
        GrandServantListData_o *this,
        int32_t grandGraphId,
        const MethodInfo *method)
{
  __int64 v5; // x21
  System_Collections_Generic_List_object__o *v6; // x0
  __int64 v7; // x1
  struct System_Collections_Generic_List_GrandServantListSlotData__o *slotDataList; // x20
  System_Func_object__bool__o *v9; // x22
  Il2CppObject *v10; // x20
  int32_t v11; // w21
  bool IsOtherUserData_k__BackingField; // w22
  const MethodInfo *v13; // x3
  struct System_Object_array *items; // x8
  _QWORD *v15; // x9
  __int64 size; // x10
  Il2CppClass **v17; // x8

  if ( (byte_4C220C6 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Linq_Enumerable_FirstOrDefault_GrandServantListSlotData___);
    sub_1C2D490(&System_Func_GrandServantListSlotData__bool__TypeInfo);
    sub_1C2D490(&GrandServantListSlotData_TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_List_GrandServantListSlotData__Add__);
    sub_1C2D490(&Method_GrandServantListData___c__DisplayClass17_0__GetSlotData_b__0__);
    sub_1C2D490(&GrandServantListData___c__DisplayClass17_0_TypeInfo);
    byte_4C220C6 = 1;
  }
  v5 = sub_1C2D6DC(GrandServantListData___c__DisplayClass17_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    goto LABEL_11;
  *(_DWORD *)(v5 + 16) = grandGraphId;
  slotDataList = this->fields.slotDataList;
  v9 = (System_Func_object__bool__o *)sub_1C2D6DC(System_Func_GrandServantListSlotData__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v9,
    (Il2CppObject *)v5,
    Method_GrandServantListData___c__DisplayClass17_0__GetSlotData_b__0__,
    0);
  v10 = System_Linq_Enumerable__FirstOrDefault_object__51348472(
          (System_Collections_Generic_IEnumerable_TSource__o *)slotDataList,
          (System_Func_TSource__bool__o *)v9,
          (const MethodInfo_30F83F8 *)Method_System_Linq_Enumerable_FirstOrDefault_GrandServantListSlotData___);
  if ( v10 )
    return (GrandServantListSlotData_o *)v10;
  v11 = *(_DWORD *)(v5 + 16);
  IsOtherUserData_k__BackingField = this->fields._IsOtherUserData_k__BackingField;
  v10 = (Il2CppObject *)sub_1C2D6DC(GrandServantListSlotData_TypeInfo);
  GrandServantListSlotData___ctor((GrandServantListSlotData_o *)v10, v11, IsOtherUserData_k__BackingField, v13);
  v6 = (System_Collections_Generic_List_object__o *)this->fields.slotDataList;
  if ( !v6
    || (items = v6->fields._items,
        v15 = Method_System_Collections_Generic_List_GrandServantListSlotData__Add__,
        ++v6->fields._version,
        !items) )
  {
LABEL_11:
    sub_1C2D6EC(v6, v7);
  }
  size = v6->fields._size;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v6,
      v10,
      *(const MethodInfo_3789B84 **)(*(_QWORD *)(v15[4] + 192LL) + 112LL));
  }
  else
  {
    v17 = &items->obj.klass + size;
    v6->fields._size = size + 1;
    v17[4] = (Il2CppClass *)v10;
    sub_1C2D434(v17 + 4);
  }
  return (GrandServantListSlotData_o *)v10;
}


void GrandServantListData__SetQuestData(
        GrandServantListData_o *this,
        GrandServantListQuestData_o *questData,
        const MethodInfo *method)
{
  this->fields._QuestData_k__BackingField = questData;
  sub_1C2D434(&this->fields._QuestData_k__BackingField);
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
  sub_1C2D434(&this->fields._QuestData_k__BackingField);
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
    sub_1C2D6EC(this, 0);
  return d->fields._GrandGraphId_k__BackingField == this->fields.grandGraphId;
}