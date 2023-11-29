void __fastcall ImageLimitCount___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  System_Array_o *v7; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7
  __int64 v15; // x2
  System_Array_o *v16; // x19
  struct ImageLimitCount_StaticFields *v17; // x0
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  __int64 v24; // x2
  System_Array_o *v25; // x19
  struct ImageLimitCount_StaticFields *v26; // x0
  System_String_array **v27; // x2
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7
  __int64 v33; // x2
  System_Int32_array **v34; // x0
  System_String_array **v35; // x2
  System_String_array **v36; // x3
  System_Boolean_array **v37; // x4
  System_Int32_array **v38; // x5
  System_Int32_array *v39; // x6
  System_Int32_array *v40; // x7
  unsigned int v41; // w8
  System_Int32_array **v42; // x1
  struct ImageLimitCount_StaticFields *v43; // x0
  System_RuntimeFieldHandle_o v44; // 0:w1.4
  System_RuntimeFieldHandle_o v45; // 0:w1.4
  System_RuntimeFieldHandle_o v46; // 0:w1.4

  if ( (byte_40FC174 & 1) == 0 )
  {
    sub_B16FFC(&ImageLimitCount_TypeInfo, v1);
    sub_B16FFC(&int___TypeInfo, v3);
    sub_B16FFC(
      &Field__PrivateImplementationDetails__598CEB271FAC09B40101AAE5910D6939EFC22B105F7DF2AA77795704D4CC7911,
      v4);
    sub_B16FFC(
      &Field__PrivateImplementationDetails__E8845519DB154B41E620A98F949B9EDCEFB1F9060DC8290A9F7D2C3200ABD0CB,
      v5);
    sub_B16FFC(
      &Field__PrivateImplementationDetails__F239810D17032E35383496434C64894FFE055A198BA7CFB907D73BAF26A70F0C,
      v6);
    byte_40FC174 = 1;
  }
  v7 = (System_Array_o *)sub_B17014(int___TypeInfo, 5LL, v2);
  v44.fields.value = Field__PrivateImplementationDetails__598CEB271FAC09B40101AAE5910D6939EFC22B105F7DF2AA77795704D4CC7911;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_42629164(v7, v44, 0LL);
  static_fields = (BattleServantConfConponent_o *)ImageLimitCount_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v7;
  sub_B16F98(static_fields, (System_Int32_array **)v7, v9, v10, v11, v12, v13, v14);
  v16 = (System_Array_o *)sub_B17014(int___TypeInfo, 4LL, v15);
  v45.fields.value = Field__PrivateImplementationDetails__F239810D17032E35383496434C64894FFE055A198BA7CFB907D73BAF26A70F0C;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_42629164(v16, v45, 0LL);
  v17 = ImageLimitCount_TypeInfo->static_fields;
  v17->minLimitCountList = (struct System_Int32_array *)v16;
  sub_B16F98(
    (BattleServantConfConponent_o *)&v17->minLimitCountList,
    (System_Int32_array **)v16,
    v18,
    v19,
    v20,
    v21,
    v22,
    v23);
  v25 = (System_Array_o *)sub_B17014(int___TypeInfo, 4LL, v24);
  v46.fields.value = Field__PrivateImplementationDetails__E8845519DB154B41E620A98F949B9EDCEFB1F9060DC8290A9F7D2C3200ABD0CB;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_42629164(v25, v46, 0LL);
  v26 = ImageLimitCount_TypeInfo->static_fields;
  v26->maxLimitCountList = (struct System_Int32_array *)v25;
  sub_B16F98(
    (BattleServantConfConponent_o *)&v26->maxLimitCountList,
    (System_Int32_array **)v25,
    v27,
    v28,
    v29,
    v30,
    v31,
    v32);
  v34 = (System_Int32_array **)sub_B17014(int___TypeInfo, 3LL, v33);
  if ( !v34 )
    sub_B170D4();
  v41 = *((_DWORD *)v34 + 6);
  v42 = v34;
  if ( v41 <= 1 || (*((_DWORD *)v34 + 9) = 2, v41 == 2) )
  {
    sub_B17100(v34, v34, v35);
    sub_B170A0();
  }
  *((_DWORD *)v34 + 10) = 4;
  v43 = ImageLimitCount_TypeInfo->static_fields;
  v43->maxDispLimitCountList = (struct System_Int32_array *)v42;
  sub_B16F98((BattleServantConfConponent_o *)&v43->maxDispLimitCountList, v42, v35, v36, v37, v38, v39, v40);
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
  __int64 v14; // x1
  __int64 v15; // x2
  int32_t v16; // w22
  ImageLimitCount_c *v17; // x0
  struct System_Int32_array *imageLimitCountList; // x8
  char *v19; // x8
  BalanceConfig_c *v21; // x0
  struct System_Int32_array *v22; // x8
  int32_t value; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_40FC16E & 1) == 0 )
  {
    sub_B16FFC(&BalanceConfig_TypeInfo, *(_QWORD *)&limitCount);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_int__int__TryGetValue__, v9);
    sub_B16FFC(&ImageLimitCount_TypeInfo, v10);
    sub_B16FFC(&OptionManager_TypeInfo, v11);
    byte_40FC16E = 1;
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
          (const MethodInfo_2DDEBC4 *)Method_System_Collections_Generic_Dictionary_int__int__TryGetValue__) )
    return limitCount - 1;
  v16 = value;
  if ( value > limitCount )
  {
    v17 = ImageLimitCount_TypeInfo;
    if ( (BYTE3(ImageLimitCount_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ImageLimitCount_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
      v17 = ImageLimitCount_TypeInfo;
    }
    imageLimitCountList = v17->static_fields->imageLimitCountList;
    if ( imageLimitCountList )
    {
      if ( imageLimitCountList->max_length > limitCount )
      {
        v19 = (char *)imageLimitCountList + 4 * limitCount;
        return *((_DWORD *)v19 + 8);
      }
      goto LABEL_37;
    }
    goto LABEL_36;
  }
  if ( isNpc )
    goto LABEL_23;
  v21 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v21 = BalanceConfig_TypeInfo;
  }
  if ( v16 < v21->static_fields->ServantLimitMax )
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
      v17 = ImageLimitCount_TypeInfo;
      if ( (BYTE3(ImageLimitCount_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !ImageLimitCount_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
        v17 = ImageLimitCount_TypeInfo;
      }
      v22 = v17->static_fields->imageLimitCountList;
      if ( v22 )
      {
        if ( value < v22->max_length )
        {
          v19 = (char *)v22 + 4 * value;
          return *((_DWORD *)v19 + 8);
        }
LABEL_37:
        sub_B17100(v17, v14, v15);
        sub_B170A0();
      }
LABEL_36:
      sub_B170D4();
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
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x3
  __int64 v15; // x4
  int32_t CardImageLimitCount; // w21
  signed int max_length; // w23
  System_Collections_Generic_List_int__o *v18; // x20
  int32_t i; // w24
  int32_t v20; // w1
  __int64 v21; // x0
  __int64 v22; // x1
  __int64 v23; // x2
  unsigned __int64 j; // x21

  if ( (byte_40FC171 & 1) == 0 )
  {
    sub_B16FFC(&ImageLimitCount_TypeInfo, *(_QWORD *)&limitCount);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__Add__, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__ToArray__, v9);
    sub_B16FFC(&Method_System_Collections_Generic_List_int___ctor__, v10);
    sub_B16FFC(&System_Collections_Generic_List_int__TypeInfo, v11);
    byte_40FC171 = 1;
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
  v18 = (System_Collections_Generic_List_int__o *)sub_B170CC(
                                                    System_Collections_Generic_List_int__TypeInfo,
                                                    v12,
                                                    v13,
                                                    v14,
                                                    v15);
  System_Collections_Generic_List_int____ctor(
    v18,
    (const MethodInfo_2F0F794 *)Method_System_Collections_Generic_List_int___ctor__);
  if ( !v18 )
    goto LABEL_24;
  for ( i = 0; i != 4; ++i )
  {
    if ( i > CardImageLimitCount )
      v20 = -1;
    else
      v20 = i;
    System_Collections_Generic_List_int___Add(
      v18,
      v20,
      (const MethodInfo_2F104F0 *)Method_System_Collections_Generic_List_int__Add__);
  }
  if ( max_length < 1 )
    return System_Collections_Generic_List_int___ToArray(
             v18,
             (const MethodInfo_2F125FC *)Method_System_Collections_Generic_List_int__ToArray__);
  if ( !costumeIds )
LABEL_24:
    sub_B170D4();
  for ( j = 0LL; (__int64)j < max_length; ++j )
  {
    if ( j >= costumeIds->max_length )
    {
      sub_B17100(v21, v22, v23);
      sub_B170A0();
    }
    v22 = (unsigned int)costumeIds->m_Items[j + 1];
    if ( (int)v22 >= 1 )
      System_Collections_Generic_List_int___Add(
        v18,
        v22,
        (const MethodInfo_2F104F0 *)Method_System_Collections_Generic_List_int__Add__);
  }
  return System_Collections_Generic_List_int___ToArray(
           v18,
           (const MethodInfo_2F125FC *)Method_System_Collections_Generic_List_int__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
System_Int32_array *__fastcall ImageLimitCount__GetCardSelectList_28891828(
        int32_t svtId,
        int32_t limitCount,
        int32_t costumeId,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x4
  __int64 v8; // x1
  __int64 v9; // x2
  int32_t CardImageLimitCount; // w20
  __int64 v11; // x1
  System_Int32_array *result; // x0
  __int64 v13; // x1
  __int64 v14; // x2
  unsigned __int64 max_length; // x8
  unsigned __int64 v16; // x9
  int32_t v17; // w12
  bool v18; // cf

  if ( (byte_40FC172 & 1) == 0 )
  {
    sub_B16FFC(&ImageLimitCount_TypeInfo, *(_QWORD *)&limitCount);
    sub_B16FFC(&int___TypeInfo, v8);
    byte_40FC172 = 1;
  }
  if ( (BYTE3(ImageLimitCount_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ImageLimitCount_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
  }
  CardImageLimitCount = ImageLimitCount__GetCardImageLimitCount(svtId, limitCount, 0, 0, v4);
  if ( costumeId <= 10 )
    v11 = 4LL;
  else
    v11 = 5LL;
  result = (System_Int32_array *)sub_B17014(int___TypeInfo, v11, v9);
  if ( !result )
    sub_B170D4();
  max_length = result->max_length;
  v16 = 0LL;
  do
  {
    if ( v16 >= max_length )
      goto LABEL_21;
    if ( (__int64)v16 > CardImageLimitCount )
      v17 = -1;
    else
      v17 = v16;
    v18 = v16 >= 3;
    result->m_Items[++v16] = v17;
  }
  while ( !v18 );
  if ( costumeId >= 11 )
  {
    if ( (unsigned int)max_length <= 4 )
    {
LABEL_21:
      sub_B17100(result, v13, v14);
      sub_B170A0();
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
  __int64 v13; // x1
  __int64 v14; // x2
  ImageLimitCount_c *v15; // x0
  int32_t v16; // w8
  struct System_Int32_array *v17; // x8
  char *v18; // x8
  struct System_Int32_array *imageLimitCountList; // x9
  int32_t value; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_40FC16D & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_int__int__TryGetValue__, *(_QWORD *)&limitCount);
    sub_B16FFC(&ImageLimitCount_TypeInfo, v5);
    byte_40FC16D = 1;
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
              (const MethodInfo_2DDEBC4 *)Method_System_Collections_Generic_Dictionary_int__int__TryGetValue__) )
        return limitCount - 1;
      v15 = ImageLimitCount_TypeInfo;
      v16 = value;
      if ( value <= limitCount )
      {
        if ( (WORD1(ImageLimitCount_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
          && !ImageLimitCount_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
          v15 = ImageLimitCount_TypeInfo;
          v16 = value;
        }
        imageLimitCountList = v15->static_fields->imageLimitCountList;
        if ( imageLimitCountList )
        {
          if ( v16 < imageLimitCountList->max_length )
          {
            v18 = (char *)imageLimitCountList + 4 * v16;
            return *((_DWORD *)v18 + 8);
          }
LABEL_36:
          sub_B17100(v15, v13, v14);
          sub_B170A0();
        }
      }
      else
      {
        if ( (WORD1(ImageLimitCount_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
          && !ImageLimitCount_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
          v15 = ImageLimitCount_TypeInfo;
        }
        v17 = v15->static_fields->imageLimitCountList;
        if ( v17 )
        {
          if ( v17->max_length > limitCount )
          {
            v18 = (char *)v17 + 4 * limitCount;
            return *((_DWORD *)v18 + 8);
          }
          goto LABEL_36;
        }
      }
    }
    sub_B170D4();
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

  if ( (byte_40FC16C & 1) == 0 )
  {
    sub_B16FFC(&ImageLimitCount_TypeInfo, *(_QWORD *)&maxLimitCount);
    byte_40FC16C = 1;
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
    sub_B170D4();
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
    sub_B17100(v5, *(_QWORD *)&maxLimitCount, method);
    sub_B170A0();
  }
  v7 = maxDispLimitCountList->m_Items[dispLimitCount + 1];
  if ( v7 <= maxLimitCount )
    return v7;
  else
    return maxLimitCount;
}


int32_t __fastcall ImageLimitCount__GetLimitCountByImageLimit(int32_t imageLimitCount, const MethodInfo *method)
{
  __int64 v2; // x2
  ImageLimitCount_c *v4; // x0
  struct System_Int32_array *minLimitCountList; // x8

  if ( (byte_40FC168 & 1) == 0 )
  {
    sub_B16FFC(&ImageLimitCount_TypeInfo, method);
    byte_40FC168 = 1;
  }
  v4 = ImageLimitCount_TypeInfo;
  if ( (BYTE3(ImageLimitCount_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ImageLimitCount_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
    v4 = ImageLimitCount_TypeInfo;
  }
  minLimitCountList = v4->static_fields->minLimitCountList;
  if ( !minLimitCountList )
    goto LABEL_14;
  if ( (signed int)minLimitCountList->max_length <= imageLimitCount )
    return 0;
  if ( (BYTE3(v4->vtable._0_Equals.methodPtr) & 4) != 0 && !v4->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v4);
    minLimitCountList = ImageLimitCount_TypeInfo->static_fields->minLimitCountList;
    if ( !minLimitCountList )
LABEL_14:
      sub_B170D4();
  }
  if ( minLimitCountList->max_length <= imageLimitCount )
  {
    sub_B17100(v4, method, v2);
    sub_B170A0();
  }
  return minLimitCountList->m_Items[imageLimitCount + 1];
}


int32_t __fastcall ImageLimitCount__GetLimitCountByImageLimitCostumeIn(
        int32_t imageLimitCount,
        const MethodInfo *method)
{
  __int64 v2; // x2
  ImageLimitCount_c *v4; // x0
  struct System_Int32_array *minLimitCountList; // x8

  if ( (byte_40FC169 & 1) == 0 )
  {
    sub_B16FFC(&ImageLimitCount_TypeInfo, method);
    byte_40FC169 = 1;
  }
  if ( imageLimitCount <= 10 )
  {
    v4 = ImageLimitCount_TypeInfo;
    if ( (BYTE3(ImageLimitCount_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ImageLimitCount_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
      v4 = ImageLimitCount_TypeInfo;
    }
    minLimitCountList = v4->static_fields->minLimitCountList;
    if ( !minLimitCountList )
      goto LABEL_16;
    if ( (signed int)minLimitCountList->max_length <= imageLimitCount )
      return 0;
    if ( (BYTE3(v4->vtable._0_Equals.methodPtr) & 4) != 0 && !v4->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v4);
      minLimitCountList = ImageLimitCount_TypeInfo->static_fields->minLimitCountList;
      if ( !minLimitCountList )
LABEL_16:
        sub_B170D4();
    }
    if ( minLimitCountList->max_length <= imageLimitCount )
    {
      sub_B17100(v4, method, v2);
      sub_B170A0();
    }
    return minLimitCountList->m_Items[imageLimitCount + 1];
  }
  return imageLimitCount;
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall ImageLimitCount__GetLimitCountByImageLimit_28889360(
        int32_t imageLimitCount,
        int32_t maxLimitCount,
        const MethodInfo *method)
{
  ImageLimitCount_c *v5; // x0
  struct System_Int32_array *maxLimitCountList; // x8
  int32_t v7; // w8

  if ( (byte_40FC16B & 1) == 0 )
  {
    sub_B16FFC(&ImageLimitCount_TypeInfo, *(_QWORD *)&maxLimitCount);
    byte_40FC16B = 1;
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
      sub_B170D4();
  }
  if ( maxLimitCountList->max_length <= imageLimitCount )
  {
    sub_B17100(v5, *(_QWORD *)&maxLimitCount, method);
    sub_B170A0();
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
  __int64 v8; // x1
  __int64 v9; // x2
  ImageLimitCount_c *v10; // x0
  int32_t v11; // w8
  struct System_Int32_array *v12; // x8
  char *v13; // x8
  struct System_Int32_array *imageLimitCountList; // x9
  int32_t value; // [xsp+Ch] [xbp-14h] BYREF

  v3 = limitCount;
  if ( (byte_40FC16A & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_int__int__TryGetValue__, *(_QWORD *)&limitCount);
    sub_B16FFC(&ImageLimitCount_TypeInfo, v5);
    byte_40FC16A = 1;
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
           (const MethodInfo_2DDEBC4 *)Method_System_Collections_Generic_Dictionary_int__int__TryGetValue__) )
    {
      v10 = ImageLimitCount_TypeInfo;
      v11 = value;
      if ( value <= v3 )
      {
        if ( (WORD1(ImageLimitCount_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
          && !ImageLimitCount_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
          v10 = ImageLimitCount_TypeInfo;
          v11 = value;
        }
        imageLimitCountList = v10->static_fields->imageLimitCountList;
        if ( imageLimitCountList )
        {
          if ( v11 < imageLimitCountList->max_length )
          {
            v13 = (char *)imageLimitCountList + 4 * v11;
            return *((_DWORD *)v13 + 8);
          }
LABEL_26:
          sub_B17100(v10, v8, v9);
          sub_B170A0();
        }
      }
      else
      {
        if ( (WORD1(ImageLimitCount_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
          && !ImageLimitCount_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
          v10 = ImageLimitCount_TypeInfo;
        }
        v12 = v10->static_fields->imageLimitCountList;
        if ( v12 )
        {
          if ( v12->max_length > v3 )
          {
            v13 = (char *)v12 + 4 * v3;
            return *((_DWORD *)v13 + 8);
          }
          goto LABEL_26;
        }
      }
LABEL_25:
      sub_B170D4();
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
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x3
  __int64 v14; // x4
  int32_t ImageLimitCount; // w21
  signed int max_length; // w23
  System_Collections_Generic_List_int__o *v17; // x20
  int32_t i; // w24
  int32_t v19; // w1
  __int64 v20; // x0
  __int64 v21; // x1
  __int64 v22; // x2
  unsigned __int64 j; // x21

  if ( (byte_40FC16F & 1) == 0 )
  {
    sub_B16FFC(&ImageLimitCount_TypeInfo, *(_QWORD *)&limitCount);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__Add__, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__ToArray__, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_int___ctor__, v9);
    sub_B16FFC(&System_Collections_Generic_List_int__TypeInfo, v10);
    byte_40FC16F = 1;
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
  v17 = (System_Collections_Generic_List_int__o *)sub_B170CC(
                                                    System_Collections_Generic_List_int__TypeInfo,
                                                    v11,
                                                    v12,
                                                    v13,
                                                    v14);
  System_Collections_Generic_List_int____ctor(
    v17,
    (const MethodInfo_2F0F794 *)Method_System_Collections_Generic_List_int___ctor__);
  if ( !v17 )
    goto LABEL_24;
  for ( i = 0; i != 3; ++i )
  {
    if ( i > ImageLimitCount )
      v19 = -1;
    else
      v19 = i;
    System_Collections_Generic_List_int___Add(
      v17,
      v19,
      (const MethodInfo_2F104F0 *)Method_System_Collections_Generic_List_int__Add__);
  }
  if ( max_length < 1 )
    return System_Collections_Generic_List_int___ToArray(
             v17,
             (const MethodInfo_2F125FC *)Method_System_Collections_Generic_List_int__ToArray__);
  if ( !costumeIds )
LABEL_24:
    sub_B170D4();
  for ( j = 0LL; (__int64)j < max_length; ++j )
  {
    if ( j >= costumeIds->max_length )
    {
      sub_B17100(v20, v21, v22);
      sub_B170A0();
    }
    v21 = (unsigned int)costumeIds->m_Items[j + 1];
    if ( (int)v21 >= 1 )
      System_Collections_Generic_List_int___Add(
        v17,
        v21,
        (const MethodInfo_2F104F0 *)Method_System_Collections_Generic_List_int__Add__);
  }
  return System_Collections_Generic_List_int___ToArray(
           v17,
           (const MethodInfo_2F125FC *)Method_System_Collections_Generic_List_int__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
System_Int32_array *__fastcall ImageLimitCount__GetSelectList_28891100(
        int32_t svtId,
        int32_t limitCount,
        int32_t costumeId,
        bool isOwn,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x2
  int32_t ImageLimitCount; // w20
  int v13; // w21
  System_Int32_array *result; // x0
  __int64 v15; // x1
  __int64 v16; // x2
  unsigned __int64 max_length; // x8
  unsigned __int64 v18; // x9
  int32_t v19; // w12
  bool v20; // cf

  if ( (byte_40FC170 & 1) == 0 )
  {
    sub_B16FFC(&ImageLimitCount_TypeInfo, *(_QWORD *)&limitCount);
    sub_B16FFC(&int___TypeInfo, v9);
    sub_B16FFC(&OptionManager_TypeInfo, v10);
    byte_40FC170 = 1;
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
    v13 = 1;
  else
LABEL_7:
    v13 = 0;
  result = (System_Int32_array *)sub_B17014(int___TypeInfo, (unsigned int)(v13 + 3), v11);
  if ( !result )
    sub_B170D4();
  max_length = result->max_length;
  v18 = 0LL;
  do
  {
    if ( v18 >= max_length )
      goto LABEL_26;
    if ( (__int64)v18 > ImageLimitCount )
      v19 = -1;
    else
      v19 = v18;
    v20 = v18 >= 2;
    result->m_Items[++v18] = v19;
  }
  while ( !v20 );
  if ( v13 )
  {
    if ( (unsigned int)max_length <= 3 )
    {
LABEL_26:
      sub_B17100(result, v15, v16);
      sub_B170A0();
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
  WebViewManager_o *Instance; // x0
  ServantMaster_o *MasterData_WarQuestSelectionMaster; // x0
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7
  System_Int32_array **LimitCountMaxList; // x19
  ImageLimitCount_c *v13; // x8
  struct ImageLimitCount_StaticFields *static_fields; // x0

  if ( (byte_40FC167 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_ServantMaster___, v1);
    sub_B16FFC(&ImageLimitCount_TypeInfo, v2);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v3);
    byte_40FC167 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (MasterData_WarQuestSelectionMaster = (ServantMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                  (DataManager_o *)Instance,
                                                                  (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantMaster___)) == 0LL )
  {
    sub_B170D4();
  }
  LimitCountMaxList = (System_Int32_array **)ServantMaster__GetLimitCountMaxList(
                                               MasterData_WarQuestSelectionMaster,
                                               0LL);
  v13 = ImageLimitCount_TypeInfo;
  if ( (BYTE3(ImageLimitCount_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ImageLimitCount_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
    v13 = ImageLimitCount_TypeInfo;
  }
  static_fields = v13->static_fields;
  static_fields->limitMaxList = (struct System_Collections_Generic_Dictionary_int__int__o *)LimitCountMaxList;
  sub_B16F98((BattleServantConfConponent_o *)&static_fields->limitMaxList, LimitCountMaxList, v6, v7, v8, v9, v10, v11);
}


int32_t __fastcall ImageLimitCount__get_MaxDispLimitCount(const MethodInfo *method)
{
  __int64 v1; // x1
  ImageLimitCount_c *v2; // x0
  struct System_Int32_array *maxDispLimitCountList; // x8

  if ( (byte_40FC173 & 1) == 0 )
  {
    sub_B16FFC(&ImageLimitCount_TypeInfo, v1);
    byte_40FC173 = 1;
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
    sub_B170D4();
  return maxDispLimitCountList->max_length;
}


void __fastcall ImageLimitCount__initializeAssetStorage(const MethodInfo *method)
{
  ;
}