void __fastcall ItemDroppedSkillShiftInfo___ctor(ItemDroppedSkillShiftInfo_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  System_Collections_Generic_List_object__o *v4; // x20
  int32_t v5; // w2
  const MethodInfo *v6; // x3

  if ( (byte_4B1F342 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_System_Collections_Generic_List_ItemDroppedSkillShiftInfo_ServantInfo___ctor__, method);
    sub_1BCAFF8(&System_Collections_Generic_List_ItemDroppedSkillShiftInfo_ServantInfo__TypeInfo, v3);
    byte_4B1F342 = 1;
  }
  v4 = (System_Collections_Generic_List_object__o *)sub_1BCB244(System_Collections_Generic_List_ItemDroppedSkillShiftInfo_ServantInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v4,
    (const MethodInfo_36B939C *)Method_System_Collections_Generic_List_ItemDroppedSkillShiftInfo_ServantInfo___ctor__);
  this->fields.servantInfoList = (struct System_Collections_Generic_List_ItemDroppedSkillShiftInfo_ServantInfo__o *)v4;
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields, (int32_t)v4, v5, v6);
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


System_Int64_array *__fastcall ItemDroppedSkillShiftInfo__GetNpcSvtIdArray(
        ItemDroppedSkillShiftInfo_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  ItemDroppedSkillShiftInfo___c_c *v7; // x0
  struct System_Collections_Generic_List_ItemDroppedSkillShiftInfo_ServantInfo__o *servantInfoList; // x19
  System_Func_T__TResult__o *_9__3_0; // x20
  Il2CppObject *v10; // x21
  struct ItemDroppedSkillShiftInfo___c_StaticFields *static_fields; // x0
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v14; // x0

  if ( (byte_4B1F33E & 1) == 0 )
  {
    sub_1BCAFF8(&Method_System_Linq_Enumerable_Select_ItemDroppedSkillShiftInfo_ServantInfo__long___, method);
    sub_1BCAFF8(&Method_System_Linq_Enumerable_ToArray_long___, v3);
    sub_1BCAFF8(&System_Func_ItemDroppedSkillShiftInfo_ServantInfo__long__TypeInfo, v4);
    sub_1BCAFF8(&Method_ItemDroppedSkillShiftInfo___c__GetNpcSvtIdArray_b__3_0__, v5);
    sub_1BCAFF8(&ItemDroppedSkillShiftInfo___c_TypeInfo, v6);
    byte_4B1F33E = 1;
  }
  v7 = ItemDroppedSkillShiftInfo___c_TypeInfo;
  servantInfoList = this->fields.servantInfoList;
  if ( !ItemDroppedSkillShiftInfo___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ItemDroppedSkillShiftInfo___c_TypeInfo);
    v7 = ItemDroppedSkillShiftInfo___c_TypeInfo;
  }
  _9__3_0 = (System_Func_T__TResult__o *)v7->static_fields->__9__3_0;
  if ( !_9__3_0 )
  {
    if ( !v7->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v7);
      v7 = ItemDroppedSkillShiftInfo___c_TypeInfo;
    }
    v10 = (Il2CppObject *)v7->static_fields->__9;
    _9__3_0 = (System_Func_T__TResult__o *)sub_1BCB244(System_Func_ItemDroppedSkillShiftInfo_ServantInfo__long__TypeInfo);
    System_Func_object__long____ctor(_9__3_0, v10, Method_ItemDroppedSkillShiftInfo___c__GetNpcSvtIdArray_b__3_0__, 0LL);
    static_fields = ItemDroppedSkillShiftInfo___c_TypeInfo->static_fields;
    static_fields->__9__3_0 = (struct System_Func_ItemDroppedSkillShiftInfo_ServantInfo__long__o *)_9__3_0;
    sub_1BCAF9C((CGThumbnailListItem_o *)&static_fields->__9__3_0, (int32_t)_9__3_0, v12, v13);
  }
  v14 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__long_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)servantInfoList,
                                                               (System_Func_TSource__TResult__o *)_9__3_0,
                                                               (const MethodInfo_304ECD8 *)Method_System_Linq_Enumerable_Select_ItemDroppedSkillShiftInfo_ServantInfo__long___);
  return System_Linq_Enumerable__ToArray_long_(
           v14,
           (const MethodInfo_305723C *)Method_System_Linq_Enumerable_ToArray_long___);
}


System_Int32_array *__fastcall ItemDroppedSkillShiftInfo__GetUniqueIdArray(
        ItemDroppedSkillShiftInfo_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  ItemDroppedSkillShiftInfo___c_c *v7; // x0
  struct System_Collections_Generic_List_ItemDroppedSkillShiftInfo_ServantInfo__o *servantInfoList; // x19
  System_Func_object__int__o *_9__2_0; // x20
  Il2CppObject *v10; // x21
  struct ItemDroppedSkillShiftInfo___c_StaticFields *static_fields; // x0
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v14; // x0

  if ( (byte_4B1F33D & 1) == 0 )
  {
    sub_1BCAFF8(&Method_System_Linq_Enumerable_Select_ItemDroppedSkillShiftInfo_ServantInfo__int___, method);
    sub_1BCAFF8(&Method_System_Linq_Enumerable_ToArray_int___, v3);
    sub_1BCAFF8(&System_Func_ItemDroppedSkillShiftInfo_ServantInfo__int__TypeInfo, v4);
    sub_1BCAFF8(&Method_ItemDroppedSkillShiftInfo___c__GetUniqueIdArray_b__2_0__, v5);
    sub_1BCAFF8(&ItemDroppedSkillShiftInfo___c_TypeInfo, v6);
    byte_4B1F33D = 1;
  }
  v7 = ItemDroppedSkillShiftInfo___c_TypeInfo;
  servantInfoList = this->fields.servantInfoList;
  if ( !ItemDroppedSkillShiftInfo___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ItemDroppedSkillShiftInfo___c_TypeInfo);
    v7 = ItemDroppedSkillShiftInfo___c_TypeInfo;
  }
  _9__2_0 = (System_Func_object__int__o *)v7->static_fields->__9__2_0;
  if ( !_9__2_0 )
  {
    if ( !v7->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v7);
      v7 = ItemDroppedSkillShiftInfo___c_TypeInfo;
    }
    v10 = (Il2CppObject *)v7->static_fields->__9;
    _9__2_0 = (System_Func_object__int__o *)sub_1BCB244(System_Func_ItemDroppedSkillShiftInfo_ServantInfo__int__TypeInfo);
    System_Func_object__int____ctor(_9__2_0, v10, Method_ItemDroppedSkillShiftInfo___c__GetUniqueIdArray_b__2_0__, 0LL);
    static_fields = ItemDroppedSkillShiftInfo___c_TypeInfo->static_fields;
    static_fields->__9__2_0 = (struct System_Func_ItemDroppedSkillShiftInfo_ServantInfo__int__o *)_9__2_0;
    sub_1BCAF9C((CGThumbnailListItem_o *)&static_fields->__9__2_0, (int32_t)_9__2_0, v12, v13);
  }
  v14 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__int_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)servantInfoList,
                                                               (System_Func_TSource__TResult__o *)_9__2_0,
                                                               (const MethodInfo_304E6F0 *)Method_System_Linq_Enumerable_Select_ItemDroppedSkillShiftInfo_ServantInfo__int___);
  return System_Linq_Enumerable__ToArray_int_(
           v14,
           (const MethodInfo_305712C *)Method_System_Linq_Enumerable_ToArray_int___);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall ItemDroppedSkillShiftInfo__HasUniqueId(
        ItemDroppedSkillShiftInfo_o *this,
        int32_t uniqueId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x21
  __int64 v9; // x0
  __int64 v10; // x1
  System_Collections_Generic_List_T__o *servantInfoList; // x19
  System_Func_object__bool__o *v12; // x20

  if ( (byte_4B1F33F & 1) == 0 )
  {
    sub_1BCAFF8(&Method_BasicHelper_Any_ItemDroppedSkillShiftInfo_ServantInfo___, *(_QWORD *)&uniqueId);
    sub_1BCAFF8(&System_Func_ItemDroppedSkillShiftInfo_ServantInfo__bool__TypeInfo, v5);
    sub_1BCAFF8(&Method_ItemDroppedSkillShiftInfo___c__DisplayClass4_0__HasUniqueId_b__0__, v6);
    sub_1BCAFF8(&ItemDroppedSkillShiftInfo___c__DisplayClass4_0_TypeInfo, v7);
    byte_4B1F33F = 1;
  }
  v8 = sub_1BCB244(ItemDroppedSkillShiftInfo___c__DisplayClass4_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v8, 0LL);
  if ( !v8 )
    sub_1BCB254(v9, v10);
  *(_DWORD *)(v8 + 16) = uniqueId;
  servantInfoList = (System_Collections_Generic_List_T__o *)this->fields.servantInfoList;
  v12 = (System_Func_object__bool__o *)sub_1BCB244(System_Func_ItemDroppedSkillShiftInfo_ServantInfo__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v12,
    (Il2CppObject *)v8,
    Method_ItemDroppedSkillShiftInfo___c__DisplayClass4_0__HasUniqueId_b__0__,
    0LL);
  return BasicHelper__Any_object_(
           servantInfoList,
           (System_Func_T__bool__o *)v12,
           (const MethodInfo_3003F1C *)Method_BasicHelper_Any_ItemDroppedSkillShiftInfo_ServantInfo___);
}


bool __fastcall ItemDroppedSkillShiftInfo__IsSaveDataAvailable(
        ItemDroppedSkillShiftInfo_o *this,
        BattleData_SaveData_o *saveData,
        const MethodInfo *method)
{
  struct System_Int32_array *skillShiftUniqueIds; // x8
  struct System_Int64_array *skillShiftNpcSvtIds; // x9

  if ( !saveData )
    sub_1BCB254(this, 0LL);
  skillShiftUniqueIds = saveData->fields.skillShiftUniqueIds;
  return skillShiftUniqueIds
      && (skillShiftNpcSvtIds = saveData->fields.skillShiftNpcSvtIds) != 0LL
      && skillShiftUniqueIds->max_length == skillShiftNpcSvtIds->max_length;
}


void __fastcall ItemDroppedSkillShiftInfo__Register(
        ItemDroppedSkillShiftInfo_o *this,
        BattleServantData_o *svtData,
        const MethodInfo *method)
{
  __int64 v5; // x1
  _BOOL8 HasUniqueId; // x0
  __int64 v7; // x1
  struct BattleDeckServantData_o *deckSvt; // x8
  __int64 dropInfos_low; // x22
  System_Collections_Generic_List_object__o *servantInfoList; // x19
  int32_t uniqueId; // w21
  __int64 v12; // x20
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  struct System_Object_array *items; // x8
  _QWORD *v16; // x9
  __int64 size; // x10
  Il2CppClass **v18; // x0

  if ( (byte_4B1F340 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_System_Collections_Generic_List_ItemDroppedSkillShiftInfo_ServantInfo__Add__, svtData);
    sub_1BCAFF8(&ItemDroppedSkillShiftInfo_ServantInfo_TypeInfo, v5);
    byte_4B1F340 = 1;
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
        v12 = sub_1BCB244(ItemDroppedSkillShiftInfo_ServantInfo_TypeInfo);
        System_Object___ctor((Il2CppObject *)v12, 0LL);
        *(_DWORD *)(v12 + 16) = uniqueId;
        *(_QWORD *)(v12 + 24) = dropInfos_low;
        if ( !servantInfoList
          || (items = servantInfoList->fields._items,
              v16 = Method_System_Collections_Generic_List_ItemDroppedSkillShiftInfo_ServantInfo__Add__,
              ++servantInfoList->fields._version,
              !items) )
        {
LABEL_13:
          sub_1BCB254(HasUniqueId, v7);
        }
        size = servantInfoList->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            servantInfoList,
            (Il2CppObject *)v12,
            *(const MethodInfo_36B9BD0 **)(*(_QWORD *)(v16[4] + 192LL) + 112LL));
        }
        else
        {
          v18 = &items->obj.klass + size;
          servantInfoList->fields._size = size + 1;
          v18[4] = (Il2CppClass *)v12;
          sub_1BCAF9C((CGThumbnailListItem_o *)(v18 + 4), v12, v13, v14);
        }
      }
    }
  }
}


void __fastcall ItemDroppedSkillShiftInfo__SetSaveData(
        ItemDroppedSkillShiftInfo_o *this,
        BattleData_SaveData_o *saveData,
        const MethodInfo *method)
{
  ItemDroppedSkillShiftInfo_o *v4; // x20
  __int64 v5; // x1
  struct System_Int32_array *skillShiftUniqueIds; // x8
  struct System_Int64_array *skillShiftNpcSvtIds; // x9
  __int64 v8; // x10
  il2cpp_array_size_t max_length; // w9
  unsigned __int64 v10; // x23
  struct System_Int64_array *v11; // x9
  System_Collections_Generic_List_object__o *servantInfoList; // x21
  int32_t v13; // w26
  int64_t v14; // x27
  __int64 v15; // x22
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  struct System_Object_array *items; // x8
  _QWORD *v19; // x9
  __int64 size; // x10
  Il2CppClass **v21; // x0

  v4 = this;
  if ( (byte_4B1F341 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_System_Collections_Generic_List_ItemDroppedSkillShiftInfo_ServantInfo__Add__, saveData);
    this = (ItemDroppedSkillShiftInfo_o *)sub_1BCAFF8(&ItemDroppedSkillShiftInfo_ServantInfo_TypeInfo, v5);
    byte_4B1F341 = 1;
  }
  if ( !saveData )
    goto LABEL_20;
  skillShiftUniqueIds = saveData->fields.skillShiftUniqueIds;
  if ( skillShiftUniqueIds )
  {
    skillShiftNpcSvtIds = saveData->fields.skillShiftNpcSvtIds;
    if ( skillShiftNpcSvtIds )
    {
      v8 = *(_QWORD *)&skillShiftUniqueIds->max_length;
      if ( (_DWORD)v8 == skillShiftNpcSvtIds->max_length )
      {
        max_length = *(_QWORD *)&skillShiftUniqueIds->max_length;
        if ( (int)v8 >= 1 )
        {
          v10 = 0LL;
          while ( 1 )
          {
            if ( v10 >= max_length )
              goto LABEL_21;
            v11 = saveData->fields.skillShiftNpcSvtIds;
            if ( !v11 )
              break;
            if ( v10 >= v11->max_length )
LABEL_21:
              sub_1BCB25C(this, saveData, method);
            servantInfoList = (System_Collections_Generic_List_object__o *)v4->fields.servantInfoList;
            v13 = skillShiftUniqueIds->m_Items[v10 + 1];
            v14 = v11->m_Items[v10];
            v15 = sub_1BCB244(ItemDroppedSkillShiftInfo_ServantInfo_TypeInfo);
            System_Object___ctor((Il2CppObject *)v15, 0LL);
            *(_DWORD *)(v15 + 16) = v13;
            *(_QWORD *)(v15 + 24) = v14;
            if ( !servantInfoList )
              break;
            items = servantInfoList->fields._items;
            v19 = Method_System_Collections_Generic_List_ItemDroppedSkillShiftInfo_ServantInfo__Add__;
            ++servantInfoList->fields._version;
            if ( !items )
              break;
            size = servantInfoList->fields._size;
            if ( (unsigned int)size >= items->max_length )
            {
              System_Collections_Generic_List_object___AddWithResize(
                servantInfoList,
                (Il2CppObject *)v15,
                *(const MethodInfo_36B9BD0 **)(*(_QWORD *)(v19[4] + 192LL) + 112LL));
            }
            else
            {
              v21 = &items->obj.klass + size;
              servantInfoList->fields._size = size + 1;
              v21[4] = (Il2CppClass *)v15;
              sub_1BCAF9C((CGThumbnailListItem_o *)(v21 + 4), v15, v16, v17);
            }
            skillShiftUniqueIds = saveData->fields.skillShiftUniqueIds;
            if ( !skillShiftUniqueIds )
              break;
            max_length = skillShiftUniqueIds->max_length;
            if ( (__int64)++v10 >= (int)max_length )
              return;
          }
LABEL_20:
          sub_1BCB254(this, saveData);
        }
      }
    }
  }
}


void __fastcall ItemDroppedSkillShiftInfo_ServantInfo___ctor(
        ItemDroppedSkillShiftInfo_ServantInfo_o *this,
        int32_t uniqueId,
        int64_t shiftNpcId,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields._uniqueId_k__BackingField = uniqueId;
  this->fields._npcSvtId_k__BackingField = shiftNpcId;
}


int64_t __fastcall ItemDroppedSkillShiftInfo_ServantInfo__get_npcSvtId(
        ItemDroppedSkillShiftInfo_ServantInfo_o *this,
        const MethodInfo *method)
{
  return this->fields._npcSvtId_k__BackingField;
}


int32_t __fastcall ItemDroppedSkillShiftInfo_ServantInfo__get_uniqueId(
        ItemDroppedSkillShiftInfo_ServantInfo_o *this,
        const MethodInfo *method)
{
  return this->fields._uniqueId_k__BackingField;
}


void __fastcall ItemDroppedSkillShiftInfo_ServantInfo__set_npcSvtId(
        ItemDroppedSkillShiftInfo_ServantInfo_o *this,
        int64_t value,
        const MethodInfo *method)
{
  this->fields._npcSvtId_k__BackingField = value;
}


void __fastcall ItemDroppedSkillShiftInfo_ServantInfo__set_uniqueId(
        ItemDroppedSkillShiftInfo_ServantInfo_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields._uniqueId_k__BackingField = value;
}


void __fastcall ItemDroppedSkillShiftInfo___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int32_t v3; // w2
  const MethodInfo *v4; // x3

  if ( (byte_4B1F343 & 1) == 0 )
  {
    sub_1BCAFF8(&ItemDroppedSkillShiftInfo___c_TypeInfo, v1);
    byte_4B1F343 = 1;
  }
  v2 = (Il2CppObject *)sub_1BCB244(ItemDroppedSkillShiftInfo___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  ItemDroppedSkillShiftInfo___c_TypeInfo->static_fields->__9 = (struct ItemDroppedSkillShiftInfo___c_o *)v2;
  sub_1BCAF9C((CGThumbnailListItem_o *)ItemDroppedSkillShiftInfo___c_TypeInfo->static_fields, (int32_t)v2, v3, v4);
}


void __fastcall ItemDroppedSkillShiftInfo___c___ctor(ItemDroppedSkillShiftInfo___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


int64_t __fastcall ItemDroppedSkillShiftInfo___c___GetNpcSvtIdArray_b__3_0(
        ItemDroppedSkillShiftInfo___c_o *this,
        ItemDroppedSkillShiftInfo_ServantInfo_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1BCB254(this, 0LL);
  return x->fields._npcSvtId_k__BackingField;
}


int32_t __fastcall ItemDroppedSkillShiftInfo___c___GetUniqueIdArray_b__2_0(
        ItemDroppedSkillShiftInfo___c_o *this,
        ItemDroppedSkillShiftInfo_ServantInfo_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1BCB254(this, 0LL);
  return x->fields._uniqueId_k__BackingField;
}


void __fastcall ItemDroppedSkillShiftInfo___c__DisplayClass4_0___ctor(
        ItemDroppedSkillShiftInfo___c__DisplayClass4_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall ItemDroppedSkillShiftInfo___c__DisplayClass4_0___HasUniqueId_b__0(
        ItemDroppedSkillShiftInfo___c__DisplayClass4_0_o *this,
        ItemDroppedSkillShiftInfo_ServantInfo_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1BCB254(this, 0LL);
  return x->fields._uniqueId_k__BackingField == this->fields.uniqueId;
}