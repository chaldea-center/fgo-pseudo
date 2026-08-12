void GrandServantListData___ctor(GrandServantListData_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x20
  GrandServantListData_Fields *p_fields; // x19
  System_String_o *v5; // x2
  System_String_o *v6; // x3
  int32_t v7; // w4
  int32_t v8; // w5
  bool v9; // w6
  bool v10; // w7
  __int64 v11; // x1
  __int64 v12; // x2
  DataManager_c *v13; // x0
  Il2CppObject *Master_object; // x0
  __int64 v15; // x1
  System_Object_array *Entitys; // x20
  int max_length; // w8
  unsigned int v18; // w28
  Il2CppClass **v19; // x8
  UserServantGrandEntity_o *v20; // x21
  int64_t userSvtId; // x22
  int32_t grandGraphId; // w23
  System_Int64_array *EquipUserServantIdList; // x24
  int32_t v24; // w25
  GrandServantListSlotData_o *v25; // x21
  const MethodInfo *v26; // x5
  System_String_o *v27; // x2
  System_String_o *v28; // x3
  int32_t v29; // w4
  int32_t v30; // w5
  bool v31; // w6
  bool v32; // w7
  Il2CppClass *klass; // x8
  _QWORD *v34; // x9
  __int64 monitor_low; // x10
  void **v36; // x8

  if ( (byte_596B31D & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMaster_GrandGraphMaster___);
    sub_2213A60(&Method_DataManager_GetMaster_UserServantGrandMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&Method_DataMasterBase_UserServantGrandMaster__UserServantGrandEntity__string__getEntitys__);
    sub_2213A60(&GrandServantListSlotData_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_GrandServantListSlotData__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_GrandServantListSlotData___ctor__);
    sub_2213A60(&System_Collections_Generic_List_GrandServantListSlotData__TypeInfo);
    byte_596B31D = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_GrandServantListSlotData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_GrandServantListSlotData___ctor__);
  this->fields.slotDataList = (struct System_Collections_Generic_List_GrandServantListSlotData__o *)v3;
  p_fields = &this->fields;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields, (int32_t)v3, v5, v6, v7, v8, v9, v10);
  System_Object___ctor((Il2CppObject *)this, 0);
  v13 = DataManager_TypeInfo;
  this->fields._Kind_k__BackingField = 0;
  if ( !*(&v13->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(v13, v11, v12);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_UserServantGrandMaster___);
  if ( !Master_object )
    goto LABEL_19;
  Entitys = DataMasterBase_object__object__object___getEntitys(
              (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
              (const MethodInfo_3F14B68 *)Method_DataMasterBase_UserServantGrandMaster__UserServantGrandEntity__string__getEntitys__);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_GrandGraphMaster___);
  this->fields._DisplaySupportInfoButton_k__BackingField = 0;
  if ( !Entitys )
    goto LABEL_19;
  max_length = Entitys->max_length;
  if ( max_length >= 1 )
  {
    v18 = 0;
    while ( 1 )
    {
      if ( v18 >= max_length )
        sub_2213CE4(Master_object);
      v19 = &Entitys->obj.klass + (int)v18;
      v20 = (UserServantGrandEntity_o *)v19[4];
      if ( !v20 )
        break;
      userSvtId = v20->fields.userSvtId;
      if ( userSvtId )
      {
        grandGraphId = v20->fields.grandGraphId;
        EquipUserServantIdList = UserServantGrandEntity__GetEquipUserServantIdList(
                                   (UserServantGrandEntity_o *)v19[4],
                                   0);
        v24 = UserServantGrandEntity__IsChangeFriendShipSvtEquipSkill(v20, 0);
        v25 = (GrandServantListSlotData_o *)sub_2213CCC(GrandServantListSlotData_TypeInfo);
        GrandServantListSlotData___ctor_39649920(v25, grandGraphId, userSvtId, EquipUserServantIdList, v24, v26);
        Master_object = (Il2CppObject *)p_fields->slotDataList;
        if ( !p_fields->slotDataList )
          break;
        klass = Master_object[1].klass;
        v34 = Method_System_Collections_Generic_List_GrandServantListSlotData__Add__;
        ++HIDWORD(Master_object[1].monitor);
        if ( !klass )
          break;
        monitor_low = SLODWORD(Master_object[1].monitor);
        if ( (unsigned int)monitor_low >= LODWORD(klass->_1.namespaze) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            (System_Collections_Generic_List_object__o *)Master_object,
            (Il2CppObject *)v25,
            *(const MethodInfo_4483C64 **)(*(_QWORD *)(v34[4] + 192LL) + 112LL));
        }
        else
        {
          v36 = &klass->_1.image + monitor_low;
          LODWORD(Master_object[1].monitor) = monitor_low + 1;
          v36[4] = v25;
          sub_2213A04((MissionNaviTransitionBoardItem_o *)(v36 + 4), (int32_t)v25, v27, v28, v29, v30, v31, v32);
        }
      }
      max_length = Entitys->max_length;
      if ( (int)++v18 >= max_length )
        return;
    }
LABEL_19:
    sub_2213CDC(Master_object, v15);
  }
}


void GrandServantListData___ctor_39650900(
        GrandServantListData_o *this,
        FollowerInfo_o *followerInfo,
        bool isUseGrandSupport,
        bool displaySupportInfoButton,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v9; // x24
  GrandServantListData_Fields *p_fields; // x20
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7
  __int64 v17; // x0
  __int64 v18; // x1
  int8_t v19; // w9
  struct ServantLeaderInfo_array *userSvtGrandHash; // x25
  int max_length; // w8
  unsigned int v22; // w28
  ServantLeaderInfo_o *v23; // x23
  int64_t userSvtId; // x29
  System_Collections_Generic_List_object__o *slotDataList; // x21
  int32_t grandGraphId; // w24
  int64_t pushUserSvtId; // x26
  GrandServantListSlotData_o *v28; // x22
  const MethodInfo *v29; // x4
  System_String_o *v30; // x2
  System_String_o *v31; // x3
  int32_t v32; // w4
  int32_t v33; // w5
  bool v34; // w6
  bool v35; // w7
  struct System_Object_array *items; // x8
  _QWORD *v37; // x9
  __int64 size; // x10
  Il2CppClass **v39; // x0

  if ( (byte_596B31E & 1) == 0 )
  {
    sub_2213A60(&GrandServantListSlotData_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_GrandServantListSlotData__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_GrandServantListSlotData___ctor__);
    sub_2213A60(&System_Collections_Generic_List_GrandServantListSlotData__TypeInfo);
    byte_596B31E = 1;
  }
  v9 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_GrandServantListSlotData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v9,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_GrandServantListSlotData___ctor__);
  this->fields.slotDataList = (struct System_Collections_Generic_List_GrandServantListSlotData__o *)v9;
  p_fields = &this->fields;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields, (int32_t)v9, v11, v12, v13, v14, v15, v16);
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
        sub_2213CE4(v17);
      v23 = userSvtGrandHash->m_Items[v22];
      if ( !v23 )
        break;
      userSvtId = v23->fields.userSvtId;
      if ( userSvtId )
      {
        slotDataList = (System_Collections_Generic_List_object__o *)p_fields->slotDataList;
        grandGraphId = v23->fields.grandGraphId;
        pushUserSvtId = followerInfo->fields.pushUserSvtId;
        v28 = (GrandServantListSlotData_o *)sub_2213CCC(GrandServantListSlotData_TypeInfo);
        GrandServantListSlotData___ctor_39651368(v28, grandGraphId, v23, userSvtId == pushUserSvtId, v29);
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
            *(const MethodInfo_4483C64 **)(*(_QWORD *)(v37[4] + 192LL) + 112LL));
        }
        else
        {
          v39 = &items->obj.klass + size;
          slotDataList->fields._size = size + 1;
          v39[4] = (Il2CppClass *)v28;
          sub_2213A04((MissionNaviTransitionBoardItem_o *)(v39 + 4), (int32_t)v28, v30, v31, v32, v33, v34, v35);
        }
      }
      max_length = userSvtGrandHash->max_length;
      if ( (int)++v22 >= max_length )
        return;
    }
LABEL_20:
    sub_2213CDC(v17, v18);
  }
}


void GrandServantListData___ctor_39651824(
        GrandServantListData_o *this,
        OtherUserGameEntity_o *otherUserInfo,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v5; // x22
  GrandServantListData_Fields *p_fields; // x20
  System_String_o *v7; // x2
  System_String_o *v8; // x3
  int32_t v9; // w4
  int32_t v10; // w5
  bool v11; // w6
  bool v12; // w7
  __int64 v13; // x0
  __int64 v14; // x1
  struct ServantLeaderInfo_array *userSvtGrandHash; // x25
  int max_length; // w8
  unsigned int v17; // w28
  ServantLeaderInfo_o *v18; // x23
  int64_t userSvtId; // x29
  System_Collections_Generic_List_object__o *slotDataList; // x21
  int32_t grandGraphId; // w24
  int64_t pushUserSvtId; // x26
  GrandServantListSlotData_o *v23; // x22
  const MethodInfo *v24; // x4
  System_String_o *v25; // x2
  System_String_o *v26; // x3
  int32_t v27; // w4
  int32_t v28; // w5
  bool v29; // w6
  bool v30; // w7
  struct System_Object_array *items; // x8
  _QWORD *v32; // x9
  __int64 size; // x10
  Il2CppClass **v34; // x0

  if ( (byte_596B31F & 1) == 0 )
  {
    sub_2213A60(&GrandServantListSlotData_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_GrandServantListSlotData__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_GrandServantListSlotData___ctor__);
    sub_2213A60(&System_Collections_Generic_List_GrandServantListSlotData__TypeInfo);
    byte_596B31F = 1;
  }
  v5 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_GrandServantListSlotData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_GrandServantListSlotData___ctor__);
  this->fields.slotDataList = (struct System_Collections_Generic_List_GrandServantListSlotData__o *)v5;
  p_fields = &this->fields;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields, (int32_t)v5, v7, v8, v9, v10, v11, v12);
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
        sub_2213CE4(v13);
      v18 = userSvtGrandHash->m_Items[v17];
      if ( !v18 )
        break;
      userSvtId = v18->fields.userSvtId;
      if ( userSvtId )
      {
        slotDataList = (System_Collections_Generic_List_object__o *)p_fields->slotDataList;
        grandGraphId = v18->fields.grandGraphId;
        pushUserSvtId = otherUserInfo->fields.pushUserSvtId;
        v23 = (GrandServantListSlotData_o *)sub_2213CCC(GrandServantListSlotData_TypeInfo);
        GrandServantListSlotData___ctor_39651368(v23, grandGraphId, v18, userSvtId == pushUserSvtId, v24);
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
            *(const MethodInfo_4483C64 **)(*(_QWORD *)(v32[4] + 192LL) + 112LL));
        }
        else
        {
          v34 = &items->obj.klass + size;
          slotDataList->fields._size = size + 1;
          v34[4] = (Il2CppClass *)v23;
          sub_2213A04((MissionNaviTransitionBoardItem_o *)(v34 + 4), (int32_t)v23, v25, v26, v27, v28, v29, v30);
        }
      }
      max_length = userSvtGrandHash->max_length;
      if ( (int)++v17 >= max_length )
        return;
    }
LABEL_17:
    sub_2213CDC(v13, v14);
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
  struct System_Collections_Generic_List_GrandServantListSlotData__o *slotDataList; // x22
  System_Func_object__bool__o *v9; // x20
  Il2CppObject *v10; // x20
  int32_t v11; // w21
  bool IsOtherUserData_k__BackingField; // w22
  const MethodInfo *v13; // x3
  System_String_o *v14; // x2
  System_String_o *v15; // x3
  int32_t v16; // w4
  int32_t v17; // w5
  bool v18; // w6
  bool v19; // w7
  struct System_Object_array *items; // x8
  _QWORD *v21; // x9
  __int64 size; // x10
  Il2CppClass **v23; // x8

  if ( (byte_596B320 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Linq_Enumerable_FirstOrDefault_GrandServantListSlotData___);
    sub_2213A60(&System_Func_GrandServantListSlotData__bool__TypeInfo);
    sub_2213A60(&GrandServantListSlotData_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_GrandServantListSlotData__Add__);
    sub_2213A60(&Method_GrandServantListData___c__DisplayClass21_0__GetSlotData_b__0__);
    sub_2213A60(&GrandServantListData___c__DisplayClass21_0_TypeInfo);
    byte_596B320 = 1;
  }
  v5 = sub_2213CCC(GrandServantListData___c__DisplayClass21_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    goto LABEL_11;
  slotDataList = this->fields.slotDataList;
  *(_DWORD *)(v5 + 16) = grandGraphId;
  v9 = (System_Func_object__bool__o *)sub_2213CCC(System_Func_GrandServantListSlotData__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v9,
    (Il2CppObject *)v5,
    Method_GrandServantListData___c__DisplayClass21_0__GetSlotData_b__0__,
    0);
  v10 = System_Linq_Enumerable__FirstOrDefault_object__59254852(
          (System_Collections_Generic_IEnumerable_TSource__o *)slotDataList,
          (System_Func_TSource__bool__o *)v9,
          (const MethodInfo_3882844 *)Method_System_Linq_Enumerable_FirstOrDefault_GrandServantListSlotData___);
  if ( v10 )
    return (GrandServantListSlotData_o *)v10;
  v11 = *(_DWORD *)(v5 + 16);
  IsOtherUserData_k__BackingField = this->fields._IsOtherUserData_k__BackingField;
  v10 = (Il2CppObject *)sub_2213CCC(GrandServantListSlotData_TypeInfo);
  GrandServantListSlotData___ctor((GrandServantListSlotData_o *)v10, v11, IsOtherUserData_k__BackingField, v13);
  v6 = (System_Collections_Generic_List_object__o *)this->fields.slotDataList;
  if ( !v6
    || (items = v6->fields._items,
        v21 = Method_System_Collections_Generic_List_GrandServantListSlotData__Add__,
        ++v6->fields._version,
        !items) )
  {
LABEL_11:
    sub_2213CDC(v6, v7);
  }
  size = v6->fields._size;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v6,
      v10,
      *(const MethodInfo_4483C64 **)(*(_QWORD *)(v21[4] + 192LL) + 112LL));
  }
  else
  {
    v23 = &items->obj.klass + size;
    v6->fields._size = size + 1;
    v23[4] = (Il2CppClass *)v10;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)(v23 + 4), (int32_t)v10, v14, v15, v16, v17, v18, v19);
  }
  return (GrandServantListSlotData_o *)v10;
}


void GrandServantListData__SetQuestData(
        GrandServantListData_o *this,
        GrandServantListQuestData_o *questData,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields._QuestData_k__BackingField = questData;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields._QuestData_k__BackingField,
    (int32_t)questData,
    (System_String_o *)method,
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
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields._QuestData_k__BackingField = value;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields._QuestData_k__BackingField,
    (int32_t)value,
    (System_String_o *)method,
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
    sub_2213CDC(this, 0);
  return d->fields._GrandGraphId_k__BackingField == this->fields.grandGraphId;
}