void GrandServantListData___ctor(GrandServantListData_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x20
  GrandServantListData_Fields *p_fields; // x19
  int32_t v5; // w2
  int32_t v6; // w3
  System_String_o *v7; // x4
  int32_t v8; // w5
  int64_t v9; // x6
  System_String_o *v10; // x7
  Il2CppObject *Master_object; // x0
  __int64 v12; // x1
  System_Object_array *Entitys; // x20
  int max_length; // w8
  unsigned int v15; // w26
  Il2CppClass **v16; // x8
  UserServantGrandEntity_o *v17; // x21
  int64_t userSvtId; // x22
  int32_t grandGraphId; // w23
  System_Int64_array *EquipUserServantIdList; // x24
  int32_t v21; // w25
  GrandServantListSlotData_o *v22; // x21
  const MethodInfo *v23; // x5
  int32_t v24; // w2
  int32_t v25; // w3
  System_String_o *v26; // x4
  int32_t v27; // w5
  int64_t v28; // x6
  System_String_o *v29; // x7
  Il2CppClass *klass; // x8
  _QWORD *v31; // x9
  __int64 monitor_low; // x10
  void **v33; // x8

  if ( (byte_4D2749E & 1) == 0 )
  {
    sub_1C94098(&Method_DataManager_GetMaster_GrandGraphMaster___);
    sub_1C94098(&Method_DataManager_GetMaster_UserServantGrandMaster___);
    sub_1C94098(&DataManager_TypeInfo);
    sub_1C94098(&Method_DataMasterBase_UserServantGrandMaster__UserServantGrandEntity__string__getEntitys__);
    sub_1C94098(&GrandServantListSlotData_TypeInfo);
    sub_1C94098(&Method_System_Collections_Generic_List_GrandServantListSlotData__Add__);
    sub_1C94098(&Method_System_Collections_Generic_List_GrandServantListSlotData___ctor__);
    sub_1C94098(&System_Collections_Generic_List_GrandServantListSlotData__TypeInfo);
    byte_4D2749E = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_1C942E4(System_Collections_Generic_List_GrandServantListSlotData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_386A600 *)Method_System_Collections_Generic_List_GrandServantListSlotData___ctor__);
  this->fields.slotDataList = (struct System_Collections_Generic_List_GrandServantListSlotData__o *)v3;
  p_fields = &this->fields;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields, (int32_t)v3, v5, v6, v7, v8, v9, v10);
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields._Kind_k__BackingField = 0;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_319C0E0 *)Method_DataManager_GetMaster_UserServantGrandMaster___);
  if ( !Master_object )
    goto LABEL_19;
  Entitys = DataMasterBase_object__object__object___getEntitys(
              (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
              (const MethodInfo_345F1FC *)Method_DataMasterBase_UserServantGrandMaster__UserServantGrandEntity__string__getEntitys__);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_319C0E0 *)Method_DataManager_GetMaster_GrandGraphMaster___);
  this->fields._DisplaySupportInfoButton_k__BackingField = 0;
  if ( !Entitys )
    goto LABEL_19;
  max_length = Entitys->max_length;
  if ( max_length >= 1 )
  {
    v15 = 0;
    while ( 1 )
    {
      if ( v15 >= max_length )
        sub_1C942F8(Master_object);
      v16 = &Entitys->obj.klass + (int)v15;
      v17 = (UserServantGrandEntity_o *)v16[4];
      if ( !v17 )
        break;
      userSvtId = v17->fields.userSvtId;
      if ( userSvtId )
      {
        grandGraphId = v17->fields.grandGraphId;
        EquipUserServantIdList = UserServantGrandEntity__GetEquipUserServantIdList(
                                   (UserServantGrandEntity_o *)v16[4],
                                   0);
        v21 = UserServantGrandEntity__IsChangeFriendShipSvtEquipSkill(v17, 0);
        v22 = (GrandServantListSlotData_o *)sub_1C942E4(GrandServantListSlotData_TypeInfo);
        GrandServantListSlotData___ctor_33535736(v22, grandGraphId, userSvtId, EquipUserServantIdList, v21, v23);
        Master_object = (Il2CppObject *)p_fields->slotDataList;
        if ( !p_fields->slotDataList )
          break;
        klass = Master_object[1].klass;
        v31 = Method_System_Collections_Generic_List_GrandServantListSlotData__Add__;
        ++HIDWORD(Master_object[1].monitor);
        if ( !klass )
          break;
        monitor_low = SLODWORD(Master_object[1].monitor);
        if ( (unsigned int)monitor_low >= LODWORD(klass->_1.namespaze) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            (System_Collections_Generic_List_object__o *)Master_object,
            (Il2CppObject *)v22,
            *(const MethodInfo_386AE34 **)(*(_QWORD *)(v31[4] + 192LL) + 112LL));
        }
        else
        {
          v33 = &klass->_1.image + monitor_low;
          LODWORD(Master_object[1].monitor) = monitor_low + 1;
          v33[4] = v22;
          sub_1C9403C((GrandQuestFolderBoardItem_o *)(v33 + 4), (int32_t)v22, v24, v25, v26, v27, v28, v29);
        }
      }
      max_length = Entitys->max_length;
      if ( (int)++v15 >= max_length )
        return;
    }
LABEL_19:
    sub_1C942F0(Master_object, v12);
  }
}


void GrandServantListData___ctor_33536716(
        GrandServantListData_o *this,
        FollowerInfo_o *followerInfo,
        bool isUseGrandSupport,
        bool displaySupportInfoButton,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v9; // x24
  GrandServantListData_Fields *p_fields; // x20
  int32_t v11; // w2
  int32_t v12; // w3
  System_String_o *v13; // x4
  int32_t v14; // w5
  int64_t v15; // x6
  System_String_o *v16; // x7
  __int64 v17; // x0
  __int64 v18; // x1
  int8_t v19; // w10
  struct ServantLeaderInfo_array *userSvtGrandHash; // x25
  int max_length; // w8
  unsigned int v22; // w26
  ServantLeaderInfo_o *v23; // x23
  int64_t userSvtId; // x29
  System_Collections_Generic_List_object__o *slotDataList; // x21
  int32_t grandGraphId; // w24
  int64_t pushUserSvtId; // x27
  GrandServantListSlotData_o *v28; // x22
  const MethodInfo *v29; // x4
  int32_t v30; // w2
  int32_t v31; // w3
  System_String_o *v32; // x4
  int32_t v33; // w5
  int64_t v34; // x6
  System_String_o *v35; // x7
  struct System_Object_array *items; // x8
  _QWORD *v37; // x9
  __int64 size; // x10
  Il2CppClass **v39; // x0

  if ( (byte_4D2749F & 1) == 0 )
  {
    sub_1C94098(&GrandServantListSlotData_TypeInfo);
    sub_1C94098(&Method_System_Collections_Generic_List_GrandServantListSlotData__Add__);
    sub_1C94098(&Method_System_Collections_Generic_List_GrandServantListSlotData___ctor__);
    sub_1C94098(&System_Collections_Generic_List_GrandServantListSlotData__TypeInfo);
    byte_4D2749F = 1;
  }
  v9 = (System_Collections_Generic_List_object__o *)sub_1C942E4(System_Collections_Generic_List_GrandServantListSlotData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v9,
    (const MethodInfo_386A600 *)Method_System_Collections_Generic_List_GrandServantListSlotData___ctor__);
  this->fields.slotDataList = (struct System_Collections_Generic_List_GrandServantListSlotData__o *)v9;
  p_fields = &this->fields;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields, (int32_t)v9, v11, v12, v13, v14, v15, v16);
  System_Object___ctor((Il2CppObject *)this, 0);
  if ( isUseGrandSupport )
    v19 = 1;
  else
    v19 = 2;
  this->fields._IsOtherUserData_k__BackingField = 1;
  this->fields._Kind_k__BackingField = v19;
  this->fields._DisplaySupportInfoButton_k__BackingField = displaySupportInfoButton;
  if ( !followerInfo )
    goto LABEL_20;
  userSvtGrandHash = followerInfo->fields.userSvtGrandHash;
  if ( !userSvtGrandHash )
    goto LABEL_20;
  max_length = userSvtGrandHash->max_length;
  if ( max_length >= 1 )
  {
    v22 = 0;
    while ( 1 )
    {
      if ( v22 >= max_length )
        sub_1C942F8(v17);
      v23 = userSvtGrandHash->m_Items[v22];
      if ( !v23 )
        break;
      userSvtId = v23->fields.userSvtId;
      if ( userSvtId )
      {
        slotDataList = (System_Collections_Generic_List_object__o *)p_fields->slotDataList;
        grandGraphId = v23->fields.grandGraphId;
        pushUserSvtId = followerInfo->fields.pushUserSvtId;
        v28 = (GrandServantListSlotData_o *)sub_1C942E4(GrandServantListSlotData_TypeInfo);
        GrandServantListSlotData___ctor_33537184(v28, grandGraphId, v23, userSvtId == pushUserSvtId, v29);
        if ( !slotDataList )
          break;
        items = slotDataList->fields._items;
        v37 = Method_System_Collections_Generic_List_GrandServantListSlotData__Add__;
        ++slotDataList->fields._version;
        if ( !items )
          break;
        size = slotDataList->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            slotDataList,
            (Il2CppObject *)v28,
            *(const MethodInfo_386AE34 **)(*(_QWORD *)(v37[4] + 192LL) + 112LL));
        }
        else
        {
          v39 = &items->obj.klass + size;
          slotDataList->fields._size = size + 1;
          v39[4] = (Il2CppClass *)v28;
          sub_1C9403C((GrandQuestFolderBoardItem_o *)(v39 + 4), (int32_t)v28, v30, v31, v32, v33, v34, v35);
        }
      }
      max_length = userSvtGrandHash->max_length;
      if ( (int)++v22 >= max_length )
        return;
    }
LABEL_20:
    sub_1C942F0(v17, v18);
  }
}


void GrandServantListData___ctor_33537640(
        GrandServantListData_o *this,
        OtherUserGameEntity_o *otherUserInfo,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v5; // x22
  GrandServantListData_Fields *p_fields; // x20
  int32_t v7; // w2
  int32_t v8; // w3
  System_String_o *v9; // x4
  int32_t v10; // w5
  int64_t v11; // x6
  System_String_o *v12; // x7
  __int64 v13; // x0
  __int64 v14; // x1
  struct ServantLeaderInfo_array *userSvtGrandHash; // x25
  int max_length; // w8
  unsigned int v17; // w26
  ServantLeaderInfo_o *v18; // x23
  System_Collections_Generic_List_object__o *slotDataList; // x21
  int32_t grandGraphId; // w24
  int64_t userSvtId; // x29
  int64_t pushUserSvtId; // x27
  GrandServantListSlotData_o *v23; // x22
  const MethodInfo *v24; // x4
  int32_t v25; // w2
  int32_t v26; // w3
  System_String_o *v27; // x4
  int32_t v28; // w5
  int64_t v29; // x6
  System_String_o *v30; // x7
  struct System_Object_array *items; // x8
  _QWORD *v32; // x9
  __int64 size; // x10
  Il2CppClass **v34; // x0

  if ( (byte_4D274A0 & 1) == 0 )
  {
    sub_1C94098(&GrandServantListSlotData_TypeInfo);
    sub_1C94098(&Method_System_Collections_Generic_List_GrandServantListSlotData__Add__);
    sub_1C94098(&Method_System_Collections_Generic_List_GrandServantListSlotData___ctor__);
    sub_1C94098(&System_Collections_Generic_List_GrandServantListSlotData__TypeInfo);
    byte_4D274A0 = 1;
  }
  v5 = (System_Collections_Generic_List_object__o *)sub_1C942E4(System_Collections_Generic_List_GrandServantListSlotData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_386A600 *)Method_System_Collections_Generic_List_GrandServantListSlotData___ctor__);
  this->fields.slotDataList = (struct System_Collections_Generic_List_GrandServantListSlotData__o *)v5;
  p_fields = &this->fields;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields, (int32_t)v5, v7, v8, v9, v10, v11, v12);
  System_Object___ctor((Il2CppObject *)this, 0);
  *(_WORD *)&this->fields._IsOtherUserData_k__BackingField = 513;
  this->fields._DisplaySupportInfoButton_k__BackingField = 1;
  if ( !otherUserInfo )
    goto LABEL_17;
  userSvtGrandHash = otherUserInfo->fields.userSvtGrandHash;
  if ( !userSvtGrandHash )
    goto LABEL_17;
  max_length = userSvtGrandHash->max_length;
  if ( max_length >= 1 )
  {
    v17 = 0;
    while ( 1 )
    {
      if ( v17 >= max_length )
        sub_1C942F8(v13);
      v18 = userSvtGrandHash->m_Items[v17];
      if ( !v18 )
        break;
      if ( v18->fields.userSvtId )
      {
        ServantLeaderInfo__ChangeLimitCountBySpoilerProtection(v18, 0);
        slotDataList = (System_Collections_Generic_List_object__o *)p_fields->slotDataList;
        grandGraphId = v18->fields.grandGraphId;
        userSvtId = v18->fields.userSvtId;
        pushUserSvtId = otherUserInfo->fields.pushUserSvtId;
        v23 = (GrandServantListSlotData_o *)sub_1C942E4(GrandServantListSlotData_TypeInfo);
        GrandServantListSlotData___ctor_33537184(v23, grandGraphId, v18, userSvtId == pushUserSvtId, v24);
        if ( !slotDataList )
          break;
        items = slotDataList->fields._items;
        v32 = Method_System_Collections_Generic_List_GrandServantListSlotData__Add__;
        ++slotDataList->fields._version;
        if ( !items )
          break;
        size = slotDataList->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            slotDataList,
            (Il2CppObject *)v23,
            *(const MethodInfo_386AE34 **)(*(_QWORD *)(v32[4] + 192LL) + 112LL));
        }
        else
        {
          v34 = &items->obj.klass + size;
          slotDataList->fields._size = size + 1;
          v34[4] = (Il2CppClass *)v23;
          sub_1C9403C((GrandQuestFolderBoardItem_o *)(v34 + 4), (int32_t)v23, v25, v26, v27, v28, v29, v30);
        }
      }
      max_length = userSvtGrandHash->max_length;
      if ( (int)++v17 >= max_length )
        return;
    }
LABEL_17:
    sub_1C942F0(v13, v14);
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
  int32_t v14; // w2
  int32_t v15; // w3
  System_String_o *v16; // x4
  int32_t v17; // w5
  int64_t v18; // x6
  System_String_o *v19; // x7
  struct System_Object_array *items; // x8
  _QWORD *v21; // x9
  __int64 size; // x10
  Il2CppClass **v23; // x8

  if ( (byte_4D274A1 & 1) == 0 )
  {
    sub_1C94098(&Method_System_Linq_Enumerable_FirstOrDefault_GrandServantListSlotData___);
    sub_1C94098(&System_Func_GrandServantListSlotData__bool__TypeInfo);
    sub_1C94098(&GrandServantListSlotData_TypeInfo);
    sub_1C94098(&Method_System_Collections_Generic_List_GrandServantListSlotData__Add__);
    sub_1C94098(&Method_GrandServantListData___c__DisplayClass21_0__GetSlotData_b__0__);
    sub_1C94098(&GrandServantListData___c__DisplayClass21_0_TypeInfo);
    byte_4D274A1 = 1;
  }
  v5 = sub_1C942E4(GrandServantListData___c__DisplayClass21_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    goto LABEL_11;
  *(_DWORD *)(v5 + 16) = grandGraphId;
  slotDataList = this->fields.slotDataList;
  v9 = (System_Func_object__bool__o *)sub_1C942E4(System_Func_GrandServantListSlotData__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v9,
    (Il2CppObject *)v5,
    Method_GrandServantListData___c__DisplayClass21_0__GetSlotData_b__0__,
    0);
  v10 = System_Linq_Enumerable__FirstOrDefault_object__52191056(
          (System_Collections_Generic_IEnumerable_TSource__o *)slotDataList,
          (System_Func_TSource__bool__o *)v9,
          (const MethodInfo_31C5F50 *)Method_System_Linq_Enumerable_FirstOrDefault_GrandServantListSlotData___);
  if ( v10 )
    return (GrandServantListSlotData_o *)v10;
  v11 = *(_DWORD *)(v5 + 16);
  IsOtherUserData_k__BackingField = this->fields._IsOtherUserData_k__BackingField;
  v10 = (Il2CppObject *)sub_1C942E4(GrandServantListSlotData_TypeInfo);
  GrandServantListSlotData___ctor((GrandServantListSlotData_o *)v10, v11, IsOtherUserData_k__BackingField, v13);
  v6 = (System_Collections_Generic_List_object__o *)this->fields.slotDataList;
  if ( !v6
    || (items = v6->fields._items,
        v21 = Method_System_Collections_Generic_List_GrandServantListSlotData__Add__,
        ++v6->fields._version,
        !items) )
  {
LABEL_11:
    sub_1C942F0(v6, v7);
  }
  size = v6->fields._size;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v6,
      v10,
      *(const MethodInfo_386AE34 **)(*(_QWORD *)(v21[4] + 192LL) + 112LL));
  }
  else
  {
    v23 = &items->obj.klass + size;
    v6->fields._size = size + 1;
    v23[4] = (Il2CppClass *)v10;
    sub_1C9403C((GrandQuestFolderBoardItem_o *)(v23 + 4), (int32_t)v10, v14, v15, v16, v17, v18, v19);
  }
  return (GrandServantListSlotData_o *)v10;
}


void GrandServantListData__SetQuestData(
        GrandServantListData_o *this,
        GrandServantListQuestData_o *questData,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  this->fields._QuestData_k__BackingField = questData;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&this->fields._QuestData_k__BackingField,
    (int32_t)questData,
    (int32_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


bool GrandServantListData__get_DisplaySupportInfoButton(GrandServantListData_o *this, const MethodInfo *method)
{
  return this->fields._DisplaySupportInfoButton_k__BackingField;
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


void GrandServantListData__set_DisplaySupportInfoButton(
        GrandServantListData_o *this,
        bool value,
        const MethodInfo *method)
{
  this->fields._DisplaySupportInfoButton_k__BackingField = value;
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
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  this->fields._QuestData_k__BackingField = value;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&this->fields._QuestData_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void GrandServantListData___c__DisplayClass21_0___ctor(
        GrandServantListData___c__DisplayClass21_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool GrandServantListData___c__DisplayClass21_0___GetSlotData_b__0(
        GrandServantListData___c__DisplayClass21_0_o *this,
        GrandServantListSlotData_o *d,
        const MethodInfo *method)
{
  if ( !d )
    sub_1C942F0(this, 0);
  return d->fields._GrandGraphId_k__BackingField == this->fields.grandGraphId;
}