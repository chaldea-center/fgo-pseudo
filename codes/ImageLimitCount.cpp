void __fastcall ImageLimitCount___cctor(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  int v4; // w1
  int v5; // w2
  __int64 v6; // x3
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  System_Array_o *v16; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  System_Array_o *v24; // x19
  struct ImageLimitCount_StaticFields *v25; // x0
  System_String_array **v26; // x2
  System_String_array **v27; // x3
  System_Boolean_array **v28; // x4
  System_Int32_array **v29; // x5
  System_Int32_array *v30; // x6
  System_Int32_array *v31; // x7
  System_Array_o *v32; // x19
  struct ImageLimitCount_StaticFields *v33; // x0
  System_String_array **v34; // x2
  System_String_array **v35; // x3
  System_Boolean_array **v36; // x4
  System_Int32_array **v37; // x5
  System_Int32_array *v38; // x6
  System_Int32_array *v39; // x7
  System_Int32_array **v40; // x0
  __int64 v41; // x1
  System_String_array **v42; // x2
  System_String_array **v43; // x3
  System_Boolean_array **v44; // x4
  System_Int32_array **v45; // x5
  System_Int32_array *v46; // x6
  System_Int32_array *v47; // x7
  unsigned int v48; // w8
  System_Int32_array **v49; // x1
  struct ImageLimitCount_StaticFields *v50; // x0
  __int64 v51; // x0
  System_RuntimeFieldHandle_o v52; // 0:w1.4
  System_RuntimeFieldHandle_o v53; // 0:w1.4
  System_RuntimeFieldHandle_o v54; // 0:w1.4

  if ( (byte_42EA4BB & 1) == 0 )
  {
    sub_B5D5C4(&ImageLimitCount_TypeInfo, v1, v2, v3);
    sub_B5D5C4(&int___TypeInfo, v4, v5, v6);
    sub_B5D5C4(
      &Field__PrivateImplementationDetails__598CEB271FAC09B40101AAE5910D6939EFC22B105F7DF2AA77795704D4CC7911,
      v7,
      v8,
      v9);
    sub_B5D5C4(
      &Field__PrivateImplementationDetails__E8845519DB154B41E620A98F949B9EDCEFB1F9060DC8290A9F7D2C3200ABD0CB,
      v10,
      v11,
      v12);
    sub_B5D5C4(
      &Field__PrivateImplementationDetails__F239810D17032E35383496434C64894FFE055A198BA7CFB907D73BAF26A70F0C,
      v13,
      v14,
      v15);
    byte_42EA4BB = 1;
  }
  v16 = (System_Array_o *)sub_B5D5DC(int___TypeInfo, 5LL);
  v52.fields.value = Field__PrivateImplementationDetails__598CEB271FAC09B40101AAE5910D6939EFC22B105F7DF2AA77795704D4CC7911;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_43674272(v16, v52, 0LL);
  static_fields = (BattleServantConfConponent_o *)ImageLimitCount_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v16;
  sub_B5D560(static_fields, (System_Int32_array **)v16, v18, v19, v20, v21, v22, v23);
  v24 = (System_Array_o *)sub_B5D5DC(int___TypeInfo, 4LL);
  v53.fields.value = Field__PrivateImplementationDetails__F239810D17032E35383496434C64894FFE055A198BA7CFB907D73BAF26A70F0C;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_43674272(v24, v53, 0LL);
  v25 = ImageLimitCount_TypeInfo->static_fields;
  v25->minLimitCountList = (struct System_Int32_array *)v24;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v25->minLimitCountList,
    (System_Int32_array **)v24,
    v26,
    v27,
    v28,
    v29,
    v30,
    v31);
  v32 = (System_Array_o *)sub_B5D5DC(int___TypeInfo, 4LL);
  v54.fields.value = Field__PrivateImplementationDetails__E8845519DB154B41E620A98F949B9EDCEFB1F9060DC8290A9F7D2C3200ABD0CB;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_43674272(v32, v54, 0LL);
  v33 = ImageLimitCount_TypeInfo->static_fields;
  v33->maxLimitCountList = (struct System_Int32_array *)v32;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v33->maxLimitCountList,
    (System_Int32_array **)v32,
    v34,
    v35,
    v36,
    v37,
    v38,
    v39);
  v40 = (System_Int32_array **)sub_B5D5DC(int___TypeInfo, 3LL);
  if ( !v40 )
    sub_B5D69C(0LL, v41);
  v48 = *((_DWORD *)v40 + 6);
  v49 = v40;
  if ( v48 <= 1 || (*((_DWORD *)v40 + 9) = 2, v48 == 2) )
  {
    v51 = sub_B5D6C8(v40);
    sub_B5D668(v51, 0LL);
  }
  *((_DWORD *)v40 + 10) = 4;
  v50 = ImageLimitCount_TypeInfo->static_fields;
  v50->maxDispLimitCountList = (struct System_Int32_array *)v49;
  sub_B5D560((BattleServantConfConponent_o *)&v50->maxDispLimitCountList, v49, v42, v43, v44, v45, v46, v47);
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
  int v9; // w1
  char v10; // w2
  __int64 v11; // x3
  int v12; // w1
  char v13; // w2
  __int64 v14; // x3
  int v15; // w1
  char v16; // w2
  __int64 v17; // x3
  ImageLimitCount_c *v18; // x0
  System_Collections_Generic_Dictionary_int__int__o *limitMaxList; // x0
  int32_t v20; // w22
  Il2CppClass *klass; // x8
  char *v22; // x8
  BalanceConfig_c *v24; // x0
  Il2CppClass *v25; // x8
  __int64 v26; // x0
  int32_t value; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_42EA4B5 & 1) == 0 )
  {
    sub_B5D5C4(&BalanceConfig_TypeInfo, limitCount, isOwn, isNpc);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_int__int__TryGetValue__, v9, v10, v11);
    sub_B5D5C4(&ImageLimitCount_TypeInfo, v12, v13, v14);
    sub_B5D5C4(&OptionManager_TypeInfo, v15, v16, v17);
    byte_42EA4B5 = 1;
  }
  value = 0;
  if ( (limitCount & 0x80000000) != 0 )
    return 0;
  v18 = ImageLimitCount_TypeInfo;
  if ( (BYTE3(ImageLimitCount_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ImageLimitCount_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
    v18 = ImageLimitCount_TypeInfo;
  }
  limitMaxList = v18->static_fields->limitMaxList;
  if ( !limitMaxList )
    goto LABEL_36;
  if ( !System_Collections_Generic_Dictionary_int__int___TryGetValue(
          limitMaxList,
          svtId,
          &value,
          (const MethodInfo_2F0CA68 *)Method_System_Collections_Generic_Dictionary_int__int__TryGetValue__) )
    return limitCount - 1;
  v20 = value;
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
        v22 = (char *)klass + 4 * limitCount;
        return *((_DWORD *)v22 + 8);
      }
      goto LABEL_37;
    }
    goto LABEL_36;
  }
  if ( isNpc )
    goto LABEL_23;
  v24 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v24 = BalanceConfig_TypeInfo;
  }
  if ( v20 < v24->static_fields->ServantLimitMax )
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
      v25 = limitMaxList[2].fields.entries->obj.klass;
      if ( v25 )
      {
        if ( (unsigned int)value < LODWORD(v25->_1.namespaze) )
        {
          v22 = (char *)v25 + 4 * value;
          return *((_DWORD *)v22 + 8);
        }
LABEL_37:
        v26 = sub_B5D6C8(limitMaxList);
        sub_B5D668(v26, 0LL);
      }
LABEL_36:
      sub_B5D69C(limitMaxList, *(_QWORD *)&limitCount);
    }
  }
  return 3;
}


System_Int32_array *__fastcall ImageLimitCount__GetCardSelectList(
        int32_t svtId,
        int32_t limitCount,
        System_Int32_array *costumeIds,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x4
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int32_t CardImageLimitCount; // w21
  signed int max_length; // w23
  System_Collections_Generic_List_int__o *v22; // x20
  __int64 v23; // x0
  __int64 v24; // x1
  int32_t i; // w24
  int32_t v26; // w1
  unsigned __int64 j; // x21
  int32_t v28; // w1
  __int64 v30; // x0

  if ( (byte_42EA4B8 & 1) == 0 )
  {
    sub_B5D5C4(&ImageLimitCount_TypeInfo, limitCount, (_DWORD)costumeIds, method);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__Add__, v8, v9, v10);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__ToArray__, v11, v12, v13);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int___ctor___68740224, v14, v15, v16);
    sub_B5D5C4(&System_Collections_Generic_List_int__TypeInfo, v17, v18, v19);
    byte_42EA4B8 = 1;
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
  v22 = (System_Collections_Generic_List_int__o *)sub_B5D694(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v22,
    (const MethodInfo_30836B0 *)Method_System_Collections_Generic_List_int___ctor___68740224);
  if ( !v22 )
    goto LABEL_24;
  for ( i = 0; i != 4; ++i )
  {
    if ( i > CardImageLimitCount )
      v26 = -1;
    else
      v26 = i;
    System_Collections_Generic_List_int___Add(
      v22,
      v26,
      (const MethodInfo_308440C *)Method_System_Collections_Generic_List_int__Add__);
  }
  if ( max_length < 1 )
    return System_Collections_Generic_List_int___ToArray(
             v22,
             (const MethodInfo_3086518 *)Method_System_Collections_Generic_List_int__ToArray__);
  if ( !costumeIds )
LABEL_24:
    sub_B5D69C(v23, v24);
  for ( j = 0LL; (__int64)j < max_length; ++j )
  {
    if ( j >= costumeIds->max_length )
    {
      v30 = sub_B5D6C8(v23);
      sub_B5D668(v30, 0LL);
    }
    v28 = costumeIds->m_Items[j + 1];
    if ( v28 >= 1 )
      System_Collections_Generic_List_int___Add(
        v22,
        v28,
        (const MethodInfo_308440C *)Method_System_Collections_Generic_List_int__Add__);
  }
  return System_Collections_Generic_List_int___ToArray(
           v22,
           (const MethodInfo_3086518 *)Method_System_Collections_Generic_List_int__ToArray__);
}


System_Int32_array *__fastcall ImageLimitCount__GetCardSelectList_28467052(
        int32_t svtId,
        int32_t limitCount,
        int32_t costumeId,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x4
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int32_t CardImageLimitCount; // w20
  __int64 v12; // x1
  System_Int32_array *result; // x0
  __int64 v14; // x1
  unsigned __int64 max_length; // x8
  unsigned __int64 v16; // x9
  int32_t v17; // w12
  bool v18; // cf
  __int64 v19; // x0

  if ( (byte_42EA4B9 & 1) == 0 )
  {
    sub_B5D5C4(&ImageLimitCount_TypeInfo, limitCount, costumeId, method);
    sub_B5D5C4(&int___TypeInfo, v8, v9, v10);
    byte_42EA4B9 = 1;
  }
  if ( (BYTE3(ImageLimitCount_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ImageLimitCount_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
  }
  CardImageLimitCount = ImageLimitCount__GetCardImageLimitCount(svtId, limitCount, 0, 0, v4);
  if ( costumeId <= 10 )
    v12 = 4LL;
  else
    v12 = 5LL;
  result = (System_Int32_array *)sub_B5D5DC(int___TypeInfo, v12);
  if ( !result )
    sub_B5D69C(0LL, v14);
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
      v19 = sub_B5D6C8(result);
      sub_B5D668(v19, 0LL);
    }
    result->m_Items[5] = costumeId;
  }
  return result;
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall ImageLimitCount__GetImageLimitCount(int32_t svtId, int32_t limitCount, const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  ImageLimitCount_c *v9; // x0
  __int16 v10; // w8
  int v11; // w8
  struct ImageLimitCount_StaticFields *static_fields; // x9
  int32_t enemyLimitCountStart; // w10
  System_Collections_Generic_Dictionary_int__int__o *limitMaxList; // x0
  int32_t v16; // w8
  Il2CppClass *v17; // x8
  char *v18; // x8
  Il2CppClass *klass; // x9
  __int64 v20; // x0
  int32_t value; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_42EA4B4 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_int__int__TryGetValue__, limitCount, (_DWORD)method, v3);
    sub_B5D5C4(&ImageLimitCount_TypeInfo, v6, v7, v8);
    byte_42EA4B4 = 1;
  }
  value = 0;
  if ( (limitCount & 0x80000000) != 0 )
    return 0;
  v9 = ImageLimitCount_TypeInfo;
  v10 = WORD1(ImageLimitCount_TypeInfo->vtable._0_Equals.methodPtr);
  if ( (v10 & 0x400) != 0 )
  {
    if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
      v9 = ImageLimitCount_TypeInfo;
      v10 = WORD1(ImageLimitCount_TypeInfo->vtable._0_Equals.methodPtr);
    }
    v11 = v10 & 0x400;
  }
  else
  {
    v11 = 0;
  }
  static_fields = v9->static_fields;
  enemyLimitCountStart = static_fields->enemyLimitCountStart;
  if ( enemyLimitCountStart > limitCount )
  {
    if ( v11 && !v9->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v9);
      static_fields = ImageLimitCount_TypeInfo->static_fields;
    }
    limitMaxList = static_fields->limitMaxList;
    if ( limitMaxList )
    {
      if ( !System_Collections_Generic_Dictionary_int__int___TryGetValue(
              limitMaxList,
              svtId,
              &value,
              (const MethodInfo_2F0CA68 *)Method_System_Collections_Generic_Dictionary_int__int__TryGetValue__) )
        return limitCount - 1;
      limitMaxList = (System_Collections_Generic_Dictionary_int__int__o *)ImageLimitCount_TypeInfo;
      v16 = value;
      if ( value <= limitCount )
      {
        if ( (WORD1(ImageLimitCount_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
          && !ImageLimitCount_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
          limitMaxList = (System_Collections_Generic_Dictionary_int__int__o *)ImageLimitCount_TypeInfo;
          v16 = value;
        }
        klass = limitMaxList[2].fields.entries->obj.klass;
        if ( klass )
        {
          if ( (unsigned int)v16 < LODWORD(klass->_1.namespaze) )
          {
            v18 = (char *)klass + 4 * v16;
            return *((_DWORD *)v18 + 8);
          }
LABEL_36:
          v20 = sub_B5D6C8(limitMaxList);
          sub_B5D668(v20, 0LL);
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
        v17 = limitMaxList[2].fields.entries->obj.klass;
        if ( v17 )
        {
          if ( LODWORD(v17->_1.namespaze) > limitCount )
          {
            v18 = (char *)v17 + 4 * limitCount;
            return *((_DWORD *)v18 + 8);
          }
          goto LABEL_36;
        }
      }
    }
    sub_B5D69C(limitMaxList, *(_QWORD *)&limitCount);
  }
  if ( v11 && !v9->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v9);
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
  __int64 v3; // x3
  ImageLimitCount_c *v6; // x0
  struct System_Int32_array *maxDispLimitCountList; // x8
  int32_t v8; // w8
  __int64 v10; // x0

  if ( (byte_42EA4B3 & 1) == 0 )
  {
    sub_B5D5C4(&ImageLimitCount_TypeInfo, maxLimitCount, (_DWORD)method, v3);
    byte_42EA4B3 = 1;
  }
  if ( dispLimitCount > 10 )
    return dispLimitCount;
  v6 = ImageLimitCount_TypeInfo;
  if ( (BYTE3(ImageLimitCount_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ImageLimitCount_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
    v6 = ImageLimitCount_TypeInfo;
  }
  maxDispLimitCountList = v6->static_fields->maxDispLimitCountList;
  if ( !maxDispLimitCountList )
LABEL_18:
    sub_B5D69C(v6, *(_QWORD *)&maxLimitCount);
  if ( (signed int)maxDispLimitCountList->max_length <= dispLimitCount )
    return 0;
  if ( (BYTE3(v6->vtable._0_Equals.methodPtr) & 4) != 0 && !v6->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v6);
    maxDispLimitCountList = ImageLimitCount_TypeInfo->static_fields->maxDispLimitCountList;
    if ( !maxDispLimitCountList )
      goto LABEL_18;
  }
  if ( maxDispLimitCountList->max_length <= dispLimitCount )
  {
    v10 = sub_B5D6C8(v6);
    sub_B5D668(v10, 0LL);
  }
  v8 = maxDispLimitCountList->m_Items[dispLimitCount + 1];
  if ( v8 <= maxLimitCount )
    return v8;
  else
    return maxLimitCount;
}


int32_t __fastcall ImageLimitCount__GetLimitCountByImageLimit(int32_t imageLimitCount, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  ImageLimitCount_c *v5; // x0
  struct System_Int32_array *minLimitCountList; // x8
  __int64 v8; // x0

  if ( (byte_42EA4AE & 1) == 0 )
  {
    sub_B5D5C4(&ImageLimitCount_TypeInfo, (_DWORD)method, v2, v3);
    byte_42EA4AE = 1;
  }
  v5 = ImageLimitCount_TypeInfo;
  if ( (BYTE3(ImageLimitCount_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ImageLimitCount_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
    v5 = ImageLimitCount_TypeInfo;
  }
  minLimitCountList = v5->static_fields->minLimitCountList;
  if ( !minLimitCountList )
    goto LABEL_14;
  if ( (signed int)minLimitCountList->max_length <= imageLimitCount )
    return 0;
  if ( (BYTE3(v5->vtable._0_Equals.methodPtr) & 4) != 0 && !v5->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v5);
    minLimitCountList = ImageLimitCount_TypeInfo->static_fields->minLimitCountList;
    if ( !minLimitCountList )
LABEL_14:
      sub_B5D69C(v5, method);
  }
  if ( minLimitCountList->max_length <= imageLimitCount )
  {
    v8 = sub_B5D6C8(v5);
    sub_B5D668(v8, 0LL);
  }
  return minLimitCountList->m_Items[imageLimitCount + 1];
}


int32_t __fastcall ImageLimitCount__GetLimitCountByImageLimitCostumeIn(
        int32_t imageLimitCount,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  ImageLimitCount_c *v5; // x0
  struct System_Int32_array *minLimitCountList; // x8
  __int64 v8; // x0

  if ( (byte_42EA4AF & 1) == 0 )
  {
    sub_B5D5C4(&ImageLimitCount_TypeInfo, (_DWORD)method, v2, v3);
    byte_42EA4AF = 1;
  }
  if ( imageLimitCount <= 10 )
  {
    v5 = ImageLimitCount_TypeInfo;
    if ( (BYTE3(ImageLimitCount_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ImageLimitCount_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
      v5 = ImageLimitCount_TypeInfo;
    }
    minLimitCountList = v5->static_fields->minLimitCountList;
    if ( !minLimitCountList )
      goto LABEL_16;
    if ( (signed int)minLimitCountList->max_length <= imageLimitCount )
      return 0;
    if ( (BYTE3(v5->vtable._0_Equals.methodPtr) & 4) != 0 && !v5->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v5);
      minLimitCountList = ImageLimitCount_TypeInfo->static_fields->minLimitCountList;
      if ( !minLimitCountList )
LABEL_16:
        sub_B5D69C(v5, method);
    }
    if ( minLimitCountList->max_length <= imageLimitCount )
    {
      v8 = sub_B5D6C8(v5);
      sub_B5D668(v8, 0LL);
    }
    return minLimitCountList->m_Items[imageLimitCount + 1];
  }
  return imageLimitCount;
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall ImageLimitCount__GetLimitCountByImageLimit_28464584(
        int32_t imageLimitCount,
        int32_t maxLimitCount,
        const MethodInfo *method)
{
  __int64 v3; // x3
  ImageLimitCount_c *v6; // x0
  struct System_Int32_array *maxLimitCountList; // x8
  int32_t v8; // w8
  __int64 v10; // x0

  if ( (byte_42EA4B2 & 1) == 0 )
  {
    sub_B5D5C4(&ImageLimitCount_TypeInfo, maxLimitCount, (_DWORD)method, v3);
    byte_42EA4B2 = 1;
  }
  v6 = ImageLimitCount_TypeInfo;
  if ( (BYTE3(ImageLimitCount_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ImageLimitCount_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
    v6 = ImageLimitCount_TypeInfo;
  }
  maxLimitCountList = v6->static_fields->maxLimitCountList;
  if ( !maxLimitCountList )
    goto LABEL_16;
  if ( (signed int)maxLimitCountList->max_length <= imageLimitCount )
    return 0;
  if ( (BYTE3(v6->vtable._0_Equals.methodPtr) & 4) != 0 && !v6->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v6);
    maxLimitCountList = ImageLimitCount_TypeInfo->static_fields->maxLimitCountList;
    if ( !maxLimitCountList )
LABEL_16:
      sub_B5D69C(v6, *(_QWORD *)&maxLimitCount);
  }
  if ( maxLimitCountList->max_length <= imageLimitCount )
  {
    v10 = sub_B5D6C8(v6);
    sub_B5D668(v10, 0LL);
  }
  v8 = maxLimitCountList->m_Items[imageLimitCount + 1];
  if ( v8 <= maxLimitCount )
    return v8;
  else
    return maxLimitCount;
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall ImageLimitCount__GetRewardImageLimitCount(
        int32_t svtId,
        int32_t limitCount,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v4; // w19
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  ImageLimitCount_c *v9; // x0
  System_Collections_Generic_Dictionary_int__int__o *limitMaxList; // x0
  int32_t v11; // w8
  Il2CppClass *v12; // x8
  char *v13; // x8
  Il2CppClass *klass; // x9
  __int64 v16; // x0
  int32_t value; // [xsp+Ch] [xbp-14h] BYREF

  v4 = limitCount;
  if ( (byte_42EA4B0 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_int__int__TryGetValue__, limitCount, (_DWORD)method, v3);
    sub_B5D5C4(&ImageLimitCount_TypeInfo, v6, v7, v8);
    byte_42EA4B0 = 1;
  }
  value = 0;
  if ( v4 <= 10 )
  {
    v9 = ImageLimitCount_TypeInfo;
    if ( (BYTE3(ImageLimitCount_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ImageLimitCount_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
      v9 = ImageLimitCount_TypeInfo;
    }
    limitMaxList = v9->static_fields->limitMaxList;
    if ( !limitMaxList )
      goto LABEL_25;
    if ( System_Collections_Generic_Dictionary_int__int___TryGetValue(
           limitMaxList,
           svtId,
           &value,
           (const MethodInfo_2F0CA68 *)Method_System_Collections_Generic_Dictionary_int__int__TryGetValue__) )
    {
      limitMaxList = (System_Collections_Generic_Dictionary_int__int__o *)ImageLimitCount_TypeInfo;
      v11 = value;
      if ( value <= v4 )
      {
        if ( (WORD1(ImageLimitCount_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
          && !ImageLimitCount_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
          limitMaxList = (System_Collections_Generic_Dictionary_int__int__o *)ImageLimitCount_TypeInfo;
          v11 = value;
        }
        klass = limitMaxList[2].fields.entries->obj.klass;
        if ( klass )
        {
          if ( (unsigned int)v11 < LODWORD(klass->_1.namespaze) )
          {
            v13 = (char *)klass + 4 * v11;
            return *((_DWORD *)v13 + 8);
          }
LABEL_26:
          v16 = sub_B5D6C8(limitMaxList);
          sub_B5D668(v16, 0LL);
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
        v12 = limitMaxList[2].fields.entries->obj.klass;
        if ( v12 )
        {
          if ( LODWORD(v12->_1.namespaze) > v4 )
          {
            v13 = (char *)v12 + 4 * v4;
            return *((_DWORD *)v13 + 8);
          }
          goto LABEL_26;
        }
      }
LABEL_25:
      sub_B5D69C(limitMaxList, *(_QWORD *)&limitCount);
    }
    return -1;
  }
  return v4;
}


System_Int32_array *__fastcall ImageLimitCount__GetSelectList(
        int32_t svtId,
        int32_t limitCount,
        System_Int32_array *costumeIds,
        const MethodInfo *method)
{
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  int32_t ImageLimitCount; // w21
  signed int max_length; // w23
  System_Collections_Generic_List_int__o *v21; // x20
  __int64 v22; // x0
  __int64 v23; // x1
  int32_t i; // w24
  int32_t v25; // w1
  unsigned __int64 j; // x21
  int32_t v27; // w1
  __int64 v29; // x0

  if ( (byte_42EA4B6 & 1) == 0 )
  {
    sub_B5D5C4(&ImageLimitCount_TypeInfo, limitCount, (_DWORD)costumeIds, method);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__Add__, v7, v8, v9);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__ToArray__, v10, v11, v12);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int___ctor___68740224, v13, v14, v15);
    sub_B5D5C4(&System_Collections_Generic_List_int__TypeInfo, v16, v17, v18);
    byte_42EA4B6 = 1;
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
  v21 = (System_Collections_Generic_List_int__o *)sub_B5D694(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v21,
    (const MethodInfo_30836B0 *)Method_System_Collections_Generic_List_int___ctor___68740224);
  if ( !v21 )
    goto LABEL_24;
  for ( i = 0; i != 3; ++i )
  {
    if ( i > ImageLimitCount )
      v25 = -1;
    else
      v25 = i;
    System_Collections_Generic_List_int___Add(
      v21,
      v25,
      (const MethodInfo_308440C *)Method_System_Collections_Generic_List_int__Add__);
  }
  if ( max_length < 1 )
    return System_Collections_Generic_List_int___ToArray(
             v21,
             (const MethodInfo_3086518 *)Method_System_Collections_Generic_List_int__ToArray__);
  if ( !costumeIds )
LABEL_24:
    sub_B5D69C(v22, v23);
  for ( j = 0LL; (__int64)j < max_length; ++j )
  {
    if ( j >= costumeIds->max_length )
    {
      v29 = sub_B5D6C8(v22);
      sub_B5D668(v29, 0LL);
    }
    v27 = costumeIds->m_Items[j + 1];
    if ( v27 >= 1 )
      System_Collections_Generic_List_int___Add(
        v21,
        v27,
        (const MethodInfo_308440C *)Method_System_Collections_Generic_List_int__Add__);
  }
  return System_Collections_Generic_List_int___ToArray(
           v21,
           (const MethodInfo_3086518 *)Method_System_Collections_Generic_List_int__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
System_Int32_array *__fastcall ImageLimitCount__GetSelectList_28466324(
        int32_t svtId,
        int32_t limitCount,
        int32_t costumeId,
        bool isOwn,
        const MethodInfo *method)
{
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int32_t ImageLimitCount; // w20
  int v16; // w21
  System_Int32_array *result; // x0
  __int64 v18; // x1
  unsigned __int64 max_length; // x8
  unsigned __int64 v20; // x9
  int32_t v21; // w12
  bool v22; // cf
  __int64 v23; // x0

  if ( (byte_42EA4B7 & 1) == 0 )
  {
    sub_B5D5C4(&ImageLimitCount_TypeInfo, limitCount, costumeId, isOwn);
    sub_B5D5C4(&int___TypeInfo, v9, v10, v11);
    sub_B5D5C4(&OptionManager_TypeInfo, v12, v13, v14);
    byte_42EA4B7 = 1;
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
    v16 = 1;
  else
LABEL_7:
    v16 = 0;
  result = (System_Int32_array *)sub_B5D5DC(int___TypeInfo, (unsigned int)(v16 + 3));
  if ( !result )
    sub_B5D69C(0LL, v18);
  max_length = result->max_length;
  v20 = 0LL;
  do
  {
    if ( v20 >= max_length )
      goto LABEL_26;
    if ( (__int64)v20 > ImageLimitCount )
      v21 = -1;
    else
      v21 = v20;
    v22 = v20 >= 2;
    result->m_Items[++v20] = v21;
  }
  while ( !v22 );
  if ( v16 )
  {
    if ( (unsigned int)max_length <= 3 )
    {
LABEL_26:
      v23 = sub_B5D6C8(result);
      sub_B5D668(v23, 0LL);
    }
    result->m_Items[4] = costumeId;
  }
  return result;
}


void __fastcall ImageLimitCount__Initialize(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  int v4; // w1
  int v5; // w2
  __int64 v6; // x3
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  DataManager_o *Instance; // x0
  __int64 v11; // x1
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  System_Int32_array **LimitCountMaxList; // x19
  ImageLimitCount_c *v19; // x8
  struct ImageLimitCount_StaticFields *static_fields; // x0

  if ( (byte_42EA4AD & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_ServantMaster___, v1, v2, v3);
    sub_B5D5C4(&ImageLimitCount_TypeInfo, v4, v5, v6);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7, v8, v9);
    byte_42EA4AD = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ServantMaster___)) == 0LL )
  {
    sub_B5D69C(Instance, v11);
  }
  LimitCountMaxList = (System_Int32_array **)ServantMaster__GetLimitCountMaxList((ServantMaster_o *)Instance, 0LL);
  v19 = ImageLimitCount_TypeInfo;
  if ( (BYTE3(ImageLimitCount_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ImageLimitCount_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
    v19 = ImageLimitCount_TypeInfo;
  }
  static_fields = v19->static_fields;
  static_fields->limitMaxList = (struct System_Collections_Generic_Dictionary_int__int__o *)LimitCountMaxList;
  sub_B5D560(
    (BattleServantConfConponent_o *)&static_fields->limitMaxList,
    LimitCountMaxList,
    v12,
    v13,
    v14,
    v15,
    v16,
    v17);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall ImageLimitCount__TryGetRewardImageLimitCount(
        int32_t svtId,
        int32_t svtLimitCnt,
        int32_t *limitCount,
        const MethodInfo *method)
{
  int v5; // w20
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  ImageLimitCount_c *v10; // x0
  System_Collections_Generic_Dictionary_int__int__o *limitMaxList; // x0
  Il2CppClass *klass; // x8
  __int64 v13; // x0
  bool result; // w0
  int32_t value; // [xsp+Ch] [xbp-24h] BYREF

  v5 = svtLimitCnt;
  if ( (byte_42EA4B1 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_int__int__TryGetValue__,
      svtLimitCnt,
      (_DWORD)limitCount,
      method);
    sub_B5D5C4(&ImageLimitCount_TypeInfo, v7, v8, v9);
    byte_42EA4B1 = 1;
  }
  value = 0;
  *limitCount = -1;
  if ( v5 > 10 )
    goto LABEL_23;
  v10 = ImageLimitCount_TypeInfo;
  if ( (BYTE3(ImageLimitCount_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ImageLimitCount_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
    v10 = ImageLimitCount_TypeInfo;
  }
  limitMaxList = v10->static_fields->limitMaxList;
  if ( !limitMaxList )
    goto LABEL_26;
  if ( !System_Collections_Generic_Dictionary_int__int___TryGetValue(
          limitMaxList,
          svtId,
          &value,
          (const MethodInfo_2F0CA68 *)Method_System_Collections_Generic_Dictionary_int__int__TryGetValue__) )
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
        v13 = sub_B5D6C8(limitMaxList);
        sub_B5D668(v13, 0LL);
      }
      goto LABEL_22;
    }
LABEL_26:
    sub_B5D69C(limitMaxList, *(_QWORD *)&svtLimitCnt);
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
  int v2; // w2
  __int64 v3; // x3
  ImageLimitCount_c *v4; // x0
  struct System_Int32_array *maxDispLimitCountList; // x8

  if ( (byte_42EA4BA & 1) == 0 )
  {
    sub_B5D5C4(&ImageLimitCount_TypeInfo, v1, v2, v3);
    byte_42EA4BA = 1;
  }
  v4 = ImageLimitCount_TypeInfo;
  if ( (BYTE3(ImageLimitCount_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ImageLimitCount_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
    v4 = ImageLimitCount_TypeInfo;
  }
  maxDispLimitCountList = v4->static_fields->maxDispLimitCountList;
  if ( !maxDispLimitCountList )
    sub_B5D69C(v4, v1);
  return maxDispLimitCountList->max_length;
}


void __fastcall ImageLimitCount__initializeAssetStorage(const MethodInfo *method)
{
  ;
}