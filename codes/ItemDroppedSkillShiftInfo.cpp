void ItemDroppedSkillShiftInfo___ctor(ItemDroppedSkillShiftInfo_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x20
  int32_t v4; // w2
  const MethodInfo *v5; // x3

  if ( (byte_4C45EF3 & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_List_ItemDroppedSkillShiftInfo_ServantInfo___ctor__);
    sub_1C37058(&System_Collections_Generic_List_ItemDroppedSkillShiftInfo_ServantInfo__TypeInfo);
    byte_4C45EF3 = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_1C372A4(System_Collections_Generic_List_ItemDroppedSkillShiftInfo_ServantInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_37A27F0 *)Method_System_Collections_Generic_List_ItemDroppedSkillShiftInfo_ServantInfo___ctor__);
  this->fields.servantInfoList = (struct System_Collections_Generic_List_ItemDroppedSkillShiftInfo_ServantInfo__o *)v3;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields, (int32_t)v3, v4, v5);
  System_Object___ctor((Il2CppObject *)this, 0);
}


System_Int64_array *ItemDroppedSkillShiftInfo__GetNpcSvtIdArray(
        ItemDroppedSkillShiftInfo_o *this,
        const MethodInfo *method)
{
  ItemDroppedSkillShiftInfo___c_c *v3; // x0
  struct System_Collections_Generic_List_ItemDroppedSkillShiftInfo_ServantInfo__o *servantInfoList; // x19
  System_Func_object__long__o *_9__3_0; // x20
  Il2CppObject *v6; // x21
  struct ItemDroppedSkillShiftInfo___c_StaticFields *static_fields; // x0
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v10; // x0

  if ( (byte_4C45EEF & 1) == 0 )
  {
    sub_1C37058(&Method_System_Linq_Enumerable_Select_ItemDroppedSkillShiftInfo_ServantInfo__long___);
    sub_1C37058(&Method_System_Linq_Enumerable_ToArray_long___);
    sub_1C37058(&System_Func_ItemDroppedSkillShiftInfo_ServantInfo__long__TypeInfo);
    sub_1C37058(&Method_ItemDroppedSkillShiftInfo___c__GetNpcSvtIdArray_b__3_0__);
    sub_1C37058(&ItemDroppedSkillShiftInfo___c_TypeInfo);
    byte_4C45EEF = 1;
  }
  v3 = ItemDroppedSkillShiftInfo___c_TypeInfo;
  servantInfoList = this->fields.servantInfoList;
  if ( !ItemDroppedSkillShiftInfo___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ItemDroppedSkillShiftInfo___c_TypeInfo);
    v3 = ItemDroppedSkillShiftInfo___c_TypeInfo;
  }
  _9__3_0 = (System_Func_object__long__o *)v3->static_fields->__9__3_0;
  if ( !_9__3_0 )
  {
    if ( !v3->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v3);
      v3 = ItemDroppedSkillShiftInfo___c_TypeInfo;
    }
    v6 = (Il2CppObject *)v3->static_fields->__9;
    _9__3_0 = (System_Func_object__long__o *)sub_1C372A4(System_Func_ItemDroppedSkillShiftInfo_ServantInfo__long__TypeInfo);
    System_Func_object__long____ctor(_9__3_0, v6, Method_ItemDroppedSkillShiftInfo___c__GetNpcSvtIdArray_b__3_0__, 0);
    static_fields = ItemDroppedSkillShiftInfo___c_TypeInfo->static_fields;
    static_fields->__9__3_0 = (struct System_Func_ItemDroppedSkillShiftInfo_ServantInfo__long__o *)_9__3_0;
    sub_1C36FFC((CGThumbnailListItem_o *)&static_fields->__9__3_0, (int32_t)_9__3_0, v8, v9);
  }
  v10 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__long_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)servantInfoList,
                                                               (System_Func_TSource__TResult__o *)_9__3_0,
                                                               (const MethodInfo_311E030 *)Method_System_Linq_Enumerable_Select_ItemDroppedSkillShiftInfo_ServantInfo__long___);
  return System_Linq_Enumerable__ToArray_long_(
           v10,
           (const MethodInfo_312726C *)Method_System_Linq_Enumerable_ToArray_long___);
}


System_Int32_array *ItemDroppedSkillShiftInfo__GetUniqueIdArray(
        ItemDroppedSkillShiftInfo_o *this,
        const MethodInfo *method)
{
  ItemDroppedSkillShiftInfo___c_c *v3; // x0
  struct System_Collections_Generic_List_ItemDroppedSkillShiftInfo_ServantInfo__o *servantInfoList; // x19
  System_Func_object__int__o *_9__2_0; // x20
  Il2CppObject *v6; // x21
  struct ItemDroppedSkillShiftInfo___c_StaticFields *static_fields; // x0
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v10; // x0

  if ( (byte_4C45EEE & 1) == 0 )
  {
    sub_1C37058(&Method_System_Linq_Enumerable_Select_ItemDroppedSkillShiftInfo_ServantInfo__int___);
    sub_1C37058(&Method_System_Linq_Enumerable_ToArray_int___);
    sub_1C37058(&System_Func_ItemDroppedSkillShiftInfo_ServantInfo__int__TypeInfo);
    sub_1C37058(&Method_ItemDroppedSkillShiftInfo___c__GetUniqueIdArray_b__2_0__);
    sub_1C37058(&ItemDroppedSkillShiftInfo___c_TypeInfo);
    byte_4C45EEE = 1;
  }
  v3 = ItemDroppedSkillShiftInfo___c_TypeInfo;
  servantInfoList = this->fields.servantInfoList;
  if ( !ItemDroppedSkillShiftInfo___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ItemDroppedSkillShiftInfo___c_TypeInfo);
    v3 = ItemDroppedSkillShiftInfo___c_TypeInfo;
  }
  _9__2_0 = (System_Func_object__int__o *)v3->static_fields->__9__2_0;
  if ( !_9__2_0 )
  {
    if ( !v3->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v3);
      v3 = ItemDroppedSkillShiftInfo___c_TypeInfo;
    }
    v6 = (Il2CppObject *)v3->static_fields->__9;
    _9__2_0 = (System_Func_object__int__o *)sub_1C372A4(System_Func_ItemDroppedSkillShiftInfo_ServantInfo__int__TypeInfo);
    System_Func_object__int____ctor(_9__2_0, v6, Method_ItemDroppedSkillShiftInfo___c__GetUniqueIdArray_b__2_0__, 0);
    static_fields = ItemDroppedSkillShiftInfo___c_TypeInfo->static_fields;
    static_fields->__9__2_0 = (struct System_Func_ItemDroppedSkillShiftInfo_ServantInfo__int__o *)_9__2_0;
    sub_1C36FFC((CGThumbnailListItem_o *)&static_fields->__9__2_0, (int32_t)_9__2_0, v8, v9);
  }
  v10 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__int_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)servantInfoList,
                                                               (System_Func_TSource__TResult__o *)_9__2_0,
                                                               (const MethodInfo_311DA48 *)Method_System_Linq_Enumerable_Select_ItemDroppedSkillShiftInfo_ServantInfo__int___);
  return System_Linq_Enumerable__ToArray_int_(
           v10,
           (const MethodInfo_312715C *)Method_System_Linq_Enumerable_ToArray_int___);
}


bool ItemDroppedSkillShiftInfo__HasUniqueId(
        ItemDroppedSkillShiftInfo_o *this,
        int32_t uniqueId,
        const MethodInfo *method)
{
  __int64 v5; // x21
  __int64 v6; // x0
  System_Collections_Generic_List_T__o *servantInfoList; // x19
  System_Func_object__bool__o *v8; // x20

  if ( (byte_4C45EF0 & 1) == 0 )
  {
    sub_1C37058(&Method_BasicHelper_Any_ItemDroppedSkillShiftInfo_ServantInfo___);
    sub_1C37058(&System_Func_ItemDroppedSkillShiftInfo_ServantInfo__bool__TypeInfo);
    sub_1C37058(&Method_ItemDroppedSkillShiftInfo___c__DisplayClass4_0__HasUniqueId_b__0__);
    sub_1C37058(&ItemDroppedSkillShiftInfo___c__DisplayClass4_0_TypeInfo);
    byte_4C45EF0 = 1;
  }
  v5 = sub_1C372A4(ItemDroppedSkillShiftInfo___c__DisplayClass4_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    sub_1C372B4(v6);
  *(_DWORD *)(v5 + 16) = uniqueId;
  servantInfoList = (System_Collections_Generic_List_T__o *)this->fields.servantInfoList;
  v8 = (System_Func_object__bool__o *)sub_1C372A4(System_Func_ItemDroppedSkillShiftInfo_ServantInfo__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v8,
    (Il2CppObject *)v5,
    Method_ItemDroppedSkillShiftInfo___c__DisplayClass4_0__HasUniqueId_b__0__,
    0);
  return BasicHelper__Any_object_(
           servantInfoList,
           (System_Func_T__bool__o *)v8,
           (const MethodInfo_30D0FF8 *)Method_BasicHelper_Any_ItemDroppedSkillShiftInfo_ServantInfo___);
}


bool ItemDroppedSkillShiftInfo__IsSaveDataAvailable(
        ItemDroppedSkillShiftInfo_o *this,
        BattleData_SaveData_o *saveData,
        const MethodInfo *method)
{
  struct System_Int32_array *skillShiftUniqueIds; // x8
  struct System_Int64_array *skillShiftNpcSvtIds; // x9

  if ( !saveData )
    sub_1C372B4(this);
  skillShiftUniqueIds = saveData->fields.skillShiftUniqueIds;
  return skillShiftUniqueIds
      && (skillShiftNpcSvtIds = saveData->fields.skillShiftNpcSvtIds) != 0
      && LODWORD(skillShiftUniqueIds->max_length) == LODWORD(skillShiftNpcSvtIds->max_length);
}


void ItemDroppedSkillShiftInfo__Register(
        ItemDroppedSkillShiftInfo_o *this,
        BattleServantData_o *svtData,
        const MethodInfo *method)
{
  _BOOL8 HasUniqueId; // x0
  struct BattleDeckServantData_o *deckSvt; // x8
  __int64 dropInfos_low; // x22
  System_Collections_Generic_List_object__o *servantInfoList; // x19
  int32_t uniqueId; // w21
  __int64 v10; // x20
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  struct System_Object_array *items; // x8
  _QWORD *v14; // x9
  __int64 size; // x10
  Il2CppClass **v16; // x0

  if ( (byte_4C45EF1 & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_List_ItemDroppedSkillShiftInfo_ServantInfo__Add__);
    sub_1C37058(&ItemDroppedSkillShiftInfo_ServantInfo_TypeInfo);
    byte_4C45EF1 = 1;
  }
  if ( svtData )
  {
    if ( svtData->fields._IsChangeDropItemByShift_k__BackingField )
    {
      HasUniqueId = ItemDroppedSkillShiftInfo__HasUniqueId(this, svtData->fields.uniqueId, method);
      if ( !HasUniqueId )
      {
        deckSvt = svtData->fields.deckSvt;
        if ( !deckSvt )
          goto LABEL_13;
        dropInfos_low = SLODWORD(deckSvt->fields.dropInfos);
        servantInfoList = (System_Collections_Generic_List_object__o *)this->fields.servantInfoList;
        uniqueId = svtData->fields.uniqueId;
        v10 = sub_1C372A4(ItemDroppedSkillShiftInfo_ServantInfo_TypeInfo);
        System_Object___ctor((Il2CppObject *)v10, 0);
        *(_DWORD *)(v10 + 16) = uniqueId;
        *(_QWORD *)(v10 + 24) = dropInfos_low;
        if ( !servantInfoList
          || (items = servantInfoList->fields._items,
              v14 = Method_System_Collections_Generic_List_ItemDroppedSkillShiftInfo_ServantInfo__Add__,
              ++servantInfoList->fields._version,
              !items) )
        {
LABEL_13:
          sub_1C372B4(HasUniqueId);
        }
        size = servantInfoList->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            servantInfoList,
            (Il2CppObject *)v10,
            *(const MethodInfo_37A3024 **)(*(_QWORD *)(v14[4] + 192LL) + 112LL));
        }
        else
        {
          v16 = &items->obj.klass + size;
          servantInfoList->fields._size = size + 1;
          v16[4] = (Il2CppClass *)v10;
          sub_1C36FFC((CGThumbnailListItem_o *)(v16 + 4), v10, v11, v12);
        }
      }
    }
  }
}


void ItemDroppedSkillShiftInfo__SetSaveData(
        ItemDroppedSkillShiftInfo_o *this,
        BattleData_SaveData_o *saveData,
        const MethodInfo *method)
{
  ItemDroppedSkillShiftInfo_o *v4; // x20
  struct System_Int32_array *skillShiftUniqueIds; // x8
  struct System_Int64_array *skillShiftNpcSvtIds; // x9
  il2cpp_array_size_t max_length; // x10
  unsigned int v8; // w9
  unsigned __int64 v9; // x23
  struct System_Int64_array *v10; // x9
  System_Collections_Generic_List_object__o *servantInfoList; // x21
  int32_t v12; // w26
  int64_t v13; // x27
  __int64 v14; // x22
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  struct System_Object_array *items; // x8
  _QWORD *v18; // x9
  __int64 size; // x10
  Il2CppClass **v20; // x0

  v4 = this;
  if ( (byte_4C45EF2 & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_List_ItemDroppedSkillShiftInfo_ServantInfo__Add__);
    this = (ItemDroppedSkillShiftInfo_o *)sub_1C37058(&ItemDroppedSkillShiftInfo_ServantInfo_TypeInfo);
    byte_4C45EF2 = 1;
  }
  if ( !saveData )
    goto LABEL_20;
  skillShiftUniqueIds = saveData->fields.skillShiftUniqueIds;
  if ( skillShiftUniqueIds )
  {
    skillShiftNpcSvtIds = saveData->fields.skillShiftNpcSvtIds;
    if ( skillShiftNpcSvtIds )
    {
      max_length = skillShiftUniqueIds->max_length;
      if ( (_DWORD)max_length == LODWORD(skillShiftNpcSvtIds->max_length) )
      {
        v8 = skillShiftUniqueIds->max_length;
        if ( (int)max_length >= 1 )
        {
          v9 = 0;
          while ( 1 )
          {
            if ( v9 >= v8 )
              goto LABEL_21;
            v10 = saveData->fields.skillShiftNpcSvtIds;
            if ( !v10 )
              break;
            if ( v9 >= LODWORD(v10->max_length) )
LABEL_21:
              sub_1C372BC(this);
            servantInfoList = (System_Collections_Generic_List_object__o *)v4->fields.servantInfoList;
            v12 = skillShiftUniqueIds->m_Items[v9];
            v13 = v10->m_Items[v9];
            v14 = sub_1C372A4(ItemDroppedSkillShiftInfo_ServantInfo_TypeInfo);
            System_Object___ctor((Il2CppObject *)v14, 0);
            *(_DWORD *)(v14 + 16) = v12;
            *(_QWORD *)(v14 + 24) = v13;
            if ( !servantInfoList )
              break;
            items = servantInfoList->fields._items;
            v18 = Method_System_Collections_Generic_List_ItemDroppedSkillShiftInfo_ServantInfo__Add__;
            ++servantInfoList->fields._version;
            if ( !items )
              break;
            size = servantInfoList->fields._size;
            if ( (unsigned int)size >= LODWORD(items->max_length) )
            {
              System_Collections_Generic_List_object___AddWithResize(
                servantInfoList,
                (Il2CppObject *)v14,
                *(const MethodInfo_37A3024 **)(*(_QWORD *)(v18[4] + 192LL) + 112LL));
            }
            else
            {
              v20 = &items->obj.klass + size;
              servantInfoList->fields._size = size + 1;
              v20[4] = (Il2CppClass *)v14;
              sub_1C36FFC((CGThumbnailListItem_o *)(v20 + 4), v14, v15, v16);
            }
            skillShiftUniqueIds = saveData->fields.skillShiftUniqueIds;
            if ( !skillShiftUniqueIds )
              break;
            v8 = skillShiftUniqueIds->max_length;
            if ( (__int64)++v9 >= (int)v8 )
              return;
          }
LABEL_20:
          sub_1C372B4(this);
        }
      }
    }
  }
}


void ItemDroppedSkillShiftInfo_ServantInfo___ctor(
        ItemDroppedSkillShiftInfo_ServantInfo_o *this,
        int32_t uniqueId,
        int64_t shiftNpcId,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields._uniqueId_k__BackingField = uniqueId;
  this->fields._npcSvtId_k__BackingField = shiftNpcId;
}


int64_t ItemDroppedSkillShiftInfo_ServantInfo__get_npcSvtId(
        ItemDroppedSkillShiftInfo_ServantInfo_o *this,
        const MethodInfo *method)
{
  return this->fields._npcSvtId_k__BackingField;
}


int32_t ItemDroppedSkillShiftInfo_ServantInfo__get_uniqueId(
        ItemDroppedSkillShiftInfo_ServantInfo_o *this,
        const MethodInfo *method)
{
  return this->fields._uniqueId_k__BackingField;
}


void ItemDroppedSkillShiftInfo_ServantInfo__set_npcSvtId(
        ItemDroppedSkillShiftInfo_ServantInfo_o *this,
        int64_t value,
        const MethodInfo *method)
{
  this->fields._npcSvtId_k__BackingField = value;
}


void ItemDroppedSkillShiftInfo_ServantInfo__set_uniqueId(
        ItemDroppedSkillShiftInfo_ServantInfo_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields._uniqueId_k__BackingField = value;
}


void ItemDroppedSkillShiftInfo___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_4C45EF4 & 1) == 0 )
  {
    sub_1C37058(&ItemDroppedSkillShiftInfo___c_TypeInfo);
    byte_4C45EF4 = 1;
  }
  v1 = (Il2CppObject *)sub_1C372A4(ItemDroppedSkillShiftInfo___c_TypeInfo);
  System_Object___ctor(v1, 0);
  ItemDroppedSkillShiftInfo___c_TypeInfo->static_fields->__9 = (struct ItemDroppedSkillShiftInfo___c_o *)v1;
  sub_1C36FFC((CGThumbnailListItem_o *)ItemDroppedSkillShiftInfo___c_TypeInfo->static_fields, (int32_t)v1, v2, v3);
}


void ItemDroppedSkillShiftInfo___c___ctor(ItemDroppedSkillShiftInfo___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


int64_t ItemDroppedSkillShiftInfo___c___GetNpcSvtIdArray_b__3_0(
        ItemDroppedSkillShiftInfo___c_o *this,
        ItemDroppedSkillShiftInfo_ServantInfo_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C372B4(this);
  return x->fields._npcSvtId_k__BackingField;
}


int32_t ItemDroppedSkillShiftInfo___c___GetUniqueIdArray_b__2_0(
        ItemDroppedSkillShiftInfo___c_o *this,
        ItemDroppedSkillShiftInfo_ServantInfo_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C372B4(this);
  return x->fields._uniqueId_k__BackingField;
}


void ItemDroppedSkillShiftInfo___c__DisplayClass4_0___ctor(
        ItemDroppedSkillShiftInfo___c__DisplayClass4_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool ItemDroppedSkillShiftInfo___c__DisplayClass4_0___HasUniqueId_b__0(
        ItemDroppedSkillShiftInfo___c__DisplayClass4_0_o *this,
        ItemDroppedSkillShiftInfo_ServantInfo_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C372B4(this);
  return x->fields._uniqueId_k__BackingField == this->fields.uniqueId;
}