void WarBoardPartySkillMaster___ctor(WarBoardPartySkillMaster_o *this, const MethodInfo *method)
{
  if ( (byte_5971A86 & 1) == 0 )
  {
    sub_2213A60(&Method_DataMasterBase_WarBoardPartySkillMaster__WarBoardPartySkillEntity__string___ctor__);
    byte_5971A86 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    422,
    (const MethodInfo_3F1339C *)Method_DataMasterBase_WarBoardPartySkillMaster__WarBoardPartySkillEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
WarBoardPartySkillEntity_o *WarBoardPartySkillMaster__GetEntity(
        WarBoardPartySkillMaster_o *this,
        int32_t id,
        int32_t target,
        int32_t num,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_5971A87 & 1) == 0 )
  {
    sub_2213A60(&Method_DataMasterBase_WarBoardPartySkillMaster__WarBoardPartySkillEntity__string__GetEntity__);
    byte_5971A87 = 1;
  }
  PK = (Il2CppObject *)WarBoardPartySkillEntity__CreatePK(id, target, num, *(const MethodInfo **)&num);
  return (WarBoardPartySkillEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                         (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                         PK,
                                         (const MethodInfo_3F157EC *)Method_DataMasterBase_WarBoardPartySkillMaster__WarBoardPartySkillEntity__string__GetEntity__);
}


WarBoardPartySkillEntity_array *WarBoardPartySkillMaster__GetEntityArray(
        WarBoardPartySkillMaster_o *this,
        int32_t id,
        bool isEnemy,
        const MethodInfo *method)
{
  __int64 v7; // x22
  __int64 v8; // x0
  __int64 v9; // x1
  System_Collections_IEnumerable_o *list; // x0
  const MethodInfo_388851C *v11; // x1
  int v12; // w9
  System_Collections_Generic_IEnumerable_TSource__o *v13; // x19
  System_Func_object__bool__o *v14; // x20
  System_Collections_Generic_IEnumerable_TSource__o *v15; // x0

  if ( (byte_5971A88 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Linq_Enumerable_OfType_WarBoardPartySkillEntity___);
    sub_2213A60(&Method_System_Linq_Enumerable_ToArray_WarBoardPartySkillEntity___);
    sub_2213A60(&Method_System_Linq_Enumerable_Where_WarBoardPartySkillEntity___);
    sub_2213A60(&System_Func_WarBoardPartySkillEntity__bool__TypeInfo);
    sub_2213A60(&Method_WarBoardPartySkillMaster___c__DisplayClass2_0__GetEntityArray_b__0__);
    sub_2213A60(&WarBoardPartySkillMaster___c__DisplayClass2_0_TypeInfo);
    byte_5971A88 = 1;
  }
  v7 = sub_2213CCC(WarBoardPartySkillMaster___c__DisplayClass2_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  if ( !v7 )
    sub_2213CDC(v8, v9);
  list = (System_Collections_IEnumerable_o *)this->fields.list;
  v11 = (const MethodInfo_388851C *)Method_System_Linq_Enumerable_OfType_WarBoardPartySkillEntity___;
  if ( isEnemy )
    v12 = 2;
  else
    v12 = 1;
  *(_DWORD *)(v7 + 16) = id;
  *(_DWORD *)(v7 + 20) = v12;
  v13 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OfType_object_(list, v11);
  v14 = (System_Func_object__bool__o *)sub_2213CCC(System_Func_WarBoardPartySkillEntity__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v14,
    (Il2CppObject *)v7,
    Method_WarBoardPartySkillMaster___c__DisplayClass2_0__GetEntityArray_b__0__,
    0);
  v15 = System_Linq_Enumerable__Where_object_(
          v13,
          (System_Func_TSource__bool__o *)v14,
          (const MethodInfo_38A3478 *)Method_System_Linq_Enumerable_Where_WarBoardPartySkillEntity___);
  return (WarBoardPartySkillEntity_array *)System_Linq_Enumerable__ToArray_object_(
                                             v15,
                                             (const MethodInfo_389BB2C *)Method_System_Linq_Enumerable_ToArray_WarBoardPartySkillEntity___);
}


SkillEntity_array *WarBoardPartySkillMaster__GetPartyNumMatchSkillArray(
        WarBoardPartySkillMaster_o *this,
        int32_t partyNum,
        int32_t checkTarget,
        WarBoardPartySkillEntity_array *entityArray,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v8; // x22
  WarBoardPartySkillEntity_o *SkillEntity; // x0
  const MethodInfo *v10; // x1
  int max_length; // w8
  unsigned int v12; // w24
  int32_t target; // w8
  System_String_o *v14; // x2
  System_String_o *v15; // x3
  int32_t v16; // w4
  int32_t v17; // w5
  bool v18; // w6
  bool v19; // w7
  struct System_Object_array *items; // x8
  _QWORD *v21; // x9
  __int64 size; // x10
  WarBoardPartySkillEntity_o *v23; // x1
  Il2CppClass **v24; // x0

  if ( (byte_5971A8A & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_SkillEntity__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_SkillEntity__ToArray__);
    sub_2213A60(&Method_System_Collections_Generic_List_SkillEntity___ctor__);
    sub_2213A60(&System_Collections_Generic_List_SkillEntity__TypeInfo);
    byte_5971A8A = 1;
  }
  v8 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_SkillEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v8,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_SkillEntity___ctor__);
  if ( !entityArray )
    goto LABEL_19;
  max_length = entityArray->max_length;
  if ( max_length >= 1 )
  {
    v12 = 0;
    while ( 1 )
    {
      if ( v12 >= max_length )
        sub_2213CE4(SkillEntity);
      SkillEntity = entityArray->m_Items[v12];
      if ( !SkillEntity )
        break;
      if ( SkillEntity->fields.num == partyNum )
      {
        target = SkillEntity->fields.target;
        if ( target == checkTarget || !target )
        {
          SkillEntity = (WarBoardPartySkillEntity_o *)WarBoardPartySkillEntity__GetSkillEntity(SkillEntity, v10);
          if ( !v8 )
            break;
          items = v8->fields._items;
          v21 = Method_System_Collections_Generic_List_SkillEntity__Add__;
          ++v8->fields._version;
          if ( !items )
            break;
          size = v8->fields._size;
          v23 = SkillEntity;
          if ( (unsigned int)size >= LODWORD(items->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v8,
              (Il2CppObject *)SkillEntity,
              *(const MethodInfo_4483C64 **)(*(_QWORD *)(v21[4] + 192LL) + 112LL));
          }
          else
          {
            v24 = &items->obj.klass + size;
            v8->fields._size = size + 1;
            v24[4] = (Il2CppClass *)v23;
            sub_2213A04((MissionNaviTransitionBoardItem_o *)(v24 + 4), (int32_t)v23, v14, v15, v16, v17, v18, v19);
          }
        }
      }
      max_length = entityArray->max_length;
      if ( (int)++v12 >= max_length )
        goto LABEL_17;
    }
LABEL_19:
    sub_2213CDC(SkillEntity, v10);
  }
LABEL_17:
  if ( !v8 )
    goto LABEL_19;
  return (SkillEntity_array *)System_Collections_Generic_List_object___ToArray(
                                v8,
                                (const MethodInfo_4485784 *)Method_System_Collections_Generic_List_SkillEntity__ToArray__);
}


SkillEntity_o *WarBoardPartySkillMaster__GetPartySkillEntity(
        WarBoardPartySkillMaster_o *this,
        int32_t partySkillId,
        int32_t partyNum,
        bool isEnemy,
        int32_t *maxNum,
        const MethodInfo *method)
{
  __int64 v11; // x20
  __int64 v12; // x0
  __int64 v13; // x1
  const MethodInfo *v14; // x3
  System_Collections_ICollection_o *EntityArray; // x21
  System_Func_object__bool__o *v17; // x22
  WarBoardPartySkillEntity_o *object; // x0
  const MethodInfo *v19; // x1
  int32_t num; // w8
  WarBoardPartySkillMaster___c_c *v21; // x0
  struct WarBoardPartySkillMaster___c_StaticFields *static_fields; // x8
  System_Func_object__int__o *_9__5_1; // x22
  Il2CppObject *v24; // x23
  struct WarBoardPartySkillMaster___c_StaticFields *v25; // x0
  System_String_o *v26; // x2
  System_String_o *v27; // x3
  int32_t v28; // w4
  int32_t v29; // w5
  bool v30; // w6
  bool v31; // w7
  System_Collections_Generic_IEnumerable_TSource__o *v32; // x0

  if ( (byte_5971A8B & 1) == 0 )
  {
    sub_2213A60(&Method_BasicHelper_Find_WarBoardPartySkillEntity___);
    sub_2213A60(&Method_System_Linq_Enumerable_FirstOrDefault_WarBoardPartySkillEntity___);
    sub_2213A60(&Method_System_Linq_Enumerable_OrderByDescending_WarBoardPartySkillEntity__int___);
    sub_2213A60(&System_Func_WarBoardPartySkillEntity__bool__TypeInfo);
    sub_2213A60(&System_Func_WarBoardPartySkillEntity__int__TypeInfo);
    sub_2213A60(&Method_WarBoardPartySkillMaster___c__GetPartySkillEntity_b__5_1__);
    sub_2213A60(&Method_WarBoardPartySkillMaster___c__DisplayClass5_0__GetPartySkillEntity_b__0__);
    sub_2213A60(&WarBoardPartySkillMaster___c__DisplayClass5_0_TypeInfo);
    sub_2213A60(&WarBoardPartySkillMaster___c_TypeInfo);
    byte_5971A8B = 1;
  }
  v11 = sub_2213CCC(WarBoardPartySkillMaster___c__DisplayClass5_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v11, 0);
  if ( !v11 )
    sub_2213CDC(v12, v13);
  *(_DWORD *)(v11 + 16) = partyNum;
  *maxNum = 0;
  EntityArray = (System_Collections_ICollection_o *)WarBoardPartySkillMaster__GetEntityArray(
                                                      this,
                                                      partySkillId,
                                                      isEnemy,
                                                      v14);
  if ( BasicHelper__IsNullOrEmpty(EntityArray, 0) )
    return 0;
  v17 = (System_Func_object__bool__o *)sub_2213CCC(System_Func_WarBoardPartySkillEntity__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v17,
    (Il2CppObject *)v11,
    Method_WarBoardPartySkillMaster___c__DisplayClass5_0__GetPartySkillEntity_b__0__,
    0);
  object = (WarBoardPartySkillEntity_o *)BasicHelper__Find_object_(
                                           (System_Object_array *)EntityArray,
                                           (System_Func_T__bool__o *)v17,
                                           (const MethodInfo_3810A1C *)Method_BasicHelper_Find_WarBoardPartySkillEntity___);
  if ( object )
  {
    num = object->fields.num;
  }
  else
  {
    v21 = WarBoardPartySkillMaster___c_TypeInfo;
    if ( !*(&WarBoardPartySkillMaster___c_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(WarBoardPartySkillMaster___c_TypeInfo, v19);
      v21 = WarBoardPartySkillMaster___c_TypeInfo;
    }
    static_fields = v21->static_fields;
    _9__5_1 = (System_Func_object__int__o *)static_fields->__9__5_1;
    if ( !_9__5_1 )
    {
      if ( !*(&v21->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(v21, v19);
        static_fields = WarBoardPartySkillMaster___c_TypeInfo->static_fields;
      }
      v24 = (Il2CppObject *)static_fields->__9;
      _9__5_1 = (System_Func_object__int__o *)sub_2213CCC(System_Func_WarBoardPartySkillEntity__int__TypeInfo);
      System_Func_object__int____ctor(
        _9__5_1,
        v24,
        Method_WarBoardPartySkillMaster___c__GetPartySkillEntity_b__5_1__,
        0);
      v25 = WarBoardPartySkillMaster___c_TypeInfo->static_fields;
      v25->__9__5_1 = (struct System_Func_WarBoardPartySkillEntity__int__o *)_9__5_1;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)&v25->__9__5_1, (int32_t)_9__5_1, v26, v27, v28, v29, v30, v31);
    }
    v32 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OrderByDescending_object__int_(
                                                                 (System_Collections_Generic_IEnumerable_TSource__o *)EntityArray,
                                                                 (System_Func_TSource__TKey__o *)_9__5_1,
                                                                 (const MethodInfo_38891C4 *)Method_System_Linq_Enumerable_OrderByDescending_WarBoardPartySkillEntity__int___);
    object = (WarBoardPartySkillEntity_o *)System_Linq_Enumerable__FirstOrDefault_object_(
                                             v32,
                                             (const MethodInfo_3881578 *)Method_System_Linq_Enumerable_FirstOrDefault_WarBoardPartySkillEntity___);
    if ( !object )
      return 0;
    num = object->fields.num;
    if ( num >= *(_DWORD *)(v11 + 16) )
      return 0;
  }
  *maxNum = num;
  return WarBoardPartySkillEntity__GetSkillEntity(object, v19);
}


// local variable allocation has failed, the output may be wrong!
SkillEntity_array *WarBoardPartySkillMaster__GetPartySkillEntityArray(
        WarBoardPartySkillMaster_o *this,
        int32_t partySkillId,
        int32_t partyNum,
        bool isEnemy,
        const MethodInfo *method)
{
  System_Collections_ICollection_o *EntityArray; // x20
  _BOOL8 IsNullOrEmpty; // x0
  const MethodInfo *v11; // x4
  SkillEntity_array *v12; // x22
  int32_t v13; // w21
  SkillEntity_array *PartyNumMatchSkillArray; // x0
  __int64 v15; // x1
  WarBoardPartySkillMaster___c_c *v17; // x0
  struct WarBoardPartySkillMaster___c_StaticFields *static_fields; // x8
  System_Func_object__int__o *_9__3_0; // x23
  Il2CppObject *v20; // x24
  struct WarBoardPartySkillMaster___c_StaticFields *v21; // x0
  System_String_o *v22; // x2
  System_String_o *v23; // x3
  int32_t v24; // w4
  int32_t v25; // w5
  bool v26; // w6
  bool v27; // w7
  System_Collections_Generic_IEnumerable_TSource__o *v28; // x0
  Il2CppObject *v29; // x0
  const MethodInfo *v30; // x4
  int32_t monitor; // w1

  if ( (byte_5971A89 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Linq_Enumerable_FirstOrDefault_WarBoardPartySkillEntity___);
    sub_2213A60(&Method_System_Linq_Enumerable_OrderByDescending_WarBoardPartySkillEntity__int___);
    sub_2213A60(&System_Func_WarBoardPartySkillEntity__int__TypeInfo);
    sub_2213A60(&Method_WarBoardPartySkillMaster___c__GetPartySkillEntityArray_b__3_0__);
    sub_2213A60(&WarBoardPartySkillMaster___c_TypeInfo);
    byte_5971A89 = 1;
  }
  EntityArray = (System_Collections_ICollection_o *)WarBoardPartySkillMaster__GetEntityArray(
                                                      this,
                                                      partySkillId,
                                                      isEnemy,
                                                      (const MethodInfo *)isEnemy);
  IsNullOrEmpty = BasicHelper__IsNullOrEmpty(EntityArray, 0);
  v12 = 0;
  if ( IsNullOrEmpty )
    return v12;
  if ( isEnemy )
    v13 = 2;
  else
    v13 = 1;
  PartyNumMatchSkillArray = WarBoardPartySkillMaster__GetPartyNumMatchSkillArray(
                              (WarBoardPartySkillMaster_o *)IsNullOrEmpty,
                              partyNum,
                              v13,
                              (WarBoardPartySkillEntity_array *)EntityArray,
                              v11);
  if ( !PartyNumMatchSkillArray )
    sub_2213CDC(0, v15);
  v12 = PartyNumMatchSkillArray;
  if ( PartyNumMatchSkillArray->max_length )
    return v12;
  v17 = WarBoardPartySkillMaster___c_TypeInfo;
  if ( !*(&WarBoardPartySkillMaster___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(WarBoardPartySkillMaster___c_TypeInfo, v15);
    v17 = WarBoardPartySkillMaster___c_TypeInfo;
  }
  static_fields = v17->static_fields;
  _9__3_0 = (System_Func_object__int__o *)static_fields->__9__3_0;
  if ( !_9__3_0 )
  {
    if ( !*(&v17->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v17, v15);
      static_fields = WarBoardPartySkillMaster___c_TypeInfo->static_fields;
    }
    v20 = (Il2CppObject *)static_fields->__9;
    _9__3_0 = (System_Func_object__int__o *)sub_2213CCC(System_Func_WarBoardPartySkillEntity__int__TypeInfo);
    System_Func_object__int____ctor(
      _9__3_0,
      v20,
      Method_WarBoardPartySkillMaster___c__GetPartySkillEntityArray_b__3_0__,
      0);
    v21 = WarBoardPartySkillMaster___c_TypeInfo->static_fields;
    v21->__9__3_0 = (struct System_Func_WarBoardPartySkillEntity__int__o *)_9__3_0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v21->__9__3_0, (int32_t)_9__3_0, v22, v23, v24, v25, v26, v27);
  }
  v28 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OrderByDescending_object__int_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)EntityArray,
                                                               (System_Func_TSource__TKey__o *)_9__3_0,
                                                               (const MethodInfo_38891C4 *)Method_System_Linq_Enumerable_OrderByDescending_WarBoardPartySkillEntity__int___);
  v29 = System_Linq_Enumerable__FirstOrDefault_object_(
          v28,
          (const MethodInfo_3881578 *)Method_System_Linq_Enumerable_FirstOrDefault_WarBoardPartySkillEntity___);
  if ( !v29 )
    return v12;
  monitor = (int32_t)v29[1].monitor;
  if ( monitor >= partyNum )
    return v12;
  else
    return WarBoardPartySkillMaster__GetPartyNumMatchSkillArray(
             (WarBoardPartySkillMaster_o *)v29,
             monitor,
             v13,
             (WarBoardPartySkillEntity_array *)EntityArray,
             v30);
}


void WarBoardPartySkillMaster___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  if ( (byte_5971A8C & 1) == 0 )
  {
    sub_2213A60(&WarBoardPartySkillMaster___c_TypeInfo);
    byte_5971A8C = 1;
  }
  v1 = (Il2CppObject *)sub_2213CCC(WarBoardPartySkillMaster___c_TypeInfo);
  System_Object___ctor(v1, 0);
  WarBoardPartySkillMaster___c_TypeInfo->static_fields->__9 = (struct WarBoardPartySkillMaster___c_o *)v1;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)WarBoardPartySkillMaster___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void WarBoardPartySkillMaster___c___ctor(WarBoardPartySkillMaster___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


int32_t WarBoardPartySkillMaster___c___GetPartySkillEntityArray_b__3_0(
        WarBoardPartySkillMaster___c_o *this,
        WarBoardPartySkillEntity_o *entity,
        const MethodInfo *method)
{
  if ( !entity )
    sub_2213CDC(this, 0);
  return entity->fields.num;
}


int32_t WarBoardPartySkillMaster___c___GetPartySkillEntity_b__5_1(
        WarBoardPartySkillMaster___c_o *this,
        WarBoardPartySkillEntity_o *entity,
        const MethodInfo *method)
{
  if ( !entity )
    sub_2213CDC(this, 0);
  return entity->fields.num;
}


void WarBoardPartySkillMaster___c__DisplayClass2_0___ctor(
        WarBoardPartySkillMaster___c__DisplayClass2_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool WarBoardPartySkillMaster___c__DisplayClass2_0___GetEntityArray_b__0(
        WarBoardPartySkillMaster___c__DisplayClass2_0_o *this,
        WarBoardPartySkillEntity_o *entity,
        const MethodInfo *method)
{
  int32_t target; // w9

  if ( !entity )
    sub_2213CDC(this, 0);
  if ( entity->fields.id != this->fields.id )
    return 0;
  target = entity->fields.target;
  return target == this->fields.target || target == 0;
}


void WarBoardPartySkillMaster___c__DisplayClass5_0___ctor(
        WarBoardPartySkillMaster___c__DisplayClass5_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool WarBoardPartySkillMaster___c__DisplayClass5_0___GetPartySkillEntity_b__0(
        WarBoardPartySkillMaster___c__DisplayClass5_0_o *this,
        WarBoardPartySkillEntity_o *entity,
        const MethodInfo *method)
{
  if ( !entity )
    sub_2213CDC(this, 0);
  return entity->fields.num == this->fields.partyNum;
}