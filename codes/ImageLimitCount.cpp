void __fastcall ImageLimitCount___cctor(const MethodInfo *method)
{
  System_Array_o *v1; // x0
  struct System_Int32_array *v2; // x19
  int64_t v3; // x2
  int32_t v4; // w3
  System_String_o *v5; // x4
  BattleSetupInfo_o *v6; // x5
  FollowerInfo_o *v7; // x6
  PartyListViewItem_o *v8; // x7
  System_Array_o *v9; // x0
  int64_t v10; // x19
  struct ImageLimitCount_StaticFields *static_fields; // x0
  int64_t v12; // x2
  int32_t v13; // w3
  System_String_o *v14; // x4
  BattleSetupInfo_o *v15; // x5
  FollowerInfo_o *v16; // x6
  PartyListViewItem_o *v17; // x7
  System_Array_o *v18; // x0
  int64_t v19; // x19
  struct ImageLimitCount_StaticFields *v20; // x0
  int64_t v21; // x2
  int32_t v22; // w3
  System_String_o *v23; // x4
  BattleSetupInfo_o *v24; // x5
  FollowerInfo_o *v25; // x6
  PartyListViewItem_o *v26; // x7
  _DWORD *v27; // x0
  __int64 v28; // x1
  int64_t v29; // x2
  int32_t v30; // w3
  System_String_o *v31; // x4
  BattleSetupInfo_o *v32; // x5
  FollowerInfo_o *v33; // x6
  PartyListViewItem_o *v34; // x7
  unsigned int v35; // w8
  int64_t v36; // x1
  struct ImageLimitCount_StaticFields *v37; // x0
  System_Array_o *v38; // x0
  int64_t v39; // x19
  struct ImageLimitCount_StaticFields *v40; // x0
  int64_t v41; // x2
  int32_t v42; // w3
  System_String_o *v43; // x4
  BattleSetupInfo_o *v44; // x5
  FollowerInfo_o *v45; // x6
  PartyListViewItem_o *v46; // x7
  System_RuntimeFieldHandle_o v47; // 0:w1.4
  System_RuntimeFieldHandle_o v48; // 0:w1.4
  System_RuntimeFieldHandle_o v49; // 0:w1.4
  System_RuntimeFieldHandle_o v50; // 0:w1.4

  if ( (byte_4BDB504 & 1) == 0 )
  {
    sub_1C21E38(&ImageLimitCount_TypeInfo);
    sub_1C21E38(&int___TypeInfo);
    sub_1C21E38(&Field__PrivateImplementationDetails__3A795EE993DCFCD47AE2FD7282FAE2348DADC51429112235F8375626F9439A0B);
    sub_1C21E38(&Field__PrivateImplementationDetails__598CEB271FAC09B40101AAE5910D6939EFC22B105F7DF2AA77795704D4CC7911);
    sub_1C21E38(&Field__PrivateImplementationDetails__E8845519DB154B41E620A98F949B9EDCEFB1F9060DC8290A9F7D2C3200ABD0CB);
    sub_1C21E38(&Field__PrivateImplementationDetails__F239810D17032E35383496434C64894FFE055A198BA7CFB907D73BAF26A70F0C);
    byte_4BDB504 = 1;
  }
  v1 = (System_Array_o *)sub_1C21EE0(int___TypeInfo, 5LL);
  v47.fields.value = Field__PrivateImplementationDetails__598CEB271FAC09B40101AAE5910D6939EFC22B105F7DF2AA77795704D4CC7911;
  v2 = (struct System_Int32_array *)v1;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_63022812(v1, v47, 0LL);
  ImageLimitCount_TypeInfo->static_fields->imageLimitCountList = v2;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)ImageLimitCount_TypeInfo->static_fields,
    (int64_t)v2,
    v3,
    v4,
    v5,
    v6,
    v7,
    v8);
  v9 = (System_Array_o *)sub_1C21EE0(int___TypeInfo, 4LL);
  v48.fields.value = Field__PrivateImplementationDetails__F239810D17032E35383496434C64894FFE055A198BA7CFB907D73BAF26A70F0C;
  v10 = (int64_t)v9;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_63022812(v9, v48, 0LL);
  static_fields = ImageLimitCount_TypeInfo->static_fields;
  static_fields->minLimitCountList = (struct System_Int32_array *)v10;
  sub_1C21DDC((PartyOrganizationUtility_o *)&static_fields->minLimitCountList, v10, v12, v13, v14, v15, v16, v17);
  v18 = (System_Array_o *)sub_1C21EE0(int___TypeInfo, 4LL);
  v49.fields.value = Field__PrivateImplementationDetails__E8845519DB154B41E620A98F949B9EDCEFB1F9060DC8290A9F7D2C3200ABD0CB;
  v19 = (int64_t)v18;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_63022812(v18, v49, 0LL);
  v20 = ImageLimitCount_TypeInfo->static_fields;
  v20->maxLimitCountList = (struct System_Int32_array *)v19;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v20->maxLimitCountList, v19, v21, v22, v23, v24, v25, v26);
  v27 = (_DWORD *)sub_1C21EE0(int___TypeInfo, 3LL);
  if ( !v27 )
    sub_1C22094(0LL, v28);
  v35 = v27[6];
  v36 = (int64_t)v27;
  if ( v35 <= 1 || (v27[9] = 2, v35 == 2) )
    sub_1C2209C(v27, v27);
  v27[10] = 4;
  v37 = ImageLimitCount_TypeInfo->static_fields;
  v37->maxDispLimitCountList = (struct System_Int32_array *)v36;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v37->maxDispLimitCountList, v36, v29, v30, v31, v32, v33, v34);
  v38 = (System_Array_o *)sub_1C21EE0(int___TypeInfo, 5LL);
  v50.fields.value = Field__PrivateImplementationDetails__3A795EE993DCFCD47AE2FD7282FAE2348DADC51429112235F8375626F9439A0B;
  v39 = (int64_t)v38;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_63022812(v38, v50, 0LL);
  v40 = ImageLimitCount_TypeInfo->static_fields;
  v40->dispLimitCountList = (struct System_Int32_array *)v39;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v40->dispLimitCountList, v39, v41, v42, v43, v44, v45, v46);
  ImageLimitCount_TypeInfo->static_fields->enemyLimitCountStart = 101;
}


void __fastcall ImageLimitCount___ctor(ImageLimitCount_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


int32_t __fastcall ImageLimitCount__ConvertDispLimitCountForClient(int32_t dispLimitCount, const MethodInfo *method)
{
  if ( dispLimitCount <= 11 )
  {
    if ( dispLimitCount <= 0 )
      return 0;
    else
      --dispLimitCount;
  }
  return dispLimitCount;
}


int32_t __fastcall ImageLimitCount__ConvertDispLimitCountForServer(int32_t dispLimitCount, const MethodInfo *method)
{
  if ( dispLimitCount < 12 )
    ++dispLimitCount;
  return dispLimitCount;
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
  Il2CppClass *v12; // x8
  char *v13; // x8
  BalanceConfig_c *v15; // x0
  Il2CppClass *klass; // x8
  int32_t value; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4BDB4FD & 1) == 0 )
  {
    sub_1C21E38(&BalanceConfig_TypeInfo);
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_int__int__TryGetValue__);
    sub_1C21E38(&ImageLimitCount_TypeInfo);
    sub_1C21E38(&OptionManager_TypeInfo);
    byte_4BDB4FD = 1;
  }
  value = 0;
  if ( (limitCount & 0x80000000) != 0 )
    return 0;
  v9 = ImageLimitCount_TypeInfo;
  if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
    v9 = ImageLimitCount_TypeInfo;
  }
  limitMaxList = v9->static_fields->limitMaxList;
  if ( !limitMaxList )
    goto LABEL_32;
  if ( !System_Collections_Generic_Dictionary_int__int___TryGetValue(
          limitMaxList,
          svtId,
          &value,
          (const MethodInfo_32AE614 *)Method_System_Collections_Generic_Dictionary_int__int__TryGetValue__) )
    return limitCount - 1;
  v11 = value;
  if ( value <= limitCount )
  {
    if ( !isNpc )
    {
      v15 = BalanceConfig_TypeInfo;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        v15 = BalanceConfig_TypeInfo;
      }
      if ( v11 >= v15->static_fields->ServantLimitMax )
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
        v13 = (char *)klass + 4 * value;
        return *((_DWORD *)v13 + 8);
      }
LABEL_33:
      sub_1C2209C(limitMaxList, *(_QWORD *)&limitCount);
    }
LABEL_32:
    sub_1C22094(limitMaxList, *(_QWORD *)&limitCount);
  }
  limitMaxList = (System_Collections_Generic_Dictionary_int__int__o *)ImageLimitCount_TypeInfo;
  if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
    limitMaxList = (System_Collections_Generic_Dictionary_int__int__o *)ImageLimitCount_TypeInfo;
  }
  v12 = limitMaxList[2].fields._entries->obj.klass;
  if ( !v12 )
    goto LABEL_32;
  if ( LODWORD(v12->_1.namespaze) <= limitCount )
    goto LABEL_33;
  v13 = (char *)v12 + 4 * (unsigned int)limitCount;
  return *((_DWORD *)v13 + 8);
}


System_Int32_array *__fastcall ImageLimitCount__GetCardSelectList(
        int32_t svtId,
        int32_t limitCount,
        System_Int32_array *costumeIds,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x4
  int32_t CardImageLimitCount; // w21
  signed int max_length; // w24
  System_Collections_Generic_List_int__o *v10; // x20
  __int64 v11; // x0
  __int64 v12; // x1
  int32_t i; // w25
  struct System_Int32_array *items; // x8
  _QWORD *v15; // x9
  __int64 size; // x10
  unsigned __int64 j; // x21
  struct System_Int32_array *v18; // x8
  _QWORD *v19; // x9
  __int64 v20; // x10

  if ( (byte_4BDB500 & 1) == 0 )
  {
    sub_1C21E38(&ImageLimitCount_TypeInfo);
    sub_1C21E38(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C21E38(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_1C21E38(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C21E38(&System_Collections_Generic_List_int__TypeInfo);
    byte_4BDB500 = 1;
  }
  if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
  CardImageLimitCount = ImageLimitCount__GetCardImageLimitCount(svtId, limitCount, 1, 0, v4);
  if ( costumeIds )
    max_length = costumeIds->max_length;
  else
    max_length = 0;
  v10 = (System_Collections_Generic_List_int__o *)sub_1C22084(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v10,
    (const MethodInfo_363183C *)Method_System_Collections_Generic_List_int___ctor__);
  if ( !v10 )
    goto LABEL_29;
  for ( i = 0; i != 4; ++i )
  {
    items = v10->fields._items;
    v15 = Method_System_Collections_Generic_List_int__Add__;
    if ( i > CardImageLimitCount )
      v12 = 0xFFFFFFFFLL;
    else
      v12 = (unsigned int)i;
    ++v10->fields._version;
    if ( !items )
      goto LABEL_29;
    size = v10->fields._size;
    if ( (unsigned int)size >= items->max_length )
    {
      System_Collections_Generic_List_int___AddWithResize(
        v10,
        v12,
        *(const MethodInfo_3632090 **)(*(_QWORD *)(v15[4] + 192LL) + 112LL));
    }
    else
    {
      v10->fields._size = size + 1;
      items->m_Items[size + 1] = v12;
    }
  }
  if ( max_length >= 1 )
  {
    if ( costumeIds )
    {
      for ( j = 0LL; j != max_length; ++j )
      {
        if ( j >= costumeIds->max_length )
          sub_1C2209C(v11, v12);
        v12 = (unsigned int)costumeIds->m_Items[j + 1];
        if ( (int)v12 >= 1 )
        {
          v18 = v10->fields._items;
          v19 = Method_System_Collections_Generic_List_int__Add__;
          ++v10->fields._version;
          if ( !v18 )
            goto LABEL_29;
          v20 = v10->fields._size;
          if ( (unsigned int)v20 >= v18->max_length )
          {
            System_Collections_Generic_List_int___AddWithResize(
              v10,
              v12,
              *(const MethodInfo_3632090 **)(*(_QWORD *)(v19[4] + 192LL) + 112LL));
          }
          else
          {
            v10->fields._size = v20 + 1;
            v18->m_Items[v20 + 1] = v12;
          }
        }
      }
      return System_Collections_Generic_List_int___ToArray(
               v10,
               (const MethodInfo_3633B48 *)Method_System_Collections_Generic_List_int__ToArray__);
    }
LABEL_29:
    sub_1C22094(v11, v12);
  }
  return System_Collections_Generic_List_int___ToArray(
           v10,
           (const MethodInfo_3633B48 *)Method_System_Collections_Generic_List_int__ToArray__);
}


System_Int32_array *__fastcall ImageLimitCount__GetCardSelectList_38937392(
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
  unsigned __int64 i; // x9
  int32_t v14; // w12

  if ( (byte_4BDB501 & 1) == 0 )
  {
    sub_1C21E38(&ImageLimitCount_TypeInfo);
    sub_1C21E38(&int___TypeInfo);
    byte_4BDB501 = 1;
  }
  if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
  CardImageLimitCount = ImageLimitCount__GetCardImageLimitCount(svtId, limitCount, 0, 0, v4);
  if ( costumeId <= 10 )
    v9 = 4LL;
  else
    v9 = 5LL;
  result = (System_Int32_array *)sub_1C21EE0(int___TypeInfo, v9);
  if ( !result )
    sub_1C22094(0LL, v11);
  max_length = result->max_length;
  for ( i = 0LL; i != 4; ++i )
  {
    if ( i >= max_length )
      goto LABEL_19;
    if ( (__int64)i > CardImageLimitCount )
      v14 = -1;
    else
      v14 = i;
    result->m_Items[i + 1] = v14;
  }
  if ( costumeId >= 11 )
  {
    if ( (unsigned int)max_length <= 4 )
LABEL_19:
      sub_1C2209C(result, v11);
    result->m_Items[5] = costumeId;
  }
  return result;
}


int32_t __fastcall ImageLimitCount__GetDispLimitCount(int32_t limitCount, const MethodInfo *method)
{
  ImageLimitCount_c *v3; // x0
  struct System_Int32_array *dispLimitCountList; // x8

  if ( (byte_4BDB503 & 1) == 0 )
  {
    sub_1C21E38(&ImageLimitCount_TypeInfo);
    byte_4BDB503 = 1;
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
    sub_1C22094(v3, method);
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
    sub_1C2209C(v3, method);
  return dispLimitCountList->m_Items[limitCount + 1];
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall ImageLimitCount__GetImageLimitCount(int32_t svtId, int32_t limitCount, const MethodInfo *method)
{
  struct ImageLimitCount_StaticFields *static_fields; // x8
  System_Collections_Generic_Dictionary_int__int__o *limitMaxList; // x0
  int32_t v7; // w20
  Il2CppClass *klass; // x8
  char *v9; // x8
  int32_t enemyLimitCountStart; // w22
  int32_t value; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4BDB4FC & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_int__int__TryGetValue__);
    sub_1C21E38(&ImageLimitCount_TypeInfo);
    byte_4BDB4FC = 1;
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
          (const MethodInfo_32AE614 *)Method_System_Collections_Generic_Dictionary_int__int__TryGetValue__) )
    return limitCount - 1;
  limitMaxList = (System_Collections_Generic_Dictionary_int__int__o *)ImageLimitCount_TypeInfo;
  v7 = value;
  if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
    limitMaxList = (System_Collections_Generic_Dictionary_int__int__o *)ImageLimitCount_TypeInfo;
  }
  klass = limitMaxList[2].fields._entries->obj.klass;
  if ( v7 <= limitCount )
  {
    if ( klass )
    {
      if ( (unsigned int)value < LODWORD(klass->_1.namespaze) )
      {
        v9 = (char *)klass + 4 * value;
        return *((_DWORD *)v9 + 8);
      }
LABEL_25:
      sub_1C2209C(limitMaxList, *(_QWORD *)&limitCount);
    }
LABEL_24:
    sub_1C22094(limitMaxList, *(_QWORD *)&limitCount);
  }
  if ( !klass )
    goto LABEL_24;
  if ( LODWORD(klass->_1.namespaze) <= limitCount )
    goto LABEL_25;
  v9 = (char *)klass + 4 * (unsigned int)limitCount;
  return *((_DWORD *)v9 + 8);
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

  if ( (byte_4BDB4FB & 1) == 0 )
  {
    sub_1C21E38(&ImageLimitCount_TypeInfo);
    byte_4BDB4FB = 1;
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
    sub_1C22094(v5, *(_QWORD *)&maxLimitCount);
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
    sub_1C2209C(v5, *(_QWORD *)&maxLimitCount);
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

  if ( (byte_4BDB4F6 & 1) == 0 )
  {
    sub_1C21E38(&ImageLimitCount_TypeInfo);
    byte_4BDB4F6 = 1;
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
      sub_1C22094(v3, method);
  }
  if ( minLimitCountList->max_length <= imageLimitCount )
    sub_1C2209C(v3, method);
  return minLimitCountList->m_Items[imageLimitCount + 1];
}


int32_t __fastcall ImageLimitCount__GetLimitCountByImageLimitCostumeIn(
        int32_t imageLimitCount,
        const MethodInfo *method)
{
  ImageLimitCount_c *v3; // x0
  struct System_Int32_array *minLimitCountList; // x8

  if ( (byte_4BDB4F7 & 1) == 0 )
  {
    sub_1C21E38(&ImageLimitCount_TypeInfo);
    byte_4BDB4F7 = 1;
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
        sub_1C22094(v3, method);
    }
    if ( minLimitCountList->max_length <= imageLimitCount )
      sub_1C2209C(v3, method);
    return minLimitCountList->m_Items[imageLimitCount + 1];
  }
  return imageLimitCount;
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall ImageLimitCount__GetLimitCountByImageLimit_38934920(
        int32_t imageLimitCount,
        int32_t maxLimitCount,
        const MethodInfo *method)
{
  ImageLimitCount_c *v5; // x0
  struct System_Int32_array *maxLimitCountList; // x8
  int32_t v7; // w8

  if ( (byte_4BDB4FA & 1) == 0 )
  {
    sub_1C21E38(&ImageLimitCount_TypeInfo);
    byte_4BDB4FA = 1;
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
      sub_1C22094(v5, *(_QWORD *)&maxLimitCount);
  }
  if ( maxLimitCountList->max_length <= imageLimitCount )
    sub_1C2209C(v5, *(_QWORD *)&maxLimitCount);
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
  int32_t v7; // w20
  Il2CppClass *klass; // x8
  char *v9; // x8
  int32_t value; // [xsp+Ch] [xbp-24h] BYREF

  v3 = limitCount;
  if ( (byte_4BDB4F8 & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_int__int__TryGetValue__);
    sub_1C21E38(&ImageLimitCount_TypeInfo);
    byte_4BDB4F8 = 1;
  }
  value = 0;
  if ( v3 <= 10 )
  {
    v5 = ImageLimitCount_TypeInfo;
    if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
      v5 = ImageLimitCount_TypeInfo;
    }
    limitMaxList = v5->static_fields->limitMaxList;
    if ( !limitMaxList )
      goto LABEL_20;
    if ( System_Collections_Generic_Dictionary_int__int___TryGetValue(
           limitMaxList,
           svtId,
           &value,
           (const MethodInfo_32AE614 *)Method_System_Collections_Generic_Dictionary_int__int__TryGetValue__) )
    {
      limitMaxList = (System_Collections_Generic_Dictionary_int__int__o *)ImageLimitCount_TypeInfo;
      v7 = value;
      if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
        limitMaxList = (System_Collections_Generic_Dictionary_int__int__o *)ImageLimitCount_TypeInfo;
      }
      klass = limitMaxList[2].fields._entries->obj.klass;
      if ( v7 <= v3 )
      {
        if ( klass )
        {
          if ( (unsigned int)value < LODWORD(klass->_1.namespaze) )
          {
            v9 = (char *)klass + 4 * value;
            return *((_DWORD *)v9 + 8);
          }
LABEL_21:
          sub_1C2209C(limitMaxList, *(_QWORD *)&limitCount);
        }
      }
      else if ( klass )
      {
        if ( LODWORD(klass->_1.namespaze) > v3 )
        {
          v9 = (char *)klass + 4 * v3;
          return *((_DWORD *)v9 + 8);
        }
        goto LABEL_21;
      }
LABEL_20:
      sub_1C22094(limitMaxList, *(_QWORD *)&limitCount);
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
  signed int max_length; // w24
  System_Collections_Generic_List_int__o *v9; // x20
  __int64 v10; // x0
  __int64 v11; // x1
  int32_t i; // w25
  struct System_Int32_array *items; // x8
  _QWORD *v14; // x9
  __int64 size; // x10
  unsigned __int64 j; // x21
  struct System_Int32_array *v17; // x8
  _QWORD *v18; // x9
  __int64 v19; // x10

  if ( (byte_4BDB4FE & 1) == 0 )
  {
    sub_1C21E38(&ImageLimitCount_TypeInfo);
    sub_1C21E38(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C21E38(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_1C21E38(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C21E38(&System_Collections_Generic_List_int__TypeInfo);
    byte_4BDB4FE = 1;
  }
  if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
  ImageLimitCount = ImageLimitCount__GetImageLimitCount(svtId, limitCount, (const MethodInfo *)costumeIds);
  if ( costumeIds )
    max_length = costumeIds->max_length;
  else
    max_length = 0;
  v9 = (System_Collections_Generic_List_int__o *)sub_1C22084(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v9,
    (const MethodInfo_363183C *)Method_System_Collections_Generic_List_int___ctor__);
  if ( !v9 )
    goto LABEL_29;
  for ( i = 0; i != 3; ++i )
  {
    items = v9->fields._items;
    v14 = Method_System_Collections_Generic_List_int__Add__;
    if ( i > ImageLimitCount )
      v11 = 0xFFFFFFFFLL;
    else
      v11 = (unsigned int)i;
    ++v9->fields._version;
    if ( !items )
      goto LABEL_29;
    size = v9->fields._size;
    if ( (unsigned int)size >= items->max_length )
    {
      System_Collections_Generic_List_int___AddWithResize(
        v9,
        v11,
        *(const MethodInfo_3632090 **)(*(_QWORD *)(v14[4] + 192LL) + 112LL));
    }
    else
    {
      v9->fields._size = size + 1;
      items->m_Items[size + 1] = v11;
    }
  }
  if ( max_length >= 1 )
  {
    if ( costumeIds )
    {
      for ( j = 0LL; j != max_length; ++j )
      {
        if ( j >= costumeIds->max_length )
          sub_1C2209C(v10, v11);
        v11 = (unsigned int)costumeIds->m_Items[j + 1];
        if ( (int)v11 >= 1 )
        {
          v17 = v9->fields._items;
          v18 = Method_System_Collections_Generic_List_int__Add__;
          ++v9->fields._version;
          if ( !v17 )
            goto LABEL_29;
          v19 = v9->fields._size;
          if ( (unsigned int)v19 >= v17->max_length )
          {
            System_Collections_Generic_List_int___AddWithResize(
              v9,
              v11,
              *(const MethodInfo_3632090 **)(*(_QWORD *)(v18[4] + 192LL) + 112LL));
          }
          else
          {
            v9->fields._size = v19 + 1;
            v17->m_Items[v19 + 1] = v11;
          }
        }
      }
      return System_Collections_Generic_List_int___ToArray(
               v9,
               (const MethodInfo_3633B48 *)Method_System_Collections_Generic_List_int__ToArray__);
    }
LABEL_29:
    sub_1C22094(v10, v11);
  }
  return System_Collections_Generic_List_int___ToArray(
           v9,
           (const MethodInfo_3633B48 *)Method_System_Collections_Generic_List_int__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
System_Int32_array *__fastcall ImageLimitCount__GetSelectList_38936576(
        int32_t svtId,
        int32_t limitCount,
        int32_t costumeId,
        bool isOwn,
        const MethodInfo *method)
{
  int32_t ImageLimitCount; // w20
  int v10; // w21
  __int64 v11; // x1
  System_Int32_array *result; // x0
  __int64 v13; // x1
  unsigned __int64 max_length; // x8
  unsigned __int64 i; // x9
  int32_t v16; // w12

  if ( (byte_4BDB4FF & 1) == 0 )
  {
    sub_1C21E38(&ImageLimitCount_TypeInfo);
    sub_1C21E38(&int___TypeInfo);
    sub_1C21E38(&OptionManager_TypeInfo);
    byte_4BDB4FF = 1;
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
    v11 = 4LL;
    v10 = 1;
  }
  else
  {
LABEL_6:
    v10 = 0;
    v11 = 3LL;
  }
  result = (System_Int32_array *)sub_1C21EE0(int___TypeInfo, v11);
  if ( !result )
    sub_1C22094(0LL, v13);
  max_length = result->max_length;
  for ( i = 0LL; i != 3; ++i )
  {
    if ( i >= max_length )
      goto LABEL_23;
    if ( (__int64)i > ImageLimitCount )
      v16 = -1;
    else
      v16 = i;
    result->m_Items[i + 1] = v16;
  }
  if ( v10 )
  {
    if ( (unsigned int)max_length <= 3 )
LABEL_23:
      sub_1C2209C(result, v13);
    result->m_Items[4] = costumeId;
  }
  return result;
}


void __fastcall ImageLimitCount__Initialize(const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v2; // x1
  System_Collections_Generic_Dictionary_int__int__o *LimitCountMaxList; // x0
  int64_t v4; // x2
  int32_t v5; // w3
  System_String_o *v6; // x4
  BattleSetupInfo_o *v7; // x5
  FollowerInfo_o *v8; // x6
  PartyListViewItem_o *v9; // x7
  ImageLimitCount_c *v10; // x8
  int64_t v11; // x19
  struct ImageLimitCount_StaticFields *static_fields; // x0

  if ( (byte_4BDB4F5 & 1) == 0 )
  {
    sub_1C21E38(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1C21E38(&ImageLimitCount_TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4BDB4F5 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_ServantMaster___)) == 0LL )
  {
    sub_1C22094(Instance, v2);
  }
  LimitCountMaxList = ServantMaster__GetLimitCountMaxList((ServantMaster_o *)Instance, 0LL);
  v10 = ImageLimitCount_TypeInfo;
  v11 = (int64_t)LimitCountMaxList;
  if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
    v10 = ImageLimitCount_TypeInfo;
  }
  static_fields = v10->static_fields;
  static_fields->limitMaxList = (struct System_Collections_Generic_Dictionary_int__int__o *)v11;
  sub_1C21DDC((PartyOrganizationUtility_o *)&static_fields->limitMaxList, v11, v4, v5, v6, v7, v8, v9);
}


int32_t __fastcall ImageLimitCount__SpecialImageLimitCountToSpecialNum(
        int32_t specialImageLimitCount,
        const MethodInfo *method)
{
  return specialImageLimitCount - 200;
}


int32_t __fastcall ImageLimitCount__SpecialNumToSpecialImageLimitCount(int32_t num, const MethodInfo *method)
{
  return num + 200;
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
  int32_t v9; // w21
  Il2CppClass *klass; // x8
  bool result; // w0
  int32_t value; // [xsp+Ch] [xbp-24h] BYREF

  v5 = svtLimitCnt;
  if ( (byte_4BDB4F9 & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_int__int__TryGetValue__);
    sub_1C21E38(&ImageLimitCount_TypeInfo);
    byte_4BDB4F9 = 1;
  }
  value = 0;
  *limitCount = -1;
  if ( v5 > 10 )
    goto LABEL_18;
  v7 = ImageLimitCount_TypeInfo;
  if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
    v7 = ImageLimitCount_TypeInfo;
  }
  limitMaxList = v7->static_fields->limitMaxList;
  if ( !limitMaxList )
    goto LABEL_19;
  if ( !System_Collections_Generic_Dictionary_int__int___TryGetValue(
          limitMaxList,
          svtId,
          &value,
          (const MethodInfo_32AE614 *)Method_System_Collections_Generic_Dictionary_int__int__TryGetValue__) )
    return 0;
  limitMaxList = (System_Collections_Generic_Dictionary_int__int__o *)ImageLimitCount_TypeInfo;
  v9 = value;
  if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
    limitMaxList = (System_Collections_Generic_Dictionary_int__int__o *)ImageLimitCount_TypeInfo;
  }
  klass = limitMaxList[2].fields._entries->obj.klass;
  if ( v9 <= v5 )
  {
    if ( klass )
    {
      v5 = value;
      if ( (unsigned int)value >= LODWORD(klass->_1.namespaze) )
LABEL_13:
        sub_1C2209C(limitMaxList, *(_QWORD *)&svtLimitCnt);
      goto LABEL_17;
    }
LABEL_19:
    sub_1C22094(limitMaxList, *(_QWORD *)&svtLimitCnt);
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

  if ( (byte_4BDB502 & 1) == 0 )
  {
    sub_1C21E38(&ImageLimitCount_TypeInfo);
    byte_4BDB502 = 1;
  }
  v2 = ImageLimitCount_TypeInfo;
  if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
    v2 = ImageLimitCount_TypeInfo;
  }
  maxDispLimitCountList = v2->static_fields->maxDispLimitCountList;
  if ( !maxDispLimitCountList )
    sub_1C22094(v2, v1);
  return maxDispLimitCountList->max_length;
}


void __fastcall ImageLimitCount__initializeAssetStorage(const MethodInfo *method)
{
  ;
}