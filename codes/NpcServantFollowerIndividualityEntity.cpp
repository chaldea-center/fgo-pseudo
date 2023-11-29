void __fastcall NpcServantFollowerIndividualityEntity___ctor(
        NpcServantFollowerIndividualityEntity_o *this,
        const MethodInfo *method)
{
  if ( (byte_40F7F39 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataEntityBase_long___ctor__, method);
    byte_40F7F39 = 1;
  }
  DataEntityBase_long____ctor(
    (DataEntityBase_long__o *)this,
    (const MethodInfo_266F28C *)Method_DataEntityBase_long___ctor__);
}


int64_t __fastcall NpcServantFollowerIndividualityEntity__CreatePrimaryKey(
        NpcServantFollowerIndividualityEntity_o *this,
        const MethodInfo *method)
{
  return this->fields.npcSvtFollowerId;
}


System_Int32_array *__fastcall NpcServantFollowerIndividualityEntity__GetAddIndividuality(
        NpcServantFollowerIndividualityEntity_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  System_Collections_Generic_List_int__o *v9; // x19
  __int64 v10; // x0
  __int64 v11; // x1
  __int64 v12; // x2
  struct System_Int32_array *individuality; // x20
  __int64 v14; // x8
  unsigned __int64 v15; // x21

  if ( (byte_40F7F37 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_int__Add__, method);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__ToArray__, v6);
    sub_B16FFC(&Method_System_Collections_Generic_List_int___ctor__, v7);
    sub_B16FFC(&System_Collections_Generic_List_int__TypeInfo, v8);
    byte_40F7F37 = 1;
  }
  v9 = (System_Collections_Generic_List_int__o *)sub_B170CC(
                                                   System_Collections_Generic_List_int__TypeInfo,
                                                   method,
                                                   v2,
                                                   v3,
                                                   v4);
  System_Collections_Generic_List_int____ctor(
    v9,
    (const MethodInfo_2F0F794 *)Method_System_Collections_Generic_List_int___ctor__);
  individuality = this->fields.individuality;
  if ( !individuality )
    goto LABEL_14;
  v14 = *(_QWORD *)&individuality->max_length;
  if ( (int)v14 >= 1 )
  {
    v15 = 0LL;
    do
    {
      if ( v15 >= (unsigned int)v14 )
      {
        sub_B17100(v10, v11, v12);
        sub_B170A0();
      }
      v11 = (unsigned int)individuality->m_Items[v15 + 1];
      if ( (int)v11 >= 1 )
      {
        if ( !v9 )
          goto LABEL_14;
        System_Collections_Generic_List_int___Add(
          v9,
          v11,
          (const MethodInfo_2F104F0 *)Method_System_Collections_Generic_List_int__Add__);
      }
      LODWORD(v14) = individuality->max_length;
      ++v15;
    }
    while ( (__int64)v15 < (int)v14 );
  }
  if ( !v9 )
LABEL_14:
    sub_B170D4();
  return System_Collections_Generic_List_int___ToArray(
           v9,
           (const MethodInfo_2F125FC *)Method_System_Collections_Generic_List_int__ToArray__);
}


System_Int32_array *__fastcall NpcServantFollowerIndividualityEntity__GetExcludedIndividuality(
        NpcServantFollowerIndividualityEntity_o *this,
        System_Int32_array *individualities,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  System_Collections_Generic_List_int__o *SubIndividuality; // x20
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x3
  __int64 v14; // x4
  System_Collections_Generic_List_int__o *v15; // x21
  _BOOL8 v16; // x0
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x8
  unsigned __int64 v20; // x22
  int32_t *v21; // x23

  if ( (byte_40F7F38 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_int__Add__, individualities);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__Contains__, v5);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__ToArray__, v6);
    sub_B16FFC(&Method_System_Collections_Generic_List_int___ctor__, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__get_Count__, v8);
    sub_B16FFC(&System_Collections_Generic_List_int__TypeInfo, v9);
    byte_40F7F38 = 1;
  }
  SubIndividuality = NpcServantFollowerIndividualityEntity__GetSubIndividuality(
                       this,
                       (const MethodInfo *)individualities);
  v15 = (System_Collections_Generic_List_int__o *)sub_B170CC(
                                                    System_Collections_Generic_List_int__TypeInfo,
                                                    v11,
                                                    v12,
                                                    v13,
                                                    v14);
  System_Collections_Generic_List_int____ctor(
    v15,
    (const MethodInfo_2F0F794 *)Method_System_Collections_Generic_List_int___ctor__);
  if ( !SubIndividuality || SubIndividuality->fields._size < 1 )
    return individualities;
  if ( !individualities )
    goto LABEL_18;
  v19 = *(_QWORD *)&individualities->max_length;
  if ( (int)v19 >= 1 )
  {
    v20 = 0LL;
    v21 = &individualities->m_Items[1];
    do
    {
      if ( v20 >= (unsigned int)v19 )
      {
LABEL_17:
        sub_B17100(v16, v17, v18);
        sub_B170A0();
      }
      v16 = System_Collections_Generic_List_int___Contains(
              SubIndividuality,
              v21[v20],
              (const MethodInfo_2F10944 *)Method_System_Collections_Generic_List_int__Contains__);
      if ( !v16 )
      {
        if ( v20 >= individualities->max_length )
          goto LABEL_17;
        if ( !v15 )
          goto LABEL_18;
        System_Collections_Generic_List_int___Add(
          v15,
          v21[v20],
          (const MethodInfo_2F104F0 *)Method_System_Collections_Generic_List_int__Add__);
      }
      LODWORD(v19) = individualities->max_length;
    }
    while ( (__int64)++v20 < (int)v19 );
  }
  if ( !v15 )
LABEL_18:
    sub_B170D4();
  return System_Collections_Generic_List_int___ToArray(
           v15,
           (const MethodInfo_2F125FC *)Method_System_Collections_Generic_List_int__ToArray__);
}


System_Collections_Generic_List_int__o *__fastcall NpcServantFollowerIndividualityEntity__GetSubIndividuality(
        NpcServantFollowerIndividualityEntity_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  System_Collections_Generic_List_int__o *v9; // x19
  __int64 v10; // x0
  __int64 v11; // x1
  __int64 v12; // x2
  struct System_Int32_array *individuality; // x20
  __int64 v14; // x8
  unsigned __int64 i; // x21
  int32_t v16; // w25

  if ( (byte_40F7F36 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_int__Add__, method);
    sub_B16FFC(&Method_System_Collections_Generic_List_int___ctor__, v6);
    sub_B16FFC(&System_Collections_Generic_List_int__TypeInfo, v7);
    sub_B16FFC(&System_Math_TypeInfo, v8);
    byte_40F7F36 = 1;
  }
  v9 = (System_Collections_Generic_List_int__o *)sub_B170CC(
                                                   System_Collections_Generic_List_int__TypeInfo,
                                                   method,
                                                   v2,
                                                   v3,
                                                   v4);
  System_Collections_Generic_List_int____ctor(
    v9,
    (const MethodInfo_2F0F794 *)Method_System_Collections_Generic_List_int___ctor__);
  individuality = this->fields.individuality;
  if ( !individuality )
LABEL_16:
    sub_B170D4();
  v14 = *(_QWORD *)&individuality->max_length;
  if ( (int)v14 >= 1 )
  {
    for ( i = 0LL; (__int64)i < (int)v14; ++i )
    {
      if ( i >= (unsigned int)v14 )
      {
        sub_B17100(v10, v11, v12);
        sub_B170A0();
      }
      v16 = individuality->m_Items[i + 1];
      if ( (v16 & 0x80000000) != 0 )
      {
        if ( (BYTE3(System_Math_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !System_Math_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
        }
        if ( !v9 )
          goto LABEL_16;
        System_Collections_Generic_List_int___Add(
          v9,
          -v16,
          (const MethodInfo_2F104F0 *)Method_System_Collections_Generic_List_int__Add__);
      }
      LODWORD(v14) = individuality->max_length;
    }
  }
  return v9;
}