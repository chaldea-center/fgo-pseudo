void ItemDroppedSkillShiftInfo___ctor(ItemDroppedSkillShiftInfo_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x20
  System_String_o *v4; // x2
  System_String_o *v5; // x3
  int32_t v6; // w4
  int32_t v7; // w5
  bool v8; // w6
  bool v9; // w7

  if ( (byte_593B6AF & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_ItemDroppedSkillShiftInfo_ServantInfo___ctor__);
    sub_21FFC50(&System_Collections_Generic_List_ItemDroppedSkillShiftInfo_ServantInfo__TypeInfo);
    byte_593B6AF = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_ItemDroppedSkillShiftInfo_ServantInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_ItemDroppedSkillShiftInfo_ServantInfo___ctor__);
  this->fields.servantInfoList = (struct System_Collections_Generic_List_ItemDroppedSkillShiftInfo_ServantInfo__o *)v3;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields, (int32_t)v3, v4, v5, v6, v7, v8, v9);
  System_Object___ctor((Il2CppObject *)this, 0);
}


System_Int64_array *ItemDroppedSkillShiftInfo__GetNpcSvtIdArray(
        ItemDroppedSkillShiftInfo_o *this,
        const MethodInfo *method)
{
  ItemDroppedSkillShiftInfo___c_c *v3; // x0
  struct System_Collections_Generic_List_ItemDroppedSkillShiftInfo_ServantInfo__o *servantInfoList; // x19
  struct ItemDroppedSkillShiftInfo___c_StaticFields *static_fields; // x8
  System_Func_object__long__o *_9__3_0; // x20
  Il2CppObject *v7; // x21
  struct ItemDroppedSkillShiftInfo___c_StaticFields *v8; // x0
  System_String_o *v9; // x2
  System_String_o *v10; // x3
  int32_t v11; // w4
  int32_t v12; // w5
  bool v13; // w6
  bool v14; // w7
  System_Collections_Generic_IEnumerable_TSource__o *v15; // x0

  if ( (byte_593B6AB & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Linq_Enumerable_Select_ItemDroppedSkillShiftInfo_ServantInfo__long___);
    sub_21FFC50(&Method_System_Linq_Enumerable_ToArray_long___);
    sub_21FFC50(&System_Func_ItemDroppedSkillShiftInfo_ServantInfo__long__TypeInfo);
    sub_21FFC50(&Method_ItemDroppedSkillShiftInfo___c__GetNpcSvtIdArray_b__3_0__);
    sub_21FFC50(&ItemDroppedSkillShiftInfo___c_TypeInfo);
    byte_593B6AB = 1;
  }
  v3 = ItemDroppedSkillShiftInfo___c_TypeInfo;
  servantInfoList = this->fields.servantInfoList;
  if ( !*(&ItemDroppedSkillShiftInfo___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(ItemDroppedSkillShiftInfo___c_TypeInfo, method);
    v3 = ItemDroppedSkillShiftInfo___c_TypeInfo;
  }
  static_fields = v3->static_fields;
  _9__3_0 = (System_Func_object__long__o *)static_fields->__9__3_0;
  if ( !_9__3_0 )
  {
    if ( !*(&v3->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v3, method);
      static_fields = ItemDroppedSkillShiftInfo___c_TypeInfo->static_fields;
    }
    v7 = (Il2CppObject *)static_fields->__9;
    _9__3_0 = (System_Func_object__long__o *)sub_21FFEBC(System_Func_ItemDroppedSkillShiftInfo_ServantInfo__long__TypeInfo);
    System_Func_object__long____ctor(_9__3_0, v7, Method_ItemDroppedSkillShiftInfo___c__GetNpcSvtIdArray_b__3_0__, 0);
    v8 = ItemDroppedSkillShiftInfo___c_TypeInfo->static_fields;
    v8->__9__3_0 = (struct System_Func_ItemDroppedSkillShiftInfo_ServantInfo__long__o *)_9__3_0;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v8->__9__3_0, (int32_t)_9__3_0, v9, v10, v11, v12, v13, v14);
  }
  v15 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__long_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)servantInfoList,
                                                               (System_Func_TSource__TResult__o *)_9__3_0,
                                                               (const MethodInfo_385D9DC *)Method_System_Linq_Enumerable_Select_ItemDroppedSkillShiftInfo_ServantInfo__long___);
  return System_Linq_Enumerable__ToArray_long_(
           v15,
           (const MethodInfo_38685DC *)Method_System_Linq_Enumerable_ToArray_long___);
}


System_Int32_array *ItemDroppedSkillShiftInfo__GetUniqueIdArray(
        ItemDroppedSkillShiftInfo_o *this,
        const MethodInfo *method)
{
  ItemDroppedSkillShiftInfo___c_c *v3; // x0
  struct System_Collections_Generic_List_ItemDroppedSkillShiftInfo_ServantInfo__o *servantInfoList; // x19
  struct ItemDroppedSkillShiftInfo___c_StaticFields *static_fields; // x8
  System_Func_object__int__o *_9__2_0; // x20
  Il2CppObject *v7; // x21
  struct ItemDroppedSkillShiftInfo___c_StaticFields *v8; // x0
  System_String_o *v9; // x2
  System_String_o *v10; // x3
  int32_t v11; // w4
  int32_t v12; // w5
  bool v13; // w6
  bool v14; // w7
  System_Collections_Generic_IEnumerable_TSource__o *v15; // x0

  if ( (byte_593B6AA & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Linq_Enumerable_Select_ItemDroppedSkillShiftInfo_ServantInfo__int___);
    sub_21FFC50(&Method_System_Linq_Enumerable_ToArray_int___);
    sub_21FFC50(&System_Func_ItemDroppedSkillShiftInfo_ServantInfo__int__TypeInfo);
    sub_21FFC50(&Method_ItemDroppedSkillShiftInfo___c__GetUniqueIdArray_b__2_0__);
    sub_21FFC50(&ItemDroppedSkillShiftInfo___c_TypeInfo);
    byte_593B6AA = 1;
  }
  v3 = ItemDroppedSkillShiftInfo___c_TypeInfo;
  servantInfoList = this->fields.servantInfoList;
  if ( !*(&ItemDroppedSkillShiftInfo___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(ItemDroppedSkillShiftInfo___c_TypeInfo, method);
    v3 = ItemDroppedSkillShiftInfo___c_TypeInfo;
  }
  static_fields = v3->static_fields;
  _9__2_0 = (System_Func_object__int__o *)static_fields->__9__2_0;
  if ( !_9__2_0 )
  {
    if ( !*(&v3->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v3, method);
      static_fields = ItemDroppedSkillShiftInfo___c_TypeInfo->static_fields;
    }
    v7 = (Il2CppObject *)static_fields->__9;
    _9__2_0 = (System_Func_object__int__o *)sub_21FFEBC(System_Func_ItemDroppedSkillShiftInfo_ServantInfo__int__TypeInfo);
    System_Func_object__int____ctor(_9__2_0, v7, Method_ItemDroppedSkillShiftInfo___c__GetUniqueIdArray_b__2_0__, 0);
    v8 = ItemDroppedSkillShiftInfo___c_TypeInfo->static_fields;
    v8->__9__2_0 = (struct System_Func_ItemDroppedSkillShiftInfo_ServantInfo__int__o *)_9__2_0;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v8->__9__2_0, (int32_t)_9__2_0, v9, v10, v11, v12, v13, v14);
  }
  v15 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__int_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)servantInfoList,
                                                               (System_Func_TSource__TResult__o *)_9__2_0,
                                                               (const MethodInfo_385D394 *)Method_System_Linq_Enumerable_Select_ItemDroppedSkillShiftInfo_ServantInfo__int___);
  return System_Linq_Enumerable__ToArray_int_(
           v15,
           (const MethodInfo_38684CC *)Method_System_Linq_Enumerable_ToArray_int___);
}


bool ItemDroppedSkillShiftInfo__HasUniqueId(
        ItemDroppedSkillShiftInfo_o *this,
        int32_t uniqueId,
        const MethodInfo *method)
{
  __int64 v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  System_Collections_Generic_List_T__o *servantInfoList; // x20
  System_Func_object__bool__o *v9; // x19

  if ( (byte_593B6AC & 1) == 0 )
  {
    sub_21FFC50(&Method_BasicHelper_Any_ItemDroppedSkillShiftInfo_ServantInfo___);
    sub_21FFC50(&System_Func_ItemDroppedSkillShiftInfo_ServantInfo__bool__TypeInfo);
    sub_21FFC50(&Method_ItemDroppedSkillShiftInfo___c__DisplayClass4_0__HasUniqueId_b__0__);
    sub_21FFC50(&ItemDroppedSkillShiftInfo___c__DisplayClass4_0_TypeInfo);
    byte_593B6AC = 1;
  }
  v5 = sub_21FFEBC(ItemDroppedSkillShiftInfo___c__DisplayClass4_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    sub_21FFECC(v6, v7);
  servantInfoList = (System_Collections_Generic_List_T__o *)this->fields.servantInfoList;
  *(_DWORD *)(v5 + 16) = uniqueId;
  v9 = (System_Func_object__bool__o *)sub_21FFEBC(System_Func_ItemDroppedSkillShiftInfo_ServantInfo__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v9,
    (Il2CppObject *)v5,
    Method_ItemDroppedSkillShiftInfo___c__DisplayClass4_0__HasUniqueId_b__0__,
    0);
  return BasicHelper__Any_object_(
           servantInfoList,
           (System_Func_T__bool__o *)v9,
           (const MethodInfo_37DCA30 *)Method_BasicHelper_Any_ItemDroppedSkillShiftInfo_ServantInfo___);
}


bool ItemDroppedSkillShiftInfo__IsSaveDataAvailable(
        ItemDroppedSkillShiftInfo_o *this,
        BattleData_SaveData_o *saveData,
        const MethodInfo *method)
{
  struct System_Int32_array *skillShiftUniqueIds; // x8
  struct System_Int64_array *skillShiftNpcSvtIds; // x9

  if ( !saveData )
    sub_21FFECC(this, 0);
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
  __int64 v6; // x1
  struct BattleDeckServantData_o *deckSvt; // x8
  System_Collections_Generic_List_object__o *servantInfoList; // x19
  int32_t uniqueId; // w21
  __int64 dropInfos_low; // x22
  __int64 v11; // x20
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7
  struct System_Object_array *items; // x8
  _QWORD *v19; // x9
  __int64 size; // x10
  Il2CppClass **v21; // x0

  if ( (byte_593B6AD & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_ItemDroppedSkillShiftInfo_ServantInfo__Add__);
    sub_21FFC50(&ItemDroppedSkillShiftInfo_ServantInfo_TypeInfo);
    byte_593B6AD = 1;
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
        servantInfoList = (System_Collections_Generic_List_object__o *)this->fields.servantInfoList;
        uniqueId = svtData->fields.uniqueId;
        dropInfos_low = SLODWORD(deckSvt->fields.dropInfos);
        v11 = sub_21FFEBC(ItemDroppedSkillShiftInfo_ServantInfo_TypeInfo);
        System_Object___ctor((Il2CppObject *)v11, 0);
        *(_DWORD *)(v11 + 16) = uniqueId;
        *(_QWORD *)(v11 + 24) = dropInfos_low;
        if ( !servantInfoList
          || (items = servantInfoList->fields._items,
              v19 = Method_System_Collections_Generic_List_ItemDroppedSkillShiftInfo_ServantInfo__Add__,
              ++servantInfoList->fields._version,
              !items) )
        {
LABEL_13:
          sub_21FFECC(HasUniqueId, v6);
        }
        size = servantInfoList->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            servantInfoList,
            (Il2CppObject *)v11,
            *(const MethodInfo_444FB2C **)(*(_QWORD *)(v19[4] + 192LL) + 112LL));
        }
        else
        {
          v21 = &items->obj.klass + size;
          servantInfoList->fields._size = size + 1;
          v21[4] = (Il2CppClass *)v11;
          sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v21 + 4), v11, v12, v13, v14, v15, v16, v17);
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
  unsigned __int64 v7; // x25
  unsigned __int64 max_length_low; // x9
  struct System_Int64_array *v9; // x9
  System_Collections_Generic_List_object__o *servantInfoList; // x21
  int32_t v11; // w26
  int64_t v12; // x27
  __int64 v13; // x22
  System_String_o *v14; // x2
  System_String_o *v15; // x3
  int32_t v16; // w4
  int32_t v17; // w5
  bool v18; // w6
  bool v19; // w7
  struct System_Object_array *items; // x8
  _QWORD *v21; // x9
  __int64 size; // x10
  Il2CppClass **v23; // x0

  v4 = this;
  if ( (byte_593B6AE & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_ItemDroppedSkillShiftInfo_ServantInfo__Add__);
    this = (ItemDroppedSkillShiftInfo_o *)sub_21FFC50(&ItemDroppedSkillShiftInfo_ServantInfo_TypeInfo);
    byte_593B6AE = 1;
  }
  if ( !saveData )
LABEL_18:
    sub_21FFECC(this, saveData);
  skillShiftUniqueIds = saveData->fields.skillShiftUniqueIds;
  if ( skillShiftUniqueIds )
  {
    skillShiftNpcSvtIds = saveData->fields.skillShiftNpcSvtIds;
    if ( skillShiftNpcSvtIds )
    {
      if ( LODWORD(skillShiftUniqueIds->max_length) == LODWORD(skillShiftNpcSvtIds->max_length) )
      {
        v7 = 0;
        while ( 1 )
        {
          max_length_low = LODWORD(skillShiftUniqueIds->max_length);
          if ( (__int64)v7 >= (int)max_length_low )
            break;
          if ( v7 >= max_length_low )
            goto LABEL_20;
          v9 = saveData->fields.skillShiftNpcSvtIds;
          if ( v9 )
          {
            if ( v7 >= LODWORD(v9->max_length) )
LABEL_20:
              sub_21FFED4(this);
            servantInfoList = (System_Collections_Generic_List_object__o *)v4->fields.servantInfoList;
            v11 = skillShiftUniqueIds->m_Items[v7];
            v12 = v9->m_Items[v7];
            v13 = sub_21FFEBC(ItemDroppedSkillShiftInfo_ServantInfo_TypeInfo);
            System_Object___ctor((Il2CppObject *)v13, 0);
            *(_DWORD *)(v13 + 16) = v11;
            *(_QWORD *)(v13 + 24) = v12;
            if ( servantInfoList )
            {
              items = servantInfoList->fields._items;
              v21 = Method_System_Collections_Generic_List_ItemDroppedSkillShiftInfo_ServantInfo__Add__;
              ++servantInfoList->fields._version;
              if ( items )
              {
                size = servantInfoList->fields._size;
                if ( (unsigned int)size >= LODWORD(items->max_length) )
                {
                  System_Collections_Generic_List_object___AddWithResize(
                    servantInfoList,
                    (Il2CppObject *)v13,
                    *(const MethodInfo_444FB2C **)(*(_QWORD *)(v21[4] + 192LL) + 112LL));
                }
                else
                {
                  v23 = &items->obj.klass + size;
                  servantInfoList->fields._size = size + 1;
                  v23[4] = (Il2CppClass *)v13;
                  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v23 + 4), v13, v14, v15, v16, v17, v18, v19);
                }
                skillShiftUniqueIds = saveData->fields.skillShiftUniqueIds;
                ++v7;
                if ( skillShiftUniqueIds )
                  continue;
              }
            }
          }
          goto LABEL_18;
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
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  if ( (byte_593B6B0 & 1) == 0 )
  {
    sub_21FFC50(&ItemDroppedSkillShiftInfo___c_TypeInfo);
    byte_593B6B0 = 1;
  }
  v1 = (Il2CppObject *)sub_21FFEBC(ItemDroppedSkillShiftInfo___c_TypeInfo);
  System_Object___ctor(v1, 0);
  ItemDroppedSkillShiftInfo___c_TypeInfo->static_fields->__9 = (struct ItemDroppedSkillShiftInfo___c_o *)v1;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)ItemDroppedSkillShiftInfo___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
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
    sub_21FFECC(this, 0);
  return x->fields._npcSvtId_k__BackingField;
}


int32_t ItemDroppedSkillShiftInfo___c___GetUniqueIdArray_b__2_0(
        ItemDroppedSkillShiftInfo___c_o *this,
        ItemDroppedSkillShiftInfo_ServantInfo_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_21FFECC(this, 0);
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
    sub_21FFECC(this, 0);
  return x->fields._uniqueId_k__BackingField == this->fields.uniqueId;
}