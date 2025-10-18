void BattleMoviePlayer___cctor(const MethodInfo *method)
{
  struct BattleMoviePlayer_StaticFields *static_fields; // x8

  if ( (byte_4C45AFC & 1) == 0 )
  {
    sub_1C37058(&BattleMoviePlayer_TypeInfo);
    byte_4C45AFC = 1;
  }
  static_fields = BattleMoviePlayer_TypeInfo->static_fields;
  *(_OWORD *)&static_fields->BackMovieScale = xmmword_C0F990;
  *(_QWORD *)&static_fields->BasePanelPosition.fields.x = 0;
  static_fields->BasePanelPosition.fields.z = 10.0;
}


void BattleMoviePlayer___ctor(BattleMoviePlayer_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x20
  int32_t v4; // w2
  const MethodInfo *v5; // x3
  System_Collections_Generic_List_object__o *v6; // x20
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  UnityEngine_Vector3_c *v9; // x8
  struct UnityEngine_Vector3_StaticFields *static_fields; // x9
  float z; // s1
  _BOOL4 v12; // w9
  struct UnityEngine_Vector3_StaticFields *v13; // x10
  float v14; // s1
  struct UnityEngine_Vector3_StaticFields *v15; // x8
  float v16; // s1

  if ( (byte_4C45AFB & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_List_GameObject___ctor__);
    sub_1C37058(&Method_System_Collections_Generic_List_BattleMoviePlayer_MovieInfo___ctor__);
    sub_1C37058(&System_Collections_Generic_List_BattleMoviePlayer_MovieInfo__TypeInfo);
    sub_1C37058(&System_Collections_Generic_List_GameObject__TypeInfo);
    byte_4C45AFB = 1;
  }
  this->fields.KeepStartPosition = 1;
  v3 = (System_Collections_Generic_List_object__o *)sub_1C372A4(System_Collections_Generic_List_BattleMoviePlayer_MovieInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_37A27F0 *)Method_System_Collections_Generic_List_BattleMoviePlayer_MovieInfo___ctor__);
  this->fields.MovieInfoList = (struct System_Collections_Generic_List_BattleMoviePlayer_MovieInfo__o *)v3;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.MovieInfoList, (int32_t)v3, v4, v5);
  v6 = (System_Collections_Generic_List_object__o *)sub_1C372A4(System_Collections_Generic_List_GameObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v6,
    (const MethodInfo_37A27F0 *)Method_System_Collections_Generic_List_GameObject___ctor__);
  this->fields.ObjList = (struct System_Collections_Generic_List_GameObject__o *)v6;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.ObjList, (int32_t)v6, v7, v8);
  if ( !byte_4C3C921 )
  {
    sub_1C37058(&UnityEngine_Vector3_TypeInfo);
    byte_4C3C921 = 1;
  }
  v9 = UnityEngine_Vector3_TypeInfo;
  static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
  z = static_fields->zeroVector.fields.z;
  *(_QWORD *)&this->fields.startPanelPosition.fields.x = *(_QWORD *)&static_fields->zeroVector.fields.x;
  this->fields.startPanelPosition.fields.z = z;
  if ( byte_4C3C926 )
  {
    v12 = 0;
  }
  else
  {
    sub_1C37058(&UnityEngine_Vector3_TypeInfo);
    v9 = UnityEngine_Vector3_TypeInfo;
    byte_4C3C926 = 1;
    v12 = byte_4C3C921 == 0;
  }
  v13 = v9->static_fields;
  v14 = v13->oneVector.fields.z;
  *(_QWORD *)&this->fields.startPanelScale.fields.x = *(_QWORD *)&v13->oneVector.fields.x;
  this->fields.startPanelScale.fields.z = v14;
  if ( v12 )
  {
    sub_1C37058(&UnityEngine_Vector3_TypeInfo);
    v9 = UnityEngine_Vector3_TypeInfo;
    byte_4C3C921 = 1;
  }
  v15 = v9->static_fields;
  v16 = v15->zeroVector.fields.z;
  *(_QWORD *)&this->fields.cameraStartPosition.fields.x = *(_QWORD *)&v15->zeroVector.fields.x;
  this->fields.cameraStartPosition.fields.z = v16;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


UnityEngine_GameObject_o *BattleMoviePlayer__CreateBattleMoviePanel(
        BattleMoviePlayer_o *this,
        BattleMoviePlayer_MovieInfo_o *movieInfo,
        int32_t no,
        const MethodInfo *method)
{
  BattleMoviePlayer_o *v6; // x20
  int32_t cameraType; // w8
  Il2CppObject *v8; // x21
  struct UnityEngine_GameObject_o *v9; // x23
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  System_Collections_Generic_List_object__o *v12; // x8
  struct System_Object_array *v13; // x9
  _QWORD *v14; // x10
  __int64 v15; // x11
  BattleMoviePlayer_o *v16; // x21
  Il2CppClass **v17; // x0
  struct BattlePerformance_o *perf; // x8
  Il2CppObject *moviePrefab; // x21
  UnityEngine_Transform_o *transform; // x23
  int32_t v21; // w2
  const MethodInfo *v22; // x3
  System_Collections_Generic_List_object__o *ObjList; // x8
  struct System_Object_array *items; // x9
  _QWORD *v25; // x10
  __int64 size; // x11
  Il2CppClass **v27; // x0
  int v28; // w8
  UnityEngine_Material_o **p_baseMat; // x23
  UnityEngine_Object_o *baseMat; // x24
  UnityEngine_Material_o *material; // x24
  UnityEngine_Material_o *v32; // x25
  int32_t v33; // w2
  const MethodInfo *v34; // x3
  UnityEngine_Transform_o *v35; // x24
  float v36; // s8
  float y; // s9
  UnityEngine_Transform_o *v38; // x22
  UnityEngine_Transform_o *v39; // x22
  float x; // s8
  float v41; // s9
  float z; // s10
  float *m_CachedPtr; // x8
  UnityEngine_Material_o *v44; // x23
  UnityEngine_Material_o *v45; // x22
  const MethodInfo *v46; // x3
  Il2CppObject *v48; // [xsp+8h] [xbp-78h] BYREF
  Il2CppObject *component; // [xsp+18h] [xbp-68h] BYREF
  UnityEngine_Vector3_o position; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v51; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v52; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v53; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v54; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o localScale; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v56; // 0:s0.4,4:s1.4,8:s2.4

  v6 = this;
  if ( (byte_4C45AEF & 1) == 0 )
  {
    sub_1C37058(&BattleMoviePlayer_TypeInfo);
    sub_1C37058(&Method_UnityEngine_Component_GetComponent_BattlePerformance___);
    sub_1C37058(&Method_UnityEngine_GameObject_GetComponent_BattleCameraFullScaleSetter___);
    sub_1C37058(&Method_UnityEngine_GameObject_GetComponent_CriManaMovieController___);
    sub_1C37058(&Method_UnityEngine_GameObject_GetComponent_MeshRenderer___);
    sub_1C37058(&Method_UnityEngine_GameObject_TryGetComponent_BattleCameraFullScaleSetter___);
    sub_1C37058(&Method_System_Collections_Generic_List_GameObject__Add__);
    sub_1C37058(&UnityEngine_Material_TypeInfo);
    sub_1C37058(&Method_UnityEngine_Object_Instantiate_GameObject____78192880);
    this = (BattleMoviePlayer_o *)sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C45AEF = 1;
  }
  component = 0;
  v48 = 0;
  if ( !movieInfo )
    goto LABEL_63;
  cameraType = movieInfo->fields.cameraType;
  if ( cameraType == 1 )
  {
    perf = v6->fields.perf;
    if ( !perf )
      goto LABEL_63;
    this = (BattleMoviePlayer_o *)perf->fields.actorcamera;
    if ( !this )
      goto LABEL_63;
    moviePrefab = (Il2CppObject *)v6->fields.moviePrefab;
    this = (BattleMoviePlayer_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( !this )
      goto LABEL_63;
    transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    this = (BattleMoviePlayer_o *)UnityEngine_Object__Instantiate_object__51855596(
                                    moviePrefab,
                                    transform,
                                    (const MethodInfo_31740EC *)Method_UnityEngine_Object_Instantiate_GameObject____78192880);
    ObjList = (System_Collections_Generic_List_object__o *)v6->fields.ObjList;
    if ( !ObjList )
      goto LABEL_63;
    items = ObjList->fields._items;
    v25 = Method_System_Collections_Generic_List_GameObject__Add__;
    ++ObjList->fields._version;
    if ( !items )
      goto LABEL_63;
    size = ObjList->fields._size;
    v16 = this;
    if ( (unsigned int)size >= LODWORD(items->max_length) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        ObjList,
        (Il2CppObject *)this,
        *(const MethodInfo_37A3024 **)(*(_QWORD *)(v25[4] + 192LL) + 112LL));
    }
    else
    {
      v27 = &items->obj.klass + size;
      ObjList->fields._size = size + 1;
      v27[4] = (Il2CppClass *)v16;
      sub_1C36FFC((CGThumbnailListItem_o *)(v27 + 4), (int32_t)v16, v21, v22);
    }
    if ( !v16 )
      goto LABEL_63;
    if ( UnityEngine_GameObject__TryGetComponent_object_(
           (UnityEngine_GameObject_o *)v16,
           &v48,
           (const MethodInfo_3140468 *)Method_UnityEngine_GameObject_TryGetComponent_BattleCameraFullScaleSetter___) )
    {
      this = (BattleMoviePlayer_o *)v48;
      if ( !v48 )
        goto LABEL_63;
      BattleCameraFullScaleSetter__Initialize((BattleCameraFullScaleSetter_o *)v48, v6->fields.perf, 0, 0);
    }
    UnityEngine_GameObject__set_layer((UnityEngine_GameObject_o *)v16, 11, 0);
    this = (BattleMoviePlayer_o *)UnityEngine_GameObject__GetComponent_object_(
                                    (UnityEngine_GameObject_o *)v16,
                                    (const MethodInfo_313F1D8 *)Method_UnityEngine_GameObject_GetComponent_BattleCameraFullScaleSetter___);
    if ( !this )
      goto LABEL_63;
    v28 = 1;
  }
  else
  {
    if ( cameraType )
    {
      v16 = 0;
      goto LABEL_39;
    }
    this = (BattleMoviePlayer_o *)v6->fields.perf;
    if ( !this )
      goto LABEL_63;
    v8 = (Il2CppObject *)v6->fields.moviePrefab;
    this = (BattleMoviePlayer_o *)UnityEngine_Component__GetComponent_object_(
                                    (UnityEngine_Component_o *)this,
                                    (const MethodInfo_30DE428 *)Method_UnityEngine_Component_GetComponent_BattlePerformance___);
    if ( !this )
      goto LABEL_63;
    v9 = this[1].fields.moviePrefab;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    this = (BattleMoviePlayer_o *)UnityEngine_Object__Instantiate_object__51855596(
                                    v8,
                                    (UnityEngine_Transform_o *)v9,
                                    (const MethodInfo_31740EC *)Method_UnityEngine_Object_Instantiate_GameObject____78192880);
    v12 = (System_Collections_Generic_List_object__o *)v6->fields.ObjList;
    if ( !v12 )
      goto LABEL_63;
    v13 = v12->fields._items;
    v14 = Method_System_Collections_Generic_List_GameObject__Add__;
    ++v12->fields._version;
    if ( !v13 )
      goto LABEL_63;
    v15 = v12->fields._size;
    v16 = this;
    if ( (unsigned int)v15 >= LODWORD(v13->max_length) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v12,
        (Il2CppObject *)this,
        *(const MethodInfo_37A3024 **)(*(_QWORD *)(v14[4] + 192LL) + 112LL));
    }
    else
    {
      v17 = &v13->obj.klass + v15;
      v12->fields._size = v15 + 1;
      v17[4] = (Il2CppClass *)v16;
      sub_1C36FFC((CGThumbnailListItem_o *)(v17 + 4), (int32_t)v16, v10, v11);
    }
    if ( !v16 )
      goto LABEL_63;
    if ( UnityEngine_GameObject__TryGetComponent_object_(
           (UnityEngine_GameObject_o *)v16,
           &component,
           (const MethodInfo_3140468 *)Method_UnityEngine_GameObject_TryGetComponent_BattleCameraFullScaleSetter___) )
    {
      this = (BattleMoviePlayer_o *)component;
      if ( !component )
        goto LABEL_63;
      BattleCameraFullScaleSetter__Initialize((BattleCameraFullScaleSetter_o *)component, v6->fields.perf, 1, 0);
    }
    this = (BattleMoviePlayer_o *)UnityEngine_GameObject__GetComponent_object_(
                                    (UnityEngine_GameObject_o *)v16,
                                    (const MethodInfo_313F1D8 *)Method_UnityEngine_GameObject_GetComponent_BattleCameraFullScaleSetter___);
    if ( !this )
      goto LABEL_63;
    v28 = 0;
  }
  LODWORD(this->fields.moviePrefab) = v28;
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this, 1, 0);
LABEL_39:
  p_baseMat = &v6->fields.baseMat;
  baseMat = (UnityEngine_Object_o *)v6->fields.baseMat;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (BattleMoviePlayer_o *)UnityEngine_Object__op_Equality(baseMat, 0, 0);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    if ( !v16 )
      goto LABEL_63;
    this = (BattleMoviePlayer_o *)UnityEngine_GameObject__GetComponent_object_(
                                    (UnityEngine_GameObject_o *)v16,
                                    (const MethodInfo_313F1D8 *)Method_UnityEngine_GameObject_GetComponent_MeshRenderer___);
    if ( !this )
      goto LABEL_63;
    material = UnityEngine_Renderer__get_material((UnityEngine_Renderer_o *)this, 0);
    v32 = (UnityEngine_Material_o *)sub_1C372A4(UnityEngine_Material_TypeInfo);
    UnityEngine_Material___ctor_71129980(v32, material, 0);
    *p_baseMat = v32;
    sub_1C36FFC((CGThumbnailListItem_o *)&v6->fields.baseMat, (int32_t)v32, v33, v34);
  }
  else if ( !v16 )
  {
    goto LABEL_63;
  }
  v35 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v16, 0);
  this = (BattleMoviePlayer_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v16, 0);
  if ( !this )
    goto LABEL_63;
  LODWORD(v36) = (unsigned int)UnityEngine_Transform__get_position((UnityEngine_Transform_o *)this, 0);
  this = (BattleMoviePlayer_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v16, 0);
  if ( !this )
    goto LABEL_63;
  position = UnityEngine_Transform__get_position((UnityEngine_Transform_o *)this, 0);
  y = position.fields.y;
  this = (BattleMoviePlayer_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v16, 0);
  if ( !this )
    goto LABEL_63;
  v51 = UnityEngine_Transform__get_position((UnityEngine_Transform_o *)this, 0);
  if ( !v35 )
    goto LABEL_63;
  v52.fields.y = y;
  v52.fields.z = (float)((float)no * 0.1) + v51.fields.z;
  v52.fields.x = v36;
  UnityEngine_Transform__set_position(v35, v52, 0);
  if ( movieInfo->fields.isBackMovie )
  {
    v38 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v16, 0);
    this = (BattleMoviePlayer_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v16, 0);
    if ( this )
    {
      v53 = UnityEngine_Transform__get_position((UnityEngine_Transform_o *)this, 0);
      if ( v38 )
      {
        v54.fields.z = v53.fields.z + 0.1;
        v54.fields.y = v53.fields.y + 0.0;
        v54.fields.x = v53.fields.x + 0.0;
        UnityEngine_Transform__set_position(v38, v54, 0);
        this = (BattleMoviePlayer_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v16, 0);
        if ( this )
        {
          v39 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
          this = (BattleMoviePlayer_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v16, 0);
          if ( this )
          {
            localScale = UnityEngine_Transform__get_localScale((UnityEngine_Transform_o *)this, 0);
            this = (BattleMoviePlayer_o *)BattleMoviePlayer_TypeInfo;
            x = localScale.fields.x;
            v41 = localScale.fields.y;
            z = localScale.fields.z;
            if ( !BattleMoviePlayer_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(BattleMoviePlayer_TypeInfo);
              this = (BattleMoviePlayer_o *)BattleMoviePlayer_TypeInfo;
            }
            if ( v39 )
            {
              m_CachedPtr = (float *)this[1].fields.m_CachedPtr;
              v56.fields.z = z * *m_CachedPtr;
              v56.fields.y = v41 * *m_CachedPtr;
              v56.fields.x = x * *m_CachedPtr;
              UnityEngine_Transform__set_localScale(v39, v56, 0);
              goto LABEL_59;
            }
          }
        }
      }
    }
LABEL_63:
    sub_1C372B4(this);
  }
LABEL_59:
  v44 = *p_baseMat;
  v45 = (UnityEngine_Material_o *)sub_1C372A4(UnityEngine_Material_TypeInfo);
  UnityEngine_Material___ctor_71129980(v45, v44, 0);
  this = (BattleMoviePlayer_o *)UnityEngine_GameObject__GetComponent_object_(
                                  (UnityEngine_GameObject_o *)v16,
                                  (const MethodInfo_313F1D8 *)Method_UnityEngine_GameObject_GetComponent_MeshRenderer___);
  if ( !this )
    goto LABEL_63;
  UnityEngine_Renderer__set_material((UnityEngine_Renderer_o *)this, v45, 0);
  this = (BattleMoviePlayer_o *)UnityEngine_GameObject__GetComponent_object_(
                                  (UnityEngine_GameObject_o *)v16,
                                  (const MethodInfo_313F1D8 *)Method_UnityEngine_GameObject_GetComponent_CriManaMovieController___);
  if ( !this )
    goto LABEL_63;
  CriManaMovieMaterial__set_material((CriManaMovieMaterial_o *)this, v45, 0);
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)v16, 1, 0);
  this = (BattleMoviePlayer_o *)UnityEngine_GameObject__GetComponent_object_(
                                  (UnityEngine_GameObject_o *)v16,
                                  (const MethodInfo_313F1D8 *)Method_UnityEngine_GameObject_GetComponent_MeshRenderer___);
  if ( !this )
    goto LABEL_63;
  UnityEngine_Renderer__set_enabled((UnityEngine_Renderer_o *)this, 0, 0);
  BattleMoviePlayer__InitMovie(v6, (UnityEngine_GameObject_o *)v16, no, v46);
  return (UnityEngine_GameObject_o *)v16;
}


void BattleMoviePlayer__CreateMovieInfoListEvent(
        BattleMoviePlayer_o *this,
        System_Collections_Generic_List_BattleMoviePlayer_PathType__o *type,
        System_Collections_Generic_List_string__o *path,
        System_Collections_Generic_List_float__o *valid,
        System_Collections_Generic_List_float__o *fadeout,
        System_Collections_Generic_List_int__o *cam,
        System_Collections_Generic_List_float__o *speed,
        System_Collections_Generic_List_UnityEvent__o *effect,
        System_Collections_Generic_List_float__o *effRest,
        bool keepStartPosition,
        bool overrideZDepth,
        bool ignoreTS,
        System_Collections_Generic_List_float__o *fadein,
        bool loop,
        bool isBackMovie,
        const MethodInfo *method)
{
  System_Collections_Generic_List_float__o *v21; // x19
  System_Collections_Generic_List_float__o *v22; // x21
  int32_t v23; // w27
  int32_t v24; // w25
  float v25; // s8
  float v26; // s9
  int32_t v27; // w19
  float Item; // s10
  float v29; // s11
  float v30; // s12
  System_Collections_Generic_List_object__o *MovieInfoList; // x28
  bool IgnoreTimeScale; // w19
  bool v33; // w23
  bool v34; // w21
  BattleMoviePlayer_MovieInfo_o *v35; // x29
  int32_t v36; // w2
  const MethodInfo *v37; // x3
  struct System_Object_array *items; // x8
  _QWORD *v39; // x9
  __int64 size; // x10
  Il2CppClass **v41; // x0
  System_Collections_Generic_List_UnityEvent__o *v42; // [xsp+10h] [xbp-E0h]
  System_Collections_Generic_List_float__o *v43; // [xsp+18h] [xbp-D8h]
  System_Collections_Generic_List_int__o *v44; // [xsp+20h] [xbp-D0h]
  BattleMoviePlayer_o *v47; // [xsp+38h] [xbp-B8h]
  int32_t cama; // [xsp+44h] [xbp-ACh]
  UnityEngine_Events_UnityEvent_o *eff; // [xsp+48h] [xbp-A8h]
  System_String_o *patha; // [xsp+58h] [xbp-98h]

  v47 = this;
  if ( (byte_4C45AFA & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_List_BattleMoviePlayer_MovieInfo__Add__);
    sub_1C37058(&Method_System_Collections_Generic_List_float__get_Count__);
    sub_1C37058(&Method_System_Collections_Generic_List_BattleMoviePlayer_PathType__get_Count__);
    sub_1C37058(&Method_System_Collections_Generic_List_UnityEvent__get_Count__);
    sub_1C37058(&Method_System_Collections_Generic_List_string__get_Count__);
    sub_1C37058(&Method_System_Collections_Generic_List_int__get_Count__);
    sub_1C37058(&Method_System_Collections_Generic_List_string__get_Item__);
    sub_1C37058(&Method_System_Collections_Generic_List_UnityEvent__get_Item__);
    sub_1C37058(&Method_System_Collections_Generic_List_BattleMoviePlayer_PathType__get_Item__);
    sub_1C37058(&Method_System_Collections_Generic_List_int__get_Item__);
    sub_1C37058(&Method_System_Collections_Generic_List_float__get_Item__);
    sub_1C37058(&BattleMoviePlayer_MovieInfo_TypeInfo);
    this = (BattleMoviePlayer_o *)sub_1C37058(&StringLiteral_1/*""*/);
    byte_4C45AFA = 1;
  }
  v47->fields.KeepStartPosition = keepStartPosition;
  v47->fields.OverrideZDepth = overrideZDepth;
  v47->fields.IgnoreTimeScale = ignoreTS;
  v47->fields.Loop = loop;
  v47->fields.IsBackMovie = isBackMovie;
  if ( !path )
LABEL_47:
    sub_1C372B4(this);
  v21 = valid;
  if ( path->fields._size >= 1 )
  {
    v22 = effRest;
    v23 = 0;
    v43 = speed;
    v44 = cam;
    v42 = effect;
    do
    {
      this = (BattleMoviePlayer_o *)System_Collections_Generic_List_object___get_Item(
                                      (System_Collections_Generic_List_object__o *)path,
                                      v23,
                                      (const MethodInfo_37A2D54 *)Method_System_Collections_Generic_List_string__get_Item__);
      if ( this )
      {
        if ( !fadeout )
          goto LABEL_47;
        if ( v23 < fadeout->fields._size )
        {
          if ( !cam )
            goto LABEL_47;
          if ( v23 < cam->fields._size )
          {
            this = (BattleMoviePlayer_o *)type;
            if ( !type )
              goto LABEL_47;
            if ( v23 >= type->fields._size )
            {
              v24 = 0;
            }
            else
            {
              this = (BattleMoviePlayer_o *)System_Collections_Generic_List_Int32Enum___get_Item(
                                              (System_Collections_Generic_List_T__o *)type,
                                              v23,
                                              (const MethodInfo_378853C *)Method_System_Collections_Generic_List_BattleMoviePlayer_PathType__get_Item__);
              v24 = (int)this;
            }
            if ( v23 >= path->fields._size )
            {
              patha = (System_String_o *)StringLiteral_1/*""*/;
            }
            else
            {
              this = (BattleMoviePlayer_o *)System_Collections_Generic_List_object___get_Item(
                                              (System_Collections_Generic_List_object__o *)path,
                                              v23,
                                              (const MethodInfo_37A2D54 *)Method_System_Collections_Generic_List_string__get_Item__);
              patha = (System_String_o *)this;
            }
            if ( !v21 )
              goto LABEL_47;
            v25 = 0.0;
            v26 = 0.0;
            if ( v23 < v21->fields._size )
              v26 = fmaxf(
                      System_Collections_Generic_List_float___get_Item(
                        v21,
                        v23,
                        (const MethodInfo_37C88A8 *)Method_System_Collections_Generic_List_float__get_Item__),
                      0.0);
            if ( v23 < fadeout->fields._size )
              v25 = fmaxf(
                      System_Collections_Generic_List_float___get_Item(
                        fadeout,
                        v23,
                        (const MethodInfo_37C88A8 *)Method_System_Collections_Generic_List_float__get_Item__),
                      1.0);
            if ( v23 >= cam->fields._size )
            {
              v27 = 0;
            }
            else
            {
              this = (BattleMoviePlayer_o *)System_Collections_Generic_List_int___get_Item(
                                              cam,
                                              v23,
                                              (const MethodInfo_3785D10 *)Method_System_Collections_Generic_List_int__get_Item__);
              v27 = (int)this;
            }
            if ( !speed )
              goto LABEL_47;
            Item = 1.0;
            if ( v23 < speed->fields._size )
              Item = System_Collections_Generic_List_float___get_Item(
                       speed,
                       v23,
                       (const MethodInfo_37C88A8 *)Method_System_Collections_Generic_List_float__get_Item__);
            if ( !effect )
              goto LABEL_47;
            if ( v23 >= effect->fields._size )
            {
              eff = 0;
            }
            else
            {
              this = (BattleMoviePlayer_o *)System_Collections_Generic_List_object___get_Item(
                                              (System_Collections_Generic_List_object__o *)effect,
                                              v23,
                                              (const MethodInfo_37A2D54 *)Method_System_Collections_Generic_List_UnityEvent__get_Item__);
              eff = (UnityEngine_Events_UnityEvent_o *)this;
            }
            if ( !v22 )
              goto LABEL_47;
            v29 = 0.0;
            if ( v23 < v22->fields._size )
              v29 = System_Collections_Generic_List_float___get_Item(
                      v22,
                      v23,
                      (const MethodInfo_37C88A8 *)Method_System_Collections_Generic_List_float__get_Item__);
            if ( !fadein )
              goto LABEL_47;
            v30 = 0.0;
            cama = v27;
            if ( v23 < fadein->fields._size )
              v30 = System_Collections_Generic_List_float___get_Item(
                      fadein,
                      v23,
                      (const MethodInfo_37C88A8 *)Method_System_Collections_Generic_List_float__get_Item__);
            MovieInfoList = (System_Collections_Generic_List_object__o *)v47->fields.MovieInfoList;
            IgnoreTimeScale = v47->fields.IgnoreTimeScale;
            v33 = v47->fields.Loop;
            v34 = v47->fields.IsBackMovie;
            v35 = (BattleMoviePlayer_MovieInfo_o *)sub_1C372A4(BattleMoviePlayer_MovieInfo_TypeInfo);
            BattleMoviePlayer_MovieInfo___ctor(
              v35,
              v24,
              patha,
              v26,
              v25,
              cama,
              Item,
              eff,
              v29,
              IgnoreTimeScale,
              v30,
              v33,
              v34,
              0);
            if ( !MovieInfoList )
              goto LABEL_47;
            items = MovieInfoList->fields._items;
            v39 = Method_System_Collections_Generic_List_BattleMoviePlayer_MovieInfo__Add__;
            ++MovieInfoList->fields._version;
            if ( !items )
              goto LABEL_47;
            size = MovieInfoList->fields._size;
            v22 = effRest;
            if ( (unsigned int)size >= LODWORD(items->max_length) )
            {
              System_Collections_Generic_List_object___AddWithResize(
                MovieInfoList,
                (Il2CppObject *)v35,
                *(const MethodInfo_37A3024 **)(*(_QWORD *)(v39[4] + 192LL) + 112LL));
            }
            else
            {
              v41 = &items->obj.klass + size;
              MovieInfoList->fields._size = size + 1;
              v41[4] = (Il2CppClass *)v35;
              sub_1C36FFC((CGThumbnailListItem_o *)(v41 + 4), (int32_t)v35, v36, v37);
            }
            effect = v42;
            speed = v43;
            cam = v44;
            v21 = valid;
          }
        }
      }
      ++v23;
    }
    while ( v23 < path->fields._size );
  }
}


void BattleMoviePlayer__Dispose(BattleMoviePlayer_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *perf; // x20
  struct System_Collections_Generic_List_GameObject__o *ObjList; // x0
  System_Collections_Generic_List_T__o *MovieInfoList; // x20
  BattleMoviePlayer___c_c *v6; // x0
  System_Func_object__bool__o *_9__27_0; // x21
  Il2CppObject *v8; // x22
  struct BattleMoviePlayer___c_StaticFields *static_fields; // x0
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  const MethodInfo *v12; // x2
  struct System_Collections_Generic_List_BattleMoviePlayer_MovieInfo__o *v13; // x8
  int32_t size; // w2
  int v15; // w9
  Il2CppObject *current; // x20
  struct System_Collections_Generic_List_GameObject__o *v17; // x8
  int32_t v18; // w2
  int v19; // w9
  UnityEngine_Object_o *gameObject; // x19
  System_Collections_Generic_List_Enumerator_object__o v21; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v22; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4C45AEE & 1) == 0 )
  {
    sub_1C37058(&Method_BasicHelper_Any_BattleMoviePlayer_MovieInfo___);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_1C37058(&System_Func_BattleMoviePlayer_MovieInfo__bool__TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_List_GameObject__Clear__);
    sub_1C37058(&Method_System_Collections_Generic_List_BattleMoviePlayer_MovieInfo__Clear__);
    sub_1C37058(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&Method_BattleMoviePlayer___c__Dispose_b__27_0__);
    sub_1C37058(&BattleMoviePlayer___c_TypeInfo);
    byte_4C45AEE = 1;
  }
  memset(&v22, 0, sizeof(v22));
  perf = (UnityEngine_Object_o *)this->fields.perf;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  ObjList = (struct System_Collections_Generic_List_GameObject__o *)UnityEngine_Object__op_Inequality(perf, 0, 0);
  if ( ((unsigned __int8)ObjList & 1) != 0 )
  {
    MovieInfoList = (System_Collections_Generic_List_T__o *)this->fields.MovieInfoList;
    v6 = BattleMoviePlayer___c_TypeInfo;
    if ( !BattleMoviePlayer___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleMoviePlayer___c_TypeInfo);
      v6 = BattleMoviePlayer___c_TypeInfo;
    }
    _9__27_0 = (System_Func_object__bool__o *)v6->static_fields->__9__27_0;
    if ( !_9__27_0 )
    {
      if ( !v6->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v6);
        v6 = BattleMoviePlayer___c_TypeInfo;
      }
      v8 = (Il2CppObject *)v6->static_fields->__9;
      _9__27_0 = (System_Func_object__bool__o *)sub_1C372A4(System_Func_BattleMoviePlayer_MovieInfo__bool__TypeInfo);
      System_Func_object__bool____ctor(_9__27_0, v8, Method_BattleMoviePlayer___c__Dispose_b__27_0__, 0);
      static_fields = BattleMoviePlayer___c_TypeInfo->static_fields;
      static_fields->__9__27_0 = (struct System_Func_BattleMoviePlayer_MovieInfo__bool__o *)_9__27_0;
      sub_1C36FFC((CGThumbnailListItem_o *)&static_fields->__9__27_0, (int32_t)_9__27_0, v10, v11);
    }
    ObjList = (struct System_Collections_Generic_List_GameObject__o *)BasicHelper__Any_object_(
                                                                        MovieInfoList,
                                                                        (System_Func_T__bool__o *)_9__27_0,
                                                                        (const MethodInfo_30D0FF8 *)Method_BasicHelper_Any_BattleMoviePlayer_MovieInfo___);
    if ( ((unsigned __int8)ObjList & 1) != 0 )
      BattleMoviePlayer__ShowBg(this, 1, v12);
  }
  v13 = this->fields.MovieInfoList;
  if ( !v13 )
    goto LABEL_32;
  size = v13->fields._size;
  v15 = v13->fields._version + 1;
  v13->fields._size = 0;
  v13->fields._version = v15;
  if ( size >= 1 )
    System_Array__Clear((System_Array_o *)v13->fields._items, 0, size, 0);
  ObjList = this->fields.ObjList;
  if ( !ObjList )
    goto LABEL_32;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v21,
    (System_Collections_Generic_List_object__o *)ObjList,
    (const MethodInfo_37A3B1C *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v22 = v21;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v22,
            (const MethodInfo_352D810 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v22.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0, 0) )
    {
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      UnityEngine_Object__Destroy_71266752((UnityEngine_Object_o *)current, 0);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v22,
    (const MethodInfo_352D80C *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  v17 = this->fields.ObjList;
  if ( !v17 )
LABEL_32:
    sub_1C372B4(ObjList);
  v18 = v17->fields._size;
  v19 = v17->fields._version + 1;
  v17->fields._size = 0;
  v17->fields._version = v19;
  if ( v18 >= 1 )
    System_Array__Clear((System_Array_o *)v17->fields._items, 0, v18, 0);
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  UnityEngine_Object__Destroy_71266752(gameObject, 0);
}


System_Collections_IEnumerator_o *BattleMoviePlayer__FadeoutDeleteMovie(
        BattleMoviePlayer_o *this,
        System_Action_o *FadeOuted,
        const MethodInfo *method)
{
  __int64 v5; // x21
  __int64 v6; // x0
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  int32_t v9; // w2
  const MethodInfo *v10; // x3

  if ( (byte_4C45AF5 & 1) == 0 )
  {
    sub_1C37058(&BattleMoviePlayer__FadeoutDeleteMovie_d__38_TypeInfo);
    byte_4C45AF5 = 1;
  }
  v5 = sub_1C372A4(BattleMoviePlayer__FadeoutDeleteMovie_d__38_TypeInfo);
  BattleMoviePlayer__FadeoutDeleteMovie_d__38___ctor((BattleMoviePlayer__FadeoutDeleteMovie_d__38_o *)v5, 0, 0);
  if ( !v5 )
    sub_1C372B4(v6);
  *(_QWORD *)(v5 + 32) = this;
  sub_1C36FFC((CGThumbnailListItem_o *)(v5 + 32), (int32_t)this, v7, v8);
  *(_QWORD *)(v5 + 40) = FadeOuted;
  sub_1C36FFC((CGThumbnailListItem_o *)(v5 + 40), (int32_t)FadeOuted, v9, v10);
  return (System_Collections_IEnumerator_o *)v5;
}


void BattleMoviePlayer__GetMoviePanelAdd(BattleMoviePlayer_o *this, int32_t i, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *MovieInfoList; // x0
  Il2CppObject *Item; // x0
  const MethodInfo *v7; // x3
  struct UnityEngine_GameObject_o *BattleMoviePanel; // x0
  int32_t v9; // w2
  const MethodInfo *v10; // x3

  if ( (byte_4C45AF1 & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_List_BattleMoviePlayer_MovieInfo__get_Count__);
    sub_1C37058(&Method_System_Collections_Generic_List_BattleMoviePlayer_MovieInfo__get_Item__);
    byte_4C45AF1 = 1;
  }
  MovieInfoList = (System_Collections_Generic_List_object__o *)this->fields.MovieInfoList;
  if ( !MovieInfoList )
    sub_1C372B4(0);
  if ( MovieInfoList->fields._size > i )
  {
    Item = System_Collections_Generic_List_object___get_Item(
             MovieInfoList,
             i,
             (const MethodInfo_37A2D54 *)Method_System_Collections_Generic_List_BattleMoviePlayer_MovieInfo__get_Item__);
    BattleMoviePanel = BattleMoviePlayer__CreateBattleMoviePanel(this, (BattleMoviePlayer_MovieInfo_o *)Item, i, v7);
    this->fields.nextMovieObj = BattleMoviePanel;
    sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.nextMovieObj, (int32_t)BattleMoviePanel, v9, v10);
  }
}


System_Collections_IEnumerator_o *BattleMoviePlayer__GetMoviePanelFirst(
        BattleMoviePlayer_o *this,
        BattlePerformance_o *performance,
        const MethodInfo *method)
{
  __int64 v5; // x21
  __int64 v6; // x0
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  int32_t v9; // w2
  const MethodInfo *v10; // x3

  if ( (byte_4C45AF0 & 1) == 0 )
  {
    sub_1C37058(&BattleMoviePlayer__GetMoviePanelFirst_d__30_TypeInfo);
    byte_4C45AF0 = 1;
  }
  v5 = sub_1C372A4(BattleMoviePlayer__GetMoviePanelFirst_d__30_TypeInfo);
  BattleMoviePlayer__GetMoviePanelFirst_d__30___ctor((BattleMoviePlayer__GetMoviePanelFirst_d__30_o *)v5, 0, 0);
  if ( !v5 )
    sub_1C372B4(v6);
  *(_QWORD *)(v5 + 32) = this;
  sub_1C36FFC((CGThumbnailListItem_o *)(v5 + 32), (int32_t)this, v7, v8);
  *(_QWORD *)(v5 + 40) = performance;
  sub_1C36FFC((CGThumbnailListItem_o *)(v5 + 40), (int32_t)performance, v9, v10);
  return (System_Collections_IEnumerator_o *)v5;
}


void BattleMoviePlayer__InitMovie(
        BattleMoviePlayer_o *this,
        UnityEngine_GameObject_o *obj,
        int32_t pathnum,
        const MethodInfo *method)
{
  void *MovieInfoList; // x0
  System_String_o *v8; // x22
  AssetData_o *AssetStorageData; // x0
  System_String_o *v10; // x22
  int v11; // w8
  System_Collections_Generic_List_object__o *v12; // x8
  System_String_o *v13; // x21
  __int64 *v14; // x8
  System_Collections_Generic_List_object__o *v15; // x8
  UnityEngine_Object_o *Component_object; // x19

  if ( (byte_4C45AF9 & 1) == 0 )
  {
    sub_1C37058(&UnityEngine_Application_TypeInfo);
    sub_1C37058(&AssetManager_TypeInfo);
    sub_1C37058(&Method_UnityEngine_GameObject_GetComponent_CriManaMovieController___);
    sub_1C37058(&Method_System_Collections_Generic_List_BattleMoviePlayer_MovieInfo__get_Item__);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&StringLiteral_1046/*".usm"*/);
    sub_1C37058(&StringLiteral_1092/*"/StreamingAssets/"*/);
    sub_1C37058(&StringLiteral_1087/*"/Resources/"*/);
    byte_4C45AF9 = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Implicit((UnityEngine_Object_o *)obj, 0) )
  {
    MovieInfoList = this->fields.MovieInfoList;
    if ( !MovieInfoList )
      goto LABEL_41;
    MovieInfoList = System_Collections_Generic_List_object___get_Item(
                      (System_Collections_Generic_List_object__o *)MovieInfoList,
                      pathnum,
                      (const MethodInfo_37A2D54 *)Method_System_Collections_Generic_List_BattleMoviePlayer_MovieInfo__get_Item__);
    if ( !MovieInfoList )
      goto LABEL_41;
    v8 = (System_String_o *)*((_QWORD *)MovieInfoList + 3);
    if ( !v8 )
      goto LABEL_41;
    if ( !System_String__EndsWith(*((System_String_o **)MovieInfoList + 3), (System_String_o *)StringLiteral_1046/*".usm"*/, 0) )
      v8 = System_String__Concat_63561656(v8, (System_String_o *)StringLiteral_1046/*".usm"*/, 0);
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    AssetStorageData = AssetManager__getAssetStorageData(v8, 0);
    v10 = AssetStorageData ? AssetData__get_Path(AssetStorageData, 0) : 0LL;
    MovieInfoList = this->fields.MovieInfoList;
    if ( !MovieInfoList )
      goto LABEL_41;
    MovieInfoList = System_Collections_Generic_List_object___get_Item(
                      (System_Collections_Generic_List_object__o *)MovieInfoList,
                      pathnum,
                      (const MethodInfo_37A2D54 *)Method_System_Collections_Generic_List_BattleMoviePlayer_MovieInfo__get_Item__);
    if ( !MovieInfoList )
      goto LABEL_41;
    v11 = *((_DWORD *)MovieInfoList + 4);
    if ( v11 == 102 )
    {
      if ( !UnityEngine_Application_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Application_TypeInfo);
      MovieInfoList = UnityEngine_Application__get_dataPath(0);
      v15 = (System_Collections_Generic_List_object__o *)this->fields.MovieInfoList;
      if ( !v15 )
        goto LABEL_41;
      v13 = (System_String_o *)MovieInfoList;
      MovieInfoList = System_Collections_Generic_List_object___get_Item(
                        v15,
                        pathnum,
                        (const MethodInfo_37A2D54 *)Method_System_Collections_Generic_List_BattleMoviePlayer_MovieInfo__get_Item__);
      if ( !MovieInfoList )
        goto LABEL_41;
      v14 = &StringLiteral_1087/*"/Resources/"*/;
    }
    else
    {
      if ( v11 != 101 )
        goto LABEL_31;
      if ( !UnityEngine_Application_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Application_TypeInfo);
      MovieInfoList = UnityEngine_Application__get_dataPath(0);
      v12 = (System_Collections_Generic_List_object__o *)this->fields.MovieInfoList;
      if ( !v12 )
        goto LABEL_41;
      v13 = (System_String_o *)MovieInfoList;
      MovieInfoList = System_Collections_Generic_List_object___get_Item(
                        v12,
                        pathnum,
                        (const MethodInfo_37A2D54 *)Method_System_Collections_Generic_List_BattleMoviePlayer_MovieInfo__get_Item__);
      if ( !MovieInfoList )
        goto LABEL_41;
      v14 = &StringLiteral_1092/*"/StreamingAssets/"*/;
    }
    MovieInfoList = System_String__Concat_63599904(
                      v13,
                      (System_String_o *)*v14,
                      *((System_String_o **)MovieInfoList + 3),
                      0);
    v10 = (System_String_o *)MovieInfoList;
LABEL_31:
    if ( obj )
    {
      Component_object = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_object_(
                                                   obj,
                                                   (const MethodInfo_313F1D8 *)Method_UnityEngine_GameObject_GetComponent_CriManaMovieController___);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( !UnityEngine_Object__op_Inequality(Component_object, 0, 0) )
        return;
      MovieInfoList = (void *)System_String__IsNullOrEmpty(v10, 0);
      if ( ((unsigned __int8)MovieInfoList & 1) != 0 )
        return;
      if ( Component_object )
      {
        MovieInfoList = Component_object[2].monitor;
        if ( MovieInfoList )
        {
          CriMana_Player__SetFile((CriMana_Player_o *)MovieInfoList, 0, v10, 0, 0);
          MovieInfoList = Component_object[2].monitor;
          if ( MovieInfoList )
          {
            CriMana_Player__PrepareForRendering((CriMana_Player_o *)MovieInfoList, 0);
            return;
          }
        }
      }
    }
LABEL_41:
    sub_1C372B4(MovieInfoList);
  }
}


void BattleMoviePlayer__Initialize(BattleMoviePlayer_o *this, BattlePerformance_o *perf, const MethodInfo *method)
{
  System_Collections_IEnumerator_o *MoviePanelFirst; // x1

  MoviePanelFirst = BattleMoviePlayer__GetMoviePanelFirst(this, perf, method);
  UnityEngine_MonoBehaviour__StartCoroutine_71252324((UnityEngine_MonoBehaviour_o *)this, MoviePanelFirst, 0);
}


bool BattleMoviePlayer__IsBossCamera(BattleMoviePlayer_o *this, const MethodInfo *method)
{
  BattleMoviePlayer_o *v2; // x19
  struct BattlePerformance_o *perf; // x8
  UnityEngine_Object_o *actorcamera; // x20
  struct BattlePerformance_o *v5; // x8
  float fieldOfView; // s8
  BattleMoviePlayer_c *v7; // x0

  v2 = this;
  if ( (byte_4C45AF6 & 1) == 0 )
  {
    sub_1C37058(&BattleMoviePlayer_TypeInfo);
    this = (BattleMoviePlayer_o *)sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C45AF6 = 1;
  }
  perf = v2->fields.perf;
  if ( !perf )
    goto LABEL_16;
  actorcamera = (UnityEngine_Object_o *)perf->fields.actorcamera;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (BattleMoviePlayer_o *)UnityEngine_Object__op_Implicit(actorcamera, 0);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    v5 = v2->fields.perf;
    if ( v5 )
    {
      this = (BattleMoviePlayer_o *)v5->fields.actorcamera;
      if ( this )
      {
        fieldOfView = UnityEngine_Camera__get_fieldOfView((UnityEngine_Camera_o *)this, 0);
        v7 = BattleMoviePlayer_TypeInfo;
        goto LABEL_13;
      }
    }
LABEL_16:
    sub_1C372B4(this);
  }
  v7 = BattleMoviePlayer_TypeInfo;
  if ( !BattleMoviePlayer_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleMoviePlayer_TypeInfo);
    v7 = BattleMoviePlayer_TypeInfo;
  }
  fieldOfView = v7->static_fields->DefaultFov;
LABEL_13:
  if ( !v7->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v7);
    v7 = BattleMoviePlayer_TypeInfo;
  }
  return fieldOfView > v7->static_fields->DefaultFov;
}


bool BattleMoviePlayer__IsPausedMovie(BattleMoviePlayer_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *currMovieObj; // x20
  UnityEngine_GameObject_o *Component_object; // x0

  if ( (byte_4C45AF4 & 1) == 0 )
  {
    sub_1C37058(&Method_UnityEngine_GameObject_GetComponent_CriManaMovieController___);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C45AF4 = 1;
  }
  currMovieObj = (UnityEngine_Object_o *)this->fields.currMovieObj;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(currMovieObj, 0, 0) )
    return 0;
  Component_object = this->fields.currMovieObj;
  if ( !Component_object
    || (Component_object = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                         Component_object,
                                                         (const MethodInfo_313F1D8 *)Method_UnityEngine_GameObject_GetComponent_CriManaMovieController___)) == 0
    || (Component_object = (UnityEngine_GameObject_o *)Component_object[2].monitor) == 0 )
  {
    sub_1C372B4(Component_object);
  }
  return CriMana_Player__IsPaused((CriMana_Player_o *)Component_object, 0);
}


void BattleMoviePlayer__PauseMovie(BattleMoviePlayer_o *this, bool v, const MethodInfo *method)
{
  UnityEngine_Object_o *currMovieObj; // x21
  Il2CppObject *Component_object; // x0
  UnityEngine_GameObject_o *v7; // x21
  System_Collections_Generic_List_T__o *MovieInfoList; // x22
  BattleMoviePlayer___c_c *v9; // x0
  System_Func_object__bool__o *_9__36_0; // x23
  Il2CppObject *v11; // x24
  struct BattleMoviePlayer___c_StaticFields *static_fields; // x0
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  const MethodInfo *v15; // x2

  if ( (byte_4C45AF3 & 1) == 0 )
  {
    sub_1C37058(&Method_BasicHelper_Any_BattleMoviePlayer_MovieInfo___);
    sub_1C37058(&System_Func_BattleMoviePlayer_MovieInfo__bool__TypeInfo);
    sub_1C37058(&Method_UnityEngine_GameObject_GetComponent_CriManaMovieController___);
    sub_1C37058(&Method_UnityEngine_GameObject_GetComponent_MeshRenderer___);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&Method_BattleMoviePlayer___c__PauseMovie_b__36_0__);
    sub_1C37058(&BattleMoviePlayer___c_TypeInfo);
    byte_4C45AF3 = 1;
  }
  currMovieObj = (UnityEngine_Object_o *)this->fields.currMovieObj;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  Component_object = (Il2CppObject *)UnityEngine_Object__op_Equality(currMovieObj, 0, 0);
  if ( ((unsigned __int8)Component_object & 1) == 0 )
  {
    v7 = this->fields.currMovieObj;
    if ( !v7 )
      goto LABEL_19;
    Component_object = UnityEngine_GameObject__GetComponent_object_(
                         this->fields.currMovieObj,
                         (const MethodInfo_313F1D8 *)Method_UnityEngine_GameObject_GetComponent_CriManaMovieController___);
    if ( !Component_object )
      goto LABEL_19;
    Component_object = (Il2CppObject *)Component_object[3].monitor;
    if ( !Component_object )
      goto LABEL_19;
    CriMana_Player__Pause((CriMana_Player_o *)Component_object, v, 0);
    MovieInfoList = (System_Collections_Generic_List_T__o *)this->fields.MovieInfoList;
    v9 = BattleMoviePlayer___c_TypeInfo;
    if ( !BattleMoviePlayer___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleMoviePlayer___c_TypeInfo);
      v9 = BattleMoviePlayer___c_TypeInfo;
    }
    _9__36_0 = (System_Func_object__bool__o *)v9->static_fields->__9__36_0;
    if ( !_9__36_0 )
    {
      if ( !v9->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v9);
        v9 = BattleMoviePlayer___c_TypeInfo;
      }
      v11 = (Il2CppObject *)v9->static_fields->__9;
      _9__36_0 = (System_Func_object__bool__o *)sub_1C372A4(System_Func_BattleMoviePlayer_MovieInfo__bool__TypeInfo);
      System_Func_object__bool____ctor(_9__36_0, v11, Method_BattleMoviePlayer___c__PauseMovie_b__36_0__, 0);
      static_fields = BattleMoviePlayer___c_TypeInfo->static_fields;
      static_fields->__9__36_0 = (struct System_Func_BattleMoviePlayer_MovieInfo__bool__o *)_9__36_0;
      sub_1C36FFC((CGThumbnailListItem_o *)&static_fields->__9__36_0, (int32_t)_9__36_0, v13, v14);
    }
    if ( BasicHelper__Any_object_(
           MovieInfoList,
           (System_Func_T__bool__o *)_9__36_0,
           (const MethodInfo_30D0FF8 *)Method_BasicHelper_Any_BattleMoviePlayer_MovieInfo___) )
    {
      BattleMoviePlayer__ShowBg(this, v, v15);
    }
    Component_object = UnityEngine_GameObject__GetComponent_object_(
                         v7,
                         (const MethodInfo_313F1D8 *)Method_UnityEngine_GameObject_GetComponent_MeshRenderer___);
    if ( !Component_object )
LABEL_19:
      sub_1C372B4(Component_object);
    UnityEngine_Renderer__set_enabled((UnityEngine_Renderer_o *)Component_object, !v, 0);
  }
}


System_Collections_IEnumerator_o *BattleMoviePlayer__PlayMovie(
        BattleMoviePlayer_o *this,
        UnityEngine_GameObject_o *movieObj,
        int32_t num,
        const MethodInfo *method)
{
  __int64 v7; // x22
  __int64 v8; // x0
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  int32_t v11; // w2
  const MethodInfo *v12; // x3

  if ( (byte_4C45AF7 & 1) == 0 )
  {
    sub_1C37058(&BattleMoviePlayer__PlayMovie_d__44_TypeInfo);
    byte_4C45AF7 = 1;
  }
  v7 = sub_1C372A4(BattleMoviePlayer__PlayMovie_d__44_TypeInfo);
  BattleMoviePlayer__PlayMovie_d__44___ctor((BattleMoviePlayer__PlayMovie_d__44_o *)v7, 0, 0);
  if ( !v7 )
    sub_1C372B4(v8);
  *(_QWORD *)(v7 + 32) = this;
  sub_1C36FFC((CGThumbnailListItem_o *)(v7 + 32), (int32_t)this, v9, v10);
  *(_QWORD *)(v7 + 40) = movieObj;
  sub_1C36FFC((CGThumbnailListItem_o *)(v7 + 40), (int32_t)movieObj, v11, v12);
  *(_DWORD *)(v7 + 48) = num;
  return (System_Collections_IEnumerator_o *)v7;
}


System_Collections_IEnumerator_o *BattleMoviePlayer__PlayMovieFadeOut(
        BattleMoviePlayer_o *this,
        UnityEngine_GameObject_o *movieObj,
        int32_t num,
        bool forceFadeout,
        const MethodInfo *method)
{
  __int64 v9; // x23
  __int64 v10; // x0
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  int32_t v13; // w2
  const MethodInfo *v14; // x3

  if ( (byte_4C45AF8 & 1) == 0 )
  {
    sub_1C37058(&BattleMoviePlayer__PlayMovieFadeOut_d__45_TypeInfo);
    byte_4C45AF8 = 1;
  }
  v9 = sub_1C372A4(BattleMoviePlayer__PlayMovieFadeOut_d__45_TypeInfo);
  BattleMoviePlayer__PlayMovieFadeOut_d__45___ctor((BattleMoviePlayer__PlayMovieFadeOut_d__45_o *)v9, 0, 0);
  if ( !v9 )
    sub_1C372B4(v10);
  *(_QWORD *)(v9 + 40) = this;
  sub_1C36FFC((CGThumbnailListItem_o *)(v9 + 40), (int32_t)this, v11, v12);
  *(_QWORD *)(v9 + 32) = movieObj;
  sub_1C36FFC((CGThumbnailListItem_o *)(v9 + 32), (int32_t)movieObj, v13, v14);
  *(_DWORD *)(v9 + 48) = num;
  *(_BYTE *)(v9 + 52) = forceFadeout;
  return (System_Collections_IEnumerator_o *)v9;
}


void BattleMoviePlayer__ShowBg(BattleMoviePlayer_o *this, bool v, const MethodInfo *method)
{
  BattleMoviePlayer_o *v3; // x19
  struct BattlePerformance_o *perf; // x8
  UnityEngine_Camera_o *actorcamera; // x19
  int32_t v6; // w1
  struct BattlePerformance_o *v7; // x8

  v3 = this;
  if ( !v )
  {
    perf = this->fields.perf;
    if ( perf )
    {
      actorcamera = perf->fields.actorcamera;
      if ( actorcamera )
      {
        v6 = UnityEngine_Camera__get_cullingMask(perf->fields.actorcamera, 0) & 0xFFEFFFFF;
LABEL_12:
        UnityEngine_Camera__set_cullingMask(actorcamera, v6, 0);
        return;
      }
    }
LABEL_13:
    sub_1C372B4(this);
  }
  if ( this->fields.IsBackMovie )
    goto LABEL_9;
  this = (BattleMoviePlayer_o *)this->fields.perf;
  if ( !this )
    goto LABEL_13;
  this = (BattleMoviePlayer_o *)BattlePerformance__IsExistBackMovie((BattlePerformance_o *)this, 0);
  if ( ((unsigned __int8)this & 1) == 0 )
  {
LABEL_9:
    v7 = v3->fields.perf;
    if ( v7 )
    {
      actorcamera = v7->fields.actorcamera;
      if ( actorcamera )
      {
        v6 = UnityEngine_Camera__get_cullingMask(v7->fields.actorcamera, 0) | 0x100000;
        goto LABEL_12;
      }
    }
    goto LABEL_13;
  }
}


System_Collections_IEnumerator_o *BattleMoviePlayer__StartMovie(BattleMoviePlayer_o *this, const MethodInfo *method)
{
  __int64 v3; // x20
  __int64 v4; // x0
  int32_t v5; // w2
  const MethodInfo *v6; // x3

  if ( (byte_4C45AF2 & 1) == 0 )
  {
    sub_1C37058(&BattleMoviePlayer__StartMovie_d__35_TypeInfo);
    byte_4C45AF2 = 1;
  }
  v3 = sub_1C372A4(BattleMoviePlayer__StartMovie_d__35_TypeInfo);
  BattleMoviePlayer__StartMovie_d__35___ctor((BattleMoviePlayer__StartMovie_d__35_o *)v3, 0, 0);
  if ( !v3 )
    sub_1C372B4(v4);
  *(_QWORD *)(v3 + 32) = this;
  sub_1C36FFC((CGThumbnailListItem_o *)(v3 + 32), (int32_t)this, v5, v6);
  return (System_Collections_IEnumerator_o *)v3;
}


bool BattleMoviePlayer__get_ForceFadeout(BattleMoviePlayer_o *this, const MethodInfo *method)
{
  return this->fields._ForceFadeout_k__BackingField;
}


bool BattleMoviePlayer__get_UseDepth(BattleMoviePlayer_o *this, const MethodInfo *method)
{
  return this->fields._UseDepth_k__BackingField;
}


void BattleMoviePlayer__set_ForceFadeout(BattleMoviePlayer_o *this, bool value, const MethodInfo *method)
{
  this->fields._ForceFadeout_k__BackingField = value;
}


void BattleMoviePlayer_MovieInfo___ctor(
        BattleMoviePlayer_MovieInfo_o *this,
        int32_t type,
        System_String_o *path,
        float valid,
        float fade,
        int32_t cam,
        float speed,
        UnityEngine_Events_UnityEvent_o *eff,
        float effRest,
        bool ignoreTmScl,
        float fadein,
        bool lp,
        bool backMovie,
        const MethodInfo *method)
{
  bool v24; // w24
  bool v25; // w25
  bool v26; // w26
  int32_t v27; // w2
  const MethodInfo *v28; // x3
  int32_t v29; // w2
  const MethodInfo *v30; // x3

  v24 = ignoreTmScl;
  v25 = lp;
  v26 = backMovie;
  this->fields.playSpeed = 1.0;
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.pathType = type;
  this->fields.moviePath = path;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.moviePath, (int32_t)path, v27, v28);
  this->fields.effectEvent = eff;
  this->fields.validTime = valid;
  this->fields.fadeRestTime = fade;
  this->fields.cameraType = cam;
  this->fields.playSpeed = speed;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.effectEvent, (int32_t)eff, v29, v30);
  this->fields.effectRestTime = effRest;
  this->fields.ignoreTimeScale = v24;
  this->fields.fadeinTime = fadein;
  this->fields.loop = v25;
  this->fields.isBackMovie = v26;
}


float BattleMoviePlayer_MovieInfo__GetTimeScale(BattleMoviePlayer_MovieInfo_o *this, const MethodInfo *method)
{
  if ( this->fields.ignoreTimeScale )
    return 1.0;
  else
    return UnityEngine_Time__get_timeScale(0);
}


bool BattleMoviePlayer_MovieInfo__get_UsePlayMakerShakeParam(
        BattleMoviePlayer_MovieInfo_o *this,
        const MethodInfo *method)
{
  return this->fields._UsePlayMakerShakeParam_k__BackingField;
}


void BattleMoviePlayer_MovieInfo__set_UsePlayMakerShakeParam(
        BattleMoviePlayer_MovieInfo_o *this,
        bool value,
        const MethodInfo *method)
{
  this->fields._UsePlayMakerShakeParam_k__BackingField = value;
}


void BattleMoviePlayer__FadeoutDeleteMovie_d__38___ctor(
        BattleMoviePlayer__FadeoutDeleteMovie_d__38_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.__1__state = 1__state;
}


bool BattleMoviePlayer__FadeoutDeleteMovie_d__38__MoveNext(
        BattleMoviePlayer__FadeoutDeleteMovie_d__38_o *this,
        const MethodInfo *method)
{
  BattleMoviePlayer__FadeoutDeleteMovie_d__38_o *v2; // x19
  int32_t _1__state; // w8
  BattleMoviePlayer_o *_4__this; // x20
  UnityEngine_Object_o *currMovieObj; // x21
  System_Collections_IEnumerator_o *v6; // x0
  System_Collections_Generic_List_T__o *MovieInfoList; // x22
  System_Collections_IEnumerator_o *v8; // x21
  BattleMoviePlayer___c_c *v9; // x8
  System_Func_object__bool__o *_9__38_0; // x23
  Il2CppObject *v11; // x24
  struct BattleMoviePlayer___c_StaticFields *static_fields; // x0
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  UnityEngine_Coroutine_o *started; // x0
  CGThumbnailListItem_o *p__2__current; // x19
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  BattlePerformance_o *perf; // x0
  struct System_Action_o *FadeOuted; // x8

  v2 = this;
  if ( (byte_4C45AFE & 1) == 0 )
  {
    sub_1C37058(&Method_BasicHelper_Any_BattleMoviePlayer_MovieInfo___);
    sub_1C37058(&System_Func_BattleMoviePlayer_MovieInfo__bool__TypeInfo);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&Method_BattleMoviePlayer___c__FadeoutDeleteMovie_b__38_0__);
    this = (BattleMoviePlayer__FadeoutDeleteMovie_d__38_o *)sub_1C37058(&BattleMoviePlayer___c_TypeInfo);
    byte_4C45AFE = 1;
  }
  _1__state = v2->fields.__1__state;
  _4__this = v2->fields.__4__this;
  if ( _1__state != 1 )
  {
    if ( _1__state )
      goto LABEL_23;
    v2->fields.__1__state = -1;
    if ( _4__this )
    {
      currMovieObj = (UnityEngine_Object_o *)_4__this->fields.currMovieObj;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(currMovieObj, 0, 0) )
      {
        v6 = BattleMoviePlayer__PlayMovieFadeOut(
               _4__this,
               _4__this->fields.currMovieObj,
               _4__this->fields.currentMovieNum,
               1,
               0);
        MovieInfoList = (System_Collections_Generic_List_T__o *)_4__this->fields.MovieInfoList;
        v8 = v6;
        v9 = BattleMoviePlayer___c_TypeInfo;
        if ( !BattleMoviePlayer___c_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BattleMoviePlayer___c_TypeInfo);
          v9 = BattleMoviePlayer___c_TypeInfo;
        }
        _9__38_0 = (System_Func_object__bool__o *)v9->static_fields->__9__38_0;
        if ( !_9__38_0 )
        {
          if ( !v9->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v9);
            v9 = BattleMoviePlayer___c_TypeInfo;
          }
          v11 = (Il2CppObject *)v9->static_fields->__9;
          _9__38_0 = (System_Func_object__bool__o *)sub_1C372A4(System_Func_BattleMoviePlayer_MovieInfo__bool__TypeInfo);
          System_Func_object__bool____ctor(_9__38_0, v11, Method_BattleMoviePlayer___c__FadeoutDeleteMovie_b__38_0__, 0);
          static_fields = BattleMoviePlayer___c_TypeInfo->static_fields;
          static_fields->__9__38_0 = (struct System_Func_BattleMoviePlayer_MovieInfo__bool__o *)_9__38_0;
          sub_1C36FFC((CGThumbnailListItem_o *)&static_fields->__9__38_0, (int32_t)_9__38_0, v13, v14);
        }
        if ( BasicHelper__Any_object_(
               MovieInfoList,
               (System_Func_T__bool__o *)_9__38_0,
               (const MethodInfo_30D0FF8 *)Method_BasicHelper_Any_BattleMoviePlayer_MovieInfo___) )
        {
          BattleMoviePlayer__ShowBg(_4__this, 1, 0);
        }
        started = UnityEngine_MonoBehaviour__StartCoroutine_71252324((UnityEngine_MonoBehaviour_o *)_4__this, v8, 0);
        v2->fields.__2__current = (Il2CppObject *)started;
        p__2__current = (CGThumbnailListItem_o *)&v2->fields.__2__current;
        sub_1C36FFC(p__2__current, (int32_t)started, v17, v18);
        LOBYTE(perf) = 1;
        LODWORD(p__2__current[-1].fields._ThumbnailSpritePath_k__BackingField) = 1;
        return (char)perf;
      }
LABEL_23:
      LOBYTE(perf) = 0;
      return (char)perf;
    }
LABEL_25:
    sub_1C372B4(this);
  }
  v2->fields.__1__state = -1;
  if ( !_4__this )
    goto LABEL_25;
  BattleMoviePlayer__Dispose(_4__this, 0);
  FadeOuted = v2->fields.FadeOuted;
  if ( FadeOuted )
    ((void (__fastcall *)(intptr_t, intptr_t))FadeOuted->fields.invoke_impl)(
      FadeOuted->fields.method_code,
      FadeOuted->fields.method);
  perf = _4__this->fields.perf;
  if ( perf )
  {
    BattlePerformance__OnBattleMovieEnd(perf, 0);
    goto LABEL_23;
  }
  return (char)perf;
}


Il2CppObject *BattleMoviePlayer__FadeoutDeleteMovie_d__38__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        BattleMoviePlayer__FadeoutDeleteMovie_d__38_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __noreturn BattleMoviePlayer__FadeoutDeleteMovie_d__38__System_Collections_IEnumerator_Reset(
        BattleMoviePlayer__FadeoutDeleteMovie_d__38_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1C3706C(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C372A4(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1C3706C(&Method_BattleMoviePlayer__FadeoutDeleteMovie_d__38_System_Collections_IEnumerator_Reset__);
  sub_1C37180(v3, v4);
}


Il2CppObject *BattleMoviePlayer__FadeoutDeleteMovie_d__38__System_Collections_IEnumerator_get_Current(
        BattleMoviePlayer__FadeoutDeleteMovie_d__38_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void BattleMoviePlayer__FadeoutDeleteMovie_d__38__System_IDisposable_Dispose(
        BattleMoviePlayer__FadeoutDeleteMovie_d__38_o *this,
        const MethodInfo *method)
{
  ;
}


void BattleMoviePlayer__GetMoviePanelFirst_d__30___ctor(
        BattleMoviePlayer__GetMoviePanelFirst_d__30_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.__1__state = 1__state;
}


bool BattleMoviePlayer__GetMoviePanelFirst_d__30__MoveNext(
        BattleMoviePlayer__GetMoviePanelFirst_d__30_o *this,
        const MethodInfo *method)
{
  BattleMoviePlayer__GetMoviePanelFirst_d__30_o *v2; // x21
  struct BattleMoviePlayer_o *_4__this; // x19
  Il2CppObject **p_perf; // x20
  UnityEngine_Object_o *perf; // x22
  UnityEngine_Object_o *performance; // x22
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  struct BattlePerformance_o *v9; // x1
  UnityEngine_Object_o *v10; // x21
  Il2CppObject *Component_object; // x0
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  UnityEngine_Object_o *v14; // x20
  Il2CppObject *v15; // x0
  UnityEngine_GameObject_o *v16; // x0
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  Il2CppObject *Item; // x0
  UnityEngine_GameObject_o *BattleMoviePanel; // x0
  int32_t v21; // w2
  const MethodInfo *v22; // x3

  v2 = this;
  if ( (byte_4C45AFF & 1) == 0 )
  {
    sub_1C37058(&Method_UnityEngine_GameObject_GetComponent_BattlePerformance___);
    sub_1C37058(&Method_System_Collections_Generic_List_BattleMoviePlayer_MovieInfo__get_Count__);
    sub_1C37058(&Method_System_Collections_Generic_List_BattleMoviePlayer_MovieInfo__get_Item__);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    this = (BattleMoviePlayer__GetMoviePanelFirst_d__30_o *)sub_1C37058(&StringLiteral_10602/*"Performance"*/);
    byte_4C45AFF = 1;
  }
  if ( !v2->fields.__1__state )
  {
    _4__this = v2->fields.__4__this;
    v2->fields.__1__state = -1;
    if ( !_4__this )
      goto LABEL_25;
    p_perf = (Il2CppObject **)&_4__this->fields.perf;
    perf = (UnityEngine_Object_o *)_4__this->fields.perf;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( !UnityEngine_Object__op_Equality(perf, 0, 0) )
      goto LABEL_19;
    performance = (UnityEngine_Object_o *)v2->fields.performance;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(performance, 0, 0) )
    {
      v9 = v2->fields.performance;
      *p_perf = (Il2CppObject *)v9;
      sub_1C36FFC((CGThumbnailListItem_o *)&_4__this->fields.perf, (int32_t)v9, v7, v8);
    }
    v10 = (UnityEngine_Object_o *)*p_perf;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( !UnityEngine_Object__op_Equality(v10, 0, 0) )
      goto LABEL_19;
    this = (BattleMoviePlayer__GetMoviePanelFirst_d__30_o *)UnityEngine_GameObject__Find(
                                                              (System_String_o *)StringLiteral_10602/*"Performance"*/,
                                                              0);
    if ( !this )
      goto LABEL_25;
    Component_object = UnityEngine_GameObject__GetComponent_object_(
                         (UnityEngine_GameObject_o *)this,
                         (const MethodInfo_313F1D8 *)Method_UnityEngine_GameObject_GetComponent_BattlePerformance___);
    *p_perf = Component_object;
    sub_1C36FFC((CGThumbnailListItem_o *)&_4__this->fields.perf, (int32_t)Component_object, v12, v13);
    v14 = (UnityEngine_Object_o *)*p_perf;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( !UnityEngine_Object__op_Equality(v14, 0, 0) )
    {
LABEL_19:
      this = (BattleMoviePlayer__GetMoviePanelFirst_d__30_o *)_4__this->fields.MovieInfoList;
      if ( this )
      {
        if ( SLODWORD(this->fields.__2__current) < 1
          || (v15 = System_Collections_Generic_List_object___get_Item(
                      (System_Collections_Generic_List_object__o *)this,
                      0,
                      (const MethodInfo_37A2D54 *)Method_System_Collections_Generic_List_BattleMoviePlayer_MovieInfo__get_Item__),
              v16 = BattleMoviePlayer__CreateBattleMoviePanel(_4__this, (BattleMoviePlayer_MovieInfo_o *)v15, 0, 0),
              _4__this->fields.currMovieObj = v16,
              sub_1C36FFC((CGThumbnailListItem_o *)&_4__this->fields.currMovieObj, (int32_t)v16, v17, v18),
              (this = (BattleMoviePlayer__GetMoviePanelFirst_d__30_o *)_4__this->fields.MovieInfoList) != 0) )
        {
          if ( SLODWORD(this->fields.__2__current) > 1 )
          {
            Item = System_Collections_Generic_List_object___get_Item(
                     (System_Collections_Generic_List_object__o *)this,
                     1,
                     (const MethodInfo_37A2D54 *)Method_System_Collections_Generic_List_BattleMoviePlayer_MovieInfo__get_Item__);
            BattleMoviePanel = BattleMoviePlayer__CreateBattleMoviePanel(
                                 _4__this,
                                 (BattleMoviePlayer_MovieInfo_o *)Item,
                                 1,
                                 0);
            _4__this->fields.nextMovieObj = BattleMoviePanel;
            sub_1C36FFC((CGThumbnailListItem_o *)&_4__this->fields.nextMovieObj, (int32_t)BattleMoviePanel, v21, v22);
          }
          return 0;
        }
      }
LABEL_25:
      sub_1C372B4(this);
    }
  }
  return 0;
}


Il2CppObject *BattleMoviePlayer__GetMoviePanelFirst_d__30__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        BattleMoviePlayer__GetMoviePanelFirst_d__30_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __noreturn BattleMoviePlayer__GetMoviePanelFirst_d__30__System_Collections_IEnumerator_Reset(
        BattleMoviePlayer__GetMoviePanelFirst_d__30_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1C3706C(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C372A4(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1C3706C(&Method_BattleMoviePlayer__GetMoviePanelFirst_d__30_System_Collections_IEnumerator_Reset__);
  sub_1C37180(v3, v4);
}


Il2CppObject *BattleMoviePlayer__GetMoviePanelFirst_d__30__System_Collections_IEnumerator_get_Current(
        BattleMoviePlayer__GetMoviePanelFirst_d__30_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void BattleMoviePlayer__GetMoviePanelFirst_d__30__System_IDisposable_Dispose(
        BattleMoviePlayer__GetMoviePanelFirst_d__30_o *this,
        const MethodInfo *method)
{
  ;
}


void BattleMoviePlayer__PlayMovieFadeOut_d__45___ctor(
        BattleMoviePlayer__PlayMovieFadeOut_d__45_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.__1__state = 1__state;
}


// local variable allocation has failed, the output may be wrong!
bool BattleMoviePlayer__PlayMovieFadeOut_d__45__MoveNext(
        BattleMoviePlayer__PlayMovieFadeOut_d__45_o *this,
        const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  BattleMoviePlayer__PlayMovieFadeOut_d__45_o *v4; // x19
  int32_t _1__state; // w8
  struct BattleMoviePlayer_o *_4__this; // x20
  UnityEngine_Object_o *movieObj; // x21
  struct CriManaMovieController_o *v8; // x8
  UnityEngine_Material_o *material; // x0
  BattleMoviePlayer__PlayMovieFadeOut_d__45_o **p_movieMaterial_5__2; // x21
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  Il2CppObject *Item; // x0
  struct BattleMoviePlayer_MovieInfo_o **v14; // x22
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  struct BattleMoviePlayer_MovieInfo_o *v17; // x8
  float validTime; // s8
  struct CriManaMovieController_o *v19; // x8
  float effectRestTime; // s0
  struct CriManaMovieController_o *v21; // x8
  _BOOL4 forceFadeout; // w8
  struct BattleMoviePlayer_MovieInfo_o *v23; // x8
  struct CriManaMovieController_o *currController; // x8
  CriMana_Player_o *player_k__BackingField; // x0
  int32_t num; // w8
  struct System_Collections_Generic_List_BattleMoviePlayer_MovieInfo__o *MovieInfoList; // x9
  struct BattleMoviePlayer_MovieInfo_o *movInfo_5__3; // x8
  float v29; // s0
  float v30; // s1
  bool v31; // nf
  float v32; // s0
  struct BattleMoviePlayer_MovieInfo_o *v33; // x8
  float restTime_5__6; // s8
  float timeScale; // s0
  float *monitor; // x9
  struct BattlePerformance_o *perf; // x8
  float v38; // w10
  __int64 v39; // x9
  struct BattlePerformance_o *v40; // x8
  float x; // s8
  float y; // s9
  float z; // s10
  char v44; // w22
  float v45; // s11
  float v46; // s12
  float v47; // s13
  BattleMoviePlayer__PlayMovieFadeOut_d__45_o *v48; // x21
  float v49; // s0
  int32_t v50; // w2
  float *v51; // x9
  float v52; // s8
  float v53; // s9
  float v54; // s10
  float v55; // s0
  BattleMoviePlayer_c *v56; // x8
  struct BattlePerformance_o *v57; // x8
  BattleMoviePlayer__PlayMovieFadeOut_d__45_o *v58; // x21
  float v59; // s4
  float v60; // s2
  float v61; // s8
  float v62; // s9
  float v63; // s10
  bool IsBossCamera; // w22
  BattleMoviePlayer_c *v65; // x8
  struct BattleMoviePlayer_StaticFields *static_fields; // x8
  float v67; // s11
  float v68; // s12
  float v69; // s13
  float v70; // s0
  float v71; // s0
  float v72; // s2
  float v73; // s1
  float v74; // s0 OVERLAPPED
  CGThumbnailListItem_o *p__2__current; // x19
  bool result; // w0
  BattleMoviePlayer__PlayMovieFadeOut_d__45_o **p_movInfo_5__3; // x21
  int32_t v78; // w2
  const MethodInfo *v79; // x3
  int32_t v80; // w2
  const MethodInfo *v81; // x3
  UnityEngine_Object_o *v82; // x19
  float v83; // s11
  float v84; // s12
  float v85; // s13
  UnityEngine_Vector3_o v86; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v87; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v88; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o position; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v90; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v91; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v92; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v93; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v94; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v95; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v96; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v97; // 0:s0.4,4:s1.4,8:s2.4

  v4 = this;
  if ( (byte_4C45B01 & 1) == 0 )
  {
    sub_1C37058(&BattleMoviePlayer_TypeInfo);
    sub_1C37058(&Method_UnityEngine_GameObject_GetComponent_MeshRenderer___);
    sub_1C37058(&Method_System_Collections_Generic_List_GameObject__Remove__);
    sub_1C37058(&Method_System_Collections_Generic_List_BattleMoviePlayer_MovieInfo__get_Count__);
    sub_1C37058(&Method_System_Collections_Generic_List_BattleMoviePlayer_MovieInfo__get_Item__);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&StringLiteral_16420/*"_ZWriteMode"*/);
    sub_1C37058(&StringLiteral_16419/*"_ZTestMode"*/);
    this = (BattleMoviePlayer__PlayMovieFadeOut_d__45_o *)sub_1C37058(&StringLiteral_16385/*"_Transparency"*/);
    byte_4C45B01 = 1;
  }
  _1__state = v4->fields.__1__state;
  _4__this = v4->fields.__4__this;
  if ( _1__state == 1 )
  {
    v4->fields.__1__state = -1;
    if ( !_4__this )
      goto LABEL_121;
    currController = _4__this->fields.currController;
    if ( !currController )
      goto LABEL_121;
    player_k__BackingField = currController->fields._player_k__BackingField;
    if ( !player_k__BackingField )
      goto LABEL_105;
    this = (BattleMoviePlayer__PlayMovieFadeOut_d__45_o *)CriMana_Player__GetDisplayedFrameNo(player_k__BackingField, 0);
    if ( v4->fields._effectTime_5__4 <= (float)(int)this )
    {
      this = (BattleMoviePlayer__PlayMovieFadeOut_d__45_o *)v4->fields._movInfo_5__3;
      if ( !this )
        goto LABEL_121;
      if ( *(_QWORD *)&this->fields.num )
      {
        UnityEngine_Events_UnityEvent__Invoke(*(UnityEngine_Events_UnityEvent_o **)&this->fields.num, 0);
        this = (BattleMoviePlayer__PlayMovieFadeOut_d__45_o *)v4->fields._movInfo_5__3;
        if ( !this )
          goto LABEL_121;
      }
      *(_QWORD *)&this->fields.num = 0;
      sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.num, 0, v2, v3);
    }
    num = v4->fields.num;
    if ( num < 0 )
      goto LABEL_61;
    MovieInfoList = _4__this->fields.MovieInfoList;
    if ( !MovieInfoList )
      goto LABEL_121;
    if ( num >= MovieInfoList->fields._size )
    {
LABEL_61:
      v4->fields._pastError_5__5 = 1;
LABEL_105:
      p_movInfo_5__3 = (BattleMoviePlayer__PlayMovieFadeOut_d__45_o **)&v4->fields._movInfo_5__3;
      this = (BattleMoviePlayer__PlayMovieFadeOut_d__45_o *)v4->fields._movInfo_5__3;
      if ( !this )
        goto LABEL_121;
      if ( *(_QWORD *)&this->fields.num )
      {
        UnityEngine_Events_UnityEvent__Invoke(*(UnityEngine_Events_UnityEvent_o **)&this->fields.num, 0);
        this = *p_movInfo_5__3;
        if ( !*p_movInfo_5__3 )
          goto LABEL_121;
      }
      *(_QWORD *)&this->fields.num = 0;
      sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.num, 0, v2, v3);
      if ( !v4->fields._pastError_5__5 )
      {
        this = (BattleMoviePlayer__PlayMovieFadeOut_d__45_o *)v4->fields._movieMaterial_5__2;
        if ( !this )
          goto LABEL_121;
        UnityEngine_Material__SetInt((UnityEngine_Material_o *)this, (System_String_o *)StringLiteral_16419/*"_ZTestMode"*/, 4, 0);
        this = (BattleMoviePlayer__PlayMovieFadeOut_d__45_o *)v4->fields._movieMaterial_5__2;
        if ( !this )
          goto LABEL_121;
        UnityEngine_Material__SetFloat((UnityEngine_Material_o *)this, (System_String_o *)StringLiteral_16385/*"_Transparency"*/, 1.0, 0);
      }
      v4->fields._movieMaterial_5__2 = 0;
      sub_1C36FFC((CGThumbnailListItem_o *)&v4->fields._movieMaterial_5__2, 0, v78, v79);
      v4->fields._movInfo_5__3 = 0;
      sub_1C36FFC((CGThumbnailListItem_o *)&v4->fields._movInfo_5__3, 0, v80, v81);
      goto LABEL_113;
    }
    movInfo_5__3 = v4->fields._movInfo_5__3;
    if ( !movInfo_5__3 )
      goto LABEL_121;
    this = (BattleMoviePlayer__PlayMovieFadeOut_d__45_o *)v4->fields._movieMaterial_5__2;
    if ( !this )
      goto LABEL_121;
    v29 = 1.0 - (float)(v4->fields._restTime_5__6 / movInfo_5__3->fields.fadeRestTime);
    v30 = fminf(v29, 1.0);
    v31 = v29 < 0.0;
    v32 = 0.0;
    if ( !v31 )
      v32 = v30;
    UnityEngine_Material__SetFloat((UnityEngine_Material_o *)this, (System_String_o *)StringLiteral_16385/*"_Transparency"*/, v32, 0);
    v33 = v4->fields._movInfo_5__3;
    if ( !v33 )
      goto LABEL_121;
    restTime_5__6 = v4->fields._restTime_5__6;
    timeScale = 1.0;
    if ( !v33->fields.ignoreTimeScale )
    {
      timeScale = UnityEngine_Time__get_timeScale(0);
      v33 = v4->fields._movInfo_5__3;
      if ( !v33 )
        goto LABEL_121;
    }
    v4->fields._restTime_5__6 = restTime_5__6 - (float)(timeScale * v33->fields.playSpeed);
    if ( _4__this->fields.KeepStartPosition )
    {
      if ( v33->fields._UsePlayMakerShakeParam_k__BackingField )
      {
        this = (BattleMoviePlayer__PlayMovieFadeOut_d__45_o *)BattleMoviePlayer_TypeInfo;
        if ( !BattleMoviePlayer_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BattleMoviePlayer_TypeInfo);
          this = (BattleMoviePlayer__PlayMovieFadeOut_d__45_o *)BattleMoviePlayer_TypeInfo;
        }
        monitor = (float *)this[2].monitor;
        perf = _4__this->fields.perf;
        v38 = monitor[6];
        v39 = *((_QWORD *)monitor + 2);
        _4__this->fields.startPanelPosition.fields.z = v38;
        *(_QWORD *)&_4__this->fields.startPanelPosition.fields.x = v39;
        if ( !perf )
          goto LABEL_121;
        this = (BattleMoviePlayer__PlayMovieFadeOut_d__45_o *)perf->fields.actorcamera;
        if ( !this )
          goto LABEL_121;
        this = (BattleMoviePlayer__PlayMovieFadeOut_d__45_o *)UnityEngine_Component__get_transform(
                                                                (UnityEngine_Component_o *)this,
                                                                0);
        v40 = _4__this->fields.perf;
        if ( !v40 )
          goto LABEL_121;
        if ( !this )
          goto LABEL_121;
        v86 = UnityEngine_Transform__InverseTransformVector(
                (UnityEngine_Transform_o *)this,
                v40->fields._CurrentShakeWidth_k__BackingField,
                0);
        x = v86.fields.x;
        y = v86.fields.y;
        z = v86.fields.z;
        this = (BattleMoviePlayer__PlayMovieFadeOut_d__45_o *)BattleMoviePlayer__IsBossCamera(_4__this, 0);
        if ( !_4__this->fields.currController )
          goto LABEL_121;
        v44 = (char)this;
        this = (BattleMoviePlayer__PlayMovieFadeOut_d__45_o *)UnityEngine_Component__get_transform(
                                                                (UnityEngine_Component_o *)_4__this->fields.currController,
                                                                0);
        v45 = _4__this->fields.startPanelPosition.fields.x;
        v46 = _4__this->fields.startPanelPosition.fields.y;
        v47 = _4__this->fields.startPanelPosition.fields.z;
        v48 = this;
        if ( (v44 & 1) == 0 )
        {
          if ( !this )
            goto LABEL_121;
          v95.fields.z = z + v47;
          v95.fields.y = y + v46;
          v95.fields.x = x + v45;
          UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)this, v95, 0);
          goto LABEL_103;
        }
        this = (BattleMoviePlayer__PlayMovieFadeOut_d__45_o *)BattleMoviePlayer_TypeInfo;
        if ( !BattleMoviePlayer_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BattleMoviePlayer_TypeInfo);
          this = (BattleMoviePlayer__PlayMovieFadeOut_d__45_o *)BattleMoviePlayer_TypeInfo;
        }
        if ( !v48 )
          goto LABEL_121;
        v49 = *((float *)this[2].monitor + 3) / *((float *)this[2].monitor + 2);
        v87.fields.z = (float)(v47 * v49) + (float)(z * v49);
        v87.fields.y = (float)(v46 * v49) + (float)(y * v49);
        v87.fields.x = (float)(v45 * v49) + (float)(x * v49);
        UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)v48, v87, 0);
      }
      else
      {
        v57 = _4__this->fields.perf;
        if ( !v57 )
          goto LABEL_121;
        this = (BattleMoviePlayer__PlayMovieFadeOut_d__45_o *)v57->fields.actorcamera;
        if ( !this )
          goto LABEL_121;
        this = (BattleMoviePlayer__PlayMovieFadeOut_d__45_o *)UnityEngine_Component__get_transform(
                                                                (UnityEngine_Component_o *)this,
                                                                0);
        if ( !this )
          goto LABEL_121;
        v58 = this;
        position = UnityEngine_Transform__get_position((UnityEngine_Transform_o *)this, 0);
        position.fields.x = position.fields.x - _4__this->fields.cameraStartPosition.fields.x;
        position.fields.y = position.fields.y - _4__this->fields.cameraStartPosition.fields.y;
        position.fields.z = position.fields.z - _4__this->fields.cameraStartPosition.fields.z;
        v90 = UnityEngine_Transform__InverseTransformVector((UnityEngine_Transform_o *)v58, position, 0);
        v59 = fminf(v90.fields.z, 1.0);
        if ( v90.fields.z < -0.3 )
          v60 = -0.3;
        else
          v60 = v59;
        v91 = UnityEngine_Transform__TransformDirection((UnityEngine_Transform_o *)v58, v90, 0);
        v61 = v91.fields.x;
        v62 = v91.fields.y;
        v63 = v91.fields.z;
        IsBossCamera = BattleMoviePlayer__IsBossCamera(_4__this, 0);
        v65 = BattleMoviePlayer_TypeInfo;
        if ( !BattleMoviePlayer_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BattleMoviePlayer_TypeInfo);
          v65 = BattleMoviePlayer_TypeInfo;
        }
        static_fields = v65->static_fields;
        if ( !IsBossCamera )
        {
          v96 = UnityEngine_Transform__TransformPoint(
                  (UnityEngine_Transform_o *)v58,
                  static_fields->BasePanelPosition,
                  0);
          this = (BattleMoviePlayer__PlayMovieFadeOut_d__45_o *)_4__this->fields.currController;
          if ( !this )
            goto LABEL_121;
          v83 = v96.fields.x;
          v84 = v96.fields.y;
          v85 = v96.fields.z;
          this = (BattleMoviePlayer__PlayMovieFadeOut_d__45_o *)UnityEngine_Component__get_transform(
                                                                  (UnityEngine_Component_o *)this,
                                                                  0);
          if ( !this )
            goto LABEL_121;
          v97.fields.z = v85 - v63;
          v97.fields.y = v84 - v62;
          v97.fields.x = v83 - v61;
          UnityEngine_Transform__set_position((UnityEngine_Transform_o *)this, v97, 0);
          goto LABEL_103;
        }
        v92.fields.z = static_fields->BossPanelDist;
        v92.fields.x = 0.0;
        v92.fields.y = 0.0;
        v93 = UnityEngine_Transform__TransformPoint((UnityEngine_Transform_o *)v58, v92, 0);
        this = (BattleMoviePlayer__PlayMovieFadeOut_d__45_o *)_4__this->fields.currController;
        if ( !this )
          goto LABEL_121;
        v67 = v93.fields.x;
        v68 = v93.fields.y;
        v69 = v93.fields.z;
        this = (BattleMoviePlayer__PlayMovieFadeOut_d__45_o *)UnityEngine_Component__get_transform(
                                                                (UnityEngine_Component_o *)this,
                                                                0);
        if ( !this )
          goto LABEL_121;
        v70 = BattleMoviePlayer_TypeInfo->static_fields->BossPanelDist
            / BattleMoviePlayer_TypeInfo->static_fields->BaseDist;
        v94.fields.z = v69 - (float)(v63 * v70);
        v94.fields.y = v68 - (float)(v62 * v70);
        v94.fields.x = v67 - (float)(v61 * v70);
        UnityEngine_Transform__set_position((UnityEngine_Transform_o *)this, v94, 0);
      }
      this = (BattleMoviePlayer__PlayMovieFadeOut_d__45_o *)_4__this->fields.currController;
      if ( !this )
        goto LABEL_121;
      this = (BattleMoviePlayer__PlayMovieFadeOut_d__45_o *)UnityEngine_Component__get_transform(
                                                              (UnityEngine_Component_o *)this,
                                                              0);
      if ( !this )
        goto LABEL_121;
      v56 = BattleMoviePlayer_TypeInfo;
    }
    else
    {
      if ( !BattleMoviePlayer__IsBossCamera(_4__this, 0) )
      {
        this = (BattleMoviePlayer__PlayMovieFadeOut_d__45_o *)_4__this->fields.currController;
        if ( !this )
          goto LABEL_121;
        this = (BattleMoviePlayer__PlayMovieFadeOut_d__45_o *)UnityEngine_Component__get_transform(
                                                                (UnityEngine_Component_o *)this,
                                                                0);
        if ( !this )
          goto LABEL_121;
        UnityEngine_Transform__set_localPosition(
          (UnityEngine_Transform_o *)this,
          _4__this->fields.startPanelPosition,
          0);
        this = (BattleMoviePlayer__PlayMovieFadeOut_d__45_o *)_4__this->fields.currController;
        if ( !this )
          goto LABEL_121;
        this = (BattleMoviePlayer__PlayMovieFadeOut_d__45_o *)UnityEngine_Component__get_transform(
                                                                (UnityEngine_Component_o *)this,
                                                                0);
        if ( !this )
          goto LABEL_121;
        v73 = _4__this->fields.startPanelScale.fields.y;
        v72 = _4__this->fields.startPanelScale.fields.z;
        v74 = _4__this->fields.startPanelScale.fields.x;
        goto LABEL_102;
      }
      this = (BattleMoviePlayer__PlayMovieFadeOut_d__45_o *)BattleMoviePlayer_TypeInfo;
      if ( !BattleMoviePlayer_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BattleMoviePlayer_TypeInfo);
        this = (BattleMoviePlayer__PlayMovieFadeOut_d__45_o *)BattleMoviePlayer_TypeInfo;
      }
      if ( !_4__this->fields.currController )
        goto LABEL_121;
      v51 = (float *)this[2].monitor;
      v53 = v51[5];
      v52 = v51[6];
      v54 = v51[4];
      this = (BattleMoviePlayer__PlayMovieFadeOut_d__45_o *)UnityEngine_Component__get_transform(
                                                              (UnityEngine_Component_o *)_4__this->fields.currController,
                                                              0);
      if ( !this )
        goto LABEL_121;
      v55 = BattleMoviePlayer_TypeInfo->static_fields->BossPanelDist
          / BattleMoviePlayer_TypeInfo->static_fields->BaseDist;
      v88.fields.z = v52 * v55;
      v88.fields.y = v53 * v55;
      v88.fields.x = v54 * v55;
      UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)this, v88, 0);
      this = (BattleMoviePlayer__PlayMovieFadeOut_d__45_o *)_4__this->fields.currController;
      if ( !this )
        goto LABEL_121;
      this = (BattleMoviePlayer__PlayMovieFadeOut_d__45_o *)UnityEngine_Component__get_transform(
                                                              (UnityEngine_Component_o *)this,
                                                              0);
      if ( !this )
        goto LABEL_121;
      v56 = BattleMoviePlayer_TypeInfo;
    }
    v71 = v56->static_fields->BossPanelDist / v56->static_fields->BaseDist;
    v72 = v71 * _4__this->fields.startPanelScale.fields.z;
    v73 = v71 * _4__this->fields.startPanelScale.fields.y;
    v74 = v71 * _4__this->fields.startPanelScale.fields.x;
LABEL_102:
    UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)this, *(UnityEngine_Vector3_o *)&v74, 0);
LABEL_103:
    if ( v4->fields._restTime_5__6 > 0.0 )
    {
      v4->fields.__2__current = 0;
      p__2__current = (CGThumbnailListItem_o *)&v4->fields.__2__current;
      sub_1C36FFC(p__2__current, 0, v2, v3);
      result = 1;
      LODWORD(p__2__current[-1].fields._ThumbnailSpritePath_k__BackingField) = 1;
      return result;
    }
    goto LABEL_105;
  }
  if ( !_1__state )
  {
    v4->fields.__1__state = -1;
    movieObj = (UnityEngine_Object_o *)v4->fields.movieObj;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    this = (BattleMoviePlayer__PlayMovieFadeOut_d__45_o *)UnityEngine_Object__op_Inequality(movieObj, 0, 0);
    if ( ((unsigned __int8)this & 1) == 0 )
    {
      if ( !_4__this )
        goto LABEL_121;
LABEL_113:
      this = (BattleMoviePlayer__PlayMovieFadeOut_d__45_o *)_4__this->fields.ObjList;
      if ( this )
      {
        System_Collections_Generic_List_object___Remove(
          (System_Collections_Generic_List_object__o *)this,
          (Il2CppObject *)v4->fields.movieObj,
          (const MethodInfo_37A454C *)Method_System_Collections_Generic_List_GameObject__Remove__);
        v82 = (UnityEngine_Object_o *)v4->fields.movieObj;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        UnityEngine_Object__Destroy_71266752(v82, 0);
        return 0;
      }
      goto LABEL_121;
    }
    if ( !_4__this )
      goto LABEL_121;
    v8 = _4__this->fields.currController;
    if ( !v8 )
      goto LABEL_121;
    if ( v8->fields._player_k__BackingField )
    {
      this = (BattleMoviePlayer__PlayMovieFadeOut_d__45_o *)v4->fields.movieObj;
      if ( !this )
        goto LABEL_121;
      this = (BattleMoviePlayer__PlayMovieFadeOut_d__45_o *)UnityEngine_GameObject__GetComponent_object_(
                                                              (UnityEngine_GameObject_o *)this,
                                                              (const MethodInfo_313F1D8 *)Method_UnityEngine_GameObject_GetComponent_MeshRenderer___);
      if ( !this )
        goto LABEL_121;
      material = UnityEngine_Renderer__get_material((UnityEngine_Renderer_o *)this, 0);
      v4->fields._movieMaterial_5__2 = material;
      p_movieMaterial_5__2 = (BattleMoviePlayer__PlayMovieFadeOut_d__45_o **)&v4->fields._movieMaterial_5__2;
      sub_1C36FFC((CGThumbnailListItem_o *)&v4->fields._movieMaterial_5__2, (int32_t)material, v11, v12);
      this = (BattleMoviePlayer__PlayMovieFadeOut_d__45_o *)_4__this->fields.MovieInfoList;
      if ( !this )
        goto LABEL_121;
      Item = System_Collections_Generic_List_object___get_Item(
               (System_Collections_Generic_List_object__o *)this,
               v4->fields.num,
               (const MethodInfo_37A2D54 *)Method_System_Collections_Generic_List_BattleMoviePlayer_MovieInfo__get_Item__);
      v4->fields._movInfo_5__3 = (struct BattleMoviePlayer_MovieInfo_o *)Item;
      v14 = &v4->fields._movInfo_5__3;
      sub_1C36FFC((CGThumbnailListItem_o *)&v4->fields._movInfo_5__3, (int32_t)Item, v15, v16);
      v17 = v4->fields._movInfo_5__3;
      if ( !v17 )
        goto LABEL_121;
      validTime = v17->fields.validTime;
      if ( validTime <= 0.0 )
      {
        v19 = _4__this->fields.currController;
        if ( !v19 )
          goto LABEL_121;
        this = (BattleMoviePlayer__PlayMovieFadeOut_d__45_o *)v19->fields._player_k__BackingField;
        if ( !this )
          goto LABEL_121;
        this = (BattleMoviePlayer__PlayMovieFadeOut_d__45_o *)CriMana_Player__get_movieInfo((CriMana_Player_o *)this, 0);
        if ( !this )
          goto LABEL_121;
        v17 = *v14;
        if ( !*v14 )
          goto LABEL_121;
        validTime = (float)(unsigned int)this->fields.num;
      }
      effectRestTime = v17->fields.effectRestTime;
      v4->fields._pastError_5__5 = 0;
      v4->fields._effectTime_5__4 = fmaxf(validTime - effectRestTime, 0.0);
      v21 = _4__this->fields.currController;
      if ( !v21 )
        goto LABEL_121;
      this = (BattleMoviePlayer__PlayMovieFadeOut_d__45_o *)v21->fields._player_k__BackingField;
      if ( !this )
        goto LABEL_121;
      this = (BattleMoviePlayer__PlayMovieFadeOut_d__45_o *)CriMana_Player__GetDisplayedFrameNo(
                                                              (CriMana_Player_o *)this,
                                                              0);
      forceFadeout = v4->fields.forceFadeout;
      v4->fields._restTime_5__6 = validTime - (float)(int)this;
      if ( !forceFadeout )
      {
        v23 = *v14;
        if ( !*v14 )
          goto LABEL_121;
        goto LABEL_63;
      }
      if ( !_4__this->fields._ForceFadeout_k__BackingField )
      {
        v23 = *v14;
        if ( !*v14 )
          goto LABEL_121;
        v4->fields._restTime_5__6 = v23->fields.fadeRestTime;
        _4__this->fields._ForceFadeout_k__BackingField = 1;
LABEL_63:
        if ( v23->fields.isBackMovie )
        {
          this = *p_movieMaterial_5__2;
          if ( !*p_movieMaterial_5__2 )
            goto LABEL_121;
          UnityEngine_Material__SetInt((UnityEngine_Material_o *)this, (System_String_o *)StringLiteral_16420/*"_ZWriteMode"*/, 0, 0);
        }
        this = *p_movieMaterial_5__2;
        if ( !*p_movieMaterial_5__2 )
LABEL_121:
          sub_1C372B4(this);
        if ( _4__this->fields.OverrideZDepth )
          v50 = 8;
        else
          v50 = 4;
        UnityEngine_Material__SetInt((UnityEngine_Material_o *)this, (System_String_o *)StringLiteral_16419/*"_ZTestMode"*/, v50, 0);
        goto LABEL_103;
      }
    }
  }
  return 0;
}


Il2CppObject *BattleMoviePlayer__PlayMovieFadeOut_d__45__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        BattleMoviePlayer__PlayMovieFadeOut_d__45_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __noreturn BattleMoviePlayer__PlayMovieFadeOut_d__45__System_Collections_IEnumerator_Reset(
        BattleMoviePlayer__PlayMovieFadeOut_d__45_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1C3706C(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C372A4(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1C3706C(&Method_BattleMoviePlayer__PlayMovieFadeOut_d__45_System_Collections_IEnumerator_Reset__);
  sub_1C37180(v3, v4);
}


Il2CppObject *BattleMoviePlayer__PlayMovieFadeOut_d__45__System_Collections_IEnumerator_get_Current(
        BattleMoviePlayer__PlayMovieFadeOut_d__45_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void BattleMoviePlayer__PlayMovieFadeOut_d__45__System_IDisposable_Dispose(
        BattleMoviePlayer__PlayMovieFadeOut_d__45_o *this,
        const MethodInfo *method)
{
  ;
}


void BattleMoviePlayer__PlayMovie_d__44___ctor(
        BattleMoviePlayer__PlayMovie_d__44_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.__1__state = 1__state;
}


// local variable allocation has failed, the output may be wrong!
bool BattleMoviePlayer__PlayMovie_d__44__MoveNext(BattleMoviePlayer__PlayMovie_d__44_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  BattleMoviePlayer__PlayMovie_d__44_o *v4; // x19
  int32_t _1__state; // w8
  struct BattleMoviePlayer_o *_4__this; // x20
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  struct CriManaMovieController_o **p_currController; // x21
  UnityEngine_Object_o *v10; // x22
  Il2CppObject *Item; // x0
  struct BattleMoviePlayer_MovieInfo_o **p_movInfo_5__2; // x22
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  struct BattleMoviePlayer_MovieInfo_o *v15; // x8
  CriMana_Player_o *v16; // x23
  float v17; // s0
  int32_t v18; // w2
  const MethodInfo *v19; // x3
  struct BattleMoviePlayer_MovieInfo_o *v20; // x8
  CGThumbnailListItem_o *v21; // x19
  bool result; // w0
  BattleMoviePlayer__PlayMovie_d__44_o *v23; // x22
  BattleMoviePlayer__PlayMovie_d__44_o *v24; // x21
  BattleMoviePlayer__PlayMovie_d__44_o *v25; // x22
  float v26; // s0
  int32_t v27; // w2
  float fadeinTime_5__5; // s0
  struct CriManaMovieController_o *v29; // x8
  struct BattleMoviePlayer_MovieInfo_o *v30; // x8
  float skipFrame_5__4; // s8
  float timeScale; // s0
  struct CriManaMovieController_o *v33; // x8
  BattleCameraFullScaleSetter_o *v34; // x21
  struct CriManaMovieController_o *v35; // x8
  CriMana_Player_o *player_k__BackingField; // x8
  uint32_t v37; // w22
  struct CriManaMovieController_o *v38; // x9
  struct BattleMoviePlayer_MovieInfo_o *v39; // x8
  BattleMoviePlayer__PlayMovie_d__44_o *v40; // x21
  float *v41; // x8
  float v42; // s0
  struct CriManaMovieController_o *v43; // x8
  struct CriManaMovieController_o *v44; // x8
  unsigned int num; // w9
  _BOOL4 KeepStartPosition; // w8
  struct BattlePerformance_o *v47; // x8
  struct BattleMoviePlayer_MovieInfo_o *v48; // x8
  BattleMoviePlayer__PlayMovie_d__44_o *v49; // x21
  int32_t v50; // w2
  struct BattleMoviePlayer_MovieInfo_o *v51; // x8
  struct CriManaMovieController_o *v52; // x8
  struct BattleMoviePlayer_MovieInfo_o *v53; // x8
  float v54; // s0
  CGThumbnailListItem_o *p__2__current; // x19
  struct BattleMoviePlayer_MovieInfo_o *movInfo_5__2; // x8
  struct BattleMoviePlayer_MovieInfo_o *v57; // x8
  struct CriManaMovieController_o *currController; // x8
  int32_t v59; // w2
  const MethodInfo *v60; // x3
  float effectTime_5__7; // s0
  struct BattlePerformance_o *perf; // x8
  struct BattleMoviePlayer_MovieInfo_o *v63; // x9
  float *v64; // x9
  float v65; // s8
  float v66; // s9
  float v67; // s10
  float v68; // s0
  BattleMoviePlayer_c *v69; // x8
  __int64 v70; // x9
  float v71; // w10
  __int64 v72; // x9
  struct BattlePerformance_o *v73; // x8
  float x; // s8
  float y; // s9
  float z; // s10
  char v77; // w22
  float v78; // s11
  float v79; // s12
  float v80; // s13
  BattleMoviePlayer__PlayMovie_d__44_o *v81; // x21
  float v82; // s0
  BattleMoviePlayer__PlayMovie_d__44_o *v83; // x21
  float v84; // s4
  float v85; // s2
  float v86; // s8
  float v87; // s9
  float v88; // s10
  bool IsBossCamera; // w22
  BattleMoviePlayer_c *v90; // x8
  struct BattleMoviePlayer_StaticFields *static_fields; // x8
  float v92; // s11
  float v93; // s12
  float v94; // s13
  float v95; // s0
  float v96; // s0
  float v97; // s2
  float v98; // s1
  float v99; // s0 OVERLAPPED
  float v100; // s11
  float v101; // s12
  float v102; // s13
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o localScale; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v105; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v106; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v107; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o position; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v109; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v110; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v111; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v112; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v113; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v114; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v115; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v116; // 0:s0.4,4:s1.4,8:s2.4

  v4 = this;
  if ( (byte_4C45B00 & 1) == 0 )
  {
    sub_1C37058(&BattleMoviePlayer_TypeInfo);
    sub_1C37058(&Method_UnityEngine_Component_GetComponent_MeshRenderer___);
    sub_1C37058(&Method_UnityEngine_GameObject_GetComponent_BattleCameraFullScaleSetter___);
    sub_1C37058(&Method_UnityEngine_GameObject_GetComponent_CriManaMovieController___);
    sub_1C37058(&Method_UnityEngine_GameObject_GetComponent_MeshRenderer___);
    sub_1C37058(&Method_System_Collections_Generic_List_BattleMoviePlayer_MovieInfo__get_Item__);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&StringLiteral_16420/*"_ZWriteMode"*/);
    sub_1C37058(&StringLiteral_16419/*"_ZTestMode"*/);
    this = (BattleMoviePlayer__PlayMovie_d__44_o *)sub_1C37058(&StringLiteral_16385/*"_Transparency"*/);
    byte_4C45B00 = 1;
  }
  _1__state = v4->fields.__1__state;
  _4__this = v4->fields.__4__this;
  switch ( _1__state )
  {
    case 2:
      v4->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_189;
      this = (BattleMoviePlayer__PlayMovie_d__44_o *)_4__this->fields.currController;
      if ( !this )
        goto LABEL_189;
      if ( !this->fields._movInfo_5__2 )
      {
LABEL_117:
        v4->fields._movInfo_5__2 = 0;
        sub_1C36FFC((CGThumbnailListItem_o *)&v4->fields._movInfo_5__2, 0, v2, v3);
        return 0;
      }
      this = (BattleMoviePlayer__PlayMovie_d__44_o *)UnityEngine_Component__GetComponent_object_(
                                                       (UnityEngine_Component_o *)this,
                                                       (const MethodInfo_30DE428 *)Method_UnityEngine_Component_GetComponent_MeshRenderer___);
      if ( !this )
        goto LABEL_189;
      v23 = this;
      this = (BattleMoviePlayer__PlayMovie_d__44_o *)UnityEngine_Renderer__get_material(
                                                       (UnityEngine_Renderer_o *)this,
                                                       0);
      v24 = this;
      if ( v4->fields._fadeinTime_5__5 > 0.0 )
      {
        UnityEngine_Renderer__set_enabled((UnityEngine_Renderer_o *)v23, 1, 0);
        this = (BattleMoviePlayer__PlayMovie_d__44_o *)UnityEngine_Renderer__get_material(
                                                         (UnityEngine_Renderer_o *)v23,
                                                         0);
        if ( !_4__this->fields.baseMat )
          goto LABEL_189;
        v25 = this;
        this = (BattleMoviePlayer__PlayMovie_d__44_o *)UnityEngine_Material__get_renderQueue(
                                                         _4__this->fields.baseMat,
                                                         0);
        if ( !v25 )
          goto LABEL_189;
        UnityEngine_Material__set_renderQueue((UnityEngine_Material_o *)v25, (int32_t)this, 0);
        v26 = (float)v4->fields._currentFrame_5__3 / v4->fields._fadeinTime_5__5;
        if ( v26 >= 1.0 )
        {
          if ( !v24 )
            goto LABEL_189;
          UnityEngine_Material__SetInt((UnityEngine_Material_o *)v24, (System_String_o *)StringLiteral_16419/*"_ZTestMode"*/, 4, 0);
          UnityEngine_Material__SetFloat((UnityEngine_Material_o *)v24, (System_String_o *)StringLiteral_16385/*"_Transparency"*/, 0.0, 0);
          movInfo_5__2 = v4->fields._movInfo_5__2;
          if ( !movInfo_5__2 )
            goto LABEL_189;
          if ( movInfo_5__2->fields.cameraType == 1 )
            BattleMoviePlayer__ShowBg(_4__this, 0, 0);
          v4->fields._fadeinTime_5__5 = 0.0;
        }
        else
        {
          if ( !v24 )
            goto LABEL_189;
          UnityEngine_Material__SetFloat(
            (UnityEngine_Material_o *)v24,
            (System_String_o *)StringLiteral_16385/*"_Transparency"*/,
            1.0 - v26,
            0);
          if ( _4__this->fields.OverrideZDepth )
            v27 = 8;
          else
            v27 = 4;
          UnityEngine_Material__SetInt((UnityEngine_Material_o *)v24, (System_String_o *)StringLiteral_16419/*"_ZTestMode"*/, v27, 0);
        }
      }
      v57 = v4->fields._movInfo_5__2;
      if ( !v57 )
        goto LABEL_189;
      if ( v57->fields.isBackMovie )
      {
        if ( !v24 )
          goto LABEL_189;
        UnityEngine_Material__SetInt((UnityEngine_Material_o *)v24, (System_String_o *)StringLiteral_16420/*"_ZWriteMode"*/, 0, 0);
      }
      if ( _4__this->fields._ForceFadeout_k__BackingField )
        return 0;
      currController = _4__this->fields.currController;
      if ( !currController
        || (this = (BattleMoviePlayer__PlayMovie_d__44_o *)currController->fields._player_k__BackingField) == 0 )
      {
LABEL_189:
        sub_1C372B4(this);
      }
      this = (BattleMoviePlayer__PlayMovie_d__44_o *)CriMana_Player__GetDisplayedFrameNo((CriMana_Player_o *)this, 0);
      effectTime_5__7 = v4->fields._effectTime_5__7;
      v4->fields._currentFrame_5__3 = (int)this;
      if ( effectTime_5__7 <= (float)(int)this )
      {
        this = (BattleMoviePlayer__PlayMovie_d__44_o *)v4->fields._movInfo_5__2;
        if ( !this )
          goto LABEL_189;
        if ( *(_QWORD *)&this->fields.num )
        {
          UnityEngine_Events_UnityEvent__Invoke(*(UnityEngine_Events_UnityEvent_o **)&this->fields.num, 0);
          this = (BattleMoviePlayer__PlayMovie_d__44_o *)v4->fields._movInfo_5__2;
          if ( !this )
            goto LABEL_189;
        }
        *(_QWORD *)&this->fields.num = 0;
        sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.num, 0, v59, v60);
      }
      if ( _4__this->fields.KeepStartPosition )
      {
        perf = _4__this->fields.perf;
        if ( !perf )
          goto LABEL_189;
        v63 = v4->fields._movInfo_5__2;
        if ( perf->fields._UsePlayMakerShakeParam_k__BackingField )
        {
          if ( !v63 )
            goto LABEL_189;
          v63->fields._UsePlayMakerShakeParam_k__BackingField = 1;
        }
        else if ( !v63 )
        {
          goto LABEL_189;
        }
        if ( v63->fields._UsePlayMakerShakeParam_k__BackingField )
        {
          this = (BattleMoviePlayer__PlayMovie_d__44_o *)BattleMoviePlayer_TypeInfo;
          if ( !BattleMoviePlayer_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BattleMoviePlayer_TypeInfo);
            this = (BattleMoviePlayer__PlayMovie_d__44_o *)BattleMoviePlayer_TypeInfo;
            perf = _4__this->fields.perf;
          }
          v70 = *(_QWORD *)&this[1].fields._isLoopMovie_5__9;
          v71 = *(float *)(v70 + 24);
          v72 = *(_QWORD *)(v70 + 16);
          _4__this->fields.startPanelPosition.fields.z = v71;
          *(_QWORD *)&_4__this->fields.startPanelPosition.fields.x = v72;
          if ( !perf )
            goto LABEL_189;
          this = (BattleMoviePlayer__PlayMovie_d__44_o *)perf->fields.actorcamera;
          if ( !this )
            goto LABEL_189;
          this = (BattleMoviePlayer__PlayMovie_d__44_o *)UnityEngine_Component__get_transform(
                                                           (UnityEngine_Component_o *)this,
                                                           0);
          v73 = _4__this->fields.perf;
          if ( !v73 )
            goto LABEL_189;
          if ( !this )
            goto LABEL_189;
          v106 = UnityEngine_Transform__InverseTransformVector(
                   (UnityEngine_Transform_o *)this,
                   v73->fields._CurrentShakeWidth_k__BackingField,
                   0);
          x = v106.fields.x;
          y = v106.fields.y;
          z = v106.fields.z;
          this = (BattleMoviePlayer__PlayMovie_d__44_o *)BattleMoviePlayer__IsBossCamera(_4__this, 0);
          if ( !_4__this->fields.currController )
            goto LABEL_189;
          v77 = (char)this;
          this = (BattleMoviePlayer__PlayMovie_d__44_o *)UnityEngine_Component__get_transform(
                                                           (UnityEngine_Component_o *)_4__this->fields.currController,
                                                           0);
          v78 = _4__this->fields.startPanelPosition.fields.x;
          v79 = _4__this->fields.startPanelPosition.fields.y;
          v80 = _4__this->fields.startPanelPosition.fields.z;
          v81 = this;
          if ( (v77 & 1) == 0 )
          {
            if ( this )
            {
              v114.fields.z = z + v80;
              v114.fields.y = y + v79;
              v114.fields.x = x + v78;
              UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)this, v114, 0);
              goto LABEL_114;
            }
            goto LABEL_189;
          }
          this = (BattleMoviePlayer__PlayMovie_d__44_o *)BattleMoviePlayer_TypeInfo;
          if ( !BattleMoviePlayer_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BattleMoviePlayer_TypeInfo);
            this = (BattleMoviePlayer__PlayMovie_d__44_o *)BattleMoviePlayer_TypeInfo;
          }
          if ( !v81 )
            goto LABEL_189;
          v82 = *(float *)(*(_QWORD *)&this[1].fields._isLoopMovie_5__9 + 12LL)
              / *(float *)(*(_QWORD *)&this[1].fields._isLoopMovie_5__9 + 8LL);
          v107.fields.z = (float)(v80 * v82) + (float)(z * v82);
          v107.fields.y = (float)(v79 * v82) + (float)(y * v82);
          v107.fields.x = (float)(v78 * v82) + (float)(x * v82);
          UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)v81, v107, 0);
        }
        else
        {
          this = (BattleMoviePlayer__PlayMovie_d__44_o *)perf->fields.actorcamera;
          if ( !this )
            goto LABEL_189;
          this = (BattleMoviePlayer__PlayMovie_d__44_o *)UnityEngine_Component__get_transform(
                                                           (UnityEngine_Component_o *)this,
                                                           0);
          if ( !this )
            goto LABEL_189;
          v83 = this;
          position = UnityEngine_Transform__get_position((UnityEngine_Transform_o *)this, 0);
          position.fields.x = position.fields.x - _4__this->fields.cameraStartPosition.fields.x;
          position.fields.y = position.fields.y - _4__this->fields.cameraStartPosition.fields.y;
          position.fields.z = position.fields.z - _4__this->fields.cameraStartPosition.fields.z;
          v109 = UnityEngine_Transform__InverseTransformVector((UnityEngine_Transform_o *)v83, position, 0);
          v84 = fminf(v109.fields.z, 1.0);
          if ( v109.fields.z < -0.3 )
            v85 = -0.3;
          else
            v85 = v84;
          v110 = UnityEngine_Transform__TransformDirection((UnityEngine_Transform_o *)v83, v109, 0);
          v86 = v110.fields.x;
          v87 = v110.fields.y;
          v88 = v110.fields.z;
          IsBossCamera = BattleMoviePlayer__IsBossCamera(_4__this, 0);
          v90 = BattleMoviePlayer_TypeInfo;
          if ( !BattleMoviePlayer_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BattleMoviePlayer_TypeInfo);
            v90 = BattleMoviePlayer_TypeInfo;
          }
          static_fields = v90->static_fields;
          if ( !IsBossCamera )
          {
            v115 = UnityEngine_Transform__TransformPoint(
                     (UnityEngine_Transform_o *)v83,
                     static_fields->BasePanelPosition,
                     0);
            this = (BattleMoviePlayer__PlayMovie_d__44_o *)_4__this->fields.currController;
            if ( this )
            {
              v100 = v115.fields.x;
              v101 = v115.fields.y;
              v102 = v115.fields.z;
              this = (BattleMoviePlayer__PlayMovie_d__44_o *)UnityEngine_Component__get_transform(
                                                               (UnityEngine_Component_o *)this,
                                                               0);
              if ( this )
              {
                v116.fields.z = v102 - v88;
                v116.fields.y = v101 - v87;
                v116.fields.x = v100 - v86;
                UnityEngine_Transform__set_position((UnityEngine_Transform_o *)this, v116, 0);
                goto LABEL_114;
              }
            }
            goto LABEL_189;
          }
          v111.fields.z = static_fields->BossPanelDist;
          v111.fields.x = 0.0;
          v111.fields.y = 0.0;
          v112 = UnityEngine_Transform__TransformPoint((UnityEngine_Transform_o *)v83, v111, 0);
          this = (BattleMoviePlayer__PlayMovie_d__44_o *)_4__this->fields.currController;
          if ( !this )
            goto LABEL_189;
          v92 = v112.fields.x;
          v93 = v112.fields.y;
          v94 = v112.fields.z;
          this = (BattleMoviePlayer__PlayMovie_d__44_o *)UnityEngine_Component__get_transform(
                                                           (UnityEngine_Component_o *)this,
                                                           0);
          if ( !this )
            goto LABEL_189;
          v95 = BattleMoviePlayer_TypeInfo->static_fields->BossPanelDist
              / BattleMoviePlayer_TypeInfo->static_fields->BaseDist;
          v113.fields.z = v94 - (float)(v88 * v95);
          v113.fields.y = v93 - (float)(v87 * v95);
          v113.fields.x = v92 - (float)(v86 * v95);
          UnityEngine_Transform__set_position((UnityEngine_Transform_o *)this, v113, 0);
        }
        this = (BattleMoviePlayer__PlayMovie_d__44_o *)_4__this->fields.currController;
        if ( !this )
          goto LABEL_189;
        this = (BattleMoviePlayer__PlayMovie_d__44_o *)UnityEngine_Component__get_transform(
                                                         (UnityEngine_Component_o *)this,
                                                         0);
        if ( !this )
          goto LABEL_189;
        v69 = BattleMoviePlayer_TypeInfo;
      }
      else
      {
        if ( !BattleMoviePlayer__IsBossCamera(_4__this, 0) )
        {
          this = (BattleMoviePlayer__PlayMovie_d__44_o *)_4__this->fields.currController;
          if ( !this )
            goto LABEL_189;
          this = (BattleMoviePlayer__PlayMovie_d__44_o *)UnityEngine_Component__get_transform(
                                                           (UnityEngine_Component_o *)this,
                                                           0);
          if ( !this )
            goto LABEL_189;
          UnityEngine_Transform__set_localPosition(
            (UnityEngine_Transform_o *)this,
            _4__this->fields.startPanelPosition,
            0);
          this = (BattleMoviePlayer__PlayMovie_d__44_o *)_4__this->fields.currController;
          if ( !this )
            goto LABEL_189;
          this = (BattleMoviePlayer__PlayMovie_d__44_o *)UnityEngine_Component__get_transform(
                                                           (UnityEngine_Component_o *)this,
                                                           0);
          if ( !this )
            goto LABEL_189;
          v98 = _4__this->fields.startPanelScale.fields.y;
          v97 = _4__this->fields.startPanelScale.fields.z;
          v99 = _4__this->fields.startPanelScale.fields.x;
LABEL_185:
          UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)this, *(UnityEngine_Vector3_o *)&v99, 0);
          goto LABEL_114;
        }
        this = (BattleMoviePlayer__PlayMovie_d__44_o *)BattleMoviePlayer_TypeInfo;
        if ( !BattleMoviePlayer_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BattleMoviePlayer_TypeInfo);
          this = (BattleMoviePlayer__PlayMovie_d__44_o *)BattleMoviePlayer_TypeInfo;
        }
        if ( !_4__this->fields.currController )
          goto LABEL_189;
        v64 = *(float **)&this[1].fields._isLoopMovie_5__9;
        v66 = v64[5];
        v65 = v64[6];
        v67 = v64[4];
        this = (BattleMoviePlayer__PlayMovie_d__44_o *)UnityEngine_Component__get_transform(
                                                         (UnityEngine_Component_o *)_4__this->fields.currController,
                                                         0);
        if ( !this )
          goto LABEL_189;
        v68 = BattleMoviePlayer_TypeInfo->static_fields->BossPanelDist
            / BattleMoviePlayer_TypeInfo->static_fields->BaseDist;
        v105.fields.z = v65 * v68;
        v105.fields.y = v66 * v68;
        v105.fields.x = v67 * v68;
        UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)this, v105, 0);
        this = (BattleMoviePlayer__PlayMovie_d__44_o *)_4__this->fields.currController;
        if ( !this )
          goto LABEL_189;
        this = (BattleMoviePlayer__PlayMovie_d__44_o *)UnityEngine_Component__get_transform(
                                                         (UnityEngine_Component_o *)this,
                                                         0);
        if ( !this )
          goto LABEL_189;
        v69 = BattleMoviePlayer_TypeInfo;
      }
      v96 = v69->static_fields->BossPanelDist / v69->static_fields->BaseDist;
      v97 = v96 * _4__this->fields.startPanelScale.fields.z;
      v98 = v96 * _4__this->fields.startPanelScale.fields.y;
      v99 = v96 * _4__this->fields.startPanelScale.fields.x;
      goto LABEL_185;
    case 1:
      fadeinTime_5__5 = v4->fields._fadeinTime_5__5;
      v4->fields.__1__state = -1;
      if ( fadeinTime_5__5 <= 0.0 )
      {
        if ( !_4__this )
          goto LABEL_189;
      }
      else
      {
        if ( !_4__this )
          goto LABEL_189;
        this = (BattleMoviePlayer__PlayMovie_d__44_o *)_4__this->fields.currController;
        if ( !this )
          goto LABEL_189;
        this = (BattleMoviePlayer__PlayMovie_d__44_o *)UnityEngine_Component__GetComponent_object_(
                                                         (UnityEngine_Component_o *)this,
                                                         (const MethodInfo_30DE428 *)Method_UnityEngine_Component_GetComponent_MeshRenderer___);
        if ( !this )
          goto LABEL_189;
        UnityEngine_Renderer__set_enabled((UnityEngine_Renderer_o *)this, 0, 0);
      }
      v29 = _4__this->fields.currController;
      if ( !v29 )
        goto LABEL_189;
      this = (BattleMoviePlayer__PlayMovie_d__44_o *)v29->fields._player_k__BackingField;
      if ( !this )
        goto LABEL_189;
      this = (BattleMoviePlayer__PlayMovie_d__44_o *)CriMana_Player__GetDisplayedFrameNo((CriMana_Player_o *)this, 0);
      v30 = v4->fields._movInfo_5__2;
      v4->fields._currentFrame_5__3 = (int)this;
      if ( !v30 )
        goto LABEL_189;
      skipFrame_5__4 = v4->fields._skipFrame_5__4;
      if ( v30->fields.ignoreTimeScale )
      {
        timeScale = 1.0;
      }
      else
      {
        timeScale = UnityEngine_Time__get_timeScale(0);
        LODWORD(this) = v4->fields._currentFrame_5__3;
      }
      v4->fields._skipFrame_5__4 = skipFrame_5__4 + timeScale;
      if ( ((unsigned int)this & 0x80000000) != 0 )
        goto LABEL_23;
LABEL_50:
      this = (BattleMoviePlayer__PlayMovie_d__44_o *)v4->fields.movieObj;
      if ( this )
      {
        this = (BattleMoviePlayer__PlayMovie_d__44_o *)UnityEngine_GameObject__GetComponent_object_(
                                                         (UnityEngine_GameObject_o *)this,
                                                         (const MethodInfo_313F1D8 *)Method_UnityEngine_GameObject_GetComponent_BattleCameraFullScaleSetter___);
        v33 = _4__this->fields.currController;
        if ( v33 )
        {
          v34 = (BattleCameraFullScaleSetter_o *)this;
          this = (BattleMoviePlayer__PlayMovie_d__44_o *)v33->fields._player_k__BackingField;
          if ( this )
          {
            this = (BattleMoviePlayer__PlayMovie_d__44_o *)CriMana_Player__get_movieInfo((CriMana_Player_o *)this, 0);
            if ( this )
            {
              v35 = _4__this->fields.currController;
              if ( v35 )
              {
                player_k__BackingField = v35->fields._player_k__BackingField;
                if ( player_k__BackingField )
                {
                  v37 = (uint32_t)this->fields.__4__this;
                  this = (BattleMoviePlayer__PlayMovie_d__44_o *)CriMana_Player__get_movieInfo(
                                                                   player_k__BackingField,
                                                                   0);
                  if ( this )
                  {
                    if ( v34 )
                    {
                      BattleCameraFullScaleSetter__AdjustPanelSize(v34, v37, HIDWORD(this->fields.__4__this), 0);
                      v38 = _4__this->fields.currController;
                      if ( v38 )
                      {
                        v39 = v4->fields._movInfo_5__2;
                        if ( v39 )
                        {
                          this = (BattleMoviePlayer__PlayMovie_d__44_o *)v38->fields._player_k__BackingField;
                          if ( this )
                          {
                            CriMana_Player__Loop((CriMana_Player_o *)this, v39->fields.loop, 0);
                            this = (BattleMoviePlayer__PlayMovie_d__44_o *)_4__this->fields.currController;
                            if ( this )
                            {
                              this = (BattleMoviePlayer__PlayMovie_d__44_o *)UnityEngine_Component__GetComponent_object_(
                                                                               (UnityEngine_Component_o *)this,
                                                                               (const MethodInfo_30DE428 *)Method_UnityEngine_Component_GetComponent_MeshRenderer___);
                              if ( this )
                              {
                                this = (BattleMoviePlayer__PlayMovie_d__44_o *)UnityEngine_Renderer__get_material(
                                                                                 (UnityEngine_Renderer_o *)this,
                                                                                 0);
                                if ( _4__this->fields.baseMat )
                                {
                                  v40 = this;
                                  this = (BattleMoviePlayer__PlayMovie_d__44_o *)UnityEngine_Material__get_renderQueue(
                                                                                   _4__this->fields.baseMat,
                                                                                   0);
                                  if ( v40 )
                                  {
                                    UnityEngine_Material__set_renderQueue(
                                      (UnityEngine_Material_o *)v40,
                                      (int32_t)this,
                                      0);
                                    if ( v4->fields._fadeinTime_5__5 > 0.0 )
                                    {
                                      this = (BattleMoviePlayer__PlayMovie_d__44_o *)_4__this->fields.currController;
                                      if ( !this )
                                        goto LABEL_189;
                                      this = (BattleMoviePlayer__PlayMovie_d__44_o *)UnityEngine_Component__GetComponent_object_(
                                                                                       (UnityEngine_Component_o *)this,
                                                                                       (const MethodInfo_30DE428 *)Method_UnityEngine_Component_GetComponent_MeshRenderer___);
                                      if ( !this )
                                        goto LABEL_189;
                                      UnityEngine_Renderer__set_enabled((UnityEngine_Renderer_o *)this, 0, 0);
                                    }
                                    v41 = (float *)v4->fields._movInfo_5__2;
                                    if ( !v41 )
                                      goto LABEL_189;
                                    v42 = v41[8];
                                    if ( v42 <= 0.0 )
                                    {
                                      v43 = _4__this->fields.currController;
                                      if ( !v43 )
                                        goto LABEL_189;
                                      this = (BattleMoviePlayer__PlayMovie_d__44_o *)v43->fields._player_k__BackingField;
                                      if ( !this )
                                        goto LABEL_189;
                                      this = (BattleMoviePlayer__PlayMovie_d__44_o *)CriMana_Player__get_movieInfo(
                                                                                       (CriMana_Player_o *)this,
                                                                                       0);
                                      if ( this )
                                      {
                                        v44 = _4__this->fields.currController;
                                        if ( !v44 )
                                          goto LABEL_189;
                                        this = (BattleMoviePlayer__PlayMovie_d__44_o *)v44->fields._player_k__BackingField;
                                        if ( !this )
                                          goto LABEL_189;
                                        this = (BattleMoviePlayer__PlayMovie_d__44_o *)CriMana_Player__get_movieInfo(
                                                                                         (CriMana_Player_o *)this,
                                                                                         0);
                                        if ( !this )
                                          goto LABEL_189;
                                        num = this->fields.num;
                                      }
                                      else
                                      {
                                        num = 0;
                                      }
                                      v41 = (float *)v4->fields._movInfo_5__2;
                                      if ( !v41 )
                                        goto LABEL_189;
                                      v42 = (float)num;
                                    }
                                    v4->fields._fadeoutTime_5__6 = fmaxf(v42 - v41[10], 0.0);
                                    v4->fields._effectTime_5__7 = fmaxf(v42 - v41[14], 0.0);
                                    this = (BattleMoviePlayer__PlayMovie_d__44_o *)_4__this->fields.currController;
                                    if ( this )
                                    {
                                      this = (BattleMoviePlayer__PlayMovie_d__44_o *)UnityEngine_Component__get_transform(
                                                                                       (UnityEngine_Component_o *)this,
                                                                                       0);
                                      if ( this )
                                      {
                                        localPosition = UnityEngine_Transform__get_localPosition(
                                                          (UnityEngine_Transform_o *)this,
                                                          0);
                                        this = (BattleMoviePlayer__PlayMovie_d__44_o *)_4__this->fields.currController;
                                        _4__this->fields.startPanelPosition = localPosition;
                                        if ( this )
                                        {
                                          this = (BattleMoviePlayer__PlayMovie_d__44_o *)UnityEngine_Component__get_transform(
                                                                                           (UnityEngine_Component_o *)this,
                                                                                           0);
                                          if ( this )
                                          {
                                            localScale = UnityEngine_Transform__get_localScale(
                                                           (UnityEngine_Transform_o *)this,
                                                           0);
                                            KeepStartPosition = _4__this->fields.KeepStartPosition;
                                            _4__this->fields.startPanelScale = localScale;
                                            if ( KeepStartPosition )
                                            {
                                              v47 = _4__this->fields.perf;
                                              if ( !v47 )
                                                goto LABEL_189;
                                              this = (BattleMoviePlayer__PlayMovie_d__44_o *)v47->fields.actorcamera;
                                              if ( !this )
                                                goto LABEL_189;
                                              this = (BattleMoviePlayer__PlayMovie_d__44_o *)UnityEngine_Component__get_transform(
                                                                                               (UnityEngine_Component_o *)this,
                                                                                               0);
                                              if ( !this )
                                                goto LABEL_189;
                                              _4__this->fields.cameraStartPosition = UnityEngine_Transform__get_position(
                                                                                       (UnityEngine_Transform_o *)this,
                                                                                       0);
                                            }
                                            this = (BattleMoviePlayer__PlayMovie_d__44_o *)v4->fields.movieObj;
                                            if ( this )
                                            {
                                              this = (BattleMoviePlayer__PlayMovie_d__44_o *)UnityEngine_GameObject__GetComponent_object_(
                                                                                               (UnityEngine_GameObject_o *)this,
                                                                                               (const MethodInfo_313F1D8 *)Method_UnityEngine_GameObject_GetComponent_MeshRenderer___);
                                              if ( this )
                                              {
                                                this = (BattleMoviePlayer__PlayMovie_d__44_o *)UnityEngine_Renderer__get_material(
                                                                                                 (UnityEngine_Renderer_o *)this,
                                                                                                 0);
                                                v48 = v4->fields._movInfo_5__2;
                                                if ( v48 )
                                                {
                                                  v49 = this;
                                                  if ( v48->fields.cameraType == 1 )
                                                    BattleMoviePlayer__ShowBg(
                                                      _4__this,
                                                      v4->fields._fadeinTime_5__5 > 0.0,
                                                      0);
                                                  if ( v4->fields._fadeinTime_5__5 <= 0.0 )
                                                  {
                                                    this = (BattleMoviePlayer__PlayMovie_d__44_o *)_4__this->fields.currController;
                                                    if ( !this )
                                                      goto LABEL_189;
                                                    this = (BattleMoviePlayer__PlayMovie_d__44_o *)UnityEngine_Component__GetComponent_object_(
                                                                                                     (UnityEngine_Component_o *)this,
                                                                                                     (const MethodInfo_30DE428 *)Method_UnityEngine_Component_GetComponent_MeshRenderer___);
                                                    if ( !this )
                                                      goto LABEL_189;
                                                    UnityEngine_Renderer__set_enabled(
                                                      (UnityEngine_Renderer_o *)this,
                                                      1,
                                                      0);
                                                  }
                                                  else
                                                  {
                                                    if ( !v49 )
                                                      goto LABEL_189;
                                                    if ( _4__this->fields.OverrideZDepth )
                                                      v50 = 8;
                                                    else
                                                      v50 = 4;
                                                    UnityEngine_Material__SetInt(
                                                      (UnityEngine_Material_o *)v49,
                                                      (System_String_o *)StringLiteral_16419/*"_ZTestMode"*/,
                                                      v50,
                                                      0);
                                                    UnityEngine_Material__SetFloat(
                                                      (UnityEngine_Material_o *)v49,
                                                      (System_String_o *)StringLiteral_16385/*"_Transparency"*/,
                                                      1.0,
                                                      0);
                                                  }
                                                  v51 = v4->fields._movInfo_5__2;
                                                  if ( !v51 )
                                                    goto LABEL_189;
                                                  if ( v51->fields.isBackMovie )
                                                  {
                                                    if ( !v49 )
                                                      goto LABEL_189;
                                                    UnityEngine_Material__SetInt(
                                                      (UnityEngine_Material_o *)v49,
                                                      (System_String_o *)StringLiteral_16420/*"_ZWriteMode"*/,
                                                      0,
                                                      0);
                                                  }
                                                  v52 = _4__this->fields.currController;
                                                  if ( v52 )
                                                  {
                                                    this = (BattleMoviePlayer__PlayMovie_d__44_o *)v52->fields._player_k__BackingField;
                                                    if ( this )
                                                    {
                                                      this = (BattleMoviePlayer__PlayMovie_d__44_o *)CriMana_Player__GetDisplayedFrameNo((CriMana_Player_o *)this, 0);
                                                      v53 = v4->fields._movInfo_5__2;
                                                      v4->fields._currentFrame_5__3 = (int)this;
                                                      if ( v53 )
                                                      {
                                                        v54 = 1.0;
                                                        if ( v53->fields.ignoreTimeScale
                                                          || (v54 = UnityEngine_Time__get_timeScale(0),
                                                              (v53 = v4->fields._movInfo_5__2) != 0) )
                                                        {
                                                          v4->fields._playSpeed_5__8 = v54 * v53->fields.playSpeed;
                                                          v4->fields._isLoopMovie_5__9 = v53->fields.loop;
LABEL_114:
                                                          if ( v4->fields._isLoopMovie_5__9
                                                            || (float)((float)(v4->fields._skipFrame_5__4
                                                                             + (float)v4->fields._currentFrame_5__3)
                                                                     + v4->fields._playSpeed_5__8) < v4->fields._fadeoutTime_5__6 )
                                                          {
                                                            v4->fields.__2__current = 0;
                                                            p__2__current = (CGThumbnailListItem_o *)&v4->fields.__2__current;
                                                            sub_1C36FFC(p__2__current, 0, v2, v3);
                                                            LODWORD(p__2__current[-1].fields._ThumbnailSpritePath_k__BackingField) = 2;
                                                            return 1;
                                                          }
                                                          goto LABEL_117;
                                                        }
                                                      }
                                                    }
                                                  }
                                                }
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
      goto LABEL_189;
    case 0:
      this = (BattleMoviePlayer__PlayMovie_d__44_o *)v4->fields.movieObj;
      v4->fields.__1__state = -1;
      if ( !this )
        goto LABEL_189;
      this = (BattleMoviePlayer__PlayMovie_d__44_o *)UnityEngine_GameObject__GetComponent_object_(
                                                       (UnityEngine_GameObject_o *)this,
                                                       (const MethodInfo_313F1D8 *)Method_UnityEngine_GameObject_GetComponent_CriManaMovieController___);
      if ( !_4__this )
        goto LABEL_189;
      _4__this->fields.currController = (struct CriManaMovieController_o *)this;
      p_currController = &_4__this->fields.currController;
      sub_1C36FFC((CGThumbnailListItem_o *)&_4__this->fields.currController, (int32_t)this, v7, v8);
      _4__this->fields.currentMovieNum = v4->fields.num;
      v10 = (UnityEngine_Object_o *)_4__this->fields.currController;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( !UnityEngine_Object__op_Inequality(v10, 0, 0) )
        return 0;
      this = (BattleMoviePlayer__PlayMovie_d__44_o *)_4__this->fields.MovieInfoList;
      if ( !this )
        goto LABEL_189;
      Item = System_Collections_Generic_List_object___get_Item(
               (System_Collections_Generic_List_object__o *)this,
               v4->fields.num,
               (const MethodInfo_37A2D54 *)Method_System_Collections_Generic_List_BattleMoviePlayer_MovieInfo__get_Item__);
      v4->fields._movInfo_5__2 = (struct BattleMoviePlayer_MovieInfo_o *)Item;
      p_movInfo_5__2 = &v4->fields._movInfo_5__2;
      sub_1C36FFC((CGThumbnailListItem_o *)&v4->fields._movInfo_5__2, (int32_t)Item, v13, v14);
      if ( !*p_currController )
        goto LABEL_189;
      v15 = *p_movInfo_5__2;
      if ( !*p_movInfo_5__2 )
        goto LABEL_189;
      v16 = (*p_currController)->fields._player_k__BackingField;
      v17 = 1.0;
      if ( !v15->fields.ignoreTimeScale )
      {
        v17 = UnityEngine_Time__get_timeScale(0);
        v15 = *p_movInfo_5__2;
        if ( !*p_movInfo_5__2 )
          goto LABEL_189;
      }
      if ( !v16 )
        goto LABEL_189;
      CriMana_Player__SetSpeed(v16, v17 * v15->fields.playSpeed, 0);
      if ( !*p_currController )
        goto LABEL_189;
      this = (BattleMoviePlayer__PlayMovie_d__44_o *)(*p_currController)->fields._player_k__BackingField;
      if ( !this )
        goto LABEL_189;
      CriMana_Player__Start((CriMana_Player_o *)this, 0);
      if ( !*p_currController )
        goto LABEL_189;
      this = (BattleMoviePlayer__PlayMovie_d__44_o *)(*p_currController)->fields._player_k__BackingField;
      if ( !this )
        goto LABEL_189;
      this = (BattleMoviePlayer__PlayMovie_d__44_o *)CriMana_Player__GetDisplayedFrameNo((CriMana_Player_o *)this, 0);
      v20 = v4->fields._movInfo_5__2;
      *(_QWORD *)&v4->fields._currentFrame_5__3 = (unsigned int)this;
      if ( !v20 )
        goto LABEL_189;
      v4->fields._fadeinTime_5__5 = v20->fields.fadeinTime;
      if ( ((unsigned int)this & 0x80000000) != 0 )
      {
LABEL_23:
        v4->fields.__2__current = 0;
        v21 = (CGThumbnailListItem_o *)&v4->fields.__2__current;
        sub_1C36FFC(v21, 0, v18, v19);
        result = 1;
        LODWORD(v21[-1].fields._ThumbnailSpritePath_k__BackingField) = 1;
        return result;
      }
      goto LABEL_50;
  }
  return 0;
}


Il2CppObject *BattleMoviePlayer__PlayMovie_d__44__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        BattleMoviePlayer__PlayMovie_d__44_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __noreturn BattleMoviePlayer__PlayMovie_d__44__System_Collections_IEnumerator_Reset(
        BattleMoviePlayer__PlayMovie_d__44_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1C3706C(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C372A4(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1C3706C(&Method_BattleMoviePlayer__PlayMovie_d__44_System_Collections_IEnumerator_Reset__);
  sub_1C37180(v3, v4);
}


Il2CppObject *BattleMoviePlayer__PlayMovie_d__44__System_Collections_IEnumerator_get_Current(
        BattleMoviePlayer__PlayMovie_d__44_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void BattleMoviePlayer__PlayMovie_d__44__System_IDisposable_Dispose(
        BattleMoviePlayer__PlayMovie_d__44_o *this,
        const MethodInfo *method)
{
  ;
}


void BattleMoviePlayer__StartMovie_d__35___ctor(
        BattleMoviePlayer__StartMovie_d__35_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.__1__state = 1__state;
}


bool BattleMoviePlayer__StartMovie_d__35__MoveNext(
        BattleMoviePlayer__StartMovie_d__35_o *this,
        const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  BattleMoviePlayer__StartMovie_d__35_o *v4; // x19
  struct BattleMoviePlayer_o *_4__this; // x20
  UnityEngine_Object_o *currMovieObj; // x21
  struct System_Collections_Generic_List_BattleMoviePlayer_MovieInfo__o *MovieInfoList; // x8
  System_Collections_IEnumerator_o *v8; // x0
  UnityEngine_Coroutine_o *started; // x0
  CGThumbnailListItem_o *p__2__current; // x19
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  BattlePerformance_o *perf; // x0
  int v14; // w8
  struct UnityEngine_GameObject_o *v15; // x1
  struct UnityEngine_GameObject_o *nextMovieObj; // x1
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  int32_t v19; // w2
  const MethodInfo *v20; // x3
  System_Collections_IEnumerator_o *v21; // x0
  struct System_Collections_Generic_List_BattleMoviePlayer_MovieInfo__o *v22; // x8
  int32_t v23; // w1
  UnityEngine_Object_o *v24; // x21
  struct System_Collections_Generic_List_BattleMoviePlayer_MovieInfo__o *v25; // x9
  struct UnityEngine_GameObject_o *v26; // x1
  int32_t v27; // w2
  const MethodInfo *v28; // x3
  int32_t v29; // w2
  const MethodInfo *v30; // x3
  struct System_Collections_Generic_List_BattleMoviePlayer_MovieInfo__o *v31; // x8
  int size; // w8
  System_Collections_IEnumerator_o *v33; // x0
  System_Collections_Generic_List_T__o *v34; // x22
  System_Collections_IEnumerator_o *v35; // x21
  BattleMoviePlayer___c_c *v36; // x8
  System_Func_object__bool__o *_9__35_0; // x23
  Il2CppObject *v38; // x24
  struct BattleMoviePlayer___c_StaticFields *static_fields; // x0
  int32_t v40; // w2
  const MethodInfo *v41; // x3
  UnityEngine_Coroutine_o *v42; // x0
  CGThumbnailListItem_o *v43; // x19
  int32_t v44; // w2
  const MethodInfo *v45; // x3
  int v46; // w8
  System_Collections_IEnumerator_o *v47; // x0
  UnityEngine_Coroutine_o *v48; // x0
  int32_t v49; // w2
  const MethodInfo *v50; // x3

  v4 = this;
  if ( (byte_4C45B02 & 1) == 0 )
  {
    sub_1C37058(&Method_BasicHelper_Any_BattleMoviePlayer_MovieInfo___);
    sub_1C37058(&System_Func_BattleMoviePlayer_MovieInfo__bool__TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_List_BattleMoviePlayer_MovieInfo__get_Count__);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&Method_BattleMoviePlayer___c__StartMovie_b__35_0__);
    this = (BattleMoviePlayer__StartMovie_d__35_o *)sub_1C37058(&BattleMoviePlayer___c_TypeInfo);
    byte_4C45B02 = 1;
  }
  _4__this = v4->fields.__4__this;
  switch ( v4->fields.__1__state )
  {
    case 0:
      v4->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_45;
      currMovieObj = (UnityEngine_Object_o *)_4__this->fields.currMovieObj;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      this = (BattleMoviePlayer__StartMovie_d__35_o *)UnityEngine_Object__op_Inequality(currMovieObj, 0, 0);
      if ( ((unsigned __int8)this & 1) == 0 )
        goto LABEL_12;
      MovieInfoList = _4__this->fields.MovieInfoList;
      if ( !MovieInfoList )
        goto LABEL_45;
      if ( MovieInfoList->fields._size >= 1 )
      {
        v8 = BattleMoviePlayer__PlayMovie(_4__this, _4__this->fields.currMovieObj, 0, 0);
        started = UnityEngine_MonoBehaviour__StartCoroutine_71252324((UnityEngine_MonoBehaviour_o *)_4__this, v8, 0);
        v4->fields.__2__current = (Il2CppObject *)started;
        p__2__current = (CGThumbnailListItem_o *)&v4->fields.__2__current;
        sub_1C36FFC(p__2__current, (int32_t)started, v11, v12);
        LOBYTE(perf) = 1;
        LODWORD(p__2__current[-1].fields._ThumbnailSpritePath_k__BackingField) = 1;
        return (char)perf;
      }
LABEL_12:
      v14 = 0;
      v4->fields._i_5__2 = 0;
      break;
    case 1:
      v4->fields.__1__state = -1;
      goto LABEL_12;
    case 2:
      v4->fields.__1__state = -1;
      goto LABEL_23;
    case 3:
      v4->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_45;
      BattleMoviePlayer__Dispose(_4__this, 0);
      goto LABEL_39;
    default:
      goto LABEL_41;
  }
  while ( 1 )
  {
    if ( !_4__this )
      goto LABEL_45;
    v25 = _4__this->fields.MovieInfoList;
    if ( !v25 )
      goto LABEL_45;
    if ( v14 >= v25->fields._size - 1 || _4__this->fields._ForceFadeout_k__BackingField )
    {
      v26 = _4__this->fields.currMovieObj;
      _4__this->fields.pastMovieObj = v26;
      sub_1C36FFC((CGThumbnailListItem_o *)&_4__this->fields.pastMovieObj, (int32_t)v26, v2, v3);
      _4__this->fields.currMovieObj = 0;
      sub_1C36FFC((CGThumbnailListItem_o *)&_4__this->fields.currMovieObj, 0, v27, v28);
      _4__this->fields.nextMovieObj = 0;
      sub_1C36FFC((CGThumbnailListItem_o *)&_4__this->fields.nextMovieObj, 0, v29, v30);
      if ( !_4__this->fields._ForceFadeout_k__BackingField )
      {
        v31 = _4__this->fields.MovieInfoList;
        if ( !v31 )
LABEL_45:
          sub_1C372B4(this);
        size = v31->fields._size;
        if ( size >= 1 )
        {
          v33 = BattleMoviePlayer__PlayMovieFadeOut(_4__this, _4__this->fields.pastMovieObj, size - 1, 0, 0);
          v34 = (System_Collections_Generic_List_T__o *)_4__this->fields.MovieInfoList;
          v35 = v33;
          v36 = BattleMoviePlayer___c_TypeInfo;
          if ( !BattleMoviePlayer___c_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BattleMoviePlayer___c_TypeInfo);
            v36 = BattleMoviePlayer___c_TypeInfo;
          }
          _9__35_0 = (System_Func_object__bool__o *)v36->static_fields->__9__35_0;
          if ( !_9__35_0 )
          {
            if ( !v36->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(v36);
              v36 = BattleMoviePlayer___c_TypeInfo;
            }
            v38 = (Il2CppObject *)v36->static_fields->__9;
            _9__35_0 = (System_Func_object__bool__o *)sub_1C372A4(System_Func_BattleMoviePlayer_MovieInfo__bool__TypeInfo);
            System_Func_object__bool____ctor(_9__35_0, v38, Method_BattleMoviePlayer___c__StartMovie_b__35_0__, 0);
            static_fields = BattleMoviePlayer___c_TypeInfo->static_fields;
            static_fields->__9__35_0 = (struct System_Func_BattleMoviePlayer_MovieInfo__bool__o *)_9__35_0;
            sub_1C36FFC((CGThumbnailListItem_o *)&static_fields->__9__35_0, (int32_t)_9__35_0, v40, v41);
          }
          if ( BasicHelper__Any_object_(
                 v34,
                 (System_Func_T__bool__o *)_9__35_0,
                 (const MethodInfo_30D0FF8 *)Method_BasicHelper_Any_BattleMoviePlayer_MovieInfo___) )
          {
            BattleMoviePlayer__ShowBg(_4__this, 1, 0);
          }
          v42 = UnityEngine_MonoBehaviour__StartCoroutine_71252324((UnityEngine_MonoBehaviour_o *)_4__this, v35, 0);
          v4->fields.__2__current = (Il2CppObject *)v42;
          v43 = (CGThumbnailListItem_o *)&v4->fields.__2__current;
          sub_1C36FFC(v43, (int32_t)v42, v44, v45);
          v46 = 3;
          goto LABEL_43;
        }
LABEL_39:
        perf = _4__this->fields.perf;
        if ( !perf )
          return (char)perf;
        BattlePerformance__OnBattleMovieEnd(perf, 0);
      }
LABEL_41:
      LOBYTE(perf) = 0;
      return (char)perf;
    }
    v15 = _4__this->fields.currMovieObj;
    _4__this->fields.pastMovieObj = v15;
    sub_1C36FFC((CGThumbnailListItem_o *)&_4__this->fields.pastMovieObj, (int32_t)v15, v2, v3);
    nextMovieObj = _4__this->fields.nextMovieObj;
    _4__this->fields.currMovieObj = nextMovieObj;
    sub_1C36FFC((CGThumbnailListItem_o *)&_4__this->fields.currMovieObj, (int32_t)nextMovieObj, v17, v18);
    _4__this->fields.nextMovieObj = 0;
    sub_1C36FFC((CGThumbnailListItem_o *)&_4__this->fields.nextMovieObj, 0, v19, v20);
    v21 = BattleMoviePlayer__PlayMovieFadeOut(_4__this, _4__this->fields.pastMovieObj, v4->fields._i_5__2, 0, 0);
    this = (BattleMoviePlayer__StartMovie_d__35_o *)UnityEngine_MonoBehaviour__StartCoroutine_71252324(
                                                      (UnityEngine_MonoBehaviour_o *)_4__this,
                                                      v21,
                                                      0);
    v22 = _4__this->fields.MovieInfoList;
    if ( !v22 )
      goto LABEL_45;
    v23 = v4->fields._i_5__2 + 2;
    if ( v23 < v22->fields._size )
      BattleMoviePlayer__GetMoviePanelAdd(_4__this, v23, 0);
    v24 = (UnityEngine_Object_o *)_4__this->fields.currMovieObj;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    this = (BattleMoviePlayer__StartMovie_d__35_o *)UnityEngine_Object__op_Inequality(v24, 0, 0);
    if ( ((unsigned __int8)this & 1) != 0 )
      break;
LABEL_23:
    v14 = v4->fields._i_5__2 + 1;
    v4->fields._i_5__2 = v14;
  }
  v47 = BattleMoviePlayer__PlayMovie(_4__this, _4__this->fields.currMovieObj, v4->fields._i_5__2 + 1, 0);
  v48 = UnityEngine_MonoBehaviour__StartCoroutine_71252324((UnityEngine_MonoBehaviour_o *)_4__this, v47, 0);
  v4->fields.__2__current = (Il2CppObject *)v48;
  v43 = (CGThumbnailListItem_o *)&v4->fields.__2__current;
  sub_1C36FFC(v43, (int32_t)v48, v49, v50);
  v46 = 2;
LABEL_43:
  LODWORD(v43[-1].fields._ThumbnailSpritePath_k__BackingField) = v46;
  LOBYTE(perf) = 1;
  return (char)perf;
}


Il2CppObject *BattleMoviePlayer__StartMovie_d__35__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        BattleMoviePlayer__StartMovie_d__35_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __noreturn BattleMoviePlayer__StartMovie_d__35__System_Collections_IEnumerator_Reset(
        BattleMoviePlayer__StartMovie_d__35_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1C3706C(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C372A4(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1C3706C(&Method_BattleMoviePlayer__StartMovie_d__35_System_Collections_IEnumerator_Reset__);
  sub_1C37180(v3, v4);
}


Il2CppObject *BattleMoviePlayer__StartMovie_d__35__System_Collections_IEnumerator_get_Current(
        BattleMoviePlayer__StartMovie_d__35_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void BattleMoviePlayer__StartMovie_d__35__System_IDisposable_Dispose(
        BattleMoviePlayer__StartMovie_d__35_o *this,
        const MethodInfo *method)
{
  ;
}


void BattleMoviePlayer___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_4C45AFD & 1) == 0 )
  {
    sub_1C37058(&BattleMoviePlayer___c_TypeInfo);
    byte_4C45AFD = 1;
  }
  v1 = (Il2CppObject *)sub_1C372A4(BattleMoviePlayer___c_TypeInfo);
  System_Object___ctor(v1, 0);
  BattleMoviePlayer___c_TypeInfo->static_fields->__9 = (struct BattleMoviePlayer___c_o *)v1;
  sub_1C36FFC((CGThumbnailListItem_o *)BattleMoviePlayer___c_TypeInfo->static_fields, (int32_t)v1, v2, v3);
}


void BattleMoviePlayer___c___ctor(BattleMoviePlayer___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool BattleMoviePlayer___c___Dispose_b__27_0(
        BattleMoviePlayer___c_o *this,
        BattleMoviePlayer_MovieInfo_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C372B4(this);
  return x->fields.cameraType == 1;
}


bool BattleMoviePlayer___c___FadeoutDeleteMovie_b__38_0(
        BattleMoviePlayer___c_o *this,
        BattleMoviePlayer_MovieInfo_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C372B4(this);
  return x->fields.cameraType == 1;
}


bool BattleMoviePlayer___c___PauseMovie_b__36_0(
        BattleMoviePlayer___c_o *this,
        BattleMoviePlayer_MovieInfo_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C372B4(this);
  return x->fields.cameraType == 1;
}


bool BattleMoviePlayer___c___StartMovie_b__35_0(
        BattleMoviePlayer___c_o *this,
        BattleMoviePlayer_MovieInfo_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C372B4(this);
  return x->fields.cameraType == 1;
}