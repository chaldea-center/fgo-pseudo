void TitleIlluminationManager___cctor(const MethodInfo *method)
{
  if ( (byte_4D2E15E & 1) == 0 )
  {
    sub_1C93AD4(&TitleIlluminationManager_TypeInfo);
    byte_4D2E15E = 1;
  }
  *(_OWORD *)&TitleIlluminationManager_TypeInfo->static_fields->IlluminationPoolCount = xmmword_D00130;
}


void TitleIlluminationManager___ctor(TitleIlluminationManager_o *this, const MethodInfo *method)
{
  this->fields.IlluminationCountMax = 2;
  *(_QWORD *)&this->fields.MoveSpeed = 0x3F8000003CF5C28FLL;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void TitleIlluminationManager__CreateIllumination(TitleIlluminationManager_o *this, const MethodInfo *method)
{
  TitleIlluminationManager_o *v2; // x19
  struct TitleIlluminationManager_IlluminationInfo_array *IlluminationObjects; // x8
  int max_length; // w9
  int v5; // w10
  TitleIlluminationManager_IlluminationInfo_o *v6; // x22
  struct System_Collections_Generic_List_GameObject__o *IlluminationPool; // x8
  TitleIlluminationManager_c *v8; // x0
  int IlluminationWidth; // w8
  int v10; // w9
  int32_t v11; // w20
  int32_t IlluminationHeight; // w8
  int v13; // w9
  int32_t v14; // w21
  const MethodInfo *v15; // x3

  v2 = this;
  if ( (byte_4D2E15B & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_Generic_List_GameObject__get_Count__);
    this = (TitleIlluminationManager_o *)sub_1C93AD4(&TitleIlluminationManager_TypeInfo);
    byte_4D2E15B = 1;
  }
  IlluminationObjects = v2->fields.IlluminationObjects;
  if ( !IlluminationObjects )
    goto LABEL_23;
  max_length = IlluminationObjects->max_length;
  if ( max_length < 1 )
    return;
  v5 = 0;
  while ( 1 )
  {
    if ( max_length == v5 )
      sub_1C93D34(this);
    v6 = IlluminationObjects->m_Items[v5];
    if ( !v6 )
      goto LABEL_23;
    if ( !v6->fields.exists )
      break;
    if ( max_length == ++v5 )
      return;
  }
  IlluminationPool = v2->fields.IlluminationPool;
  if ( !IlluminationPool )
LABEL_23:
    sub_1C93D2C(this, method);
  if ( IlluminationPool->fields._size )
  {
    v8 = TitleIlluminationManager_TypeInfo;
    if ( !TitleIlluminationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TitleIlluminationManager_TypeInfo);
      v8 = TitleIlluminationManager_TypeInfo;
    }
    IlluminationWidth = v8->static_fields->IlluminationWidth;
    if ( IlluminationWidth <= 0 )
      v10 = -IlluminationWidth;
    else
      v10 = 1 - IlluminationWidth;
    v11 = UnityEngine_Random__Range_72079620(v10 >> 1, IlluminationWidth / 2, 0);
    IlluminationHeight = TitleIlluminationManager_TypeInfo->static_fields->IlluminationHeight;
    if ( IlluminationHeight <= 0 )
      v13 = -IlluminationHeight;
    else
      v13 = 1 - IlluminationHeight;
    v14 = UnityEngine_Random__Range_72079620(v13 >> 1, IlluminationHeight / 2, 0);
    v6->fields.x = v11;
    v6->fields.y = v14;
    v6->fields.restCount = UnityEngine_Random__Range_72079620(6, 9, 0);
    v6->fields.moveTime = 0.0;
    v6->fields.exists = 1;
    TitleIlluminationManager__SpawnIllumination(v2, v11, v14, v15);
    ++v2->fields.IlluminationCount;
  }
}


void TitleIlluminationManager__Initialize(TitleIlluminationManager_o *this, const MethodInfo *method)
{
  struct TitleIlluminationManager_IlluminationInfo_array *v3; // x0
  int32_t v4; // w2
  int32_t v5; // w3
  System_String_o *v6; // x4
  int32_t v7; // w5
  int64_t v8; // x6
  System_String_o *v9; // x7
  unsigned __int64 v10; // x22
  __int64 v11; // x24
  unsigned int *IlluminationObjects; // x25
  Il2CppObject *v13; // x21
  __int64 transform; // x0
  __int64 v15; // x1
  int32_t v16; // w2
  int32_t v17; // w3
  System_String_o *v18; // x4
  int32_t v19; // w5
  int64_t v20; // x6
  System_String_o *v21; // x7
  System_Collections_Generic_List_object__o *v22; // x21
  struct System_Collections_Generic_List_GameObject__o **p_IlluminationPool; // x20
  int32_t v24; // w2
  int32_t v25; // w3
  System_String_o *v26; // x4
  int32_t v27; // w5
  int64_t v28; // x6
  System_String_o *v29; // x7
  int32_t i; // w27
  TitleIlluminationManager_c *v31; // x0
  Il2CppObject *IlluminationPrefab; // x22
  UnityEngine_GameObject_o *v33; // x22
  UnityEngine_Transform_o *v34; // x23
  UnityEngine_Transform_o *v35; // x23
  UnityEngine_Transform_o *v36; // x23
  UnityEngine_Transform_o *v37; // x23
  int32_t v38; // w2
  int32_t v39; // w3
  System_String_o *v40; // x4
  int32_t v41; // w5
  int64_t v42; // x6
  System_String_o *v43; // x7
  __int64 v44; // x8
  _QWORD *v45; // x9
  __int64 v46; // x10
  __int64 v47; // x8
  System_Collections_Generic_List_object__o *v48; // x20
  GrandQuestFolderBoardItem_o *p_IlluminationDisp; // x19
  int32_t v50; // w2
  int32_t v51; // w3
  System_String_o *v52; // x4
  int32_t v53; // w5
  int64_t v54; // x6
  System_String_o *v55; // x7
  System_Array_o *v56; // x19
  int32_t v57; // w2
  int32_t v58; // w3
  System_String_o *v59; // x4
  int32_t v60; // w5
  int64_t v61; // x6
  System_String_o *v62; // x7
  TitleIlluminationManager_c *v63; // x0
  struct TitleIlluminationManager_StaticFields *static_fields; // x0
  __int64 v65; // x0
  __int128 v66; // [xsp+0h] [xbp-80h] BYREF
  __int64 v67; // [xsp+10h] [xbp-70h]

  if ( (byte_4D2E159 & 1) == 0 )
  {
    sub_1C93AD4(&TitleIlluminationManager_IlluminationInfo___TypeInfo);
    sub_1C93AD4(&TitleIlluminationManager_IlluminationInfo_TypeInfo);
    sub_1C93AD4(&int_____TypeInfo);
    sub_1C93AD4(&Method_System_Collections_Generic_List_GameObject__Add__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_GameObject___ctor__);
    sub_1C93AD4(&System_Collections_Generic_List_GameObject__TypeInfo);
    sub_1C93AD4(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    sub_1C93AD4(&TitleIlluminationManager_TypeInfo);
    sub_1C93AD4(&Field__PrivateImplementationDetails__EE4D0A4F971594530E111634A37EEDED3EB04BC91AD1767FFB6EEAB5B24A1CC4);
    byte_4D2E159 = 1;
  }
  v3 = (struct TitleIlluminationManager_IlluminationInfo_array *)sub_1C93B7C(
                                                                   TitleIlluminationManager_IlluminationInfo___TypeInfo,
                                                                   (unsigned int)this->fields.IlluminationCountMax);
  this->fields.IlluminationObjects = v3;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.IlluminationObjects, (int32_t)v3, v4, v5, v6, v7, v8, v9);
  if ( this->fields.IlluminationCountMax >= 1 )
  {
    v10 = 0;
    v11 = 8;
    do
    {
      IlluminationObjects = (unsigned int *)this->fields.IlluminationObjects;
      v13 = (Il2CppObject *)sub_1C93D20(TitleIlluminationManager_IlluminationInfo_TypeInfo);
      System_Object___ctor(v13, 0);
      if ( !IlluminationObjects )
LABEL_37:
        sub_1C93D2C(transform, v15);
      if ( v13 )
      {
        transform = sub_1C93C10(v13, *(_QWORD *)(*(_QWORD *)IlluminationObjects + 64LL));
        if ( !transform )
        {
          v65 = sub_1C93D50();
          sub_1C93BFC(v65, 0);
        }
      }
      if ( v10 >= IlluminationObjects[6] )
        sub_1C93D34(transform);
      *(_QWORD *)&IlluminationObjects[v11] = v13;
      sub_1C93A78((GrandQuestFolderBoardItem_o *)&IlluminationObjects[v11], (int32_t)v13, v16, v17, v18, v19, v20, v21);
      ++v10;
      v11 += 2;
    }
    while ( (__int64)v10 < this->fields.IlluminationCountMax );
  }
  v22 = (System_Collections_Generic_List_object__o *)sub_1C93D20(System_Collections_Generic_List_GameObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v22,
    (const MethodInfo_3879168 *)Method_System_Collections_Generic_List_GameObject___ctor__);
  this->fields.IlluminationPool = (struct System_Collections_Generic_List_GameObject__o *)v22;
  p_IlluminationPool = &this->fields.IlluminationPool;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.IlluminationPool, (int32_t)v22, v24, v25, v26, v27, v28, v29);
  for ( i = 0; ; ++i )
  {
    v31 = TitleIlluminationManager_TypeInfo;
    if ( !TitleIlluminationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TitleIlluminationManager_TypeInfo);
      v31 = TitleIlluminationManager_TypeInfo;
    }
    if ( i >= v31->static_fields->IlluminationPoolCount )
      break;
    IlluminationPrefab = (Il2CppObject *)this->fields.IlluminationPrefab;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    transform = (__int64)UnityEngine_Object__Instantiate_object_(
                           IlluminationPrefab,
                           (const MethodInfo_3230E6C *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( !transform )
      goto LABEL_37;
    v33 = (UnityEngine_GameObject_o *)transform;
    transform = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)transform, 0);
    if ( !this->fields.TargetPanel )
      goto LABEL_37;
    v34 = (UnityEngine_Transform_o *)transform;
    transform = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this->fields.TargetPanel, 0);
    if ( !v34 )
      goto LABEL_37;
    UnityEngine_Transform__set_parent(v34, (UnityEngine_Transform_o *)transform, 0);
    transform = (__int64)UnityEngine_GameObject__get_transform(v33, 0);
    v35 = (UnityEngine_Transform_o *)transform;
    if ( !byte_4D2A139 )
    {
      transform = sub_1C93AD4(&UnityEngine_Vector3_TypeInfo);
      byte_4D2A139 = 1;
    }
    if ( !v35 )
      goto LABEL_37;
    UnityEngine_Transform__set_localPosition(v35, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0);
    transform = (__int64)UnityEngine_GameObject__get_transform(v33, 0);
    v36 = (UnityEngine_Transform_o *)transform;
    if ( !byte_4D2A139 )
    {
      transform = sub_1C93AD4(&UnityEngine_Vector3_TypeInfo);
      byte_4D2A139 = 1;
    }
    if ( !v36 )
      goto LABEL_37;
    UnityEngine_Transform__set_localEulerAngles(v36, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0);
    transform = (__int64)UnityEngine_GameObject__get_transform(v33, 0);
    v37 = (UnityEngine_Transform_o *)transform;
    if ( !byte_4D2A13E )
    {
      transform = sub_1C93AD4(&UnityEngine_Vector3_TypeInfo);
      byte_4D2A13E = 1;
    }
    if ( !v37 )
      goto LABEL_37;
    UnityEngine_Transform__set_localScale(v37, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0);
    UnityEngine_GameObject__SetActive(v33, 0, 0);
    transform = (__int64)*p_IlluminationPool;
    if ( !*p_IlluminationPool )
      goto LABEL_37;
    v44 = *(_QWORD *)(transform + 16);
    v45 = Method_System_Collections_Generic_List_GameObject__Add__;
    ++*(_DWORD *)(transform + 28);
    if ( !v44 )
      goto LABEL_37;
    v46 = *(int *)(transform + 24);
    if ( (unsigned int)v46 >= *(_DWORD *)(v44 + 24) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        (System_Collections_Generic_List_object__o *)transform,
        (Il2CppObject *)v33,
        *(const MethodInfo_387999C **)(*(_QWORD *)(v45[4] + 192LL) + 112LL));
    }
    else
    {
      v47 = v44 + 8 * v46;
      *(_DWORD *)(transform + 24) = v46 + 1;
      *(_QWORD *)(v47 + 32) = v33;
      sub_1C93A78((GrandQuestFolderBoardItem_o *)(v47 + 32), (int32_t)v33, v38, v39, v40, v41, v42, v43);
    }
  }
  v48 = (System_Collections_Generic_List_object__o *)sub_1C93D20(System_Collections_Generic_List_GameObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v48,
    (const MethodInfo_3879168 *)Method_System_Collections_Generic_List_GameObject___ctor__);
  this->fields.IlluminationDisp = (struct System_Collections_Generic_List_GameObject__o *)v48;
  p_IlluminationDisp = (GrandQuestFolderBoardItem_o *)&this->fields.IlluminationDisp;
  sub_1C93A78(p_IlluminationDisp, (int32_t)v48, v50, v51, v52, v53, v54, v55);
  p_IlluminationDisp->fields.index = 0;
  v66 = xmmword_D34A28;
  v67 = 2;
  v56 = (System_Array_o *)sub_1C93B84(int_____TypeInfo, &v66);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_65124948(
    v56,
    (System_RuntimeFieldHandle_o)Field__PrivateImplementationDetails__EE4D0A4F971594530E111634A37EEDED3EB04BC91AD1767FFB6EEAB5B24A1CC4,
    0);
  v63 = TitleIlluminationManager_TypeInfo;
  if ( !TitleIlluminationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TitleIlluminationManager_TypeInfo);
    v63 = TitleIlluminationManager_TypeInfo;
  }
  static_fields = v63->static_fields;
  static_fields->DirTable = (struct System_Int32_array *)v56;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&static_fields->DirTable, (int32_t)v56, v57, v58, v59, v60, v61, v62);
}


void TitleIlluminationManager__OnDestroy(TitleIlluminationManager_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  this->fields.IlluminationPrefab = 0;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.IlluminationPrefab, 0, v2, v3, v4, v5, v6, v7);
}


void TitleIlluminationManager__ReturnIllumination(
        TitleIlluminationManager_o *this,
        TitleIlluminationComponent_o *obj,
        const MethodInfo *method)
{
  TitleIlluminationManager_o *v4; // x20
  System_Collections_Generic_List_object__o *IlluminationDisp; // x21
  System_Collections_Generic_List_object__o *IlluminationPool; // x20
  int32_t v7; // w2
  int32_t v8; // w3
  System_String_o *v9; // x4
  int32_t v10; // w5
  int64_t v11; // x6
  System_String_o *v12; // x7
  struct System_Object_array *items; // x8
  _QWORD *v14; // x9
  __int64 size; // x10
  TitleIlluminationManager_o *v16; // x1
  Il2CppClass **v17; // x0

  v4 = this;
  if ( (byte_4D2E15A & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_Generic_List_GameObject__Add__);
    this = (TitleIlluminationManager_o *)sub_1C93AD4(&Method_System_Collections_Generic_List_GameObject__Remove__);
    byte_4D2E15A = 1;
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
          (const MethodInfo_387AEC4 *)Method_System_Collections_Generic_List_GameObject__Remove__),
        IlluminationPool = (System_Collections_Generic_List_object__o *)v4->fields.IlluminationPool,
        this = (TitleIlluminationManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)obj, 0),
        !IlluminationPool)
    || (items = IlluminationPool->fields._items,
        v14 = Method_System_Collections_Generic_List_GameObject__Add__,
        ++IlluminationPool->fields._version,
        !items) )
  {
LABEL_11:
    sub_1C93D2C(this, obj);
  }
  size = IlluminationPool->fields._size;
  v16 = this;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      IlluminationPool,
      (Il2CppObject *)this,
      *(const MethodInfo_387999C **)(*(_QWORD *)(v14[4] + 192LL) + 112LL));
  }
  else
  {
    IlluminationPool->fields._size = size + 1;
    v17 = &items->obj.klass + size;
    v17[4] = (Il2CppClass *)v16;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)(v17 + 4), (int32_t)v16, v7, v8, v9, v10, v11, v12);
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
  const MethodInfo *v9; // x5
  TitleIlluminationComponent_o *v10; // x22
  System_Collections_Generic_List_object__o *IlluminationDisp; // x19
  int32_t v12; // w2
  int32_t v13; // w3
  System_String_o *v14; // x4
  int32_t v15; // w5
  int64_t v16; // x6
  System_String_o *v17; // x7
  struct System_Object_array *items; // x8
  _QWORD *v19; // x9
  __int64 size; // x10
  System_Collections_Generic_List_object__o *v21; // x1
  Il2CppClass **v22; // x0

  if ( (byte_4D2E15C & 1) == 0 )
  {
    sub_1C93AD4(&Method_UnityEngine_GameObject_GetComponent_TitleIlluminationComponent___);
    sub_1C93AD4(&Method_System_Collections_Generic_List_GameObject__Add__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_GameObject__RemoveAt__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_GameObject__get_Count__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_GameObject__get_Item__);
    sub_1C93AD4(&TitleIlluminationManager_TypeInfo);
    byte_4D2E15C = 1;
  }
  IlluminationPool = (System_Collections_Generic_List_object__o *)this->fields.IlluminationPool;
  if ( !IlluminationPool )
    goto LABEL_17;
  if ( !IlluminationPool->fields._size )
    return;
  IlluminationPool = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                    IlluminationPool,
                                                                    0,
                                                                    (const MethodInfo_38796CC *)Method_System_Collections_Generic_List_GameObject__get_Item__);
  if ( !this->fields.IlluminationPool )
    goto LABEL_17;
  v8 = (UnityEngine_GameObject_o *)IlluminationPool;
  System_Collections_Generic_List_object___RemoveAt(
    (System_Collections_Generic_List_object__o *)this->fields.IlluminationPool,
    0,
    (const MethodInfo_387B170 *)Method_System_Collections_Generic_List_GameObject__RemoveAt__);
  if ( !v8 )
    goto LABEL_17;
  IlluminationPool = (System_Collections_Generic_List_object__o *)UnityEngine_GameObject__GetComponent_object_(
                                                                    v8,
                                                                    (const MethodInfo_31FC084 *)Method_UnityEngine_GameObject_GetComponent_TitleIlluminationComponent___);
  v10 = (TitleIlluminationComponent_o *)IlluminationPool;
  if ( !TitleIlluminationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TitleIlluminationManager_TypeInfo);
  if ( !v10 )
    goto LABEL_17;
  TitleIlluminationComponent__Setup(
    v10,
    x,
    y,
    TitleIlluminationManager_TypeInfo->static_fields->IlluminationSize,
    this->fields.FadeSpeed,
    this,
    v9);
  IlluminationPool = (System_Collections_Generic_List_object__o *)UnityEngine_Component__get_gameObject(
                                                                    (UnityEngine_Component_o *)v10,
                                                                    0);
  if ( !IlluminationPool
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)IlluminationPool, 1, 0),
        IlluminationDisp = (System_Collections_Generic_List_object__o *)this->fields.IlluminationDisp,
        IlluminationPool = (System_Collections_Generic_List_object__o *)UnityEngine_Component__get_gameObject(
                                                                          (UnityEngine_Component_o *)v10,
                                                                          0),
        !IlluminationDisp)
    || (items = IlluminationDisp->fields._items,
        v19 = Method_System_Collections_Generic_List_GameObject__Add__,
        ++IlluminationDisp->fields._version,
        !items) )
  {
LABEL_17:
    sub_1C93D2C(IlluminationPool, *(_QWORD *)&x);
  }
  size = IlluminationDisp->fields._size;
  v21 = IlluminationPool;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      IlluminationDisp,
      (Il2CppObject *)IlluminationPool,
      *(const MethodInfo_387999C **)(*(_QWORD *)(v19[4] + 192LL) + 112LL));
  }
  else
  {
    IlluminationDisp->fields._size = size + 1;
    v22 = &items->obj.klass + size;
    v22[4] = (Il2CppClass *)v21;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)(v22 + 4), (int32_t)v21, v12, v13, v14, v15, v16, v17);
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
  struct System_Int32_array *IlluminationPopFrames; // x8
  __int64 v11; // x20
  unsigned __int64 max_length_low; // x10
  unsigned __int64 v13; // x9
  float v14; // s0
  float v15; // s1
  float v16; // s0
  int v17; // w8
  int v18; // w10
  struct System_Int32_array *IlluminationPopProb; // x8
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
      sub_1C93D2C(v6, v7);
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
      v18 = (int)v16;
      if ( v15 == INFINITY )
        v17 = 0x80000000;
      if ( v16 == INFINITY )
        v18 = 0x80000000;
      if ( v18 != v17 )
      {
        IlluminationPopProb = this->fields.IlluminationPopProb;
        if ( !IlluminationPopProb )
          goto LABEL_17;
        if ( v13 >= LODWORD(IlluminationPopProb->max_length) )
LABEL_19:
          sub_1C93D34(v6);
        v20 = *((_DWORD *)&IlluminationPopProb->obj.klass + v11);
        v6 = UnityEngine_Random__Range_72079620(0, 100, 0);
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
  int max_length; // w8
  int i; // w23
  TitleIlluminationManager_IlluminationInfo_o *v8; // x26
  float v9; // s0
  int v10; // w28
  int v11; // w27
  const MethodInfo *v12; // x3
  TitleIlluminationManager_c *v13; // x8
  unsigned int v14; // w20
  struct TitleIlluminationManager_StaticFields *static_fields; // x9
  struct System_Int32_array *DirTable; // x10
  Il2CppArrayBounds *bounds; // x14
  int32_t y; // w11
  il2cpp_array_size_t length; // x13
  il2cpp_array_size_t v20; // x14
  char *v21; // x10
  int32_t v22; // w20
  int32_t v23; // w21
  int IlluminationWidth; // w10
  int v25; // w11
  int32_t IlluminationHeight; // w9
  int v27; // w10
  int v28; // w8
  __int64 v29; // d0
  int v30; // w8
  bool v31; // zf

  v4 = this;
  if ( (byte_4D2E15D & 1) == 0 )
  {
    this = (TitleIlluminationManager_o *)sub_1C93AD4(&TitleIlluminationManager_TypeInfo);
    byte_4D2E15D = 1;
  }
  IlluminationObjects = v4->fields.IlluminationObjects;
  if ( IlluminationObjects )
  {
    max_length = IlluminationObjects->max_length;
    if ( max_length >= 1 )
    {
      for ( i = 0; i < max_length; ++i )
      {
        if ( i >= (unsigned int)max_length )
LABEL_46:
          sub_1C93D34(this);
        v8 = IlluminationObjects->m_Items[i];
        if ( !v8 )
LABEL_47:
          sub_1C93D2C(this, method);
        if ( v8->fields.exists )
        {
          v9 = v8->fields.moveTime + delta;
          v8->fields.moveTime = v9;
          if ( v9 >= v4->fields.MoveSpeed )
          {
            v10 = 10;
            v8->fields.moveTime = 0.0;
            do
            {
              v11 = v10;
              this = (TitleIlluminationManager_o *)UnityEngine_Random__Range_72079620(0, 3, 0);
              v13 = TitleIlluminationManager_TypeInfo;
              v14 = (unsigned int)this;
              if ( !TitleIlluminationManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(TitleIlluminationManager_TypeInfo);
                v13 = TitleIlluminationManager_TypeInfo;
              }
              static_fields = v13->static_fields;
              DirTable = static_fields->DirTable;
              if ( !DirTable )
                goto LABEL_47;
              bounds = DirTable->bounds;
              y = v8->fields.y;
              if ( (y & 1u) >= LODWORD(bounds->length) )
                goto LABEL_46;
              length = bounds[1].length;
              if ( v14 >= (unsigned int)length )
                goto LABEL_46;
              v20 = bounds[2].length;
              if ( (unsigned int)v20 < 2 )
                goto LABEL_46;
              v21 = (char *)DirTable + 4 * v20 * ((int)v14 + length * (y & 1));
              --v10;
              v22 = v8->fields.x + *((_DWORD *)v21 + 8);
              v23 = *((_DWORD *)v21 + 9) + y;
              if ( v22 != v8->fields.prevX || v23 != v8->fields.prevY )
              {
                if ( !v13->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(v13);
                  v13 = TitleIlluminationManager_TypeInfo;
                  static_fields = TitleIlluminationManager_TypeInfo->static_fields;
                }
                IlluminationWidth = static_fields->IlluminationWidth;
                v25 = IlluminationWidth <= 0 ? -IlluminationWidth : 1 - IlluminationWidth;
                if ( v22 >= v25 >> 1 )
                {
                  if ( !v13->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(v13);
                    v13 = TitleIlluminationManager_TypeInfo;
                    static_fields = TitleIlluminationManager_TypeInfo->static_fields;
                    IlluminationWidth = static_fields->IlluminationWidth;
                  }
                  if ( v22 <= IlluminationWidth / 2 )
                  {
                    if ( !v13->_2.cctor_finished )
                    {
                      j_il2cpp_runtime_class_init_0(v13);
                      v13 = TitleIlluminationManager_TypeInfo;
                      static_fields = TitleIlluminationManager_TypeInfo->static_fields;
                    }
                    IlluminationHeight = static_fields->IlluminationHeight;
                    v27 = IlluminationHeight <= 0 ? -IlluminationHeight : 1 - IlluminationHeight;
                    if ( v23 >= v27 >> 1 )
                    {
                      if ( !v13->_2.cctor_finished )
                      {
                        j_il2cpp_runtime_class_init_0(v13);
                        IlluminationHeight = TitleIlluminationManager_TypeInfo->static_fields->IlluminationHeight;
                      }
                      v28 = IlluminationHeight >= 0 ? IlluminationHeight : IlluminationHeight + 1;
                      if ( v23 <= v28 >> 1 )
                        break;
                    }
                  }
                }
              }
            }
            while ( v11 > 1 );
            v29 = *(_QWORD *)&v8->fields.x;
            v8->fields.x = v22;
            v8->fields.y = v23;
            *(_QWORD *)&v8->fields.prevX = v29;
            TitleIlluminationManager__SpawnIllumination(v4, v22, v23, v12);
            v30 = v8->fields.restCount - 1;
            v31 = v8->fields.restCount == 1;
            v8->fields.restCount = v30;
            if ( v30 < 0 || v31 )
            {
              --v4->fields.IlluminationCount;
              v8->fields.exists = 0;
            }
          }
        }
        max_length = IlluminationObjects->max_length;
      }
    }
  }
}


void TitleIlluminationManager_IlluminationInfo___ctor(
        TitleIlluminationManager_IlluminationInfo_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}