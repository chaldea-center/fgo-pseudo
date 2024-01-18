// local variable allocation has failed, the output may be wrong!
void __fastcall EventMemberMargeUpValInfo___ctor(
        EventMemberMargeUpValInfo_o *this,
        int32_t eventId,
        int32_t member,
        ServantEntity_o *servantEntity,
        System_String_o *servantName,
        bool isFollower,
        const MethodInfo *method)
{
  __int64 v13; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v14; // x25
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  struct System_String_o **p_servantName; // x21
  System_String_array **v28; // x2
  System_String_array **v29; // x3
  System_Boolean_array **v30; // x4
  System_Int32_array **v31; // x5
  System_Int32_array *v32; // x6
  System_Int32_array *v33; // x7

  if ( (byte_4188D9B & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo___ctor__, *(_QWORD *)&eventId);
    sub_B2C35C(&System_Collections_Generic_List_EventMargeItemUpValInfo__TypeInfo, v13);
    byte_4188D9B = 1;
  }
  v14 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_EventMargeItemUpValInfo__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v14,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo___ctor__);
  this->fields.margeList = (struct System_Collections_Generic_List_EventMargeItemUpValInfo__o *)v14;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.margeList,
    (System_Int32_array **)v14,
    v15,
    v16,
    v17,
    v18,
    v19,
    v20);
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.eventId = eventId;
  this->fields.member = member;
  this->fields.servantEntity = servantEntity;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.servantEntity,
    (System_Int32_array **)servantEntity,
    v21,
    v22,
    v23,
    v24,
    v25,
    v26);
  this->fields.servantName = servantName;
  p_servantName = &this->fields.servantName;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)p_servantName,
    (System_Int32_array **)servantName,
    v28,
    v29,
    v30,
    v31,
    v32,
    v33);
  *((_BYTE *)p_servantName + 8) = isFollower;
}


void __fastcall EventMemberMargeUpValInfo__Add(
        EventMemberMargeUpValInfo_o *this,
        EventDropItemUpValInfo_array *dropItemInfoList,
        const MethodInfo *method)
{
  __int64 v3; // x8
  unsigned __int64 v6; // x21
  __int64 v7; // x0

  if ( dropItemInfoList )
  {
    v3 = *(_QWORD *)&dropItemInfoList->max_length;
    if ( (int)v3 >= 1 )
    {
      v6 = 0LL;
      do
      {
        if ( v6 >= (unsigned int)v3 )
        {
          v7 = sub_B2C460(this);
          sub_B2C400(v7, 0LL);
        }
        EventMemberMargeUpValInfo__Add_27189468(this, dropItemInfoList->m_Items[v6], method);
        LODWORD(v3) = dropItemInfoList->max_length;
        ++v6;
      }
      while ( (__int64)v6 < (int)v3 );
    }
  }
}


void __fastcall EventMemberMargeUpValInfo__Add_27189468(
        EventMemberMargeUpValInfo_o *this,
        EventDropItemUpValInfo_o *dropItemInfo,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  int32_t targetType; // w8
  unsigned int baseFuncType; // w8
  int v12; // w9
  struct System_Collections_Generic_List_EventMargeItemUpValInfo__o *margeList; // x0
  _BOOL8 v14; // x0
  __int64 v15; // x1
  EventMargeItemUpValInfo_o *current; // x21
  _BOOL8 v17; // x0
  __int64 v18; // x1
  int v19; // w8
  int32_t v20; // w22
  System_String_o *v21; // x23
  bool v22; // w24
  const MethodInfo *v23; // x6
  int32_t v24; // w10
  int32_t rateCount; // w8
  _BOOL8 v26; // x0
  __int64 v27; // x1
  _BOOL8 v28; // x0
  __int64 v29; // x1
  int32_t member; // w22
  System_String_o *servantName; // x23
  bool isFollower; // w24
  EventMargeItemUpValInfo_o *v33; // x21
  const MethodInfo *v34; // x6
  System_Collections_Generic_List_Enumerator_T__o v35[2]; // [xsp+0h] [xbp-90h] BYREF
  int v36; // [xsp+38h] [xbp-58h]
  System_Collections_Generic_List_Enumerator_T__o v37; // [xsp+40h] [xbp-50h] BYREF

  if ( (byte_4188D9F & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_EventMargeItemUpValInfo__Dispose__, dropItemInfo);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_EventMargeItemUpValInfo__MoveNext__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_EventMargeItemUpValInfo__get_Current__, v6);
    sub_B2C35C(&EventMargeItemUpValInfo_TypeInfo, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Add__, v8);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo__GetEnumerator__, v9);
    byte_4188D9F = 1;
  }
  memset(&v37, 0, sizeof(v37));
  v36 = 0;
  if ( dropItemInfo && dropItemInfo->fields.eventId == this->fields.eventId )
  {
    targetType = dropItemInfo->fields.targetType;
    if ( targetType <= 3 )
    {
      if ( targetType )
      {
        if ( targetType != 3 )
          return;
      }
      else if ( this->fields.member != dropItemInfo->fields.member )
      {
        return;
      }
    }
    else if ( targetType != 7 && targetType != 14 )
    {
      return;
    }
    baseFuncType = dropItemInfo->fields.baseFuncType;
    if ( baseFuncType - 111 <= 0x15 )
    {
      v12 = 1 << (baseFuncType - 111);
      if ( (v12 & 0x240001) != 0 )
        goto LABEL_24;
      if ( (v12 & 0x18) != 0 )
      {
        margeList = this->fields.margeList;
        if ( !margeList )
          goto LABEL_74;
        System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
          v35,
          (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)margeList,
          (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo__GetEnumerator__);
        v37 = v35[0];
        while ( 1 )
        {
          v14 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                  &v37,
                  (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_EventMargeItemUpValInfo__MoveNext__);
          if ( !v14 )
            break;
          current = (EventMargeItemUpValInfo_o *)v37.fields.current;
          if ( !v37.fields.current )
            sub_B2C434(v14, v15);
          if ( LODWORD(v37.fields.current[3].monitor) == dropItemInfo->fields.baseFuncId )
            goto LABEL_35;
        }
        current = 0LL;
LABEL_35:
        *((_DWORD *)&v35[1].fields.list + v36++) = 382;
        System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
          &v37,
          (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_EventMargeItemUpValInfo__Dispose__);
        if ( !v36 )
          goto LABEL_38;
        v19 = v36 - 1;
        if ( *((_DWORD *)&v35[0].fields.current + v36 + 1) != 382 )
          goto LABEL_38;
        goto LABEL_37;
      }
    }
    if ( baseFuncType > 0x10 || ((1 << baseFuncType) & 0x10082) == 0 )
    {
      margeList = this->fields.margeList;
      if ( !margeList )
        goto LABEL_74;
      if ( baseFuncType == 116 )
      {
        System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
          v35,
          (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)margeList,
          (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo__GetEnumerator__);
        v37 = v35[0];
        while ( 1 )
        {
          v26 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                  &v37,
                  (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_EventMargeItemUpValInfo__MoveNext__);
          if ( !v26 )
            break;
          current = (EventMargeItemUpValInfo_o *)v37.fields.current;
          if ( !v37.fields.current )
            sub_B2C434(v26, v27);
          if ( LODWORD(v37.fields.current[3].monitor) == dropItemInfo->fields.baseFuncId
            && v37.fields.current[5].klass == (Il2CppClass *)dropItemInfo->fields.itemEntity )
          {
            goto LABEL_59;
          }
        }
        current = 0LL;
LABEL_59:
        *((_DWORD *)&v35[1].fields.list + v36++) = 567;
        System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
          &v37,
          (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_EventMargeItemUpValInfo__Dispose__);
        if ( v36 && *((_DWORD *)&v35[0].fields.current + v36 + 1) == 567 )
          --v36;
        if ( current )
        {
          rateCount = dropItemInfo->fields.rateCount;
          if ( current->fields.rateCount <= rateCount )
            return;
LABEL_42:
          current->fields.rateCount = rateCount;
          return;
        }
        member = this->fields.member;
        servantName = this->fields.servantName;
        isFollower = this->fields.isFollower;
        v33 = (EventMargeItemUpValInfo_o *)sub_B2C42C(EventMargeItemUpValInfo_TypeInfo);
        EventMargeItemUpValInfo___ctor_27173532(v33, member, servantName, isFollower, 0, dropItemInfo, v34);
        if ( v33 )
        {
          v33->fields.rateCount = dropItemInfo->fields.rateCount;
          margeList = this->fields.margeList;
          if ( margeList )
          {
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
              (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)margeList,
              (EventMissionProgressRequest_Argument_ProgressData_o *)v33,
              (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Add__);
            return;
          }
        }
LABEL_74:
        sub_B2C434(margeList, dropItemInfo);
      }
      System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
        v35,
        (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)margeList,
        (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo__GetEnumerator__);
      v37 = v35[0];
      while ( 1 )
      {
        v28 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                &v37,
                (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_EventMargeItemUpValInfo__MoveNext__);
        if ( !v28 )
          break;
        current = (EventMargeItemUpValInfo_o *)v37.fields.current;
        if ( !v37.fields.current )
          sub_B2C434(v28, v29);
        if ( LODWORD(v37.fields.current[3].monitor) == dropItemInfo->fields.baseFuncId
          && v37.fields.current[5].klass == (Il2CppClass *)dropItemInfo->fields.itemEntity )
        {
          goto LABEL_66;
        }
      }
      current = 0LL;
LABEL_66:
      *((_DWORD *)&v35[1].fields.list + v36++) = 744;
      System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
        &v37,
        (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_EventMargeItemUpValInfo__Dispose__);
      if ( !v36 || (v19 = v36 - 1, *((_DWORD *)&v35[0].fields.current + v36 + 1) != 744) )
      {
LABEL_38:
        if ( current
          || (v20 = this->fields.member,
              v21 = this->fields.servantName,
              v22 = this->fields.isFollower,
              current = (EventMargeItemUpValInfo_o *)sub_B2C42C(EventMargeItemUpValInfo_TypeInfo),
              EventMargeItemUpValInfo___ctor_27173532(current, v20, v21, v22, 0, dropItemInfo, v23),
              (margeList = this->fields.margeList) != 0LL)
          && (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)margeList,
                (EventMissionProgressRequest_Argument_ProgressData_o *)current,
                (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Add__),
              current) )
        {
          v24 = current->fields.rateCount;
          current->fields.addCount += dropItemInfo->fields.addCount;
          rateCount = dropItemInfo->fields.rateCount + v24;
          goto LABEL_42;
        }
        goto LABEL_74;
      }
LABEL_37:
      v36 = v19;
      goto LABEL_38;
    }
LABEL_24:
    margeList = this->fields.margeList;
    if ( !margeList )
      goto LABEL_74;
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      v35,
      (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)margeList,
      (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo__GetEnumerator__);
    v37 = v35[0];
    while ( 1 )
    {
      v17 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v37,
              (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_EventMargeItemUpValInfo__MoveNext__);
      if ( !v17 )
        break;
      current = (EventMargeItemUpValInfo_o *)v37.fields.current;
      if ( !v37.fields.current )
        sub_B2C434(v17, v18);
      if ( LODWORD(v37.fields.current[3].monitor) == dropItemInfo->fields.baseFuncId )
        goto LABEL_31;
    }
    current = 0LL;
LABEL_31:
    *((_DWORD *)&v35[1].fields.list + v36++) = 207;
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v37,
      (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_EventMargeItemUpValInfo__Dispose__);
    if ( !v36 )
      goto LABEL_38;
    v19 = v36 - 1;
    if ( *((_DWORD *)&v35[0].fields.current + v36 + 1) != 207 )
      goto LABEL_38;
    goto LABEL_37;
  }
}


int32_t __fastcall EventMemberMargeUpValInfo__GetCount(EventMemberMargeUpValInfo_o *this, const MethodInfo *method)
{
  EventMemberMargeUpValInfo_o *v2; // x19
  struct System_Collections_Generic_List_EventMargeItemUpValInfo__o *margeList; // x8

  v2 = this;
  if ( (byte_4188D9D & 1) == 0 )
  {
    this = (EventMemberMargeUpValInfo_o *)sub_B2C35C(
                                            &Method_System_Collections_Generic_List_EventMargeItemUpValInfo__get_Count__,
                                            method);
    byte_4188D9D = 1;
  }
  margeList = v2->fields.margeList;
  if ( !margeList )
    sub_B2C434(this, method);
  return margeList->fields._size;
}


EventMargeItemUpValInfo_array *__fastcall EventMemberMargeUpValInfo__GetList(
        EventMemberMargeUpValInfo_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  struct System_Collections_Generic_List_EventMargeItemUpValInfo__o *margeList; // x20
  void *v9; // x0
  struct EventMemberMargeUpValInfo___c_StaticFields *static_fields; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__12_0; // x21
  Il2CppObject *v12; // x22
  struct EventMemberMargeUpValInfo___c_StaticFields *v13; // x0
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7

  if ( (byte_4188DA0 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Comparison_EventMargeItemUpValInfo___ctor__, method);
    sub_B2C35C(&System_Comparison_EventMargeItemUpValInfo__TypeInfo, v3);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Sort__, v4);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo__ToArray__, v5);
    sub_B2C35C(&Method_EventMemberMargeUpValInfo___c__GetList_b__12_0__, v6);
    sub_B2C35C(&EventMemberMargeUpValInfo___c_TypeInfo, v7);
    byte_4188DA0 = 1;
  }
  margeList = this->fields.margeList;
  v9 = EventMemberMargeUpValInfo___c_TypeInfo;
  if ( (BYTE3(EventMemberMargeUpValInfo___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EventMemberMargeUpValInfo___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventMemberMargeUpValInfo___c_TypeInfo);
    v9 = EventMemberMargeUpValInfo___c_TypeInfo;
  }
  static_fields = (struct EventMemberMargeUpValInfo___c_StaticFields *)*((_QWORD *)v9 + 23);
  _9__12_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)static_fields->__9__12_0;
  if ( !_9__12_0 )
  {
    if ( (*((_BYTE *)v9 + 307) & 4) != 0 && !*((_DWORD *)v9 + 56) )
    {
      j_il2cpp_runtime_class_init_0(v9);
      static_fields = EventMemberMargeUpValInfo___c_TypeInfo->static_fields;
    }
    v12 = (Il2CppObject *)static_fields->__9;
    _9__12_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B2C42C(System_Comparison_EventMargeItemUpValInfo__TypeInfo);
    System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
      _9__12_0,
      v12,
      Method_EventMemberMargeUpValInfo___c__GetList_b__12_0__,
      (const MethodInfo_25D8DF8 *)Method_System_Comparison_EventMargeItemUpValInfo___ctor__);
    v13 = EventMemberMargeUpValInfo___c_TypeInfo->static_fields;
    v13->__9__12_0 = (struct System_Comparison_EventMargeItemUpValInfo__o *)_9__12_0;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&v13->__9__12_0,
      (System_Int32_array **)_9__12_0,
      v14,
      v15,
      v16,
      v17,
      v18,
      v19);
  }
  if ( !margeList
    || (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
          (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)margeList,
          (System_Comparison_T__o *)_9__12_0,
          (const MethodInfo_2EF653C *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Sort__),
        (v9 = this->fields.margeList) == 0LL) )
  {
    sub_B2C434(v9, method);
  }
  return (EventMargeItemUpValInfo_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                            (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v9,
                                            (const MethodInfo_2EF65AC *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
EventMargeItemUpValInfo_o *__fastcall EventMemberMargeUpValInfo__GetMargeItem(
        EventMemberMargeUpValInfo_o *this,
        int32_t index,
        const MethodInfo *method)
{
  EventMemberMargeUpValInfo_o *v4; // x20
  __int64 v5; // x1
  struct System_Collections_Generic_List_EventMargeItemUpValInfo__o *margeList; // x20
  int32_t size; // w8

  v4 = this;
  if ( (byte_4188D9E & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo__get_Count__, *(_QWORD *)&index);
    this = (EventMemberMargeUpValInfo_o *)sub_B2C35C(
                                            &Method_System_Collections_Generic_List_EventMargeItemUpValInfo__get_Item__,
                                            v5);
    byte_4188D9E = 1;
  }
  margeList = v4->fields.margeList;
  if ( !margeList )
    sub_B2C434(this, *(_QWORD *)&index);
  size = margeList->fields._size;
  if ( size <= index )
    return 0LL;
  if ( size <= (unsigned int)index )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
  return margeList->fields._items->m_Items[index];
}


bool __fastcall EventMemberMargeUpValInfo__IsEmpry(EventMemberMargeUpValInfo_o *this, const MethodInfo *method)
{
  EventMemberMargeUpValInfo_o *v2; // x19
  struct System_Collections_Generic_List_EventMargeItemUpValInfo__o *margeList; // x8

  v2 = this;
  if ( (byte_4188D9C & 1) == 0 )
  {
    this = (EventMemberMargeUpValInfo_o *)sub_B2C35C(
                                            &Method_System_Collections_Generic_List_EventMargeItemUpValInfo__get_Count__,
                                            method);
    byte_4188D9C = 1;
  }
  margeList = v2->fields.margeList;
  if ( !margeList )
    sub_B2C434(this, method);
  return margeList->fields._size < 1;
}


void __fastcall EventMemberMargeUpValInfo___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  struct EventMemberMargeUpValInfo___c_StaticFields *static_fields; // x0

  if ( (byte_4184B1F & 1) == 0 )
  {
    sub_B2C35C(&EventMemberMargeUpValInfo___c_TypeInfo, v1);
    byte_4184B1F = 1;
  }
  v2 = (Il2CppObject *)sub_B2C42C(EventMemberMargeUpValInfo___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  static_fields = EventMemberMargeUpValInfo___c_TypeInfo->static_fields;
  static_fields->__9 = (struct EventMemberMargeUpValInfo___c_o *)v2;
  sub_B2C2F8(static_fields, v2);
}


void __fastcall EventMemberMargeUpValInfo___c___ctor(EventMemberMargeUpValInfo___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


int32_t __fastcall EventMemberMargeUpValInfo___c___GetList_b__12_0(
        EventMemberMargeUpValInfo___c_o *this,
        EventMargeItemUpValInfo_o *a,
        EventMargeItemUpValInfo_o *b,
        const MethodInfo *method)
{
  if ( !a )
    sub_B2C434(this, 0LL);
  return EventMargeItemUpValInfo__CompMemberPriority(a, b, 0LL);
}