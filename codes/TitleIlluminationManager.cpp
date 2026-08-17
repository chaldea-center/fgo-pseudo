void TitleIlluminationManager___cctor(const MethodInfo *method)
{
  if ( (byte_596DED5 & 1) == 0 )
  {
    sub_2213A60(&TitleIlluminationManager_TypeInfo);
    byte_596DED5 = 1;
  }
  *(_OWORD *)&TitleIlluminationManager_TypeInfo->static_fields->IlluminationPoolCount = xmmword_E9C370;
}


void TitleIlluminationManager___ctor(TitleIlluminationManager_o *this, const MethodInfo *method)
{
  this->fields.IlluminationCountMax = 2;
  *(_QWORD *)&this->fields.MoveSpeed = 0x3F8000003CF5C28FLL;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void TitleIlluminationManager__CreateIllumination(TitleIlluminationManager_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  TitleIlluminationManager_o *v3; // x19
  struct TitleIlluminationManager_IlluminationInfo_array *IlluminationObjects; // x8
  int max_length; // w9
  int v6; // w11
  TitleIlluminationManager_IlluminationInfo_o *v7; // x22
  struct System_Collections_Generic_List_GameObject__o *IlluminationPool; // x8
  TitleIlluminationManager_c *v9; // x0
  int IlluminationWidth; // w8
  int v11; // w9
  int32_t v12; // w20
  int32_t IlluminationHeight; // w8
  int v14; // w9
  int32_t v15; // w10
  int32_t v16; // w21
  const MethodInfo *v17; // x3

  v3 = this;
  if ( (byte_596DED2 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_GameObject__get_Count__);
    this = (TitleIlluminationManager_o *)sub_2213A60(&TitleIlluminationManager_TypeInfo);
    byte_596DED2 = 1;
  }
  IlluminationObjects = v3->fields.IlluminationObjects;
  if ( !IlluminationObjects )
    goto LABEL_26;
  max_length = IlluminationObjects->max_length;
  if ( max_length < 1 )
    return;
  v6 = 0;
  while ( 1 )
  {
    if ( max_length == v6 )
      sub_2213CE4(this);
    v7 = IlluminationObjects->m_Items[v6];
    if ( !v7 )
      goto LABEL_26;
    if ( !v7->fields.exists )
      break;
    if ( (max_length & ~(max_length >> 31)) == ++v6 )
      return;
  }
  IlluminationPool = v3->fields.IlluminationPool;
  if ( !IlluminationPool )
LABEL_26:
    sub_2213CDC(this, method);
  if ( IlluminationPool->fields._size )
  {
    v9 = TitleIlluminationManager_TypeInfo;
    if ( !*(&TitleIlluminationManager_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(TitleIlluminationManager_TypeInfo, method, v2);
      v9 = TitleIlluminationManager_TypeInfo;
    }
    IlluminationWidth = v9->static_fields->IlluminationWidth;
    if ( IlluminationWidth <= 0 )
      v11 = -IlluminationWidth;
    else
      v11 = 1 - IlluminationWidth;
    v12 = UnityEngine_Random__Range_83400680(v11 >> 1, IlluminationWidth / 2, 0);
    IlluminationHeight = TitleIlluminationManager_TypeInfo->static_fields->IlluminationHeight;
    if ( IlluminationHeight <= 0 )
      v14 = -IlluminationHeight;
    else
      v14 = 1 - IlluminationHeight;
    if ( IlluminationHeight >= 0 )
      v15 = TitleIlluminationManager_TypeInfo->static_fields->IlluminationHeight;
    else
      v15 = IlluminationHeight + 1;
    v16 = UnityEngine_Random__Range_83400680(v14 >> 1, v15 >> 1, 0);
    v7->fields.x = v12;
    v7->fields.y = v16;
    v7->fields.restCount = UnityEngine_Random__Range_83400680(6, 9, 0);
    v7->fields.moveTime = 0.0;
    v7->fields.exists = 1;
    TitleIlluminationManager__SpawnIllumination(v3, v12, v16, v17);
    ++v3->fields.IlluminationCount;
  }
}


void TitleIlluminationManager__Initialize(TitleIlluminationManager_o *this, const MethodInfo *method)
{
  struct TitleIlluminationManager_IlluminationInfo_array *v3; // x0
  System_String_o *v4; // x2
  System_String_o *v5; // x3
  int32_t v6; // w4
  int32_t v7; // w5
  bool v8; // w6
  bool v9; // w7
  unsigned __int64 v10; // x22
  __int64 v11; // x24
  unsigned int *IlluminationObjects; // x25
  Il2CppObject *v13; // x21
  UnityEngine_GameObject_o *transform; // x0
  __int64 v15; // x1
  System_String_o *v16; // x2
  System_String_o *v17; // x3
  int32_t v18; // w4
  int32_t v19; // w5
  bool v20; // w6
  bool v21; // w7
  __int64 v22; // x1
  System_Collections_Generic_List_object__o *v23; // x21
  struct System_Collections_Generic_List_GameObject__o **p_IlluminationPool; // x20
  System_String_o *v25; // x2
  System_String_o *v26; // x3
  int32_t v27; // w4
  int32_t v28; // w5
  bool v29; // w6
  bool v30; // w7
  __int64 v31; // x1
  __int64 v32; // x2
  int32_t i; // w27
  TitleIlluminationManager_c *v34; // x0
  Il2CppObject *IlluminationPrefab; // x22
  UnityEngine_GameObject_o *v36; // x22
  UnityEngine_Transform_o *v37; // x23
  UnityEngine_Transform_o *v38; // x23
  UnityEngine_Transform_o *v39; // x23
  UnityEngine_Transform_o *v40; // x23
  System_String_o *v41; // x2
  System_String_o *v42; // x3
  int32_t v43; // w4
  int32_t v44; // w5
  bool v45; // w6
  bool v46; // w7
  intptr_t m_CachedPtr; // x8
  _QWORD *v48; // x9
  __int64 klass_low; // x10
  intptr_t v50; // x8
  System_Collections_Generic_List_object__o *v51; // x20
  MissionNaviTransitionBoardItem_o *p_IlluminationDisp; // x19
  System_String_o *v53; // x2
  System_String_o *v54; // x3
  int32_t v55; // w4
  int32_t v56; // w5
  bool v57; // w6
  bool v58; // w7
  System_Array_o *v59; // x19
  System_RuntimeFieldHandle_o v60; // x1
  __int64 v61; // x1
  System_String_o *v62; // x2
  System_String_o *v63; // x3
  int32_t v64; // w4
  int32_t v65; // w5
  bool v66; // w6
  bool v67; // w7
  TitleIlluminationManager_c *v68; // x0
  struct TitleIlluminationManager_StaticFields *static_fields; // x0
  __int64 v70; // x0
  __int128 v71; // [xsp+0h] [xbp-80h] BYREF
  __int64 v72; // [xsp+10h] [xbp-70h]

  if ( (byte_596DED0 & 1) == 0 )
  {
    sub_2213A60(&TitleIlluminationManager_IlluminationInfo___TypeInfo);
    sub_2213A60(&TitleIlluminationManager_IlluminationInfo_TypeInfo);
    sub_2213A60(&int_____TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_GameObject__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_GameObject___ctor__);
    sub_2213A60(&System_Collections_Generic_List_GameObject__TypeInfo);
    sub_2213A60(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&TitleIlluminationManager_TypeInfo);
    sub_2213A60(&Field__PrivateImplementationDetails__EE4D0A4F971594530E111634A37EEDED3EB04BC91AD1767FFB6EEAB5B24A1CC4);
    byte_596DED0 = 1;
  }
  v3 = (struct TitleIlluminationManager_IlluminationInfo_array *)sub_2213B20(
                                                                   TitleIlluminationManager_IlluminationInfo___TypeInfo,
                                                                   (unsigned int)this->fields.IlluminationCountMax);
  this->fields.IlluminationObjects = v3;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.IlluminationObjects,
    (int32_t)v3,
    v4,
    v5,
    v6,
    v7,
    v8,
    v9);
  if ( this->fields.IlluminationCountMax >= 1 )
  {
    v10 = 0;
    v11 = 8;
    do
    {
      IlluminationObjects = (unsigned int *)this->fields.IlluminationObjects;
      v13 = (Il2CppObject *)sub_2213CCC(TitleIlluminationManager_IlluminationInfo_TypeInfo);
      System_Object___ctor(v13, 0);
      if ( !IlluminationObjects )
LABEL_37:
        sub_2213CDC(transform, v15);
      if ( v13 )
      {
        transform = (UnityEngine_GameObject_o *)sub_2213BB4(v13, *(_QWORD *)(*(_QWORD *)IlluminationObjects + 64LL));
        if ( !transform )
        {
          v70 = sub_2213D00(0, v22);
          sub_2213BA0(v70, 0);
        }
      }
      if ( v10 >= IlluminationObjects[6] )
        sub_2213CE4(transform);
      *(_QWORD *)&IlluminationObjects[v11] = v13;
      sub_2213A04(
        (MissionNaviTransitionBoardItem_o *)&IlluminationObjects[v11],
        (int32_t)v13,
        v16,
        v17,
        v18,
        v19,
        v20,
        v21);
      ++v10;
      v11 += 2;
    }
    while ( (__int64)v10 < this->fields.IlluminationCountMax );
  }
  v23 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_GameObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v23,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_GameObject___ctor__);
  this->fields.IlluminationPool = (struct System_Collections_Generic_List_GameObject__o *)v23;
  p_IlluminationPool = &this->fields.IlluminationPool;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.IlluminationPool,
    (int32_t)v23,
    v25,
    v26,
    v27,
    v28,
    v29,
    v30);
  for ( i = 0; ; ++i )
  {
    v34 = TitleIlluminationManager_TypeInfo;
    if ( !*(&TitleIlluminationManager_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(TitleIlluminationManager_TypeInfo, v31, v32);
      v34 = TitleIlluminationManager_TypeInfo;
    }
    if ( i >= v34->static_fields->IlluminationPoolCount )
      break;
    IlluminationPrefab = (Il2CppObject *)this->fields.IlluminationPrefab;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v31, v32);
    transform = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_object_(
                                              IlluminationPrefab,
                                              (const MethodInfo_38F34CC *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( !transform )
      goto LABEL_37;
    v36 = transform;
    transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(transform, 0);
    if ( !this->fields.TargetPanel )
      goto LABEL_37;
    v37 = (UnityEngine_Transform_o *)transform;
    transform = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                              (UnityEngine_Component_o *)this->fields.TargetPanel,
                                              0);
    if ( !v37 )
      goto LABEL_37;
    UnityEngine_Transform__set_parent(v37, (UnityEngine_Transform_o *)transform, 0);
    transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(v36, 0);
    v38 = (UnityEngine_Transform_o *)transform;
    if ( !byte_5969AE0 )
    {
      transform = (UnityEngine_GameObject_o *)sub_2213A60(&UnityEngine_Vector3_TypeInfo);
      byte_5969AE0 = 1;
    }
    if ( !v38 )
      goto LABEL_37;
    UnityEngine_Transform__set_localPosition(v38, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0);
    transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(v36, 0);
    v39 = (UnityEngine_Transform_o *)transform;
    if ( !byte_5969AE0 )
    {
      transform = (UnityEngine_GameObject_o *)sub_2213A60(&UnityEngine_Vector3_TypeInfo);
      byte_5969AE0 = 1;
    }
    if ( !v39 )
      goto LABEL_37;
    UnityEngine_Transform__set_localEulerAngles(v39, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0);
    transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(v36, 0);
    v40 = (UnityEngine_Transform_o *)transform;
    if ( !byte_5969AE5 )
    {
      transform = (UnityEngine_GameObject_o *)sub_2213A60(&UnityEngine_Vector3_TypeInfo);
      byte_5969AE5 = 1;
    }
    if ( !v40 )
      goto LABEL_37;
    UnityEngine_Transform__set_localScale(v40, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0);
    UnityEngine_GameObject__SetActive(v36, 0, 0);
    transform = (UnityEngine_GameObject_o *)*p_IlluminationPool;
    if ( !*p_IlluminationPool )
      goto LABEL_37;
    m_CachedPtr = transform->fields.m_CachedPtr;
    v48 = Method_System_Collections_Generic_List_GameObject__Add__;
    ++HIDWORD(transform[1].klass);
    if ( !m_CachedPtr )
      goto LABEL_37;
    klass_low = SLODWORD(transform[1].klass);
    if ( (unsigned int)klass_low >= *(_DWORD *)(m_CachedPtr + 24) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        (System_Collections_Generic_List_object__o *)transform,
        (Il2CppObject *)v36,
        *(const MethodInfo_4483C64 **)(*(_QWORD *)(v48[4] + 192LL) + 112LL));
    }
    else
    {
      v50 = m_CachedPtr + 8 * klass_low;
      LODWORD(transform[1].klass) = klass_low + 1;
      *(_QWORD *)(v50 + 32) = v36;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)(v50 + 32), (int32_t)v36, v41, v42, v43, v44, v45, v46);
    }
  }
  v51 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_GameObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v51,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_GameObject___ctor__);
  this->fields.IlluminationDisp = (struct System_Collections_Generic_List_GameObject__o *)v51;
  p_IlluminationDisp = (MissionNaviTransitionBoardItem_o *)&this->fields.IlluminationDisp;
  sub_2213A04(p_IlluminationDisp, (int32_t)v51, v53, v54, v55, v56, v57, v58);
  p_IlluminationDisp->fields.index = 0;
  v72 = 2;
  v71 = xmmword_ED9788;
  v59 = (System_Array_o *)sub_2213B28(int_____TypeInfo, &v71);
  v60.fields.value = Field__PrivateImplementationDetails__EE4D0A4F971594530E111634A37EEDED3EB04BC91AD1767FFB6EEAB5B24A1CC4;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_76340728(v59, v60, 0);
  v68 = TitleIlluminationManager_TypeInfo;
  if ( !*(&TitleIlluminationManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TitleIlluminationManager_TypeInfo, v61, v62);
    v68 = TitleIlluminationManager_TypeInfo;
  }
  static_fields = v68->static_fields;
  static_fields->DirTable = (struct System_Int32_array *)v59;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&static_fields->DirTable, (int32_t)v59, v62, v63, v64, v65, v66, v67);
}


void TitleIlluminationManager__OnDestroy(TitleIlluminationManager_o *this, const MethodInfo *method)
{
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields.IlluminationPrefab = 0;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.IlluminationPrefab, 0, v2, v3, v4, v5, v6, v7);
}


void TitleIlluminationManager__ReturnIllumination(
        TitleIlluminationManager_o *this,
        TitleIlluminationComponent_o *obj,
        const MethodInfo *method)
{
  TitleIlluminationManager_o *v4; // x20
  System_Collections_Generic_List_object__o *IlluminationDisp; // x21
  System_Collections_Generic_List_object__o *IlluminationPool; // x20
  System_String_o *v7; // x2
  System_String_o *v8; // x3
  int32_t v9; // w4
  int32_t v10; // w5
  bool v11; // w6
  bool v12; // w7
  struct System_Object_array *items; // x8
  _QWORD *v14; // x9
  __int64 size; // x10
  TitleIlluminationManager_o *v16; // x1
  Il2CppClass **v17; // x0

  v4 = this;
  if ( (byte_596DED1 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_GameObject__Add__);
    this = (TitleIlluminationManager_o *)sub_2213A60(&Method_System_Collections_Generic_List_GameObject__Remove__);
    byte_596DED1 = 1;
  }
  if ( !obj )
    goto LABEL_11;
  this = (TitleIlluminationManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)obj, 0);
  if ( !this )
    goto LABEL_11;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
  IlluminationDisp = (System_Collections_Generic_List_object__o *)v4->fields.IlluminationDisp;
  this = (TitleIlluminationManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)obj, 0);
  if ( !IlluminationDisp
    || (System_Collections_Generic_List_object___Remove(
          IlluminationDisp,
          (Il2CppObject *)this,
          (const MethodInfo_4485154 *)Method_System_Collections_Generic_List_GameObject__Remove__),
        IlluminationPool = (System_Collections_Generic_List_object__o *)v4->fields.IlluminationPool,
        this = (TitleIlluminationManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)obj, 0),
        !IlluminationPool)
    || (items = IlluminationPool->fields._items,
        v14 = Method_System_Collections_Generic_List_GameObject__Add__,
        ++IlluminationPool->fields._version,
        !items) )
  {
LABEL_11:
    sub_2213CDC(this, obj);
  }
  size = IlluminationPool->fields._size;
  v16 = this;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      IlluminationPool,
      (Il2CppObject *)this,
      *(const MethodInfo_4483C64 **)(*(_QWORD *)(v14[4] + 192LL) + 112LL));
  }
  else
  {
    v17 = &items->obj.klass + size;
    IlluminationPool->fields._size = size + 1;
    v17[4] = (Il2CppClass *)v16;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)(v17 + 4), (int32_t)v16, v7, v8, v9, v10, v11, v12);
  }
}


// local variable allocation has failed, the output may be wrong!
void TitleIlluminationManager__SpawnIllumination(
        TitleIlluminationManager_o *this,
        int32_t x,
        int32_t y,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *IlluminationPool; // x0
  UnityEngine_GameObject_o *v8; // x22
  __int64 v9; // x2
  const MethodInfo *v10; // x5
  TitleIlluminationComponent_o *v11; // x22
  System_Collections_Generic_List_object__o *IlluminationDisp; // x19
  System_String_o *v13; // x2
  System_String_o *v14; // x3
  int32_t v15; // w4
  int32_t v16; // w5
  bool v17; // w6
  bool v18; // w7
  struct System_Object_array *items; // x8
  _QWORD *v20; // x9
  __int64 size; // x10
  System_Collections_Generic_List_object__o *v22; // x1
  Il2CppClass **v23; // x0

  if ( (byte_596DED3 & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_TitleIlluminationComponent___);
    sub_2213A60(&Method_System_Collections_Generic_List_GameObject__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_GameObject__RemoveAt__);
    sub_2213A60(&Method_System_Collections_Generic_List_GameObject__get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_List_GameObject__get_Item__);
    sub_2213A60(&TitleIlluminationManager_TypeInfo);
    byte_596DED3 = 1;
  }
  IlluminationPool = (System_Collections_Generic_List_object__o *)this->fields.IlluminationPool;
  if ( !IlluminationPool )
    goto LABEL_17;
  if ( !IlluminationPool->fields._size )
    return;
  IlluminationPool = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                    IlluminationPool,
                                                                    0,
                                                                    (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_GameObject__get_Item__);
  if ( !this->fields.IlluminationPool )
    goto LABEL_17;
  v8 = (UnityEngine_GameObject_o *)IlluminationPool;
  System_Collections_Generic_List_object___RemoveAt(
    (System_Collections_Generic_List_object__o *)this->fields.IlluminationPool,
    0,
    (const MethodInfo_44853FC *)Method_System_Collections_Generic_List_GameObject__RemoveAt__);
  if ( !v8 )
    goto LABEL_17;
  IlluminationPool = (System_Collections_Generic_List_object__o *)UnityEngine_GameObject__GetComponent_object_(
                                                                    v8,
                                                                    (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_TitleIlluminationComponent___);
  v11 = (TitleIlluminationComponent_o *)IlluminationPool;
  if ( !*(&TitleIlluminationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(TitleIlluminationManager_TypeInfo, *(_QWORD *)&x, v9);
  if ( !v11 )
    goto LABEL_17;
  TitleIlluminationComponent__Setup(
    v11,
    x,
    y,
    TitleIlluminationManager_TypeInfo->static_fields->IlluminationSize,
    this->fields.FadeSpeed,
    this,
    v10);
  IlluminationPool = (System_Collections_Generic_List_object__o *)UnityEngine_Component__get_gameObject(
                                                                    (UnityEngine_Component_o *)v11,
                                                                    0);
  if ( !IlluminationPool
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)IlluminationPool, 1, 0),
        IlluminationDisp = (System_Collections_Generic_List_object__o *)this->fields.IlluminationDisp,
        IlluminationPool = (System_Collections_Generic_List_object__o *)UnityEngine_Component__get_gameObject(
                                                                          (UnityEngine_Component_o *)v11,
                                                                          0),
        !IlluminationDisp)
    || (items = IlluminationDisp->fields._items,
        v20 = Method_System_Collections_Generic_List_GameObject__Add__,
        ++IlluminationDisp->fields._version,
        !items) )
  {
LABEL_17:
    sub_2213CDC(IlluminationPool, *(_QWORD *)&x);
  }
  size = IlluminationDisp->fields._size;
  v22 = IlluminationPool;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      IlluminationDisp,
      (Il2CppObject *)IlluminationPool,
      *(const MethodInfo_4483C64 **)(*(_QWORD *)(v20[4] + 192LL) + 112LL));
  }
  else
  {
    v23 = &items->obj.klass + size;
    IlluminationDisp->fields._size = size + 1;
    v23[4] = (Il2CppClass *)v22;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)(v23 + 4), (int32_t)v22, v13, v14, v15, v16, v17, v18);
  }
}


void TitleIlluminationManager__StartEffect(TitleIlluminationManager_o *this, const MethodInfo *method)
{
  this->fields.Spawn = 1;
}


void TitleIlluminationManager__StartIllumination(TitleIlluminationManager_o *this, const MethodInfo *method)
{
  TitleIlluminationManager__Initialize(this, method);
  this->fields.Spawn = 1;
}


void TitleIlluminationManager__Update(TitleIlluminationManager_o *this, const MethodInfo *method)
{
  float deltaTime; // s0
  const MethodInfo *v4; // x1
  float PopTime; // s8
  __int64 v6; // x0
  const MethodInfo *v7; // x1
  float v8; // s0
  _BOOL4 Spawn; // w8
  struct System_Int32_array *IlluminationPopFrames; // x9
  __int64 v11; // x20
  unsigned __int64 max_length_low; // x10
  unsigned __int64 v13; // x8
  float v14; // s0
  float v15; // s1
  float v16; // s0
  int v17; // w9
  int v18; // w10
  struct System_Int32_array *IlluminationPopProb; // x9
  int v20; // w24

  deltaTime = UnityEngine_Time__get_deltaTime(0);
  TitleIlluminationManager__UpdateIllumination(this, deltaTime, v4);
  PopTime = this->fields.PopTime;
  v8 = UnityEngine_Time__get_deltaTime(0);
  Spawn = this->fields.Spawn;
  this->fields.PopTime = PopTime + v8;
  if ( Spawn && this->fields.IlluminationCount < this->fields.IlluminationCountMax )
  {
    IlluminationPopFrames = this->fields.IlluminationPopFrames;
    if ( !IlluminationPopFrames )
LABEL_17:
      sub_2213CDC(v6, v7);
    v11 = 8;
    while ( 1 )
    {
      max_length_low = LODWORD(IlluminationPopFrames->max_length);
      v13 = v11 - 8;
      if ( v11 - 8 >= (int)max_length_low )
        break;
      if ( v13 >= max_length_low )
        goto LABEL_19;
      v14 = (float)*((int *)&IlluminationPopFrames->obj.klass + v11) / 60.0;
      v15 = this->fields.PopTime / v14;
      v16 = PopTime / v14;
      v17 = (int)v15;
      if ( v15 == INFINITY )
        v17 = 0x80000000;
      v18 = (int)v16;
      if ( v16 == INFINITY )
        v18 = 0x80000000;
      if ( v18 != v17 )
      {
        IlluminationPopProb = this->fields.IlluminationPopProb;
        if ( !IlluminationPopProb )
          goto LABEL_17;
        if ( v13 >= LODWORD(IlluminationPopProb->max_length) )
LABEL_19:
          sub_2213CE4(v6);
        v20 = *((_DWORD *)&IlluminationPopProb->obj.klass + v11);
        v6 = UnityEngine_Random__Range_83400680(0, 100, 0);
        if ( (int)v6 < v20 )
          TitleIlluminationManager__CreateIllumination(this, v7);
      }
      IlluminationPopFrames = this->fields.IlluminationPopFrames;
      ++v11;
      if ( !IlluminationPopFrames )
        goto LABEL_17;
    }
  }
}


void TitleIlluminationManager__UpdateIllumination(
        TitleIlluminationManager_o *this,
        float delta,
        const MethodInfo *method)
{
  TitleIlluminationManager_o *v4; // x19
  struct TitleIlluminationManager_IlluminationInfo_array *IlluminationObjects; // x22
  unsigned __int64 max_length_low; // x8
  unsigned __int64 v7; // x23
  TitleIlluminationManager_IlluminationInfo_o *v8; // x26
  float MoveSpeed; // s1
  float v10; // s0
  unsigned int v11; // w27
  __int64 v12; // x2
  const MethodInfo *v13; // x3
  TitleIlluminationManager_c *v14; // x8
  unsigned int v15; // w20
  struct TitleIlluminationManager_StaticFields *static_fields; // x9
  struct System_Int32_array *DirTable; // x11
  Il2CppArrayBounds *bounds; // x14
  int32_t y; // w10
  il2cpp_array_size_t length; // x13
  il2cpp_array_size_t v21; // x14
  char *v22; // x11
  int32_t v23; // w20
  int32_t v24; // w21
  int IlluminationWidth; // w10
  int v26; // w11
  int32_t IlluminationHeight; // w9
  int v28; // w10
  int v29; // w8
  __int64 v30; // d0
  int v31; // w8
  bool v32; // zf
  int32_t IlluminationCount; // w8

  v4 = this;
  if ( (byte_596DED4 & 1) == 0 )
  {
    this = (TitleIlluminationManager_o *)sub_2213A60(&TitleIlluminationManager_TypeInfo);
    byte_596DED4 = 1;
  }
  IlluminationObjects = v4->fields.IlluminationObjects;
  if ( IlluminationObjects )
  {
    max_length_low = LODWORD(IlluminationObjects->max_length);
    if ( (int)max_length_low >= 1 )
    {
      v7 = 0;
      do
      {
        if ( v7 >= max_length_low )
LABEL_48:
          sub_2213CE4(this);
        v8 = IlluminationObjects->m_Items[v7];
        if ( !v8 )
LABEL_49:
          sub_2213CDC(this, method);
        if ( v8->fields.exists )
        {
          MoveSpeed = v4->fields.MoveSpeed;
          v10 = v8->fields.moveTime + delta;
          v8->fields.moveTime = v10;
          if ( v10 >= MoveSpeed )
          {
            v11 = 10;
            v8->fields.moveTime = 0.0;
            while ( 1 )
            {
              this = (TitleIlluminationManager_o *)UnityEngine_Random__Range_83400680(0, 3, 0);
              v14 = TitleIlluminationManager_TypeInfo;
              v15 = (unsigned int)this;
              if ( !*(&TitleIlluminationManager_TypeInfo->_2.cctor_finished + 1) )
              {
                j_il2cpp_runtime_class_init_0(TitleIlluminationManager_TypeInfo, method, v12);
                v14 = TitleIlluminationManager_TypeInfo;
              }
              static_fields = v14->static_fields;
              DirTable = static_fields->DirTable;
              if ( !DirTable )
                goto LABEL_49;
              bounds = DirTable->bounds;
              y = v8->fields.y;
              if ( (y & 1u) >= LODWORD(bounds->length) )
                goto LABEL_48;
              length = bounds[1].length;
              if ( v15 >= (unsigned int)length )
                goto LABEL_48;
              v21 = bounds[2].length;
              if ( (unsigned int)v21 < 2 )
                goto LABEL_48;
              v22 = (char *)DirTable + 4 * v21 * ((int)v15 + length * (y & 1));
              v23 = v8->fields.x + *((_DWORD *)v22 + 8);
              v24 = *((_DWORD *)v22 + 9) + y;
              if ( v23 == v8->fields.prevX && v24 == v8->fields.prevY )
                goto LABEL_34;
              if ( !*(&v14->_2.cctor_finished + 1) )
              {
                j_il2cpp_runtime_class_init_0(v14, method, v12);
                v14 = TitleIlluminationManager_TypeInfo;
                static_fields = TitleIlluminationManager_TypeInfo->static_fields;
              }
              IlluminationWidth = static_fields->IlluminationWidth;
              v26 = IlluminationWidth <= 0 ? -IlluminationWidth : 1 - IlluminationWidth;
              if ( v23 < v26 >> 1 )
                goto LABEL_34;
              if ( !*(&v14->_2.cctor_finished + 1) )
              {
                j_il2cpp_runtime_class_init_0(v14, method, v12);
                v14 = TitleIlluminationManager_TypeInfo;
                static_fields = TitleIlluminationManager_TypeInfo->static_fields;
                IlluminationWidth = static_fields->IlluminationWidth;
              }
              if ( v23 > IlluminationWidth / 2 )
                goto LABEL_34;
              if ( !*(&v14->_2.cctor_finished + 1) )
              {
                j_il2cpp_runtime_class_init_0(v14, method, v12);
                v14 = TitleIlluminationManager_TypeInfo;
                static_fields = TitleIlluminationManager_TypeInfo->static_fields;
              }
              IlluminationHeight = static_fields->IlluminationHeight;
              v28 = IlluminationHeight <= 0 ? -IlluminationHeight : 1 - IlluminationHeight;
              if ( v24 < v28 >> 1 )
              {
LABEL_34:
                if ( v11 < 2 )
                  goto LABEL_43;
              }
              else
              {
                if ( !*(&v14->_2.cctor_finished + 1) )
                {
                  j_il2cpp_runtime_class_init_0(v14, method, v12);
                  IlluminationHeight = TitleIlluminationManager_TypeInfo->static_fields->IlluminationHeight;
                }
                if ( IlluminationHeight >= 0 )
                  v29 = IlluminationHeight;
                else
                  v29 = IlluminationHeight + 1;
                if ( v24 <= v29 >> 1 || v11 <= 1 )
                {
LABEL_43:
                  v30 = *(_QWORD *)&v8->fields.x;
                  v8->fields.x = v23;
                  v8->fields.y = v24;
                  *(_QWORD *)&v8->fields.prevX = v30;
                  TitleIlluminationManager__SpawnIllumination(v4, v23, v24, v13);
                  v31 = v8->fields.restCount - 1;
                  v32 = v8->fields.restCount == 1;
                  v8->fields.restCount = v31;
                  if ( v31 < 0 || v32 )
                  {
                    IlluminationCount = v4->fields.IlluminationCount;
                    v8->fields.exists = 0;
                    v4->fields.IlluminationCount = IlluminationCount - 1;
                  }
                  break;
                }
              }
              --v11;
            }
          }
        }
        max_length_low = LODWORD(IlluminationObjects->max_length);
        ++v7;
      }
      while ( (int)v7 < (int)max_length_low );
    }
  }
}


void TitleIlluminationManager_IlluminationInfo___ctor(
        TitleIlluminationManager_IlluminationInfo_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}