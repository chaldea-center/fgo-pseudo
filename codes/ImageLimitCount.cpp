void __fastcall ImageLimitCount___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  System_Array_o *v6; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  System_Array_o *v14; // x19
  struct ImageLimitCount_StaticFields *v15; // x0
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  System_Array_o *v22; // x19
  struct ImageLimitCount_StaticFields *v23; // x0
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7
  System_Int32_array **v30; // x0
  __int64 v31; // x1
  System_String_array **v32; // x2
  System_String_array **v33; // x3
  System_Boolean_array **v34; // x4
  System_Int32_array **v35; // x5
  System_Int32_array *v36; // x6
  System_Int32_array *v37; // x7
  unsigned int v38; // w8
  System_Int32_array **v39; // x1
  struct ImageLimitCount_StaticFields *v40; // x0
  __int64 v41; // x0
  System_RuntimeFieldHandle_o v42; // 0:w1.4
  System_RuntimeFieldHandle_o v43; // 0:w1.4
  System_RuntimeFieldHandle_o v44; // 0:w1.4

  if ( (byte_4188F69 & 1) == 0 )
  {
    sub_B2C35C(&ImageLimitCount_TypeInfo, v1);
    sub_B2C35C(&int___TypeInfo, v2);
    sub_B2C35C(
      &Field__PrivateImplementationDetails__598CEB271FAC09B40101AAE5910D6939EFC22B105F7DF2AA77795704D4CC7911,
      v3);
    sub_B2C35C(
      &Field__PrivateImplementationDetails__E8845519DB154B41E620A98F949B9EDCEFB1F9060DC8290A9F7D2C3200ABD0CB,
      v4);
    sub_B2C35C(
      &Field__PrivateImplementationDetails__F239810D17032E35383496434C64894FFE055A198BA7CFB907D73BAF26A70F0C,
      v5);
    byte_4188F69 = 1;
  }
  v6 = (System_Array_o *)sub_B2C374(int___TypeInfo, 5LL);
  v42.fields.value = Field__PrivateImplementationDetails__598CEB271FAC09B40101AAE5910D6939EFC22B105F7DF2AA77795704D4CC7911;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_43133304(v6, v42, 0LL);
  static_fields = (BattleServantConfConponent_o *)ImageLimitCount_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v6;
  sub_B2C2F8(static_fields, (System_Int32_array **)v6, v8, v9, v10, v11, v12, v13);
  v14 = (System_Array_o *)sub_B2C374(int___TypeInfo, 4LL);
  v43.fields.value = Field__PrivateImplementationDetails__F239810D17032E35383496434C64894FFE055A198BA7CFB907D73BAF26A70F0C;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_43133304(v14, v43, 0LL);
  v15 = ImageLimitCount_TypeInfo->static_fields;
  v15->minLimitCountList = (struct System_Int32_array *)v14;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&v15->minLimitCountList,
    (System_Int32_array **)v14,
    v16,
    v17,
    v18,
    v19,
    v20,
    v21);
  v22 = (System_Array_o *)sub_B2C374(int___TypeInfo, 4LL);
  v44.fields.value = Field__PrivateImplementationDetails__E8845519DB154B41E620A98F949B9EDCEFB1F9060DC8290A9F7D2C3200ABD0CB;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_43133304(v22, v44, 0LL);
  v23 = ImageLimitCount_TypeInfo->static_fields;
  v23->maxLimitCountList = (struct System_Int32_array *)v22;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&v23->maxLimitCountList,
    (System_Int32_array **)v22,
    v24,
    v25,
    v26,
    v27,
    v28,
    v29);
  v30 = (System_Int32_array **)sub_B2C374(int___TypeInfo, 3LL);
  if ( !v30 )
    sub_B2C434(0LL, v31);
  v38 = *((_DWORD *)v30 + 6);
  v39 = v30;
  if ( v38 <= 1 || (*((_DWORD *)v30 + 9) = 2, v38 == 2) )
  {
    v41 = sub_B2C460(v30);
    sub_B2C400(v41, 0LL);
  }
  *((_DWORD *)v30 + 10) = 4;
  v40 = ImageLimitCount_TypeInfo->static_fields;
  v40->maxDispLimitCountList = (struct System_Int32_array *)v39;
  sub_B2C2F8((BattleServantConfConponent_o *)&v40->maxDispLimitCountList, v39, v32, v33, v34, v35, v36, v37);
  ImageLimitCount_TypeInfo->static_fields->enemyLimitCountStart = 101;
}


void __fastcall ImageLimitCount___ctor(ImageLimitCount_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall ImageLimitCount__GetCardImageLimitCount(
        int32_t svtId,
        int32_t limitCount,
        bool isOwn,
        bool isNpc,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  ImageLimitCount_c *v12; // x0
  System_Collections_Generic_Dictionary_int__int__o *limitMaxList; // x0
  int32_t v14; // w22
  Il2CppClass *klass; // x8
  char *v16; // x8
  BalanceConfig_c *v18; // x0
  Il2CppClass *v19; // x8
  __int64 v20; // x0
  int32_t value; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4188F63 & 1) == 0 )
  {
    sub_B2C35C(&BalanceConfig_TypeInfo, *(_QWORD *)&limitCount);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_int__int__TryGetValue__, v9);
    sub_B2C35C(&ImageLimitCount_TypeInfo, v10);
    sub_B2C35C(&OptionManager_TypeInfo, v11);
    byte_4188F63 = 1;
  }
  value = 0;
  if ( (limitCount & 0x80000000) != 0 )
    return 0;
  v12 = ImageLimitCount_TypeInfo;
  if ( (BYTE3(ImageLimitCount_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ImageLimitCount_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
    v12 = ImageLimitCount_TypeInfo;
  }
  limitMaxList = v12->static_fields->limitMaxList;
  if ( !limitMaxList )
    goto LABEL_36;
  if ( !System_Collections_Generic_Dictionary_int__int___TryGetValue(
          limitMaxList,
          svtId,
          &value,
          (const MethodInfo_2E26150 *)Method_System_Collections_Generic_Dictionary_int__int__TryGetValue__) )
    return limitCount - 1;
  v14 = value;
  if ( value > limitCount )
  {
    limitMaxList = (System_Collections_Generic_Dictionary_int__int__o *)ImageLimitCount_TypeInfo;
    if ( (BYTE3(ImageLimitCount_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ImageLimitCount_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
      limitMaxList = (System_Collections_Generic_Dictionary_int__int__o *)ImageLimitCount_TypeInfo;
    }
    klass = limitMaxList[2].fields.entries->obj.klass;
    if ( klass )
    {
      if ( LODWORD(klass->_1.namespaze) > limitCount )
      {
        v16 = (char *)klass + 4 * limitCount;
        return *((_DWORD *)v16 + 8);
      }
      goto LABEL_37;
    }
    goto LABEL_36;
  }
  if ( isNpc )
    goto LABEL_23;
  v18 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v18 = BalanceConfig_TypeInfo;
  }
  if ( v14 < v18->static_fields->ServantLimitMax )
    goto LABEL_23;
  if ( !isOwn )
  {
    if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !OptionManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
    }
    if ( !OptionManager__GetFriendImageLimitCount(0LL) )
    {
LABEL_23:
      limitMaxList = (System_Collections_Generic_Dictionary_int__int__o *)ImageLimitCount_TypeInfo;
      if ( (BYTE3(ImageLimitCount_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !ImageLimitCount_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
        limitMaxList = (System_Collections_Generic_Dictionary_int__int__o *)ImageLimitCount_TypeInfo;
      }
      v19 = limitMaxList[2].fields.entries->obj.klass;
      if ( v19 )
      {
        if ( (unsigned int)value < LODWORD(v19->_1.namespaze) )
        {
          v16 = (char *)v19 + 4 * value;
          return *((_DWORD *)v16 + 8);
        }
LABEL_37:
        v20 = sub_B2C460(limitMaxList);
        sub_B2C400(v20, 0LL);
      }
LABEL_36:
      sub_B2C434(limitMaxList, *(_QWORD *)&limitCount);
    }
  }
  return 3;
}


// local variable allocation has failed, the output may be wrong!
System_Int32_array *__fastcall ImageLimitCount__GetCardSelectList(
        int32_t svtId,
        int32_t limitCount,
        System_Int32_array *costumeIds,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x4
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  int32_t CardImageLimitCount; // w21
  signed int max_length; // w23
  System_Collections_Generic_List_int__o *v14; // x20
  __int64 v15; // x0
  __int64 v16; // x1
  int32_t i; // w24
  int32_t v18; // w1
  unsigned __int64 j; // x21
  int32_t v20; // w1
  __int64 v22; // x0

  if ( (byte_4188F66 & 1) == 0 )
  {
    sub_B2C35C(&ImageLimitCount_TypeInfo, *(_QWORD *)&limitCount);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__Add__, v8);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__ToArray__, v9);
    sub_B2C35C(&Method_System_Collections_Generic_List_int___ctor__, v10);
    sub_B2C35C(&System_Collections_Generic_List_int__TypeInfo, v11);
    byte_4188F66 = 1;
  }
  if ( (BYTE3(ImageLimitCount_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ImageLimitCount_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
  }
  CardImageLimitCount = ImageLimitCount__GetCardImageLimitCount(svtId, limitCount, 1, 0, v4);
  if ( costumeIds )
    max_length = costumeIds->max_length;
  else
    max_length = 0;
  v14 = (System_Collections_Generic_List_int__o *)sub_B2C42C(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v14,
    (const MethodInfo_2F6629C *)Method_System_Collections_Generic_List_int___ctor__);
  if ( !v14 )
    goto LABEL_24;
  for ( i = 0; i != 4; ++i )
  {
    if ( i > CardImageLimitCount )
      v18 = -1;
    else
      v18 = i;
    System_Collections_Generic_List_int___Add(
      v14,
      v18,
      (const MethodInfo_2F66FF8 *)Method_System_Collections_Generic_List_int__Add__);
  }
  if ( max_length < 1 )
    return System_Collections_Generic_List_int___ToArray(
             v14,
             (const MethodInfo_2F69104 *)Method_System_Collections_Generic_List_int__ToArray__);
  if ( !costumeIds )
LABEL_24:
    sub_B2C434(v15, v16);
  for ( j = 0LL; (__int64)j < max_length; ++j )
  {
    if ( j >= costumeIds->max_length )
    {
      v22 = sub_B2C460(v15);
      sub_B2C400(v22, 0LL);
    }
    v20 = costumeIds->m_Items[j + 1];
    if ( v20 >= 1 )
      System_Collections_Generic_List_int___Add(
        v14,
        v20,
        (const MethodInfo_2F66FF8 *)Method_System_Collections_Generic_List_int__Add__);
  }
  return System_Collections_Generic_List_int___ToArray(
           v14,
           (const MethodInfo_2F69104 *)Method_System_Collections_Generic_List_int__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
System_Int32_array *__fastcall ImageLimitCount__GetCardSelectList_27366176(
        int32_t svtId,
        int32_t limitCount,
        int32_t costumeId,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x4
  __int64 v8; // x1
  int32_t CardImageLimitCount; // w20
  __int64 v10; // x1
  System_Int32_array *result; // x0
  __int64 v12; // x1
  unsigned __int64 max_length; // x8
  unsigned __int64 v14; // x9
  int32_t v15; // w12
  bool v16; // cf
  __int64 v17; // x0

  if ( (byte_4188F67 & 1) == 0 )
  {
    sub_B2C35C(&ImageLimitCount_TypeInfo, *(_QWORD *)&limitCount);
    sub_B2C35C(&int___TypeInfo, v8);
    byte_4188F67 = 1;
  }
  if ( (BYTE3(ImageLimitCount_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ImageLimitCount_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
  }
  CardImageLimitCount = ImageLimitCount__GetCardImageLimitCount(svtId, limitCount, 0, 0, v4);
  if ( costumeId <= 10 )
    v10 = 4LL;
  else
    v10 = 5LL;
  result = (System_Int32_array *)sub_B2C374(int___TypeInfo, v10);
  if ( !result )
    sub_B2C434(0LL, v12);
  max_length = result->max_length;
  v14 = 0LL;
  do
  {
    if ( v14 >= max_length )
      goto LABEL_21;
    if ( (__int64)v14 > CardImageLimitCount )
      v15 = -1;
    else
      v15 = v14;
    v16 = v14 >= 3;
    result->m_Items[++v14] = v15;
  }
  while ( !v16 );
  if ( costumeId >= 11 )
  {
    if ( (unsigned int)max_length <= 4 )
    {
LABEL_21:
      v17 = sub_B2C460(result);
      sub_B2C400(v17, 0LL);
    }
    result->m_Items[5] = costumeId;
  }
  return result;
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall ImageLimitCount__GetImageLimitCount(int32_t svtId, int32_t limitCount, const MethodInfo *method)
{
  __int64 v5; // x1
  ImageLimitCount_c *v6; // x0
  __int16 v7; // w8
  int v8; // w8
  struct ImageLimitCount_StaticFields *static_fields; // x9
  int32_t enemyLimitCountStart; // w10
  System_Collections_Generic_Dictionary_int__int__o *limitMaxList; // x0
  int32_t v13; // w8
  Il2CppClass *v14; // x8
  char *v15; // x8
  Il2CppClass *klass; // x9
  __int64 v17; // x0
  int32_t value; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_4188F62 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_int__int__TryGetValue__, *(_QWORD *)&limitCount);
    sub_B2C35C(&ImageLimitCount_TypeInfo, v5);
    byte_4188F62 = 1;
  }
  value = 0;
  if ( (limitCount & 0x80000000) != 0 )
    return 0;
  v6 = ImageLimitCount_TypeInfo;
  v7 = WORD1(ImageLimitCount_TypeInfo->vtable._0_Equals.methodPtr);
  if ( (v7 & 0x400) != 0 )
  {
    if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
      v6 = ImageLimitCount_TypeInfo;
      v7 = WORD1(ImageLimitCount_TypeInfo->vtable._0_Equals.methodPtr);
    }
    v8 = v7 & 0x400;
  }
  else
  {
    v8 = 0;
  }
  static_fields = v6->static_fields;
  enemyLimitCountStart = static_fields->enemyLimitCountStart;
  if ( enemyLimitCountStart > limitCount )
  {
    if ( v8 && !v6->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v6);
      static_fields = ImageLimitCount_TypeInfo->static_fields;
    }
    limitMaxList = static_fields->limitMaxList;
    if ( limitMaxList )
    {
      if ( !System_Collections_Generic_Dictionary_int__int___TryGetValue(
              limitMaxList,
              svtId,
              &value,
              (const MethodInfo_2E26150 *)Method_System_Collections_Generic_Dictionary_int__int__TryGetValue__) )
        return limitCount - 1;
      limitMaxList = (System_Collections_Generic_Dictionary_int__int__o *)ImageLimitCount_TypeInfo;
      v13 = value;
      if ( value <= limitCount )
      {
        if ( (WORD1(ImageLimitCount_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
          && !ImageLimitCount_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
          limitMaxList = (System_Collections_Generic_Dictionary_int__int__o *)ImageLimitCount_TypeInfo;
          v13 = value;
        }
        klass = limitMaxList[2].fields.entries->obj.klass;
        if ( klass )
        {
          if ( (unsigned int)v13 < LODWORD(klass->_1.namespaze) )
          {
            v15 = (char *)klass + 4 * v13;
            return *((_DWORD *)v15 + 8);
          }
LABEL_36:
          v17 = sub_B2C460(limitMaxList);
          sub_B2C400(v17, 0LL);
        }
      }
      else
      {
        if ( (WORD1(ImageLimitCount_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
          && !ImageLimitCount_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
          limitMaxList = (System_Collections_Generic_Dictionary_int__int__o *)ImageLimitCount_TypeInfo;
        }
        v14 = limitMaxList[2].fields.entries->obj.klass;
        if ( v14 )
        {
          if ( LODWORD(v14->_1.namespaze) > limitCount )
          {
            v15 = (char *)v14 + 4 * limitCount;
            return *((_DWORD *)v15 + 8);
          }
          goto LABEL_36;
        }
      }
    }
    sub_B2C434(limitMaxList, *(_QWORD *)&limitCount);
  }
  if ( v8 && !v6->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v6);
    enemyLimitCountStart = ImageLimitCount_TypeInfo->static_fields->enemyLimitCountStart;
  }
  return limitCount - enemyLimitCountStart;
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall ImageLimitCount__GetLimitCountByDispLimit(
        int32_t dispLimitCount,
        int32_t maxLimitCount,
        const MethodInfo *method)
{
  ImageLimitCount_c *v5; // x0
  struct System_Int32_array *maxDispLimitCountList; // x8
  int32_t v7; // w8
  __int64 v9; // x0

  if ( (byte_4188F61 & 1) == 0 )
  {
    sub_B2C35C(&ImageLimitCount_TypeInfo, *(_QWORD *)&maxLimitCount);
    byte_4188F61 = 1;
  }
  if ( dispLimitCount > 10 )
    return dispLimitCount;
  v5 = ImageLimitCount_TypeInfo;
  if ( (BYTE3(ImageLimitCount_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ImageLimitCount_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
    v5 = ImageLimitCount_TypeInfo;
  }
  maxDispLimitCountList = v5->static_fields->maxDispLimitCountList;
  if ( !maxDispLimitCountList )
LABEL_18:
    sub_B2C434(v5, *(_QWORD *)&maxLimitCount);
  if ( (signed int)maxDispLimitCountList->max_length <= dispLimitCount )
    return 0;
  if ( (BYTE3(v5->vtable._0_Equals.methodPtr) & 4) != 0 && !v5->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v5);
    maxDispLimitCountList = ImageLimitCount_TypeInfo->static_fields->maxDispLimitCountList;
    if ( !maxDispLimitCountList )
      goto LABEL_18;
  }
  if ( maxDispLimitCountList->max_length <= dispLimitCount )
  {
    v9 = sub_B2C460(v5);
    sub_B2C400(v9, 0LL);
  }
  v7 = maxDispLimitCountList->m_Items[dispLimitCount + 1];
  if ( v7 <= maxLimitCount )
    return v7;
  else
    return maxLimitCount;
}


int32_t __fastcall ImageLimitCount__GetLimitCountByImageLimit(int32_t imageLimitCount, const MethodInfo *method)
{
  ImageLimitCount_c *v3; // x0
  struct System_Int32_array *minLimitCountList; // x8
  __int64 v6; // x0

  if ( (byte_4188F5C & 1) == 0 )
  {
    sub_B2C35C(&ImageLimitCount_TypeInfo, method);
    byte_4188F5C = 1;
  }
  v3 = ImageLimitCount_TypeInfo;
  if ( (BYTE3(ImageLimitCount_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ImageLimitCount_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
    v3 = ImageLimitCount_TypeInfo;
  }
  minLimitCountList = v3->static_fields->minLimitCountList;
  if ( !minLimitCountList )
    goto LABEL_14;
  if ( (signed int)minLimitCountList->max_length <= imageLimitCount )
    return 0;
  if ( (BYTE3(v3->vtable._0_Equals.methodPtr) & 4) != 0 && !v3->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v3);
    minLimitCountList = ImageLimitCount_TypeInfo->static_fields->minLimitCountList;
    if ( !minLimitCountList )
LABEL_14:
      sub_B2C434(v3, method);
  }
  if ( minLimitCountList->max_length <= imageLimitCount )
  {
    v6 = sub_B2C460(v3);
    sub_B2C400(v6, 0LL);
  }
  return minLimitCountList->m_Items[imageLimitCount + 1];
}


int32_t __fastcall ImageLimitCount__GetLimitCountByImageLimitCostumeIn(
        int32_t imageLimitCount,
        const MethodInfo *method)
{
  ImageLimitCount_c *v3; // x0
  struct System_Int32_array *minLimitCountList; // x8
  __int64 v6; // x0

  if ( (byte_4188F5D & 1) == 0 )
  {
    sub_B2C35C(&ImageLimitCount_TypeInfo, method);
    byte_4188F5D = 1;
  }
  if ( imageLimitCount <= 10 )
  {
    v3 = ImageLimitCount_TypeInfo;
    if ( (BYTE3(ImageLimitCount_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ImageLimitCount_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
      v3 = ImageLimitCount_TypeInfo;
    }
    minLimitCountList = v3->static_fields->minLimitCountList;
    if ( !minLimitCountList )
      goto LABEL_16;
    if ( (signed int)minLimitCountList->max_length <= imageLimitCount )
      return 0;
    if ( (BYTE3(v3->vtable._0_Equals.methodPtr) & 4) != 0 && !v3->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v3);
      minLimitCountList = ImageLimitCount_TypeInfo->static_fields->minLimitCountList;
      if ( !minLimitCountList )
LABEL_16:
        sub_B2C434(v3, method);
    }
    if ( minLimitCountList->max_length <= imageLimitCount )
    {
      v6 = sub_B2C460(v3);
      sub_B2C400(v6, 0LL);
    }
    return minLimitCountList->m_Items[imageLimitCount + 1];
  }
  return imageLimitCount;
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall ImageLimitCount__GetLimitCountByImageLimit_27363708(
        int32_t imageLimitCount,
        int32_t maxLimitCount,
        const MethodInfo *method)
{
  ImageLimitCount_c *v5; // x0
  struct System_Int32_array *maxLimitCountList; // x8
  int32_t v7; // w8
  __int64 v9; // x0

  if ( (byte_4188F60 & 1) == 0 )
  {
    sub_B2C35C(&ImageLimitCount_TypeInfo, *(_QWORD *)&maxLimitCount);
    byte_4188F60 = 1;
  }
  v5 = ImageLimitCount_TypeInfo;
  if ( (BYTE3(ImageLimitCount_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ImageLimitCount_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
    v5 = ImageLimitCount_TypeInfo;
  }
  maxLimitCountList = v5->static_fields->maxLimitCountList;
  if ( !maxLimitCountList )
    goto LABEL_16;
  if ( (signed int)maxLimitCountList->max_length <= imageLimitCount )
    return 0;
  if ( (BYTE3(v5->vtable._0_Equals.methodPtr) & 4) != 0 && !v5->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v5);
    maxLimitCountList = ImageLimitCount_TypeInfo->static_fields->maxLimitCountList;
    if ( !maxLimitCountList )
LABEL_16:
      sub_B2C434(v5, *(_QWORD *)&maxLimitCount);
  }
  if ( maxLimitCountList->max_length <= imageLimitCount )
  {
    v9 = sub_B2C460(v5);
    sub_B2C400(v9, 0LL);
  }
  v7 = maxLimitCountList->m_Items[imageLimitCount + 1];
  if ( v7 <= maxLimitCount )
    return v7;
  else
    return maxLimitCount;
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall ImageLimitCount__GetRewardImageLimitCount(
        int32_t svtId,
        int32_t limitCount,
        const MethodInfo *method)
{
  int v3; // w19
  __int64 v5; // x1
  ImageLimitCount_c *v6; // x0
  System_Collections_Generic_Dictionary_int__int__o *limitMaxList; // x0
  int32_t v8; // w8
  Il2CppClass *v9; // x8
  char *v10; // x8
  Il2CppClass *klass; // x9
  __int64 v13; // x0
  int32_t value; // [xsp+Ch] [xbp-14h] BYREF

  v3 = limitCount;
  if ( (byte_4188F5E & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_int__int__TryGetValue__, *(_QWORD *)&limitCount);
    sub_B2C35C(&ImageLimitCount_TypeInfo, v5);
    byte_4188F5E = 1;
  }
  value = 0;
  if ( v3 <= 10 )
  {
    v6 = ImageLimitCount_TypeInfo;
    if ( (BYTE3(ImageLimitCount_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ImageLimitCount_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
      v6 = ImageLimitCount_TypeInfo;
    }
    limitMaxList = v6->static_fields->limitMaxList;
    if ( !limitMaxList )
      goto LABEL_25;
    if ( System_Collections_Generic_Dictionary_int__int___TryGetValue(
           limitMaxList,
           svtId,
           &value,
           (const MethodInfo_2E26150 *)Method_System_Collections_Generic_Dictionary_int__int__TryGetValue__) )
    {
      limitMaxList = (System_Collections_Generic_Dictionary_int__int__o *)ImageLimitCount_TypeInfo;
      v8 = value;
      if ( value <= v3 )
      {
        if ( (WORD1(ImageLimitCount_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
          && !ImageLimitCount_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
          limitMaxList = (System_Collections_Generic_Dictionary_int__int__o *)ImageLimitCount_TypeInfo;
          v8 = value;
        }
        klass = limitMaxList[2].fields.entries->obj.klass;
        if ( klass )
        {
          if ( (unsigned int)v8 < LODWORD(klass->_1.namespaze) )
          {
            v10 = (char *)klass + 4 * v8;
            return *((_DWORD *)v10 + 8);
          }
LABEL_26:
          v13 = sub_B2C460(limitMaxList);
          sub_B2C400(v13, 0LL);
        }
      }
      else
      {
        if ( (WORD1(ImageLimitCount_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
          && !ImageLimitCount_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
          limitMaxList = (System_Collections_Generic_Dictionary_int__int__o *)ImageLimitCount_TypeInfo;
        }
        v9 = limitMaxList[2].fields.entries->obj.klass;
        if ( v9 )
        {
          if ( LODWORD(v9->_1.namespaze) > v3 )
          {
            v10 = (char *)v9 + 4 * v3;
            return *((_DWORD *)v10 + 8);
          }
          goto LABEL_26;
        }
      }
LABEL_25:
      sub_B2C434(limitMaxList, *(_QWORD *)&limitCount);
    }
    return -1;
  }
  return v3;
}


// local variable allocation has failed, the output may be wrong!
System_Int32_array *__fastcall ImageLimitCount__GetSelectList(
        int32_t svtId,
        int32_t limitCount,
        System_Int32_array *costumeIds,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  int32_t ImageLimitCount; // w21
  signed int max_length; // w23
  System_Collections_Generic_List_int__o *v13; // x20
  __int64 v14; // x0
  __int64 v15; // x1
  int32_t i; // w24
  int32_t v17; // w1
  unsigned __int64 j; // x21
  int32_t v19; // w1
  __int64 v21; // x0

  if ( (byte_4188F64 & 1) == 0 )
  {
    sub_B2C35C(&ImageLimitCount_TypeInfo, *(_QWORD *)&limitCount);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__Add__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__ToArray__, v8);
    sub_B2C35C(&Method_System_Collections_Generic_List_int___ctor__, v9);
    sub_B2C35C(&System_Collections_Generic_List_int__TypeInfo, v10);
    byte_4188F64 = 1;
  }
  if ( (BYTE3(ImageLimitCount_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ImageLimitCount_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
  }
  ImageLimitCount = ImageLimitCount__GetImageLimitCount(svtId, limitCount, (const MethodInfo *)costumeIds);
  if ( costumeIds )
    max_length = costumeIds->max_length;
  else
    max_length = 0;
  v13 = (System_Collections_Generic_List_int__o *)sub_B2C42C(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v13,
    (const MethodInfo_2F6629C *)Method_System_Collections_Generic_List_int___ctor__);
  if ( !v13 )
    goto LABEL_24;
  for ( i = 0; i != 3; ++i )
  {
    if ( i > ImageLimitCount )
      v17 = -1;
    else
      v17 = i;
    System_Collections_Generic_List_int___Add(
      v13,
      v17,
      (const MethodInfo_2F66FF8 *)Method_System_Collections_Generic_List_int__Add__);
  }
  if ( max_length < 1 )
    return System_Collections_Generic_List_int___ToArray(
             v13,
             (const MethodInfo_2F69104 *)Method_System_Collections_Generic_List_int__ToArray__);
  if ( !costumeIds )
LABEL_24:
    sub_B2C434(v14, v15);
  for ( j = 0LL; (__int64)j < max_length; ++j )
  {
    if ( j >= costumeIds->max_length )
    {
      v21 = sub_B2C460(v14);
      sub_B2C400(v21, 0LL);
    }
    v19 = costumeIds->m_Items[j + 1];
    if ( v19 >= 1 )
      System_Collections_Generic_List_int___Add(
        v13,
        v19,
        (const MethodInfo_2F66FF8 *)Method_System_Collections_Generic_List_int__Add__);
  }
  return System_Collections_Generic_List_int___ToArray(
           v13,
           (const MethodInfo_2F69104 *)Method_System_Collections_Generic_List_int__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
System_Int32_array *__fastcall ImageLimitCount__GetSelectList_27365448(
        int32_t svtId,
        int32_t limitCount,
        int32_t costumeId,
        bool isOwn,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x1
  int32_t ImageLimitCount; // w20
  int v12; // w21
  System_Int32_array *result; // x0
  __int64 v14; // x1
  unsigned __int64 max_length; // x8
  unsigned __int64 v16; // x9
  int32_t v17; // w12
  bool v18; // cf
  __int64 v19; // x0

  if ( (byte_4188F65 & 1) == 0 )
  {
    sub_B2C35C(&ImageLimitCount_TypeInfo, *(_QWORD *)&limitCount);
    sub_B2C35C(&int___TypeInfo, v9);
    sub_B2C35C(&OptionManager_TypeInfo, v10);
    byte_4188F65 = 1;
  }
  if ( (BYTE3(ImageLimitCount_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ImageLimitCount_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
  }
  ImageLimitCount = ImageLimitCount__GetImageLimitCount(svtId, limitCount, *(const MethodInfo **)&costumeId);
  if ( costumeId < 11 )
    goto LABEL_7;
  if ( isOwn )
    goto LABEL_13;
  if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !OptionManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
  }
  if ( OptionManager__GetFriendCostume(0LL) )
LABEL_13:
    v12 = 1;
  else
LABEL_7:
    v12 = 0;
  result = (System_Int32_array *)sub_B2C374(int___TypeInfo, (unsigned int)(v12 + 3));
  if ( !result )
    sub_B2C434(0LL, v14);
  max_length = result->max_length;
  v16 = 0LL;
  do
  {
    if ( v16 >= max_length )
      goto LABEL_26;
    if ( (__int64)v16 > ImageLimitCount )
      v17 = -1;
    else
      v17 = v16;
    v18 = v16 >= 2;
    result->m_Items[++v16] = v17;
  }
  while ( !v18 );
  if ( v12 )
  {
    if ( (unsigned int)max_length <= 3 )
    {
LABEL_26:
      v19 = sub_B2C460(result);
      sub_B2C400(v19, 0LL);
    }
    result->m_Items[4] = costumeId;
  }
  return result;
}


void __fastcall ImageLimitCount__Initialize(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  __int64 v3; // x1
  DataManager_o *Instance; // x0
  __int64 v5; // x1
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7
  System_Int32_array **LimitCountMaxList; // x19
  ImageLimitCount_c *v13; // x8
  struct ImageLimitCount_StaticFields *static_fields; // x0

  if ( (byte_4188F5B & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_ServantMaster___, v1);
    sub_B2C35C(&ImageLimitCount_TypeInfo, v2);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v3);
    byte_4188F5B = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ServantMaster___)) == 0LL )
  {
    sub_B2C434(Instance, v5);
  }
  LimitCountMaxList = (System_Int32_array **)ServantMaster__GetLimitCountMaxList((ServantMaster_o *)Instance, 0LL);
  v13 = ImageLimitCount_TypeInfo;
  if ( (BYTE3(ImageLimitCount_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ImageLimitCount_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
    v13 = ImageLimitCount_TypeInfo;
  }
  static_fields = v13->static_fields;
  static_fields->limitMaxList = (struct System_Collections_Generic_Dictionary_int__int__o *)LimitCountMaxList;
  sub_B2C2F8((BattleServantConfConponent_o *)&static_fields->limitMaxList, LimitCountMaxList, v6, v7, v8, v9, v10, v11);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall ImageLimitCount__TryGetRewardImageLimitCount(
        int32_t svtId,
        int32_t svtLimitCnt,
        int32_t *limitCount,
        const MethodInfo *method)
{
  int v5; // w20
  __int64 v7; // x1
  ImageLimitCount_c *v8; // x0
  System_Collections_Generic_Dictionary_int__int__o *limitMaxList; // x0
  Il2CppClass *klass; // x8
  __int64 v11; // x0
  bool result; // w0
  int32_t value; // [xsp+Ch] [xbp-24h] BYREF

  v5 = svtLimitCnt;
  if ( (byte_4188F5F & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_int__int__TryGetValue__, *(_QWORD *)&svtLimitCnt);
    sub_B2C35C(&ImageLimitCount_TypeInfo, v7);
    byte_4188F5F = 1;
  }
  value = 0;
  *limitCount = -1;
  if ( v5 > 10 )
    goto LABEL_23;
  v8 = ImageLimitCount_TypeInfo;
  if ( (BYTE3(ImageLimitCount_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ImageLimitCount_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
    v8 = ImageLimitCount_TypeInfo;
  }
  limitMaxList = v8->static_fields->limitMaxList;
  if ( !limitMaxList )
    goto LABEL_26;
  if ( !System_Collections_Generic_Dictionary_int__int___TryGetValue(
          limitMaxList,
          svtId,
          &value,
          (const MethodInfo_2E26150 *)Method_System_Collections_Generic_Dictionary_int__int__TryGetValue__) )
    return 0;
  limitMaxList = (System_Collections_Generic_Dictionary_int__int__o *)ImageLimitCount_TypeInfo;
  if ( value <= v5 )
  {
    if ( (WORD1(ImageLimitCount_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !ImageLimitCount_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
      limitMaxList = (System_Collections_Generic_Dictionary_int__int__o *)ImageLimitCount_TypeInfo;
      v5 = value;
    }
    else
    {
      v5 = value;
    }
    klass = limitMaxList[2].fields.entries->obj.klass;
    if ( klass )
    {
      if ( (unsigned int)v5 >= LODWORD(klass->_1.namespaze) )
      {
LABEL_15:
        v11 = sub_B2C460(limitMaxList);
        sub_B2C400(v11, 0LL);
      }
      goto LABEL_22;
    }
LABEL_26:
    sub_B2C434(limitMaxList, *(_QWORD *)&svtLimitCnt);
  }
  if ( (WORD1(ImageLimitCount_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
    && !ImageLimitCount_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
    limitMaxList = (System_Collections_Generic_Dictionary_int__int__o *)ImageLimitCount_TypeInfo;
  }
  klass = limitMaxList[2].fields.entries->obj.klass;
  if ( !klass )
    goto LABEL_26;
  if ( LODWORD(klass->_1.namespaze) <= v5 )
    goto LABEL_15;
LABEL_22:
  v5 = *((_DWORD *)&klass->_1.byval_arg.data + v5);
LABEL_23:
  result = 1;
  *limitCount = v5;
  return result;
}


int32_t __fastcall ImageLimitCount__get_MaxDispLimitCount(const MethodInfo *method)
{
  __int64 v1; // x1
  ImageLimitCount_c *v2; // x0
  struct System_Int32_array *maxDispLimitCountList; // x8

  if ( (byte_4188F68 & 1) == 0 )
  {
    sub_B2C35C(&ImageLimitCount_TypeInfo, v1);
    byte_4188F68 = 1;
  }
  v2 = ImageLimitCount_TypeInfo;
  if ( (BYTE3(ImageLimitCount_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ImageLimitCount_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
    v2 = ImageLimitCount_TypeInfo;
  }
  maxDispLimitCountList = v2->static_fields->maxDispLimitCountList;
  if ( !maxDispLimitCountList )
    sub_B2C434(v2, v1);
  return maxDispLimitCountList->max_length;
}


void __fastcall ImageLimitCount__initializeAssetStorage(const MethodInfo *method)
{
  ;
}