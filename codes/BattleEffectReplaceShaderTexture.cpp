void __fastcall BattleEffectReplaceShaderTexture___ctor(
        BattleEffectReplaceShaderTexture_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  __int64 v22; // x1
  __int64 v23; // x1
  __int64 v24; // x1
  System_Collections_Generic_List_object__o *v25; // x20
  int32_t v26; // w2
  const MethodInfo *v27; // x3
  System_Collections_Generic_List_object__o *v28; // x20
  __int64 v29; // x0
  Il2CppObject *v30; // x1
  int32_t v31; // w2
  const MethodInfo *v32; // x3
  struct System_Object_array *items; // x8
  _QWORD *v34; // x9
  __int64 size; // x10
  Il2CppClass **v36; // x0
  int32_t v37; // w2
  const MethodInfo *v38; // x3
  struct System_Object_array *v39; // x8
  _QWORD *v40; // x9
  __int64 v41; // x10
  Il2CppClass **v42; // x0
  int32_t v43; // w2
  const MethodInfo *v44; // x3
  struct System_Object_array *v45; // x8
  _QWORD *v46; // x9
  __int64 v47; // x10
  Il2CppClass **v48; // x0
  int32_t v49; // w2
  const MethodInfo *v50; // x3
  struct System_Object_array *v51; // x8
  _QWORD *v52; // x9
  __int64 v53; // x10
  Il2CppClass **v54; // x0
  int32_t v55; // w2
  const MethodInfo *v56; // x3
  struct System_Object_array *v57; // x8
  _QWORD *v58; // x9
  __int64 v59; // x10
  Il2CppClass **v60; // x0
  int32_t v61; // w2
  const MethodInfo *v62; // x3
  struct System_Object_array *v63; // x8
  _QWORD *v64; // x9
  __int64 v65; // x10
  Il2CppClass **v66; // x0
  int32_t v67; // w2
  const MethodInfo *v68; // x3
  struct System_Object_array *v69; // x8
  _QWORD *v70; // x9
  __int64 v71; // x10
  Il2CppClass **v72; // x0
  int32_t v73; // w2
  const MethodInfo *v74; // x3
  struct System_Object_array *v75; // x8
  _QWORD *v76; // x9
  __int64 v77; // x10
  Il2CppClass **v78; // x0
  int32_t v79; // w2
  const MethodInfo *v80; // x3
  struct System_Object_array *v81; // x8
  _QWORD *v82; // x9
  __int64 v83; // x10
  Il2CppClass **v84; // x0
  int32_t v85; // w2
  const MethodInfo *v86; // x3
  struct System_Object_array *v87; // x8
  _QWORD *v88; // x9
  __int64 v89; // x10
  Il2CppClass **v90; // x0
  int32_t v91; // w2
  const MethodInfo *v92; // x3
  struct System_Object_array *v93; // x8
  _QWORD *v94; // x9
  __int64 v95; // x10
  Il2CppClass **v96; // x0
  int32_t v97; // w2
  const MethodInfo *v98; // x3
  struct System_Object_array *v99; // x8
  _QWORD *v100; // x9
  __int64 v101; // x10
  Il2CppClass **v102; // x0
  int32_t v103; // w2
  const MethodInfo *v104; // x3
  struct System_Object_array *v105; // x8
  _QWORD *v106; // x9
  __int64 v107; // x10
  Il2CppClass **v108; // x0
  int32_t v109; // w2
  const MethodInfo *v110; // x3
  struct System_Object_array *v111; // x8
  _QWORD *v112; // x9
  __int64 v113; // x10
  Il2CppClass **v114; // x0
  int32_t v115; // w2
  const MethodInfo *v116; // x3
  System_Collections_Generic_List_object__o *v117; // x20
  int32_t v118; // w2
  const MethodInfo *v119; // x3
  System_Collections_Generic_List_object__o *v120; // x20
  int32_t v121; // w2
  const MethodInfo *v122; // x3

  if ( (byte_49BDEBA & 1) == 0 )
  {
    sub_1B4CF90(&Method_System_Collections_Generic_List_string__Add__, method);
    sub_1B4CF90(&Method_System_Collections_Generic_List_Material___ctor__, v3);
    sub_1B4CF90(&Method_System_Collections_Generic_List_GameObject___ctor__, v4);
    sub_1B4CF90(&Method_System_Collections_Generic_List_string___ctor__, v5);
    sub_1B4CF90(&Method_System_Collections_Generic_List_BattleEffectReplaceShaderTexture_ReplaceObject___ctor__, v6);
    sub_1B4CF90(&System_Collections_Generic_List_Material__TypeInfo, v7);
    sub_1B4CF90(&System_Collections_Generic_List_BattleEffectReplaceShaderTexture_ReplaceObject__TypeInfo, v8);
    sub_1B4CF90(&System_Collections_Generic_List_GameObject__TypeInfo, v9);
    sub_1B4CF90(&System_Collections_Generic_List_string__TypeInfo, v10);
    sub_1B4CF90(&StringLiteral_7139/*"Hidden/Particle/MultiplyAdd1Pass-Stencil"*/, v11);
    sub_1B4CF90(&StringLiteral_7142/*"Hidden/Particle/distortion-GrabPass"*/, v12);
    sub_1B4CF90(&StringLiteral_6298/*"FGO_Battle/Ken/Base"*/, v13);
    sub_1B4CF90(&StringLiteral_7143/*"Hidden/Particle/distortion-Stencil"*/, v14);
    sub_1B4CF90(&StringLiteral_7141/*"Hidden/Particle/distortion"*/, v15);
    sub_1B4CF90(&StringLiteral_6299/*"FGO_Battle/Particle/Base"*/, v16);
    sub_1B4CF90(&StringLiteral_7138/*"Hidden/Particle/MultiplyAdd1Pass"*/, v17);
    sub_1B4CF90(&StringLiteral_7132/*"Hidden/Ken/Distortion"*/, v18);
    sub_1B4CF90(&StringLiteral_7140/*"Hidden/Particle/dissolve"*/, v19);
    sub_1B4CF90(&StringLiteral_7134/*"Hidden/Ken/MultiplyAdd"*/, v20);
    sub_1B4CF90(&StringLiteral_7135/*"Hidden/Particle/Base-Stencil"*/, v21);
    sub_1B4CF90(&StringLiteral_7136/*"Hidden/Particle/MultiplyAdd"*/, v22);
    sub_1B4CF90(&StringLiteral_7137/*"Hidden/Particle/MultiplyAdd-Stencil"*/, v23);
    sub_1B4CF90(&StringLiteral_7133/*"Hidden/Ken/GradationMap"*/, v24);
    byte_49BDEBA = 1;
  }
  v25 = (System_Collections_Generic_List_object__o *)sub_1B4D1DC(System_Collections_Generic_List_BattleEffectReplaceShaderTexture_ReplaceObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v25,
    (const MethodInfo_357F9A8 *)Method_System_Collections_Generic_List_BattleEffectReplaceShaderTexture_ReplaceObject___ctor__);
  this->fields.replaceObjects = (struct System_Collections_Generic_List_BattleEffectReplaceShaderTexture_ReplaceObject__o *)v25;
  sub_1B4CF34((CGThumbnailListItem_o *)&this->fields.replaceObjects, (int32_t)v25, v26, v27);
  v28 = (System_Collections_Generic_List_object__o *)sub_1B4D1DC(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v28,
    (const MethodInfo_357F9A8 *)Method_System_Collections_Generic_List_string___ctor__);
  if ( !v28 )
    goto LABEL_61;
  v30 = (Il2CppObject *)StringLiteral_6299/*"FGO_Battle/Particle/Base"*/;
  items = v28->fields._items;
  v34 = Method_System_Collections_Generic_List_string__Add__;
  ++v28->fields._version;
  if ( !items )
    goto LABEL_61;
  size = v28->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v28,
      v30,
      *(const MethodInfo_35801DC **)(*(_QWORD *)(v34[4] + 192LL) + 112LL));
  }
  else
  {
    v36 = &items->obj.klass + size;
    v28->fields._size = size + 1;
    v36[4] = (Il2CppClass *)v30;
    sub_1B4CF34((CGThumbnailListItem_o *)(v36 + 4), (int32_t)v30, v31, v32);
  }
  v30 = (Il2CppObject *)StringLiteral_7136/*"Hidden/Particle/MultiplyAdd"*/;
  v39 = v28->fields._items;
  v40 = Method_System_Collections_Generic_List_string__Add__;
  ++v28->fields._version;
  if ( !v39 )
    goto LABEL_61;
  v41 = v28->fields._size;
  if ( (unsigned int)v41 >= v39->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v28,
      v30,
      *(const MethodInfo_35801DC **)(*(_QWORD *)(v40[4] + 192LL) + 112LL));
  }
  else
  {
    v42 = &v39->obj.klass + v41;
    v28->fields._size = v41 + 1;
    v42[4] = (Il2CppClass *)v30;
    sub_1B4CF34((CGThumbnailListItem_o *)(v42 + 4), (int32_t)v30, v37, v38);
  }
  v30 = (Il2CppObject *)StringLiteral_7138/*"Hidden/Particle/MultiplyAdd1Pass"*/;
  v45 = v28->fields._items;
  v46 = Method_System_Collections_Generic_List_string__Add__;
  ++v28->fields._version;
  if ( !v45 )
    goto LABEL_61;
  v47 = v28->fields._size;
  if ( (unsigned int)v47 >= v45->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v28,
      v30,
      *(const MethodInfo_35801DC **)(*(_QWORD *)(v46[4] + 192LL) + 112LL));
  }
  else
  {
    v48 = &v45->obj.klass + v47;
    v28->fields._size = v47 + 1;
    v48[4] = (Il2CppClass *)v30;
    sub_1B4CF34((CGThumbnailListItem_o *)(v48 + 4), (int32_t)v30, v43, v44);
  }
  v30 = (Il2CppObject *)StringLiteral_7141/*"Hidden/Particle/distortion"*/;
  v51 = v28->fields._items;
  v52 = Method_System_Collections_Generic_List_string__Add__;
  ++v28->fields._version;
  if ( !v51 )
    goto LABEL_61;
  v53 = v28->fields._size;
  if ( (unsigned int)v53 >= v51->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v28,
      v30,
      *(const MethodInfo_35801DC **)(*(_QWORD *)(v52[4] + 192LL) + 112LL));
  }
  else
  {
    v54 = &v51->obj.klass + v53;
    v28->fields._size = v53 + 1;
    v54[4] = (Il2CppClass *)v30;
    sub_1B4CF34((CGThumbnailListItem_o *)(v54 + 4), (int32_t)v30, v49, v50);
  }
  v30 = (Il2CppObject *)StringLiteral_7135/*"Hidden/Particle/Base-Stencil"*/;
  v57 = v28->fields._items;
  v58 = Method_System_Collections_Generic_List_string__Add__;
  ++v28->fields._version;
  if ( !v57 )
    goto LABEL_61;
  v59 = v28->fields._size;
  if ( (unsigned int)v59 >= v57->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v28,
      v30,
      *(const MethodInfo_35801DC **)(*(_QWORD *)(v58[4] + 192LL) + 112LL));
  }
  else
  {
    v60 = &v57->obj.klass + v59;
    v28->fields._size = v59 + 1;
    v60[4] = (Il2CppClass *)v30;
    sub_1B4CF34((CGThumbnailListItem_o *)(v60 + 4), (int32_t)v30, v55, v56);
  }
  v30 = (Il2CppObject *)StringLiteral_7137/*"Hidden/Particle/MultiplyAdd-Stencil"*/;
  v63 = v28->fields._items;
  v64 = Method_System_Collections_Generic_List_string__Add__;
  ++v28->fields._version;
  if ( !v63 )
    goto LABEL_61;
  v65 = v28->fields._size;
  if ( (unsigned int)v65 >= v63->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v28,
      v30,
      *(const MethodInfo_35801DC **)(*(_QWORD *)(v64[4] + 192LL) + 112LL));
  }
  else
  {
    v66 = &v63->obj.klass + v65;
    v28->fields._size = v65 + 1;
    v66[4] = (Il2CppClass *)v30;
    sub_1B4CF34((CGThumbnailListItem_o *)(v66 + 4), (int32_t)v30, v61, v62);
  }
  v30 = (Il2CppObject *)StringLiteral_7139/*"Hidden/Particle/MultiplyAdd1Pass-Stencil"*/;
  v69 = v28->fields._items;
  v70 = Method_System_Collections_Generic_List_string__Add__;
  ++v28->fields._version;
  if ( !v69 )
    goto LABEL_61;
  v71 = v28->fields._size;
  if ( (unsigned int)v71 >= v69->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v28,
      v30,
      *(const MethodInfo_35801DC **)(*(_QWORD *)(v70[4] + 192LL) + 112LL));
  }
  else
  {
    v72 = &v69->obj.klass + v71;
    v28->fields._size = v71 + 1;
    v72[4] = (Il2CppClass *)v30;
    sub_1B4CF34((CGThumbnailListItem_o *)(v72 + 4), (int32_t)v30, v67, v68);
  }
  v30 = (Il2CppObject *)StringLiteral_7143/*"Hidden/Particle/distortion-Stencil"*/;
  v75 = v28->fields._items;
  v76 = Method_System_Collections_Generic_List_string__Add__;
  ++v28->fields._version;
  if ( !v75 )
    goto LABEL_61;
  v77 = v28->fields._size;
  if ( (unsigned int)v77 >= v75->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v28,
      v30,
      *(const MethodInfo_35801DC **)(*(_QWORD *)(v76[4] + 192LL) + 112LL));
  }
  else
  {
    v78 = &v75->obj.klass + v77;
    v28->fields._size = v77 + 1;
    v78[4] = (Il2CppClass *)v30;
    sub_1B4CF34((CGThumbnailListItem_o *)(v78 + 4), (int32_t)v30, v73, v74);
  }
  v30 = (Il2CppObject *)StringLiteral_7142/*"Hidden/Particle/distortion-GrabPass"*/;
  v81 = v28->fields._items;
  v82 = Method_System_Collections_Generic_List_string__Add__;
  ++v28->fields._version;
  if ( !v81 )
    goto LABEL_61;
  v83 = v28->fields._size;
  if ( (unsigned int)v83 >= v81->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v28,
      v30,
      *(const MethodInfo_35801DC **)(*(_QWORD *)(v82[4] + 192LL) + 112LL));
  }
  else
  {
    v84 = &v81->obj.klass + v83;
    v28->fields._size = v83 + 1;
    v84[4] = (Il2CppClass *)v30;
    sub_1B4CF34((CGThumbnailListItem_o *)(v84 + 4), (int32_t)v30, v79, v80);
  }
  v30 = (Il2CppObject *)StringLiteral_7140/*"Hidden/Particle/dissolve"*/;
  v87 = v28->fields._items;
  v88 = Method_System_Collections_Generic_List_string__Add__;
  ++v28->fields._version;
  if ( !v87 )
    goto LABEL_61;
  v89 = v28->fields._size;
  if ( (unsigned int)v89 >= v87->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v28,
      v30,
      *(const MethodInfo_35801DC **)(*(_QWORD *)(v88[4] + 192LL) + 112LL));
  }
  else
  {
    v90 = &v87->obj.klass + v89;
    v28->fields._size = v89 + 1;
    v90[4] = (Il2CppClass *)v30;
    sub_1B4CF34((CGThumbnailListItem_o *)(v90 + 4), (int32_t)v30, v85, v86);
  }
  v30 = (Il2CppObject *)StringLiteral_6298/*"FGO_Battle/Ken/Base"*/;
  v93 = v28->fields._items;
  v94 = Method_System_Collections_Generic_List_string__Add__;
  ++v28->fields._version;
  if ( !v93 )
    goto LABEL_61;
  v95 = v28->fields._size;
  if ( (unsigned int)v95 >= v93->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v28,
      v30,
      *(const MethodInfo_35801DC **)(*(_QWORD *)(v94[4] + 192LL) + 112LL));
  }
  else
  {
    v96 = &v93->obj.klass + v95;
    v28->fields._size = v95 + 1;
    v96[4] = (Il2CppClass *)v30;
    sub_1B4CF34((CGThumbnailListItem_o *)(v96 + 4), (int32_t)v30, v91, v92);
  }
  v30 = (Il2CppObject *)StringLiteral_7134/*"Hidden/Ken/MultiplyAdd"*/;
  v99 = v28->fields._items;
  v100 = Method_System_Collections_Generic_List_string__Add__;
  ++v28->fields._version;
  if ( !v99 )
    goto LABEL_61;
  v101 = v28->fields._size;
  if ( (unsigned int)v101 >= v99->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v28,
      v30,
      *(const MethodInfo_35801DC **)(*(_QWORD *)(v100[4] + 192LL) + 112LL));
  }
  else
  {
    v102 = &v99->obj.klass + v101;
    v28->fields._size = v101 + 1;
    v102[4] = (Il2CppClass *)v30;
    sub_1B4CF34((CGThumbnailListItem_o *)(v102 + 4), (int32_t)v30, v97, v98);
  }
  v30 = (Il2CppObject *)StringLiteral_7132/*"Hidden/Ken/Distortion"*/;
  v105 = v28->fields._items;
  v106 = Method_System_Collections_Generic_List_string__Add__;
  ++v28->fields._version;
  if ( !v105 )
    goto LABEL_61;
  v107 = v28->fields._size;
  if ( (unsigned int)v107 >= v105->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v28,
      v30,
      *(const MethodInfo_35801DC **)(*(_QWORD *)(v106[4] + 192LL) + 112LL));
  }
  else
  {
    v108 = &v105->obj.klass + v107;
    v28->fields._size = v107 + 1;
    v108[4] = (Il2CppClass *)v30;
    sub_1B4CF34((CGThumbnailListItem_o *)(v108 + 4), (int32_t)v30, v103, v104);
  }
  v30 = (Il2CppObject *)StringLiteral_7133/*"Hidden/Ken/GradationMap"*/;
  v111 = v28->fields._items;
  v112 = Method_System_Collections_Generic_List_string__Add__;
  ++v28->fields._version;
  if ( !v111 )
LABEL_61:
    sub_1B4D1EC(v29, v30);
  v113 = v28->fields._size;
  if ( (unsigned int)v113 >= v111->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v28,
      v30,
      *(const MethodInfo_35801DC **)(*(_QWORD *)(v112[4] + 192LL) + 112LL));
  }
  else
  {
    v114 = &v111->obj.klass + v113;
    v28->fields._size = v113 + 1;
    v114[4] = (Il2CppClass *)v30;
    sub_1B4CF34((CGThumbnailListItem_o *)(v114 + 4), (int32_t)v30, v109, v110);
  }
  this->fields.autoReplaceShaderNames = (struct System_Collections_Generic_List_string__o *)v28;
  sub_1B4CF34((CGThumbnailListItem_o *)&this->fields.autoReplaceShaderNames, (int32_t)v28, v115, v116);
  v117 = (System_Collections_Generic_List_object__o *)sub_1B4D1DC(System_Collections_Generic_List_Material__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v117,
    (const MethodInfo_357F9A8 *)Method_System_Collections_Generic_List_Material___ctor__);
  this->fields.replaceMaterials = (struct System_Collections_Generic_List_Material__o *)v117;
  sub_1B4CF34((CGThumbnailListItem_o *)&this->fields.replaceMaterials, (int32_t)v117, v118, v119);
  v120 = (System_Collections_Generic_List_object__o *)sub_1B4D1DC(System_Collections_Generic_List_GameObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v120,
    (const MethodInfo_357F9A8 *)Method_System_Collections_Generic_List_GameObject___ctor__);
  this->fields.shadowAuraList = (struct System_Collections_Generic_List_GameObject__o *)v120;
  sub_1B4CF34((CGThumbnailListItem_o *)&this->fields.shadowAuraList, (int32_t)v120, v121, v122);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall BattleEffectReplaceShaderTexture__Execute(
        BattleEffectReplaceShaderTexture_o *this,
        const MethodInfo *method)
{
  BattleEffectReplaceShaderTexture_o *v2; // x19
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  __int64 v22; // x1
  __int64 v23; // x1
  __int64 v24; // x1
  __int64 v25; // x1
  __int64 v26; // x1
  __int64 v27; // x1
  __int64 v28; // x1
  __int64 v29; // x1
  __int64 v30; // x1
  __int64 v31; // x1
  __int64 v32; // x1
  __int64 v33; // x1
  __int64 v34; // x1
  __int64 v35; // x1
  __int64 v36; // x1
  __int64 v37; // x1
  __int64 v38; // x1
  __int64 v39; // x1
  __int64 v40; // x1
  __int64 v41; // x1
  struct System_Collections_Generic_List_BattleEffectReplaceShaderTexture_ReplaceObject__o *replaceObjects; // x8
  System_Collections_Generic_Dictionary_object__object__o *v43; // x20
  UnityEngine_Object_o *v44; // x20
  _BOOL8 v45; // x0
  __int64 v46; // x1
  const MethodInfo *v47; // x4
  Il2CppObject *current; // x26
  System_Collections_Generic_List_object__o *TargetActors; // x0
  __int64 v50; // x1
  _BOOL8 v51; // x0
  __int64 v52; // x1
  BattleActorControl_o *v53; // x29
  bool isChocoServant; // w22
  _BOOL8 isShadowServant; // x0
  __int64 v56; // x1
  const MethodInfo *v57; // x3
  bool v58; // w23
  UnityEngine_Object_o *ActorTexture; // x24
  BattleServantData_o *battleSvtData; // x0
  long double inited; // q0
  System_Collections_Generic_IEnumerable_TSource__o *klass; // x25
  _QWORD *v63; // x25
  __int64 v64; // x8
  __int64 v65; // x0
  __int64 v66; // x0
  UnityEngine_Transform_o *transform; // x0
  Il2CppObject *NodeFromName; // x1
  System_Collections_Generic_IEnumerable_T__o *appended; // x0
  System_Collections_Generic_IEnumerable_T__o *v70; // x25
  Il2CppObject *v71; // x1
  System_Collections_Generic_IEnumerable_Transform__o *v72; // x28
  System_Collections_Generic_List_object__o *shadowAuraList; // x25
  NpcServantDisplayTypeDetailEntity_o *v74; // x27
  System_Collections_Generic_IEnumerable_T__o *ShadowEffectAndAttachForEachNodes; // x0
  UnityEngine_Object_o *monitor; // x25
  __int64 v77; // x1
  UnityEngine_Object_o *v78; // x0
  System_Collections_Generic_List_object__o *v79; // x0
  __int64 v80; // x1
  System_Collections_Generic_List_T__o *v81; // x0
  Il2CppObject *v82; // x28
  const MethodInfo *v83; // x5
  UnityEngine_Renderer_array *TargetRenderers; // x0
  __int64 v85; // x1
  UnityEngine_Renderer_array *v86; // x27
  __int64 v87; // x8
  unsigned __int64 v88; // x9
  System_Collections_Generic_List_object__o *v89; // x0
  Il2CppObject *v90; // x25
  const MethodInfo *v91; // x4
  System_Collections_Generic_List_object__o *TargetMaterials; // x0
  __int64 v93; // x1
  Il2CppObject *v94; // x28
  _BOOL8 v95; // x0
  __int64 v96; // x1
  System_Collections_Generic_List_object__o *autoReplaceShaderNames; // x25
  UnityEngine_Object_o *shader; // x0
  __int64 v99; // x1
  Il2CppObject *name; // x0
  UnityEngine_Object_o *v101; // x0
  __int64 v102; // x1
  System_String_o *v103; // x0
  BattleEffectReplaceShaderTexture_o *v104; // x0
  const MethodInfo *v105; // x3
  UnityEngine_Object_o *ReplaceChocoShader; // x29
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v108; // x1
  Il2CppObject *Component_object; // x25
  _BOOL8 v110; // x0
  __int64 v111; // x1
  UnityEngine_Shader_o *v112; // x0
  _BOOL8 v113; // x0
  const MethodInfo *v114; // x3
  Il2CppObject *object; // x0
  const MethodInfo *v116; // x4
  BattleEffectReplaceShaderTexture_o *v117; // x0
  const MethodInfo *v118; // x5
  System_Collections_Generic_List_object__o *v119; // x25
  UnityEngine_Object_o *v120; // x0
  __int64 v121; // x1
  Il2CppObject *v122; // x0
  UnityEngine_Object_o *v123; // x0
  __int64 v124; // x1
  System_String_o *v125; // x0
  BattleEffectReplaceShaderTexture_o *v126; // x0
  const MethodInfo *v127; // x3
  UnityEngine_Object_o *v128; // x25
  const MethodInfo *v129; // x3
  BattleEffectReplaceShaderTexture_o *v130; // x0
  const MethodInfo *v131; // x5
  System_Collections_Generic_List_object__o *replaceMaterials; // x0
  __int64 v133; // x1
  int32_t v134; // w2
  const MethodInfo *v135; // x3
  System_Collections_Generic_List_object__o *v136; // x0
  struct System_Object_array *items; // x8
  _QWORD *v138; // x9
  __int64 size; // x10
  Il2CppClass **v140; // x8
  System_String_o *targetShaderName; // [xsp+8h] [xbp-138h]
  Il2CppObject *v142; // [xsp+10h] [xbp-130h]
  unsigned __int64 v143; // [xsp+18h] [xbp-128h]
  UnityEngine_Component_o *v144; // [xsp+20h] [xbp-120h]
  System_Collections_Generic_List_Enumerator_object__o v145; // [xsp+28h] [xbp-118h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v146; // [xsp+40h] [xbp-100h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v147; // [xsp+60h] [xbp-E0h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v148; // [xsp+80h] [xbp-C0h] BYREF
  NpcServantDisplayTypeDetailEntity_o *entity; // [xsp+98h] [xbp-A8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v150; // [xsp+A0h] [xbp-A0h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v151; // [xsp+C0h] [xbp-80h] BYREF
  System_Collections_Generic_Dictionary_string__Shader__o *shaderCaches; // [xsp+D8h] [xbp-68h] BYREF

  v2 = this;
  if ( (byte_49BDEAE & 1) == 0 )
  {
    sub_1B4CF90(&Method_System_Array_Empty_Transform___, method);
    sub_1B4CF90(&Method_BasicHelper_ExcludeNull_Transform___, v3);
    sub_1B4CF90(&BattleEffectUtility_TypeInfo, v4);
    sub_1B4CF90(&Method_System_Collections_Generic_Dictionary_string__Shader___ctor__, v5);
    sub_1B4CF90(&System_Collections_Generic_Dictionary_string__Shader__TypeInfo, v6);
    sub_1B4CF90(&Method_System_Linq_Enumerable_Append_Transform___, v7);
    sub_1B4CF90(&Method_System_Linq_Enumerable_DefaultIfEmpty_Transform___, v8);
    sub_1B4CF90(&Method_System_Collections_Generic_List_Enumerator_BattleActorControl__Dispose__, v9);
    sub_1B4CF90(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, v10);
    sub_1B4CF90(
      &Method_System_Collections_Generic_List_Enumerator_BattleEffectReplaceShaderTexture_ReplaceObject__Dispose__,
      v11);
    sub_1B4CF90(&Method_System_Collections_Generic_List_Enumerator_Material__Dispose__, v12);
    sub_1B4CF90(
      &Method_System_Collections_Generic_List_Enumerator_BattleEffectReplaceShaderTexture_RendererType__Dispose__,
      v13);
    sub_1B4CF90(
      &Method_System_Collections_Generic_List_Enumerator_BattleEffectReplaceShaderTexture_RendererType__MoveNext__,
      v14);
    sub_1B4CF90(&Method_System_Collections_Generic_List_Enumerator_BattleActorControl__MoveNext__, v15);
    sub_1B4CF90(
      &Method_System_Collections_Generic_List_Enumerator_BattleEffectReplaceShaderTexture_ReplaceObject__MoveNext__,
      v16);
    sub_1B4CF90(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v17);
    sub_1B4CF90(&Method_System_Collections_Generic_List_Enumerator_Material__MoveNext__, v18);
    sub_1B4CF90(&Method_System_Collections_Generic_List_Enumerator_Material__get_Current__, v19);
    sub_1B4CF90(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v20);
    sub_1B4CF90(
      &Method_System_Collections_Generic_List_Enumerator_BattleEffectReplaceShaderTexture_ReplaceObject__get_Current__,
      v21);
    sub_1B4CF90(&Method_System_Collections_Generic_List_Enumerator_BattleActorControl__get_Current__, v22);
    sub_1B4CF90(
      &Method_System_Collections_Generic_List_Enumerator_BattleEffectReplaceShaderTexture_RendererType__get_Current__,
      v23);
    sub_1B4CF90(&Method_UnityEngine_GameObject_GetComponent_BattleServantDeadComponent___, v24);
    sub_1B4CF90(&Method_System_Collections_Generic_List_GameObject__AddRange__, v25);
    sub_1B4CF90(&Method_System_Collections_Generic_List_Material__Add__, v26);
    sub_1B4CF90(&Method_System_Collections_Generic_List_string__Contains__, v27);
    sub_1B4CF90(&Method_System_Collections_Generic_List_Material__Contains__, v28);
    sub_1B4CF90(&Method_System_Collections_Generic_List_Renderer__Contains__, v29);
    sub_1B4CF90(
      &Method_System_Collections_Generic_List_BattleEffectReplaceShaderTexture_RendererType__GetEnumerator__,
      v30);
    sub_1B4CF90(
      &Method_System_Collections_Generic_List_BattleEffectReplaceShaderTexture_ReplaceObject__GetEnumerator__,
      v31);
    sub_1B4CF90(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v32);
    sub_1B4CF90(&Method_System_Collections_Generic_List_BattleActorControl__GetEnumerator__, v33);
    sub_1B4CF90(&Method_System_Collections_Generic_List_Material__GetEnumerator__, v34);
    sub_1B4CF90(
      &Method_System_Collections_Generic_List_BattleEffectReplaceShaderTexture_ReplaceObject__get_Count__,
      v35);
    sub_1B4CF90(&UnityEngine_Object_TypeInfo, v36);
    sub_1B4CF90(&Method_UnityEngine_Resources_Load_Texture2D___, v37);
    sub_1B4CF90(&StringLiteral_15849/*"_Choco"*/, v38);
    sub_1B4CF90(&StringLiteral_16030/*"_Shadow"*/, v39);
    sub_1B4CF90(&StringLiteral_12542/*"Shaders/ChocoMap"*/, v40);
    this = (BattleEffectReplaceShaderTexture_o *)sub_1B4CF90(&StringLiteral_4855/*"Custom/SoftEdgeUnlitCutZ_Choco (SoftClip)"*/, v41);
    byte_49BDEAE = 1;
  }
  memset(&v151, 0, sizeof(v151));
  memset(&v150, 0, sizeof(v150));
  entity = 0LL;
  memset(&v148, 0, sizeof(v148));
  memset(&v147, 0, sizeof(v147));
  memset(&v146, 0, sizeof(v146));
  replaceObjects = v2->fields.replaceObjects;
  if ( !replaceObjects )
    goto LABEL_144;
  if ( replaceObjects->fields._size < 1 )
    return;
  v43 = (System_Collections_Generic_Dictionary_object__object__o *)sub_1B4D1DC(System_Collections_Generic_Dictionary_string__Shader__TypeInfo);
  System_Collections_Generic_Dictionary_object__object____ctor(
    v43,
    (const MethodInfo_3257168 *)Method_System_Collections_Generic_Dictionary_string__Shader___ctor__);
  shaderCaches = (System_Collections_Generic_Dictionary_string__Shader__o *)v43;
  this = (BattleEffectReplaceShaderTexture_o *)v2->fields.replaceObjects;
  if ( !this )
LABEL_144:
    sub_1B4D1EC(this, method);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v145,
    (System_Collections_Generic_List_object__o *)this,
    (const MethodInfo_3580CD4 *)Method_System_Collections_Generic_List_BattleEffectReplaceShaderTexture_ReplaceObject__GetEnumerator__);
  v44 = 0LL;
  v151 = v145;
  while ( 1 )
  {
    v45 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v151,
            (const MethodInfo_3308B3C *)Method_System_Collections_Generic_List_Enumerator_BattleEffectReplaceShaderTexture_ReplaceObject__MoveNext__);
    if ( !v45 )
      break;
    current = v151.fields._current;
    if ( !v151.fields._current )
      sub_1B4D1EC(v45, v46);
    TargetActors = (System_Collections_Generic_List_object__o *)BattleEffectReplaceShaderTexture__GetTargetActors(
                                                                  v2,
                                                                  (System_Int32_array *)v151.fields._current[1].monitor,
                                                                  (bool)v151.fields._current[2].klass,
                                                                  (bool)v151.fields._current[1].klass,
                                                                  v47);
    if ( !TargetActors )
      sub_1B4D1EC(0LL, v50);
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v145,
      TargetActors,
      (const MethodInfo_3580CD4 *)Method_System_Collections_Generic_List_BattleActorControl__GetEnumerator__);
    v150 = v145;
    while ( 1 )
    {
      v51 = System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v150,
              (const MethodInfo_3308B3C *)Method_System_Collections_Generic_List_Enumerator_BattleActorControl__MoveNext__);
      if ( !v51 )
        break;
      v53 = (BattleActorControl_o *)v150.fields._current;
      if ( !v150.fields._current )
        sub_1B4D1EC(v51, v52);
      isChocoServant = BattleActorControl__isChocoServant((BattleActorControl_o *)v150.fields._current, 0LL);
      isShadowServant = BattleActorControl__isShadowServant(v53, 0LL);
      v58 = isShadowServant;
      if ( LOBYTE(current[12].klass) )
        ActorTexture = (UnityEngine_Object_o *)BattleEffectReplaceShaderTexture__getActorTexture(
                                                 (BattleEffectReplaceShaderTexture_o *)isShadowServant,
                                                 v53,
                                                 (System_String_o *)current[2].monitor,
                                                 v57);
      else
        ActorTexture = 0LL;
      battleSvtData = v53->fields.battleSvtData;
      if ( !battleSvtData )
        sub_1B4D1EC(0LL, v56);
      BattleServantData__TryGetDisplayTypeDetailEntity(battleSvtData, &entity, 0LL);
      if ( (v58 & (__int64)current[3].klass & 1) != 0 )
      {
        klass = (System_Collections_Generic_IEnumerable_TSource__o *)current[4].klass;
        if ( !klass )
        {
          v63 = Method_System_Array_Empty_Transform___;
          v64 = *((_QWORD *)Method_System_Array_Empty_Transform___ + 7);
          if ( !v64 )
          {
            sub_1B9D67C(Method_System_Array_Empty_Transform___);
            v64 = v63[7];
          }
          v65 = *(_QWORD *)(v64 + 16);
          if ( (*(_BYTE *)(v65 + 309) & 1) == 0 )
            v65 = sub_1B9D620(inited);
          if ( !*(_DWORD *)(v65 + 224) )
            inited = j_il2cpp_runtime_class_init_0(v65);
          v66 = *(_QWORD *)(v63[7] + 16LL);
          if ( (*(_BYTE *)(v66 + 309) & 1) == 0 )
            v66 = sub_1B9D620(inited);
          klass = **(System_Collections_Generic_IEnumerable_TSource__o ***)(v66 + 184);
        }
        transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)v53, 0LL);
        NodeFromName = (Il2CppObject *)TransformHelper__getNodeFromName(
                                         transform,
                                         (System_String_o *)current[3].monitor,
                                         0,
                                         0LL);
        appended = (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__Append_object_(
                                                                    klass,
                                                                    NodeFromName,
                                                                    (const MethodInfo_2F11AC4 *)Method_System_Linq_Enumerable_Append_Transform___);
        v70 = BasicHelper__ExcludeNull_object_(
                appended,
                (const MethodInfo_2EECDE8 *)Method_BasicHelper_ExcludeNull_Transform___);
        v71 = (Il2CppObject *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)v2, 0LL);
        v72 = (System_Collections_Generic_IEnumerable_Transform__o *)System_Linq_Enumerable__DefaultIfEmpty_object_(
                                                                       (System_Collections_Generic_IEnumerable_TSource__o *)v70,
                                                                       v71,
                                                                       (const MethodInfo_2F21404 *)Method_System_Linq_Enumerable_DefaultIfEmpty_Transform___);
        shadowAuraList = (System_Collections_Generic_List_object__o *)v2->fields.shadowAuraList;
        v74 = entity;
        if ( !BattleEffectUtility_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(BattleEffectUtility_TypeInfo);
        ShadowEffectAndAttachForEachNodes = (System_Collections_Generic_IEnumerable_T__o *)BattleEffectUtility__CreateShadowEffectAndAttachForEachNodes(
                                                                                             v72,
                                                                                             v74,
                                                                                             0LL);
        if ( !shadowAuraList )
          sub_1B4D1EC(ShadowEffectAndAttachForEachNodes, ShadowEffectAndAttachForEachNodes);
        System_Collections_Generic_List_object___AddRange(
          shadowAuraList,
          ShadowEffectAndAttachForEachNodes,
          (const MethodInfo_35803E8 *)Method_System_Collections_Generic_List_GameObject__AddRange__);
      }
      monitor = (UnityEngine_Object_o *)current[7].monitor;
      targetShaderName = (System_String_o *)current[7].klass;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(monitor, 0LL, 0LL) )
      {
        v78 = (UnityEngine_Object_o *)current[7].monitor;
        if ( !v78 )
          sub_1B4D1EC(0LL, v77);
        targetShaderName = UnityEngine_Object__get_name(v78, 0LL);
      }
      v79 = (System_Collections_Generic_List_object__o *)current[4].monitor;
      if ( !v79 )
        sub_1B4D1EC(0LL, v77);
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v145,
        v79,
        (const MethodInfo_3580CD4 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
      v144 = (UnityEngine_Component_o *)v53;
      v148 = v145;
      while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
                &v148,
                (const MethodInfo_3308B3C *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
      {
        v81 = (System_Collections_Generic_List_T__o *)current[6].klass;
        if ( !v81 )
          sub_1B4D1EC(0LL, v80);
        v82 = v148.fields._current;
        System_Collections_Generic_List_Int32Enum___GetEnumerator(
          (System_Collections_Generic_List_Enumerator_T__o *)&v145,
          v81,
          (const MethodInfo_35664B8 *)Method_System_Collections_Generic_List_BattleEffectReplaceShaderTexture_RendererType__GetEnumerator__);
        v147 = v145;
        while ( System_Collections_Generic_List_Enumerator_Int32Enum___MoveNext(
                  (System_Collections_Generic_List_Enumerator_T__o *)&v147,
                  (const MethodInfo_330562C *)Method_System_Collections_Generic_List_Enumerator_BattleEffectReplaceShaderTexture_RendererType__MoveNext__) )
        {
          TargetRenderers = BattleEffectReplaceShaderTexture__getTargetRenderers(
                              v2,
                              (UnityEngine_GameObject_o *)v82,
                              (int32_t)v147.fields._current,
                              (bool)current[5].monitor,
                              BYTE1(current[5].monitor),
                              v83);
          v86 = TargetRenderers;
          if ( TargetRenderers )
          {
            v87 = *(_QWORD *)&TargetRenderers->max_length;
            if ( (int)v87 >= 1 )
            {
              v88 = 0LL;
              v142 = v82;
              do
              {
                if ( v88 >= (unsigned int)v87 )
                  sub_1B4D1F4(TargetRenderers, v85);
                v89 = (System_Collections_Generic_List_object__o *)current[5].klass;
                if ( !v89 )
                  sub_1B4D1EC(0LL, v85);
                v143 = v88;
                v90 = (Il2CppObject *)v86->m_Items[v88];
                TargetRenderers = (UnityEngine_Renderer_array *)System_Collections_Generic_List_object___Contains(
                                                                  v89,
                                                                  v90,
                                                                  (const MethodInfo_358056C *)Method_System_Collections_Generic_List_Renderer__Contains__);
                if ( ((unsigned __int8)TargetRenderers & 1) == 0 )
                {
                  TargetMaterials = (System_Collections_Generic_List_object__o *)BattleEffectReplaceShaderTexture__getTargetMaterials(
                                                                                   (BattleEffectReplaceShaderTexture_o *)TargetRenderers,
                                                                                   (UnityEngine_Renderer_o *)v90,
                                                                                   targetShaderName,
                                                                                   (bool)current[6].monitor,
                                                                                   v91);
                  if ( !TargetMaterials )
                    sub_1B4D1EC(0LL, v93);
                  System_Collections_Generic_List_object___GetEnumerator(
                    (System_Collections_Generic_List_Enumerator_T__o *)&v145,
                    TargetMaterials,
                    (const MethodInfo_3580CD4 *)Method_System_Collections_Generic_List_Material__GetEnumerator__);
                  v146 = v145;
                  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
                            &v146,
                            (const MethodInfo_3308B3C *)Method_System_Collections_Generic_List_Enumerator_Material__MoveNext__) )
                  {
                    v94 = v146.fields._current;
                    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                    v95 = UnityEngine_Object__op_Inequality(ActorTexture, 0LL, 0LL);
                    if ( v95 )
                    {
                      if ( !v94 )
                        sub_1B4D1EC(v95, v96);
                      UnityEngine_Material__set_mainTexture(
                        (UnityEngine_Material_o *)v94,
                        (UnityEngine_Texture_o *)ActorTexture,
                        0LL);
                    }
                    if ( isChocoServant )
                    {
                      if ( !BYTE1(current[12].klass) )
                        goto LABEL_65;
                      if ( !v94 )
                        sub_1B4D1EC(v95, v96);
                      autoReplaceShaderNames = (System_Collections_Generic_List_object__o *)v2->fields.autoReplaceShaderNames;
                      shader = (UnityEngine_Object_o *)UnityEngine_Material__get_shader(
                                                         (UnityEngine_Material_o *)v94,
                                                         0LL);
                      if ( !shader )
                        sub_1B4D1EC(0LL, v99);
                      name = (Il2CppObject *)UnityEngine_Object__get_name(shader, 0LL);
                      if ( !autoReplaceShaderNames )
                        sub_1B4D1EC(name, name);
                      if ( System_Collections_Generic_List_object___Contains(
                             autoReplaceShaderNames,
                             name,
                             (const MethodInfo_358056C *)Method_System_Collections_Generic_List_string__Contains__) )
                      {
                        v101 = (UnityEngine_Object_o *)UnityEngine_Material__get_shader(
                                                         (UnityEngine_Material_o *)v94,
                                                         0LL);
                        if ( !v101 )
                          sub_1B4D1EC(0LL, v102);
                        v103 = UnityEngine_Object__get_name(v101, 0LL);
                        v104 = (BattleEffectReplaceShaderTexture_o *)System_String__Concat_61093468(
                                                                       v103,
                                                                       (System_String_o *)StringLiteral_15849/*"_Choco"*/,
                                                                       0LL);
                        ReplaceChocoShader = (UnityEngine_Object_o *)BattleEffectReplaceShaderTexture__loadShader(
                                                                       v104,
                                                                       (System_String_o *)v104,
                                                                       &shaderCaches,
                                                                       v105);
                      }
                      else
                      {
LABEL_65:
                        ReplaceChocoShader = 0LL;
                      }
                      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                      if ( UnityEngine_Object__op_Equality(ReplaceChocoShader, 0LL, 0LL) )
                        ReplaceChocoShader = (UnityEngine_Object_o *)current[8].klass;
                      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                      if ( UnityEngine_Object__op_Equality(ReplaceChocoShader, 0LL, 0LL) && BYTE2(current[12].klass) )
                      {
                        gameObject = UnityEngine_Component__get_gameObject(v144, 0LL);
                        if ( !gameObject )
                          sub_1B4D1EC(0LL, v108);
                        Component_object = UnityEngine_GameObject__GetComponent_object_(
                                             gameObject,
                                             (const MethodInfo_2F53444 *)Method_UnityEngine_GameObject_GetComponent_BattleServantDeadComponent___);
                        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                        v110 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0LL, 0LL);
                        if ( v110 )
                        {
                          if ( !v94 )
                            sub_1B4D1EC(v110, v111);
                          v112 = UnityEngine_Material__get_shader((UnityEngine_Material_o *)v94, 0LL);
                          if ( !Component_object )
                            sub_1B4D1EC(v112, v112);
                          ReplaceChocoShader = (UnityEngine_Object_o *)BattleServantDeadComponent__getReplaceChocoShader(
                                                                         (BattleServantDeadComponent_o *)Component_object,
                                                                         v112,
                                                                         0LL,
                                                                         0LL);
                        }
                      }
                      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                      v113 = UnityEngine_Object__op_Equality(ReplaceChocoShader, 0LL, 0LL);
                      if ( v113 )
                        ReplaceChocoShader = (UnityEngine_Object_o *)BattleEffectReplaceShaderTexture__loadShader(
                                                                       (BattleEffectReplaceShaderTexture_o *)v113,
                                                                       (System_String_o *)StringLiteral_4855/*"Custom/SoftEdgeUnlitCutZ_Choco (SoftClip)"*/,
                                                                       &shaderCaches,
                                                                       v114);
                      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                      object = (Il2CppObject *)UnityEngine_Object__op_Equality(v44, 0LL, 0LL);
                      if ( ((unsigned __int8)object & 1) != 0 )
                      {
                        object = UnityEngine_Resources__Load_object_(
                                   (System_String_o *)StringLiteral_12542/*"Shaders/ChocoMap"*/,
                                   (const MethodInfo_2F97C44 *)Method_UnityEngine_Resources_Load_Texture2D___);
                        v44 = (UnityEngine_Object_o *)object;
                      }
                      BattleEffectReplaceShaderTexture__setupChocoShader(
                        (BattleEffectReplaceShaderTexture_o *)object,
                        (UnityEngine_Material_o *)v94,
                        (UnityEngine_Shader_o *)ReplaceChocoShader,
                        (UnityEngine_Texture2D_o *)v44,
                        v116);
                      BattleEffectReplaceShaderTexture__updateShaderValues(
                        v117,
                        (UnityEngine_Material_o *)v94,
                        (System_Collections_Generic_List_BattleEffectReplaceShaderTexture_ShaderFloatValue__o *)current[8].monitor,
                        (System_Collections_Generic_List_BattleEffectReplaceShaderTexture_ShaderColorValue__o *)current[9].klass,
                        (System_Collections_Generic_List_BattleEffectReplaceShaderTexture_ShaderTextureValue__o *)current[9].monitor,
                        v118);
                    }
                    if ( v58 )
                    {
                      if ( !v94 )
                        sub_1B4D1EC(v95, v96);
                      v119 = (System_Collections_Generic_List_object__o *)v2->fields.autoReplaceShaderNames;
                      v120 = (UnityEngine_Object_o *)UnityEngine_Material__get_shader(
                                                       (UnityEngine_Material_o *)v94,
                                                       0LL);
                      if ( !v120 )
                        sub_1B4D1EC(0LL, v121);
                      v122 = (Il2CppObject *)UnityEngine_Object__get_name(v120, 0LL);
                      if ( !v119 )
                        sub_1B4D1EC(v122, v122);
                      if ( System_Collections_Generic_List_object___Contains(
                             v119,
                             v122,
                             (const MethodInfo_358056C *)Method_System_Collections_Generic_List_string__Contains__) )
                      {
                        v123 = (UnityEngine_Object_o *)UnityEngine_Material__get_shader(
                                                         (UnityEngine_Material_o *)v94,
                                                         0LL);
                        if ( !v123 )
                          sub_1B4D1EC(0LL, v124);
                        v125 = UnityEngine_Object__get_name(v123, 0LL);
                        v126 = (BattleEffectReplaceShaderTexture_o *)System_String__Concat_61093468(
                                                                       v125,
                                                                       (System_String_o *)StringLiteral_16030/*"_Shadow"*/,
                                                                       0LL);
                        v128 = (UnityEngine_Object_o *)BattleEffectReplaceShaderTexture__loadShader(
                                                         v126,
                                                         (System_String_o *)v126,
                                                         &shaderCaches,
                                                         v127);
                      }
                      else
                      {
                        v128 = 0LL;
                      }
                      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                      if ( UnityEngine_Object__op_Equality(v128, 0LL, 0LL) )
                        v128 = (UnityEngine_Object_o *)current[10].klass;
                      BattleEffectReplaceShaderTexture__SetupShadowShader(
                        (UnityEngine_Material_o *)v94,
                        (UnityEngine_Shader_o *)v128,
                        entity,
                        v129);
                      BattleEffectReplaceShaderTexture__updateShaderValues(
                        v130,
                        (UnityEngine_Material_o *)v94,
                        (System_Collections_Generic_List_BattleEffectReplaceShaderTexture_ShaderFloatValue__o *)current[10].monitor,
                        (System_Collections_Generic_List_BattleEffectReplaceShaderTexture_ShaderColorValue__o *)current[11].klass,
                        (System_Collections_Generic_List_BattleEffectReplaceShaderTexture_ShaderTextureValue__o *)current[11].monitor,
                        v131);
                    }
                    replaceMaterials = (System_Collections_Generic_List_object__o *)v2->fields.replaceMaterials;
                    if ( !replaceMaterials )
                      sub_1B4D1EC(0LL, v96);
                    if ( !System_Collections_Generic_List_object___Contains(
                            replaceMaterials,
                            v94,
                            (const MethodInfo_358056C *)Method_System_Collections_Generic_List_Material__Contains__) )
                    {
                      v136 = (System_Collections_Generic_List_object__o *)v2->fields.replaceMaterials;
                      if ( !v136 )
                        sub_1B4D1EC(0LL, v133);
                      items = v136->fields._items;
                      v138 = Method_System_Collections_Generic_List_Material__Add__;
                      ++v136->fields._version;
                      if ( !items )
                        sub_1B4D1EC(v136, v133);
                      size = v136->fields._size;
                      if ( (unsigned int)size >= items->max_length )
                      {
                        System_Collections_Generic_List_object___AddWithResize(
                          v136,
                          v94,
                          *(const MethodInfo_35801DC **)(*(_QWORD *)(v138[4] + 192LL) + 112LL));
                      }
                      else
                      {
                        v140 = &items->obj.klass + size;
                        v136->fields._size = size + 1;
                        v140[4] = (Il2CppClass *)v94;
                        sub_1B4CF34((CGThumbnailListItem_o *)(v140 + 4), (int32_t)v94, v134, v135);
                      }
                    }
                  }
                  System_Collections_Generic_List_Enumerator_object___Dispose(
                    &v146,
                    (const MethodInfo_3308B38 *)Method_System_Collections_Generic_List_Enumerator_Material__Dispose__);
                  v82 = v142;
                }
                LODWORD(v87) = v86->max_length;
                v88 = v143 + 1;
              }
              while ( (__int64)(v143 + 1) < (int)v87 );
            }
          }
        }
        System_Collections_Generic_List_Enumerator_Int32Enum___Dispose(
          (System_Collections_Generic_List_Enumerator_T__o *)&v147,
          (const MethodInfo_3305628 *)Method_System_Collections_Generic_List_Enumerator_BattleEffectReplaceShaderTexture_RendererType__Dispose__);
      }
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v148,
        (const MethodInfo_3308B38 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v150,
      (const MethodInfo_3308B38 *)Method_System_Collections_Generic_List_Enumerator_BattleActorControl__Dispose__);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v151,
    (const MethodInfo_3308B38 *)Method_System_Collections_Generic_List_Enumerator_BattleEffectReplaceShaderTexture_ReplaceObject__Dispose__);
}


// local variable allocation has failed, the output may be wrong!
BattleActorControl_o *__fastcall BattleEffectReplaceShaderTexture__GetModelBattleActor(
        BattleEffectReplaceShaderTexture_o *this,
        int32_t servantId,
        bool isCheckUniqueId,
        const MethodInfo *method)
{
  __int64 v7; // x1
  System_Object_array *ObjectsOfType_object; // x0
  __int64 v9; // x1
  int max_length; // w8
  System_Object_array *v11; // x22
  unsigned int v12; // w24
  Il2CppClass **v13; // x8
  BattleActorControl_o *v14; // x23

  if ( (byte_49BDEB0 & 1) == 0 )
  {
    sub_1B4CF90(&Method_UnityEngine_Object_FindObjectsOfType_BattleActorControl___, *(_QWORD *)&servantId);
    sub_1B4CF90(&UnityEngine_Object_TypeInfo, v7);
    byte_49BDEB0 = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  ObjectsOfType_object = UnityEngine_Object__FindObjectsOfType_object_((const MethodInfo_2F87C70 *)Method_UnityEngine_Object_FindObjectsOfType_BattleActorControl___);
  if ( !ObjectsOfType_object )
    goto LABEL_17;
  max_length = ObjectsOfType_object->max_length;
  v11 = ObjectsOfType_object;
  if ( max_length >= 1 )
  {
    v12 = 0;
    while ( 1 )
    {
      if ( v12 >= max_length )
        sub_1B4D1F4(ObjectsOfType_object, v9);
      v13 = &v11->obj.klass + (int)v12;
      v14 = (BattleActorControl_o *)v13[4];
      if ( !v14 )
        break;
      ObjectsOfType_object = (System_Object_array *)BattleActorControl__getServantId(
                                                      (BattleActorControl_o *)v13[4],
                                                      0LL);
      if ( (_DWORD)ObjectsOfType_object == servantId
        && (!isCheckUniqueId || v14->fields.uniqueID == this->fields.targetId) )
      {
        return v14;
      }
      max_length = v11->max_length;
      if ( (int)++v12 >= max_length )
        return 0LL;
    }
LABEL_17:
    sub_1B4D1EC(ObjectsOfType_object, v9);
  }
  return 0LL;
}


System_Collections_Generic_List_BattleActorControl__o *__fastcall BattleEffectReplaceShaderTexture__GetTargetActors(
        BattleEffectReplaceShaderTexture_o *this,
        System_Int32_array *servantIds,
        bool isCheckUniqueId,
        bool useUniqueId,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  System_Collections_Generic_List_object__o *v16; // x19
  System_Object_array *Instance; // x0
  Il2CppObject *v18; // x1
  const MethodInfo *v19; // x3
  UnityEngine_Object_o *v20; // x20
  Il2CppObject *Component_object; // x20
  int32_t v22; // w2
  const MethodInfo *v23; // x3
  struct System_Object_array *items; // x8
  _QWORD *v25; // x9
  __int64 size; // x10
  Il2CppClass **v27; // x0
  CGThumbnailListItem_o *v28; // x0
  __int64 v29; // x8
  Il2CppObject **i; // x9
  __int64 v31; // x8
  unsigned __int64 v32; // x25
  bool v33; // w22
  UnityEngine_Object_o *ModelBattleActor; // x23
  int32_t v35; // w2
  struct System_Object_array *v36; // x8
  _QWORD *v37; // x9
  __int64 v38; // x10
  Il2CppClass **v39; // x0
  __int64 v40; // x8
  System_Collections_Generic_List_object__o *v41; // x0
  struct System_Object_array *v42; // x8
  _QWORD *v43; // x9
  __int64 v44; // x10
  Il2CppClass **v45; // x0

  if ( (byte_49BDEAF & 1) == 0 )
  {
    sub_1B4CF90(&Method_UnityEngine_GameObject_GetComponent_BattleActorControl___, servantIds);
    sub_1B4CF90(&Method_System_Collections_Generic_List_BattleActorControl__Add__, v9);
    sub_1B4CF90(&Method_System_Collections_Generic_List_BattleActorControl__Contains__, v10);
    sub_1B4CF90(&Method_System_Collections_Generic_List_BattleActorControl___ctor__, v11);
    sub_1B4CF90(&System_Collections_Generic_List_BattleActorControl__TypeInfo, v12);
    sub_1B4CF90(&Method_UnityEngine_Object_FindObjectsOfType_BattleActorControl___, v13);
    sub_1B4CF90(&UnityEngine_Object_TypeInfo, v14);
    sub_1B4CF90(&Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__, v15);
    byte_49BDEAF = 1;
  }
  v16 = (System_Collections_Generic_List_object__o *)sub_1B4D1DC(System_Collections_Generic_List_BattleActorControl__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v16,
    (const MethodInfo_357F9A8 *)Method_System_Collections_Generic_List_BattleActorControl___ctor__);
  if ( this->fields.isNPEffect )
  {
    Instance = (System_Object_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__);
    if ( !Instance )
      goto LABEL_50;
    v20 = (UnityEngine_Object_o *)Instance->m_Items[8];
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    Instance = (System_Object_array *)UnityEngine_Object__op_Inequality(v20, 0LL, 0LL);
    if ( ((unsigned __int8)Instance & 1) != 0 )
    {
      if ( !v20 )
        goto LABEL_50;
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)v20,
                           (const MethodInfo_2F53444 *)Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      Instance = (System_Object_array *)UnityEngine_Object__op_Inequality(
                                          (UnityEngine_Object_o *)Component_object,
                                          0LL,
                                          0LL);
      if ( ((unsigned __int8)Instance & 1) != 0 )
      {
        if ( v16 )
        {
          items = v16->fields._items;
          v25 = Method_System_Collections_Generic_List_BattleActorControl__Add__;
          ++v16->fields._version;
          if ( items )
          {
            size = v16->fields._size;
            if ( (unsigned int)size < items->max_length )
            {
              v27 = &items->obj.klass + size;
              v16->fields._size = size + 1;
              v27[4] = (Il2CppClass *)Component_object;
              v28 = (CGThumbnailListItem_o *)(v27 + 4);
              LODWORD(v18) = (_DWORD)Component_object;
LABEL_46:
              sub_1B4CF34(v28, (int32_t)v18, v22, v23);
              return (System_Collections_Generic_List_BattleActorControl__o *)v16;
            }
            v40 = v25[4];
            v41 = v16;
            v18 = Component_object;
            goto LABEL_48;
          }
        }
        goto LABEL_50;
      }
    }
  }
  else if ( useUniqueId )
  {
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    Instance = UnityEngine_Object__FindObjectsOfType_object_((const MethodInfo_2F87C70 *)Method_UnityEngine_Object_FindObjectsOfType_BattleActorControl___);
    if ( !Instance )
      goto LABEL_50;
    if ( (int)*(_QWORD *)&Instance->max_length >= 1 )
    {
      v29 = (unsigned int)*(_QWORD *)&Instance->max_length;
      for ( i = Instance->m_Items; ; ++i )
      {
        v18 = *i;
        if ( !*i )
          goto LABEL_50;
        if ( LODWORD(v18[32].klass) == this->fields.targetId )
          break;
        if ( !--v29 )
          return (System_Collections_Generic_List_BattleActorControl__o *)v16;
      }
      if ( v16 )
      {
        v42 = v16->fields._items;
        v43 = Method_System_Collections_Generic_List_BattleActorControl__Add__;
        ++v16->fields._version;
        if ( v42 )
        {
          v44 = v16->fields._size;
          if ( (unsigned int)v44 < v42->max_length )
          {
            v45 = &v42->obj.klass + v44;
            v16->fields._size = v44 + 1;
            v45[4] = (Il2CppClass *)v18;
            v28 = (CGThumbnailListItem_o *)(v45 + 4);
            goto LABEL_46;
          }
          v40 = v43[4];
          v41 = v16;
LABEL_48:
          System_Collections_Generic_List_object___AddWithResize(
            v41,
            v18,
            *(const MethodInfo_35801DC **)(*(_QWORD *)(v40 + 192) + 112LL));
          return (System_Collections_Generic_List_BattleActorControl__o *)v16;
        }
      }
LABEL_50:
      sub_1B4D1EC(Instance, v18);
    }
  }
  else if ( servantIds )
  {
    v31 = *(_QWORD *)&servantIds->max_length;
    if ( (int)v31 >= 1 )
    {
      v32 = 0LL;
      v33 = isCheckUniqueId;
      do
      {
        if ( v32 >= (unsigned int)v31 )
          sub_1B4D1F4(Instance, v18);
        ModelBattleActor = (UnityEngine_Object_o *)BattleEffectReplaceShaderTexture__GetModelBattleActor(
                                                     this,
                                                     servantIds->m_Items[v32 + 1],
                                                     v33,
                                                     v19);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        Instance = (System_Object_array *)UnityEngine_Object__op_Inequality(ModelBattleActor, 0LL, 0LL);
        if ( ((unsigned __int8)Instance & 1) != 0 )
        {
          if ( !v16 )
            goto LABEL_50;
          Instance = (System_Object_array *)System_Collections_Generic_List_object___Contains(
                                              v16,
                                              (Il2CppObject *)ModelBattleActor,
                                              (const MethodInfo_358056C *)Method_System_Collections_Generic_List_BattleActorControl__Contains__);
          if ( ((unsigned __int8)Instance & 1) == 0 )
          {
            v36 = v16->fields._items;
            v37 = Method_System_Collections_Generic_List_BattleActorControl__Add__;
            ++v16->fields._version;
            if ( !v36 )
              goto LABEL_50;
            v38 = v16->fields._size;
            if ( (unsigned int)v38 >= v36->max_length )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v16,
                (Il2CppObject *)ModelBattleActor,
                *(const MethodInfo_35801DC **)(*(_QWORD *)(v37[4] + 192LL) + 112LL));
            }
            else
            {
              v39 = &v36->obj.klass + v38;
              v16->fields._size = v38 + 1;
              v39[4] = (Il2CppClass *)ModelBattleActor;
              sub_1B4CF34((CGThumbnailListItem_o *)(v39 + 4), (int32_t)ModelBattleActor, v35, v19);
            }
          }
        }
        LODWORD(v31) = servantIds->max_length;
        ++v32;
      }
      while ( (__int64)v32 < (int)v31 );
    }
  }
  return (System_Collections_Generic_List_BattleActorControl__o *)v16;
}


void __fastcall BattleEffectReplaceShaderTexture__OnDestroy(
        BattleEffectReplaceShaderTexture_o *this,
        const MethodInfo *method)
{
  BattleEffectReplaceShaderTexture_o *v2; // x19
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  Il2CppObject *current; // x20
  struct System_Collections_Generic_List_Material__o *replaceMaterials; // x8
  int32_t size; // w2
  int v16; // w9
  System_Collections_Generic_IEnumerable_T__o *v17; // x20
  System_Action_object__o *v18; // x21
  struct System_Collections_Generic_List_GameObject__o *shadowAuraList; // x8
  int32_t v20; // w2
  int v21; // w9
  System_Collections_Generic_List_Enumerator_object__o v22; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v23; // [xsp+20h] [xbp-50h] BYREF

  v2 = this;
  if ( (byte_49BDEAD & 1) == 0 )
  {
    sub_1B4CF90(&System_Action_GameObject__TypeInfo, method);
    sub_1B4CF90(&Method_BasicHelper_ExcludeNull_GameObject___, v3);
    sub_1B4CF90(&Method_BasicHelper_ForEach_GameObject___, v4);
    sub_1B4CF90(&Method_System_Collections_Generic_List_Enumerator_Material__Dispose__, v5);
    sub_1B4CF90(&Method_System_Collections_Generic_List_Enumerator_Material__MoveNext__, v6);
    sub_1B4CF90(&Method_System_Collections_Generic_List_Enumerator_Material__get_Current__, v7);
    sub_1B4CF90(&Method_System_Collections_Generic_List_GameObject__Clear__, v8);
    sub_1B4CF90(&Method_System_Collections_Generic_List_Material__Clear__, v9);
    sub_1B4CF90(&Method_System_Collections_Generic_List_Material__GetEnumerator__, v10);
    sub_1B4CF90(&Method_UnityEngine_Object_Destroy__, v11);
    this = (BattleEffectReplaceShaderTexture_o *)sub_1B4CF90(&UnityEngine_Object_TypeInfo, v12);
    byte_49BDEAD = 1;
  }
  memset(&v23, 0, sizeof(v23));
  if ( v2->fields.destroyReplaceShaderMaterials )
  {
    this = (BattleEffectReplaceShaderTexture_o *)v2->fields.replaceMaterials;
    if ( !this )
      goto LABEL_21;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v22,
      (System_Collections_Generic_List_object__o *)this,
      (const MethodInfo_3580CD4 *)Method_System_Collections_Generic_List_Material__GetEnumerator__);
    v23 = v22;
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v23,
              (const MethodInfo_3308B3C *)Method_System_Collections_Generic_List_Enumerator_Material__MoveNext__) )
    {
      current = v23.fields._current;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL) )
      {
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        UnityEngine_Object__DestroyImmediate_68804644((UnityEngine_Object_o *)current, 0LL);
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v23,
      (const MethodInfo_3308B38 *)Method_System_Collections_Generic_List_Enumerator_Material__Dispose__);
  }
  replaceMaterials = v2->fields.replaceMaterials;
  if ( !replaceMaterials )
    goto LABEL_21;
  size = replaceMaterials->fields._size;
  v16 = replaceMaterials->fields._version + 1;
  replaceMaterials->fields._size = 0;
  replaceMaterials->fields._version = v16;
  if ( size >= 1 )
    System_Array__Clear((System_Array_o *)replaceMaterials->fields._items, 0, size, 0LL);
  v17 = BasicHelper__ExcludeNull_object_(
          (System_Collections_Generic_IEnumerable_T__o *)v2->fields.shadowAuraList,
          (const MethodInfo_2EECDE8 *)Method_BasicHelper_ExcludeNull_GameObject___);
  v18 = (System_Action_object__o *)sub_1B4D1DC(System_Action_GameObject__TypeInfo);
  System_Action_object____ctor(v18, 0LL, Method_UnityEngine_Object_Destroy__, 0LL);
  BasicHelper__ForEach_object_(
    v17,
    (System_Action_T__o *)v18,
    (const MethodInfo_2EEE790 *)Method_BasicHelper_ForEach_GameObject___);
  shadowAuraList = v2->fields.shadowAuraList;
  if ( !shadowAuraList )
LABEL_21:
    sub_1B4D1EC(this, method);
  v20 = shadowAuraList->fields._size;
  v21 = shadowAuraList->fields._version + 1;
  shadowAuraList->fields._size = 0;
  shadowAuraList->fields._version = v21;
  if ( v20 >= 1 )
    System_Array__Clear((System_Array_o *)shadowAuraList->fields._items, 0, v20, 0LL);
}


void __fastcall BattleEffectReplaceShaderTexture__SetTargetId(
        BattleEffectReplaceShaderTexture_o *this,
        int32_t targetId,
        const MethodInfo *method)
{
  this->fields.targetId = targetId;
}


void __fastcall BattleEffectReplaceShaderTexture__SetupShadowShader(
        UnityEngine_Material_o *material,
        UnityEngine_Shader_o *shadowShader,
        NpcServantDisplayTypeDetailEntity_o *displayTypeDetailEntity,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x0
  __int64 v12; // x1
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  __int64 v15; // x21
  __int64 v16; // x0

  if ( (byte_49BDEB8 & 1) == 0 )
  {
    sub_1B4CF90(&BattleDataDefine_TypeInfo, shadowShader);
    sub_1B4CF90(&BattleEffectUtility_TypeInfo, v7);
    sub_1B4CF90(&UnityEngine_Material___TypeInfo, v8);
    sub_1B4CF90(&UnityEngine_Object_TypeInfo, v9);
    sub_1B4CF90(&StringLiteral_15869/*"_Color"*/, v10);
    byte_49BDEB8 = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v11 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)shadowShader, 0LL, 0LL);
  if ( (v11 & 1) != 0 )
  {
    if ( !material )
      goto LABEL_20;
    UnityEngine_Material__set_shader(material, shadowShader, 0LL);
  }
  if ( !displayTypeDetailEntity )
  {
    v11 = (__int64)BattleDataDefine_TypeInfo;
    if ( !BattleDataDefine_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleDataDefine_TypeInfo);
      v11 = (__int64)BattleDataDefine_TypeInfo;
    }
    if ( material )
    {
      UnityEngine_Material__SetColor(
        material,
        (System_String_o *)StringLiteral_15869/*"_Color"*/,
        *(UnityEngine_Color_o *)(*(_QWORD *)(v11 + 184) + 56LL),
        0LL);
      return;
    }
LABEL_20:
    sub_1B4D1EC(v11, v12);
  }
  v11 = sub_1B4D038(UnityEngine_Material___TypeInfo, 1LL);
  if ( !v11 )
    goto LABEL_20;
  v15 = v11;
  if ( material )
  {
    v11 = sub_1B4D0CC(material, *(_QWORD *)(*(_QWORD *)v11 + 64LL));
    if ( !v11 )
    {
      v16 = sub_1B4D210(0LL);
      sub_1B4D0B8(v16, 0LL);
    }
  }
  if ( !*(_DWORD *)(v15 + 24) )
    sub_1B4D1F4(v11, v12);
  *(_QWORD *)(v15 + 32) = material;
  sub_1B4CF34((CGThumbnailListItem_o *)(v15 + 32), (int32_t)material, v13, v14);
  if ( !BattleEffectUtility_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BattleEffectUtility_TypeInfo);
  BattleEffectUtility__SetShadowServantColorToMaterials(
    (System_Collections_Generic_IEnumerable_Material__o *)v15,
    displayTypeDetailEntity,
    0LL);
}


void __fastcall BattleEffectReplaceShaderTexture__Start(
        BattleEffectReplaceShaderTexture_o *this,
        const MethodInfo *method)
{
  if ( this->fields.isNPEffect )
    BattleEffectReplaceShaderTexture__Execute(this, method);
}


UnityEngine_Texture_o *__fastcall BattleEffectReplaceShaderTexture__getActorTexture(
        BattleEffectReplaceShaderTexture_o *this,
        BattleActorControl_o *actor,
        System_String_o *searchMeshWord,
        const MethodInfo *method)
{
  int m_CancellationTokenSource; // w8
  BattleEffectReplaceShaderTexture_o *v7; // x20
  unsigned int v8; // w22
  BattleEffectReplaceShaderTexture_c **v9; // x8
  UnityEngine_Object_o *v10; // x21

  if ( (byte_49BDEB2 & 1) == 0 )
  {
    this = (BattleEffectReplaceShaderTexture_o *)sub_1B4CF90(
                                                   &Method_UnityEngine_Component_GetComponentsInChildren_SkinnedMeshRenderer____75513432,
                                                   actor);
    byte_49BDEB2 = 1;
  }
  if ( !actor )
    goto LABEL_16;
  this = (BattleEffectReplaceShaderTexture_o *)UnityEngine_Component__GetComponentsInChildren_object_(
                                                 (UnityEngine_Component_o *)actor,
                                                 1,
                                                 (const MethodInfo_2EF9018 *)Method_UnityEngine_Component_GetComponentsInChildren_SkinnedMeshRenderer____75513432);
  if ( !this )
    goto LABEL_16;
  m_CancellationTokenSource = (int)this->fields.m_CancellationTokenSource;
  v7 = this;
  if ( m_CancellationTokenSource < 1 )
    return 0LL;
  v8 = 0;
  while ( 1 )
  {
    if ( v8 >= m_CancellationTokenSource )
      sub_1B4D1F4(this, actor);
    v9 = &v7->klass + (int)v8;
    v10 = (UnityEngine_Object_o *)v9[4];
    if ( !v10 )
      goto LABEL_16;
    this = (BattleEffectReplaceShaderTexture_o *)UnityEngine_Renderer__get_enabled((UnityEngine_Renderer_o *)v9[4], 0LL);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      this = (BattleEffectReplaceShaderTexture_o *)UnityEngine_Object__get_name(v10, 0LL);
      if ( !this )
        goto LABEL_16;
      this = (BattleEffectReplaceShaderTexture_o *)System_String__IndexOf_61151964(
                                                     (System_String_o *)this,
                                                     searchMeshWord,
                                                     0LL);
      if ( ((unsigned int)this & 0x80000000) == 0 )
        break;
    }
    m_CancellationTokenSource = (int)v7->fields.m_CancellationTokenSource;
    if ( (int)++v8 >= m_CancellationTokenSource )
      return 0LL;
  }
  this = (BattleEffectReplaceShaderTexture_o *)UnityEngine_Renderer__get_material((UnityEngine_Renderer_o *)v10, 0LL);
  if ( !this )
LABEL_16:
    sub_1B4D1EC(this, actor);
  return UnityEngine_Material__get_mainTexture((UnityEngine_Material_o *)this, 0LL);
}


UnityEngine_Renderer_o *__fastcall BattleEffectReplaceShaderTexture__getRenderer(
        BattleEffectReplaceShaderTexture_o *this,
        UnityEngine_GameObject_o *gameObject,
        int32_t rendererType,
        const MethodInfo *method)
{
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 *v9; // x8
  UnityEngine_Renderer_o *result; // x0

  if ( (byte_49BDEB4 & 1) == 0 )
  {
    sub_1B4CF90(&Method_UnityEngine_GameObject_GetComponent_MeshRenderer___, gameObject);
    sub_1B4CF90(&Method_UnityEngine_GameObject_GetComponent_ParticleSystemRenderer___, v6);
    sub_1B4CF90(&Method_UnityEngine_GameObject_GetComponent_Renderer___, v7);
    this = (BattleEffectReplaceShaderTexture_o *)sub_1B4CF90(
                                                   &Method_UnityEngine_GameObject_GetComponent_SkinnedMeshRenderer___,
                                                   v8);
    byte_49BDEB4 = 1;
  }
  switch ( rendererType )
  {
    case 0:
      if ( !gameObject )
        goto LABEL_14;
      v9 = &Method_UnityEngine_GameObject_GetComponent_Renderer___;
      goto LABEL_13;
    case 1:
      if ( !gameObject )
        goto LABEL_14;
      v9 = &Method_UnityEngine_GameObject_GetComponent_MeshRenderer___;
      goto LABEL_13;
    case 2:
      if ( !gameObject )
        goto LABEL_14;
      v9 = &Method_UnityEngine_GameObject_GetComponent_SkinnedMeshRenderer___;
      goto LABEL_13;
    case 3:
      if ( !gameObject )
LABEL_14:
        sub_1B4D1EC(this, gameObject);
      v9 = &Method_UnityEngine_GameObject_GetComponent_ParticleSystemRenderer___;
LABEL_13:
      result = (UnityEngine_Renderer_o *)UnityEngine_GameObject__GetComponent_object_(
                                           gameObject,
                                           (const MethodInfo_2F53444 *)*v9);
      break;
    default:
      result = 0LL;
      break;
  }
  return result;
}


UnityEngine_Renderer_array *__fastcall BattleEffectReplaceShaderTexture__getRenderersInChildren(
        BattleEffectReplaceShaderTexture_o *this,
        UnityEngine_GameObject_o *gameObject,
        int32_t rendererType,
        bool includeInactive,
        const MethodInfo *method)
{
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 *v11; // x8
  UnityEngine_Renderer_array *result; // x0

  if ( (byte_49BDEB5 & 1) == 0 )
  {
    sub_1B4CF90(&Method_UnityEngine_GameObject_GetComponentsInChildren_MeshRenderer____75559672, gameObject);
    sub_1B4CF90(&Method_UnityEngine_GameObject_GetComponentsInChildren_ParticleSystemRenderer____75559704, v8);
    sub_1B4CF90(&Method_UnityEngine_GameObject_GetComponentsInChildren_Renderer____75559712, v9);
    this = (BattleEffectReplaceShaderTexture_o *)sub_1B4CF90(
                                                   &Method_UnityEngine_GameObject_GetComponentsInChildren_SkinnedMeshRenderer____75559728,
                                                   v10);
    byte_49BDEB5 = 1;
  }
  switch ( rendererType )
  {
    case 0:
      if ( !gameObject )
        goto LABEL_14;
      v11 = &Method_UnityEngine_GameObject_GetComponentsInChildren_Renderer____75559712;
      goto LABEL_13;
    case 1:
      if ( !gameObject )
        goto LABEL_14;
      v11 = &Method_UnityEngine_GameObject_GetComponentsInChildren_MeshRenderer____75559672;
      goto LABEL_13;
    case 2:
      if ( !gameObject )
        goto LABEL_14;
      v11 = &Method_UnityEngine_GameObject_GetComponentsInChildren_SkinnedMeshRenderer____75559728;
      goto LABEL_13;
    case 3:
      if ( !gameObject )
LABEL_14:
        sub_1B4D1EC(this, gameObject);
      v11 = &Method_UnityEngine_GameObject_GetComponentsInChildren_ParticleSystemRenderer____75559704;
LABEL_13:
      result = (UnityEngine_Renderer_array *)UnityEngine_GameObject__GetComponentsInChildren_object_(
                                               gameObject,
                                               includeInactive,
                                               (const MethodInfo_2F540E4 *)*v11);
      break;
    default:
      result = 0LL;
      break;
  }
  return result;
}


System_Collections_Generic_List_Material__o *__fastcall BattleEffectReplaceShaderTexture__getTargetMaterials(
        BattleEffectReplaceShaderTexture_o *this,
        UnityEngine_Renderer_o *renderer,
        System_String_o *targetShaderName,
        bool targetShaderAll,
        const MethodInfo *method)
{
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  System_Collections_Generic_List_object__o *v12; // x21
  UnityEngine_Object_o *materials; // x0
  __int64 v14; // x1
  UnityEngine_Object_c *klass; // x8
  UnityEngine_Object_o *v16; // x22
  unsigned __int64 i; // x25
  UnityEngine_Object_o *v18; // x23
  UnityEngine_Object_o *shader; // x24
  System_String_o *name; // x0
  int32_t v21; // w2
  const MethodInfo *v22; // x3
  struct System_Object_array *items; // x8
  _QWORD *v24; // x9
  __int64 size; // x10
  Il2CppClass **v26; // x0

  if ( (byte_49BDEB6 & 1) == 0 )
  {
    sub_1B4CF90(&Method_System_Collections_Generic_List_Material__Add__, renderer);
    sub_1B4CF90(&Method_System_Collections_Generic_List_Material__Contains__, v8);
    sub_1B4CF90(&Method_System_Collections_Generic_List_Material___ctor__, v9);
    sub_1B4CF90(&System_Collections_Generic_List_Material__TypeInfo, v10);
    sub_1B4CF90(&UnityEngine_Object_TypeInfo, v11);
    byte_49BDEB6 = 1;
  }
  v12 = (System_Collections_Generic_List_object__o *)sub_1B4D1DC(System_Collections_Generic_List_Material__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v12,
    (const MethodInfo_357F9A8 *)Method_System_Collections_Generic_List_Material___ctor__);
  if ( !renderer || (materials = (UnityEngine_Object_o *)UnityEngine_Renderer__get_materials(renderer, 0LL)) == 0LL )
LABEL_27:
    sub_1B4D1EC(materials, v14);
  klass = materials[1].klass;
  v16 = materials;
  if ( (int)klass >= 1 )
  {
    for ( i = 0LL; (__int64)i < (int)klass; ++i )
    {
      if ( i >= (unsigned int)klass )
        sub_1B4D1F4(materials, v14);
      v18 = (UnityEngine_Object_o *)*((_QWORD *)&v16[1].monitor + i);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      materials = (UnityEngine_Object_o *)UnityEngine_Object__op_Inequality(v18, 0LL, 0LL);
      if ( ((unsigned __int8)materials & 1) != 0 )
        goto LABEL_31;
      if ( !v18 )
        goto LABEL_27;
      shader = (UnityEngine_Object_o *)UnityEngine_Material__get_shader((UnityEngine_Material_o *)v18, 0LL);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      materials = (UnityEngine_Object_o *)UnityEngine_Object__op_Inequality(shader, 0LL, 0LL);
      if ( ((unsigned __int8)materials & 1) != 0 )
      {
LABEL_31:
        if ( targetShaderAll )
          goto LABEL_19;
        if ( !v18 )
          goto LABEL_27;
        materials = (UnityEngine_Object_o *)UnityEngine_Material__get_shader((UnityEngine_Material_o *)v18, 0LL);
        if ( !materials )
          goto LABEL_27;
        name = UnityEngine_Object__get_name(materials, 0LL);
        materials = (UnityEngine_Object_o *)System_String__op_Equality(name, targetShaderName, 0LL);
        if ( ((unsigned __int8)materials & 1) != 0 )
        {
LABEL_19:
          if ( !v12 )
            goto LABEL_27;
          materials = (UnityEngine_Object_o *)System_Collections_Generic_List_object___Contains(
                                                v12,
                                                (Il2CppObject *)v18,
                                                (const MethodInfo_358056C *)Method_System_Collections_Generic_List_Material__Contains__);
          if ( ((unsigned __int8)materials & 1) == 0 )
          {
            items = v12->fields._items;
            v24 = Method_System_Collections_Generic_List_Material__Add__;
            ++v12->fields._version;
            if ( !items )
              goto LABEL_27;
            size = v12->fields._size;
            if ( (unsigned int)size >= items->max_length )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v12,
                (Il2CppObject *)v18,
                *(const MethodInfo_35801DC **)(*(_QWORD *)(v24[4] + 192LL) + 112LL));
            }
            else
            {
              v26 = &items->obj.klass + size;
              v12->fields._size = size + 1;
              v26[4] = (Il2CppClass *)v18;
              sub_1B4CF34((CGThumbnailListItem_o *)(v26 + 4), (int32_t)v18, v21, v22);
            }
          }
        }
      }
      LODWORD(klass) = v16[1].klass;
    }
  }
  return (System_Collections_Generic_List_Material__o *)v12;
}


// local variable allocation has failed, the output may be wrong!
UnityEngine_Renderer_array *__fastcall BattleEffectReplaceShaderTexture__getTargetRenderers(
        BattleEffectReplaceShaderTexture_o *this,
        UnityEngine_GameObject_o *targetObject,
        int32_t rendererType,
        bool targetsInChildren,
        bool includeInactive,
        const MethodInfo *method)
{
  __int64 v10; // x1
  UnityEngine_Object_o *Renderer; // x19
  __int64 v13; // x20
  __int64 v14; // x0
  __int64 v15; // x1
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  __int64 v18; // x0

  if ( (byte_49BDEB3 & 1) == 0 )
  {
    sub_1B4CF90(&UnityEngine_Object_TypeInfo, targetObject);
    this = (BattleEffectReplaceShaderTexture_o *)sub_1B4CF90(&UnityEngine_Renderer___TypeInfo, v10);
    byte_49BDEB3 = 1;
  }
  if ( targetsInChildren )
    return BattleEffectReplaceShaderTexture__getRenderersInChildren(
             this,
             targetObject,
             rendererType,
             includeInactive,
             (const MethodInfo *)includeInactive);
  Renderer = (UnityEngine_Object_o *)BattleEffectReplaceShaderTexture__getRenderer(
                                       this,
                                       targetObject,
                                       rendererType,
                                       (const MethodInfo *)targetsInChildren);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v13 = 0LL;
  if ( UnityEngine_Object__op_Inequality(Renderer, 0LL, 0LL) )
  {
    v14 = sub_1B4D038(UnityEngine_Renderer___TypeInfo, 1LL);
    if ( !v14 )
      sub_1B4D1EC(0LL, v15);
    v13 = v14;
    if ( Renderer )
    {
      v14 = sub_1B4D0CC(Renderer, *(_QWORD *)(*(_QWORD *)v14 + 64LL));
      if ( !v14 )
      {
        v18 = sub_1B4D210(0LL);
        sub_1B4D0B8(v18, 0LL);
      }
    }
    if ( !*(_DWORD *)(v13 + 24) )
      sub_1B4D1F4(v14, v15);
    *(_QWORD *)(v13 + 32) = Renderer;
    sub_1B4CF34((CGThumbnailListItem_o *)(v13 + 32), (int32_t)Renderer, v16, v17);
  }
  return (UnityEngine_Renderer_array *)v13;
}


UnityEngine_Shader_o *__fastcall BattleEffectReplaceShaderTexture__loadShader(
        BattleEffectReplaceShaderTexture_o *this,
        System_String_o *shaderName,
        System_Collections_Generic_Dictionary_string__Shader__o **shaderCaches,
        const MethodInfo *method)
{
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  System_Collections_Generic_Dictionary_string__Shader__o *v9; // x0
  UnityEngine_Shader_o *result; // x0
  UnityEngine_Object_o *v11; // x21
  bool v12; // w8

  if ( (byte_49BDEB1 & 1) == 0 )
  {
    sub_1B4CF90(&Method_System_Collections_Generic_Dictionary_string__Shader__ContainsKey__, shaderName);
    sub_1B4CF90(&Method_System_Collections_Generic_Dictionary_string__Shader__get_Item__, v6);
    sub_1B4CF90(&Method_System_Collections_Generic_Dictionary_string__Shader__set_Item__, v7);
    sub_1B4CF90(&UnityEngine_Object_TypeInfo, v8);
    byte_49BDEB1 = 1;
  }
  v9 = *shaderCaches;
  if ( !*shaderCaches )
    goto LABEL_13;
  if ( System_Collections_Generic_Dictionary_object__object___ContainsKey(
         (System_Collections_Generic_Dictionary_object__object__o *)v9,
         (Il2CppObject *)shaderName,
         (const MethodInfo_3257D0C *)Method_System_Collections_Generic_Dictionary_string__Shader__ContainsKey__) )
  {
    v9 = *shaderCaches;
    if ( *shaderCaches )
      return (UnityEngine_Shader_o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                       (System_Collections_Generic_Dictionary_object__object__o *)v9,
                                       (Il2CppObject *)shaderName,
                                       (const MethodInfo_3257A98 *)Method_System_Collections_Generic_Dictionary_string__Shader__get_Item__);
LABEL_13:
    sub_1B4D1EC(v9, shaderName);
  }
  v11 = (UnityEngine_Object_o *)UnityEngine_Shader__Find(shaderName, 0LL);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v12 = UnityEngine_Object__op_Inequality(v11, 0LL, 0LL);
  result = 0LL;
  if ( v12 )
  {
    v9 = *shaderCaches;
    if ( !*shaderCaches )
      goto LABEL_13;
    System_Collections_Generic_Dictionary_object__object___set_Item(
      (System_Collections_Generic_Dictionary_object__object__o *)v9,
      (Il2CppObject *)shaderName,
      (Il2CppObject *)v11,
      (const MethodInfo_3257B04 *)Method_System_Collections_Generic_Dictionary_string__Shader__set_Item__);
    return (UnityEngine_Shader_o *)v11;
  }
  return result;
}


void __fastcall BattleEffectReplaceShaderTexture__setupChocoShader(
        BattleEffectReplaceShaderTexture_o *this,
        UnityEngine_Material_o *material,
        UnityEngine_Shader_o *chocoShader,
        UnityEngine_Texture2D_o *chocoTexture,
        const MethodInfo *method)
{
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  float r; // s8
  float g; // s9
  float b; // s10
  float a; // s11
  float v16; // s12
  float v17; // s13
  float v18; // s14
  float v19; // s15
  UnityEngine_Color_o Color; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v21; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v22; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v23; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_49BDEB7 & 1) == 0 )
  {
    sub_1B4CF90(&UnityEngine_Object_TypeInfo, material);
    sub_1B4CF90(&StringLiteral_15869/*"_Color"*/, v8);
    sub_1B4CF90(&StringLiteral_15850/*"_ChocoTex"*/, v9);
    sub_1B4CF90(&StringLiteral_16085/*"_Use_alphawidth"*/, v10);
    this = (BattleEffectReplaceShaderTexture_o *)sub_1B4CF90(&StringLiteral_15825/*"_AddColor"*/, v11);
    byte_49BDEB7 = 1;
  }
  if ( !material )
    sub_1B4D1EC(this, material);
  if ( UnityEngine_Material__HasProperty_68670640(material, (System_String_o *)StringLiteral_15869/*"_Color"*/, 0LL) )
  {
    Color = UnityEngine_Material__GetColor(material, (System_String_o *)StringLiteral_15869/*"_Color"*/, 0LL);
    r = Color.fields.r;
    g = Color.fields.g;
    b = Color.fields.b;
    a = Color.fields.a;
  }
  else
  {
    r = 1.0;
    g = 1.0;
    b = 1.0;
    a = 1.0;
  }
  v16 = 0.0;
  v17 = 0.0;
  v18 = 0.0;
  v19 = 0.0;
  if ( UnityEngine_Material__HasProperty_68670640(material, (System_String_o *)StringLiteral_15825/*"_AddColor"*/, 0LL) )
  {
    v21 = UnityEngine_Material__GetColor(material, (System_String_o *)StringLiteral_15825/*"_AddColor"*/, 0LL);
    v16 = v21.fields.r;
    v17 = v21.fields.g;
    v18 = v21.fields.b;
    v19 = v21.fields.a;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)chocoShader, 0LL, 0LL) )
    UnityEngine_Material__set_shader(material, chocoShader, 0LL);
  v22.fields.r = r;
  v22.fields.g = g;
  v22.fields.b = b;
  v22.fields.a = a;
  UnityEngine_Material__SetColor(material, (System_String_o *)StringLiteral_15869/*"_Color"*/, v22, 0LL);
  v23.fields.r = v16;
  v23.fields.g = v17;
  v23.fields.b = v18;
  v23.fields.a = v19;
  UnityEngine_Material__SetColor(material, (System_String_o *)StringLiteral_15825/*"_AddColor"*/, v23, 0LL);
  UnityEngine_Material__SetTexture(
    material,
    (System_String_o *)StringLiteral_15850/*"_ChocoTex"*/,
    (UnityEngine_Texture_o *)chocoTexture,
    0LL);
  if ( UnityEngine_Material__HasProperty_68670640(material, (System_String_o *)StringLiteral_16085/*"_Use_alphawidth"*/, 0LL) )
    UnityEngine_Material__SetFloat(material, (System_String_o *)StringLiteral_16085/*"_Use_alphawidth"*/, 1.0, 0LL);
}


void __fastcall BattleEffectReplaceShaderTexture__updateShaderValues(
        BattleEffectReplaceShaderTexture_o *this,
        UnityEngine_Material_o *material,
        System_Collections_Generic_List_BattleEffectReplaceShaderTexture_ShaderFloatValue__o *replaceShaderFloatValues,
        System_Collections_Generic_List_BattleEffectReplaceShaderTexture_ShaderColorValue__o *replaceShaderColorValues,
        System_Collections_Generic_List_BattleEffectReplaceShaderTexture_ShaderTextureValue__o *replaceShaderTextureValues,
        const MethodInfo *method)
{
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  _BOOL8 v21; // x0
  __int64 v22; // x1
  Il2CppObject *current; // x22
  _BOOL8 v24; // x0
  __int64 v25; // x1
  Il2CppObject *v26; // x21
  _BOOL8 v27; // x0
  __int64 v28; // x1
  Il2CppObject *v29; // x20
  System_Collections_Generic_List_Enumerator_object__o v30; // [xsp+0h] [xbp-D0h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v31; // [xsp+18h] [xbp-B8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v32; // [xsp+30h] [xbp-A0h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v33; // [xsp+50h] [xbp-80h] BYREF

  if ( (byte_49BDEB9 & 1) == 0 )
  {
    sub_1B4CF90(
      &Method_System_Collections_Generic_List_Enumerator_BattleEffectReplaceShaderTexture_ShaderFloatValue__Dispose__,
      material);
    sub_1B4CF90(
      &Method_System_Collections_Generic_List_Enumerator_BattleEffectReplaceShaderTexture_ShaderTextureValue__Dispose__,
      v10);
    sub_1B4CF90(
      &Method_System_Collections_Generic_List_Enumerator_BattleEffectReplaceShaderTexture_ShaderColorValue__Dispose__,
      v11);
    sub_1B4CF90(
      &Method_System_Collections_Generic_List_Enumerator_BattleEffectReplaceShaderTexture_ShaderColorValue__MoveNext__,
      v12);
    sub_1B4CF90(
      &Method_System_Collections_Generic_List_Enumerator_BattleEffectReplaceShaderTexture_ShaderFloatValue__MoveNext__,
      v13);
    sub_1B4CF90(
      &Method_System_Collections_Generic_List_Enumerator_BattleEffectReplaceShaderTexture_ShaderTextureValue__MoveNext__,
      v14);
    sub_1B4CF90(
      &Method_System_Collections_Generic_List_Enumerator_BattleEffectReplaceShaderTexture_ShaderTextureValue__get_Current__,
      v15);
    sub_1B4CF90(
      &Method_System_Collections_Generic_List_Enumerator_BattleEffectReplaceShaderTexture_ShaderFloatValue__get_Current__,
      v16);
    sub_1B4CF90(
      &Method_System_Collections_Generic_List_Enumerator_BattleEffectReplaceShaderTexture_ShaderColorValue__get_Current__,
      v17);
    sub_1B4CF90(
      &Method_System_Collections_Generic_List_BattleEffectReplaceShaderTexture_ShaderTextureValue__GetEnumerator__,
      v18);
    sub_1B4CF90(
      &Method_System_Collections_Generic_List_BattleEffectReplaceShaderTexture_ShaderFloatValue__GetEnumerator__,
      v19);
    this = (BattleEffectReplaceShaderTexture_o *)sub_1B4CF90(
                                                   &Method_System_Collections_Generic_List_BattleEffectReplaceShaderTexture_ShaderColorValue__GetEnumerator__,
                                                   v20);
    byte_49BDEB9 = 1;
  }
  memset(&v33, 0, sizeof(v33));
  memset(&v32, 0, sizeof(v32));
  memset(&v31, 0, sizeof(v31));
  if ( !replaceShaderFloatValues )
    goto LABEL_31;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v30,
    (System_Collections_Generic_List_object__o *)replaceShaderFloatValues,
    (const MethodInfo_3580CD4 *)Method_System_Collections_Generic_List_BattleEffectReplaceShaderTexture_ShaderFloatValue__GetEnumerator__);
  v33 = v30;
  while ( 1 )
  {
    v21 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v33,
            (const MethodInfo_3308B3C *)Method_System_Collections_Generic_List_Enumerator_BattleEffectReplaceShaderTexture_ShaderFloatValue__MoveNext__);
    if ( !v21 )
      break;
    current = v33.fields._current;
    if ( !v33.fields._current )
      sub_1B4D1EC(v21, v22);
    if ( !material )
      sub_1B4D1EC(v21, v22);
    if ( UnityEngine_Material__HasProperty_68670640(material, (System_String_o *)v33.fields._current[1].klass, 0LL) )
      UnityEngine_Material__SetFloat(material, (System_String_o *)current[1].klass, *(float *)&current[1].monitor, 0LL);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v33,
    (const MethodInfo_3308B38 *)Method_System_Collections_Generic_List_Enumerator_BattleEffectReplaceShaderTexture_ShaderFloatValue__Dispose__);
  if ( !replaceShaderColorValues )
    goto LABEL_31;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v30,
    (System_Collections_Generic_List_object__o *)replaceShaderColorValues,
    (const MethodInfo_3580CD4 *)Method_System_Collections_Generic_List_BattleEffectReplaceShaderTexture_ShaderColorValue__GetEnumerator__);
  v32 = v30;
  while ( 1 )
  {
    v24 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v32,
            (const MethodInfo_3308B3C *)Method_System_Collections_Generic_List_Enumerator_BattleEffectReplaceShaderTexture_ShaderColorValue__MoveNext__);
    if ( !v24 )
      break;
    v26 = v32.fields._current;
    if ( !v32.fields._current )
      sub_1B4D1EC(v24, v25);
    if ( !material )
      sub_1B4D1EC(v24, v25);
    if ( UnityEngine_Material__HasProperty_68670640(material, (System_String_o *)v32.fields._current[1].klass, 0LL) )
      UnityEngine_Material__SetColor(
        material,
        (System_String_o *)v26[1].klass,
        *(UnityEngine_Color_o *)&v26[1].monitor,
        0LL);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v32,
    (const MethodInfo_3308B38 *)Method_System_Collections_Generic_List_Enumerator_BattleEffectReplaceShaderTexture_ShaderColorValue__Dispose__);
  if ( !replaceShaderTextureValues )
LABEL_31:
    sub_1B4D1EC(this, material);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v31,
    (System_Collections_Generic_List_object__o *)replaceShaderTextureValues,
    (const MethodInfo_3580CD4 *)Method_System_Collections_Generic_List_BattleEffectReplaceShaderTexture_ShaderTextureValue__GetEnumerator__);
  while ( 1 )
  {
    v27 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v31,
            (const MethodInfo_3308B3C *)Method_System_Collections_Generic_List_Enumerator_BattleEffectReplaceShaderTexture_ShaderTextureValue__MoveNext__);
    if ( !v27 )
      break;
    v29 = v31.fields._current;
    if ( !v31.fields._current )
      sub_1B4D1EC(v27, v28);
    if ( !material )
      sub_1B4D1EC(v27, v28);
    if ( UnityEngine_Material__HasProperty_68670640(material, (System_String_o *)v31.fields._current[1].klass, 0LL) )
      UnityEngine_Material__SetTexture(
        material,
        (System_String_o *)v29[1].klass,
        (UnityEngine_Texture_o *)v29[1].monitor,
        0LL);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v31,
    (const MethodInfo_3308B38 *)Method_System_Collections_Generic_List_Enumerator_BattleEffectReplaceShaderTexture_ShaderTextureValue__Dispose__);
}


void __fastcall BattleEffectReplaceShaderTexture_ReplaceObject___ctor(
        BattleEffectReplaceShaderTexture_ReplaceObject_o *this,
        const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  int32_t v5; // w1

  if ( (byte_49BDEBB & 1) == 0 )
  {
    sub_1B4CF90(&StringLiteral_17037/*"body_level"*/, method);
    byte_49BDEBB = 1;
  }
  this->fields.useUniqueId = 1;
  this->fields.isCheckUniqueId = 1;
  v5 = StringLiteral_17037/*"body_level"*/;
  this->fields.searchMeshWord = (struct System_String_o *)StringLiteral_17037/*"body_level"*/;
  sub_1B4CF34((CGThumbnailListItem_o *)&this->fields.searchMeshWord, v5, v2, v3);
  this->fields.targetShaderAll = 1;
  *(_WORD *)&this->fields.targetsInChildren = 257;
  *(_WORD *)&this->fields.useAutoReplaceShader = 257;
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


UnityEngine_Transform_array *__fastcall BattleEffectReplaceShaderTexture_ReplaceObject__get_ShadowAuraNodeTransformArray(
        BattleEffectReplaceShaderTexture_ReplaceObject_o *this,
        const MethodInfo *method)
{
  return this->fields.shadowAuraNodeTransformArray;
}


void __fastcall BattleEffectReplaceShaderTexture_ShaderColorValue___ctor(
        BattleEffectReplaceShaderTexture_ShaderColorValue_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall BattleEffectReplaceShaderTexture_ShaderFloatValue___ctor(
        BattleEffectReplaceShaderTexture_ShaderFloatValue_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall BattleEffectReplaceShaderTexture_ShaderTextureValue___ctor(
        BattleEffectReplaceShaderTexture_ShaderTextureValue_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}