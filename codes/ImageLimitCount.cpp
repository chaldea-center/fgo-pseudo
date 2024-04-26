void __fastcall ImageLimitCount___cctor(const MethodInfo *method)
{
  System_Array_o *v1; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v3; // x2
  System_String_array **v4; // x3
  System_Boolean_array **v5; // x4
  System_Int32_array **v6; // x5
  System_Int32_array *v7; // x6
  System_Int32_array *v8; // x7
  System_Array_o *v9; // x19
  struct ImageLimitCount_StaticFields *v10; // x0
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  System_Array_o *v17; // x19
  struct ImageLimitCount_StaticFields *v18; // x0
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  System_Int32_array **v25; // x0
  __int64 v26; // x1
  System_String_array **v27; // x2
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7
  unsigned int v33; // w8
  System_Int32_array **v34; // x1
  struct ImageLimitCount_StaticFields *v35; // x0
  System_Array_o *v36; // x19
  struct ImageLimitCount_StaticFields *v37; // x0
  System_String_array **v38; // x2
  System_String_array **v39; // x3
  System_Boolean_array **v40; // x4
  System_Int32_array **v41; // x5
  System_Int32_array *v42; // x6
  System_Int32_array *v43; // x7
  __int64 v44; // x0
  System_RuntimeFieldHandle_o v45; // 0:w1.4
  System_RuntimeFieldHandle_o v46; // 0:w1.4
  System_RuntimeFieldHandle_o v47; // 0:w1.4
  System_RuntimeFieldHandle_o v48; // 0:w1.4

  if ( (byte_43531BA & 1) == 0 )
  {
    sub_B70694(&ImageLimitCount_TypeInfo);
    sub_B70694(&int___TypeInfo);
    sub_B70694(&Field__PrivateImplementationDetails__3A795EE993DCFCD47AE2FD7282FAE2348DADC51429112235F8375626F9439A0B);
    sub_B70694(&Field__PrivateImplementationDetails__598CEB271FAC09B40101AAE5910D6939EFC22B105F7DF2AA77795704D4CC7911);
    sub_B70694(&Field__PrivateImplementationDetails__E8845519DB154B41E620A98F949B9EDCEFB1F9060DC8290A9F7D2C3200ABD0CB);
    sub_B70694(&Field__PrivateImplementationDetails__F239810D17032E35383496434C64894FFE055A198BA7CFB907D73BAF26A70F0C);
    byte_43531BA = 1;
  }
  v1 = (System_Array_o *)sub_B706AC(int___TypeInfo, 5LL);
  v45.fields.value = Field__PrivateImplementationDetails__598CEB271FAC09B40101AAE5910D6939EFC22B105F7DF2AA77795704D4CC7911;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_43287264(v1, v45, 0LL);
  static_fields = (BattleServantConfConponent_o *)ImageLimitCount_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v1;
  sub_B70630(static_fields, (System_Int32_array **)v1, v3, v4, v5, v6, v7, v8);
  v9 = (System_Array_o *)sub_B706AC(int___TypeInfo, 4LL);
  v46.fields.value = Field__PrivateImplementationDetails__F239810D17032E35383496434C64894FFE055A198BA7CFB907D73BAF26A70F0C;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_43287264(v9, v46, 0LL);
  v10 = ImageLimitCount_TypeInfo->static_fields;
  v10->minLimitCountList = (struct System_Int32_array *)v9;
  sub_B70630(
    (BattleServantConfConponent_o *)&v10->minLimitCountList,
    (System_Int32_array **)v9,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
  v17 = (System_Array_o *)sub_B706AC(int___TypeInfo, 4LL);
  v47.fields.value = Field__PrivateImplementationDetails__E8845519DB154B41E620A98F949B9EDCEFB1F9060DC8290A9F7D2C3200ABD0CB;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_43287264(v17, v47, 0LL);
  v18 = ImageLimitCount_TypeInfo->static_fields;
  v18->maxLimitCountList = (struct System_Int32_array *)v17;
  sub_B70630(
    (BattleServantConfConponent_o *)&v18->maxLimitCountList,
    (System_Int32_array **)v17,
    v19,
    v20,
    v21,
    v22,
    v23,
    v24);
  v25 = (System_Int32_array **)sub_B706AC(int___TypeInfo, 3LL);
  if ( !v25 )
    sub_B7076C(0LL, v26);
  v33 = *((_DWORD *)v25 + 6);
  v34 = v25;
  if ( v33 <= 1 || (*((_DWORD *)v25 + 9) = 2, v33 == 2) )
  {
    v44 = sub_B70798(v25);
    sub_B70738(v44, 0LL);
  }
  *((_DWORD *)v25 + 10) = 4;
  v35 = ImageLimitCount_TypeInfo->static_fields;
  v35->maxDispLimitCountList = (struct System_Int32_array *)v34;
  sub_B70630((BattleServantConfConponent_o *)&v35->maxDispLimitCountList, v34, v27, v28, v29, v30, v31, v32);
  v36 = (System_Array_o *)sub_B706AC(int___TypeInfo, 5LL);
  v48.fields.value = Field__PrivateImplementationDetails__3A795EE993DCFCD47AE2FD7282FAE2348DADC51429112235F8375626F9439A0B;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_43287264(v36, v48, 0LL);
  v37 = ImageLimitCount_TypeInfo->static_fields;
  v37->dispLimitCountList = (struct System_Int32_array *)v36;
  sub_B70630(
    (BattleServantConfConponent_o *)&v37->dispLimitCountList,
    (System_Int32_array **)v36,
    v38,
    v39,
    v40,
    v41,
    v42,
    v43);
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
  ImageLimitCount_c *v9; // x0
  System_Collections_Generic_Dictionary_int__int__o *limitMaxList; // x0
  int32_t v11; // w22
  Il2CppClass *klass; // x8
  char *v13; // x8
  BalanceConfig_c *v15; // x0
  Il2CppClass *v16; // x8
  __int64 v17; // x0
  int32_t value; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_43531B3 & 1) == 0 )
  {
    sub_B70694(&BalanceConfig_TypeInfo);
    sub_B70694(&Method_System_Collections_Generic_Dictionary_int__int__TryGetValue__);
    sub_B70694(&ImageLimitCount_TypeInfo);
    sub_B70694(&OptionManager_TypeInfo);
    byte_43531B3 = 1;
  }
  value = 0;
  if ( (limitCount & 0x80000000) != 0 )
    return 0;
  v9 = ImageLimitCount_TypeInfo;
  if ( (BYTE3(ImageLimitCount_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ImageLimitCount_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
    v9 = ImageLimitCount_TypeInfo;
  }
  limitMaxList = v9->static_fields->limitMaxList;
  if ( !limitMaxList )
    goto LABEL_36;
  if ( !System_Collections_Generic_Dictionary_int__int___TryGetValue(
          limitMaxList,
          svtId,
          &value,
          (const MethodInfo_2FBCD70 *)Method_System_Collections_Generic_Dictionary_int__int__TryGetValue__) )
    return limitCount - 1;
  v11 = value;
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
        v13 = (char *)klass + 4 * limitCount;
        return *((_DWORD *)v13 + 8);
      }
      goto LABEL_37;
    }
    goto LABEL_36;
  }
  if ( isNpc )
    goto LABEL_23;
  v15 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v15 = BalanceConfig_TypeInfo;
  }
  if ( v11 < v15->static_fields->ServantLimitMax )
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
      v16 = limitMaxList[2].fields.entries->obj.klass;
      if ( v16 )
      {
        if ( (unsigned int)value < LODWORD(v16->_1.namespaze) )
        {
          v13 = (char *)v16 + 4 * value;
          return *((_DWORD *)v13 + 8);
        }
LABEL_37:
        v17 = sub_B70798(limitMaxList);
        sub_B70738(v17, 0LL);
      }
LABEL_36:
      sub_B7076C(limitMaxList, *(_QWORD *)&limitCount);
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
  int32_t CardImageLimitCount; // w21
  signed int max_length; // w23
  System_Collections_Generic_List_int__o *v10; // x20
  __int64 v11; // x0
  __int64 v12; // x1
  int32_t i; // w24
  int32_t v14; // w1
  unsigned __int64 j; // x21
  int32_t v16; // w1
  __int64 v18; // x0

  if ( (byte_43531B6 & 1) == 0 )
  {
    sub_B70694(&ImageLimitCount_TypeInfo);
    sub_B70694(&Method_System_Collections_Generic_List_int__Add__);
    sub_B70694(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_B70694(&Method_System_Collections_Generic_List_int___ctor__);
    sub_B70694(&System_Collections_Generic_List_int__TypeInfo);
    byte_43531B6 = 1;
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
  v10 = (System_Collections_Generic_List_int__o *)sub_B70764(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v10,
    (const MethodInfo_30B547C *)Method_System_Collections_Generic_List_int___ctor__);
  if ( !v10 )
    goto LABEL_24;
  for ( i = 0; i != 4; ++i )
  {
    if ( i > CardImageLimitCount )
      v14 = -1;
    else
      v14 = i;
    System_Collections_Generic_List_int___Add(
      v10,
      v14,
      (const MethodInfo_30B61D8 *)Method_System_Collections_Generic_List_int__Add__);
  }
  if ( max_length < 1 )
    return System_Collections_Generic_List_int___ToArray(
             v10,
             (const MethodInfo_30B82E4 *)Method_System_Collections_Generic_List_int__ToArray__);
  if ( !costumeIds )
LABEL_24:
    sub_B7076C(v11, v12);
  for ( j = 0LL; (__int64)j < max_length; ++j )
  {
    if ( j >= costumeIds->max_length )
    {
      v18 = sub_B70798(v11);
      sub_B70738(v18, 0LL);
    }
    v16 = costumeIds->m_Items[j + 1];
    if ( v16 >= 1 )
      System_Collections_Generic_List_int___Add(
        v10,
        v16,
        (const MethodInfo_30B61D8 *)Method_System_Collections_Generic_List_int__Add__);
  }
  return System_Collections_Generic_List_int___ToArray(
           v10,
           (const MethodInfo_30B82E4 *)Method_System_Collections_Generic_List_int__ToArray__);
}


System_Int32_array *__fastcall ImageLimitCount__GetCardSelectList_27793888(
        int32_t svtId,
        int32_t limitCount,
        int32_t costumeId,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x4
  int32_t CardImageLimitCount; // w20
  __int64 v9; // x1
  System_Int32_array *result; // x0
  __int64 v11; // x1
  unsigned __int64 max_length; // x8
  unsigned __int64 v13; // x9
  int32_t v14; // w12
  bool v15; // cf
  __int64 v16; // x0

  if ( (byte_43531B7 & 1) == 0 )
  {
    sub_B70694(&ImageLimitCount_TypeInfo);
    sub_B70694(&int___TypeInfo);
    byte_43531B7 = 1;
  }
  if ( (BYTE3(ImageLimitCount_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ImageLimitCount_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
  }
  CardImageLimitCount = ImageLimitCount__GetCardImageLimitCount(svtId, limitCount, 0, 0, v4);
  if ( costumeId <= 10 )
    v9 = 4LL;
  else
    v9 = 5LL;
  result = (System_Int32_array *)sub_B706AC(int___TypeInfo, v9);
  if ( !result )
    sub_B7076C(0LL, v11);
  max_length = result->max_length;
  v13 = 0LL;
  do
  {
    if ( v13 >= max_length )
      goto LABEL_21;
    if ( (__int64)v13 > CardImageLimitCount )
      v14 = -1;
    else
      v14 = v13;
    v15 = v13 >= 3;
    result->m_Items[++v13] = v14;
  }
  while ( !v15 );
  if ( costumeId >= 11 )
  {
    if ( (unsigned int)max_length <= 4 )
    {
LABEL_21:
      v16 = sub_B70798(result);
      sub_B70738(v16, 0LL);
    }
    result->m_Items[5] = costumeId;
  }
  return result;
}


int32_t __fastcall ImageLimitCount__GetDispLimitCount(int32_t limitCount, const MethodInfo *method)
{
  ImageLimitCount_c *v3; // x0
  struct System_Int32_array *dispLimitCountList; // x8
  __int64 v6; // x0

  if ( (byte_43531B9 & 1) == 0 )
  {
    sub_B70694(&ImageLimitCount_TypeInfo);
    byte_43531B9 = 1;
  }
  if ( (limitCount & 0x80000000) != 0 )
    return -1;
  v3 = ImageLimitCount_TypeInfo;
  if ( (BYTE3(ImageLimitCount_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ImageLimitCount_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
    v3 = ImageLimitCount_TypeInfo;
  }
  dispLimitCountList = v3->static_fields->dispLimitCountList;
  if ( !dispLimitCountList )
LABEL_15:
    sub_B7076C(v3, method);
  if ( (signed int)dispLimitCountList->max_length <= limitCount )
    return -1;
  if ( (BYTE3(v3->vtable._0_Equals.methodPtr) & 4) != 0 && !v3->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v3);
    dispLimitCountList = ImageLimitCount_TypeInfo->static_fields->dispLimitCountList;
    if ( !dispLimitCountList )
      goto LABEL_15;
  }
  if ( dispLimitCountList->max_length <= limitCount )
  {
    v6 = sub_B70798(v3);
    sub_B70738(v6, 0LL);
  }
  return dispLimitCountList->m_Items[limitCount + 1];
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall ImageLimitCount__GetImageLimitCount(int32_t svtId, int32_t limitCount, const MethodInfo *method)
{
  ImageLimitCount_c *v5; // x0
  __int16 v6; // w8
  int v7; // w8
  struct ImageLimitCount_StaticFields *static_fields; // x9
  int32_t enemyLimitCountStart; // w10
  System_Collections_Generic_Dictionary_int__int__o *limitMaxList; // x0
  int32_t v12; // w8
  Il2CppClass *v13; // x8
  char *v14; // x8
  Il2CppClass *klass; // x9
  __int64 v16; // x0
  int32_t value; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_43531B2 & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_Dictionary_int__int__TryGetValue__);
    sub_B70694(&ImageLimitCount_TypeInfo);
    byte_43531B2 = 1;
  }
  value = 0;
  if ( (limitCount & 0x80000000) != 0 )
    return 0;
  v5 = ImageLimitCount_TypeInfo;
  v6 = WORD1(ImageLimitCount_TypeInfo->vtable._0_Equals.methodPtr);
  if ( (v6 & 0x400) != 0 )
  {
    if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
      v5 = ImageLimitCount_TypeInfo;
      v6 = WORD1(ImageLimitCount_TypeInfo->vtable._0_Equals.methodPtr);
    }
    v7 = v6 & 0x400;
  }
  else
  {
    v7 = 0;
  }
  static_fields = v5->static_fields;
  enemyLimitCountStart = static_fields->enemyLimitCountStart;
  if ( enemyLimitCountStart > limitCount )
  {
    if ( v7 && !v5->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v5);
      static_fields = ImageLimitCount_TypeInfo->static_fields;
    }
    limitMaxList = static_fields->limitMaxList;
    if ( limitMaxList )
    {
      if ( !System_Collections_Generic_Dictionary_int__int___TryGetValue(
              limitMaxList,
              svtId,
              &value,
              (const MethodInfo_2FBCD70 *)Method_System_Collections_Generic_Dictionary_int__int__TryGetValue__) )
        return limitCount - 1;
      limitMaxList = (System_Collections_Generic_Dictionary_int__int__o *)ImageLimitCount_TypeInfo;
      v12 = value;
      if ( value <= limitCount )
      {
        if ( (WORD1(ImageLimitCount_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
          && !ImageLimitCount_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
          limitMaxList = (System_Collections_Generic_Dictionary_int__int__o *)ImageLimitCount_TypeInfo;
          v12 = value;
        }
        klass = limitMaxList[2].fields.entries->obj.klass;
        if ( klass )
        {
          if ( (unsigned int)v12 < LODWORD(klass->_1.namespaze) )
          {
            v14 = (char *)klass + 4 * v12;
            return *((_DWORD *)v14 + 8);
          }
LABEL_36:
          v16 = sub_B70798(limitMaxList);
          sub_B70738(v16, 0LL);
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
        v13 = limitMaxList[2].fields.entries->obj.klass;
        if ( v13 )
        {
          if ( LODWORD(v13->_1.namespaze) > limitCount )
          {
            v14 = (char *)v13 + 4 * limitCount;
            return *((_DWORD *)v14 + 8);
          }
          goto LABEL_36;
        }
      }
    }
    sub_B7076C(limitMaxList, *(_QWORD *)&limitCount);
  }
  if ( v7 && !v5->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v5);
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

  if ( (byte_43531B1 & 1) == 0 )
  {
    sub_B70694(&ImageLimitCount_TypeInfo);
    byte_43531B1 = 1;
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
    sub_B7076C(v5, *(_QWORD *)&maxLimitCount);
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
    v9 = sub_B70798(v5);
    sub_B70738(v9, 0LL);
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

  if ( (byte_43531AC & 1) == 0 )
  {
    sub_B70694(&ImageLimitCount_TypeInfo);
    byte_43531AC = 1;
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
      sub_B7076C(v3, method);
  }
  if ( minLimitCountList->max_length <= imageLimitCount )
  {
    v6 = sub_B70798(v3);
    sub_B70738(v6, 0LL);
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

  if ( (byte_43531AD & 1) == 0 )
  {
    sub_B70694(&ImageLimitCount_TypeInfo);
    byte_43531AD = 1;
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
        sub_B7076C(v3, method);
    }
    if ( minLimitCountList->max_length <= imageLimitCount )
    {
      v6 = sub_B70798(v3);
      sub_B70738(v6, 0LL);
    }
    return minLimitCountList->m_Items[imageLimitCount + 1];
  }
  return imageLimitCount;
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall ImageLimitCount__GetLimitCountByImageLimit_27791420(
        int32_t imageLimitCount,
        int32_t maxLimitCount,
        const MethodInfo *method)
{
  ImageLimitCount_c *v5; // x0
  struct System_Int32_array *maxLimitCountList; // x8
  int32_t v7; // w8
  __int64 v9; // x0

  if ( (byte_43531B0 & 1) == 0 )
  {
    sub_B70694(&ImageLimitCount_TypeInfo);
    byte_43531B0 = 1;
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
      sub_B7076C(v5, *(_QWORD *)&maxLimitCount);
  }
  if ( maxLimitCountList->max_length <= imageLimitCount )
  {
    v9 = sub_B70798(v5);
    sub_B70738(v9, 0LL);
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
  ImageLimitCount_c *v5; // x0
  System_Collections_Generic_Dictionary_int__int__o *limitMaxList; // x0
  int32_t v7; // w8
  Il2CppClass *v8; // x8
  char *v9; // x8
  Il2CppClass *klass; // x9
  __int64 v12; // x0
  int32_t value; // [xsp+Ch] [xbp-14h] BYREF

  v3 = limitCount;
  if ( (byte_43531AE & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_Dictionary_int__int__TryGetValue__);
    sub_B70694(&ImageLimitCount_TypeInfo);
    byte_43531AE = 1;
  }
  value = 0;
  if ( v3 <= 10 )
  {
    v5 = ImageLimitCount_TypeInfo;
    if ( (BYTE3(ImageLimitCount_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ImageLimitCount_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
      v5 = ImageLimitCount_TypeInfo;
    }
    limitMaxList = v5->static_fields->limitMaxList;
    if ( !limitMaxList )
      goto LABEL_25;
    if ( System_Collections_Generic_Dictionary_int__int___TryGetValue(
           limitMaxList,
           svtId,
           &value,
           (const MethodInfo_2FBCD70 *)Method_System_Collections_Generic_Dictionary_int__int__TryGetValue__) )
    {
      limitMaxList = (System_Collections_Generic_Dictionary_int__int__o *)ImageLimitCount_TypeInfo;
      v7 = value;
      if ( value <= v3 )
      {
        if ( (WORD1(ImageLimitCount_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
          && !ImageLimitCount_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
          limitMaxList = (System_Collections_Generic_Dictionary_int__int__o *)ImageLimitCount_TypeInfo;
          v7 = value;
        }
        klass = limitMaxList[2].fields.entries->obj.klass;
        if ( klass )
        {
          if ( (unsigned int)v7 < LODWORD(klass->_1.namespaze) )
          {
            v9 = (char *)klass + 4 * v7;
            return *((_DWORD *)v9 + 8);
          }
LABEL_26:
          v12 = sub_B70798(limitMaxList);
          sub_B70738(v12, 0LL);
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
        v8 = limitMaxList[2].fields.entries->obj.klass;
        if ( v8 )
        {
          if ( LODWORD(v8->_1.namespaze) > v3 )
          {
            v9 = (char *)v8 + 4 * v3;
            return *((_DWORD *)v9 + 8);
          }
          goto LABEL_26;
        }
      }
LABEL_25:
      sub_B7076C(limitMaxList, *(_QWORD *)&limitCount);
    }
    return -1;
  }
  return v3;
}


System_Int32_array *__fastcall ImageLimitCount__GetSelectList(
        int32_t svtId,
        int32_t limitCount,
        System_Int32_array *costumeIds,
        const MethodInfo *method)
{
  int32_t ImageLimitCount; // w21
  signed int max_length; // w23
  System_Collections_Generic_List_int__o *v9; // x20
  __int64 v10; // x0
  __int64 v11; // x1
  int32_t i; // w24
  int32_t v13; // w1
  unsigned __int64 j; // x21
  int32_t v15; // w1
  __int64 v17; // x0

  if ( (byte_43531B4 & 1) == 0 )
  {
    sub_B70694(&ImageLimitCount_TypeInfo);
    sub_B70694(&Method_System_Collections_Generic_List_int__Add__);
    sub_B70694(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_B70694(&Method_System_Collections_Generic_List_int___ctor__);
    sub_B70694(&System_Collections_Generic_List_int__TypeInfo);
    byte_43531B4 = 1;
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
  v9 = (System_Collections_Generic_List_int__o *)sub_B70764(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v9,
    (const MethodInfo_30B547C *)Method_System_Collections_Generic_List_int___ctor__);
  if ( !v9 )
    goto LABEL_24;
  for ( i = 0; i != 3; ++i )
  {
    if ( i > ImageLimitCount )
      v13 = -1;
    else
      v13 = i;
    System_Collections_Generic_List_int___Add(
      v9,
      v13,
      (const MethodInfo_30B61D8 *)Method_System_Collections_Generic_List_int__Add__);
  }
  if ( max_length < 1 )
    return System_Collections_Generic_List_int___ToArray(
             v9,
             (const MethodInfo_30B82E4 *)Method_System_Collections_Generic_List_int__ToArray__);
  if ( !costumeIds )
LABEL_24:
    sub_B7076C(v10, v11);
  for ( j = 0LL; (__int64)j < max_length; ++j )
  {
    if ( j >= costumeIds->max_length )
    {
      v17 = sub_B70798(v10);
      sub_B70738(v17, 0LL);
    }
    v15 = costumeIds->m_Items[j + 1];
    if ( v15 >= 1 )
      System_Collections_Generic_List_int___Add(
        v9,
        v15,
        (const MethodInfo_30B61D8 *)Method_System_Collections_Generic_List_int__Add__);
  }
  return System_Collections_Generic_List_int___ToArray(
           v9,
           (const MethodInfo_30B82E4 *)Method_System_Collections_Generic_List_int__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
System_Int32_array *__fastcall ImageLimitCount__GetSelectList_27793160(
        int32_t svtId,
        int32_t limitCount,
        int32_t costumeId,
        bool isOwn,
        const MethodInfo *method)
{
  int32_t ImageLimitCount; // w20
  int v10; // w21
  System_Int32_array *result; // x0
  __int64 v12; // x1
  unsigned __int64 max_length; // x8
  unsigned __int64 v14; // x9
  int32_t v15; // w12
  bool v16; // cf
  __int64 v17; // x0

  if ( (byte_43531B5 & 1) == 0 )
  {
    sub_B70694(&ImageLimitCount_TypeInfo);
    sub_B70694(&int___TypeInfo);
    sub_B70694(&OptionManager_TypeInfo);
    byte_43531B5 = 1;
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
    v10 = 1;
  else
LABEL_7:
    v10 = 0;
  result = (System_Int32_array *)sub_B706AC(int___TypeInfo, (unsigned int)(v10 + 3));
  if ( !result )
    sub_B7076C(0LL, v12);
  max_length = result->max_length;
  v14 = 0LL;
  do
  {
    if ( v14 >= max_length )
      goto LABEL_26;
    if ( (__int64)v14 > ImageLimitCount )
      v15 = -1;
    else
      v15 = v14;
    v16 = v14 >= 2;
    result->m_Items[++v14] = v15;
  }
  while ( !v16 );
  if ( v10 )
  {
    if ( (unsigned int)max_length <= 3 )
    {
LABEL_26:
      v17 = sub_B70798(result);
      sub_B70738(v17, 0LL);
    }
    result->m_Items[4] = costumeId;
  }
  return result;
}


void __fastcall ImageLimitCount__Initialize(const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v2; // x1
  System_String_array **v3; // x2
  System_String_array **v4; // x3
  System_Boolean_array **v5; // x4
  System_Int32_array **v6; // x5
  System_Int32_array *v7; // x6
  System_Int32_array *v8; // x7
  System_Int32_array **LimitCountMaxList; // x19
  ImageLimitCount_c *v10; // x8
  struct ImageLimitCount_StaticFields *static_fields; // x0

  if ( (byte_43531AB & 1) == 0 )
  {
    sub_B70694(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_B70694(&ImageLimitCount_TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_43531AB = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_ServantMaster___)) == 0LL )
  {
    sub_B7076C(Instance, v2);
  }
  LimitCountMaxList = (System_Int32_array **)ServantMaster__GetLimitCountMaxList((ServantMaster_o *)Instance, 0LL);
  v10 = ImageLimitCount_TypeInfo;
  if ( (BYTE3(ImageLimitCount_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ImageLimitCount_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
    v10 = ImageLimitCount_TypeInfo;
  }
  static_fields = v10->static_fields;
  static_fields->limitMaxList = (struct System_Collections_Generic_Dictionary_int__int__o *)LimitCountMaxList;
  sub_B70630((BattleServantConfConponent_o *)&static_fields->limitMaxList, LimitCountMaxList, v3, v4, v5, v6, v7, v8);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall ImageLimitCount__TryGetRewardImageLimitCount(
        int32_t svtId,
        int32_t svtLimitCnt,
        int32_t *limitCount,
        const MethodInfo *method)
{
  int v5; // w20
  ImageLimitCount_c *v7; // x0
  System_Collections_Generic_Dictionary_int__int__o *limitMaxList; // x0
  Il2CppClass *klass; // x8
  __int64 v10; // x0
  bool result; // w0
  int32_t value; // [xsp+Ch] [xbp-24h] BYREF

  v5 = svtLimitCnt;
  if ( (byte_43531AF & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_Dictionary_int__int__TryGetValue__);
    sub_B70694(&ImageLimitCount_TypeInfo);
    byte_43531AF = 1;
  }
  value = 0;
  *limitCount = -1;
  if ( v5 > 10 )
    goto LABEL_23;
  v7 = ImageLimitCount_TypeInfo;
  if ( (BYTE3(ImageLimitCount_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ImageLimitCount_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
    v7 = ImageLimitCount_TypeInfo;
  }
  limitMaxList = v7->static_fields->limitMaxList;
  if ( !limitMaxList )
    goto LABEL_26;
  if ( !System_Collections_Generic_Dictionary_int__int___TryGetValue(
          limitMaxList,
          svtId,
          &value,
          (const MethodInfo_2FBCD70 *)Method_System_Collections_Generic_Dictionary_int__int__TryGetValue__) )
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
        v10 = sub_B70798(limitMaxList);
        sub_B70738(v10, 0LL);
      }
      goto LABEL_22;
    }
LABEL_26:
    sub_B7076C(limitMaxList, *(_QWORD *)&svtLimitCnt);
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

  if ( (byte_43531B8 & 1) == 0 )
  {
    sub_B70694(&ImageLimitCount_TypeInfo);
    byte_43531B8 = 1;
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
    sub_B7076C(v2, v1);
  return maxDispLimitCountList->max_length;
}


void __fastcall ImageLimitCount__initializeAssetStorage(const MethodInfo *method)
{
  ;
}