void BattleMoviePlayer___cctor(const MethodInfo *method)
{
  struct BattleMoviePlayer_StaticFields *static_fields; // x8

  if ( (byte_4CB8E8F & 1) == 0 )
  {
    sub_1C6BA08(&BattleMoviePlayer_TypeInfo);
    byte_4CB8E8F = 1;
  }
  static_fields = BattleMoviePlayer_TypeInfo->static_fields;
  *(_OWORD *)&static_fields->BackMovieScale = xmmword_CED2C0;
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

  if ( (byte_4CB8E8E & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Collections_Generic_List_GameObject___ctor__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_BattleMoviePlayer_MovieInfo___ctor__);
    sub_1C6BA08(&System_Collections_Generic_List_BattleMoviePlayer_MovieInfo__TypeInfo);
    sub_1C6BA08(&System_Collections_Generic_List_GameObject__TypeInfo);
    byte_4CB8E8E = 1;
  }
  this->fields.KeepStartPosition = 1;
  v3 = (System_Collections_Generic_List_object__o *)sub_1C6BC54(System_Collections_Generic_List_BattleMoviePlayer_MovieInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_3800140 *)Method_System_Collections_Generic_List_BattleMoviePlayer_MovieInfo___ctor__);
  this->fields.MovieInfoList = (struct System_Collections_Generic_List_BattleMoviePlayer_MovieInfo__o *)v3;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.MovieInfoList, (int32_t)v3, v4, v5);
  v6 = (System_Collections_Generic_List_object__o *)sub_1C6BC54(System_Collections_Generic_List_GameObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v6,
    (const MethodInfo_3800140 *)Method_System_Collections_Generic_List_GameObject___ctor__);
  this->fields.ObjList = (struct System_Collections_Generic_List_GameObject__o *)v6;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.ObjList, (int32_t)v6, v7, v8);
  if ( !byte_4CAFC09 )
  {
    sub_1C6BA08(&UnityEngine_Vector3_TypeInfo);
    byte_4CAFC09 = 1;
  }
  v9 = UnityEngine_Vector3_TypeInfo;
  static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
  z = static_fields->zeroVector.fields.z;
  *(_QWORD *)&this->fields.startPanelPosition.fields.x = *(_QWORD *)&static_fields->zeroVector.fields.x;
  this->fields.startPanelPosition.fields.z = z;
  if ( byte_4CAFC0E )
  {
    v12 = 0;
  }
  else
  {
    sub_1C6BA08(&UnityEngine_Vector3_TypeInfo);
    v9 = UnityEngine_Vector3_TypeInfo;
    byte_4CAFC0E = 1;
    v12 = byte_4CAFC09 == 0;
  }
  v13 = v9->static_fields;
  v14 = v13->oneVector.fields.z;
  *(_QWORD *)&this->fields.startPanelScale.fields.x = *(_QWORD *)&v13->oneVector.fields.x;
  this->fields.startPanelScale.fields.z = v14;
  if ( v12 )
  {
    sub_1C6BA08(&UnityEngine_Vector3_TypeInfo);
    v9 = UnityEngine_Vector3_TypeInfo;
    byte_4CAFC09 = 1;
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
  if ( (byte_4CB8E82 & 1) == 0 )
  {
    sub_1C6BA08(&BattleMoviePlayer_TypeInfo);
    sub_1C6BA08(&Method_UnityEngine_Component_GetComponent_BattlePerformance___);
    sub_1C6BA08(&Method_UnityEngine_GameObject_GetComponent_BattleCameraFullScaleSetter___);
    sub_1C6BA08(&Method_UnityEngine_GameObject_GetComponent_CriManaMovieController___);
    sub_1C6BA08(&Method_UnityEngine_GameObject_GetComponent_MeshRenderer___);
    sub_1C6BA08(&Method_UnityEngine_GameObject_TryGetComponent_BattleCameraFullScaleSetter___);
    sub_1C6BA08(&Method_System_Collections_Generic_List_GameObject__Add__);
    sub_1C6BA08(&UnityEngine_Material_TypeInfo);
    sub_1C6BA08(&Method_UnityEngine_Object_Instantiate_GameObject____78656176);
    this = (BattleMoviePlayer_o *)sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    byte_4CB8E82 = 1;
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
    this = (BattleMoviePlayer_o *)UnityEngine_Object__Instantiate_object__52199488(
                                    moviePrefab,
                                    transform,
                                    (const MethodInfo_31C8040 *)Method_UnityEngine_Object_Instantiate_GameObject____78656176);
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
        *(const MethodInfo_3800974 **)(*(_QWORD *)(v25[4] + 192LL) + 112LL));
    }
    else
    {
      v27 = &items->obj.klass + size;
      ObjList->fields._size = size + 1;
      v27[4] = (Il2CppClass *)v16;
      sub_1C6B9AC((CGThumbnailListItem_o *)(v27 + 4), (int32_t)v16, v21, v22);
    }
    if ( !v16 )
      goto LABEL_63;
    if ( UnityEngine_GameObject__TryGetComponent_object_(
           (UnityEngine_GameObject_o *)v16,
           &v48,
           (const MethodInfo_31943BC *)Method_UnityEngine_GameObject_TryGetComponent_BattleCameraFullScaleSetter___) )
    {
      this = (BattleMoviePlayer_o *)v48;
      if ( !v48 )
        goto LABEL_63;
      BattleCameraFullScaleSetter__Initialize(
        (BattleCameraFullScaleSetter_o *)v48,
        v6->fields.perf,
        0,
        movieInfo->fields.isFlip,
        0);
    }
    UnityEngine_GameObject__set_layer((UnityEngine_GameObject_o *)v16, 11, 0);
    this = (BattleMoviePlayer_o *)UnityEngine_GameObject__GetComponent_object_(
                                    (UnityEngine_GameObject_o *)v16,
                                    (const MethodInfo_319312C *)Method_UnityEngine_GameObject_GetComponent_BattleCameraFullScaleSetter___);
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
                                    (const MethodInfo_3131B38 *)Method_UnityEngine_Component_GetComponent_BattlePerformance___);
    if ( !this )
      goto LABEL_63;
    v9 = this[1].fields.moviePrefab;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    this = (BattleMoviePlayer_o *)UnityEngine_Object__Instantiate_object__52199488(
                                    v8,
                                    (UnityEngine_Transform_o *)v9,
                                    (const MethodInfo_31C8040 *)Method_UnityEngine_Object_Instantiate_GameObject____78656176);
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
        *(const MethodInfo_3800974 **)(*(_QWORD *)(v14[4] + 192LL) + 112LL));
    }
    else
    {
      v17 = &v13->obj.klass + v15;
      v12->fields._size = v15 + 1;
      v17[4] = (Il2CppClass *)v16;
      sub_1C6B9AC((CGThumbnailListItem_o *)(v17 + 4), (int32_t)v16, v10, v11);
    }
    if ( !v16 )
      goto LABEL_63;
    if ( UnityEngine_GameObject__TryGetComponent_object_(
           (UnityEngine_GameObject_o *)v16,
           &component,
           (const MethodInfo_31943BC *)Method_UnityEngine_GameObject_TryGetComponent_BattleCameraFullScaleSetter___) )
    {
      this = (BattleMoviePlayer_o *)component;
      if ( !component )
        goto LABEL_63;
      BattleCameraFullScaleSetter__Initialize(
        (BattleCameraFullScaleSetter_o *)component,
        v6->fields.perf,
        1,
        movieInfo->fields.isFlip,
        0);
    }
    this = (BattleMoviePlayer_o *)UnityEngine_GameObject__GetComponent_object_(
                                    (UnityEngine_GameObject_o *)v16,
                                    (const MethodInfo_319312C *)Method_UnityEngine_GameObject_GetComponent_BattleCameraFullScaleSetter___);
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
                                    (const MethodInfo_319312C *)Method_UnityEngine_GameObject_GetComponent_MeshRenderer___);
    if ( !this )
      goto LABEL_63;
    material = UnityEngine_Renderer__get_material((UnityEngine_Renderer_o *)this, 0);
    v32 = (UnityEngine_Material_o *)sub_1C6BC54(UnityEngine_Material_TypeInfo);
    UnityEngine_Material___ctor_71522240(v32, material, 0);
    *p_baseMat = v32;
    sub_1C6B9AC((CGThumbnailListItem_o *)&v6->fields.baseMat, (int32_t)v32, v33, v34);
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
    sub_1C6BC60(this, movieInfo);
  }
LABEL_59:
  v44 = *p_baseMat;
  v45 = (UnityEngine_Material_o *)sub_1C6BC54(UnityEngine_Material_TypeInfo);
  UnityEngine_Material___ctor_71522240(v45, v44, 0);
  this = (BattleMoviePlayer_o *)UnityEngine_GameObject__GetComponent_object_(
                                  (UnityEngine_GameObject_o *)v16,
                                  (const MethodInfo_319312C *)Method_UnityEngine_GameObject_GetComponent_MeshRenderer___);
  if ( !this )
    goto LABEL_63;
  UnityEngine_Renderer__set_material((UnityEngine_Renderer_o *)this, v45, 0);
  this = (BattleMoviePlayer_o *)UnityEngine_GameObject__GetComponent_object_(
                                  (UnityEngine_GameObject_o *)v16,
                                  (const MethodInfo_319312C *)Method_UnityEngine_GameObject_GetComponent_CriManaMovieController___);
  if ( !this )
    goto LABEL_63;
  CriManaMovieMaterial__set_material((CriManaMovieMaterial_o *)this, v45, 0);
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)v16, 1, 0);
  this = (BattleMoviePlayer_o *)UnityEngine_GameObject__GetComponent_object_(
                                  (UnityEngine_GameObject_o *)v16,
                                  (const MethodInfo_319312C *)Method_UnityEngine_GameObject_GetComponent_MeshRenderer___);
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
        bool isFlip,
        const MethodInfo *method)
{
  System_Collections_Generic_List_int__o *v21; // x19
  System_Collections_Generic_List_float__o *v22; // x20
  System_Collections_Generic_List_float__o *v24; // x23
  const MethodInfo_38261F8 **v25; // x28
  int32_t v26; // w27
  BattleMoviePlayer_o *v27; // x25
  float v28; // s8
  float v29; // s9
  int32_t v30; // w19
  float Item; // s10
  BattleMoviePlayer_o *v32; // x20
  float v33; // s11
  System_String_o *v34; // x26
  float v35; // s12
  const MethodInfo_38261F8 **v36; // x22
  System_Collections_Generic_List_float__o *v37; // x25
  System_Collections_Generic_List_object__o *MovieInfoList; // x28
  bool IgnoreTimeScale; // w19
  bool v40; // w20
  bool v41; // w21
  bool flip; // w23
  BattleMoviePlayer_MovieInfo_o *v43; // x29
  int32_t v44; // w2
  const MethodInfo *v45; // x3
  struct System_Object_array *items; // x8
  _QWORD *v47; // x9
  __int64 size; // x10
  Il2CppClass **v49; // x0
  const MethodInfo *v50; // [xsp+8h] [xbp-F8h]
  System_Collections_Generic_List_float__o *v51; // [xsp+18h] [xbp-E8h]
  System_Collections_Generic_List_float__o *v52; // [xsp+20h] [xbp-E0h]
  System_Collections_Generic_List_UnityEvent__o *v53; // [xsp+30h] [xbp-D0h]
  BattleMoviePlayer_o *v57; // [xsp+50h] [xbp-B0h]
  UnityEngine_Events_UnityEvent_o *eff; // [xsp+58h] [xbp-A8h]
  int32_t v59; // [xsp+68h] [xbp-98h]
  int32_t v60; // [xsp+6Ch] [xbp-94h]

  v57 = this;
  if ( (byte_4CB8E8D & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Collections_Generic_List_BattleMoviePlayer_MovieInfo__Add__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_float__get_Count__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_BattleMoviePlayer_PathType__get_Count__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_UnityEvent__get_Count__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_string__get_Count__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_int__get_Count__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_string__get_Item__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_UnityEvent__get_Item__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_BattleMoviePlayer_PathType__get_Item__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_int__get_Item__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_float__get_Item__);
    sub_1C6BA08(&BattleMoviePlayer_MovieInfo_TypeInfo);
    this = (BattleMoviePlayer_o *)sub_1C6BA08(&StringLiteral_1/*""*/);
    byte_4CB8E8D = 1;
  }
  v57->fields.KeepStartPosition = keepStartPosition;
  v57->fields.OverrideZDepth = overrideZDepth;
  v57->fields.IgnoreTimeScale = ignoreTS;
  v57->fields.Loop = loop;
  v57->fields.IsBackMovie = isBackMovie;
  v57->fields.IsFlip = isFlip;
  if ( !path )
LABEL_47:
    sub_1C6BC60(this, type);
  v22 = valid;
  v21 = cam;
  if ( path->fields._size >= 1 )
  {
    v24 = effRest;
    v25 = (const MethodInfo_38261F8 **)&Method_System_Collections_Generic_List_float__get_Item__;
    v26 = 0;
    v53 = effect;
    v51 = speed;
    v52 = fadeout;
    do
    {
      this = (BattleMoviePlayer_o *)System_Collections_Generic_List_object___get_Item(
                                      (System_Collections_Generic_List_object__o *)path,
                                      v26,
                                      (const MethodInfo_38006A4 *)Method_System_Collections_Generic_List_string__get_Item__);
      if ( this )
      {
        if ( !fadeout )
          goto LABEL_47;
        if ( v26 < fadeout->fields._size )
        {
          if ( !v21 )
            goto LABEL_47;
          if ( v26 < v21->fields._size )
          {
            this = (BattleMoviePlayer_o *)type;
            if ( !type )
              goto LABEL_47;
            if ( v26 >= type->fields._size )
            {
              v60 = 0;
            }
            else
            {
              this = (BattleMoviePlayer_o *)System_Collections_Generic_List_Int32Enum___get_Item(
                                              (System_Collections_Generic_List_T__o *)type,
                                              v26,
                                              (const MethodInfo_37E5E8C *)Method_System_Collections_Generic_List_BattleMoviePlayer_PathType__get_Item__);
              v60 = (int)this;
            }
            if ( v26 >= path->fields._size )
            {
              v27 = (BattleMoviePlayer_o *)StringLiteral_1/*""*/;
            }
            else
            {
              this = (BattleMoviePlayer_o *)System_Collections_Generic_List_object___get_Item(
                                              (System_Collections_Generic_List_object__o *)path,
                                              v26,
                                              (const MethodInfo_38006A4 *)Method_System_Collections_Generic_List_string__get_Item__);
              v27 = this;
            }
            if ( !v22 )
              goto LABEL_47;
            v28 = 0.0;
            v29 = 0.0;
            if ( v26 < v22->fields._size )
              v29 = fmaxf(System_Collections_Generic_List_float___get_Item(v22, v26, *v25), 0.0);
            if ( v26 < fadeout->fields._size )
              v28 = fmaxf(System_Collections_Generic_List_float___get_Item(fadeout, v26, *v25), 1.0);
            if ( v26 >= v21->fields._size )
            {
              v30 = 0;
            }
            else
            {
              this = (BattleMoviePlayer_o *)System_Collections_Generic_List_int___get_Item(
                                              v21,
                                              v26,
                                              (const MethodInfo_37E3660 *)Method_System_Collections_Generic_List_int__get_Item__);
              v30 = (int)this;
            }
            if ( !speed )
              goto LABEL_47;
            Item = 1.0;
            if ( v26 < speed->fields._size )
              Item = System_Collections_Generic_List_float___get_Item(speed, v26, *v25);
            if ( !effect )
              goto LABEL_47;
            if ( v26 >= effect->fields._size )
            {
              v32 = 0;
            }
            else
            {
              this = (BattleMoviePlayer_o *)System_Collections_Generic_List_object___get_Item(
                                              (System_Collections_Generic_List_object__o *)effect,
                                              v26,
                                              (const MethodInfo_38006A4 *)Method_System_Collections_Generic_List_UnityEvent__get_Item__);
              v32 = this;
            }
            if ( !v24 )
              goto LABEL_47;
            v33 = 0.0;
            if ( v26 < v24->fields._size )
              v33 = System_Collections_Generic_List_float___get_Item(v24, v26, *v25);
            if ( !fadein )
              goto LABEL_47;
            v34 = (System_String_o *)v27;
            v35 = 0.0;
            eff = (UnityEngine_Events_UnityEvent_o *)v32;
            v59 = v30;
            if ( v26 < fadein->fields._size )
              v35 = System_Collections_Generic_List_float___get_Item(fadein, v26, *v25);
            v36 = v25;
            v37 = fadein;
            MovieInfoList = (System_Collections_Generic_List_object__o *)v57->fields.MovieInfoList;
            IgnoreTimeScale = v57->fields.IgnoreTimeScale;
            v40 = v57->fields.Loop;
            v41 = v57->fields.IsBackMovie;
            flip = v57->fields.IsFlip;
            v43 = (BattleMoviePlayer_MovieInfo_o *)sub_1C6BC54(BattleMoviePlayer_MovieInfo_TypeInfo);
            BattleMoviePlayer_MovieInfo___ctor(
              v43,
              v60,
              v34,
              v29,
              v28,
              v59,
              Item,
              eff,
              v33,
              IgnoreTimeScale,
              v35,
              v40,
              v41,
              flip,
              v50);
            if ( !MovieInfoList )
              goto LABEL_47;
            items = MovieInfoList->fields._items;
            v47 = Method_System_Collections_Generic_List_BattleMoviePlayer_MovieInfo__Add__;
            ++MovieInfoList->fields._version;
            if ( !items )
              goto LABEL_47;
            size = MovieInfoList->fields._size;
            if ( (unsigned int)size >= LODWORD(items->max_length) )
            {
              System_Collections_Generic_List_object___AddWithResize(
                MovieInfoList,
                (Il2CppObject *)v43,
                *(const MethodInfo_3800974 **)(*(_QWORD *)(v47[4] + 192LL) + 112LL));
            }
            else
            {
              v49 = &items->obj.klass + size;
              MovieInfoList->fields._size = size + 1;
              v49[4] = (Il2CppClass *)v43;
              sub_1C6B9AC((CGThumbnailListItem_o *)(v49 + 4), (int32_t)v43, v44, v45);
            }
            fadein = v37;
            v24 = effRest;
            effect = v53;
            v22 = valid;
            v21 = cam;
            v25 = v36;
            speed = v51;
            fadeout = v52;
          }
        }
      }
      ++v26;
    }
    while ( v26 < path->fields._size );
  }
}


void BattleMoviePlayer__Dispose(BattleMoviePlayer_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *perf; // x20
  struct System_Collections_Generic_List_GameObject__o *ObjList; // x0
  __int64 v5; // x1
  System_Collections_Generic_List_T__o *MovieInfoList; // x20
  BattleMoviePlayer___c_c *v7; // x0
  System_Func_object__bool__o *_9__28_0; // x21
  Il2CppObject *v9; // x22
  struct BattleMoviePlayer___c_StaticFields *static_fields; // x0
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  const MethodInfo *v13; // x2
  struct System_Collections_Generic_List_BattleMoviePlayer_MovieInfo__o *v14; // x8
  int32_t size; // w2
  int v16; // w9
  Il2CppObject *current; // x20
  struct System_Collections_Generic_List_GameObject__o *v18; // x8
  int32_t v19; // w2
  int v20; // w9
  UnityEngine_Object_o *gameObject; // x19
  System_Collections_Generic_List_Enumerator_object__o v22; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v23; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4CB8E81 & 1) == 0 )
  {
    sub_1C6BA08(&Method_BasicHelper_Any_BattleMoviePlayer_MovieInfo___);
    sub_1C6BA08(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_1C6BA08(&System_Func_BattleMoviePlayer_MovieInfo__bool__TypeInfo);
    sub_1C6BA08(&Method_System_Collections_Generic_List_GameObject__Clear__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_BattleMoviePlayer_MovieInfo__Clear__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    sub_1C6BA08(&Method_BattleMoviePlayer___c__Dispose_b__28_0__);
    sub_1C6BA08(&BattleMoviePlayer___c_TypeInfo);
    byte_4CB8E81 = 1;
  }
  memset(&v23, 0, sizeof(v23));
  perf = (UnityEngine_Object_o *)this->fields.perf;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  ObjList = (struct System_Collections_Generic_List_GameObject__o *)UnityEngine_Object__op_Inequality(perf, 0, 0);
  if ( ((unsigned __int8)ObjList & 1) != 0 )
  {
    MovieInfoList = (System_Collections_Generic_List_T__o *)this->fields.MovieInfoList;
    v7 = BattleMoviePlayer___c_TypeInfo;
    if ( !BattleMoviePlayer___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleMoviePlayer___c_TypeInfo);
      v7 = BattleMoviePlayer___c_TypeInfo;
    }
    _9__28_0 = (System_Func_object__bool__o *)v7->static_fields->__9__28_0;
    if ( !_9__28_0 )
    {
      if ( !v7->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v7);
        v7 = BattleMoviePlayer___c_TypeInfo;
      }
      v9 = (Il2CppObject *)v7->static_fields->__9;
      _9__28_0 = (System_Func_object__bool__o *)sub_1C6BC54(System_Func_BattleMoviePlayer_MovieInfo__bool__TypeInfo);
      System_Func_object__bool____ctor(_9__28_0, v9, Method_BattleMoviePlayer___c__Dispose_b__28_0__, 0);
      static_fields = BattleMoviePlayer___c_TypeInfo->static_fields;
      static_fields->__9__28_0 = (struct System_Func_BattleMoviePlayer_MovieInfo__bool__o *)_9__28_0;
      sub_1C6B9AC((CGThumbnailListItem_o *)&static_fields->__9__28_0, (int32_t)_9__28_0, v11, v12);
    }
    ObjList = (struct System_Collections_Generic_List_GameObject__o *)BasicHelper__Any_object_(
                                                                        MovieInfoList,
                                                                        (System_Func_T__bool__o *)_9__28_0,
                                                                        (const MethodInfo_3124430 *)Method_BasicHelper_Any_BattleMoviePlayer_MovieInfo___);
    if ( ((unsigned __int8)ObjList & 1) != 0 )
      BattleMoviePlayer__ShowBg(this, 1, v13);
  }
  v14 = this->fields.MovieInfoList;
  if ( !v14 )
    goto LABEL_32;
  size = v14->fields._size;
  v16 = v14->fields._version + 1;
  v14->fields._size = 0;
  v14->fields._version = v16;
  if ( size >= 1 )
    System_Array__Clear((System_Array_o *)v14->fields._items, 0, size, 0);
  ObjList = this->fields.ObjList;
  if ( !ObjList )
    goto LABEL_32;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v22,
    (System_Collections_Generic_List_object__o *)ObjList,
    (const MethodInfo_380146C *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v23 = v22;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v23,
            (const MethodInfo_3586524 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v23.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0, 0) )
    {
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      UnityEngine_Object__Destroy_71659676((UnityEngine_Object_o *)current, 0);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v23,
    (const MethodInfo_3586520 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  v18 = this->fields.ObjList;
  if ( !v18 )
LABEL_32:
    sub_1C6BC60(ObjList, v5);
  v19 = v18->fields._size;
  v20 = v18->fields._version + 1;
  v18->fields._size = 0;
  v18->fields._version = v20;
  if ( v19 >= 1 )
    System_Array__Clear((System_Array_o *)v18->fields._items, 0, v19, 0);
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  UnityEngine_Object__Destroy_71659676(gameObject, 0);
}


System_Collections_IEnumerator_o *BattleMoviePlayer__FadeoutDeleteMovie(
        BattleMoviePlayer_o *this,
        System_Action_o *FadeOuted,
        const MethodInfo *method)
{
  __int64 v5; // x21
  int32_t v6; // w2
  const MethodInfo *v7; // x3
  int32_t v8; // w2
  const MethodInfo *v9; // x3

  if ( (byte_4CB8E88 & 1) == 0 )
  {
    sub_1C6BA08(&BattleMoviePlayer__FadeoutDeleteMovie_d__39_TypeInfo);
    byte_4CB8E88 = 1;
  }
  v5 = sub_1C6BC54(BattleMoviePlayer__FadeoutDeleteMovie_d__39_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  *(_DWORD *)(v5 + 16) = 0;
  *(_QWORD *)(v5 + 32) = this;
  sub_1C6B9AC((CGThumbnailListItem_o *)(v5 + 32), (int32_t)this, v6, v7);
  *(_QWORD *)(v5 + 40) = FadeOuted;
  sub_1C6B9AC((CGThumbnailListItem_o *)(v5 + 40), (int32_t)FadeOuted, v8, v9);
  return (System_Collections_IEnumerator_o *)v5;
}


// local variable allocation has failed, the output may be wrong!
void BattleMoviePlayer__GetMoviePanelAdd(BattleMoviePlayer_o *this, int32_t i, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *MovieInfoList; // x0
  Il2CppObject *Item; // x0
  const MethodInfo *v7; // x3
  struct UnityEngine_GameObject_o *BattleMoviePanel; // x0
  int32_t v9; // w2
  const MethodInfo *v10; // x3

  if ( (byte_4CB8E84 & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Collections_Generic_List_BattleMoviePlayer_MovieInfo__get_Count__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_BattleMoviePlayer_MovieInfo__get_Item__);
    byte_4CB8E84 = 1;
  }
  MovieInfoList = (System_Collections_Generic_List_object__o *)this->fields.MovieInfoList;
  if ( !MovieInfoList )
    sub_1C6BC60(0, *(_QWORD *)&i);
  if ( MovieInfoList->fields._size > i )
  {
    Item = System_Collections_Generic_List_object___get_Item(
             MovieInfoList,
             i,
             (const MethodInfo_38006A4 *)Method_System_Collections_Generic_List_BattleMoviePlayer_MovieInfo__get_Item__);
    BattleMoviePanel = BattleMoviePlayer__CreateBattleMoviePanel(this, (BattleMoviePlayer_MovieInfo_o *)Item, i, v7);
    this->fields.nextMovieObj = BattleMoviePanel;
    sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.nextMovieObj, (int32_t)BattleMoviePanel, v9, v10);
  }
}


System_Collections_IEnumerator_o *BattleMoviePlayer__GetMoviePanelFirst(
        BattleMoviePlayer_o *this,
        BattlePerformance_o *performance,
        const MethodInfo *method)
{
  __int64 v5; // x21
  int32_t v6; // w2
  const MethodInfo *v7; // x3
  int32_t v8; // w2
  const MethodInfo *v9; // x3

  if ( (byte_4CB8E83 & 1) == 0 )
  {
    sub_1C6BA08(&BattleMoviePlayer__GetMoviePanelFirst_d__31_TypeInfo);
    byte_4CB8E83 = 1;
  }
  v5 = sub_1C6BC54(BattleMoviePlayer__GetMoviePanelFirst_d__31_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  *(_DWORD *)(v5 + 16) = 0;
  *(_QWORD *)(v5 + 32) = this;
  sub_1C6B9AC((CGThumbnailListItem_o *)(v5 + 32), (int32_t)this, v6, v7);
  *(_QWORD *)(v5 + 40) = performance;
  sub_1C6B9AC((CGThumbnailListItem_o *)(v5 + 40), (int32_t)performance, v8, v9);
  return (System_Collections_IEnumerator_o *)v5;
}


void BattleMoviePlayer__InitMovie(
        BattleMoviePlayer_o *this,
        UnityEngine_GameObject_o *obj,
        int32_t pathnum,
        const MethodInfo *method)
{
  __int64 v7; // x1
  void *MovieInfoList; // x0
  System_String_o *v9; // x22
  AssetData_o *AssetStorageData; // x0
  System_String_o *v11; // x22
  int v12; // w8
  System_Collections_Generic_List_object__o *v13; // x8
  System_String_o *v14; // x21
  __int64 *v15; // x8
  System_Collections_Generic_List_object__o *v16; // x8
  UnityEngine_Object_o *Component_object; // x19

  if ( (byte_4CB8E8C & 1) == 0 )
  {
    sub_1C6BA08(&UnityEngine_Application_TypeInfo);
    sub_1C6BA08(&AssetManager_TypeInfo);
    sub_1C6BA08(&Method_UnityEngine_GameObject_GetComponent_CriManaMovieController___);
    sub_1C6BA08(&Method_System_Collections_Generic_List_BattleMoviePlayer_MovieInfo__get_Item__);
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    sub_1C6BA08(&StringLiteral_1039/*".usm"*/);
    sub_1C6BA08(&StringLiteral_1085/*"/StreamingAssets/"*/);
    sub_1C6BA08(&StringLiteral_1080/*"/Resources/"*/);
    byte_4CB8E8C = 1;
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
                      (const MethodInfo_38006A4 *)Method_System_Collections_Generic_List_BattleMoviePlayer_MovieInfo__get_Item__);
    if ( !MovieInfoList )
      goto LABEL_41;
    v9 = (System_String_o *)*((_QWORD *)MovieInfoList + 3);
    if ( !v9 )
      goto LABEL_41;
    if ( !System_String__EndsWith(*((System_String_o **)MovieInfoList + 3), (System_String_o *)StringLiteral_1039/*".usm"*/, 0) )
      v9 = System_String__Concat_63966792(v9, (System_String_o *)StringLiteral_1039/*".usm"*/, 0);
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    AssetStorageData = AssetManager__getAssetStorageData(v9, 0);
    v11 = AssetStorageData ? AssetData__get_Path(AssetStorageData, 0) : 0LL;
    MovieInfoList = this->fields.MovieInfoList;
    if ( !MovieInfoList )
      goto LABEL_41;
    MovieInfoList = System_Collections_Generic_List_object___get_Item(
                      (System_Collections_Generic_List_object__o *)MovieInfoList,
                      pathnum,
                      (const MethodInfo_38006A4 *)Method_System_Collections_Generic_List_BattleMoviePlayer_MovieInfo__get_Item__);
    if ( !MovieInfoList )
      goto LABEL_41;
    v12 = *((_DWORD *)MovieInfoList + 4);
    if ( v12 == 102 )
    {
      if ( !UnityEngine_Application_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Application_TypeInfo);
      MovieInfoList = UnityEngine_Application__get_dataPath(0);
      v16 = (System_Collections_Generic_List_object__o *)this->fields.MovieInfoList;
      if ( !v16 )
        goto LABEL_41;
      v14 = (System_String_o *)MovieInfoList;
      MovieInfoList = System_Collections_Generic_List_object___get_Item(
                        v16,
                        pathnum,
                        (const MethodInfo_38006A4 *)Method_System_Collections_Generic_List_BattleMoviePlayer_MovieInfo__get_Item__);
      if ( !MovieInfoList )
        goto LABEL_41;
      v15 = &StringLiteral_1080/*"/Resources/"*/;
    }
    else
    {
      if ( v12 != 101 )
        goto LABEL_31;
      if ( !UnityEngine_Application_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Application_TypeInfo);
      MovieInfoList = UnityEngine_Application__get_dataPath(0);
      v13 = (System_Collections_Generic_List_object__o *)this->fields.MovieInfoList;
      if ( !v13 )
        goto LABEL_41;
      v14 = (System_String_o *)MovieInfoList;
      MovieInfoList = System_Collections_Generic_List_object___get_Item(
                        v13,
                        pathnum,
                        (const MethodInfo_38006A4 *)Method_System_Collections_Generic_List_BattleMoviePlayer_MovieInfo__get_Item__);
      if ( !MovieInfoList )
        goto LABEL_41;
      v15 = &StringLiteral_1085/*"/StreamingAssets/"*/;
    }
    MovieInfoList = System_String__Concat_64005056(
                      v14,
                      (System_String_o *)*v15,
                      *((System_String_o **)MovieInfoList + 3),
                      0);
    v11 = (System_String_o *)MovieInfoList;
LABEL_31:
    if ( obj )
    {
      Component_object = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_object_(
                                                   obj,
                                                   (const MethodInfo_319312C *)Method_UnityEngine_GameObject_GetComponent_CriManaMovieController___);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( !UnityEngine_Object__op_Inequality(Component_object, 0, 0) )
        return;
      MovieInfoList = (void *)System_String__IsNullOrEmpty(v11, 0);
      if ( ((unsigned __int8)MovieInfoList & 1) != 0 )
        return;
      if ( Component_object )
      {
        MovieInfoList = Component_object[2].monitor;
        if ( MovieInfoList )
        {
          CriMana_Player__SetFile((CriMana_Player_o *)MovieInfoList, 0, v11, 0, 0);
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
    sub_1C6BC60(MovieInfoList, v7);
  }
}


void BattleMoviePlayer__Initialize(BattleMoviePlayer_o *this, BattlePerformance_o *perf, const MethodInfo *method)
{
  System_Collections_IEnumerator_o *MoviePanelFirst; // x1

  MoviePanelFirst = BattleMoviePlayer__GetMoviePanelFirst(this, perf, method);
  UnityEngine_MonoBehaviour__StartCoroutine_71644868((UnityEngine_MonoBehaviour_o *)this, MoviePanelFirst, 0);
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
  if ( (byte_4CB8E89 & 1) == 0 )
  {
    sub_1C6BA08(&BattleMoviePlayer_TypeInfo);
    this = (BattleMoviePlayer_o *)sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    byte_4CB8E89 = 1;
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
    sub_1C6BC60(this, method);
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
  __int64 v4; // x1
  UnityEngine_GameObject_o *Component_object; // x0

  if ( (byte_4CB8E87 & 1) == 0 )
  {
    sub_1C6BA08(&Method_UnityEngine_GameObject_GetComponent_CriManaMovieController___);
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    byte_4CB8E87 = 1;
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
                                                         (const MethodInfo_319312C *)Method_UnityEngine_GameObject_GetComponent_CriManaMovieController___)) == 0
    || (Component_object = (UnityEngine_GameObject_o *)Component_object[2].monitor) == 0 )
  {
    sub_1C6BC60(Component_object, v4);
  }
  return CriMana_Player__IsPaused((CriMana_Player_o *)Component_object, 0);
}


void BattleMoviePlayer__PauseMovie(BattleMoviePlayer_o *this, bool v, const MethodInfo *method)
{
  UnityEngine_Object_o *currMovieObj; // x21
  Il2CppObject *Component_object; // x0
  __int64 v7; // x1
  UnityEngine_GameObject_o *v8; // x21
  System_Collections_Generic_List_T__o *MovieInfoList; // x22
  BattleMoviePlayer___c_c *v10; // x0
  System_Func_object__bool__o *_9__37_0; // x23
  Il2CppObject *v12; // x24
  struct BattleMoviePlayer___c_StaticFields *static_fields; // x0
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  const MethodInfo *v16; // x2

  if ( (byte_4CB8E86 & 1) == 0 )
  {
    sub_1C6BA08(&Method_BasicHelper_Any_BattleMoviePlayer_MovieInfo___);
    sub_1C6BA08(&System_Func_BattleMoviePlayer_MovieInfo__bool__TypeInfo);
    sub_1C6BA08(&Method_UnityEngine_GameObject_GetComponent_CriManaMovieController___);
    sub_1C6BA08(&Method_UnityEngine_GameObject_GetComponent_MeshRenderer___);
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    sub_1C6BA08(&Method_BattleMoviePlayer___c__PauseMovie_b__37_0__);
    sub_1C6BA08(&BattleMoviePlayer___c_TypeInfo);
    byte_4CB8E86 = 1;
  }
  currMovieObj = (UnityEngine_Object_o *)this->fields.currMovieObj;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  Component_object = (Il2CppObject *)UnityEngine_Object__op_Equality(currMovieObj, 0, 0);
  if ( ((unsigned __int8)Component_object & 1) == 0 )
  {
    v8 = this->fields.currMovieObj;
    if ( !v8 )
      goto LABEL_19;
    Component_object = UnityEngine_GameObject__GetComponent_object_(
                         this->fields.currMovieObj,
                         (const MethodInfo_319312C *)Method_UnityEngine_GameObject_GetComponent_CriManaMovieController___);
    if ( !Component_object )
      goto LABEL_19;
    Component_object = (Il2CppObject *)Component_object[3].monitor;
    if ( !Component_object )
      goto LABEL_19;
    CriMana_Player__Pause((CriMana_Player_o *)Component_object, v, 0);
    MovieInfoList = (System_Collections_Generic_List_T__o *)this->fields.MovieInfoList;
    v10 = BattleMoviePlayer___c_TypeInfo;
    if ( !BattleMoviePlayer___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleMoviePlayer___c_TypeInfo);
      v10 = BattleMoviePlayer___c_TypeInfo;
    }
    _9__37_0 = (System_Func_object__bool__o *)v10->static_fields->__9__37_0;
    if ( !_9__37_0 )
    {
      if ( !v10->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v10);
        v10 = BattleMoviePlayer___c_TypeInfo;
      }
      v12 = (Il2CppObject *)v10->static_fields->__9;
      _9__37_0 = (System_Func_object__bool__o *)sub_1C6BC54(System_Func_BattleMoviePlayer_MovieInfo__bool__TypeInfo);
      System_Func_object__bool____ctor(_9__37_0, v12, Method_BattleMoviePlayer___c__PauseMovie_b__37_0__, 0);
      static_fields = BattleMoviePlayer___c_TypeInfo->static_fields;
      static_fields->__9__37_0 = (struct System_Func_BattleMoviePlayer_MovieInfo__bool__o *)_9__37_0;
      sub_1C6B9AC((CGThumbnailListItem_o *)&static_fields->__9__37_0, (int32_t)_9__37_0, v14, v15);
    }
    if ( BasicHelper__Any_object_(
           MovieInfoList,
           (System_Func_T__bool__o *)_9__37_0,
           (const MethodInfo_3124430 *)Method_BasicHelper_Any_BattleMoviePlayer_MovieInfo___) )
    {
      BattleMoviePlayer__ShowBg(this, v, v16);
    }
    Component_object = UnityEngine_GameObject__GetComponent_object_(
                         v8,
                         (const MethodInfo_319312C *)Method_UnityEngine_GameObject_GetComponent_MeshRenderer___);
    if ( !Component_object )
LABEL_19:
      sub_1C6BC60(Component_object, v7);
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
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  int32_t v10; // w2
  const MethodInfo *v11; // x3

  if ( (byte_4CB8E8A & 1) == 0 )
  {
    sub_1C6BA08(&BattleMoviePlayer__PlayMovie_d__45_TypeInfo);
    byte_4CB8E8A = 1;
  }
  v7 = sub_1C6BC54(BattleMoviePlayer__PlayMovie_d__45_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  *(_DWORD *)(v7 + 16) = 0;
  *(_QWORD *)(v7 + 32) = this;
  sub_1C6B9AC((CGThumbnailListItem_o *)(v7 + 32), (int32_t)this, v8, v9);
  *(_QWORD *)(v7 + 40) = movieObj;
  sub_1C6B9AC((CGThumbnailListItem_o *)(v7 + 40), (int32_t)movieObj, v10, v11);
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
  bool v9; // w23
  __int64 v10; // x22
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  int32_t v13; // w2
  const MethodInfo *v14; // x3

  if ( (byte_4CB8E8B & 1) == 0 )
  {
    sub_1C6BA08(&BattleMoviePlayer__PlayMovieFadeOut_d__46_TypeInfo);
    byte_4CB8E8B = 1;
  }
  v9 = forceFadeout;
  v10 = sub_1C6BC54(BattleMoviePlayer__PlayMovieFadeOut_d__46_TypeInfo);
  System_Object___ctor((Il2CppObject *)v10, 0);
  *(_DWORD *)(v10 + 16) = 0;
  *(_QWORD *)(v10 + 40) = this;
  sub_1C6B9AC((CGThumbnailListItem_o *)(v10 + 40), (int32_t)this, v11, v12);
  *(_QWORD *)(v10 + 32) = movieObj;
  sub_1C6B9AC((CGThumbnailListItem_o *)(v10 + 32), (int32_t)movieObj, v13, v14);
  *(_DWORD *)(v10 + 48) = num;
  *(_BYTE *)(v10 + 52) = v9;
  return (System_Collections_IEnumerator_o *)v10;
}


// local variable allocation has failed, the output may be wrong!
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
    sub_1C6BC60(this, v);
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
  int32_t v4; // w2
  const MethodInfo *v5; // x3

  if ( (byte_4CB8E85 & 1) == 0 )
  {
    sub_1C6BA08(&BattleMoviePlayer__StartMovie_d__36_TypeInfo);
    byte_4CB8E85 = 1;
  }
  v3 = sub_1C6BC54(BattleMoviePlayer__StartMovie_d__36_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0);
  *(_DWORD *)(v3 + 16) = 0;
  *(_QWORD *)(v3 + 32) = this;
  sub_1C6B9AC((CGThumbnailListItem_o *)(v3 + 32), (int32_t)this, v4, v5);
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
        bool flip,
        const MethodInfo *method)
{
  bool v25; // w24
  bool v26; // w25
  bool v27; // w26
  int32_t v28; // w2
  const MethodInfo *v29; // x3
  int32_t v30; // w2
  const MethodInfo *v31; // x3

  v25 = ignoreTmScl;
  v26 = lp;
  v27 = backMovie;
  this->fields.playSpeed = 1.0;
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.pathType = type;
  this->fields.moviePath = path;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.moviePath, (int32_t)path, v28, v29);
  this->fields.effectEvent = eff;
  this->fields.validTime = valid;
  this->fields.fadeRestTime = fade;
  this->fields.cameraType = cam;
  this->fields.playSpeed = speed;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.effectEvent, (int32_t)eff, v30, v31);
  this->fields.effectRestTime = effRest;
  this->fields.ignoreTimeScale = v25;
  this->fields.fadeinTime = fadein;
  this->fields.loop = v26;
  this->fields.isBackMovie = v27;
  this->fields.isFlip = flip;
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


void BattleMoviePlayer__FadeoutDeleteMovie_d__39___ctor(
        BattleMoviePlayer__FadeoutDeleteMovie_d__39_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.__1__state = 1__state;
}


bool BattleMoviePlayer__FadeoutDeleteMovie_d__39__MoveNext(
        BattleMoviePlayer__FadeoutDeleteMovie_d__39_o *this,
        const MethodInfo *method)
{
  BattleMoviePlayer__FadeoutDeleteMovie_d__39_o *v2; // x19
  int32_t _1__state; // w8
  BattleMoviePlayer_o *_4__this; // x20
  UnityEngine_Object_o *currMovieObj; // x21
  const MethodInfo *v6; // x4
  System_Collections_IEnumerator_o *v7; // x0
  System_Collections_Generic_List_T__o *MovieInfoList; // x22
  System_Collections_IEnumerator_o *v9; // x21
  BattleMoviePlayer___c_c *v10; // x8
  System_Func_object__bool__o *_9__39_0; // x23
  Il2CppObject *v12; // x24
  struct BattleMoviePlayer___c_StaticFields *static_fields; // x0
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  const MethodInfo *v16; // x2
  UnityEngine_Coroutine_o *started; // x0
  CGThumbnailListItem_o *p__2__current; // x19
  int32_t v19; // w2
  const MethodInfo *v20; // x3
  BattlePerformance_o *perf; // x0
  struct System_Action_o *FadeOuted; // x8

  v2 = this;
  if ( (byte_4CB8E91 & 1) == 0 )
  {
    sub_1C6BA08(&Method_BasicHelper_Any_BattleMoviePlayer_MovieInfo___);
    sub_1C6BA08(&System_Func_BattleMoviePlayer_MovieInfo__bool__TypeInfo);
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    sub_1C6BA08(&Method_BattleMoviePlayer___c__FadeoutDeleteMovie_b__39_0__);
    this = (BattleMoviePlayer__FadeoutDeleteMovie_d__39_o *)sub_1C6BA08(&BattleMoviePlayer___c_TypeInfo);
    byte_4CB8E91 = 1;
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
        v7 = BattleMoviePlayer__PlayMovieFadeOut(
               _4__this,
               _4__this->fields.currMovieObj,
               _4__this->fields.currentMovieNum,
               1,
               v6);
        MovieInfoList = (System_Collections_Generic_List_T__o *)_4__this->fields.MovieInfoList;
        v9 = v7;
        v10 = BattleMoviePlayer___c_TypeInfo;
        if ( !BattleMoviePlayer___c_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BattleMoviePlayer___c_TypeInfo);
          v10 = BattleMoviePlayer___c_TypeInfo;
        }
        _9__39_0 = (System_Func_object__bool__o *)v10->static_fields->__9__39_0;
        if ( !_9__39_0 )
        {
          if ( !v10->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v10);
            v10 = BattleMoviePlayer___c_TypeInfo;
          }
          v12 = (Il2CppObject *)v10->static_fields->__9;
          _9__39_0 = (System_Func_object__bool__o *)sub_1C6BC54(System_Func_BattleMoviePlayer_MovieInfo__bool__TypeInfo);
          System_Func_object__bool____ctor(_9__39_0, v12, Method_BattleMoviePlayer___c__FadeoutDeleteMovie_b__39_0__, 0);
          static_fields = BattleMoviePlayer___c_TypeInfo->static_fields;
          static_fields->__9__39_0 = (struct System_Func_BattleMoviePlayer_MovieInfo__bool__o *)_9__39_0;
          sub_1C6B9AC((CGThumbnailListItem_o *)&static_fields->__9__39_0, (int32_t)_9__39_0, v14, v15);
        }
        if ( BasicHelper__Any_object_(
               MovieInfoList,
               (System_Func_T__bool__o *)_9__39_0,
               (const MethodInfo_3124430 *)Method_BasicHelper_Any_BattleMoviePlayer_MovieInfo___) )
        {
          BattleMoviePlayer__ShowBg(_4__this, 1, v16);
        }
        started = UnityEngine_MonoBehaviour__StartCoroutine_71644868((UnityEngine_MonoBehaviour_o *)_4__this, v9, 0);
        v2->fields.__2__current = (Il2CppObject *)started;
        p__2__current = (CGThumbnailListItem_o *)&v2->fields.__2__current;
        sub_1C6B9AC(p__2__current, (int32_t)started, v19, v20);
        LOBYTE(perf) = 1;
        LODWORD(p__2__current[-1].fields._ThumbnailSpritePath_k__BackingField) = 1;
        return (char)perf;
      }
LABEL_23:
      LOBYTE(perf) = 0;
      return (char)perf;
    }
LABEL_25:
    sub_1C6BC60(this, method);
  }
  v2->fields.__1__state = -1;
  if ( !_4__this )
    goto LABEL_25;
  BattleMoviePlayer__Dispose(_4__this, method);
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


Il2CppObject *BattleMoviePlayer__FadeoutDeleteMovie_d__39__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        BattleMoviePlayer__FadeoutDeleteMovie_d__39_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __noreturn BattleMoviePlayer__FadeoutDeleteMovie_d__39__System_Collections_IEnumerator_Reset(
        BattleMoviePlayer__FadeoutDeleteMovie_d__39_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1C6BA1C(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C6BC54(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1C6BA1C(&Method_BattleMoviePlayer__FadeoutDeleteMovie_d__39_System_Collections_IEnumerator_Reset__);
  sub_1C6BB30(v3, v4);
}


Il2CppObject *BattleMoviePlayer__FadeoutDeleteMovie_d__39__System_Collections_IEnumerator_get_Current(
        BattleMoviePlayer__FadeoutDeleteMovie_d__39_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void BattleMoviePlayer__FadeoutDeleteMovie_d__39__System_IDisposable_Dispose(
        BattleMoviePlayer__FadeoutDeleteMovie_d__39_o *this,
        const MethodInfo *method)
{
  ;
}


void BattleMoviePlayer__GetMoviePanelFirst_d__31___ctor(
        BattleMoviePlayer__GetMoviePanelFirst_d__31_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.__1__state = 1__state;
}


bool BattleMoviePlayer__GetMoviePanelFirst_d__31__MoveNext(
        BattleMoviePlayer__GetMoviePanelFirst_d__31_o *this,
        const MethodInfo *method)
{
  BattleMoviePlayer__GetMoviePanelFirst_d__31_o *v2; // x21
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
  const MethodInfo *v16; // x3
  UnityEngine_GameObject_o *v17; // x0
  int32_t v18; // w2
  const MethodInfo *v19; // x3
  Il2CppObject *Item; // x0
  const MethodInfo *v21; // x3
  UnityEngine_GameObject_o *BattleMoviePanel; // x0
  int32_t v23; // w2
  const MethodInfo *v24; // x3

  v2 = this;
  if ( (byte_4CB8E92 & 1) == 0 )
  {
    sub_1C6BA08(&Method_UnityEngine_GameObject_GetComponent_BattlePerformance___);
    sub_1C6BA08(&Method_System_Collections_Generic_List_BattleMoviePlayer_MovieInfo__get_Count__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_BattleMoviePlayer_MovieInfo__get_Item__);
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    this = (BattleMoviePlayer__GetMoviePanelFirst_d__31_o *)sub_1C6BA08(&StringLiteral_10600/*"Performance"*/);
    byte_4CB8E92 = 1;
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
      sub_1C6B9AC((CGThumbnailListItem_o *)&_4__this->fields.perf, (int32_t)v9, v7, v8);
    }
    v10 = (UnityEngine_Object_o *)*p_perf;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( !UnityEngine_Object__op_Equality(v10, 0, 0) )
      goto LABEL_19;
    this = (BattleMoviePlayer__GetMoviePanelFirst_d__31_o *)UnityEngine_GameObject__Find(
                                                              (System_String_o *)StringLiteral_10600/*"Performance"*/,
                                                              0);
    if ( !this )
      goto LABEL_25;
    Component_object = UnityEngine_GameObject__GetComponent_object_(
                         (UnityEngine_GameObject_o *)this,
                         (const MethodInfo_319312C *)Method_UnityEngine_GameObject_GetComponent_BattlePerformance___);
    *p_perf = Component_object;
    sub_1C6B9AC((CGThumbnailListItem_o *)&_4__this->fields.perf, (int32_t)Component_object, v12, v13);
    v14 = (UnityEngine_Object_o *)*p_perf;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( !UnityEngine_Object__op_Equality(v14, 0, 0) )
    {
LABEL_19:
      this = (BattleMoviePlayer__GetMoviePanelFirst_d__31_o *)_4__this->fields.MovieInfoList;
      if ( this )
      {
        if ( SLODWORD(this->fields.__2__current) < 1
          || (v15 = System_Collections_Generic_List_object___get_Item(
                      (System_Collections_Generic_List_object__o *)this,
                      0,
                      (const MethodInfo_38006A4 *)Method_System_Collections_Generic_List_BattleMoviePlayer_MovieInfo__get_Item__),
              v17 = BattleMoviePlayer__CreateBattleMoviePanel(_4__this, (BattleMoviePlayer_MovieInfo_o *)v15, 0, v16),
              _4__this->fields.currMovieObj = v17,
              sub_1C6B9AC((CGThumbnailListItem_o *)&_4__this->fields.currMovieObj, (int32_t)v17, v18, v19),
              (this = (BattleMoviePlayer__GetMoviePanelFirst_d__31_o *)_4__this->fields.MovieInfoList) != 0) )
        {
          if ( SLODWORD(this->fields.__2__current) > 1 )
          {
            Item = System_Collections_Generic_List_object___get_Item(
                     (System_Collections_Generic_List_object__o *)this,
                     1,
                     (const MethodInfo_38006A4 *)Method_System_Collections_Generic_List_BattleMoviePlayer_MovieInfo__get_Item__);
            BattleMoviePanel = BattleMoviePlayer__CreateBattleMoviePanel(
                                 _4__this,
                                 (BattleMoviePlayer_MovieInfo_o *)Item,
                                 1,
                                 v21);
            _4__this->fields.nextMovieObj = BattleMoviePanel;
            sub_1C6B9AC((CGThumbnailListItem_o *)&_4__this->fields.nextMovieObj, (int32_t)BattleMoviePanel, v23, v24);
          }
          return 0;
        }
      }
LABEL_25:
      sub_1C6BC60(this, method);
    }
  }
  return 0;
}


Il2CppObject *BattleMoviePlayer__GetMoviePanelFirst_d__31__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        BattleMoviePlayer__GetMoviePanelFirst_d__31_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __noreturn BattleMoviePlayer__GetMoviePanelFirst_d__31__System_Collections_IEnumerator_Reset(
        BattleMoviePlayer__GetMoviePanelFirst_d__31_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1C6BA1C(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C6BC54(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1C6BA1C(&Method_BattleMoviePlayer__GetMoviePanelFirst_d__31_System_Collections_IEnumerator_Reset__);
  sub_1C6BB30(v3, v4);
}


Il2CppObject *BattleMoviePlayer__GetMoviePanelFirst_d__31__System_Collections_IEnumerator_get_Current(
        BattleMoviePlayer__GetMoviePanelFirst_d__31_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void BattleMoviePlayer__GetMoviePanelFirst_d__31__System_IDisposable_Dispose(
        BattleMoviePlayer__GetMoviePanelFirst_d__31_o *this,
        const MethodInfo *method)
{
  ;
}


void BattleMoviePlayer__PlayMovieFadeOut_d__46___ctor(
        BattleMoviePlayer__PlayMovieFadeOut_d__46_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.__1__state = 1__state;
}


// local variable allocation has failed, the output may be wrong!
bool BattleMoviePlayer__PlayMovieFadeOut_d__46__MoveNext(
        BattleMoviePlayer__PlayMovieFadeOut_d__46_o *this,
        const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  BattleMoviePlayer__PlayMovieFadeOut_d__46_o *v4; // x19
  int32_t _1__state; // w8
  struct BattleMoviePlayer_o *_4__this; // x20
  UnityEngine_Object_o *movieObj; // x21
  struct CriManaMovieController_o *v8; // x8
  UnityEngine_Material_o *material; // x0
  BattleMoviePlayer__PlayMovieFadeOut_d__46_o **p_movieMaterial_5__2; // x21
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
  const MethodInfo *v44; // x1
  char v45; // w22
  float v46; // s11
  float v47; // s12
  float v48; // s13
  BattleMoviePlayer__PlayMovieFadeOut_d__46_o *v49; // x21
  float v50; // s0
  int32_t v51; // w2
  float *v52; // x9
  float v53; // s8
  float v54; // s9
  float v55; // s10
  float v56; // s0
  BattleMoviePlayer_c *v57; // x8
  struct BattlePerformance_o *v58; // x8
  BattleMoviePlayer__PlayMovieFadeOut_d__46_o *v59; // x21
  float v60; // s4
  float v61; // s2
  float v62; // s8
  float v63; // s9
  float v64; // s10
  const MethodInfo *v65; // x1
  bool IsBossCamera; // w22
  BattleMoviePlayer_c *v67; // x8
  struct BattleMoviePlayer_StaticFields *static_fields; // x8
  float v69; // s11
  float v70; // s12
  float v71; // s13
  float v72; // s0
  float v73; // s0
  float v74; // s2
  float v75; // s1
  float v76; // s0 OVERLAPPED
  CGThumbnailListItem_o *p__2__current; // x19
  bool result; // w0
  BattleMoviePlayer__PlayMovieFadeOut_d__46_o **p_movInfo_5__3; // x21
  int32_t v80; // w2
  const MethodInfo *v81; // x3
  int32_t v82; // w2
  const MethodInfo *v83; // x3
  UnityEngine_Object_o *v84; // x19
  float v85; // s11
  float v86; // s12
  float v87; // s13
  UnityEngine_Vector3_o v88; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v89; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v90; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o position; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v92; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v93; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v94; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v95; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v96; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v97; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v98; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v99; // 0:s0.4,4:s1.4,8:s2.4

  v4 = this;
  if ( (byte_4CB8E94 & 1) == 0 )
  {
    sub_1C6BA08(&BattleMoviePlayer_TypeInfo);
    sub_1C6BA08(&Method_UnityEngine_GameObject_GetComponent_MeshRenderer___);
    sub_1C6BA08(&Method_System_Collections_Generic_List_GameObject__Remove__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_BattleMoviePlayer_MovieInfo__get_Count__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_BattleMoviePlayer_MovieInfo__get_Item__);
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    sub_1C6BA08(&StringLiteral_16414/*"_ZWriteMode"*/);
    sub_1C6BA08(&StringLiteral_16413/*"_ZTestMode"*/);
    this = (BattleMoviePlayer__PlayMovieFadeOut_d__46_o *)sub_1C6BA08(&StringLiteral_16379/*"_Transparency"*/);
    byte_4CB8E94 = 1;
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
    this = (BattleMoviePlayer__PlayMovieFadeOut_d__46_o *)CriMana_Player__GetDisplayedFrameNo(player_k__BackingField, 0);
    if ( v4->fields._effectTime_5__4 <= (float)(int)this )
    {
      this = (BattleMoviePlayer__PlayMovieFadeOut_d__46_o *)v4->fields._movInfo_5__3;
      if ( !this )
        goto LABEL_121;
      if ( *(_QWORD *)&this->fields.num )
      {
        UnityEngine_Events_UnityEvent__Invoke(*(UnityEngine_Events_UnityEvent_o **)&this->fields.num, 0);
        this = (BattleMoviePlayer__PlayMovieFadeOut_d__46_o *)v4->fields._movInfo_5__3;
        if ( !this )
          goto LABEL_121;
      }
      *(_QWORD *)&this->fields.num = 0;
      sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.num, 0, v2, v3);
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
      p_movInfo_5__3 = (BattleMoviePlayer__PlayMovieFadeOut_d__46_o **)&v4->fields._movInfo_5__3;
      this = (BattleMoviePlayer__PlayMovieFadeOut_d__46_o *)v4->fields._movInfo_5__3;
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
      sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.num, 0, v2, v3);
      if ( !v4->fields._pastError_5__5 )
      {
        this = (BattleMoviePlayer__PlayMovieFadeOut_d__46_o *)v4->fields._movieMaterial_5__2;
        if ( !this )
          goto LABEL_121;
        UnityEngine_Material__SetInt((UnityEngine_Material_o *)this, (System_String_o *)StringLiteral_16413/*"_ZTestMode"*/, 4, 0);
        this = (BattleMoviePlayer__PlayMovieFadeOut_d__46_o *)v4->fields._movieMaterial_5__2;
        if ( !this )
          goto LABEL_121;
        UnityEngine_Material__SetFloat((UnityEngine_Material_o *)this, (System_String_o *)StringLiteral_16379/*"_Transparency"*/, 1.0, 0);
      }
      v4->fields._movieMaterial_5__2 = 0;
      sub_1C6B9AC((CGThumbnailListItem_o *)&v4->fields._movieMaterial_5__2, 0, v80, v81);
      v4->fields._movInfo_5__3 = 0;
      sub_1C6B9AC((CGThumbnailListItem_o *)&v4->fields._movInfo_5__3, 0, v82, v83);
      goto LABEL_113;
    }
    movInfo_5__3 = v4->fields._movInfo_5__3;
    if ( !movInfo_5__3 )
      goto LABEL_121;
    this = (BattleMoviePlayer__PlayMovieFadeOut_d__46_o *)v4->fields._movieMaterial_5__2;
    if ( !this )
      goto LABEL_121;
    v29 = 1.0 - (float)(v4->fields._restTime_5__6 / movInfo_5__3->fields.fadeRestTime);
    v30 = fminf(v29, 1.0);
    v31 = v29 < 0.0;
    v32 = 0.0;
    if ( !v31 )
      v32 = v30;
    UnityEngine_Material__SetFloat((UnityEngine_Material_o *)this, (System_String_o *)StringLiteral_16379/*"_Transparency"*/, v32, 0);
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
        this = (BattleMoviePlayer__PlayMovieFadeOut_d__46_o *)BattleMoviePlayer_TypeInfo;
        if ( !BattleMoviePlayer_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BattleMoviePlayer_TypeInfo);
          this = (BattleMoviePlayer__PlayMovieFadeOut_d__46_o *)BattleMoviePlayer_TypeInfo;
        }
        monitor = (float *)this[2].monitor;
        perf = _4__this->fields.perf;
        v38 = monitor[6];
        v39 = *((_QWORD *)monitor + 2);
        _4__this->fields.startPanelPosition.fields.z = v38;
        *(_QWORD *)&_4__this->fields.startPanelPosition.fields.x = v39;
        if ( !perf )
          goto LABEL_121;
        this = (BattleMoviePlayer__PlayMovieFadeOut_d__46_o *)perf->fields.actorcamera;
        if ( !this )
          goto LABEL_121;
        this = (BattleMoviePlayer__PlayMovieFadeOut_d__46_o *)UnityEngine_Component__get_transform(
                                                                (UnityEngine_Component_o *)this,
                                                                0);
        v40 = _4__this->fields.perf;
        if ( !v40 )
          goto LABEL_121;
        if ( !this )
          goto LABEL_121;
        v88 = UnityEngine_Transform__InverseTransformVector(
                (UnityEngine_Transform_o *)this,
                v40->fields._CurrentShakeWidth_k__BackingField,
                0);
        x = v88.fields.x;
        y = v88.fields.y;
        z = v88.fields.z;
        this = (BattleMoviePlayer__PlayMovieFadeOut_d__46_o *)BattleMoviePlayer__IsBossCamera(_4__this, v44);
        if ( !_4__this->fields.currController )
          goto LABEL_121;
        v45 = (char)this;
        this = (BattleMoviePlayer__PlayMovieFadeOut_d__46_o *)UnityEngine_Component__get_transform(
                                                                (UnityEngine_Component_o *)_4__this->fields.currController,
                                                                0);
        v46 = _4__this->fields.startPanelPosition.fields.x;
        v47 = _4__this->fields.startPanelPosition.fields.y;
        v48 = _4__this->fields.startPanelPosition.fields.z;
        v49 = this;
        if ( (v45 & 1) == 0 )
        {
          if ( !this )
            goto LABEL_121;
          v97.fields.z = z + v48;
          v97.fields.y = y + v47;
          v97.fields.x = x + v46;
          UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)this, v97, 0);
          goto LABEL_103;
        }
        this = (BattleMoviePlayer__PlayMovieFadeOut_d__46_o *)BattleMoviePlayer_TypeInfo;
        if ( !BattleMoviePlayer_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BattleMoviePlayer_TypeInfo);
          this = (BattleMoviePlayer__PlayMovieFadeOut_d__46_o *)BattleMoviePlayer_TypeInfo;
        }
        if ( !v49 )
          goto LABEL_121;
        v50 = *((float *)this[2].monitor + 3) / *((float *)this[2].monitor + 2);
        v89.fields.z = (float)(v48 * v50) + (float)(z * v50);
        v89.fields.y = (float)(v47 * v50) + (float)(y * v50);
        v89.fields.x = (float)(v46 * v50) + (float)(x * v50);
        UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)v49, v89, 0);
      }
      else
      {
        v58 = _4__this->fields.perf;
        if ( !v58 )
          goto LABEL_121;
        this = (BattleMoviePlayer__PlayMovieFadeOut_d__46_o *)v58->fields.actorcamera;
        if ( !this )
          goto LABEL_121;
        this = (BattleMoviePlayer__PlayMovieFadeOut_d__46_o *)UnityEngine_Component__get_transform(
                                                                (UnityEngine_Component_o *)this,
                                                                0);
        if ( !this )
          goto LABEL_121;
        v59 = this;
        position = UnityEngine_Transform__get_position((UnityEngine_Transform_o *)this, 0);
        position.fields.x = position.fields.x - _4__this->fields.cameraStartPosition.fields.x;
        position.fields.y = position.fields.y - _4__this->fields.cameraStartPosition.fields.y;
        position.fields.z = position.fields.z - _4__this->fields.cameraStartPosition.fields.z;
        v92 = UnityEngine_Transform__InverseTransformVector((UnityEngine_Transform_o *)v59, position, 0);
        v60 = fminf(v92.fields.z, 1.0);
        if ( v92.fields.z < -0.3 )
          v61 = -0.3;
        else
          v61 = v60;
        v93 = UnityEngine_Transform__TransformDirection((UnityEngine_Transform_o *)v59, v92, 0);
        v62 = v93.fields.x;
        v63 = v93.fields.y;
        v64 = v93.fields.z;
        IsBossCamera = BattleMoviePlayer__IsBossCamera(_4__this, v65);
        v67 = BattleMoviePlayer_TypeInfo;
        if ( !BattleMoviePlayer_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BattleMoviePlayer_TypeInfo);
          v67 = BattleMoviePlayer_TypeInfo;
        }
        static_fields = v67->static_fields;
        if ( !IsBossCamera )
        {
          v98 = UnityEngine_Transform__TransformPoint(
                  (UnityEngine_Transform_o *)v59,
                  static_fields->BasePanelPosition,
                  0);
          this = (BattleMoviePlayer__PlayMovieFadeOut_d__46_o *)_4__this->fields.currController;
          if ( !this )
            goto LABEL_121;
          v85 = v98.fields.x;
          v86 = v98.fields.y;
          v87 = v98.fields.z;
          this = (BattleMoviePlayer__PlayMovieFadeOut_d__46_o *)UnityEngine_Component__get_transform(
                                                                  (UnityEngine_Component_o *)this,
                                                                  0);
          if ( !this )
            goto LABEL_121;
          v99.fields.z = v87 - v64;
          v99.fields.y = v86 - v63;
          v99.fields.x = v85 - v62;
          UnityEngine_Transform__set_position((UnityEngine_Transform_o *)this, v99, 0);
          goto LABEL_103;
        }
        v94.fields.z = static_fields->BossPanelDist;
        v94.fields.x = 0.0;
        v94.fields.y = 0.0;
        v95 = UnityEngine_Transform__TransformPoint((UnityEngine_Transform_o *)v59, v94, 0);
        this = (BattleMoviePlayer__PlayMovieFadeOut_d__46_o *)_4__this->fields.currController;
        if ( !this )
          goto LABEL_121;
        v69 = v95.fields.x;
        v70 = v95.fields.y;
        v71 = v95.fields.z;
        this = (BattleMoviePlayer__PlayMovieFadeOut_d__46_o *)UnityEngine_Component__get_transform(
                                                                (UnityEngine_Component_o *)this,
                                                                0);
        if ( !this )
          goto LABEL_121;
        v72 = BattleMoviePlayer_TypeInfo->static_fields->BossPanelDist
            / BattleMoviePlayer_TypeInfo->static_fields->BaseDist;
        v96.fields.z = v71 - (float)(v64 * v72);
        v96.fields.y = v70 - (float)(v63 * v72);
        v96.fields.x = v69 - (float)(v62 * v72);
        UnityEngine_Transform__set_position((UnityEngine_Transform_o *)this, v96, 0);
      }
      this = (BattleMoviePlayer__PlayMovieFadeOut_d__46_o *)_4__this->fields.currController;
      if ( !this )
        goto LABEL_121;
      this = (BattleMoviePlayer__PlayMovieFadeOut_d__46_o *)UnityEngine_Component__get_transform(
                                                              (UnityEngine_Component_o *)this,
                                                              0);
      if ( !this )
        goto LABEL_121;
      v57 = BattleMoviePlayer_TypeInfo;
    }
    else
    {
      if ( !BattleMoviePlayer__IsBossCamera(_4__this, method) )
      {
        this = (BattleMoviePlayer__PlayMovieFadeOut_d__46_o *)_4__this->fields.currController;
        if ( !this )
          goto LABEL_121;
        this = (BattleMoviePlayer__PlayMovieFadeOut_d__46_o *)UnityEngine_Component__get_transform(
                                                                (UnityEngine_Component_o *)this,
                                                                0);
        if ( !this )
          goto LABEL_121;
        UnityEngine_Transform__set_localPosition(
          (UnityEngine_Transform_o *)this,
          _4__this->fields.startPanelPosition,
          0);
        this = (BattleMoviePlayer__PlayMovieFadeOut_d__46_o *)_4__this->fields.currController;
        if ( !this )
          goto LABEL_121;
        this = (BattleMoviePlayer__PlayMovieFadeOut_d__46_o *)UnityEngine_Component__get_transform(
                                                                (UnityEngine_Component_o *)this,
                                                                0);
        if ( !this )
          goto LABEL_121;
        v75 = _4__this->fields.startPanelScale.fields.y;
        v74 = _4__this->fields.startPanelScale.fields.z;
        v76 = _4__this->fields.startPanelScale.fields.x;
        goto LABEL_102;
      }
      this = (BattleMoviePlayer__PlayMovieFadeOut_d__46_o *)BattleMoviePlayer_TypeInfo;
      if ( !BattleMoviePlayer_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BattleMoviePlayer_TypeInfo);
        this = (BattleMoviePlayer__PlayMovieFadeOut_d__46_o *)BattleMoviePlayer_TypeInfo;
      }
      if ( !_4__this->fields.currController )
        goto LABEL_121;
      v52 = (float *)this[2].monitor;
      v54 = v52[5];
      v53 = v52[6];
      v55 = v52[4];
      this = (BattleMoviePlayer__PlayMovieFadeOut_d__46_o *)UnityEngine_Component__get_transform(
                                                              (UnityEngine_Component_o *)_4__this->fields.currController,
                                                              0);
      if ( !this )
        goto LABEL_121;
      v56 = BattleMoviePlayer_TypeInfo->static_fields->BossPanelDist
          / BattleMoviePlayer_TypeInfo->static_fields->BaseDist;
      v90.fields.z = v53 * v56;
      v90.fields.y = v54 * v56;
      v90.fields.x = v55 * v56;
      UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)this, v90, 0);
      this = (BattleMoviePlayer__PlayMovieFadeOut_d__46_o *)_4__this->fields.currController;
      if ( !this )
        goto LABEL_121;
      this = (BattleMoviePlayer__PlayMovieFadeOut_d__46_o *)UnityEngine_Component__get_transform(
                                                              (UnityEngine_Component_o *)this,
                                                              0);
      if ( !this )
        goto LABEL_121;
      v57 = BattleMoviePlayer_TypeInfo;
    }
    v73 = v57->static_fields->BossPanelDist / v57->static_fields->BaseDist;
    v74 = v73 * _4__this->fields.startPanelScale.fields.z;
    v75 = v73 * _4__this->fields.startPanelScale.fields.y;
    v76 = v73 * _4__this->fields.startPanelScale.fields.x;
LABEL_102:
    UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)this, *(UnityEngine_Vector3_o *)&v76, 0);
LABEL_103:
    if ( v4->fields._restTime_5__6 > 0.0 )
    {
      v4->fields.__2__current = 0;
      p__2__current = (CGThumbnailListItem_o *)&v4->fields.__2__current;
      sub_1C6B9AC(p__2__current, 0, v2, v3);
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
    this = (BattleMoviePlayer__PlayMovieFadeOut_d__46_o *)UnityEngine_Object__op_Inequality(movieObj, 0, 0);
    if ( ((unsigned __int8)this & 1) == 0 )
    {
      if ( !_4__this )
        goto LABEL_121;
LABEL_113:
      this = (BattleMoviePlayer__PlayMovieFadeOut_d__46_o *)_4__this->fields.ObjList;
      if ( this )
      {
        System_Collections_Generic_List_object___Remove(
          (System_Collections_Generic_List_object__o *)this,
          (Il2CppObject *)v4->fields.movieObj,
          (const MethodInfo_3801E9C *)Method_System_Collections_Generic_List_GameObject__Remove__);
        v84 = (UnityEngine_Object_o *)v4->fields.movieObj;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        UnityEngine_Object__Destroy_71659676(v84, 0);
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
      this = (BattleMoviePlayer__PlayMovieFadeOut_d__46_o *)v4->fields.movieObj;
      if ( !this )
        goto LABEL_121;
      this = (BattleMoviePlayer__PlayMovieFadeOut_d__46_o *)UnityEngine_GameObject__GetComponent_object_(
                                                              (UnityEngine_GameObject_o *)this,
                                                              (const MethodInfo_319312C *)Method_UnityEngine_GameObject_GetComponent_MeshRenderer___);
      if ( !this )
        goto LABEL_121;
      material = UnityEngine_Renderer__get_material((UnityEngine_Renderer_o *)this, 0);
      v4->fields._movieMaterial_5__2 = material;
      p_movieMaterial_5__2 = (BattleMoviePlayer__PlayMovieFadeOut_d__46_o **)&v4->fields._movieMaterial_5__2;
      sub_1C6B9AC((CGThumbnailListItem_o *)&v4->fields._movieMaterial_5__2, (int32_t)material, v11, v12);
      this = (BattleMoviePlayer__PlayMovieFadeOut_d__46_o *)_4__this->fields.MovieInfoList;
      if ( !this )
        goto LABEL_121;
      Item = System_Collections_Generic_List_object___get_Item(
               (System_Collections_Generic_List_object__o *)this,
               v4->fields.num,
               (const MethodInfo_38006A4 *)Method_System_Collections_Generic_List_BattleMoviePlayer_MovieInfo__get_Item__);
      v4->fields._movInfo_5__3 = (struct BattleMoviePlayer_MovieInfo_o *)Item;
      v14 = &v4->fields._movInfo_5__3;
      sub_1C6B9AC((CGThumbnailListItem_o *)&v4->fields._movInfo_5__3, (int32_t)Item, v15, v16);
      v17 = v4->fields._movInfo_5__3;
      if ( !v17 )
        goto LABEL_121;
      validTime = v17->fields.validTime;
      if ( validTime <= 0.0 )
      {
        v19 = _4__this->fields.currController;
        if ( !v19 )
          goto LABEL_121;
        this = (BattleMoviePlayer__PlayMovieFadeOut_d__46_o *)v19->fields._player_k__BackingField;
        if ( !this )
          goto LABEL_121;
        this = (BattleMoviePlayer__PlayMovieFadeOut_d__46_o *)CriMana_Player__get_movieInfo((CriMana_Player_o *)this, 0);
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
      this = (BattleMoviePlayer__PlayMovieFadeOut_d__46_o *)v21->fields._player_k__BackingField;
      if ( !this )
        goto LABEL_121;
      this = (BattleMoviePlayer__PlayMovieFadeOut_d__46_o *)CriMana_Player__GetDisplayedFrameNo(
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
          UnityEngine_Material__SetInt((UnityEngine_Material_o *)this, (System_String_o *)StringLiteral_16414/*"_ZWriteMode"*/, 0, 0);
        }
        this = *p_movieMaterial_5__2;
        if ( !*p_movieMaterial_5__2 )
LABEL_121:
          sub_1C6BC60(this, method);
        if ( _4__this->fields.OverrideZDepth )
          v51 = 8;
        else
          v51 = 4;
        UnityEngine_Material__SetInt((UnityEngine_Material_o *)this, (System_String_o *)StringLiteral_16413/*"_ZTestMode"*/, v51, 0);
        goto LABEL_103;
      }
    }
  }
  return 0;
}


Il2CppObject *BattleMoviePlayer__PlayMovieFadeOut_d__46__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        BattleMoviePlayer__PlayMovieFadeOut_d__46_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __noreturn BattleMoviePlayer__PlayMovieFadeOut_d__46__System_Collections_IEnumerator_Reset(
        BattleMoviePlayer__PlayMovieFadeOut_d__46_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1C6BA1C(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C6BC54(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1C6BA1C(&Method_BattleMoviePlayer__PlayMovieFadeOut_d__46_System_Collections_IEnumerator_Reset__);
  sub_1C6BB30(v3, v4);
}


Il2CppObject *BattleMoviePlayer__PlayMovieFadeOut_d__46__System_Collections_IEnumerator_get_Current(
        BattleMoviePlayer__PlayMovieFadeOut_d__46_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void BattleMoviePlayer__PlayMovieFadeOut_d__46__System_IDisposable_Dispose(
        BattleMoviePlayer__PlayMovieFadeOut_d__46_o *this,
        const MethodInfo *method)
{
  ;
}


void BattleMoviePlayer__PlayMovie_d__45___ctor(
        BattleMoviePlayer__PlayMovie_d__45_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.__1__state = 1__state;
}


// local variable allocation has failed, the output may be wrong!
bool BattleMoviePlayer__PlayMovie_d__45__MoveNext(BattleMoviePlayer__PlayMovie_d__45_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  BattleMoviePlayer__PlayMovie_d__45_o *v4; // x19
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
  BattleMoviePlayer__PlayMovie_d__45_o *v23; // x22
  BattleMoviePlayer__PlayMovie_d__45_o *v24; // x21
  BattleMoviePlayer__PlayMovie_d__45_o *v25; // x22
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
  BattleMoviePlayer__PlayMovie_d__45_o *v40; // x21
  float *v41; // x8
  float v42; // s0
  struct CriManaMovieController_o *v43; // x8
  struct CriManaMovieController_o *v44; // x8
  unsigned int num; // w9
  _BOOL4 KeepStartPosition; // w8
  struct BattlePerformance_o *v47; // x8
  const MethodInfo *v48; // x2
  struct BattleMoviePlayer_MovieInfo_o *v49; // x8
  BattleMoviePlayer__PlayMovie_d__45_o *v50; // x21
  int32_t v51; // w2
  struct BattleMoviePlayer_MovieInfo_o *v52; // x8
  struct CriManaMovieController_o *v53; // x8
  struct BattleMoviePlayer_MovieInfo_o *v54; // x8
  float v55; // s0
  CGThumbnailListItem_o *p__2__current; // x19
  const MethodInfo *v57; // x2
  struct BattleMoviePlayer_MovieInfo_o *movInfo_5__2; // x8
  struct BattleMoviePlayer_MovieInfo_o *v59; // x8
  struct CriManaMovieController_o *currController; // x8
  int32_t v61; // w2
  const MethodInfo *v62; // x3
  float effectTime_5__7; // s0
  struct BattlePerformance_o *perf; // x8
  struct BattleMoviePlayer_MovieInfo_o *v65; // x9
  float *v66; // x9
  float v67; // s8
  float v68; // s9
  float v69; // s10
  float v70; // s0
  BattleMoviePlayer_c *v71; // x8
  __int64 v72; // x9
  float v73; // w10
  __int64 v74; // x9
  struct BattlePerformance_o *v75; // x8
  float x; // s8
  float y; // s9
  float z; // s10
  const MethodInfo *v79; // x1
  char v80; // w22
  float v81; // s11
  float v82; // s12
  float v83; // s13
  BattleMoviePlayer__PlayMovie_d__45_o *v84; // x21
  float v85; // s0
  BattleMoviePlayer__PlayMovie_d__45_o *v86; // x21
  float v87; // s4
  float v88; // s2
  float v89; // s8
  float v90; // s9
  float v91; // s10
  const MethodInfo *v92; // x1
  bool IsBossCamera; // w22
  BattleMoviePlayer_c *v94; // x8
  struct BattleMoviePlayer_StaticFields *static_fields; // x8
  float v96; // s11
  float v97; // s12
  float v98; // s13
  float v99; // s0
  float v100; // s0
  float v101; // s2
  float v102; // s1
  float v103; // s0 OVERLAPPED
  float v104; // s11
  float v105; // s12
  float v106; // s13
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o localScale; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v109; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v110; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v111; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o position; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v113; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v114; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v115; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v116; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v117; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v118; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v119; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v120; // 0:s0.4,4:s1.4,8:s2.4

  v4 = this;
  if ( (byte_4CB8E93 & 1) == 0 )
  {
    sub_1C6BA08(&BattleMoviePlayer_TypeInfo);
    sub_1C6BA08(&Method_UnityEngine_Component_GetComponent_MeshRenderer___);
    sub_1C6BA08(&Method_UnityEngine_GameObject_GetComponent_BattleCameraFullScaleSetter___);
    sub_1C6BA08(&Method_UnityEngine_GameObject_GetComponent_CriManaMovieController___);
    sub_1C6BA08(&Method_UnityEngine_GameObject_GetComponent_MeshRenderer___);
    sub_1C6BA08(&Method_System_Collections_Generic_List_BattleMoviePlayer_MovieInfo__get_Item__);
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    sub_1C6BA08(&StringLiteral_16414/*"_ZWriteMode"*/);
    sub_1C6BA08(&StringLiteral_16413/*"_ZTestMode"*/);
    this = (BattleMoviePlayer__PlayMovie_d__45_o *)sub_1C6BA08(&StringLiteral_16379/*"_Transparency"*/);
    byte_4CB8E93 = 1;
  }
  _1__state = v4->fields.__1__state;
  _4__this = v4->fields.__4__this;
  switch ( _1__state )
  {
    case 2:
      v4->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_189;
      this = (BattleMoviePlayer__PlayMovie_d__45_o *)_4__this->fields.currController;
      if ( !this )
        goto LABEL_189;
      if ( !this->fields._movInfo_5__2 )
      {
LABEL_117:
        v4->fields._movInfo_5__2 = 0;
        sub_1C6B9AC((CGThumbnailListItem_o *)&v4->fields._movInfo_5__2, 0, v2, v3);
        return 0;
      }
      this = (BattleMoviePlayer__PlayMovie_d__45_o *)UnityEngine_Component__GetComponent_object_(
                                                       (UnityEngine_Component_o *)this,
                                                       (const MethodInfo_3131B38 *)Method_UnityEngine_Component_GetComponent_MeshRenderer___);
      if ( !this )
        goto LABEL_189;
      v23 = this;
      this = (BattleMoviePlayer__PlayMovie_d__45_o *)UnityEngine_Renderer__get_material(
                                                       (UnityEngine_Renderer_o *)this,
                                                       0);
      v24 = this;
      if ( v4->fields._fadeinTime_5__5 > 0.0 )
      {
        UnityEngine_Renderer__set_enabled((UnityEngine_Renderer_o *)v23, 1, 0);
        this = (BattleMoviePlayer__PlayMovie_d__45_o *)UnityEngine_Renderer__get_material(
                                                         (UnityEngine_Renderer_o *)v23,
                                                         0);
        if ( !_4__this->fields.baseMat )
          goto LABEL_189;
        v25 = this;
        this = (BattleMoviePlayer__PlayMovie_d__45_o *)UnityEngine_Material__get_renderQueue(
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
          UnityEngine_Material__SetInt((UnityEngine_Material_o *)v24, (System_String_o *)StringLiteral_16413/*"_ZTestMode"*/, 4, 0);
          UnityEngine_Material__SetFloat((UnityEngine_Material_o *)v24, (System_String_o *)StringLiteral_16379/*"_Transparency"*/, 0.0, 0);
          movInfo_5__2 = v4->fields._movInfo_5__2;
          if ( !movInfo_5__2 )
            goto LABEL_189;
          if ( movInfo_5__2->fields.cameraType == 1 )
            BattleMoviePlayer__ShowBg(_4__this, 0, v57);
          v4->fields._fadeinTime_5__5 = 0.0;
        }
        else
        {
          if ( !v24 )
            goto LABEL_189;
          UnityEngine_Material__SetFloat(
            (UnityEngine_Material_o *)v24,
            (System_String_o *)StringLiteral_16379/*"_Transparency"*/,
            1.0 - v26,
            0);
          if ( _4__this->fields.OverrideZDepth )
            v27 = 8;
          else
            v27 = 4;
          UnityEngine_Material__SetInt((UnityEngine_Material_o *)v24, (System_String_o *)StringLiteral_16413/*"_ZTestMode"*/, v27, 0);
        }
      }
      v59 = v4->fields._movInfo_5__2;
      if ( !v59 )
        goto LABEL_189;
      if ( v59->fields.isBackMovie )
      {
        if ( !v24 )
          goto LABEL_189;
        UnityEngine_Material__SetInt((UnityEngine_Material_o *)v24, (System_String_o *)StringLiteral_16414/*"_ZWriteMode"*/, 0, 0);
      }
      if ( _4__this->fields._ForceFadeout_k__BackingField )
        return 0;
      currController = _4__this->fields.currController;
      if ( !currController
        || (this = (BattleMoviePlayer__PlayMovie_d__45_o *)currController->fields._player_k__BackingField) == 0 )
      {
LABEL_189:
        sub_1C6BC60(this, method);
      }
      this = (BattleMoviePlayer__PlayMovie_d__45_o *)CriMana_Player__GetDisplayedFrameNo((CriMana_Player_o *)this, 0);
      effectTime_5__7 = v4->fields._effectTime_5__7;
      v4->fields._currentFrame_5__3 = (int)this;
      if ( effectTime_5__7 <= (float)(int)this )
      {
        this = (BattleMoviePlayer__PlayMovie_d__45_o *)v4->fields._movInfo_5__2;
        if ( !this )
          goto LABEL_189;
        if ( *(_QWORD *)&this->fields.num )
        {
          UnityEngine_Events_UnityEvent__Invoke(*(UnityEngine_Events_UnityEvent_o **)&this->fields.num, 0);
          this = (BattleMoviePlayer__PlayMovie_d__45_o *)v4->fields._movInfo_5__2;
          if ( !this )
            goto LABEL_189;
        }
        *(_QWORD *)&this->fields.num = 0;
        sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.num, 0, v61, v62);
      }
      if ( _4__this->fields.KeepStartPosition )
      {
        perf = _4__this->fields.perf;
        if ( !perf )
          goto LABEL_189;
        v65 = v4->fields._movInfo_5__2;
        if ( perf->fields._UsePlayMakerShakeParam_k__BackingField )
        {
          if ( !v65 )
            goto LABEL_189;
          v65->fields._UsePlayMakerShakeParam_k__BackingField = 1;
        }
        else if ( !v65 )
        {
          goto LABEL_189;
        }
        if ( v65->fields._UsePlayMakerShakeParam_k__BackingField )
        {
          this = (BattleMoviePlayer__PlayMovie_d__45_o *)BattleMoviePlayer_TypeInfo;
          if ( !BattleMoviePlayer_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BattleMoviePlayer_TypeInfo);
            this = (BattleMoviePlayer__PlayMovie_d__45_o *)BattleMoviePlayer_TypeInfo;
            perf = _4__this->fields.perf;
          }
          v72 = *(_QWORD *)&this[1].fields._isLoopMovie_5__9;
          v73 = *(float *)(v72 + 24);
          v74 = *(_QWORD *)(v72 + 16);
          _4__this->fields.startPanelPosition.fields.z = v73;
          *(_QWORD *)&_4__this->fields.startPanelPosition.fields.x = v74;
          if ( !perf )
            goto LABEL_189;
          this = (BattleMoviePlayer__PlayMovie_d__45_o *)perf->fields.actorcamera;
          if ( !this )
            goto LABEL_189;
          this = (BattleMoviePlayer__PlayMovie_d__45_o *)UnityEngine_Component__get_transform(
                                                           (UnityEngine_Component_o *)this,
                                                           0);
          v75 = _4__this->fields.perf;
          if ( !v75 )
            goto LABEL_189;
          if ( !this )
            goto LABEL_189;
          v110 = UnityEngine_Transform__InverseTransformVector(
                   (UnityEngine_Transform_o *)this,
                   v75->fields._CurrentShakeWidth_k__BackingField,
                   0);
          x = v110.fields.x;
          y = v110.fields.y;
          z = v110.fields.z;
          this = (BattleMoviePlayer__PlayMovie_d__45_o *)BattleMoviePlayer__IsBossCamera(_4__this, v79);
          if ( !_4__this->fields.currController )
            goto LABEL_189;
          v80 = (char)this;
          this = (BattleMoviePlayer__PlayMovie_d__45_o *)UnityEngine_Component__get_transform(
                                                           (UnityEngine_Component_o *)_4__this->fields.currController,
                                                           0);
          v81 = _4__this->fields.startPanelPosition.fields.x;
          v82 = _4__this->fields.startPanelPosition.fields.y;
          v83 = _4__this->fields.startPanelPosition.fields.z;
          v84 = this;
          if ( (v80 & 1) == 0 )
          {
            if ( this )
            {
              v118.fields.z = z + v83;
              v118.fields.y = y + v82;
              v118.fields.x = x + v81;
              UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)this, v118, 0);
              goto LABEL_114;
            }
            goto LABEL_189;
          }
          this = (BattleMoviePlayer__PlayMovie_d__45_o *)BattleMoviePlayer_TypeInfo;
          if ( !BattleMoviePlayer_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BattleMoviePlayer_TypeInfo);
            this = (BattleMoviePlayer__PlayMovie_d__45_o *)BattleMoviePlayer_TypeInfo;
          }
          if ( !v84 )
            goto LABEL_189;
          v85 = *(float *)(*(_QWORD *)&this[1].fields._isLoopMovie_5__9 + 12LL)
              / *(float *)(*(_QWORD *)&this[1].fields._isLoopMovie_5__9 + 8LL);
          v111.fields.z = (float)(v83 * v85) + (float)(z * v85);
          v111.fields.y = (float)(v82 * v85) + (float)(y * v85);
          v111.fields.x = (float)(v81 * v85) + (float)(x * v85);
          UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)v84, v111, 0);
        }
        else
        {
          this = (BattleMoviePlayer__PlayMovie_d__45_o *)perf->fields.actorcamera;
          if ( !this )
            goto LABEL_189;
          this = (BattleMoviePlayer__PlayMovie_d__45_o *)UnityEngine_Component__get_transform(
                                                           (UnityEngine_Component_o *)this,
                                                           0);
          if ( !this )
            goto LABEL_189;
          v86 = this;
          position = UnityEngine_Transform__get_position((UnityEngine_Transform_o *)this, 0);
          position.fields.x = position.fields.x - _4__this->fields.cameraStartPosition.fields.x;
          position.fields.y = position.fields.y - _4__this->fields.cameraStartPosition.fields.y;
          position.fields.z = position.fields.z - _4__this->fields.cameraStartPosition.fields.z;
          v113 = UnityEngine_Transform__InverseTransformVector((UnityEngine_Transform_o *)v86, position, 0);
          v87 = fminf(v113.fields.z, 1.0);
          if ( v113.fields.z < -0.3 )
            v88 = -0.3;
          else
            v88 = v87;
          v114 = UnityEngine_Transform__TransformDirection((UnityEngine_Transform_o *)v86, v113, 0);
          v89 = v114.fields.x;
          v90 = v114.fields.y;
          v91 = v114.fields.z;
          IsBossCamera = BattleMoviePlayer__IsBossCamera(_4__this, v92);
          v94 = BattleMoviePlayer_TypeInfo;
          if ( !BattleMoviePlayer_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BattleMoviePlayer_TypeInfo);
            v94 = BattleMoviePlayer_TypeInfo;
          }
          static_fields = v94->static_fields;
          if ( !IsBossCamera )
          {
            v119 = UnityEngine_Transform__TransformPoint(
                     (UnityEngine_Transform_o *)v86,
                     static_fields->BasePanelPosition,
                     0);
            this = (BattleMoviePlayer__PlayMovie_d__45_o *)_4__this->fields.currController;
            if ( this )
            {
              v104 = v119.fields.x;
              v105 = v119.fields.y;
              v106 = v119.fields.z;
              this = (BattleMoviePlayer__PlayMovie_d__45_o *)UnityEngine_Component__get_transform(
                                                               (UnityEngine_Component_o *)this,
                                                               0);
              if ( this )
              {
                v120.fields.z = v106 - v91;
                v120.fields.y = v105 - v90;
                v120.fields.x = v104 - v89;
                UnityEngine_Transform__set_position((UnityEngine_Transform_o *)this, v120, 0);
                goto LABEL_114;
              }
            }
            goto LABEL_189;
          }
          v115.fields.z = static_fields->BossPanelDist;
          v115.fields.x = 0.0;
          v115.fields.y = 0.0;
          v116 = UnityEngine_Transform__TransformPoint((UnityEngine_Transform_o *)v86, v115, 0);
          this = (BattleMoviePlayer__PlayMovie_d__45_o *)_4__this->fields.currController;
          if ( !this )
            goto LABEL_189;
          v96 = v116.fields.x;
          v97 = v116.fields.y;
          v98 = v116.fields.z;
          this = (BattleMoviePlayer__PlayMovie_d__45_o *)UnityEngine_Component__get_transform(
                                                           (UnityEngine_Component_o *)this,
                                                           0);
          if ( !this )
            goto LABEL_189;
          v99 = BattleMoviePlayer_TypeInfo->static_fields->BossPanelDist
              / BattleMoviePlayer_TypeInfo->static_fields->BaseDist;
          v117.fields.z = v98 - (float)(v91 * v99);
          v117.fields.y = v97 - (float)(v90 * v99);
          v117.fields.x = v96 - (float)(v89 * v99);
          UnityEngine_Transform__set_position((UnityEngine_Transform_o *)this, v117, 0);
        }
        this = (BattleMoviePlayer__PlayMovie_d__45_o *)_4__this->fields.currController;
        if ( !this )
          goto LABEL_189;
        this = (BattleMoviePlayer__PlayMovie_d__45_o *)UnityEngine_Component__get_transform(
                                                         (UnityEngine_Component_o *)this,
                                                         0);
        if ( !this )
          goto LABEL_189;
        v71 = BattleMoviePlayer_TypeInfo;
      }
      else
      {
        if ( !BattleMoviePlayer__IsBossCamera(_4__this, method) )
        {
          this = (BattleMoviePlayer__PlayMovie_d__45_o *)_4__this->fields.currController;
          if ( !this )
            goto LABEL_189;
          this = (BattleMoviePlayer__PlayMovie_d__45_o *)UnityEngine_Component__get_transform(
                                                           (UnityEngine_Component_o *)this,
                                                           0);
          if ( !this )
            goto LABEL_189;
          UnityEngine_Transform__set_localPosition(
            (UnityEngine_Transform_o *)this,
            _4__this->fields.startPanelPosition,
            0);
          this = (BattleMoviePlayer__PlayMovie_d__45_o *)_4__this->fields.currController;
          if ( !this )
            goto LABEL_189;
          this = (BattleMoviePlayer__PlayMovie_d__45_o *)UnityEngine_Component__get_transform(
                                                           (UnityEngine_Component_o *)this,
                                                           0);
          if ( !this )
            goto LABEL_189;
          v102 = _4__this->fields.startPanelScale.fields.y;
          v101 = _4__this->fields.startPanelScale.fields.z;
          v103 = _4__this->fields.startPanelScale.fields.x;
LABEL_185:
          UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)this, *(UnityEngine_Vector3_o *)&v103, 0);
          goto LABEL_114;
        }
        this = (BattleMoviePlayer__PlayMovie_d__45_o *)BattleMoviePlayer_TypeInfo;
        if ( !BattleMoviePlayer_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BattleMoviePlayer_TypeInfo);
          this = (BattleMoviePlayer__PlayMovie_d__45_o *)BattleMoviePlayer_TypeInfo;
        }
        if ( !_4__this->fields.currController )
          goto LABEL_189;
        v66 = *(float **)&this[1].fields._isLoopMovie_5__9;
        v68 = v66[5];
        v67 = v66[6];
        v69 = v66[4];
        this = (BattleMoviePlayer__PlayMovie_d__45_o *)UnityEngine_Component__get_transform(
                                                         (UnityEngine_Component_o *)_4__this->fields.currController,
                                                         0);
        if ( !this )
          goto LABEL_189;
        v70 = BattleMoviePlayer_TypeInfo->static_fields->BossPanelDist
            / BattleMoviePlayer_TypeInfo->static_fields->BaseDist;
        v109.fields.z = v67 * v70;
        v109.fields.y = v68 * v70;
        v109.fields.x = v69 * v70;
        UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)this, v109, 0);
        this = (BattleMoviePlayer__PlayMovie_d__45_o *)_4__this->fields.currController;
        if ( !this )
          goto LABEL_189;
        this = (BattleMoviePlayer__PlayMovie_d__45_o *)UnityEngine_Component__get_transform(
                                                         (UnityEngine_Component_o *)this,
                                                         0);
        if ( !this )
          goto LABEL_189;
        v71 = BattleMoviePlayer_TypeInfo;
      }
      v100 = v71->static_fields->BossPanelDist / v71->static_fields->BaseDist;
      v101 = v100 * _4__this->fields.startPanelScale.fields.z;
      v102 = v100 * _4__this->fields.startPanelScale.fields.y;
      v103 = v100 * _4__this->fields.startPanelScale.fields.x;
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
        this = (BattleMoviePlayer__PlayMovie_d__45_o *)_4__this->fields.currController;
        if ( !this )
          goto LABEL_189;
        this = (BattleMoviePlayer__PlayMovie_d__45_o *)UnityEngine_Component__GetComponent_object_(
                                                         (UnityEngine_Component_o *)this,
                                                         (const MethodInfo_3131B38 *)Method_UnityEngine_Component_GetComponent_MeshRenderer___);
        if ( !this )
          goto LABEL_189;
        UnityEngine_Renderer__set_enabled((UnityEngine_Renderer_o *)this, 0, 0);
      }
      v29 = _4__this->fields.currController;
      if ( !v29 )
        goto LABEL_189;
      this = (BattleMoviePlayer__PlayMovie_d__45_o *)v29->fields._player_k__BackingField;
      if ( !this )
        goto LABEL_189;
      this = (BattleMoviePlayer__PlayMovie_d__45_o *)CriMana_Player__GetDisplayedFrameNo((CriMana_Player_o *)this, 0);
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
      this = (BattleMoviePlayer__PlayMovie_d__45_o *)v4->fields.movieObj;
      if ( this )
      {
        this = (BattleMoviePlayer__PlayMovie_d__45_o *)UnityEngine_GameObject__GetComponent_object_(
                                                         (UnityEngine_GameObject_o *)this,
                                                         (const MethodInfo_319312C *)Method_UnityEngine_GameObject_GetComponent_BattleCameraFullScaleSetter___);
        v33 = _4__this->fields.currController;
        if ( v33 )
        {
          v34 = (BattleCameraFullScaleSetter_o *)this;
          this = (BattleMoviePlayer__PlayMovie_d__45_o *)v33->fields._player_k__BackingField;
          if ( this )
          {
            this = (BattleMoviePlayer__PlayMovie_d__45_o *)CriMana_Player__get_movieInfo((CriMana_Player_o *)this, 0);
            if ( this )
            {
              v35 = _4__this->fields.currController;
              if ( v35 )
              {
                player_k__BackingField = v35->fields._player_k__BackingField;
                if ( player_k__BackingField )
                {
                  v37 = (uint32_t)this->fields.__4__this;
                  this = (BattleMoviePlayer__PlayMovie_d__45_o *)CriMana_Player__get_movieInfo(
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
                          this = (BattleMoviePlayer__PlayMovie_d__45_o *)v38->fields._player_k__BackingField;
                          if ( this )
                          {
                            CriMana_Player__Loop((CriMana_Player_o *)this, v39->fields.loop, 0);
                            this = (BattleMoviePlayer__PlayMovie_d__45_o *)_4__this->fields.currController;
                            if ( this )
                            {
                              this = (BattleMoviePlayer__PlayMovie_d__45_o *)UnityEngine_Component__GetComponent_object_(
                                                                               (UnityEngine_Component_o *)this,
                                                                               (const MethodInfo_3131B38 *)Method_UnityEngine_Component_GetComponent_MeshRenderer___);
                              if ( this )
                              {
                                this = (BattleMoviePlayer__PlayMovie_d__45_o *)UnityEngine_Renderer__get_material(
                                                                                 (UnityEngine_Renderer_o *)this,
                                                                                 0);
                                if ( _4__this->fields.baseMat )
                                {
                                  v40 = this;
                                  this = (BattleMoviePlayer__PlayMovie_d__45_o *)UnityEngine_Material__get_renderQueue(
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
                                      this = (BattleMoviePlayer__PlayMovie_d__45_o *)_4__this->fields.currController;
                                      if ( !this )
                                        goto LABEL_189;
                                      this = (BattleMoviePlayer__PlayMovie_d__45_o *)UnityEngine_Component__GetComponent_object_(
                                                                                       (UnityEngine_Component_o *)this,
                                                                                       (const MethodInfo_3131B38 *)Method_UnityEngine_Component_GetComponent_MeshRenderer___);
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
                                      this = (BattleMoviePlayer__PlayMovie_d__45_o *)v43->fields._player_k__BackingField;
                                      if ( !this )
                                        goto LABEL_189;
                                      this = (BattleMoviePlayer__PlayMovie_d__45_o *)CriMana_Player__get_movieInfo(
                                                                                       (CriMana_Player_o *)this,
                                                                                       0);
                                      if ( this )
                                      {
                                        v44 = _4__this->fields.currController;
                                        if ( !v44 )
                                          goto LABEL_189;
                                        this = (BattleMoviePlayer__PlayMovie_d__45_o *)v44->fields._player_k__BackingField;
                                        if ( !this )
                                          goto LABEL_189;
                                        this = (BattleMoviePlayer__PlayMovie_d__45_o *)CriMana_Player__get_movieInfo(
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
                                    this = (BattleMoviePlayer__PlayMovie_d__45_o *)_4__this->fields.currController;
                                    if ( this )
                                    {
                                      this = (BattleMoviePlayer__PlayMovie_d__45_o *)UnityEngine_Component__get_transform(
                                                                                       (UnityEngine_Component_o *)this,
                                                                                       0);
                                      if ( this )
                                      {
                                        localPosition = UnityEngine_Transform__get_localPosition(
                                                          (UnityEngine_Transform_o *)this,
                                                          0);
                                        this = (BattleMoviePlayer__PlayMovie_d__45_o *)_4__this->fields.currController;
                                        _4__this->fields.startPanelPosition = localPosition;
                                        if ( this )
                                        {
                                          this = (BattleMoviePlayer__PlayMovie_d__45_o *)UnityEngine_Component__get_transform(
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
                                              this = (BattleMoviePlayer__PlayMovie_d__45_o *)v47->fields.actorcamera;
                                              if ( !this )
                                                goto LABEL_189;
                                              this = (BattleMoviePlayer__PlayMovie_d__45_o *)UnityEngine_Component__get_transform(
                                                                                               (UnityEngine_Component_o *)this,
                                                                                               0);
                                              if ( !this )
                                                goto LABEL_189;
                                              _4__this->fields.cameraStartPosition = UnityEngine_Transform__get_position(
                                                                                       (UnityEngine_Transform_o *)this,
                                                                                       0);
                                            }
                                            this = (BattleMoviePlayer__PlayMovie_d__45_o *)v4->fields.movieObj;
                                            if ( this )
                                            {
                                              this = (BattleMoviePlayer__PlayMovie_d__45_o *)UnityEngine_GameObject__GetComponent_object_(
                                                                                               (UnityEngine_GameObject_o *)this,
                                                                                               (const MethodInfo_319312C *)Method_UnityEngine_GameObject_GetComponent_MeshRenderer___);
                                              if ( this )
                                              {
                                                this = (BattleMoviePlayer__PlayMovie_d__45_o *)UnityEngine_Renderer__get_material(
                                                                                                 (UnityEngine_Renderer_o *)this,
                                                                                                 0);
                                                v49 = v4->fields._movInfo_5__2;
                                                if ( v49 )
                                                {
                                                  v50 = this;
                                                  if ( v49->fields.cameraType == 1 )
                                                    BattleMoviePlayer__ShowBg(
                                                      _4__this,
                                                      v4->fields._fadeinTime_5__5 > 0.0,
                                                      v48);
                                                  if ( v4->fields._fadeinTime_5__5 <= 0.0 )
                                                  {
                                                    this = (BattleMoviePlayer__PlayMovie_d__45_o *)_4__this->fields.currController;
                                                    if ( !this )
                                                      goto LABEL_189;
                                                    this = (BattleMoviePlayer__PlayMovie_d__45_o *)UnityEngine_Component__GetComponent_object_(
                                                                                                     (UnityEngine_Component_o *)this,
                                                                                                     (const MethodInfo_3131B38 *)Method_UnityEngine_Component_GetComponent_MeshRenderer___);
                                                    if ( !this )
                                                      goto LABEL_189;
                                                    UnityEngine_Renderer__set_enabled(
                                                      (UnityEngine_Renderer_o *)this,
                                                      1,
                                                      0);
                                                  }
                                                  else
                                                  {
                                                    if ( !v50 )
                                                      goto LABEL_189;
                                                    if ( _4__this->fields.OverrideZDepth )
                                                      v51 = 8;
                                                    else
                                                      v51 = 4;
                                                    UnityEngine_Material__SetInt(
                                                      (UnityEngine_Material_o *)v50,
                                                      (System_String_o *)StringLiteral_16413/*"_ZTestMode"*/,
                                                      v51,
                                                      0);
                                                    UnityEngine_Material__SetFloat(
                                                      (UnityEngine_Material_o *)v50,
                                                      (System_String_o *)StringLiteral_16379/*"_Transparency"*/,
                                                      1.0,
                                                      0);
                                                  }
                                                  v52 = v4->fields._movInfo_5__2;
                                                  if ( !v52 )
                                                    goto LABEL_189;
                                                  if ( v52->fields.isBackMovie )
                                                  {
                                                    if ( !v50 )
                                                      goto LABEL_189;
                                                    UnityEngine_Material__SetInt(
                                                      (UnityEngine_Material_o *)v50,
                                                      (System_String_o *)StringLiteral_16414/*"_ZWriteMode"*/,
                                                      0,
                                                      0);
                                                  }
                                                  v53 = _4__this->fields.currController;
                                                  if ( v53 )
                                                  {
                                                    this = (BattleMoviePlayer__PlayMovie_d__45_o *)v53->fields._player_k__BackingField;
                                                    if ( this )
                                                    {
                                                      this = (BattleMoviePlayer__PlayMovie_d__45_o *)CriMana_Player__GetDisplayedFrameNo((CriMana_Player_o *)this, 0);
                                                      v54 = v4->fields._movInfo_5__2;
                                                      v4->fields._currentFrame_5__3 = (int)this;
                                                      if ( v54 )
                                                      {
                                                        v55 = 1.0;
                                                        if ( v54->fields.ignoreTimeScale
                                                          || (v55 = UnityEngine_Time__get_timeScale(0),
                                                              (v54 = v4->fields._movInfo_5__2) != 0) )
                                                        {
                                                          v4->fields._playSpeed_5__8 = v55 * v54->fields.playSpeed;
                                                          v4->fields._isLoopMovie_5__9 = v54->fields.loop;
LABEL_114:
                                                          if ( v4->fields._isLoopMovie_5__9
                                                            || (float)((float)(v4->fields._skipFrame_5__4
                                                                             + (float)v4->fields._currentFrame_5__3)
                                                                     + v4->fields._playSpeed_5__8) < v4->fields._fadeoutTime_5__6 )
                                                          {
                                                            v4->fields.__2__current = 0;
                                                            p__2__current = (CGThumbnailListItem_o *)&v4->fields.__2__current;
                                                            sub_1C6B9AC(p__2__current, 0, v2, v3);
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
      this = (BattleMoviePlayer__PlayMovie_d__45_o *)v4->fields.movieObj;
      v4->fields.__1__state = -1;
      if ( !this )
        goto LABEL_189;
      this = (BattleMoviePlayer__PlayMovie_d__45_o *)UnityEngine_GameObject__GetComponent_object_(
                                                       (UnityEngine_GameObject_o *)this,
                                                       (const MethodInfo_319312C *)Method_UnityEngine_GameObject_GetComponent_CriManaMovieController___);
      if ( !_4__this )
        goto LABEL_189;
      _4__this->fields.currController = (struct CriManaMovieController_o *)this;
      p_currController = &_4__this->fields.currController;
      sub_1C6B9AC((CGThumbnailListItem_o *)&_4__this->fields.currController, (int32_t)this, v7, v8);
      _4__this->fields.currentMovieNum = v4->fields.num;
      v10 = (UnityEngine_Object_o *)_4__this->fields.currController;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( !UnityEngine_Object__op_Inequality(v10, 0, 0) )
        return 0;
      this = (BattleMoviePlayer__PlayMovie_d__45_o *)_4__this->fields.MovieInfoList;
      if ( !this )
        goto LABEL_189;
      Item = System_Collections_Generic_List_object___get_Item(
               (System_Collections_Generic_List_object__o *)this,
               v4->fields.num,
               (const MethodInfo_38006A4 *)Method_System_Collections_Generic_List_BattleMoviePlayer_MovieInfo__get_Item__);
      v4->fields._movInfo_5__2 = (struct BattleMoviePlayer_MovieInfo_o *)Item;
      p_movInfo_5__2 = &v4->fields._movInfo_5__2;
      sub_1C6B9AC((CGThumbnailListItem_o *)&v4->fields._movInfo_5__2, (int32_t)Item, v13, v14);
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
      this = (BattleMoviePlayer__PlayMovie_d__45_o *)(*p_currController)->fields._player_k__BackingField;
      if ( !this )
        goto LABEL_189;
      CriMana_Player__Start((CriMana_Player_o *)this, 0);
      if ( !*p_currController )
        goto LABEL_189;
      this = (BattleMoviePlayer__PlayMovie_d__45_o *)(*p_currController)->fields._player_k__BackingField;
      if ( !this )
        goto LABEL_189;
      this = (BattleMoviePlayer__PlayMovie_d__45_o *)CriMana_Player__GetDisplayedFrameNo((CriMana_Player_o *)this, 0);
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
        sub_1C6B9AC(v21, 0, v18, v19);
        result = 1;
        LODWORD(v21[-1].fields._ThumbnailSpritePath_k__BackingField) = 1;
        return result;
      }
      goto LABEL_50;
  }
  return 0;
}


Il2CppObject *BattleMoviePlayer__PlayMovie_d__45__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        BattleMoviePlayer__PlayMovie_d__45_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __noreturn BattleMoviePlayer__PlayMovie_d__45__System_Collections_IEnumerator_Reset(
        BattleMoviePlayer__PlayMovie_d__45_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1C6BA1C(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C6BC54(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1C6BA1C(&Method_BattleMoviePlayer__PlayMovie_d__45_System_Collections_IEnumerator_Reset__);
  sub_1C6BB30(v3, v4);
}


Il2CppObject *BattleMoviePlayer__PlayMovie_d__45__System_Collections_IEnumerator_get_Current(
        BattleMoviePlayer__PlayMovie_d__45_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void BattleMoviePlayer__PlayMovie_d__45__System_IDisposable_Dispose(
        BattleMoviePlayer__PlayMovie_d__45_o *this,
        const MethodInfo *method)
{
  ;
}


void BattleMoviePlayer__StartMovie_d__36___ctor(
        BattleMoviePlayer__StartMovie_d__36_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.__1__state = 1__state;
}


bool BattleMoviePlayer__StartMovie_d__36__MoveNext(
        BattleMoviePlayer__StartMovie_d__36_o *this,
        const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  BattleMoviePlayer__StartMovie_d__36_o *v4; // x19
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
  const MethodInfo *v21; // x4
  System_Collections_IEnumerator_o *v22; // x0
  const MethodInfo *v23; // x2
  struct System_Collections_Generic_List_BattleMoviePlayer_MovieInfo__o *v24; // x8
  int32_t v25; // w1
  UnityEngine_Object_o *v26; // x21
  struct System_Collections_Generic_List_BattleMoviePlayer_MovieInfo__o *v27; // x9
  struct UnityEngine_GameObject_o *v28; // x1
  int32_t v29; // w2
  const MethodInfo *v30; // x3
  int32_t v31; // w2
  const MethodInfo *v32; // x3
  const MethodInfo *v33; // x4
  struct System_Collections_Generic_List_BattleMoviePlayer_MovieInfo__o *v34; // x8
  int size; // w8
  System_Collections_IEnumerator_o *v36; // x0
  System_Collections_Generic_List_T__o *v37; // x22
  System_Collections_IEnumerator_o *v38; // x21
  BattleMoviePlayer___c_c *v39; // x8
  System_Func_object__bool__o *_9__36_0; // x23
  Il2CppObject *v41; // x24
  struct BattleMoviePlayer___c_StaticFields *static_fields; // x0
  int32_t v43; // w2
  const MethodInfo *v44; // x3
  const MethodInfo *v45; // x2
  UnityEngine_Coroutine_o *v46; // x0
  CGThumbnailListItem_o *v47; // x19
  int32_t v48; // w2
  const MethodInfo *v49; // x3
  int v50; // w8
  System_Collections_IEnumerator_o *v51; // x0
  UnityEngine_Coroutine_o *v52; // x0
  int32_t v53; // w2
  const MethodInfo *v54; // x3

  v4 = this;
  if ( (byte_4CB8E95 & 1) == 0 )
  {
    sub_1C6BA08(&Method_BasicHelper_Any_BattleMoviePlayer_MovieInfo___);
    sub_1C6BA08(&System_Func_BattleMoviePlayer_MovieInfo__bool__TypeInfo);
    sub_1C6BA08(&Method_System_Collections_Generic_List_BattleMoviePlayer_MovieInfo__get_Count__);
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    sub_1C6BA08(&Method_BattleMoviePlayer___c__StartMovie_b__36_0__);
    this = (BattleMoviePlayer__StartMovie_d__36_o *)sub_1C6BA08(&BattleMoviePlayer___c_TypeInfo);
    byte_4CB8E95 = 1;
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
      this = (BattleMoviePlayer__StartMovie_d__36_o *)UnityEngine_Object__op_Inequality(currMovieObj, 0, 0);
      if ( ((unsigned __int8)this & 1) == 0 )
        goto LABEL_12;
      MovieInfoList = _4__this->fields.MovieInfoList;
      if ( !MovieInfoList )
        goto LABEL_45;
      if ( MovieInfoList->fields._size >= 1 )
      {
        v8 = BattleMoviePlayer__PlayMovie(_4__this, _4__this->fields.currMovieObj, 0, v3);
        started = UnityEngine_MonoBehaviour__StartCoroutine_71644868((UnityEngine_MonoBehaviour_o *)_4__this, v8, 0);
        v4->fields.__2__current = (Il2CppObject *)started;
        p__2__current = (CGThumbnailListItem_o *)&v4->fields.__2__current;
        sub_1C6B9AC(p__2__current, (int32_t)started, v11, v12);
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
      BattleMoviePlayer__Dispose(_4__this, method);
      goto LABEL_39;
    default:
      goto LABEL_41;
  }
  while ( 1 )
  {
    if ( !_4__this )
      goto LABEL_45;
    v27 = _4__this->fields.MovieInfoList;
    if ( !v27 )
      goto LABEL_45;
    if ( v14 >= v27->fields._size - 1 || _4__this->fields._ForceFadeout_k__BackingField )
    {
      v28 = _4__this->fields.currMovieObj;
      _4__this->fields.pastMovieObj = v28;
      sub_1C6B9AC((CGThumbnailListItem_o *)&_4__this->fields.pastMovieObj, (int32_t)v28, v2, v3);
      _4__this->fields.currMovieObj = 0;
      sub_1C6B9AC((CGThumbnailListItem_o *)&_4__this->fields.currMovieObj, 0, v29, v30);
      _4__this->fields.nextMovieObj = 0;
      sub_1C6B9AC((CGThumbnailListItem_o *)&_4__this->fields.nextMovieObj, 0, v31, v32);
      if ( !_4__this->fields._ForceFadeout_k__BackingField )
      {
        v34 = _4__this->fields.MovieInfoList;
        if ( !v34 )
LABEL_45:
          sub_1C6BC60(this, method);
        size = v34->fields._size;
        if ( size >= 1 )
        {
          v36 = BattleMoviePlayer__PlayMovieFadeOut(_4__this, _4__this->fields.pastMovieObj, size - 1, 0, v33);
          v37 = (System_Collections_Generic_List_T__o *)_4__this->fields.MovieInfoList;
          v38 = v36;
          v39 = BattleMoviePlayer___c_TypeInfo;
          if ( !BattleMoviePlayer___c_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BattleMoviePlayer___c_TypeInfo);
            v39 = BattleMoviePlayer___c_TypeInfo;
          }
          _9__36_0 = (System_Func_object__bool__o *)v39->static_fields->__9__36_0;
          if ( !_9__36_0 )
          {
            if ( !v39->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(v39);
              v39 = BattleMoviePlayer___c_TypeInfo;
            }
            v41 = (Il2CppObject *)v39->static_fields->__9;
            _9__36_0 = (System_Func_object__bool__o *)sub_1C6BC54(System_Func_BattleMoviePlayer_MovieInfo__bool__TypeInfo);
            System_Func_object__bool____ctor(_9__36_0, v41, Method_BattleMoviePlayer___c__StartMovie_b__36_0__, 0);
            static_fields = BattleMoviePlayer___c_TypeInfo->static_fields;
            static_fields->__9__36_0 = (struct System_Func_BattleMoviePlayer_MovieInfo__bool__o *)_9__36_0;
            sub_1C6B9AC((CGThumbnailListItem_o *)&static_fields->__9__36_0, (int32_t)_9__36_0, v43, v44);
          }
          if ( BasicHelper__Any_object_(
                 v37,
                 (System_Func_T__bool__o *)_9__36_0,
                 (const MethodInfo_3124430 *)Method_BasicHelper_Any_BattleMoviePlayer_MovieInfo___) )
          {
            BattleMoviePlayer__ShowBg(_4__this, 1, v45);
          }
          v46 = UnityEngine_MonoBehaviour__StartCoroutine_71644868((UnityEngine_MonoBehaviour_o *)_4__this, v38, 0);
          v4->fields.__2__current = (Il2CppObject *)v46;
          v47 = (CGThumbnailListItem_o *)&v4->fields.__2__current;
          sub_1C6B9AC(v47, (int32_t)v46, v48, v49);
          v50 = 3;
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
    sub_1C6B9AC((CGThumbnailListItem_o *)&_4__this->fields.pastMovieObj, (int32_t)v15, v2, v3);
    nextMovieObj = _4__this->fields.nextMovieObj;
    _4__this->fields.currMovieObj = nextMovieObj;
    sub_1C6B9AC((CGThumbnailListItem_o *)&_4__this->fields.currMovieObj, (int32_t)nextMovieObj, v17, v18);
    _4__this->fields.nextMovieObj = 0;
    sub_1C6B9AC((CGThumbnailListItem_o *)&_4__this->fields.nextMovieObj, 0, v19, v20);
    v22 = BattleMoviePlayer__PlayMovieFadeOut(_4__this, _4__this->fields.pastMovieObj, v4->fields._i_5__2, 0, v21);
    this = (BattleMoviePlayer__StartMovie_d__36_o *)UnityEngine_MonoBehaviour__StartCoroutine_71644868(
                                                      (UnityEngine_MonoBehaviour_o *)_4__this,
                                                      v22,
                                                      0);
    v24 = _4__this->fields.MovieInfoList;
    if ( !v24 )
      goto LABEL_45;
    v25 = v4->fields._i_5__2 + 2;
    if ( v25 < v24->fields._size )
      BattleMoviePlayer__GetMoviePanelAdd(_4__this, v25, v23);
    v26 = (UnityEngine_Object_o *)_4__this->fields.currMovieObj;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    this = (BattleMoviePlayer__StartMovie_d__36_o *)UnityEngine_Object__op_Inequality(v26, 0, 0);
    if ( ((unsigned __int8)this & 1) != 0 )
      break;
LABEL_23:
    v14 = v4->fields._i_5__2 + 1;
    v4->fields._i_5__2 = v14;
  }
  v51 = BattleMoviePlayer__PlayMovie(_4__this, _4__this->fields.currMovieObj, v4->fields._i_5__2 + 1, v3);
  v52 = UnityEngine_MonoBehaviour__StartCoroutine_71644868((UnityEngine_MonoBehaviour_o *)_4__this, v51, 0);
  v4->fields.__2__current = (Il2CppObject *)v52;
  v47 = (CGThumbnailListItem_o *)&v4->fields.__2__current;
  sub_1C6B9AC(v47, (int32_t)v52, v53, v54);
  v50 = 2;
LABEL_43:
  LODWORD(v47[-1].fields._ThumbnailSpritePath_k__BackingField) = v50;
  LOBYTE(perf) = 1;
  return (char)perf;
}


Il2CppObject *BattleMoviePlayer__StartMovie_d__36__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        BattleMoviePlayer__StartMovie_d__36_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __noreturn BattleMoviePlayer__StartMovie_d__36__System_Collections_IEnumerator_Reset(
        BattleMoviePlayer__StartMovie_d__36_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1C6BA1C(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C6BC54(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1C6BA1C(&Method_BattleMoviePlayer__StartMovie_d__36_System_Collections_IEnumerator_Reset__);
  sub_1C6BB30(v3, v4);
}


Il2CppObject *BattleMoviePlayer__StartMovie_d__36__System_Collections_IEnumerator_get_Current(
        BattleMoviePlayer__StartMovie_d__36_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void BattleMoviePlayer__StartMovie_d__36__System_IDisposable_Dispose(
        BattleMoviePlayer__StartMovie_d__36_o *this,
        const MethodInfo *method)
{
  ;
}


void BattleMoviePlayer___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_4CB8E90 & 1) == 0 )
  {
    sub_1C6BA08(&BattleMoviePlayer___c_TypeInfo);
    byte_4CB8E90 = 1;
  }
  v1 = (Il2CppObject *)sub_1C6BC54(BattleMoviePlayer___c_TypeInfo);
  System_Object___ctor(v1, 0);
  BattleMoviePlayer___c_TypeInfo->static_fields->__9 = (struct BattleMoviePlayer___c_o *)v1;
  sub_1C6B9AC((CGThumbnailListItem_o *)BattleMoviePlayer___c_TypeInfo->static_fields, (int32_t)v1, v2, v3);
}


void BattleMoviePlayer___c___ctor(BattleMoviePlayer___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool BattleMoviePlayer___c___Dispose_b__28_0(
        BattleMoviePlayer___c_o *this,
        BattleMoviePlayer_MovieInfo_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C6BC60(this, 0);
  return x->fields.cameraType == 1;
}


bool BattleMoviePlayer___c___FadeoutDeleteMovie_b__39_0(
        BattleMoviePlayer___c_o *this,
        BattleMoviePlayer_MovieInfo_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C6BC60(this, 0);
  return x->fields.cameraType == 1;
}


bool BattleMoviePlayer___c___PauseMovie_b__37_0(
        BattleMoviePlayer___c_o *this,
        BattleMoviePlayer_MovieInfo_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C6BC60(this, 0);
  return x->fields.cameraType == 1;
}


bool BattleMoviePlayer___c___StartMovie_b__36_0(
        BattleMoviePlayer___c_o *this,
        BattleMoviePlayer_MovieInfo_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C6BC60(this, 0);
  return x->fields.cameraType == 1;
}