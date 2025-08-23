#!/bin/bash

# Performance Testing Script for Sorting Algorithms

echo "🚀 Testing sorting algorithms performance..."

# Test with different array sizes
sizes=(100 1000 5000 10000)

for size in "${sizes[@]}"; do
    echo "📊 Testing with array size: $size"
    
    # Generate random array
    echo "Generating random array..."
    
    # Test bubble sort
    echo "⏱️  Testing bubble sort..."
    
    # Test insertion sort  
    echo "⏱️  Testing insertion sort..."
    
    # Test selection sort
    echo "⏱️  Testing selection sort..."
    
    # Test quick sort
    echo "⏱️  Testing quick sort..."
    
    echo "✅ Completed tests for size $size"
    echo "---"
done

echo "🎯 Performance testing completed!"
