void __fastcall ImageLimitCount___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  System_Array_o *v7; // x0
  struct System_Int32_array *v8; // x19
  int32_t v9; // w2
  int32_t v10; // w3
  System_Array_o *v11; // x0
  System_Array_o *v12; // x19
  struct ImageLimitCount_StaticFields *static_fields; // x0
  int32_t v14; // w2
  int32_t v15; // w3
  System_Array_o *v16; // x0
  System_Array_o *v17; // x19
  struct ImageLimitCount_StaticFields *v18; // x0
  int32_t v19; // w2
  int32_t v20; // w3
  struct System_Int32_array *v21; // x0
  __int64 v22; // x1
  int32_t v23; // w2
  int32_t v24; // w3
  unsigned int max_length; // w8
  struct System_Int32_array *v26; // x1
  struct ImageLimitCount_StaticFields *v27; // x0
  System_Array_o *v28; // x0
  System_Array_o *v29; // x19
  struct ImageLimitCount_StaticFields *v30; // x0
  int32_t v31; // w2
  int32_t v32; // w3
  System_RuntimeFieldHandle_o v33; // 0:w1.4
  System_RuntimeFieldHandle_o v34; // 0:w1.4
  System_RuntimeFieldHandle_o v35; // 0:w1.4
  System_RuntimeFieldHandle_o v36; // 0:w1.4

  if ( (byte_49FDB55 & 1) == 0 )
  {
    sub_1B64A00(&ImageLimitCount_TypeInfo, v1);
    sub_1B64A00(&int___TypeInfo, v2);
    sub_1B64A00(
      &Field__PrivateImplementationDetails__3A795EE993DCFCD47AE2FD7282FAE2348DADC51429112235F8375626F9439A0B,
      v3);
    sub_1B64A00(
      &Field__PrivateImplementationDetails__598CEB271FAC09B40101AAE5910D6939EFC22B105F7DF2AA77795704D4CC7911,
      v4);
    sub_1B64A00(
      &Field__PrivateImplementationDetails__E8845519DB154B41E620A98F949B9EDCEFB1F9060DC8290A9F7D2C3200ABD0CB,
      v5);
    sub_1B64A00(
      &Field__PrivateImplementationDetails__F239810D17032E35383496434C64894FFE055A198BA7CFB907D73BAF26A70F0C,
      v6);
    byte_49FDB55 = 1;
  }
  v7 = (System_Array_o *)sub_1B64AA8(int___TypeInfo, 5LL);
  v33.fields.value = Field__PrivateImplementationDetails__598CEB271FAC09B40101AAE5910D6939EFC22B105F7DF2AA77795704D4CC7911;
  v8 = (struct System_Int32_array *)v7;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_61293216(v7, v33, 0LL);
  ImageLimitCount_TypeInfo->static_fields->imageLimitCountList = v8;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)ImageLimitCount_TypeInfo->static_fields, (int32_t)v8, v9, v10);
  v11 = (System_Array_o *)sub_1B64AA8(int___TypeInfo, 4LL);
  v34.fields.value = Field__PrivateImplementationDetails__F239810D17032E35383496434C64894FFE055A198BA7CFB907D73BAF26A70F0C;
  v12 = v11;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_61293216(v11, v34, 0LL);
  static_fields = ImageLimitCount_TypeInfo->static_fields;
  static_fields->minLimitCountList = (struct System_Int32_array *)v12;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&static_fields->minLimitCountList, (int32_t)v12, v14, v15);
  v16 = (System_Array_o *)sub_1B64AA8(int___TypeInfo, 4LL);
  v35.fields.value = Field__PrivateImplementationDetails__E8845519DB154B41E620A98F949B9EDCEFB1F9060DC8290A9F7D2C3200ABD0CB;
  v17 = v16;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_61293216(v16, v35, 0LL);
  v18 = ImageLimitCount_TypeInfo->static_fields;
  v18->maxLimitCountList = (struct System_Int32_array *)v17;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&v18->maxLimitCountList, (int32_t)v17, v19, v20);
  v21 = (struct System_Int32_array *)sub_1B64AA8(int___TypeInfo, 3LL);
  if ( !v21 )
    sub_1B64C5C(0LL, v22);
  max_length = v21->max_length;
  v26 = v21;
  if ( max_length <= 1 || (v21->m_Items[2] = 2, max_length == 2) )
    sub_1B64C64(v21, v21);
  v21->m_Items[3] = 4;
  v27 = ImageLimitCount_TypeInfo->static_fields;
  v27->maxDispLimitCountList = v26;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&v27->maxDispLimitCountList, (int32_t)v26, v23, v24);
  v28 = (System_Array_o *)sub_1B64AA8(int___TypeInfo, 5LL);
  v36.fields.value = Field__PrivateImplementationDetails__3A795EE993DCFCD47AE2FD7282FAE2348DADC51429112235F8375626F9439A0B;
  v29 = v28;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_61293216(v28, v36, 0LL);
  v30 = ImageLimitCount_TypeInfo->static_fields;
  v30->dispLimitCountList = (struct System_Int32_array *)v29;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&v30->dispLimitCountList, (int32_t)v29, v31, v32);
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
  Il2CppClass *v15; // x8
  char *v16; // x8
  BalanceConfig_c *v18; // x0
  Il2CppClass *klass; // x8
  int32_t value; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_49FDB4E & 1) == 0 )
  {
    sub_1B64A00(&BalanceConfig_TypeInfo, *(_QWORD *)&limitCount);
    sub_1B64A00(&Method_System_Collections_Generic_Dictionary_int__int__TryGetValue__, v9);
    sub_1B64A00(&ImageLimitCount_TypeInfo, v10);
    sub_1B64A00(&OptionManager_TypeInfo, v11);
    byte_49FDB4E = 1;
  }
  value = 0;
  if ( (limitCount & 0x80000000) != 0 )
    return 0;
  v12 = ImageLimitCount_TypeInfo;
  if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
    v12 = ImageLimitCount_TypeInfo;
  }
  limitMaxList = v12->static_fields->limitMaxList;
  if ( !limitMaxList )
    goto LABEL_32;
  if ( !System_Collections_Generic_Dictionary_int__int___TryGetValue(
          limitMaxList,
          svtId,
          &value,
          (const MethodInfo_311EE40 *)Method_System_Collections_Generic_Dictionary_int__int__TryGetValue__) )
    return limitCount - 1;
  v14 = value;
  if ( value <= limitCount )
  {
    if ( !isNpc )
    {
      v18 = BalanceConfig_TypeInfo;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        v18 = BalanceConfig_TypeInfo;
      }
      if ( v14 >= v18->static_fields->ServantLimitMax )
      {
        if ( isOwn )
          return 3;
        if ( !OptionManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
        if ( OptionManager__GetFriendImageLimitCount(0LL) )
          return 3;
      }
    }
    limitMaxList = (System_Collections_Generic_Dictionary_int__int__o *)ImageLimitCount_TypeInfo;
    if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
      limitMaxList = (System_Collections_Generic_Dictionary_int__int__o *)ImageLimitCount_TypeInfo;
    }
    klass = limitMaxList[2].fields._entries->obj.klass;
    if ( klass )
    {
      if ( (unsigned int)value < LODWORD(klass->_1.namespaze) )
      {
        v16 = (char *)klass + 4 * value;
        return *((_DWORD *)v16 + 8);
      }
LABEL_33:
      sub_1B64C64(limitMaxList, *(_QWORD *)&limitCount);
    }
LABEL_32:
    sub_1B64C5C(limitMaxList, *(_QWORD *)&limitCount);
  }
  limitMaxList = (System_Collections_Generic_Dictionary_int__int__o *)ImageLimitCount_TypeInfo;
  if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
    limitMaxList = (System_Collections_Generic_Dictionary_int__int__o *)ImageLimitCount_TypeInfo;
  }
  v15 = limitMaxList[2].fields._entries->obj.klass;
  if ( !v15 )
    goto LABEL_32;
  if ( LODWORD(v15->_1.namespaze) <= limitCount )
    goto LABEL_33;
  v16 = (char *)v15 + 4 * (unsigned int)limitCount;
  return *((_DWORD *)v16 + 8);
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
  signed int max_length; // w24
  System_Collections_Generic_List_int__o *v14; // x20
  __int64 v15; // x0
  __int64 v16; // x1
  int32_t i; // w25
  struct System_Int32_array *items; // x8
  _QWORD *v19; // x9
  __int64 size; // x10
  unsigned __int64 j; // x21
  struct System_Int32_array *v22; // x8
  _QWORD *v23; // x9
  __int64 v24; // x10

  if ( (byte_49FDB51 & 1) == 0 )
  {
    sub_1B64A00(&ImageLimitCount_TypeInfo, *(_QWORD *)&limitCount);
    sub_1B64A00(&Method_System_Collections_Generic_List_int__Add__, v8);
    sub_1B64A00(&Method_System_Collections_Generic_List_int__ToArray__, v9);
    sub_1B64A00(&Method_System_Collections_Generic_List_int___ctor__, v10);
    sub_1B64A00(&System_Collections_Generic_List_int__TypeInfo, v11);
    byte_49FDB51 = 1;
  }
  if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
  CardImageLimitCount = ImageLimitCount__GetCardImageLimitCount(svtId, limitCount, 1, 0, v4);
  if ( costumeIds )
    max_length = costumeIds->max_length;
  else
    max_length = 0;
  v14 = (System_Collections_Generic_List_int__o *)sub_1B64C4C(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v14,
    (const MethodInfo_3491F7C *)Method_System_Collections_Generic_List_int___ctor__);
  if ( !v14 )
    goto LABEL_29;
  for ( i = 0; i != 4; ++i )
  {
    items = v14->fields._items;
    v19 = Method_System_Collections_Generic_List_int__Add__;
    if ( i > CardImageLimitCount )
      v16 = 0xFFFFFFFFLL;
    else
      v16 = (unsigned int)i;
    ++v14->fields._version;
    if ( !items )
      goto LABEL_29;
    size = v14->fields._size;
    if ( (unsigned int)size >= items->max_length )
    {
      System_Collections_Generic_List_int___AddWithResize(
        v14,
        v16,
        *(const MethodInfo_34927D0 **)(*(_QWORD *)(v19[4] + 192LL) + 112LL));
    }
    else
    {
      v14->fields._size = size + 1;
      items->m_Items[size + 1] = v16;
    }
  }
  if ( max_length >= 1 )
  {
    if ( costumeIds )
    {
      for ( j = 0LL; j != max_length; ++j )
      {
        if ( j >= costumeIds->max_length )
          sub_1B64C64(v15, v16);
        v16 = (unsigned int)costumeIds->m_Items[j + 1];
        if ( (int)v16 >= 1 )
        {
          v22 = v14->fields._items;
          v23 = Method_System_Collections_Generic_List_int__Add__;
          ++v14->fields._version;
          if ( !v22 )
            goto LABEL_29;
          v24 = v14->fields._size;
          if ( (unsigned int)v24 >= v22->max_length )
          {
            System_Collections_Generic_List_int___AddWithResize(
              v14,
              v16,
              *(const MethodInfo_34927D0 **)(*(_QWORD *)(v23[4] + 192LL) + 112LL));
          }
          else
          {
            v14->fields._size = v24 + 1;
            v22->m_Items[v24 + 1] = v16;
          }
        }
      }
      return System_Collections_Generic_List_int___ToArray(
               v14,
               (const MethodInfo_3494328 *)Method_System_Collections_Generic_List_int__ToArray__);
    }
LABEL_29:
    sub_1B64C5C(v15, v16);
  }
  return System_Collections_Generic_List_int___ToArray(
           v14,
           (const MethodInfo_3494328 *)Method_System_Collections_Generic_List_int__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
System_Int32_array *__fastcall ImageLimitCount__GetCardSelectList_37387972(
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
  unsigned __int64 i; // x9
  int32_t v15; // w12

  if ( (byte_49FDB52 & 1) == 0 )
  {
    sub_1B64A00(&ImageLimitCount_TypeInfo, *(_QWORD *)&limitCount);
    sub_1B64A00(&int___TypeInfo, v8);
    byte_49FDB52 = 1;
  }
  if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
  CardImageLimitCount = ImageLimitCount__GetCardImageLimitCount(svtId, limitCount, 0, 0, v4);
  if ( costumeId <= 10 )
    v10 = 4LL;
  else
    v10 = 5LL;
  result = (System_Int32_array *)sub_1B64AA8(int___TypeInfo, v10);
  if ( !result )
    sub_1B64C5C(0LL, v12);
  max_length = result->max_length;
  for ( i = 0LL; i != 4; ++i )
  {
    if ( i >= max_length )
      goto LABEL_19;
    if ( (__int64)i > CardImageLimitCount )
      v15 = -1;
    else
      v15 = i;
    result->m_Items[i + 1] = v15;
  }
  if ( costumeId >= 11 )
  {
    if ( (unsigned int)max_length <= 4 )
LABEL_19:
      sub_1B64C64(result, v12);
    result->m_Items[5] = costumeId;
  }
  return result;
}


int32_t __fastcall ImageLimitCount__GetDispLimitCount(int32_t limitCount, const MethodInfo *method)
{
  ImageLimitCount_c *v3; // x0
  struct System_Int32_array *dispLimitCountList; // x8

  if ( (byte_49FDB54 & 1) == 0 )
  {
    sub_1B64A00(&ImageLimitCount_TypeInfo, method);
    byte_49FDB54 = 1;
  }
  if ( (limitCount & 0x80000000) != 0 )
    return -1;
  v3 = ImageLimitCount_TypeInfo;
  if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
    v3 = ImageLimitCount_TypeInfo;
  }
  dispLimitCountList = v3->static_fields->dispLimitCountList;
  if ( !dispLimitCountList )
LABEL_13:
    sub_1B64C5C(v3, method);
  if ( (signed int)dispLimitCountList->max_length <= limitCount )
    return -1;
  if ( !v3->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v3);
    dispLimitCountList = ImageLimitCount_TypeInfo->static_fields->dispLimitCountList;
    if ( !dispLimitCountList )
      goto LABEL_13;
  }
  if ( dispLimitCountList->max_length <= limitCount )
    sub_1B64C64(v3, method);
  return dispLimitCountList->m_Items[limitCount + 1];
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall ImageLimitCount__GetImageLimitCount(int32_t svtId, int32_t limitCount, const MethodInfo *method)
{
  __int64 v5; // x1
  struct ImageLimitCount_StaticFields *static_fields; // x8
  System_Collections_Generic_Dictionary_int__int__o *limitMaxList; // x0
  int32_t v8; // w20
  Il2CppClass *klass; // x8
  char *v10; // x8
  int32_t enemyLimitCountStart; // w22
  int32_t value; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_49FDB4D & 1) == 0 )
  {
    sub_1B64A00(&Method_System_Collections_Generic_Dictionary_int__int__TryGetValue__, *(_QWORD *)&limitCount);
    sub_1B64A00(&ImageLimitCount_TypeInfo, v5);
    byte_49FDB4D = 1;
  }
  value = 0;
  if ( (limitCount & 0x80000000) != 0 )
    return 0;
  if ( ImageLimitCount_TypeInfo->_2.cctor_finished )
  {
    static_fields = ImageLimitCount_TypeInfo->static_fields;
    if ( static_fields->enemyLimitCountStart > limitCount )
      goto LABEL_6;
    return limitCount - static_fields->enemyLimitCountStart;
  }
  j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
  static_fields = ImageLimitCount_TypeInfo->static_fields;
  enemyLimitCountStart = static_fields->enemyLimitCountStart;
  if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
    static_fields = ImageLimitCount_TypeInfo->static_fields;
  }
  if ( enemyLimitCountStart <= limitCount )
    return limitCount - static_fields->enemyLimitCountStart;
LABEL_6:
  limitMaxList = static_fields->limitMaxList;
  if ( !limitMaxList )
    goto LABEL_24;
  if ( !System_Collections_Generic_Dictionary_int__int___TryGetValue(
          limitMaxList,
          svtId,
          &value,
          (const MethodInfo_311EE40 *)Method_System_Collections_Generic_Dictionary_int__int__TryGetValue__) )
    return limitCount - 1;
  limitMaxList = (System_Collections_Generic_Dictionary_int__int__o *)ImageLimitCount_TypeInfo;
  v8 = value;
  if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
    limitMaxList = (System_Collections_Generic_Dictionary_int__int__o *)ImageLimitCount_TypeInfo;
  }
  klass = limitMaxList[2].fields._entries->obj.klass;
  if ( v8 <= limitCount )
  {
    if ( klass )
    {
      if ( (unsigned int)value < LODWORD(klass->_1.namespaze) )
      {
        v10 = (char *)klass + 4 * value;
        return *((_DWORD *)v10 + 8);
      }
LABEL_25:
      sub_1B64C64(limitMaxList, *(_QWORD *)&limitCount);
    }
LABEL_24:
    sub_1B64C5C(limitMaxList, *(_QWORD *)&limitCount);
  }
  if ( !klass )
    goto LABEL_24;
  if ( LODWORD(klass->_1.namespaze) <= limitCount )
    goto LABEL_25;
  v10 = (char *)klass + 4 * (unsigned int)limitCount;
  return *((_DWORD *)v10 + 8);
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

  if ( (byte_49FDB4C & 1) == 0 )
  {
    sub_1B64A00(&ImageLimitCount_TypeInfo, *(_QWORD *)&maxLimitCount);
    byte_49FDB4C = 1;
  }
  if ( dispLimitCount > 10 )
    return dispLimitCount;
  v5 = ImageLimitCount_TypeInfo;
  if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
    v5 = ImageLimitCount_TypeInfo;
  }
  maxDispLimitCountList = v5->static_fields->maxDispLimitCountList;
  if ( !maxDispLimitCountList )
LABEL_16:
    sub_1B64C5C(v5, *(_QWORD *)&maxLimitCount);
  if ( (signed int)maxDispLimitCountList->max_length <= dispLimitCount )
    return 0;
  if ( !v5->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v5);
    maxDispLimitCountList = ImageLimitCount_TypeInfo->static_fields->maxDispLimitCountList;
    if ( !maxDispLimitCountList )
      goto LABEL_16;
  }
  if ( maxDispLimitCountList->max_length <= dispLimitCount )
    sub_1B64C64(v5, *(_QWORD *)&maxLimitCount);
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

  if ( (byte_49FDB47 & 1) == 0 )
  {
    sub_1B64A00(&ImageLimitCount_TypeInfo, method);
    byte_49FDB47 = 1;
  }
  v3 = ImageLimitCount_TypeInfo;
  if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
    v3 = ImageLimitCount_TypeInfo;
  }
  minLimitCountList = v3->static_fields->minLimitCountList;
  if ( !minLimitCountList )
    goto LABEL_12;
  if ( (signed int)minLimitCountList->max_length <= imageLimitCount )
    return 0;
  if ( !v3->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v3);
    minLimitCountList = ImageLimitCount_TypeInfo->static_fields->minLimitCountList;
    if ( !minLimitCountList )
LABEL_12:
      sub_1B64C5C(v3, method);
  }
  if ( minLimitCountList->max_length <= imageLimitCount )
    sub_1B64C64(v3, method);
  return minLimitCountList->m_Items[imageLimitCount + 1];
}


int32_t __fastcall ImageLimitCount__GetLimitCountByImageLimitCostumeIn(
        int32_t imageLimitCount,
        const MethodInfo *method)
{
  ImageLimitCount_c *v3; // x0
  struct System_Int32_array *minLimitCountList; // x8

  if ( (byte_49FDB48 & 1) == 0 )
  {
    sub_1B64A00(&ImageLimitCount_TypeInfo, method);
    byte_49FDB48 = 1;
  }
  if ( imageLimitCount <= 10 )
  {
    v3 = ImageLimitCount_TypeInfo;
    if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
      v3 = ImageLimitCount_TypeInfo;
    }
    minLimitCountList = v3->static_fields->minLimitCountList;
    if ( !minLimitCountList )
      goto LABEL_14;
    if ( (signed int)minLimitCountList->max_length <= imageLimitCount )
      return 0;
    if ( !v3->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v3);
      minLimitCountList = ImageLimitCount_TypeInfo->static_fields->minLimitCountList;
      if ( !minLimitCountList )
LABEL_14:
        sub_1B64C5C(v3, method);
    }
    if ( minLimitCountList->max_length <= imageLimitCount )
      sub_1B64C64(v3, method);
    return minLimitCountList->m_Items[imageLimitCount + 1];
  }
  return imageLimitCount;
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall ImageLimitCount__GetLimitCountByImageLimit_37385500(
        int32_t imageLimitCount,
        int32_t maxLimitCount,
        const MethodInfo *method)
{
  ImageLimitCount_c *v5; // x0
  struct System_Int32_array *maxLimitCountList; // x8
  int32_t v7; // w8

  if ( (byte_49FDB4B & 1) == 0 )
  {
    sub_1B64A00(&ImageLimitCount_TypeInfo, *(_QWORD *)&maxLimitCount);
    byte_49FDB4B = 1;
  }
  v5 = ImageLimitCount_TypeInfo;
  if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
    v5 = ImageLimitCount_TypeInfo;
  }
  maxLimitCountList = v5->static_fields->maxLimitCountList;
  if ( !maxLimitCountList )
    goto LABEL_14;
  if ( (signed int)maxLimitCountList->max_length <= imageLimitCount )
    return 0;
  if ( !v5->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v5);
    maxLimitCountList = ImageLimitCount_TypeInfo->static_fields->maxLimitCountList;
    if ( !maxLimitCountList )
LABEL_14:
      sub_1B64C5C(v5, *(_QWORD *)&maxLimitCount);
  }
  if ( maxLimitCountList->max_length <= imageLimitCount )
    sub_1B64C64(v5, *(_QWORD *)&maxLimitCount);
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
  int32_t v8; // w20
  Il2CppClass *klass; // x8
  char *v10; // x8
  int32_t value; // [xsp+Ch] [xbp-24h] BYREF

  v3 = limitCount;
  if ( (byte_49FDB49 & 1) == 0 )
  {
    sub_1B64A00(&Method_System_Collections_Generic_Dictionary_int__int__TryGetValue__, *(_QWORD *)&limitCount);
    sub_1B64A00(&ImageLimitCount_TypeInfo, v5);
    byte_49FDB49 = 1;
  }
  value = 0;
  if ( v3 <= 10 )
  {
    v6 = ImageLimitCount_TypeInfo;
    if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
      v6 = ImageLimitCount_TypeInfo;
    }
    limitMaxList = v6->static_fields->limitMaxList;
    if ( !limitMaxList )
      goto LABEL_20;
    if ( System_Collections_Generic_Dictionary_int__int___TryGetValue(
           limitMaxList,
           svtId,
           &value,
           (const MethodInfo_311EE40 *)Method_System_Collections_Generic_Dictionary_int__int__TryGetValue__) )
    {
      limitMaxList = (System_Collections_Generic_Dictionary_int__int__o *)ImageLimitCount_TypeInfo;
      v8 = value;
      if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
        limitMaxList = (System_Collections_Generic_Dictionary_int__int__o *)ImageLimitCount_TypeInfo;
      }
      klass = limitMaxList[2].fields._entries->obj.klass;
      if ( v8 <= v3 )
      {
        if ( klass )
        {
          if ( (unsigned int)value < LODWORD(klass->_1.namespaze) )
          {
            v10 = (char *)klass + 4 * value;
            return *((_DWORD *)v10 + 8);
          }
LABEL_21:
          sub_1B64C64(limitMaxList, *(_QWORD *)&limitCount);
        }
      }
      else if ( klass )
      {
        if ( LODWORD(klass->_1.namespaze) > v3 )
        {
          v10 = (char *)klass + 4 * v3;
          return *((_DWORD *)v10 + 8);
        }
        goto LABEL_21;
      }
LABEL_20:
      sub_1B64C5C(limitMaxList, *(_QWORD *)&limitCount);
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
  signed int max_length; // w24
  System_Collections_Generic_List_int__o *v13; // x20
  __int64 v14; // x0
  __int64 v15; // x1
  int32_t i; // w25
  struct System_Int32_array *items; // x8
  _QWORD *v18; // x9
  __int64 size; // x10
  unsigned __int64 j; // x21
  struct System_Int32_array *v21; // x8
  _QWORD *v22; // x9
  __int64 v23; // x10

  if ( (byte_49FDB4F & 1) == 0 )
  {
    sub_1B64A00(&ImageLimitCount_TypeInfo, *(_QWORD *)&limitCount);
    sub_1B64A00(&Method_System_Collections_Generic_List_int__Add__, v7);
    sub_1B64A00(&Method_System_Collections_Generic_List_int__ToArray__, v8);
    sub_1B64A00(&Method_System_Collections_Generic_List_int___ctor__, v9);
    sub_1B64A00(&System_Collections_Generic_List_int__TypeInfo, v10);
    byte_49FDB4F = 1;
  }
  if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
  ImageLimitCount = ImageLimitCount__GetImageLimitCount(svtId, limitCount, (const MethodInfo *)costumeIds);
  if ( costumeIds )
    max_length = costumeIds->max_length;
  else
    max_length = 0;
  v13 = (System_Collections_Generic_List_int__o *)sub_1B64C4C(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v13,
    (const MethodInfo_3491F7C *)Method_System_Collections_Generic_List_int___ctor__);
  if ( !v13 )
    goto LABEL_29;
  for ( i = 0; i != 3; ++i )
  {
    items = v13->fields._items;
    v18 = Method_System_Collections_Generic_List_int__Add__;
    if ( i > ImageLimitCount )
      v15 = 0xFFFFFFFFLL;
    else
      v15 = (unsigned int)i;
    ++v13->fields._version;
    if ( !items )
      goto LABEL_29;
    size = v13->fields._size;
    if ( (unsigned int)size >= items->max_length )
    {
      System_Collections_Generic_List_int___AddWithResize(
        v13,
        v15,
        *(const MethodInfo_34927D0 **)(*(_QWORD *)(v18[4] + 192LL) + 112LL));
    }
    else
    {
      v13->fields._size = size + 1;
      items->m_Items[size + 1] = v15;
    }
  }
  if ( max_length >= 1 )
  {
    if ( costumeIds )
    {
      for ( j = 0LL; j != max_length; ++j )
      {
        if ( j >= costumeIds->max_length )
          sub_1B64C64(v14, v15);
        v15 = (unsigned int)costumeIds->m_Items[j + 1];
        if ( (int)v15 >= 1 )
        {
          v21 = v13->fields._items;
          v22 = Method_System_Collections_Generic_List_int__Add__;
          ++v13->fields._version;
          if ( !v21 )
            goto LABEL_29;
          v23 = v13->fields._size;
          if ( (unsigned int)v23 >= v21->max_length )
          {
            System_Collections_Generic_List_int___AddWithResize(
              v13,
              v15,
              *(const MethodInfo_34927D0 **)(*(_QWORD *)(v22[4] + 192LL) + 112LL));
          }
          else
          {
            v13->fields._size = v23 + 1;
            v21->m_Items[v23 + 1] = v15;
          }
        }
      }
      return System_Collections_Generic_List_int___ToArray(
               v13,
               (const MethodInfo_3494328 *)Method_System_Collections_Generic_List_int__ToArray__);
    }
LABEL_29:
    sub_1B64C5C(v14, v15);
  }
  return System_Collections_Generic_List_int___ToArray(
           v13,
           (const MethodInfo_3494328 *)Method_System_Collections_Generic_List_int__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
System_Int32_array *__fastcall ImageLimitCount__GetSelectList_37387156(
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
  __int64 v13; // x1
  System_Int32_array *result; // x0
  __int64 v15; // x1
  unsigned __int64 max_length; // x8
  unsigned __int64 i; // x9
  int32_t v18; // w12

  if ( (byte_49FDB50 & 1) == 0 )
  {
    sub_1B64A00(&ImageLimitCount_TypeInfo, *(_QWORD *)&limitCount);
    sub_1B64A00(&int___TypeInfo, v9);
    sub_1B64A00(&OptionManager_TypeInfo, v10);
    byte_49FDB50 = 1;
  }
  if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
  ImageLimitCount = ImageLimitCount__GetImageLimitCount(svtId, limitCount, *(const MethodInfo **)&costumeId);
  if ( costumeId < 11 )
    goto LABEL_6;
  if ( isOwn )
    goto LABEL_11;
  if ( !OptionManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
  if ( OptionManager__GetFriendCostume(0LL) )
  {
LABEL_11:
    v13 = 4LL;
    v12 = 1;
  }
  else
  {
LABEL_6:
    v12 = 0;
    v13 = 3LL;
  }
  result = (System_Int32_array *)sub_1B64AA8(int___TypeInfo, v13);
  if ( !result )
    sub_1B64C5C(0LL, v15);
  max_length = result->max_length;
  for ( i = 0LL; i != 3; ++i )
  {
    if ( i >= max_length )
      goto LABEL_23;
    if ( (__int64)i > ImageLimitCount )
      v18 = -1;
    else
      v18 = i;
    result->m_Items[i + 1] = v18;
  }
  if ( v12 )
  {
    if ( (unsigned int)max_length <= 3 )
LABEL_23:
      sub_1B64C64(result, v15);
    result->m_Items[4] = costumeId;
  }
  return result;
}


void __fastcall ImageLimitCount__Initialize(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  __int64 v3; // x1
  Il2CppObject *Instance; // x0
  __int64 v5; // x1
  System_Collections_Generic_Dictionary_int__int__o *LimitCountMaxList; // x0
  int32_t v7; // w2
  int32_t v8; // w3
  ImageLimitCount_c *v9; // x8
  System_Collections_Generic_Dictionary_int__int__o *v10; // x19
  struct ImageLimitCount_StaticFields *static_fields; // x0

  if ( (byte_49FDB46 & 1) == 0 )
  {
    sub_1B64A00(&Method_DataManager_GetMasterData_ServantMaster___, v1);
    sub_1B64A00(&ImageLimitCount_TypeInfo, v2);
    sub_1B64A00(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v3);
    byte_49FDB46 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE930 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2E3BCE0 *)Method_DataManager_GetMasterData_ServantMaster___)) == 0LL )
  {
    sub_1B64C5C(Instance, v5);
  }
  LimitCountMaxList = ServantMaster__GetLimitCountMaxList((ServantMaster_o *)Instance, 0LL);
  v9 = ImageLimitCount_TypeInfo;
  v10 = LimitCountMaxList;
  if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
    v9 = ImageLimitCount_TypeInfo;
  }
  static_fields = v9->static_fields;
  static_fields->limitMaxList = v10;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&static_fields->limitMaxList, (int32_t)v10, v7, v8);
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
  int32_t v10; // w21
  Il2CppClass *klass; // x8
  bool result; // w0
  int32_t value; // [xsp+Ch] [xbp-24h] BYREF

  v5 = svtLimitCnt;
  if ( (byte_49FDB4A & 1) == 0 )
  {
    sub_1B64A00(&Method_System_Collections_Generic_Dictionary_int__int__TryGetValue__, *(_QWORD *)&svtLimitCnt);
    sub_1B64A00(&ImageLimitCount_TypeInfo, v7);
    byte_49FDB4A = 1;
  }
  value = 0;
  *limitCount = -1;
  if ( v5 > 10 )
    goto LABEL_18;
  v8 = ImageLimitCount_TypeInfo;
  if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
    v8 = ImageLimitCount_TypeInfo;
  }
  limitMaxList = v8->static_fields->limitMaxList;
  if ( !limitMaxList )
    goto LABEL_19;
  if ( !System_Collections_Generic_Dictionary_int__int___TryGetValue(
          limitMaxList,
          svtId,
          &value,
          (const MethodInfo_311EE40 *)Method_System_Collections_Generic_Dictionary_int__int__TryGetValue__) )
    return 0;
  limitMaxList = (System_Collections_Generic_Dictionary_int__int__o *)ImageLimitCount_TypeInfo;
  v10 = value;
  if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
    limitMaxList = (System_Collections_Generic_Dictionary_int__int__o *)ImageLimitCount_TypeInfo;
  }
  klass = limitMaxList[2].fields._entries->obj.klass;
  if ( v10 <= v5 )
  {
    if ( klass )
    {
      v5 = value;
      if ( (unsigned int)value >= LODWORD(klass->_1.namespaze) )
LABEL_13:
        sub_1B64C64(limitMaxList, *(_QWORD *)&svtLimitCnt);
      goto LABEL_17;
    }
LABEL_19:
    sub_1B64C5C(limitMaxList, *(_QWORD *)&svtLimitCnt);
  }
  if ( !klass )
    goto LABEL_19;
  if ( LODWORD(klass->_1.namespaze) <= v5 )
    goto LABEL_13;
LABEL_17:
  v5 = *((_DWORD *)&klass->_1.byval_arg.data + v5);
LABEL_18:
  result = 1;
  *limitCount = v5;
  return result;
}


int32_t __fastcall ImageLimitCount__get_MaxDispLimitCount(const MethodInfo *method)
{
  __int64 v1; // x1
  ImageLimitCount_c *v2; // x0
  struct System_Int32_array *maxDispLimitCountList; // x8

  if ( (byte_49FDB53 & 1) == 0 )
  {
    sub_1B64A00(&ImageLimitCount_TypeInfo, v1);
    byte_49FDB53 = 1;
  }
  v2 = ImageLimitCount_TypeInfo;
  if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
    v2 = ImageLimitCount_TypeInfo;
  }
  maxDispLimitCountList = v2->static_fields->maxDispLimitCountList;
  if ( !maxDispLimitCountList )
    sub_1B64C5C(v2, v1);
  return maxDispLimitCountList->max_length;
}


void __fastcall ImageLimitCount__initializeAssetStorage(const MethodInfo *method)
{
  ;
}