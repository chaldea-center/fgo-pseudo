void __fastcall ImageLimitCount___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x1
  __int64 v4; // x2
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  System_Array_o *v13; // x0
  struct System_Int32_array *v14; // x19
  int64_t v15; // x2
  int32_t v16; // w3
  System_String_o *v17; // x4
  BattleSetupInfo_o *v18; // x5
  FollowerInfo_o *v19; // x6
  PartyListViewItem_o *v20; // x7
  System_Array_o *v21; // x0
  int64_t v22; // x19
  struct ImageLimitCount_StaticFields *static_fields; // x0
  int64_t v24; // x2
  int32_t v25; // w3
  System_String_o *v26; // x4
  BattleSetupInfo_o *v27; // x5
  FollowerInfo_o *v28; // x6
  PartyListViewItem_o *v29; // x7
  System_Array_o *v30; // x0
  int64_t v31; // x19
  struct ImageLimitCount_StaticFields *v32; // x0
  int64_t v33; // x2
  int32_t v34; // w3
  System_String_o *v35; // x4
  BattleSetupInfo_o *v36; // x5
  FollowerInfo_o *v37; // x6
  PartyListViewItem_o *v38; // x7
  _DWORD *v39; // x0
  __int64 v40; // x1
  int64_t v41; // x2
  int32_t v42; // w3
  System_String_o *v43; // x4
  BattleSetupInfo_o *v44; // x5
  FollowerInfo_o *v45; // x6
  PartyListViewItem_o *v46; // x7
  unsigned int v47; // w8
  int64_t v48; // x1
  struct ImageLimitCount_StaticFields *v49; // x0
  System_Array_o *v50; // x0
  int64_t v51; // x19
  struct ImageLimitCount_StaticFields *v52; // x0
  int64_t v53; // x2
  int32_t v54; // w3
  System_String_o *v55; // x4
  BattleSetupInfo_o *v56; // x5
  FollowerInfo_o *v57; // x6
  PartyListViewItem_o *v58; // x7
  System_RuntimeFieldHandle_o v59; // 0:w1.4
  System_RuntimeFieldHandle_o v60; // 0:w1.4
  System_RuntimeFieldHandle_o v61; // 0:w1.4
  System_RuntimeFieldHandle_o v62; // 0:w1.4

  if ( (byte_4B151CF & 1) == 0 )
  {
    sub_1BCA7E0(&ImageLimitCount_TypeInfo, v1, v2);
    sub_1BCA7E0(&int___TypeInfo, v3, v4);
    sub_1BCA7E0(
      &Field__PrivateImplementationDetails__3A795EE993DCFCD47AE2FD7282FAE2348DADC51429112235F8375626F9439A0B,
      v5,
      v6);
    sub_1BCA7E0(
      &Field__PrivateImplementationDetails__598CEB271FAC09B40101AAE5910D6939EFC22B105F7DF2AA77795704D4CC7911,
      v7,
      v8);
    sub_1BCA7E0(
      &Field__PrivateImplementationDetails__E8845519DB154B41E620A98F949B9EDCEFB1F9060DC8290A9F7D2C3200ABD0CB,
      v9,
      v10);
    sub_1BCA7E0(
      &Field__PrivateImplementationDetails__F239810D17032E35383496434C64894FFE055A198BA7CFB907D73BAF26A70F0C,
      v11,
      v12);
    byte_4B151CF = 1;
  }
  v13 = (System_Array_o *)sub_1BCA888(int___TypeInfo, 5LL);
  v59.fields.value = Field__PrivateImplementationDetails__598CEB271FAC09B40101AAE5910D6939EFC22B105F7DF2AA77795704D4CC7911;
  v14 = (struct System_Int32_array *)v13;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_62309300(v13, v59, 0LL);
  ImageLimitCount_TypeInfo->static_fields->imageLimitCountList = v14;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)ImageLimitCount_TypeInfo->static_fields,
    (int64_t)v14,
    v15,
    v16,
    v17,
    v18,
    v19,
    v20);
  v21 = (System_Array_o *)sub_1BCA888(int___TypeInfo, 4LL);
  v60.fields.value = Field__PrivateImplementationDetails__F239810D17032E35383496434C64894FFE055A198BA7CFB907D73BAF26A70F0C;
  v22 = (int64_t)v21;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_62309300(v21, v60, 0LL);
  static_fields = ImageLimitCount_TypeInfo->static_fields;
  static_fields->minLimitCountList = (struct System_Int32_array *)v22;
  sub_1BCA784((PartyOrganizationUtility_o *)&static_fields->minLimitCountList, v22, v24, v25, v26, v27, v28, v29);
  v30 = (System_Array_o *)sub_1BCA888(int___TypeInfo, 4LL);
  v61.fields.value = Field__PrivateImplementationDetails__E8845519DB154B41E620A98F949B9EDCEFB1F9060DC8290A9F7D2C3200ABD0CB;
  v31 = (int64_t)v30;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_62309300(v30, v61, 0LL);
  v32 = ImageLimitCount_TypeInfo->static_fields;
  v32->maxLimitCountList = (struct System_Int32_array *)v31;
  sub_1BCA784((PartyOrganizationUtility_o *)&v32->maxLimitCountList, v31, v33, v34, v35, v36, v37, v38);
  v39 = (_DWORD *)sub_1BCA888(int___TypeInfo, 3LL);
  if ( !v39 )
    sub_1BCAA3C(0LL, v40);
  v47 = v39[6];
  v48 = (int64_t)v39;
  if ( v47 <= 1 || (v39[9] = 2, v47 == 2) )
    sub_1BCAA44(v39, v39);
  v39[10] = 4;
  v49 = ImageLimitCount_TypeInfo->static_fields;
  v49->maxDispLimitCountList = (struct System_Int32_array *)v48;
  sub_1BCA784((PartyOrganizationUtility_o *)&v49->maxDispLimitCountList, v48, v41, v42, v43, v44, v45, v46);
  v50 = (System_Array_o *)sub_1BCA888(int___TypeInfo, 5LL);
  v62.fields.value = Field__PrivateImplementationDetails__3A795EE993DCFCD47AE2FD7282FAE2348DADC51429112235F8375626F9439A0B;
  v51 = (int64_t)v50;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_62309300(v50, v62, 0LL);
  v52 = ImageLimitCount_TypeInfo->static_fields;
  v52->dispLimitCountList = (struct System_Int32_array *)v51;
  sub_1BCA784((PartyOrganizationUtility_o *)&v52->dispLimitCountList, v51, v53, v54, v55, v56, v57, v58);
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
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  ImageLimitCount_c *v15; // x0
  System_Collections_Generic_Dictionary_int__int__o *limitMaxList; // x0
  int32_t v17; // w22
  Il2CppClass *v18; // x8
  char *v19; // x8
  BalanceConfig_c *v21; // x0
  Il2CppClass *klass; // x8
  int32_t value; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4B151C8 & 1) == 0 )
  {
    sub_1BCA7E0(&BalanceConfig_TypeInfo, *(_QWORD *)&limitCount, isOwn);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_int__int__TryGetValue__, v9, v10);
    sub_1BCA7E0(&ImageLimitCount_TypeInfo, v11, v12);
    sub_1BCA7E0(&OptionManager_TypeInfo, v13, v14);
    byte_4B151C8 = 1;
  }
  value = 0;
  if ( (limitCount & 0x80000000) != 0 )
    return 0;
  v15 = ImageLimitCount_TypeInfo;
  if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo, *(_QWORD *)&limitCount);
    v15 = ImageLimitCount_TypeInfo;
  }
  limitMaxList = v15->static_fields->limitMaxList;
  if ( !limitMaxList )
    goto LABEL_32;
  if ( !System_Collections_Generic_Dictionary_int__int___TryGetValue(
          limitMaxList,
          svtId,
          &value,
          (const MethodInfo_31FE90C *)Method_System_Collections_Generic_Dictionary_int__int__TryGetValue__) )
    return limitCount - 1;
  v17 = value;
  if ( value <= limitCount )
  {
    if ( !isNpc )
    {
      v21 = BalanceConfig_TypeInfo;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, *(_QWORD *)&limitCount);
        v21 = BalanceConfig_TypeInfo;
      }
      if ( v17 >= v21->static_fields->ServantLimitMax )
      {
        if ( isOwn )
          return 3;
        if ( !OptionManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo, *(_QWORD *)&limitCount);
        if ( OptionManager__GetFriendImageLimitCount(0LL) )
          return 3;
      }
    }
    limitMaxList = (System_Collections_Generic_Dictionary_int__int__o *)ImageLimitCount_TypeInfo;
    if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo, *(_QWORD *)&limitCount);
      limitMaxList = (System_Collections_Generic_Dictionary_int__int__o *)ImageLimitCount_TypeInfo;
    }
    klass = limitMaxList[2].fields._entries->obj.klass;
    if ( klass )
    {
      if ( (unsigned int)value < LODWORD(klass->_1.namespaze) )
      {
        v19 = (char *)klass + 4 * value;
        return *((_DWORD *)v19 + 8);
      }
LABEL_33:
      sub_1BCAA44(limitMaxList, *(_QWORD *)&limitCount);
    }
LABEL_32:
    sub_1BCAA3C(limitMaxList, *(_QWORD *)&limitCount);
  }
  limitMaxList = (System_Collections_Generic_Dictionary_int__int__o *)ImageLimitCount_TypeInfo;
  if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo, *(_QWORD *)&limitCount);
    limitMaxList = (System_Collections_Generic_Dictionary_int__int__o *)ImageLimitCount_TypeInfo;
  }
  v18 = limitMaxList[2].fields._entries->obj.klass;
  if ( !v18 )
    goto LABEL_32;
  if ( LODWORD(v18->_1.namespaze) <= limitCount )
    goto LABEL_33;
  v19 = (char *)v18 + 4 * (unsigned int)limitCount;
  return *((_DWORD *)v19 + 8);
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
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x3
  int32_t CardImageLimitCount; // w21
  signed int max_length; // w24
  System_Collections_Generic_List_int__o *v21; // x20
  __int64 v22; // x0
  __int64 v23; // x1
  int32_t i; // w25
  struct System_Int32_array *items; // x8
  _QWORD *v26; // x9
  __int64 size; // x10
  unsigned __int64 j; // x21
  struct System_Int32_array *v29; // x8
  _QWORD *v30; // x9
  __int64 v31; // x10

  if ( (byte_4B151CB & 1) == 0 )
  {
    sub_1BCA7E0(&ImageLimitCount_TypeInfo, *(_QWORD *)&limitCount, costumeIds);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__Add__, v8, v9);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__ToArray__, v10, v11);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int___ctor__, v12, v13);
    sub_1BCA7E0(&System_Collections_Generic_List_int__TypeInfo, v14, v15);
    byte_4B151CB = 1;
  }
  if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo, *(_QWORD *)&limitCount);
  CardImageLimitCount = ImageLimitCount__GetCardImageLimitCount(svtId, limitCount, 1, 0, v4);
  if ( costumeIds )
    max_length = costumeIds->max_length;
  else
    max_length = 0;
  v21 = (System_Collections_Generic_List_int__o *)sub_1BCAA2C(
                                                    System_Collections_Generic_List_int__TypeInfo,
                                                    v16,
                                                    v17,
                                                    v18);
  System_Collections_Generic_List_int____ctor(
    v21,
    (const MethodInfo_35843E4 *)Method_System_Collections_Generic_List_int___ctor__);
  if ( !v21 )
    goto LABEL_29;
  for ( i = 0; i != 4; ++i )
  {
    items = v21->fields._items;
    v26 = Method_System_Collections_Generic_List_int__Add__;
    if ( i > CardImageLimitCount )
      v23 = 0xFFFFFFFFLL;
    else
      v23 = (unsigned int)i;
    ++v21->fields._version;
    if ( !items )
      goto LABEL_29;
    size = v21->fields._size;
    if ( (unsigned int)size >= items->max_length )
    {
      System_Collections_Generic_List_int___AddWithResize(
        v21,
        v23,
        *(const MethodInfo_3584C38 **)(*(_QWORD *)(v26[4] + 192LL) + 112LL));
    }
    else
    {
      v21->fields._size = size + 1;
      items->m_Items[size + 1] = v23;
    }
  }
  if ( max_length >= 1 )
  {
    if ( costumeIds )
    {
      for ( j = 0LL; j != max_length; ++j )
      {
        if ( j >= costumeIds->max_length )
          sub_1BCAA44(v22, v23);
        v23 = (unsigned int)costumeIds->m_Items[j + 1];
        if ( (int)v23 >= 1 )
        {
          v29 = v21->fields._items;
          v30 = Method_System_Collections_Generic_List_int__Add__;
          ++v21->fields._version;
          if ( !v29 )
            goto LABEL_29;
          v31 = v21->fields._size;
          if ( (unsigned int)v31 >= v29->max_length )
          {
            System_Collections_Generic_List_int___AddWithResize(
              v21,
              v23,
              *(const MethodInfo_3584C38 **)(*(_QWORD *)(v30[4] + 192LL) + 112LL));
          }
          else
          {
            v21->fields._size = v31 + 1;
            v29->m_Items[v31 + 1] = v23;
          }
        }
      }
      return System_Collections_Generic_List_int___ToArray(
               v21,
               (const MethodInfo_35866F0 *)Method_System_Collections_Generic_List_int__ToArray__);
    }
LABEL_29:
    sub_1BCAA3C(v22, v23);
  }
  return System_Collections_Generic_List_int___ToArray(
           v21,
           (const MethodInfo_35866F0 *)Method_System_Collections_Generic_List_int__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
System_Int32_array *__fastcall ImageLimitCount__GetCardSelectList_38408460(
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
  unsigned __int64 max_length; // x8
  unsigned __int64 i; // x9
  int32_t v16; // w12

  if ( (byte_4B151CC & 1) == 0 )
  {
    sub_1BCA7E0(&ImageLimitCount_TypeInfo, *(_QWORD *)&limitCount, *(_QWORD *)&costumeId);
    sub_1BCA7E0(&int___TypeInfo, v8, v9);
    byte_4B151CC = 1;
  }
  if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo, *(_QWORD *)&limitCount);
  CardImageLimitCount = ImageLimitCount__GetCardImageLimitCount(svtId, limitCount, 0, 0, v4);
  if ( costumeId <= 10 )
    v11 = 4LL;
  else
    v11 = 5LL;
  result = (System_Int32_array *)sub_1BCA888(int___TypeInfo, v11);
  if ( !result )
    sub_1BCAA3C(0LL, v13);
  max_length = result->max_length;
  for ( i = 0LL; i != 4; ++i )
  {
    if ( i >= max_length )
      goto LABEL_19;
    if ( (__int64)i > CardImageLimitCount )
      v16 = -1;
    else
      v16 = i;
    result->m_Items[i + 1] = v16;
  }
  if ( costumeId >= 11 )
  {
    if ( (unsigned int)max_length <= 4 )
LABEL_19:
      sub_1BCAA44(result, v13);
    result->m_Items[5] = costumeId;
  }
  return result;
}


int32_t __fastcall ImageLimitCount__GetDispLimitCount(int32_t limitCount, const MethodInfo *method)
{
  __int64 v2; // x2
  ImageLimitCount_c *v4; // x0
  struct System_Int32_array *dispLimitCountList; // x8

  if ( (byte_4B151CE & 1) == 0 )
  {
    sub_1BCA7E0(&ImageLimitCount_TypeInfo, method, v2);
    byte_4B151CE = 1;
  }
  if ( (limitCount & 0x80000000) != 0 )
    return -1;
  v4 = ImageLimitCount_TypeInfo;
  if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo, method);
    v4 = ImageLimitCount_TypeInfo;
  }
  dispLimitCountList = v4->static_fields->dispLimitCountList;
  if ( !dispLimitCountList )
LABEL_13:
    sub_1BCAA3C(v4, method);
  if ( (signed int)dispLimitCountList->max_length <= limitCount )
    return -1;
  if ( !v4->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v4, method);
    dispLimitCountList = ImageLimitCount_TypeInfo->static_fields->dispLimitCountList;
    if ( !dispLimitCountList )
      goto LABEL_13;
  }
  if ( dispLimitCountList->max_length <= limitCount )
    sub_1BCAA44(v4, method);
  return dispLimitCountList->m_Items[limitCount + 1];
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall ImageLimitCount__GetImageLimitCount(int32_t svtId, int32_t limitCount, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  struct ImageLimitCount_StaticFields *static_fields; // x8
  System_Collections_Generic_Dictionary_int__int__o *limitMaxList; // x0
  int32_t v9; // w20
  Il2CppClass *klass; // x8
  char *v11; // x8
  int32_t enemyLimitCountStart; // w22
  int32_t value; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4B151C7 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_int__int__TryGetValue__, *(_QWORD *)&limitCount, method);
    sub_1BCA7E0(&ImageLimitCount_TypeInfo, v5, v6);
    byte_4B151C7 = 1;
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
  j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo, *(_QWORD *)&limitCount);
  static_fields = ImageLimitCount_TypeInfo->static_fields;
  enemyLimitCountStart = static_fields->enemyLimitCountStart;
  if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo, *(_QWORD *)&limitCount);
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
          (const MethodInfo_31FE90C *)Method_System_Collections_Generic_Dictionary_int__int__TryGetValue__) )
    return limitCount - 1;
  limitMaxList = (System_Collections_Generic_Dictionary_int__int__o *)ImageLimitCount_TypeInfo;
  v9 = value;
  if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo, *(_QWORD *)&limitCount);
    limitMaxList = (System_Collections_Generic_Dictionary_int__int__o *)ImageLimitCount_TypeInfo;
  }
  klass = limitMaxList[2].fields._entries->obj.klass;
  if ( v9 <= limitCount )
  {
    if ( klass )
    {
      if ( (unsigned int)value < LODWORD(klass->_1.namespaze) )
      {
        v11 = (char *)klass + 4 * value;
        return *((_DWORD *)v11 + 8);
      }
LABEL_25:
      sub_1BCAA44(limitMaxList, *(_QWORD *)&limitCount);
    }
LABEL_24:
    sub_1BCAA3C(limitMaxList, *(_QWORD *)&limitCount);
  }
  if ( !klass )
    goto LABEL_24;
  if ( LODWORD(klass->_1.namespaze) <= limitCount )
    goto LABEL_25;
  v11 = (char *)klass + 4 * (unsigned int)limitCount;
  return *((_DWORD *)v11 + 8);
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

  if ( (byte_4B151C6 & 1) == 0 )
  {
    sub_1BCA7E0(&ImageLimitCount_TypeInfo, *(_QWORD *)&maxLimitCount, method);
    byte_4B151C6 = 1;
  }
  if ( dispLimitCount > 10 )
    return dispLimitCount;
  v5 = ImageLimitCount_TypeInfo;
  if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo, *(_QWORD *)&maxLimitCount);
    v5 = ImageLimitCount_TypeInfo;
  }
  maxDispLimitCountList = v5->static_fields->maxDispLimitCountList;
  if ( !maxDispLimitCountList )
LABEL_16:
    sub_1BCAA3C(v5, *(_QWORD *)&maxLimitCount);
  if ( (signed int)maxDispLimitCountList->max_length <= dispLimitCount )
    return 0;
  if ( !v5->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v5, *(_QWORD *)&maxLimitCount);
    maxDispLimitCountList = ImageLimitCount_TypeInfo->static_fields->maxDispLimitCountList;
    if ( !maxDispLimitCountList )
      goto LABEL_16;
  }
  if ( maxDispLimitCountList->max_length <= dispLimitCount )
    sub_1BCAA44(v5, *(_QWORD *)&maxLimitCount);
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

  if ( (byte_4B151C1 & 1) == 0 )
  {
    sub_1BCA7E0(&ImageLimitCount_TypeInfo, method, v2);
    byte_4B151C1 = 1;
  }
  v4 = ImageLimitCount_TypeInfo;
  if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo, method);
    v4 = ImageLimitCount_TypeInfo;
  }
  minLimitCountList = v4->static_fields->minLimitCountList;
  if ( !minLimitCountList )
    goto LABEL_12;
  if ( (signed int)minLimitCountList->max_length <= imageLimitCount )
    return 0;
  if ( !v4->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v4, method);
    minLimitCountList = ImageLimitCount_TypeInfo->static_fields->minLimitCountList;
    if ( !minLimitCountList )
LABEL_12:
      sub_1BCAA3C(v4, method);
  }
  if ( minLimitCountList->max_length <= imageLimitCount )
    sub_1BCAA44(v4, method);
  return minLimitCountList->m_Items[imageLimitCount + 1];
}


int32_t __fastcall ImageLimitCount__GetLimitCountByImageLimitCostumeIn(
        int32_t imageLimitCount,
        const MethodInfo *method)
{
  __int64 v2; // x2
  ImageLimitCount_c *v4; // x0
  struct System_Int32_array *minLimitCountList; // x8

  if ( (byte_4B151C2 & 1) == 0 )
  {
    sub_1BCA7E0(&ImageLimitCount_TypeInfo, method, v2);
    byte_4B151C2 = 1;
  }
  if ( imageLimitCount <= 10 )
  {
    v4 = ImageLimitCount_TypeInfo;
    if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo, method);
      v4 = ImageLimitCount_TypeInfo;
    }
    minLimitCountList = v4->static_fields->minLimitCountList;
    if ( !minLimitCountList )
      goto LABEL_14;
    if ( (signed int)minLimitCountList->max_length <= imageLimitCount )
      return 0;
    if ( !v4->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v4, method);
      minLimitCountList = ImageLimitCount_TypeInfo->static_fields->minLimitCountList;
      if ( !minLimitCountList )
LABEL_14:
        sub_1BCAA3C(v4, method);
    }
    if ( minLimitCountList->max_length <= imageLimitCount )
      sub_1BCAA44(v4, method);
    return minLimitCountList->m_Items[imageLimitCount + 1];
  }
  return imageLimitCount;
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall ImageLimitCount__GetLimitCountByImageLimit_38405988(
        int32_t imageLimitCount,
        int32_t maxLimitCount,
        const MethodInfo *method)
{
  ImageLimitCount_c *v5; // x0
  struct System_Int32_array *maxLimitCountList; // x8
  int32_t v7; // w8

  if ( (byte_4B151C5 & 1) == 0 )
  {
    sub_1BCA7E0(&ImageLimitCount_TypeInfo, *(_QWORD *)&maxLimitCount, method);
    byte_4B151C5 = 1;
  }
  v5 = ImageLimitCount_TypeInfo;
  if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo, *(_QWORD *)&maxLimitCount);
    v5 = ImageLimitCount_TypeInfo;
  }
  maxLimitCountList = v5->static_fields->maxLimitCountList;
  if ( !maxLimitCountList )
    goto LABEL_14;
  if ( (signed int)maxLimitCountList->max_length <= imageLimitCount )
    return 0;
  if ( !v5->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v5, *(_QWORD *)&maxLimitCount);
    maxLimitCountList = ImageLimitCount_TypeInfo->static_fields->maxLimitCountList;
    if ( !maxLimitCountList )
LABEL_14:
      sub_1BCAA3C(v5, *(_QWORD *)&maxLimitCount);
  }
  if ( maxLimitCountList->max_length <= imageLimitCount )
    sub_1BCAA44(v5, *(_QWORD *)&maxLimitCount);
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
  __int64 v6; // x2
  ImageLimitCount_c *v7; // x0
  System_Collections_Generic_Dictionary_int__int__o *limitMaxList; // x0
  int32_t v9; // w20
  Il2CppClass *klass; // x8
  char *v11; // x8
  int32_t value; // [xsp+Ch] [xbp-24h] BYREF

  v3 = limitCount;
  if ( (byte_4B151C3 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_int__int__TryGetValue__, *(_QWORD *)&limitCount, method);
    sub_1BCA7E0(&ImageLimitCount_TypeInfo, v5, v6);
    byte_4B151C3 = 1;
  }
  value = 0;
  if ( v3 <= 10 )
  {
    v7 = ImageLimitCount_TypeInfo;
    if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo, *(_QWORD *)&limitCount);
      v7 = ImageLimitCount_TypeInfo;
    }
    limitMaxList = v7->static_fields->limitMaxList;
    if ( !limitMaxList )
      goto LABEL_20;
    if ( System_Collections_Generic_Dictionary_int__int___TryGetValue(
           limitMaxList,
           svtId,
           &value,
           (const MethodInfo_31FE90C *)Method_System_Collections_Generic_Dictionary_int__int__TryGetValue__) )
    {
      limitMaxList = (System_Collections_Generic_Dictionary_int__int__o *)ImageLimitCount_TypeInfo;
      v9 = value;
      if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo, *(_QWORD *)&limitCount);
        limitMaxList = (System_Collections_Generic_Dictionary_int__int__o *)ImageLimitCount_TypeInfo;
      }
      klass = limitMaxList[2].fields._entries->obj.klass;
      if ( v9 <= v3 )
      {
        if ( klass )
        {
          if ( (unsigned int)value < LODWORD(klass->_1.namespaze) )
          {
            v11 = (char *)klass + 4 * value;
            return *((_DWORD *)v11 + 8);
          }
LABEL_21:
          sub_1BCAA44(limitMaxList, *(_QWORD *)&limitCount);
        }
      }
      else if ( klass )
      {
        if ( LODWORD(klass->_1.namespaze) > v3 )
        {
          v11 = (char *)klass + 4 * v3;
          return *((_DWORD *)v11 + 8);
        }
        goto LABEL_21;
      }
LABEL_20:
      sub_1BCAA3C(limitMaxList, *(_QWORD *)&limitCount);
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
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x3
  int32_t ImageLimitCount; // w21
  signed int max_length; // w24
  System_Collections_Generic_List_int__o *v20; // x20
  __int64 v21; // x0
  __int64 v22; // x1
  int32_t i; // w25
  struct System_Int32_array *items; // x8
  _QWORD *v25; // x9
  __int64 size; // x10
  unsigned __int64 j; // x21
  struct System_Int32_array *v28; // x8
  _QWORD *v29; // x9
  __int64 v30; // x10

  if ( (byte_4B151C9 & 1) == 0 )
  {
    sub_1BCA7E0(&ImageLimitCount_TypeInfo, *(_QWORD *)&limitCount, costumeIds);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__Add__, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__ToArray__, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int___ctor__, v11, v12);
    sub_1BCA7E0(&System_Collections_Generic_List_int__TypeInfo, v13, v14);
    byte_4B151C9 = 1;
  }
  if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo, *(_QWORD *)&limitCount);
  ImageLimitCount = ImageLimitCount__GetImageLimitCount(svtId, limitCount, (const MethodInfo *)costumeIds);
  if ( costumeIds )
    max_length = costumeIds->max_length;
  else
    max_length = 0;
  v20 = (System_Collections_Generic_List_int__o *)sub_1BCAA2C(
                                                    System_Collections_Generic_List_int__TypeInfo,
                                                    v15,
                                                    v16,
                                                    v17);
  System_Collections_Generic_List_int____ctor(
    v20,
    (const MethodInfo_35843E4 *)Method_System_Collections_Generic_List_int___ctor__);
  if ( !v20 )
    goto LABEL_29;
  for ( i = 0; i != 3; ++i )
  {
    items = v20->fields._items;
    v25 = Method_System_Collections_Generic_List_int__Add__;
    if ( i > ImageLimitCount )
      v22 = 0xFFFFFFFFLL;
    else
      v22 = (unsigned int)i;
    ++v20->fields._version;
    if ( !items )
      goto LABEL_29;
    size = v20->fields._size;
    if ( (unsigned int)size >= items->max_length )
    {
      System_Collections_Generic_List_int___AddWithResize(
        v20,
        v22,
        *(const MethodInfo_3584C38 **)(*(_QWORD *)(v25[4] + 192LL) + 112LL));
    }
    else
    {
      v20->fields._size = size + 1;
      items->m_Items[size + 1] = v22;
    }
  }
  if ( max_length >= 1 )
  {
    if ( costumeIds )
    {
      for ( j = 0LL; j != max_length; ++j )
      {
        if ( j >= costumeIds->max_length )
          sub_1BCAA44(v21, v22);
        v22 = (unsigned int)costumeIds->m_Items[j + 1];
        if ( (int)v22 >= 1 )
        {
          v28 = v20->fields._items;
          v29 = Method_System_Collections_Generic_List_int__Add__;
          ++v20->fields._version;
          if ( !v28 )
            goto LABEL_29;
          v30 = v20->fields._size;
          if ( (unsigned int)v30 >= v28->max_length )
          {
            System_Collections_Generic_List_int___AddWithResize(
              v20,
              v22,
              *(const MethodInfo_3584C38 **)(*(_QWORD *)(v29[4] + 192LL) + 112LL));
          }
          else
          {
            v20->fields._size = v30 + 1;
            v28->m_Items[v30 + 1] = v22;
          }
        }
      }
      return System_Collections_Generic_List_int___ToArray(
               v20,
               (const MethodInfo_35866F0 *)Method_System_Collections_Generic_List_int__ToArray__);
    }
LABEL_29:
    sub_1BCAA3C(v21, v22);
  }
  return System_Collections_Generic_List_int___ToArray(
           v20,
           (const MethodInfo_35866F0 *)Method_System_Collections_Generic_List_int__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
System_Int32_array *__fastcall ImageLimitCount__GetSelectList_38407644(
        int32_t svtId,
        int32_t limitCount,
        int32_t costumeId,
        bool isOwn,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  int32_t ImageLimitCount; // w20
  int v15; // w21
  __int64 v16; // x1
  System_Int32_array *result; // x0
  __int64 v18; // x1
  unsigned __int64 max_length; // x8
  unsigned __int64 i; // x9
  int32_t v21; // w12

  if ( (byte_4B151CA & 1) == 0 )
  {
    sub_1BCA7E0(&ImageLimitCount_TypeInfo, *(_QWORD *)&limitCount, *(_QWORD *)&costumeId);
    sub_1BCA7E0(&int___TypeInfo, v9, v10);
    sub_1BCA7E0(&OptionManager_TypeInfo, v11, v12);
    byte_4B151CA = 1;
  }
  if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo, *(_QWORD *)&limitCount);
  ImageLimitCount = ImageLimitCount__GetImageLimitCount(svtId, limitCount, *(const MethodInfo **)&costumeId);
  if ( costumeId < 11 )
    goto LABEL_6;
  if ( isOwn )
    goto LABEL_11;
  if ( !OptionManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo, v13);
  if ( OptionManager__GetFriendCostume(0LL) )
  {
LABEL_11:
    v16 = 4LL;
    v15 = 1;
  }
  else
  {
LABEL_6:
    v15 = 0;
    v16 = 3LL;
  }
  result = (System_Int32_array *)sub_1BCA888(int___TypeInfo, v16);
  if ( !result )
    sub_1BCAA3C(0LL, v18);
  max_length = result->max_length;
  for ( i = 0LL; i != 3; ++i )
  {
    if ( i >= max_length )
      goto LABEL_23;
    if ( (__int64)i > ImageLimitCount )
      v21 = -1;
    else
      v21 = i;
    result->m_Items[i + 1] = v21;
  }
  if ( v15 )
  {
    if ( (unsigned int)max_length <= 3 )
LABEL_23:
      sub_1BCAA44(result, v18);
    result->m_Items[4] = costumeId;
  }
  return result;
}


void __fastcall ImageLimitCount__Initialize(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x1
  __int64 v4; // x2
  __int64 v5; // x1
  __int64 v6; // x2
  Il2CppObject *Instance; // x0
  __int64 v8; // x1
  System_Collections_Generic_Dictionary_int__int__o *LimitCountMaxList; // x0
  __int64 v10; // x1
  int64_t v11; // x2
  int32_t v12; // w3
  System_String_o *v13; // x4
  BattleSetupInfo_o *v14; // x5
  FollowerInfo_o *v15; // x6
  PartyListViewItem_o *v16; // x7
  ImageLimitCount_c *v17; // x8
  int64_t v18; // x19
  struct ImageLimitCount_StaticFields *static_fields; // x0

  if ( (byte_4B151C0 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ServantMaster___, v1, v2);
    sub_1BCA7E0(&ImageLimitCount_TypeInfo, v3, v4);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5, v6);
    byte_4B151C0 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantMaster___)) == 0LL )
  {
    sub_1BCAA3C(Instance, v8);
  }
  LimitCountMaxList = ServantMaster__GetLimitCountMaxList((ServantMaster_o *)Instance, 0LL);
  v17 = ImageLimitCount_TypeInfo;
  v18 = (int64_t)LimitCountMaxList;
  if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo, v10);
    v17 = ImageLimitCount_TypeInfo;
  }
  static_fields = v17->static_fields;
  static_fields->limitMaxList = (struct System_Collections_Generic_Dictionary_int__int__o *)v18;
  sub_1BCA784((PartyOrganizationUtility_o *)&static_fields->limitMaxList, v18, v11, v12, v13, v14, v15, v16);
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
  __int64 v7; // x1
  __int64 v8; // x2
  ImageLimitCount_c *v9; // x0
  System_Collections_Generic_Dictionary_int__int__o *limitMaxList; // x0
  int32_t v11; // w21
  Il2CppClass *klass; // x8
  bool result; // w0
  int32_t value; // [xsp+Ch] [xbp-24h] BYREF

  v5 = svtLimitCnt;
  if ( (byte_4B151C4 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_Generic_Dictionary_int__int__TryGetValue__,
      *(_QWORD *)&svtLimitCnt,
      limitCount);
    sub_1BCA7E0(&ImageLimitCount_TypeInfo, v7, v8);
    byte_4B151C4 = 1;
  }
  value = 0;
  *limitCount = -1;
  if ( v5 > 10 )
    goto LABEL_18;
  v9 = ImageLimitCount_TypeInfo;
  if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo, *(_QWORD *)&svtLimitCnt);
    v9 = ImageLimitCount_TypeInfo;
  }
  limitMaxList = v9->static_fields->limitMaxList;
  if ( !limitMaxList )
    goto LABEL_19;
  if ( !System_Collections_Generic_Dictionary_int__int___TryGetValue(
          limitMaxList,
          svtId,
          &value,
          (const MethodInfo_31FE90C *)Method_System_Collections_Generic_Dictionary_int__int__TryGetValue__) )
    return 0;
  limitMaxList = (System_Collections_Generic_Dictionary_int__int__o *)ImageLimitCount_TypeInfo;
  v11 = value;
  if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo, *(_QWORD *)&svtLimitCnt);
    limitMaxList = (System_Collections_Generic_Dictionary_int__int__o *)ImageLimitCount_TypeInfo;
  }
  klass = limitMaxList[2].fields._entries->obj.klass;
  if ( v11 <= v5 )
  {
    if ( klass )
    {
      v5 = value;
      if ( (unsigned int)value >= LODWORD(klass->_1.namespaze) )
LABEL_13:
        sub_1BCAA44(limitMaxList, *(_QWORD *)&svtLimitCnt);
      goto LABEL_17;
    }
LABEL_19:
    sub_1BCAA3C(limitMaxList, *(_QWORD *)&svtLimitCnt);
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
  __int64 v2; // x2
  ImageLimitCount_c *v3; // x0
  struct System_Int32_array *maxDispLimitCountList; // x8

  if ( (byte_4B151CD & 1) == 0 )
  {
    sub_1BCA7E0(&ImageLimitCount_TypeInfo, v1, v2);
    byte_4B151CD = 1;
  }
  v3 = ImageLimitCount_TypeInfo;
  if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo, v1);
    v3 = ImageLimitCount_TypeInfo;
  }
  maxDispLimitCountList = v3->static_fields->maxDispLimitCountList;
  if ( !maxDispLimitCountList )
    sub_1BCAA3C(v3, v1);
  return maxDispLimitCountList->max_length;
}


void __fastcall ImageLimitCount__initializeAssetStorage(const MethodInfo *method)
{
  ;
}