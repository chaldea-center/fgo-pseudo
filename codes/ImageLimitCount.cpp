void ImageLimitCount___cctor(const MethodInfo *method)
{
  System_Array_o *v1; // x0
  System_RuntimeFieldHandle_o v2; // x1
  struct System_Int32_array *v3; // x19
  System_String_o *v4; // x2
  System_String_o *v5; // x3
  int32_t v6; // w4
  int32_t v7; // w5
  bool v8; // w6
  bool v9; // w7
  System_Array_o *v10; // x0
  System_RuntimeFieldHandle_o v11; // x1
  System_Array_o *v12; // x19
  struct ImageLimitCount_StaticFields *static_fields; // x0
  System_String_o *v14; // x2
  System_String_o *v15; // x3
  int32_t v16; // w4
  int32_t v17; // w5
  bool v18; // w6
  bool v19; // w7
  System_Array_o *v20; // x0
  System_RuntimeFieldHandle_o v21; // x1
  System_Array_o *v22; // x19
  struct ImageLimitCount_StaticFields *v23; // x0
  System_String_o *v24; // x2
  System_String_o *v25; // x3
  int32_t v26; // w4
  int32_t v27; // w5
  bool v28; // w6
  bool v29; // w7
  __int64 v30; // x0
  __int64 v31; // x1
  System_String_o *v32; // x2
  System_String_o *v33; // x3
  int32_t v34; // w4
  int32_t v35; // w5
  bool v36; // w6
  bool v37; // w7
  unsigned int v38; // w8
  struct System_Int32_array *v39; // x1
  struct ImageLimitCount_StaticFields *v40; // x0
  System_Array_o *v41; // x0
  System_RuntimeFieldHandle_o v42; // x1
  System_Array_o *v43; // x19
  struct ImageLimitCount_StaticFields *v44; // x0
  System_String_o *v45; // x2
  System_String_o *v46; // x3
  int32_t v47; // w4
  int32_t v48; // w5
  bool v49; // w6
  bool v50; // w7

  if ( (byte_596F6A2 & 1) == 0 )
  {
    sub_2213A60(&ImageLimitCount_TypeInfo);
    sub_2213A60(&int___TypeInfo);
    sub_2213A60(&Field__PrivateImplementationDetails__3A795EE993DCFCD47AE2FD7282FAE2348DADC51429112235F8375626F9439A0B);
    sub_2213A60(&Field__PrivateImplementationDetails__598CEB271FAC09B40101AAE5910D6939EFC22B105F7DF2AA77795704D4CC7911);
    sub_2213A60(&Field__PrivateImplementationDetails__E8845519DB154B41E620A98F949B9EDCEFB1F9060DC8290A9F7D2C3200ABD0CB);
    sub_2213A60(&Field__PrivateImplementationDetails__F239810D17032E35383496434C64894FFE055A198BA7CFB907D73BAF26A70F0C);
    byte_596F6A2 = 1;
  }
  v1 = (System_Array_o *)sub_2213B20(int___TypeInfo, 5);
  v2.fields.value = Field__PrivateImplementationDetails__598CEB271FAC09B40101AAE5910D6939EFC22B105F7DF2AA77795704D4CC7911;
  v3 = (struct System_Int32_array *)v1;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_76340728(v1, v2, 0);
  ImageLimitCount_TypeInfo->static_fields->imageLimitCountList = v3;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)ImageLimitCount_TypeInfo->static_fields,
    (int32_t)v3,
    v4,
    v5,
    v6,
    v7,
    v8,
    v9);
  v10 = (System_Array_o *)sub_2213B20(int___TypeInfo, 4);
  v11.fields.value = Field__PrivateImplementationDetails__F239810D17032E35383496434C64894FFE055A198BA7CFB907D73BAF26A70F0C;
  v12 = v10;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_76340728(v10, v11, 0);
  static_fields = ImageLimitCount_TypeInfo->static_fields;
  static_fields->minLimitCountList = (struct System_Int32_array *)v12;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&static_fields->minLimitCountList,
    (int32_t)v12,
    v14,
    v15,
    v16,
    v17,
    v18,
    v19);
  v20 = (System_Array_o *)sub_2213B20(int___TypeInfo, 4);
  v21.fields.value = Field__PrivateImplementationDetails__E8845519DB154B41E620A98F949B9EDCEFB1F9060DC8290A9F7D2C3200ABD0CB;
  v22 = v20;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_76340728(v20, v21, 0);
  v23 = ImageLimitCount_TypeInfo->static_fields;
  v23->maxLimitCountList = (struct System_Int32_array *)v22;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v23->maxLimitCountList, (int32_t)v22, v24, v25, v26, v27, v28, v29);
  v30 = sub_2213B20(int___TypeInfo, 3);
  if ( !v30 )
    sub_2213CDC(0, v31);
  v38 = *(_DWORD *)(v30 + 24);
  v39 = (struct System_Int32_array *)v30;
  if ( v38 <= 1 || (*(_DWORD *)(v30 + 36) = 2, v38 == 2) )
    sub_2213CE4(v30);
  v40 = ImageLimitCount_TypeInfo->static_fields;
  v39->m_Items[2] = 4;
  v40->maxDispLimitCountList = v39;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&v40->maxDispLimitCountList,
    (int32_t)v39,
    v32,
    v33,
    v34,
    v35,
    v36,
    v37);
  v41 = (System_Array_o *)sub_2213B20(int___TypeInfo, 5);
  v42.fields.value = Field__PrivateImplementationDetails__3A795EE993DCFCD47AE2FD7282FAE2348DADC51429112235F8375626F9439A0B;
  v43 = v41;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_76340728(v41, v42, 0);
  v44 = ImageLimitCount_TypeInfo->static_fields;
  v44->dispLimitCountList = (struct System_Int32_array *)v43;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v44->dispLimitCountList, (int32_t)v43, v45, v46, v47, v48, v49, v50);
  ImageLimitCount_TypeInfo->static_fields->enemyLimitCountStart = 101;
}


void ImageLimitCount___ctor(ImageLimitCount_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


int32_t ImageLimitCount__ConvertDispLimitCountForClient(int32_t dispLimitCount, const MethodInfo *method)
{
  int32_t v2; // w8

  v2 = dispLimitCount - 1;
  if ( dispLimitCount <= 0 )
    v2 = 0;
  if ( dispLimitCount < 11 )
    return v2;
  return dispLimitCount;
}


int32_t ImageLimitCount__ConvertDispLimitCountForServer(int32_t dispLimitCount, const MethodInfo *method)
{
  if ( dispLimitCount < 11 )
    ++dispLimitCount;
  return dispLimitCount;
}


// local variable allocation has failed, the output may be wrong!
int32_t ImageLimitCount__GetCardImageLimitCount(
        int32_t svtId,
        int32_t limitCount,
        bool isOwn,
        bool isNpc,
        const MethodInfo *method)
{
  ImageLimitCount_c *v9; // x0
  System_Collections_Generic_Dictionary_int__int__o *limitMaxList; // x0
  __int64 v11; // x2
  int32_t v12; // w22
  Il2CppClass *v13; // x8
  char *v14; // x8
  BalanceConfig_c *v16; // x0
  Il2CppClass *klass; // x8
  int32_t value; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_596F69A & 1) == 0 )
  {
    sub_2213A60(&BalanceConfig_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_int__int__TryGetValue__);
    sub_2213A60(&ImageLimitCount_TypeInfo);
    sub_2213A60(&OptionManager_TypeInfo);
    byte_596F69A = 1;
  }
  value = 0;
  if ( limitCount < 0 )
    return 0;
  v9 = ImageLimitCount_TypeInfo;
  if ( !*(&ImageLimitCount_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo, *(_QWORD *)&limitCount, isOwn);
    v9 = ImageLimitCount_TypeInfo;
  }
  limitMaxList = v9->static_fields->limitMaxList;
  if ( !limitMaxList )
    goto LABEL_32;
  if ( !System_Collections_Generic_Dictionary_int__int___TryGetValue(
          limitMaxList,
          svtId,
          &value,
          (const MethodInfo_3F9458C *)Method_System_Collections_Generic_Dictionary_int__int__TryGetValue__) )
    return limitCount - 1;
  v12 = value;
  if ( value <= limitCount )
  {
    if ( !isNpc )
    {
      v16 = BalanceConfig_TypeInfo;
      if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, *(_QWORD *)&limitCount, v11);
        v16 = BalanceConfig_TypeInfo;
      }
      if ( v12 >= v16->static_fields->ServantLimitMax )
      {
        if ( isOwn )
          return 3;
        if ( !*(&OptionManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo, *(_QWORD *)&limitCount, v11);
        if ( OptionManager__GetFriendImageLimitCount(0) )
          return 3;
      }
    }
    limitMaxList = (System_Collections_Generic_Dictionary_int__int__o *)ImageLimitCount_TypeInfo;
    if ( !*(&ImageLimitCount_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo, *(_QWORD *)&limitCount, v11);
      limitMaxList = (System_Collections_Generic_Dictionary_int__int__o *)ImageLimitCount_TypeInfo;
    }
    klass = limitMaxList[2].fields._entries->obj.klass;
    if ( klass )
    {
      if ( (unsigned int)value < LODWORD(klass->_1.namespaze) )
      {
        v14 = (char *)klass + 4 * value;
        return *((_DWORD *)v14 + 8);
      }
LABEL_33:
      sub_2213CE4(limitMaxList);
    }
LABEL_32:
    sub_2213CDC(limitMaxList, *(_QWORD *)&limitCount);
  }
  limitMaxList = (System_Collections_Generic_Dictionary_int__int__o *)ImageLimitCount_TypeInfo;
  if ( !*(&ImageLimitCount_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo, *(_QWORD *)&limitCount, v11);
    limitMaxList = (System_Collections_Generic_Dictionary_int__int__o *)ImageLimitCount_TypeInfo;
  }
  v13 = limitMaxList[2].fields._entries->obj.klass;
  if ( !v13 )
    goto LABEL_32;
  if ( LODWORD(v13->_1.namespaze) <= limitCount )
    goto LABEL_33;
  v14 = (char *)v13 + 4 * (unsigned int)limitCount;
  return *((_DWORD *)v14 + 8);
}


// local variable allocation has failed, the output may be wrong!
System_Int32_array *ImageLimitCount__GetCardSelectList(
        int32_t svtId,
        int32_t limitCount,
        System_Int32_array *costumeIds,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x4
  int32_t CardImageLimitCount; // w21
  int max_length; // w24
  System_Collections_Generic_List_int__o *v10; // x20
  __int64 v11; // x0
  __int64 v12; // x1
  int32_t v13; // w25
  _QWORD *v14; // x8
  struct System_Int32_array *items; // x9
  __int64 size; // x10
  unsigned __int64 i; // x21
  struct System_Int32_array *v18; // x8
  _QWORD *v19; // x9
  __int64 v20; // x10

  if ( (byte_596F69D & 1) == 0 )
  {
    sub_2213A60(&ImageLimitCount_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_int__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_2213A60(&Method_System_Collections_Generic_List_int___ctor__);
    sub_2213A60(&System_Collections_Generic_List_int__TypeInfo);
    byte_596F69D = 1;
  }
  if ( !*(&ImageLimitCount_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo, *(_QWORD *)&limitCount, costumeIds);
  CardImageLimitCount = ImageLimitCount__GetCardImageLimitCount(svtId, limitCount, 1, 0, v4);
  if ( costumeIds )
    max_length = costumeIds->max_length;
  else
    max_length = 0;
  v10 = (System_Collections_Generic_List_int__o *)sub_2213CCC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v10,
    (const MethodInfo_44669E0 *)Method_System_Collections_Generic_List_int___ctor__);
  if ( !v10 )
    goto LABEL_29;
  v13 = 0;
  v14 = Method_System_Collections_Generic_List_int__Add__;
  do
  {
    items = v10->fields._items;
    if ( v13 > CardImageLimitCount )
      v12 = 0xFFFFFFFFLL;
    else
      v12 = (unsigned int)v13;
    ++v10->fields._version;
    if ( !items )
      goto LABEL_29;
    size = v10->fields._size;
    if ( (unsigned int)size >= LODWORD(items->max_length) )
    {
      System_Collections_Generic_List_int___AddWithResize(
        v10,
        v12,
        *(const MethodInfo_4467270 **)(*(_QWORD *)(v14[4] + 192LL) + 112LL));
      v14 = Method_System_Collections_Generic_List_int__Add__;
    }
    else
    {
      v10->fields._size = size + 1;
      items->m_Items[size] = v12;
    }
    ++v13;
  }
  while ( v13 != 4 );
  if ( max_length >= 1 )
  {
    if ( costumeIds )
    {
      for ( i = 0; i != max_length; ++i )
      {
        if ( i >= LODWORD(costumeIds->max_length) )
          sub_2213CE4(v11);
        v12 = (unsigned int)costumeIds->m_Items[i];
        if ( (int)v12 >= 1 )
        {
          v18 = v10->fields._items;
          v19 = Method_System_Collections_Generic_List_int__Add__;
          ++v10->fields._version;
          if ( !v18 )
            goto LABEL_29;
          v20 = v10->fields._size;
          if ( (unsigned int)v20 >= LODWORD(v18->max_length) )
          {
            System_Collections_Generic_List_int___AddWithResize(
              v10,
              v12,
              *(const MethodInfo_4467270 **)(*(_QWORD *)(v19[4] + 192LL) + 112LL));
          }
          else
          {
            v10->fields._size = v20 + 1;
            v18->m_Items[v20] = v12;
          }
        }
      }
      return System_Collections_Generic_List_int___ToArray(
               v10,
               (const MethodInfo_4468CF0 *)Method_System_Collections_Generic_List_int__ToArray__);
    }
LABEL_29:
    sub_2213CDC(v11, v12);
  }
  return System_Collections_Generic_List_int___ToArray(
           v10,
           (const MethodInfo_4468CF0 *)Method_System_Collections_Generic_List_int__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
System_Int32_array *ImageLimitCount__GetCardSelectList_47395484(
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
  il2cpp_array_size_t max_length; // x8
  __int64 i; // x9
  char *v14; // x13
  int v15; // w12

  if ( (byte_596F69E & 1) == 0 )
  {
    sub_2213A60(&ImageLimitCount_TypeInfo);
    sub_2213A60(&int___TypeInfo);
    byte_596F69E = 1;
  }
  if ( !*(&ImageLimitCount_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo, *(_QWORD *)&limitCount, *(_QWORD *)&costumeId);
  CardImageLimitCount = ImageLimitCount__GetCardImageLimitCount(svtId, limitCount, 0, 0, v4);
  if ( costumeId <= 10 )
    v9 = 4;
  else
    v9 = 5;
  result = (System_Int32_array *)sub_2213B20(int___TypeInfo, v9);
  if ( !result )
    sub_2213CDC(0, v11);
  max_length = result->max_length;
  for ( i = 0; i != 4; ++i )
  {
    if ( (unsigned int)max_length == i )
      goto LABEL_19;
    v14 = (char *)result + 4 * i;
    if ( i > CardImageLimitCount )
      v15 = -1;
    else
      v15 = i;
    *((_DWORD *)v14 + 8) = v15;
  }
  if ( costumeId >= 11 )
  {
    if ( (unsigned int)max_length <= 4 )
LABEL_19:
      sub_2213CE4(result);
    result->m_Items[4] = costumeId;
  }
  return result;
}


int32_t ImageLimitCount__GetDispLimitCount(int32_t limitCount, const MethodInfo *method)
{
  __int64 v2; // x2
  ImageLimitCount_c *v4; // x0
  struct System_Int32_array *dispLimitCountList; // x8

  if ( (byte_596F6A0 & 1) == 0 )
  {
    sub_2213A60(&ImageLimitCount_TypeInfo);
    byte_596F6A0 = 1;
  }
  if ( limitCount < 0 )
    return -1;
  v4 = ImageLimitCount_TypeInfo;
  if ( !*(&ImageLimitCount_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo, method, v2);
    v4 = ImageLimitCount_TypeInfo;
  }
  dispLimitCountList = v4->static_fields->dispLimitCountList;
  if ( !dispLimitCountList )
LABEL_13:
    sub_2213CDC(v4, method);
  if ( SLODWORD(dispLimitCountList->max_length) <= limitCount )
    return -1;
  if ( !*(&v4->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(v4, method, v2);
    dispLimitCountList = ImageLimitCount_TypeInfo->static_fields->dispLimitCountList;
    if ( !dispLimitCountList )
      goto LABEL_13;
  }
  if ( LODWORD(dispLimitCountList->max_length) <= limitCount )
    sub_2213CE4(v4);
  return dispLimitCountList->m_Items[limitCount];
}


// local variable allocation has failed, the output may be wrong!
void ImageLimitCount__GetDispLimitCountSealAfter(
        int32_t svtId,
        int32_t limitCount,
        int32_t dispLimitCount,
        int32_t *afterDispLimitCount,
        int32_t *afterSelectedLimitCount,
        const MethodInfo *method)
{
  int v8; // w22
  __int64 v11; // x1
  __int64 v12; // x2
  int32_t LimitCountByDispLimit; // w8
  DataManager_c *v14; // x0
  Il2CppObject *Master_object; // x0
  __int64 v16; // x1
  int32_t ServantLimitCountSealAfter; // w0
  const MethodInfo *v18; // x1
  int32_t v19; // w0
  int v20; // w8

  v8 = dispLimitCount;
  if ( (byte_596F6A1 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMaster_ServantLimitImageMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&ImageLimitCount_TypeInfo);
    byte_596F6A1 = 1;
  }
  if ( v8 >= 11 )
  {
    *afterSelectedLimitCount = v8;
  }
  else
  {
    if ( !*(&ImageLimitCount_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo, *(_QWORD *)&limitCount, *(_QWORD *)&dispLimitCount);
    LimitCountByDispLimit = ImageLimitCount__GetLimitCountByDispLimit(
                              v8,
                              limitCount,
                              *(const MethodInfo **)&dispLimitCount);
    v14 = DataManager_TypeInfo;
    *afterSelectedLimitCount = LimitCountByDispLimit;
    if ( !*(&v14->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(v14, v11, v12);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
    if ( !Master_object )
      sub_2213CDC(0, v16);
    ServantLimitCountSealAfter = ServantLimitImageMaster__GetServantLimitCountSealAfter(
                                   (ServantLimitImageMaster_o *)Master_object,
                                   svtId,
                                   *afterSelectedLimitCount,
                                   0);
    *afterSelectedLimitCount = ServantLimitCountSealAfter;
    v19 = ImageLimitCount__GetDispLimitCount(ServantLimitCountSealAfter, v18);
    v20 = v19 - 1;
    if ( v19 <= 0 )
      v20 = 0;
    if ( v19 >= 11 )
      v8 = v19;
    else
      v8 = v20;
  }
  *afterDispLimitCount = v8;
}


// local variable allocation has failed, the output may be wrong!
int32_t ImageLimitCount__GetImageLimitCount(int32_t svtId, int32_t limitCount, const MethodInfo *method)
{
  ImageLimitCount_c *v5; // x0
  struct ImageLimitCount_StaticFields *static_fields; // x8
  int v7; // w10
  int32_t enemyLimitCountStart; // w9
  System_Collections_Generic_Dictionary_int__int__o *limitMaxList; // x0
  __int64 v10; // x2
  int v11; // w8
  Il2CppClass *v12; // x8
  char *v13; // x8
  Il2CppClass *klass; // x8
  int32_t value; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_596F699 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_int__int__TryGetValue__);
    sub_2213A60(&ImageLimitCount_TypeInfo);
    byte_596F699 = 1;
  }
  value = 0;
  if ( limitCount < 0 )
    return 0;
  v5 = ImageLimitCount_TypeInfo;
  if ( !*(&ImageLimitCount_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo, *(_QWORD *)&limitCount, method);
    v5 = ImageLimitCount_TypeInfo;
  }
  static_fields = v5->static_fields;
  v7 = *(&v5->_2.cctor_finished + 1);
  enemyLimitCountStart = static_fields->enemyLimitCountStart;
  if ( enemyLimitCountStart > limitCount )
  {
    if ( !v7 )
    {
      j_il2cpp_runtime_class_init_0(v5, *(_QWORD *)&limitCount, method);
      static_fields = ImageLimitCount_TypeInfo->static_fields;
    }
    limitMaxList = static_fields->limitMaxList;
    if ( limitMaxList )
    {
      if ( !System_Collections_Generic_Dictionary_int__int___TryGetValue(
              limitMaxList,
              svtId,
              &value,
              (const MethodInfo_3F9458C *)Method_System_Collections_Generic_Dictionary_int__int__TryGetValue__) )
        return limitCount - 1;
      limitMaxList = (System_Collections_Generic_Dictionary_int__int__o *)ImageLimitCount_TypeInfo;
      v11 = *(&ImageLimitCount_TypeInfo->_2.cctor_finished + 1);
      if ( value <= limitCount )
      {
        if ( !v11 )
        {
          j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo, *(_QWORD *)&limitCount, v10);
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
LABEL_30:
          sub_2213CE4(limitMaxList);
        }
      }
      else
      {
        if ( !v11 )
        {
          j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo, *(_QWORD *)&limitCount, v10);
          limitMaxList = (System_Collections_Generic_Dictionary_int__int__o *)ImageLimitCount_TypeInfo;
        }
        v12 = limitMaxList[2].fields._entries->obj.klass;
        if ( v12 )
        {
          if ( LODWORD(v12->_1.namespaze) > limitCount )
          {
            v13 = (char *)v12 + 4 * (unsigned int)limitCount;
            return *((_DWORD *)v13 + 8);
          }
          goto LABEL_30;
        }
      }
    }
    sub_2213CDC(limitMaxList, *(_QWORD *)&limitCount);
  }
  if ( !v7 )
  {
    j_il2cpp_runtime_class_init_0(v5, *(_QWORD *)&limitCount, method);
    enemyLimitCountStart = ImageLimitCount_TypeInfo->static_fields->enemyLimitCountStart;
  }
  return limitCount - enemyLimitCountStart;
}


// local variable allocation has failed, the output may be wrong!
int32_t ImageLimitCount__GetLimitCountByDispLimit(
        int32_t dispLimitCount,
        int32_t maxLimitCount,
        const MethodInfo *method)
{
  ImageLimitCount_c *v5; // x0
  struct System_Int32_array *maxDispLimitCountList; // x8
  int32_t v7; // w8

  if ( (byte_596F698 & 1) == 0 )
  {
    sub_2213A60(&ImageLimitCount_TypeInfo);
    byte_596F698 = 1;
  }
  if ( dispLimitCount > 10 )
    return dispLimitCount;
  v5 = ImageLimitCount_TypeInfo;
  if ( !*(&ImageLimitCount_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo, *(_QWORD *)&maxLimitCount, method);
    v5 = ImageLimitCount_TypeInfo;
  }
  maxDispLimitCountList = v5->static_fields->maxDispLimitCountList;
  if ( !maxDispLimitCountList )
LABEL_16:
    sub_2213CDC(v5, *(_QWORD *)&maxLimitCount);
  if ( SLODWORD(maxDispLimitCountList->max_length) <= dispLimitCount )
    return 0;
  if ( !*(&v5->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(v5, *(_QWORD *)&maxLimitCount, method);
    maxDispLimitCountList = ImageLimitCount_TypeInfo->static_fields->maxDispLimitCountList;
    if ( !maxDispLimitCountList )
      goto LABEL_16;
  }
  if ( LODWORD(maxDispLimitCountList->max_length) <= dispLimitCount )
    sub_2213CE4(v5);
  v7 = maxDispLimitCountList->m_Items[dispLimitCount];
  if ( v7 >= maxLimitCount )
    return maxLimitCount;
  else
    return v7;
}


int32_t ImageLimitCount__GetLimitCountByImageLimit(int32_t imageLimitCount, const MethodInfo *method)
{
  __int64 v2; // x2
  ImageLimitCount_c *v4; // x0
  struct System_Int32_array *minLimitCountList; // x8

  if ( (byte_596F693 & 1) == 0 )
  {
    sub_2213A60(&ImageLimitCount_TypeInfo);
    byte_596F693 = 1;
  }
  v4 = ImageLimitCount_TypeInfo;
  if ( !*(&ImageLimitCount_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo, method, v2);
    v4 = ImageLimitCount_TypeInfo;
  }
  minLimitCountList = v4->static_fields->minLimitCountList;
  if ( !minLimitCountList )
    goto LABEL_12;
  if ( SLODWORD(minLimitCountList->max_length) <= imageLimitCount )
    return 0;
  if ( !*(&v4->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(v4, method, v2);
    minLimitCountList = ImageLimitCount_TypeInfo->static_fields->minLimitCountList;
    if ( !minLimitCountList )
LABEL_12:
      sub_2213CDC(v4, method);
  }
  if ( LODWORD(minLimitCountList->max_length) <= imageLimitCount )
    sub_2213CE4(v4);
  return minLimitCountList->m_Items[imageLimitCount];
}


int32_t ImageLimitCount__GetLimitCountByImageLimitCostumeIn(int32_t imageLimitCount, const MethodInfo *method)
{
  __int64 v2; // x2
  ImageLimitCount_c *v4; // x0
  struct System_Int32_array *minLimitCountList; // x8

  if ( (byte_596F694 & 1) == 0 )
  {
    sub_2213A60(&ImageLimitCount_TypeInfo);
    byte_596F694 = 1;
  }
  if ( imageLimitCount <= 10 )
  {
    v4 = ImageLimitCount_TypeInfo;
    if ( !*(&ImageLimitCount_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo, method, v2);
      v4 = ImageLimitCount_TypeInfo;
    }
    minLimitCountList = v4->static_fields->minLimitCountList;
    if ( !minLimitCountList )
      goto LABEL_14;
    if ( SLODWORD(minLimitCountList->max_length) <= imageLimitCount )
      return 0;
    if ( !*(&v4->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v4, method, v2);
      minLimitCountList = ImageLimitCount_TypeInfo->static_fields->minLimitCountList;
      if ( !minLimitCountList )
LABEL_14:
        sub_2213CDC(v4, method);
    }
    if ( LODWORD(minLimitCountList->max_length) <= imageLimitCount )
      sub_2213CE4(v4);
    return minLimitCountList->m_Items[imageLimitCount];
  }
  return imageLimitCount;
}


// local variable allocation has failed, the output may be wrong!
int32_t ImageLimitCount__GetLimitCountByImageLimit_47392984(
        int32_t imageLimitCount,
        int32_t maxLimitCount,
        const MethodInfo *method)
{
  ImageLimitCount_c *v5; // x0
  struct System_Int32_array *maxLimitCountList; // x8
  int32_t v7; // w8

  if ( (byte_596F697 & 1) == 0 )
  {
    sub_2213A60(&ImageLimitCount_TypeInfo);
    byte_596F697 = 1;
  }
  v5 = ImageLimitCount_TypeInfo;
  if ( !*(&ImageLimitCount_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo, *(_QWORD *)&maxLimitCount, method);
    v5 = ImageLimitCount_TypeInfo;
  }
  maxLimitCountList = v5->static_fields->maxLimitCountList;
  if ( !maxLimitCountList )
    goto LABEL_14;
  if ( SLODWORD(maxLimitCountList->max_length) <= imageLimitCount )
    return 0;
  if ( !*(&v5->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(v5, *(_QWORD *)&maxLimitCount, method);
    maxLimitCountList = ImageLimitCount_TypeInfo->static_fields->maxLimitCountList;
    if ( !maxLimitCountList )
LABEL_14:
      sub_2213CDC(v5, *(_QWORD *)&maxLimitCount);
  }
  if ( LODWORD(maxLimitCountList->max_length) <= imageLimitCount )
    sub_2213CE4(v5);
  v7 = maxLimitCountList->m_Items[imageLimitCount];
  if ( v7 >= maxLimitCount )
    return maxLimitCount;
  else
    return v7;
}


// local variable allocation has failed, the output may be wrong!
System_Int32_array *ImageLimitCount__GetSelectList(
        int32_t svtId,
        int32_t limitCount,
        System_Int32_array *costumeIds,
        const MethodInfo *method)
{
  int32_t ImageLimitCount; // w21
  int max_length; // w24
  System_Collections_Generic_List_int__o *v9; // x20
  __int64 v10; // x0
  __int64 v11; // x1
  int32_t v12; // w25
  _QWORD *v13; // x8
  struct System_Int32_array *items; // x9
  __int64 size; // x10
  unsigned __int64 i; // x21
  struct System_Int32_array *v17; // x8
  _QWORD *v18; // x9
  __int64 v19; // x10

  if ( (byte_596F69B & 1) == 0 )
  {
    sub_2213A60(&ImageLimitCount_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_int__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_2213A60(&Method_System_Collections_Generic_List_int___ctor__);
    sub_2213A60(&System_Collections_Generic_List_int__TypeInfo);
    byte_596F69B = 1;
  }
  if ( !*(&ImageLimitCount_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo, *(_QWORD *)&limitCount, costumeIds);
  ImageLimitCount = ImageLimitCount__GetImageLimitCount(svtId, limitCount, (const MethodInfo *)costumeIds);
  if ( costumeIds )
    max_length = costumeIds->max_length;
  else
    max_length = 0;
  v9 = (System_Collections_Generic_List_int__o *)sub_2213CCC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v9,
    (const MethodInfo_44669E0 *)Method_System_Collections_Generic_List_int___ctor__);
  if ( !v9 )
    goto LABEL_29;
  v12 = 0;
  v13 = Method_System_Collections_Generic_List_int__Add__;
  do
  {
    items = v9->fields._items;
    if ( v12 > ImageLimitCount )
      v11 = 0xFFFFFFFFLL;
    else
      v11 = (unsigned int)v12;
    ++v9->fields._version;
    if ( !items )
      goto LABEL_29;
    size = v9->fields._size;
    if ( (unsigned int)size >= LODWORD(items->max_length) )
    {
      System_Collections_Generic_List_int___AddWithResize(
        v9,
        v11,
        *(const MethodInfo_4467270 **)(*(_QWORD *)(v13[4] + 192LL) + 112LL));
      v13 = Method_System_Collections_Generic_List_int__Add__;
    }
    else
    {
      v9->fields._size = size + 1;
      items->m_Items[size] = v11;
    }
    ++v12;
  }
  while ( v12 != 3 );
  if ( max_length >= 1 )
  {
    if ( costumeIds )
    {
      for ( i = 0; i != max_length; ++i )
      {
        if ( i >= LODWORD(costumeIds->max_length) )
          sub_2213CE4(v10);
        v11 = (unsigned int)costumeIds->m_Items[i];
        if ( (int)v11 >= 1 )
        {
          v17 = v9->fields._items;
          v18 = Method_System_Collections_Generic_List_int__Add__;
          ++v9->fields._version;
          if ( !v17 )
            goto LABEL_29;
          v19 = v9->fields._size;
          if ( (unsigned int)v19 >= LODWORD(v17->max_length) )
          {
            System_Collections_Generic_List_int___AddWithResize(
              v9,
              v11,
              *(const MethodInfo_4467270 **)(*(_QWORD *)(v18[4] + 192LL) + 112LL));
          }
          else
          {
            v9->fields._size = v19 + 1;
            v17->m_Items[v19] = v11;
          }
        }
      }
      return System_Collections_Generic_List_int___ToArray(
               v9,
               (const MethodInfo_4468CF0 *)Method_System_Collections_Generic_List_int__ToArray__);
    }
LABEL_29:
    sub_2213CDC(v10, v11);
  }
  return System_Collections_Generic_List_int___ToArray(
           v9,
           (const MethodInfo_4468CF0 *)Method_System_Collections_Generic_List_int__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
System_Int32_array *ImageLimitCount__GetSelectList_47394664(
        int32_t svtId,
        int32_t limitCount,
        int32_t costumeId,
        bool isOwn,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x2
  int32_t ImageLimitCount; // w20
  int v12; // w21
  __int64 v13; // x1
  System_Int32_array *result; // x0
  __int64 v15; // x1
  __int64 max_length_low; // x8
  __int64 i; // x10
  char *v18; // x12
  int v19; // w11

  if ( (byte_596F69C & 1) == 0 )
  {
    sub_2213A60(&ImageLimitCount_TypeInfo);
    sub_2213A60(&int___TypeInfo);
    sub_2213A60(&OptionManager_TypeInfo);
    byte_596F69C = 1;
  }
  if ( !*(&ImageLimitCount_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo, *(_QWORD *)&limitCount, *(_QWORD *)&costumeId);
  ImageLimitCount = ImageLimitCount__GetImageLimitCount(svtId, limitCount, *(const MethodInfo **)&costumeId);
  if ( costumeId < 11 )
    goto LABEL_6;
  if ( isOwn )
    goto LABEL_11;
  if ( !*(&OptionManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo, v9, v10);
  if ( OptionManager__GetFriendCostume(0) )
  {
LABEL_11:
    v13 = 4;
    v12 = 1;
  }
  else
  {
LABEL_6:
    v12 = 0;
    v13 = 3;
  }
  result = (System_Int32_array *)sub_2213B20(int___TypeInfo, v13);
  if ( !result )
    sub_2213CDC(0, v15);
  max_length_low = LODWORD(result->max_length);
  for ( i = 0; i != 3; ++i )
  {
    if ( max_length_low == i )
      goto LABEL_23;
    v18 = (char *)result + 4 * i;
    if ( i > ImageLimitCount )
      v19 = -1;
    else
      v19 = i;
    *((_DWORD *)v18 + 8) = v19;
  }
  if ( v12 )
  {
    if ( (max_length_low & 0xFFFFFFFC) == 0 )
LABEL_23:
      sub_2213CE4(result);
    result->m_Items[3] = costumeId;
  }
  return result;
}


void ImageLimitCount__Initialize(const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v2; // x1
  System_Collections_Generic_Dictionary_int__int__o *LimitCountMaxList; // x0
  __int64 v4; // x1
  System_String_o *v5; // x2
  System_String_o *v6; // x3
  int32_t v7; // w4
  int32_t v8; // w5
  bool v9; // w6
  bool v10; // w7
  ImageLimitCount_c *v11; // x8
  System_Collections_Generic_Dictionary_int__int__o *v12; // x19
  struct ImageLimitCount_StaticFields *static_fields; // x0

  if ( (byte_596F692 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_2213A60(&ImageLimitCount_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_596F692 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_385636C *)Method_DataManager_GetMasterData_ServantMaster___)) == 0 )
  {
    sub_2213CDC(Instance, v2);
  }
  LimitCountMaxList = ServantMaster__GetLimitCountMaxList((ServantMaster_o *)Instance, 0);
  v11 = ImageLimitCount_TypeInfo;
  v12 = LimitCountMaxList;
  if ( !*(&ImageLimitCount_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo, v4, v5);
    v11 = ImageLimitCount_TypeInfo;
  }
  static_fields = v11->static_fields;
  static_fields->limitMaxList = v12;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&static_fields->limitMaxList, (int32_t)v12, v5, v6, v7, v8, v9, v10);
}


int32_t ImageLimitCount__SpecialImageLimitCountToSpecialNum(int32_t specialImageLimitCount, const MethodInfo *method)
{
  return specialImageLimitCount - 200;
}


int32_t ImageLimitCount__SpecialNumToSpecialImageLimitCount(int32_t num, const MethodInfo *method)
{
  return num + 200;
}


// local variable allocation has failed, the output may be wrong!
bool ImageLimitCount__TryGetGrandImageLimitCount(
        int32_t svtId,
        int32_t limitCount,
        int32_t *imageLimitCount,
        const MethodInfo *method)
{
  int v5; // w20
  ImageLimitCount_c *v7; // x0
  System_Collections_Generic_Dictionary_int__int__o *limitMaxList; // x0
  __int64 v9; // x2
  int v10; // w8
  Il2CppClass *klass; // x8
  bool result; // w0
  int32_t value; // [xsp+Ch] [xbp-24h] BYREF

  v5 = limitCount;
  if ( (byte_596F696 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_int__int__TryGetValue__);
    sub_2213A60(&ImageLimitCount_TypeInfo);
    byte_596F696 = 1;
  }
  value = 0;
  *imageLimitCount = -1;
  if ( v5 > 10 )
    goto LABEL_20;
  v7 = ImageLimitCount_TypeInfo;
  if ( !*(&ImageLimitCount_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo, *(_QWORD *)&limitCount, imageLimitCount);
    v7 = ImageLimitCount_TypeInfo;
  }
  limitMaxList = v7->static_fields->limitMaxList;
  if ( !limitMaxList )
    goto LABEL_21;
  if ( !System_Collections_Generic_Dictionary_int__int___TryGetValue(
          limitMaxList,
          svtId,
          &value,
          (const MethodInfo_3F9458C *)Method_System_Collections_Generic_Dictionary_int__int__TryGetValue__) )
    return 0;
  limitMaxList = (System_Collections_Generic_Dictionary_int__int__o *)ImageLimitCount_TypeInfo;
  v10 = *(&ImageLimitCount_TypeInfo->_2.cctor_finished + 1);
  if ( value <= v5 )
  {
    if ( !v10 )
    {
      j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo, *(_QWORD *)&limitCount, v9);
      limitMaxList = (System_Collections_Generic_Dictionary_int__int__o *)ImageLimitCount_TypeInfo;
    }
    klass = limitMaxList[2].fields._entries->obj.klass;
    if ( klass )
    {
      v5 = value;
      if ( (unsigned int)value >= LODWORD(klass->_1.namespaze) )
LABEL_13:
        sub_2213CE4(limitMaxList);
      goto LABEL_19;
    }
LABEL_21:
    sub_2213CDC(limitMaxList, *(_QWORD *)&limitCount);
  }
  if ( !v10 )
  {
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo, *(_QWORD *)&limitCount, v9);
    limitMaxList = (System_Collections_Generic_Dictionary_int__int__o *)ImageLimitCount_TypeInfo;
  }
  klass = limitMaxList[2].fields._entries->obj.klass;
  if ( !klass )
    goto LABEL_21;
  if ( LODWORD(klass->_1.namespaze) <= v5 )
    goto LABEL_13;
LABEL_19:
  v5 = *((_DWORD *)&klass->_1.byval_arg.data + v5);
LABEL_20:
  result = 1;
  *imageLimitCount = v5;
  return result;
}


// local variable allocation has failed, the output may be wrong!
bool ImageLimitCount__TryGetRewardImageLimitCount(
        int32_t svtId,
        int32_t svtLimitCnt,
        int32_t *limitCount,
        const MethodInfo *method)
{
  int v5; // w20
  ImageLimitCount_c *v7; // x0
  System_Collections_Generic_Dictionary_int__int__o *limitMaxList; // x0
  __int64 v9; // x2
  int v10; // w8
  Il2CppClass *klass; // x8
  bool result; // w0
  int32_t value; // [xsp+Ch] [xbp-24h] BYREF

  v5 = svtLimitCnt;
  if ( (byte_596F695 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_int__int__TryGetValue__);
    sub_2213A60(&ImageLimitCount_TypeInfo);
    byte_596F695 = 1;
  }
  value = 0;
  *limitCount = -1;
  if ( v5 > 10 )
    goto LABEL_20;
  v7 = ImageLimitCount_TypeInfo;
  if ( !*(&ImageLimitCount_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo, *(_QWORD *)&svtLimitCnt, limitCount);
    v7 = ImageLimitCount_TypeInfo;
  }
  limitMaxList = v7->static_fields->limitMaxList;
  if ( !limitMaxList )
    goto LABEL_21;
  if ( !System_Collections_Generic_Dictionary_int__int___TryGetValue(
          limitMaxList,
          svtId,
          &value,
          (const MethodInfo_3F9458C *)Method_System_Collections_Generic_Dictionary_int__int__TryGetValue__) )
    return 0;
  limitMaxList = (System_Collections_Generic_Dictionary_int__int__o *)ImageLimitCount_TypeInfo;
  v10 = *(&ImageLimitCount_TypeInfo->_2.cctor_finished + 1);
  if ( value <= v5 )
  {
    if ( !v10 )
    {
      j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo, *(_QWORD *)&svtLimitCnt, v9);
      limitMaxList = (System_Collections_Generic_Dictionary_int__int__o *)ImageLimitCount_TypeInfo;
    }
    klass = limitMaxList[2].fields._entries->obj.klass;
    if ( klass )
    {
      v5 = value;
      if ( (unsigned int)value >= LODWORD(klass->_1.namespaze) )
LABEL_13:
        sub_2213CE4(limitMaxList);
      goto LABEL_19;
    }
LABEL_21:
    sub_2213CDC(limitMaxList, *(_QWORD *)&svtLimitCnt);
  }
  if ( !v10 )
  {
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo, *(_QWORD *)&svtLimitCnt, v9);
    limitMaxList = (System_Collections_Generic_Dictionary_int__int__o *)ImageLimitCount_TypeInfo;
  }
  klass = limitMaxList[2].fields._entries->obj.klass;
  if ( !klass )
    goto LABEL_21;
  if ( LODWORD(klass->_1.namespaze) <= v5 )
    goto LABEL_13;
LABEL_19:
  v5 = *((_DWORD *)&klass->_1.byval_arg.data + v5);
LABEL_20:
  result = 1;
  *limitCount = v5;
  return result;
}


int32_t ImageLimitCount__get_MaxDispLimitCount(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  ImageLimitCount_c *v3; // x0
  struct System_Int32_array *maxDispLimitCountList; // x8

  if ( (byte_596F69F & 1) == 0 )
  {
    sub_2213A60(&ImageLimitCount_TypeInfo);
    byte_596F69F = 1;
  }
  v3 = ImageLimitCount_TypeInfo;
  if ( !*(&ImageLimitCount_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo, v1, v2);
    v3 = ImageLimitCount_TypeInfo;
  }
  maxDispLimitCountList = v3->static_fields->maxDispLimitCountList;
  if ( !maxDispLimitCountList )
    sub_2213CDC(v3, v1);
  return maxDispLimitCountList->max_length;
}


void ImageLimitCount__initializeAssetStorage(const MethodInfo *method)
{
  ;
}