void ExUIGrid___ctor(ExUIGrid_o *this, const MethodInfo *method)
{
  UIGrid___ctor((UIGrid_o *)this, 0);
}


void ExUIGrid__ResetPosition(
        ExUIGrid_o *this,
        System_Collections_Generic_List_Transform__o *list,
        const MethodInfo *method)
{
  __int64 IsNullOrEmpty; // x0
  __int64 v6; // x1
  int32_t maxPerLine; // w8
  float v8; // s9
  float size; // s8
  float v10; // s8
  unsigned int v11; // w9
  int v12; // w25
  UnityEngine_Vector2_o PivotOffset; // kr00_8
  int v14; // w26
  float x; // s1
  float v16; // s2
  int32_t v17; // w8
  int v18; // w2
  System_Collections_Generic_List_object__o *v19; // x22
  struct UnityEngine_Vector3_StaticFields *static_fields; // x9
  float z; // s12
  int v22; // w8
  float y; // s15
  float v24; // s0
  float v25; // s14
  float v26; // s13
  int32_t v27; // w23
  UnityEngine_Component_o *v28; // x24
  __int64 v29; // x1
  float v30; // s9
  float v31; // s10
  int32_t arrangement; // w8
  float v33; // s8
  float cellWidth; // s11
  float v35; // s9
  double v36; // d0
  float v37; // s1
  __int64 v38; // x8
  float v39; // s0
  float v40; // s0
  float cellHeight; // s11
  float v42; // s10
  double v43; // d0
  float v44; // s1
  __int64 v45; // x8
  float v46; // s0
  float v47; // s0
  float v48; // s8
  UnityEngine_GameObject_o *gameObject; // x0
  float v50; // [xsp+10h] [xbp-B0h]
  double iptr; // [xsp+18h] [xbp-A8h] BYREF
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v53; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v54; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_5971FC2 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Application_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_Transform__GetRange__);
    sub_2213A60(&Method_System_Collections_Generic_List_Transform__get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_List_Transform__get_Item__);
    byte_5971FC2 = 1;
  }
  IsNullOrEmpty = BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)list, 0);
  if ( (IsNullOrEmpty & 1) == 0 )
  {
    maxPerLine = this->fields.maxPerLine;
    if ( maxPerLine <= 0 )
    {
      UIGrid__ResetPosition((UIGrid_o *)this, list, 0);
    }
    else
    {
      this->fields.mReposition = 0;
      if ( !list )
LABEL_75:
        sub_2213CDC(IsNullOrEmpty, v6);
      v8 = (float)maxPerLine;
      size = (float)list->fields._size;
      if ( !byte_596A15B )
      {
        sub_2213A60(&System_Math_TypeInfo);
        byte_596A15B = 1;
      }
      v10 = size / v8;
      if ( !*(&System_Math_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, v6);
      v11 = vcvtps_s32_f32(v10);
      if ( ceilf(v10) == INFINITY )
        v12 = 0x80000000;
      else
        v12 = v11;
      PivotOffset = NGUIMath__GetPivotOffset(this->fields.pivot, 0);
      if ( v12 >= 1 )
      {
        v14 = 0;
        if ( PivotOffset.fields.x <= 1.0 )
          x = PivotOffset.fields.x;
        else
          x = 1.0;
        if ( PivotOffset.fields.x >= 0.0 )
          v16 = x;
        else
          v16 = 0.0;
        v50 = v16;
        while ( 1 )
        {
          v17 = this->fields.maxPerLine;
          if ( list->fields._size - v17 * v14 >= v17 )
            v18 = this->fields.maxPerLine;
          else
            v18 = list->fields._size - v17 * v14;
          IsNullOrEmpty = (__int64)System_Collections_Generic_List_object___GetRange(
                                     (System_Collections_Generic_List_object__o *)list,
                                     v17 * v14,
                                     v18,
                                     (const MethodInfo_4484814 *)Method_System_Collections_Generic_List_Transform__GetRange__);
          v19 = (System_Collections_Generic_List_object__o *)IsNullOrEmpty;
          if ( !byte_5969AE0 )
          {
            IsNullOrEmpty = sub_2213A60(&UnityEngine_Vector3_TypeInfo);
            byte_5969AE0 = 1;
          }
          static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
          z = static_fields->zeroVector.fields.z;
          if ( this->fields.arrangement )
          {
            if ( !v19 )
              goto LABEL_75;
            v22 = v19->fields._size;
            y = static_fields->zeroVector.fields.y;
            v24 = this->fields.cellHeight * (float)(1 - v22);
            v25 = v24 + (float)(PivotOffset.fields.y * (float)(0.0 - v24));
          }
          else
          {
            if ( !v19 )
              goto LABEL_75;
            v22 = v19->fields._size;
            v25 = (float)(v50 * (float)(this->fields.cellWidth * (float)(v22 - 1))) + 0.0;
            y = (float)(this->fields.cellHeight * (float)(1 - v12))
              + (float)(PivotOffset.fields.y * (float)(0.0 - (float)(this->fields.cellHeight * (float)(1 - v12))));
          }
          if ( v22 >= 1 )
            break;
LABEL_72:
          if ( ++v14 == v12 )
            return;
        }
        v26 = (float)v14;
        v27 = 0;
        while ( 1 )
        {
          IsNullOrEmpty = (__int64)System_Collections_Generic_List_object___get_Item(
                                     v19,
                                     v27,
                                     (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_Transform__get_Item__);
          if ( !IsNullOrEmpty )
            goto LABEL_75;
          v28 = (UnityEngine_Component_o *)IsNullOrEmpty;
          localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)IsNullOrEmpty, 0);
          v30 = localPosition.fields.x;
          v31 = localPosition.fields.y;
          arrangement = this->fields.arrangement;
          v33 = localPosition.fields.z;
          if ( arrangement != 2 )
          {
            if ( arrangement == 1 )
            {
              v30 = this->fields.cellWidth * v26;
              v31 = -(float)(this->fields.cellHeight * (float)v27);
            }
            else if ( !arrangement )
            {
              v31 = -(float)(this->fields.cellHeight * v26);
              v30 = this->fields.cellWidth * (float)v27;
            }
            goto LABEL_63;
          }
          cellWidth = this->fields.cellWidth;
          if ( cellWidth > 0.0 )
            break;
LABEL_51:
          cellHeight = this->fields.cellHeight;
          if ( cellHeight <= 0.0 )
            goto LABEL_63;
          v42 = v31 / cellHeight;
          v43 = modf(v42, &iptr);
          if ( v42 >= 0.0 )
          {
            if ( v43 == 0.5 )
            {
              v44 = iptr;
              v45 = (__int64)iptr;
              v46 = 1.0;
LABEL_57:
              v47 = v44 + v46;
              if ( (v45 & 1) == 0 )
                v47 = v44;
              goto LABEL_62;
            }
            v47 = floorf(v42 + 0.5);
          }
          else
          {
            if ( v43 == -0.5 )
            {
              v44 = iptr;
              v45 = (__int64)iptr;
              v46 = -1.0;
              goto LABEL_57;
            }
            v47 = ceilf(v42 + -0.5);
          }
LABEL_62:
          v31 = cellHeight * v47;
LABEL_63:
          v48 = v33 - z;
          if ( !this->fields.animateSmoothly )
            goto LABEL_69;
          if ( !*(&UnityEngine_Application_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(UnityEngine_Application_TypeInfo, v29);
          if ( UnityEngine_Application__get_isPlaying(0) )
          {
            gameObject = UnityEngine_Component__get_gameObject(v28, 0);
            v53.fields.x = v30 - v25;
            v53.fields.y = v31 - y;
            v53.fields.z = v48;
            IsNullOrEmpty = (__int64)SpringPosition__Begin(gameObject, v53, 15.0, 0);
            if ( !IsNullOrEmpty )
              goto LABEL_75;
            *(_WORD *)(IsNullOrEmpty + 49) = 257;
          }
          else
          {
LABEL_69:
            IsNullOrEmpty = (__int64)UnityEngine_Component__get_transform(v28, 0);
            if ( !IsNullOrEmpty )
              goto LABEL_75;
            v54.fields.x = v30 - v25;
            v54.fields.y = v31 - y;
            v54.fields.z = v48;
            UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)IsNullOrEmpty, v54, 0);
          }
          if ( ++v27 >= v19->fields._size )
            goto LABEL_72;
        }
        v35 = localPosition.fields.x / cellWidth;
        v36 = modf((float)(localPosition.fields.x / cellWidth), &iptr);
        if ( v35 >= 0.0 )
        {
          if ( v36 == 0.5 )
          {
            v37 = iptr;
            v38 = (__int64)iptr;
            v39 = 1.0;
LABEL_45:
            v40 = v37 + v39;
            if ( (v38 & 1) == 0 )
              v40 = v37;
            goto LABEL_50;
          }
          v40 = floorf(v35 + 0.5);
        }
        else
        {
          if ( v36 == -0.5 )
          {
            v37 = iptr;
            v38 = (__int64)iptr;
            v39 = -1.0;
            goto LABEL_45;
          }
          v40 = ceilf(v35 + -0.5);
        }
LABEL_50:
        v30 = cellWidth * v40;
        goto LABEL_51;
      }
    }
  }
}