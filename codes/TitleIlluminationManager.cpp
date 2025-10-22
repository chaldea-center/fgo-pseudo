void TitleIlluminationManager___cctor(const MethodInfo *method)
{
  if ( (byte_4C545A0 & 1) == 0 )
  {
    sub_1C3E564(&TitleIlluminationManager_TypeInfo);
    byte_4C545A0 = 1;
  }
  *(_OWORD *)&TitleIlluminationManager_TypeInfo->static_fields->IlluminationPoolCount = xmmword_C11710;
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
  if ( (byte_4C5459D & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Collections_Generic_List_GameObject__get_Count__);
    this = (TitleIlluminationManager_o *)sub_1C3E564(&TitleIlluminationManager_TypeInfo);
    byte_4C5459D = 1;
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
      sub_1C3E7C8(this, method);
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
    sub_1C3E7C0(this, method);
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
    v11 = UnityEngine_Random__Range_71301784(v10 >> 1, IlluminationWidth / 2, 0);
    IlluminationHeight = TitleIlluminationManager_TypeInfo->static_fields->IlluminationHeight;
    if ( IlluminationHeight <= 0 )
      v13 = -IlluminationHeight;
    else
      v13 = 1 - IlluminationHeight;
    v14 = UnityEngine_Random__Range_71301784(v13 >> 1, IlluminationHeight / 2, 0);
    v6->fields.x = v11;
    v6->fields.y = v14;
    v6->fields.restCount = UnityEngine_Random__Range_71301784(6, 9, 0);
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
  const MethodInfo *v5; // x3
  unsigned __int64 v6; // x22
  __int64 v7; // x24
  unsigned int *IlluminationObjects; // x25
  Il2CppObject *v9; // x21
  __int64 transform; // x0
  __int64 v11; // x1
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  System_Collections_Generic_List_object__o *v14; // x21
  struct System_Collections_Generic_List_GameObject__o **p_IlluminationPool; // x20
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  int32_t i; // w27
  TitleIlluminationManager_c *v19; // x0
  Il2CppObject *IlluminationPrefab; // x22
  UnityEngine_GameObject_o *v21; // x22
  UnityEngine_Transform_o *v22; // x23
  UnityEngine_Transform_o *v23; // x23
  UnityEngine_Transform_o *v24; // x23
  UnityEngine_Transform_o *v25; // x23
  int32_t v26; // w2
  const MethodInfo *v27; // x3
  __int64 v28; // x8
  _QWORD *v29; // x9
  __int64 v30; // x10
  __int64 v31; // x8
  System_Collections_Generic_List_object__o *v32; // x20
  CGThumbnailListItem_o *p_IlluminationDisp; // x19
  int32_t v34; // w2
  const MethodInfo *v35; // x3
  System_Array_o *v36; // x19
  System_RuntimeFieldHandle_o v37; // x1
  int32_t v38; // w2
  const MethodInfo *v39; // x3
  TitleIlluminationManager_c *v40; // x0
  struct TitleIlluminationManager_StaticFields *static_fields; // x0
  __int64 v42; // x0
  __int128 v43; // [xsp+0h] [xbp-80h] BYREF
  __int64 v44; // [xsp+10h] [xbp-70h]

  if ( (byte_4C5459B & 1) == 0 )
  {
    sub_1C3E564(&TitleIlluminationManager_IlluminationInfo___TypeInfo);
    sub_1C3E564(&TitleIlluminationManager_IlluminationInfo_TypeInfo);
    sub_1C3E564(&int_____TypeInfo);
    sub_1C3E564(&Method_System_Collections_Generic_List_GameObject__Add__);
    sub_1C3E564(&Method_System_Collections_Generic_List_GameObject___ctor__);
    sub_1C3E564(&System_Collections_Generic_List_GameObject__TypeInfo);
    sub_1C3E564(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    sub_1C3E564(&TitleIlluminationManager_TypeInfo);
    sub_1C3E564(&Field__PrivateImplementationDetails__EE4D0A4F971594530E111634A37EEDED3EB04BC91AD1767FFB6EEAB5B24A1CC4);
    byte_4C5459B = 1;
  }
  v3 = (struct TitleIlluminationManager_IlluminationInfo_array *)sub_1C3E60C(
                                                                   TitleIlluminationManager_IlluminationInfo___TypeInfo,
                                                                   (unsigned int)this->fields.IlluminationCountMax);
  this->fields.IlluminationObjects = v3;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.IlluminationObjects, (int32_t)v3, v4, v5);
  if ( this->fields.IlluminationCountMax >= 1 )
  {
    v6 = 0;
    v7 = 8;
    do
    {
      IlluminationObjects = (unsigned int *)this->fields.IlluminationObjects;
      v9 = (Il2CppObject *)sub_1C3E7B0(TitleIlluminationManager_IlluminationInfo_TypeInfo);
      System_Object___ctor(v9, 0);
      if ( !IlluminationObjects )
LABEL_37:
        sub_1C3E7C0(transform, v11);
      if ( v9 )
      {
        transform = sub_1C3E6A0(v9, *(_QWORD *)(*(_QWORD *)IlluminationObjects + 64LL));
        if ( !transform )
        {
          v42 = sub_1C3E7E4();
          sub_1C3E68C(v42, 0);
        }
      }
      if ( v6 >= IlluminationObjects[6] )
        sub_1C3E7C8(transform, v11);
      *(_QWORD *)&IlluminationObjects[v7] = v9;
      sub_1C3E508((CGThumbnailListItem_o *)&IlluminationObjects[v7], (int32_t)v9, v12, v13);
      ++v6;
      v7 += 2;
    }
    while ( (__int64)v6 < this->fields.IlluminationCountMax );
  }
  v14 = (System_Collections_Generic_List_object__o *)sub_1C3E7B0(System_Collections_Generic_List_GameObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v14,
    (const MethodInfo_37B4C2C *)Method_System_Collections_Generic_List_GameObject___ctor__);
  this->fields.IlluminationPool = (struct System_Collections_Generic_List_GameObject__o *)v14;
  p_IlluminationPool = &this->fields.IlluminationPool;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.IlluminationPool, (int32_t)v14, v16, v17);
  for ( i = 0; ; ++i )
  {
    v19 = TitleIlluminationManager_TypeInfo;
    if ( !TitleIlluminationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TitleIlluminationManager_TypeInfo);
      v19 = TitleIlluminationManager_TypeInfo;
    }
    if ( i >= v19->static_fields->IlluminationPoolCount )
      break;
    IlluminationPrefab = (Il2CppObject *)this->fields.IlluminationPrefab;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    transform = (__int64)UnityEngine_Object__Instantiate_object_(
                           IlluminationPrefab,
                           (const MethodInfo_3185EB4 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( !transform )
      goto LABEL_37;
    v21 = (UnityEngine_GameObject_o *)transform;
    transform = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)transform, 0);
    if ( !this->fields.TargetPanel )
      goto LABEL_37;
    v22 = (UnityEngine_Transform_o *)transform;
    transform = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this->fields.TargetPanel, 0);
    if ( !v22 )
      goto LABEL_37;
    UnityEngine_Transform__set_parent(v22, (UnityEngine_Transform_o *)transform, 0);
    transform = (__int64)UnityEngine_GameObject__get_transform(v21, 0);
    v23 = (UnityEngine_Transform_o *)transform;
    if ( !byte_4C506A1 )
    {
      transform = sub_1C3E564(&UnityEngine_Vector3_TypeInfo);
      byte_4C506A1 = 1;
    }
    if ( !v23 )
      goto LABEL_37;
    UnityEngine_Transform__set_localPosition(v23, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0);
    transform = (__int64)UnityEngine_GameObject__get_transform(v21, 0);
    v24 = (UnityEngine_Transform_o *)transform;
    if ( !byte_4C506A1 )
    {
      transform = sub_1C3E564(&UnityEngine_Vector3_TypeInfo);
      byte_4C506A1 = 1;
    }
    if ( !v24 )
      goto LABEL_37;
    UnityEngine_Transform__set_localEulerAngles(v24, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0);
    transform = (__int64)UnityEngine_GameObject__get_transform(v21, 0);
    v25 = (UnityEngine_Transform_o *)transform;
    if ( !byte_4C506A6 )
    {
      transform = sub_1C3E564(&UnityEngine_Vector3_TypeInfo);
      byte_4C506A6 = 1;
    }
    if ( !v25 )
      goto LABEL_37;
    UnityEngine_Transform__set_localScale(v25, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0);
    UnityEngine_GameObject__SetActive(v21, 0, 0);
    transform = (__int64)*p_IlluminationPool;
    if ( !*p_IlluminationPool )
      goto LABEL_37;
    v28 = *(_QWORD *)(transform + 16);
    v29 = Method_System_Collections_Generic_List_GameObject__Add__;
    ++*(_DWORD *)(transform + 28);
    if ( !v28 )
      goto LABEL_37;
    v30 = *(int *)(transform + 24);
    if ( (unsigned int)v30 >= *(_DWORD *)(v28 + 24) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        (System_Collections_Generic_List_object__o *)transform,
        (Il2CppObject *)v21,
        *(const MethodInfo_37B5460 **)(*(_QWORD *)(v29[4] + 192LL) + 112LL));
    }
    else
    {
      v31 = v28 + 8 * v30;
      *(_DWORD *)(transform + 24) = v30 + 1;
      *(_QWORD *)(v31 + 32) = v21;
      sub_1C3E508((CGThumbnailListItem_o *)(v31 + 32), (int32_t)v21, v26, v27);
    }
  }
  v32 = (System_Collections_Generic_List_object__o *)sub_1C3E7B0(System_Collections_Generic_List_GameObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v32,
    (const MethodInfo_37B4C2C *)Method_System_Collections_Generic_List_GameObject___ctor__);
  this->fields.IlluminationDisp = (struct System_Collections_Generic_List_GameObject__o *)v32;
  p_IlluminationDisp = (CGThumbnailListItem_o *)&this->fields.IlluminationDisp;
  sub_1C3E508(p_IlluminationDisp, (int32_t)v32, v34, v35);
  p_IlluminationDisp->fields.index = 0;
  v43 = xmmword_C4B2F0;
  v44 = 2;
  v36 = (System_Array_o *)sub_1C3E614(int_____TypeInfo, &v43);
  v37.fields.value = Field__PrivateImplementationDetails__EE4D0A4F971594530E111634A37EEDED3EB04BC91AD1767FFB6EEAB5B24A1CC4;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_64337244(v36, v37, 0);
  v40 = TitleIlluminationManager_TypeInfo;
  if ( !TitleIlluminationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TitleIlluminationManager_TypeInfo);
    v40 = TitleIlluminationManager_TypeInfo;
  }
  static_fields = v40->static_fields;
  static_fields->DirTable = (struct System_Int32_array *)v36;
  sub_1C3E508((CGThumbnailListItem_o *)&static_fields->DirTable, (int32_t)v36, v38, v39);
}


void TitleIlluminationManager__OnDestroy(TitleIlluminationManager_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3

  this->fields.IlluminationPrefab = 0;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.IlluminationPrefab, 0, v2, v3);
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
  const MethodInfo *v8; // x3
  struct System_Object_array *items; // x8
  _QWORD *v10; // x9
  __int64 size; // x10
  TitleIlluminationManager_o *v12; // x1
  Il2CppClass **v13; // x0

  v4 = this;
  if ( (byte_4C5459C & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Collections_Generic_List_GameObject__Add__);
    this = (TitleIlluminationManager_o *)sub_1C3E564(&Method_System_Collections_Generic_List_GameObject__Remove__);
    byte_4C5459C = 1;
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
          (const MethodInfo_37B6988 *)Method_System_Collections_Generic_List_GameObject__Remove__),
        IlluminationPool = (System_Collections_Generic_List_object__o *)v4->fields.IlluminationPool,
        this = (TitleIlluminationManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)obj, 0),
        !IlluminationPool)
    || (items = IlluminationPool->fields._items,
        v10 = Method_System_Collections_Generic_List_GameObject__Add__,
        ++IlluminationPool->fields._version,
        !items) )
  {
LABEL_11:
    sub_1C3E7C0(this, obj);
  }
  size = IlluminationPool->fields._size;
  v12 = this;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      IlluminationPool,
      (Il2CppObject *)this,
      *(const MethodInfo_37B5460 **)(*(_QWORD *)(v10[4] + 192LL) + 112LL));
  }
  else
  {
    IlluminationPool->fields._size = size + 1;
    v13 = &items->obj.klass + size;
    v13[4] = (Il2CppClass *)v12;
    sub_1C3E508((CGThumbnailListItem_o *)(v13 + 4), (int32_t)v12, v7, v8);
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
  const MethodInfo *v13; // x3
  struct System_Object_array *items; // x8
  _QWORD *v15; // x9
  __int64 size; // x10
  System_Collections_Generic_List_object__o *v17; // x1
  Il2CppClass **v18; // x0

  if ( (byte_4C5459E & 1) == 0 )
  {
    sub_1C3E564(&Method_UnityEngine_GameObject_GetComponent_TitleIlluminationComponent___);
    sub_1C3E564(&Method_System_Collections_Generic_List_GameObject__Add__);
    sub_1C3E564(&Method_System_Collections_Generic_List_GameObject__RemoveAt__);
    sub_1C3E564(&Method_System_Collections_Generic_List_GameObject__get_Count__);
    sub_1C3E564(&Method_System_Collections_Generic_List_GameObject__get_Item__);
    sub_1C3E564(&TitleIlluminationManager_TypeInfo);
    byte_4C5459E = 1;
  }
  IlluminationPool = (System_Collections_Generic_List_object__o *)this->fields.IlluminationPool;
  if ( !IlluminationPool )
    goto LABEL_17;
  if ( !IlluminationPool->fields._size )
    return;
  IlluminationPool = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                    IlluminationPool,
                                                                    0,
                                                                    (const MethodInfo_37B5190 *)Method_System_Collections_Generic_List_GameObject__get_Item__);
  if ( !this->fields.IlluminationPool )
    goto LABEL_17;
  v8 = (UnityEngine_GameObject_o *)IlluminationPool;
  System_Collections_Generic_List_object___RemoveAt(
    (System_Collections_Generic_List_object__o *)this->fields.IlluminationPool,
    0,
    (const MethodInfo_37B6C34 *)Method_System_Collections_Generic_List_GameObject__RemoveAt__);
  if ( !v8 )
    goto LABEL_17;
  IlluminationPool = (System_Collections_Generic_List_object__o *)UnityEngine_GameObject__GetComponent_object_(
                                                                    v8,
                                                                    (const MethodInfo_31510CC *)Method_UnityEngine_GameObject_GetComponent_TitleIlluminationComponent___);
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
        v15 = Method_System_Collections_Generic_List_GameObject__Add__,
        ++IlluminationDisp->fields._version,
        !items) )
  {
LABEL_17:
    sub_1C3E7C0(IlluminationPool, *(_QWORD *)&x);
  }
  size = IlluminationDisp->fields._size;
  v17 = IlluminationPool;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      IlluminationDisp,
      (Il2CppObject *)IlluminationPool,
      *(const MethodInfo_37B5460 **)(*(_QWORD *)(v15[4] + 192LL) + 112LL));
  }
  else
  {
    IlluminationDisp->fields._size = size + 1;
    v18 = &items->obj.klass + size;
    v18[4] = (Il2CppClass *)v17;
    sub_1C3E508((CGThumbnailListItem_o *)(v18 + 4), (int32_t)v17, v12, v13);
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
      sub_1C3E7C0(v6, v7);
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
          sub_1C3E7C8(v6, v7);
        v20 = *((_DWORD *)&IlluminationPopProb->obj.klass + v11);
        v6 = UnityEngine_Random__Range_71301784(0, 100, 0);
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
  if ( (byte_4C5459F & 1) == 0 )
  {
    this = (TitleIlluminationManager_o *)sub_1C3E564(&TitleIlluminationManager_TypeInfo);
    byte_4C5459F = 1;
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
          sub_1C3E7C8(this, method);
        v8 = IlluminationObjects->m_Items[i];
        if ( !v8 )
LABEL_47:
          sub_1C3E7C0(this, method);
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
              this = (TitleIlluminationManager_o *)UnityEngine_Random__Range_71301784(0, 3, 0);
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